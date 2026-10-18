#!/bin/bash
# coverage.sh — event counts per sixtwo class (one pass over the trace).
TR=/root/win/trace.jsonl
OUT=/mnt/d/WSL/trace-analysis
mkdir -p "$OUT"
grep -ao '"c":"sixtwo/[a-zA-Z0-9]*"' "$TR" | sort | uniq -c | sort -rn > "$OUT/classes-by-events.txt"
echo "top 40:"
head -40 "$OUT/classes-by-events.txt"
echo "total classes seen: $(wc -l < "$OUT/classes-by-events.txt")"
