#!/bin/bash
# module-split.sh — split the trace into per-module files (one pass).
set -u
TR=/root/win/trace.jsonl
OUT=/mnt/d/WSL/trace-analysis/by-class
mkdir -p "$OUT"
awk -v outdir="$OUT" '
BEGIN {
  while ((getline line < "/root/win/module-ids.txt") > 0) {
    sub(/\r$/, "", line)
    if (length(line) > 0) mods[line] = 1
  }
}
{
  if (match($0, /"c":"sixtwo\/[A-Za-z0-9]+"/)) {
    s = substr($0, RSTART, RLENGTH)
    sub(/^"c":"sixtwo\//, "", s)
    sub(/"$/, "", s)
    if (s in mods) print >> (outdir "/" s ".jsonl")
  }
}' "$TR"
echo "split done; files: $(ls "$OUT" | wc -l)"
du -sh "$OUT"
