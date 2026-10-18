# Parse-NManifest.ps1 — extract per-module [N] method names from the wave-1
# batch reports into a TSV (id, method) for trace cross-checking.
$ErrorActionPreference = 'Stop'
Set-Location (Join-Path $PSScriptRoot '..\..\..')

$rows = New-Object System.Collections.Generic.List[string]
$cur = ''
foreach ($f in Get-ChildItem 'analysis/port/reports/audit-2026-10-17/batch-0*.md') {
	foreach ($line in Get-Content $f.FullName) {
		if ($line -match '^### ([A-Za-z]{2}) ') { $cur = $Matches[1]; continue }
		if ($cur -and $line -match '\[N\]') {
			foreach ($m in [regex]::Matches($line, '`([A-Za-z_$][A-Za-z0-9_$]*)')) {
				$rows.Add("$cur`t$($m.Groups[1].Value)")
			}
		}
	}
}
$unique = $rows | Sort-Object -Unique
$unique | Set-Content 'D:\WSL\n-manifest.tsv'
"rows: $($unique.Count)"
$unique | Select-Object -First 20
