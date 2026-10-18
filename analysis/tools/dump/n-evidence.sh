#!/bin/bash
# n-evidence.sh — for every wave-1 [N] method: did it run? with what values?
set -u
MAN=/root/win/n-manifest.tsv
SRC=/root/trace-split/by-class
OUT=/mnt/d/WSL/trace-analysis/n-evidence.tsv
tr -d '\r' < "$MAN" > /root/win/n-manifest-clean.tsv
MAN=/root/win/n-manifest-clean.tsv
printf "id\tmethod\tenters\texits\tsample_values\n" > "$OUT"
while IFS=$'\t' read -r id method; do
  [ -z "$id" ] && continue
  f="$SRC/$id.jsonl"
  if [ ! -f "$f" ]; then printf "%s\t%s\tNO_FILE\t\t\n" "$id" "$method" >> "$OUT"; continue; fi
  enters=$(grep -a "\"e\":\"enter\".*\"m\":\"$method\"" "$f" | wc -l)
  exits=$(grep -a "\"e\":\"exit\".*\"m\":\"$method\"" "$f" | wc -l)
  vals=$(grep -a "\"e\":\"exit\".*\"m\":\"$method\"" "$f" | grep -a '"r":' | sed -E 's/.*"r":([^}]*)\}.*/\1/' | sort | uniq -c | sort -rn | head -6 | tr '\n' ';')
  printf "%s\t%s\t%s\t%s\t%s\n" "$id" "$method" "$enters" "$exits" "$vals" >> "$OUT"
done < "$MAN"
echo "rows: $(wc -l < "$OUT")"
column -t -s$'\t' "$OUT" | head -70
