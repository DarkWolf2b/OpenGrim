#!/bin/bash
# strings-now.sh — dump unique captured strings to the analysis dir.
TR=/root/win/trace.jsonl
OUT=/mnt/d/WSL/trace-analysis
mkdir -p "$OUT"
grep -a '"e":"str"' "$TR" | sed -E 's/.*"v":"(.*)"\}$/\1/' | sort -u > "$OUT/strings-now.txt"
echo "unique strings: $(wc -l < "$OUT/strings-now.txt")"
echo "--- sample (lines 1-60):"
head -60 "$OUT/strings-now.txt"
