# Restore-Collisions-Corpus.ps1 — round-2 companion to Restore-Collisions.ps1.
#
# Recovers the case-collision losses that the Windows `git add -A` commit
# b80450c recorded for the analysis corpora BEYOND the decompile trees
# (which the round-1 script covered):
#
#   analysis/ghidra/handlers-stitched/       86 files
#   analysis/ghidra/handlers-full-annotated/ 86 files
#   analysis/specs/handlers/                 73 files
#   analysis/jars/payload-raw/              403 files
#   analysis/jars/stage2-raw/                 4 files
#
# Same encoding as the round-1 tools (append `_` after each uppercase letter
# of a path segment: dL.java -> dL_.java), same manifest columns, same
# case-sensitive ordinal tree diff. Files are written byte-exact (raw blob
# stream, no newline translation) and every one is verified against its git
# blob with `git hash-object --no-filters`.
# See analysis/docs/CASE-COLLISION-WARNING.md ("round 2").
#
# Usage: powershell -ExecutionPolicy Bypass -File analysis/tools/casesafe/Restore-Collisions-Corpus.ps1 [-Ref b80450c~1]

param(
	[string]$Ref = 'b80450c~1'
)

$ErrorActionPreference = 'Stop'
$repo = (git rev-parse --show-toplevel)
Set-Location $repo

$targets = @(
	[pscustomobject]@{ Prefix = 'analysis/ghidra/handlers-stitched/';       Out = 'analysis/ghidra/casesafe/handlers-stitched/';       Manifest = 'analysis/ghidra/casesafe/manifest.tsv' },
	[pscustomobject]@{ Prefix = 'analysis/ghidra/handlers-full-annotated/'; Out = 'analysis/ghidra/casesafe/handlers-full-annotated/'; Manifest = 'analysis/ghidra/casesafe/manifest.tsv' },
	[pscustomobject]@{ Prefix = 'analysis/specs/handlers/';                 Out = 'analysis/specs/casesafe/handlers/';                 Manifest = 'analysis/specs/casesafe/handlers/manifest.tsv' },
	[pscustomobject]@{ Prefix = 'analysis/jars/payload-raw/';               Out = 'analysis/jars/casesafe/payload-raw/';               Manifest = 'analysis/jars/casesafe/manifest.tsv' },
	[pscustomobject]@{ Prefix = 'analysis/jars/stage2-raw/';                Out = 'analysis/jars/casesafe/stage2-raw/';                Manifest = 'analysis/jars/casesafe/manifest.tsv' }
)

function Encode-Segment([string]$s) {
	$sb = New-Object System.Text.StringBuilder
	foreach ($ch in $s.ToCharArray()) {
		[void]$sb.Append($ch)
		if ([char]::IsUpper($ch)) { [void]$sb.Append('_') }
	}
	return $sb.ToString()
}

# Collect (path, sha) for both commits. The dictionaries MUST be ordinal
# (case-sensitive): a plain PowerShell @{} is case-INSENSITIVE and would
# silently treat dL.java and dl.java as the same key — the exact bug this
# family of scripts exists to fix.
function Get-TreeMap([string]$commit) {
	$map = [System.Collections.Generic.Dictionary[string,string]]::new()
	foreach ($line in (git ls-tree -r $commit)) {
		$idx = $line.IndexOf("`t")
		if ($idx -lt 0) { continue }
		$meta = $line.Substring(0, $idx)
		$path = $line.Substring($idx + 1)
		if ($meta -notmatch '^\d+ blob ([0-9a-f]{40})$') { continue }
		$map[$path] = $Matches[1]
	}
	return $map
}

function Write-Blob([string]$sha, [string]$outPath) {
	$psi = New-Object System.Diagnostics.ProcessStartInfo
	$psi.FileName = 'git'
	$psi.Arguments = 'cat-file blob ' + $sha
	$psi.UseShellExecute = $false
	$psi.RedirectStandardOutput = $true
	$psi.CreateNoWindow = $true
	$proc = [System.Diagnostics.Process]::Start($psi)
	$fs = [System.IO.File]::Create($outPath)
	try { $proc.StandardOutput.BaseStream.CopyTo($fs) } finally { $fs.Dispose() }
	$proc.WaitForExit()
	if ($proc.ExitCode -ne 0) { throw "git cat-file blob $sha failed" }
}

Write-Host "Reading trees $Ref and HEAD..."
$old = Get-TreeMap $Ref
$new = Get-TreeMap 'HEAD'

$manifests = @{}
$counts = @{}
foreach ($t in $targets) { $counts[$t.Prefix] = 0 }
$failures = New-Object System.Collections.Generic.List[string]

foreach ($path in $old.Keys) {
	$t = $null
	foreach ($cand in $targets) { if ($path.StartsWith($cand.Prefix)) { $t = $cand; break } }
	if (-not $t) { continue }

	$oldSha = $old[$path]
	if ($new.ContainsKey($path)) {
		if ($new[$path] -eq $oldSha) { continue }	# unchanged on disk: already correct
		$status = 'changed'						# survivor may hold the WRONG sibling's content
	} else {
		$status = 'missing'
	}

	$rel = $path.Substring($t.Prefix.Length)
	$encRel = (($rel -split '/') | ForEach-Object { Encode-Segment $_ }) -join '/'
	$outRel = $t.Out + $encRel
	$outPath = Join-Path $repo $outRel

	$dir = Split-Path $outPath -Parent
	if (-not (Test-Path $dir)) { New-Item -ItemType Directory -Force -Path $dir | Out-Null }

	Write-Blob $oldSha $outPath

	# Byte-exactness proof: hash the file as stored (no filters, no newline
	# translation) and compare with the blob recorded in the tree.
	$got = (git hash-object --no-filters -- $outPath).Trim()
	if ($got -ne $oldSha) { $failures.Add("$outRel expected=$oldSha got=$got") }

	# Declared-name probe for corpora and specs (wrong-survivor detection).
	$decl = ''
	if ($path -like '*.java' -or $path -like '*.c' -or $path -like '*.md') {
		$head = ((Get-Content $outPath -TotalCount 3 -ErrorAction SilentlyContinue) -join ' ')
		if ($path -like '*.java' -and $head -cmatch '\b(class|enum|interface)\s+([A-Za-z_$][A-Za-z0-9_$]*)') { $decl = $Matches[2] }
		if ($path -like '*.c' -and $head -cmatch 'Lsixtwo[/\.]([A-Za-z0-9$]+);') { $decl = $Matches[1] }
		if ($path -like '*.c' -and $head -cmatch 'STITCHED CORPUS:\s*sixtwo\.([A-Za-z0-9$]+)') { $decl = $Matches[1] }
	}

	if (-not $manifests.ContainsKey($t.Manifest)) {
		$rows = New-Object System.Collections.Generic.List[string]
		$rows.Add("original_path`tblob_sha`trecovered_path`tdeclared_class`tstatus")
		$manifests[$t.Manifest] = $rows
	}
	$manifests[$t.Manifest].Add("$path`t$oldSha`t$outPath`t$decl`t$status")
	$counts[$t.Prefix]++
}

foreach ($k in ($manifests.Keys | Sort-Object)) {
	$mPath = Join-Path $repo $k
	$dir = Split-Path $mPath -Parent
	if (-not (Test-Path $dir)) { New-Item -ItemType Directory -Force -Path $dir | Out-Null }
	[System.IO.File]::WriteAllLines($mPath, $manifests[$k])
	Write-Host ("manifest {0}: {1} rows" -f $k, ($manifests[$k].Count - 1))
}
$total = 0
foreach ($k in ($counts.Keys | Sort-Object)) { Write-Host ("recovered {0} {1} files" -f $counts[$k], $k); $total += $counts[$k] }
Write-Host "TOTAL recovered: $total"

if ($failures.Count -gt 0) {
	Write-Host "VERIFICATION FAILURES ($($failures.Count)):"
	$failures | Select-Object -First 30 | ForEach-Object { Write-Host ("  " + $_) }
	exit 1
} else {
	Write-Host "OK: every recovered file matches its git blob byte-for-byte (hash-object --no-filters)."
}
