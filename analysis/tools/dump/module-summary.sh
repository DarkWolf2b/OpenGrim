#!/bin/bash
# module-summary.sh — per-module trace stats + missing ids.
set -u
OUT=/mnt/d/WSL/trace-analysis/by-class
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
echo "--- top 30 by lines:"
tail -n +2 "$SUM" | sort -t$'\t' -k2 -nr | head -30
echo "--- modules with NO events:"
comm -23 <(sort /root/win/module-ids.txt | tr -d '\r') <(ls "$OUT" | sed 's/\.jsonl$//' | sort) | tr '\n' ' '
echo ""
echo "--- summary file: $SUM"
