# Extract-AllCaseSafe.ps1 — extract EVERY entry of a zip/jar into a case-safe
# tree on a case-insensitive filesystem.
#
# Windows collapses names that differ only in case (dL.java / dl.java). Zip
# archives store entry names exactly, so reading via System.IO.Compression and
# re-encoding the names preserves every variant. Encoding: underscore appended
# after each uppercase character in a path segment (dL.java -> dL_.java).
#
# Usage: powershell -ExecutionPolicy Bypass -File Extract-AllCaseSafe.ps1 <zip> <destDir>
#   e.g. ... Extract-AllCaseSafe.ps1 win\payload-named.jar analysis\decompiled\jar-casesafe

param(
	[Parameter(Mandatory = $true)][string]$ZipPath,
	[Parameter(Mandatory = $true)][string]$DestDir
)

$ErrorActionPreference = 'Stop'
Add-Type -AssemblyName System.IO.Compression.FileSystem

function Encode-Segment([string]$s) {
	$sb = New-Object System.Text.StringBuilder
	foreach ($ch in $s.ToCharArray()) {
		[void]$sb.Append($ch)
		if ([char]::IsUpper($ch)) { [void]$sb.Append('_') }
	}
	return $sb.ToString()
}

$zipPath = (Resolve-Path $ZipPath).Path
$dest = [IO.Path]::GetFullPath((Join-Path (Get-Location) $DestDir))
New-Item -ItemType Directory -Force -Path $dest | Out-Null

$zip = [IO.Compression.ZipFile]::OpenRead($zipPath)
try {
	$count = 0
	$names = New-Object System.Collections.Generic.List[string]
	foreach ($entry in $zip.Entries) {
		if ($entry.FullName.EndsWith('/')) { continue }
		$segs = $entry.FullName -split '/'
		$enc = ($segs | ForEach-Object { Encode-Segment $_ }) -join '/'
		$outPath = Join-Path $dest $enc
		$dir = Split-Path $outPath -Parent
		if (-not (Test-Path $dir)) { New-Item -ItemType Directory -Force -Path $dir | Out-Null }
		$in = $entry.Open()
		try {
			$out = [IO.File]::Create($outPath)
			try { $in.CopyTo($out) } finally { $out.Dispose() }
		} finally { $in.Dispose() }
		$names.Add($entry.FullName)
		$count++
		if ($count % 500 -eq 0) { Write-Host "$count..." }
	}
	# Manifest of exact original entry names (the zip is the case-sensitive record).
	[System.IO.File]::WriteAllLines((Join-Path $dest 'entry-manifest.txt'), $names)
	Write-Host "Extracted $count entries from $zipPath to $dest"
} finally {
	$zip.Dispose()
}