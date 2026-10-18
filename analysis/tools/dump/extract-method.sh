#!/bin/bash
# extract-method.sh <regex over "class method"> — pull one method's trace data.
# Example: extract-method.sh 'sixtwo/fr aNr'
set -u
TR=/root/win/trace.jsonl
PAT="${1:?usage: extract-method.sh <regex>}"
echo "== enters =="
jq -r --arg p "$PAT" 'select(.e=="enter" and ((.c+" "+.m) | test($p))) | .c+" "+.m' "$TR" \
  | sort | uniq -c | sort -rn | head -20
echo "== numeric exits (count, class, method, value) =="
jq -r --arg p "$PAT" 'select(.e=="exit" and (.r|type=="number") and ((.c+" "+.m) | test($p))) | [.c,.m,(.r|tostring)] | @tsv' "$TR" \
  | sort | uniq -c | sort -rn | head -40
echo "== string args =="
jq -r --arg p "$PAT" 'select(.e=="str" and ((.c+" "+.m) | test($p))) | [.c,.m,.v] | @tsv' "$TR" \
  | sort -u | head -40
