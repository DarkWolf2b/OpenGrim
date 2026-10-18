# Verify-GitTreeClasses.ps1 — read every .java blob in a commit's decompile trees
# and report files whose declared (top-level) class name disagrees with their git
# file name. Catches "wrong survivors": on a case-insensitive checkout, one file
# per colliding pair is silently overwritten by its sibling, and a later
# `git add -A` commits that wrong content under the surviving name.
#
# Usage: powershell -ExecutionPolicy Bypass -File Verify-GitTreeClasses.ps1 [commit]
#   commit defaults to HEAD. Writes analysis/tools/casesafe/verify-report.tsv

param([string]$Commit = 'HEAD')

$ErrorActionPreference = 'Stop'
Set-Location (git rev-parse --show-toplevel)

$trees = @(
	'analysis/decompiled/payload',
	'analysis/decompiled/payload-cfr',
	'analysis/decompiled/payload-decrypted',
	'analysis/decompiled/payload-named',
	'analysis/decompiled/payload-named-cfr',
	'analysis/decompiled/bootstrap',
	'analysis/decompiled/stage2',
	'analysis/decompiled/jar-casesafe'
)

$report = New-Object System.Collections.Generic.List[string]
$report.Add("path`tdeclared_class`ttree_file_name`tverdict")
$checked = 0

foreach ($tree in $trees) {
	$lines = git ls-tree -r $Commit -- $tree
	foreach ($line in $lines) {
		$idx = $line.IndexOf("`t")
		if ($idx -lt 0) { continue }
		$meta = $line.Substring(0, $idx)
		$path = $line.Substring($idx + 1)
		if (-not $path.EndsWith('.java')) { continue }
		$sha = ($meta -replace '^\d+ blob ', '')
		$content = git cat-file blob $sha
		$code = $content | Select-Object -First 200 | Where-Object { $_ -notmatch '^\s*//' }
		$head = $code -join ' '
		$decl = ''
		if ($head -match '\b(class|enum|interface)\s+([A-Za-z_$][A-Za-z0-9_$]*)') { $decl = $Matches[2] }
		if ($decl -eq '') { continue } # decompiler failure stubs have no declaration
		$base = [IO.Path]::GetFileNameWithoutExtension($path)
		$checked++
		if ($decl -ne $base -and $decl -ne ($base -replace '_$','')) {
			$report.Add("$path`t$decl`t$base`tmismatch")
		}
	}
}

[System.IO.File]::WriteAllLines('analysis/tools/casesafe/verify-report.tsv', $report)
$bad = ($report | Measure-Object).Count - 1
Write-Host "Checked $checked .java blobs in $Commit; mismatches: $bad"
if ($bad -gt 0) { Write-Host "Details in analysis/tools/casesafe/verify-report.tsv" }