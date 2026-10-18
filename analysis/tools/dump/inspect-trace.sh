#!/bin/bash
# inspect-trace.sh — look at the raw trace + go-file state.
TR=/root/win/trace.jsonl
echo "--- first 3 lines:"
head -3 "$TR"
echo "--- last 3 lines:"
tail -3 "$TR"
echo "--- event kinds:"
grep -ao '"e":"[a-z_]*"' "$TR" | sort | uniq -c
echo "--- trace-go:"
ls -la /root/win/trace-go 2>/dev/null || echo MISSING
