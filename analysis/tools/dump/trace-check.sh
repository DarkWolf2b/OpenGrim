#!/bin/bash
# trace-check.sh — quick trace stats + captured string sample.
TR=/root/win/trace.jsonl
echo "lines: $(wc -l < "$TR")"
echo "str: $(grep -ac '"e":"str"' "$TR")"
echo "enter: $(grep -ac '"e":"enter"' "$TR")"
echo "--- unique str values (first 40):"
grep -a '"e":"str"' "$TR" | sed -E 's/.*"v":"(.*)"\}$/\1/' | sort -u | head -40
