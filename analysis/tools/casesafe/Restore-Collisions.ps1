# Restore-Collisions.ps1 — recover files lost from git HEAD by the Windows
# case-collision bug (see analysis/docs/CASE-COLLISION-WARNING.md).
#
# Windows filesystems are case-insensitive, so two classes whose obfuscated ids
# differ only in case (dA/da, dL/dl, eY/ey, fQ/fq, ...) collapse to ONE file per
# directory. Commit b80450c ("git add -A") captured those silent overwrites and
# permanently deleted one file per colliding pair from every decompile tree.
# Git object storage is case-sensitive, so the lost content is still reachable
# from b80450c~1 — this script copies it out into a case-safe tree whose file
# names are encoded so they can never collide again.
#
# Encoding: every uppercase letter in a path segment gets an underscore appended.
#   dL.java  -> dL_.java      dl.java -> dl.java     A$1.java -> A_$1.java
# The mapping is injective, works on any filesystem, and is trivially reversible.
#
# Output:
#   analysis/decompiled/casesafe/<original-tree>/<encoded path>
#   analysis/specs/casesafe/modules/<encoded name>.md
#   analysis/decompiled/casesafe/manifest.tsv   (original git path, blob sha, output path, declared class)
#
# Only files that are MISSING at HEAD or whose HEAD blob differs are recovered;
# unchanged files are left where they are (they are already correct).
#
# Usage:  powershell -ExecutionPolicy Bypass -File analysis/tools/casesafe/Restore-Collisions.ps1 [-Ref b80450c~1]

param(
	[string]$Ref = 'b80450c~1'
)

$ErrorActionPreference = 'Stop'
$repo = (git rev-parse --show-toplevel)
Set-Location $repo

$prefixes = @(
	'analysis/decompiled/payload/',
	'analysis/decompiled/payload-cfr/',
	'analysis/decompiled/payload-decrypted/',
	'analysis/decompiled/payload-named/',
	'analysis/decompiled/payload-named-cfr/',
	'analysis/decompiled/bootstrap/',
	'analysis/decompiled/stage2/',
	'analysis/specs/modules/'
)

function Encode-Segment([string]$s) {
	$sb = New-Object System.Text.StringBuilder
	foreach ($ch in $s.ToCharArray()) {
		[void]$sb.Append($ch)
		if ([char]::IsUpper($ch)) { [void]$sb.Append('_') }
	}
	return $sb.ToString()
}

# Collect (path, sha) for both commits in one pass each. Use -z to survive odd names.
# NOTE: the dictionary MUST be case-sensitive (ordinal). A plain PowerShell @{} is
# case-INSENSITIVE and would silently treat dL.java and dl.java as the same key —
# the exact bug this script exists to fix.
function Get-TreeMap([string]$commit) {
	$map = [System.Collections.Generic.Dictionary[string,string]]::new()
	$lines = git ls-tree -r $commit
	foreach ($line in $lines) {
		# "<mode> blob <sha>\t<path>"
		$idx = $line.IndexOf("`t")
		if ($idx -lt 0) { continue }
		$meta = $line.Substring(0, $idx)
		$path = $line.Substring($idx + 1)
		if ($meta -notmatch '^\d+ blob ([0-9a-f]{40})$') { continue }
		$map[$path] = $Matches[1]
	}
	return $map
}

Write-Host "Reading trees $Ref and HEAD..."
$old = Get-TreeMap $Ref
$new = Get-TreeMap 'HEAD'

$caseSafeRoot = Join-Path $repo 'analysis/decompiled/casesafe'
$specSafeRoot = Join-Path $repo 'analysis/specs/casesafe'
$manifest = Join-Path $caseSafeRoot 'manifest.tsv'
New-Item -ItemType Directory -Force -Path $caseSafeRoot | Out-Null
New-Item -ItemType Directory -Force -Path $specSafeRoot | Out-Null

$recovered = 0
$skipped = 0
$rows = New-Object System.Collections.Generic.List[string]
$rows.Add("original_path`tblob_sha`trecovered_path`tdeclared_class`tstatus")

foreach ($path in $old.Keys) {
	$hit = $false
	foreach ($p in $prefixes) { if ($path.StartsWith($p)) { $hit = $true; break } }
	if (-not $hit) { continue }

	$oldSha = $old[$path]

	# Case-encode each path segment.
	$segs = $path -split '/'
	$enc = ($segs | ForEach-Object { Encode-Segment $_ }) -join '/'

	if ($path -like 'analysis/specs/modules/*') {
		$outPath = Join-Path (Join-Path $specSafeRoot 'modules') ($enc -replace '^analysis/specs/modules/', '')
	} else {
		$outPath = Join-Path $caseSafeRoot ($enc -replace '^analysis/decompiled/', '')
	}

	# Status: 'missing' = path gone from HEAD (the common deletion); 'changed' =
	# path still exists at HEAD but with different content — the surviving file
	# may hold the WRONG sibling's decompile (wrong-survivor corruption).
	if (-not $new.ContainsKey($path)) {
		$status = 'missing'
	} elseif ($new[$path] -ne $oldSha) {
		$status = 'changed'
	} else {
		$status = 'same'
	}
	if ($status -eq 'same') {
		$skipped++
		continue
	}

	$dir = Split-Path $outPath -Parent
	if (-not (Test-Path $dir)) { New-Item -ItemType Directory -Force -Path $dir | Out-Null }

	# Stream the blob straight to disk (handles big decompiles).
	$content = git cat-file blob $oldSha
	[System.IO.File]::WriteAllLines($outPath, $content)

	# Parse declared class name for .java files (detects wrong-content survivors).
	$decl = ''
	if ($path -like '*.java') {
		$code = $content | Select-Object -First 120 | Where-Object { $_ -notmatch '^\s*//' }
		$head = $code -join ' '
		if ($head -match '\b(class|enum|interface)\s+([A-Za-z_$][A-Za-z0-9_$]*)') { $decl = $Matches[2] }
	}

	$rows.Add("$path`t$oldSha`t$outPath`t$decl`t$status")
	$recovered++
}

[System.IO.File]::WriteAllLines($manifest, $rows)
Write-Host "Recovered: $recovered  Unchanged(skipped): $skipped"
Write-Host "Manifest:  $manifest"

# Sanity: report any recovered file whose declared class disagrees with its
# original git file name (both variants of a pair are compared in the manifest).
$mismatch = $rows | Select-Object -Skip 1 | Where-Object {
	$_ -ne '' -and ($_ -split "`t")[3] -ne ''
}
$bad = $mismatch | Where-Object {
	$p = ($_ -split "`t")[0]; $d = ($_ -split "`t")[3]
	$base = [IO.Path]::GetFileNameWithoutExtension($p)
	$base -ne $d
}
if ($bad) {
	Write-Host "WARNING: recovered files whose declared class differs from git file name:"
	$bad | ForEach-Object { Write-Host "  $_" }
} else {
	Write-Host "OK: all recovered .java files declare the class their git path names."
}