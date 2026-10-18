#!/bin/bash
# strings-full.sh — extract every captured string (class, method, value).
set -u
TR=/root/win/trace.jsonl
OUT=/mnt/d/WSL/trace-analysis
mkdir -p "$OUT"
jq -r 'select(.e=="str") | [.c,.m,.v] | @tsv' "$TR" | sort -u > "$OUT/strings-full.tsv"
echo "unique string rows: $(wc -l < "$OUT/strings-full.tsv")"
jq -r 'select(.e=="str") | .v' "$TR" | sort -u > "$OUT/strings-values.txt"
echo "unique values: $(wc -l < "$OUT/strings-values.txt")"
