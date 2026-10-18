#!/bin/bash
# view-evidence.sh — show the [N]-method trace evidence table.
T=/mnt/d/WSL/trace-analysis/n-evidence.tsv
sed -n '1,60p' "$T"
echo "..."
echo "summary:"
awk -F'\t' 'NR>1 {if ($3==0 && $4==0) z++; else seen++} END {print "seen="seen" not_seen="z}' "$T"
