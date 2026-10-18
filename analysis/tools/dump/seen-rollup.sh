#!/bin/bash
# seen-rollup.sh — per-module [N]-method coverage from the trace.
T=/mnt/d/WSL/trace-analysis/n-evidence.tsv
echo "id total_N_methods seen_in_trace"
awk -F'\t' 'NR>1 {tot[$1]++; if ($3+0 > 0) seen[$1]++} END {for (id in tot) printf "%s %d %d\n", id, tot[id], seen[id]+0}' "$T" | sort
echo "---"
echo "methods still unseen (per module):"
awk -F'\t' 'NR>1 && $3+0 == 0 {print $1"\t"$2}' "$T" | sort | tr '\n' ' ' | head -c 2000
