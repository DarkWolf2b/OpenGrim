# Audit-TreeGaps.ps1 — compare decompile trees against the complete jar
# entry list and report, per tree, which classes are absent (or present under a
# case-collapsed wrong name). Case-sensitive throughout (ordinal dictionaries).
#
# Usage: powershell -ExecutionPolicy Bypass -File Audit-TreeGaps.ps1 [commit]
# Writes analysis/tools/casesafe/gap-report.tsv

param([string]$Commit = 'b80450c~1')

$ErrorActionPreference = 'Stop'
Set-Location (git rev-parse --show-toplevel)

function Get-TreeMap([string]$commit, [string]$prefix) {
	$map = [System.Collections.Generic.Dictionary[string,string]]::new()
	$lines = git ls-tree -r $commit -- $prefix
	foreach ($line in $lines) {
		$idx = $line.IndexOf("`t")
		if ($idx -lt 0) { continue }
		$path = $line.Substring($idx + 1)
		$map[$path] = $line.Substring(0, $idx)
	}
	return $map
}

# jar entry names, case-exact, from the extraction manifest
$jarEntries = Get-Content 'analysis/decompiled/jar-casesafe/entry-manifest.txt' |
	Where-Object { $_ -like 'sixtwo/*.class' } | % { $_ -replace '\.class$', '.java' }

$trees = @('payload', 'payload-named', 'payload-named-cfr', 'payload-cfr', 'payload-decrypted')
$rows = New-Object System.Collections.Generic.List[string]
$rows.Add("tree`tjar_class`tpresent_as`tstatus")

foreach ($tree in $trees) {
	$map = Get-TreeMap $Commit "analysis/decompiled/$tree"
	# index by declared filename (case-exact)
	foreach ($cls in $jarEntries) {
		$want = "analysis/decompiled/$tree/$cls"
		if ($map.ContainsKey($want)) { $rows.Add("$tree`t$cls`t$cls`tpresent"); continue }
		# is it present with different case?
		$folded = [System.Collections.Generic.Dictionary[string,string]]::new()
		foreach ($k in $map.Keys) {
			$base = [IO.Path]::GetFileName($k)
			$key = $base.ToLowerInvariant()
			if (-not $folded.ContainsKey($key)) { $folded[$key] = $base }
		}
		$base = [IO.Path]::GetFileName($cls)
		$low = $base.ToLowerInvariant()
		if ($folded.ContainsKey($low)) {
			$rows.Add("$tree`t$cls`t$($folded[$low])`tcase-collapsed")
		} else {
			$rows.Add("$tree`t$cls`t`tabsent")
		}
	}
}

[System.IO.File]::WriteAllLines('analysis/tools/casesafe/gap-report.tsv', $rows)
# summary
$rows | Select-Object -Skip 1 | Group-Object { ($_ -split "`t")[0] + ' ' + ($_ -split "`t")[3] } |
	Sort-Object Name | % { "$($_.Name): $($_.Count)" }