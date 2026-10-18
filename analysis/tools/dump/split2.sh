#!/bin/bash
# split2.sh — case-SENSITIVE per-module split (native fs), plus a case-safe
# encoded copy on D: (underscore after each uppercase char).
set -u
TR=/root/win/trace.jsonl
OUT=/root/trace-split/by-class
rm -rf /root/trace-split
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
echo "native files: $(ls "$OUT" | wc -l)"

CS=/mnt/d/WSL/trace-analysis/by-class-casesafe
rm -rf "$CS"
mkdir -p "$CS"
for f in "$OUT"/*.jsonl; do
  id=$(basename "$f" .jsonl)
  enc=$(echo "$id" | sed 's/\([A-Z]\)/\1_/g')
  cp "$f" "$CS/$enc.jsonl"
done
echo "casesafe files: $(ls "$CS" | wc -l)"
du -sh /root/trace-split "$CS"
