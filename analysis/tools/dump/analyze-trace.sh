#!/bin/bash
# analyze-trace.sh — post-session trace analysis into /mnt/d/WSL/trace-analysis/
set -u
TR=/root/win/trace.jsonl
OUT=/mnt/d/WSL/trace-analysis
mkdir -p "$OUT"

echo "== totals ==" | tee "$OUT/totals.txt"
wc -l "$TR" | tee -a "$OUT/totals.txt"

echo "== unique captured strings (class, method, value) =="
jq -r 'select(.e=="str") | [.c,.m,.v] | @tsv' "$TR" | sort -u > "$OUT/strings.tsv"
echo "unique str rows: $(wc -l < "$OUT/strings.tsv")"

echo "== unique string values only =="
jq -r 'select(.e=="str") | .v' "$TR" | sort -u > "$OUT/strings.txt"
echo "unique values: $(wc -l < "$OUT/strings.txt")"

echo "== string events per class =="
jq -r 'select(.e=="str") | .c' "$TR" | sort | uniq -c | sort -rn > "$OUT/strings-per-class.txt"

echo "== enter counts per class =="
jq -r 'select(.e=="enter") | .c' "$TR" | sort | uniq -c | sort -rn > "$OUT/enters-per-class.txt"

echo "== numeric exits aggregated (count, class, method, value) =="
jq -r 'select(.e=="exit" and (.r|type=="number")) | [.c,.m,(.r|tostring)] | @tsv' "$TR" \
  | sort | uniq -c | sort -rn > "$OUT/numeric-exits.tsv"
echo "aggregated rows: $(wc -l < "$OUT/numeric-exits.tsv")"

echo "== method-call counts (enter, class+method) =="
jq -r 'select(.e=="enter") | [.c,.m] | @tsv' "$TR" | sort | uniq -c | sort -rn > "$OUT/enters.tsv"

echo "== done =="
ls -la "$OUT"
