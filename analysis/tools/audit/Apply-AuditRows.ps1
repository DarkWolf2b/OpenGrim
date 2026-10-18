# Apply-AuditRows.ps1 <rowsTsv> [date] — stamp PARITY.md module rows with
# "verified <date>, parity NN%" after the impl path and refresh the Status
# column from the TSV. TSV columns: id, status, parity (header row required;
# ids are case-SENSITIVE — dH and dh are different modules).
param(
	[Parameter(Mandatory = $true)][string]$RowsTsv,
	[string]$Date = '2026-10-17'
)
$ErrorActionPreference = 'Stop'
Set-Location (Join-Path $PSScriptRoot '..\..\..')

$map = [System.Collections.Generic.Dictionary[string,object]]::new([System.StringComparer]::Ordinal)
foreach ($r in (Import-Csv $RowsTsv -Delimiter "`t")) { $map[$r.id] = $r }

$path = 'analysis/docs/PARITY.md'
$raw  = [System.IO.File]::ReadAllText($path)
$nl   = if ($raw -match "`r`n") { "`r`n" } else { "`n" }
$lines = $raw -split "`r?`n"
$hits  = [System.Collections.Generic.HashSet[string]]::new([System.StringComparer]::Ordinal)

for ($i = 0; $i -lt $lines.Count; $i++) {
	$line = $lines[$i]
	if ($line -match '^\| ([A-Za-z]{2}) \| ' -and $map.ContainsKey($Matches[1])) {
		$id = $Matches[1]
		$cells = $line.Split('|')
		if ($cells.Count -ge 8) {
			$cells[4] = " $($map[$id].status) "
			$notes = $cells[6]
			$notes = ([regex]'\.java').Replace($notes, ".java (verified $Date, parity $($map[$id].parity)%)", 1)
			$notes = $notes -creplace ' — low parity ', ' — ' -creplace ' — medium parity ', ' — ' -creplace ' — high parity ', ' — '
			$cells[6] = $notes
			$lines[$i] = ($cells -join '|')
			[void]$hits.Add($id)
		}
	}
}
$enc = New-Object System.Text.UTF8Encoding($false)
[System.IO.File]::WriteAllText($path, ($lines -join $nl), $enc)

"updated: $($hits.Count) rows"
$missing = @($map.Keys | Where-Object { -not $hits.Contains($_) })
if ($missing.Count -gt 0) { "MISSING ROWS: $($missing -join ', ')" }
