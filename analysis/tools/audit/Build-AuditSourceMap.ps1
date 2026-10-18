# Build-AuditSourceMap.ps1 — for each of the 162 registry modules, resolve the
# authoritative, case-safe reading order (decompile + specs + impl path) so audit
# subagents never have to guess file locations on a case-insensitive filesystem.
#
# Outputs:
#   analysis/tools/audit/source-map.tsv  (one row per module)
#   analysis/specs/audit20261017/batch<N>.txt  (id lists, balanced by size)

$ErrorActionPreference = 'Stop'
Set-Location (Join-Path $PSScriptRoot '..\..\..')

function Get-Encoded([string]$s) {
	$sb = New-Object System.Text.StringBuilder
	foreach ($ch in $s.ToCharArray()) {
		[void]$sb.Append($ch)
		if ([char]::IsUpper($ch)) { [void]$sb.Append('_') }
	}
	return $sb.ToString()
}

# --- all sixtwo class ids from the CASE-SENSITIVE record (jar entry manifest),
#     not from on-disk names (which already collapsed the pairs)
$collisionGroups = @{}
foreach ($line in (Get-Content 'analysis/decompiled/jar-casesafe/entry-manifest.txt')) {
	if ($line -match '^sixtwo/([A-Za-z0-9_$]+)\.class$') {
		$n = $Matches[1].Split('$')[0]
		$k = $n.ToLowerInvariant()
		if (-not $collisionGroups.ContainsKey($k)) { $collisionGroups[$k] = [System.Collections.Generic.HashSet[string]]::new() }
		[void]$collisionGroups[$k].Add($n)
	}
}

# --- PARITY.md impl paths (case-SENSITIVE dictionary: dG and dg are different ids)
$implMap = [System.Collections.Generic.Dictionary[string,string]]::new([System.StringComparer]::Ordinal)
foreach ($line in Get-Content 'analysis/docs/PARITY.md') {
	if ($line -match '^\| ([A-Za-z]{2}) \| ([^|]+) \| ([0-9]+) \| (ported|partial|stub|not-started) \|') {
		$id = $Matches[1]
		if ($line -match '(combat|movement|render|utility|world)/([A-Za-z0-9_]+)\.java\s+') {
			$implMap[$id] = "$($Matches[1])/$($Matches[2]).java"
		}
	}
}

# --- declared-class check (CFR/Vineflower import blocks can push the decl past line 30)
function Test-DeclaredClass([string]$path, [string]$id) {
	if (-not (Test-Path $path)) { return $false }
	$head = (Get-Content $path -TotalCount 150) -join "`n"
	return ($head -cmatch "\b(class|enum|interface|record)\s+$([regex]::Escape($id))\b")
}

# --- spec header check (specs name their class in the header)
function Test-SpecHeader([string]$path, [string]$id) {
	if (-not (Test-Path $path)) { return $false }
	$head = (Get-Content $path -TotalCount 8) -join "`n"
	return ($head -cmatch "sixtwo\.$([regex]::Escape($id))\b")
}

# --- casesafe spec manifest (original_path | blob_sha | recovered_path | declared_class | status)
$specCs = @{}
foreach ($mf in @('analysis/specs/casesafe/manifest.tsv','analysis/specs/casesafe/modules/manifest.tsv')) {
	if (Test-Path $mf) {
		foreach ($m in (Import-Csv $mf -Delimiter "`t")) {
			if ($m.original_path -match 'specs/(modules|handlers)/([^/]+\.md)$') {
				$specCs["$($Matches[1])/$($Matches[2])"] = $m.recovered_path
			}
		}
		break
	}
}

$reg = Import-Csv 'analysis/specs/registry.tsv' -Delimiter "`t"
$rows = New-Object System.Collections.Generic.List[object]
foreach ($r in $reg) {
	$id  = $r.class_id
	$enc = Get-Encoded $id
	$colliding = $collisionGroups.ContainsKey($id.ToLowerInvariant()) -and $collisionGroups[$id.ToLowerInvariant()].Count -gt 1

	# decompile resolution: decrypted > named-cfr; on-disk first (verified!), casesafe fallback
	$src = $null; $srcKind = ''; $srcOk = $false
	foreach ($k in @('payload-decrypted','payload-named-cfr')) {
		$p = "analysis/decompiled/$k/sixtwo/$id.java"
		if ((Test-Path $p) -and (Test-DeclaredClass $p $id)) { $src = $p; $srcKind = $k; $srcOk = $true; break }
	}
	if (-not $src) {
		foreach ($k in @('payload-decrypted','payload-named-cfr')) {
			$p = "analysis/decompiled/casesafe/$k/sixtwo/$enc.java"
			if ((Test-Path $p) -and (Test-DeclaredClass $p $id)) { $src = $p; $srcKind = "$k+casesafe"; $srcOk = $true; break }
		}
	}
	if (-not $src) {
		$p = "analysis/decompiled/payload-named-cfr/sixtwo/$id.java"
		if (Test-Path $p) { $src = $p; $srcKind = 'UNVERIFIED-on-disk' }
	}

	# jar-casesafe ground truth (.class — cited when the decompile is suspect)
	$jarCs = "analysis/decompiled/jar-casesafe/sixtwo/$enc.class"

	# specs: on-disk spec must DECLARE the class (Windows collapse!), else casesafe copy
	$spec = "analysis/specs/modules/$id.md"
	if (-not (Test-SpecHeader $spec $id)) {
		$cs = "analysis/specs/casesafe/modules/$enc.md"
		if ($specCs.ContainsKey("modules/$enc.md")) { $cs = $specCs["modules/$enc.md"] }
		if (Test-SpecHeader $cs $id) { $spec = $cs }
	}
	$hspec = "analysis/specs/handlers/$id.md"
	if (-not (Test-SpecHeader $hspec $id)) {
		$csH = "analysis/specs/casesafe/handlers/$enc.md"
		if (Test-SpecHeader $csH $id) { $hspec = $csH }
	}
	if (-not (Test-Path $hspec -ErrorAction SilentlyContinue)) { $hspec = '' }

	$impl = if ($implMap.ContainsKey($id)) { "src/main/java/dev/opengrim/modules/$($implMap[$id])" } else { '' }
	$implOk = $impl -ne '' -and (Test-Path $impl)

	$rows += [pscustomobject]@{
		id          = $id
		module      = $r.name
		colliding   = $colliding
		source      = $src
		sourceKind  = $srcKind
		sourceOk    = $srcOk
		jarCasesafe = $jarCs
		spec        = $spec
		handlerSpec = $hspec
		impl        = $impl
		implOk      = $implOk
		sizeKB      = if ($src -and (Test-Path $src)) { [math]::Round((Get-Item $src).Length / 1KB, 1) } else { 0 }
	}
}

New-Item -ItemType Directory -Force -Path 'analysis/tools/audit' | Out-Null
$rows | Export-Csv 'analysis/tools/audit/source-map.tsv' -Delimiter "`t" -NoTypeInformation

# --- batch composition: cumulative-KB packing so agents get 5-10 modules each
$sorted = $rows | Sort-Object sizeKB
$batches = New-Object System.Collections.Generic.List[object]
$cur = New-Object System.Collections.Generic.List[string]; $curKB = 0.0
foreach ($m in $sorted) {
	if ($m.sizeKB -gt 110 -and $cur.Count -gt 0) {
		$null = $batches.Add([pscustomobject]@{ ids = $cur.ToArray(); kb = [math]::Round($curKB,0) })
		$cur = New-Object System.Collections.Generic.List[string]; $curKB = 0
	}
	if ($cur.Count -gt 0 -and ($curKB + $m.sizeKB -gt 150 -or $cur.Count -ge 10)) {
		$null = $batches.Add([pscustomobject]@{ ids = $cur.ToArray(); kb = [math]::Round($curKB,0) })
		$cur = New-Object System.Collections.Generic.List[string]; $curKB = 0
	}
	if ($m.sizeKB -gt 110) {
		$null = $batches.Add([pscustomobject]@{ ids = [string[]]@($m.id); kb = [math]::Round($m.sizeKB,0) })
		continue
	}
	$cur.Add($m.id); $curKB += $m.sizeKB
}
if ($cur.Count -gt 0) { $null = $batches.Add([pscustomobject]@{ ids = $cur.ToArray(); kb = [math]::Round($curKB,0) }) }

# merge tiny leftover batches into the nearest small batch
for ($i = $batches.Count - 1; $i -gt 0; $i--) {
	if ($batches[$i].ids.Count -le 2 -or $batches[$i].kb -lt 30) {
		# try to merge into the previous batch with the fewest modules
		$j = -1; $min = 99
		for ($k = 0; $k -lt $batches.Count; $k++) {
			if ($k -ne $i -and $batches[$k].ids.Count -lt $min -and ($batches[$i].ids.Count + $batches[$k].ids.Count) -le 9 -and ($batches[$i].kb + $batches[$k].kb) -le 160) { $min = $batches[$k].ids.Count; $j = $k }
		}
		if ($j -ge 0) {
			$batches[$j].ids = ($batches[$j].ids + $batches[$i].ids)
			$batches[$j].kb += $batches[$i].kb
			$batches.RemoveAt($i)
		}
	}
}

New-Item -ItemType Directory -Force -Path 'analysis/specs/audit20261017' | Out-Null
for ($i = 0; $i -lt $batches.Count; $i++) {
	Set-Content -Path ("analysis/specs/audit20261017/batch{0}.txt" -f ($i+1)) -Value ($batches[$i].ids -join "`n") -Encoding ascii
}

# --- console summary
$rows | Where-Object { -not $_.sourceOk -or -not $_.implOk } | ForEach-Object { "UNRESOLVED: $($_.id) $($_.module) src=$($_.source) ok=$($_.sourceOk) impl=$($_.impl) ok=$($_.implOk)" }
""
"colliding modules: $(@($rows | Where-Object colliding).Count)"
"batches: $($batches.Count)"
for ($i = 0; $i -lt $batches.Count; $i++) { "batch{0}: {1} modules, {2} KB" -f ($i+1), $batches[$i].ids.Count, $batches[$i].kb }
""
"total KB: $([math]::Round(($rows | Measure-Object sizeKB -Sum).Sum,0))  biggest:"
$rows | Sort-Object sizeKB -Descending | Select-Object -First 12 | ForEach-Object { "  $($_.id) $($_.module) $($_.sizeKB) KB colliding=$($_.colliding) src=$($_.sourceKind)" }



