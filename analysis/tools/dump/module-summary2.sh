#!/bin/bash
# module-summary2.sh — accurate per-module stats (case-sensitive native split).
set -u
OUT=/root/trace-split/by-class
SUM=/mnt/d/WSL/trace-analysis/module-summary.tsv
printf "id\tlines\tenters\texits_num\tstrs\n" > "$SUM"
for f in "$OUT"/*.jsonl; do
  id=$(basename "$f" .jsonl)
  lines=$(wc -l < "$f")
  enters=$(grep -ac '"e":"enter"' "$f" || true)
  exits=$(grep -ac '"e":"exit".*"r":' "$f" || true)
  strs=$(grep -ac '"e":"str"' "$f" || true)
  printf "%s\t%s\t%s\t%s\t%s\n" "$id" "$lines" "$enters" "$exits" "$strs" >> "$SUM"
done
echo "--- top 40 by lines:"
tail -n +2 "$SUM" | sort -t$'\t' -k2 -nr | head -40
echo "--- totals:"
awk -F'\t' 'NR>1 {l+=$2; e+=$3; x+=$4; s+=$5} END {print "lines="l" enters="e" numeric_exits="x" strings="s}' "$SUM"
