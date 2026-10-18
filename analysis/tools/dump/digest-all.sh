#!/bin/bash
# digest-all.sh — compact per-module trace digests for the re-review.
set -u
SRC=/root/trace-split/by-class
OUT=/mnt/d/WSL/trace-analysis/digests
rm -rf "$OUT"
mkdir -p "$OUT"
for f in "$SRC"/*.jsonl; do
  id=$(basename "$f" .jsonl)
  enc=$(echo "$id" | sed 's/\([A-Z]\)/\1_/g')
  {
    echo "== methods (count name) =="
    grep -ao '"m":"[a-zA-Z0-9_$]*"' "$f" | sort | uniq -c | sort -rn
    echo "== numeric exits (count method value) =="
    grep -a '"e":"exit"' "$f" | grep -a '"r":' | sed -E 's/.*"m":"([^"]*)".*"r":([^}]*)\}.*/\1 \2/' | sort | uniq -c | sort -rn | head -200
    echo "== strings =="
    grep -a '"e":"str"' "$f" | sed -E 's/.*"m":"([^"]*)","v":"(.*)"\}$/\1 = \2/' | sort -u | head -100
  } > "$OUT/$enc.txt"
done
echo "digests: $(ls "$OUT" | wc -l)"
du -sh "$OUT"
