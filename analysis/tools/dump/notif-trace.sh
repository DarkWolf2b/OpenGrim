#!/bin/bash
# notif-trace.sh — find what produced the notification + recent GUI class activity.
TR=/root/win/trace.jsonl
echo "--- 'This is Notification' sites:"
grep -a 'This is Notification' "$TR" | head -5
echo "--- notification class? (aq) events:"
grep -a '"c":"sixtwo/aq"' "$TR" | head -5
echo "--- emote wheel (bD) events:"
grep -ac '"c":"sixtwo/bD"' "$TR" || true
grep -a '"c":"sixtwo/bD"' "$TR" | head -5
echo "--- click GUI screen (c) events:"
grep -a '"c":"sixtwo/c"' "$TR" | head -8
echo "--- last 6 enter events:"
grep -a '"e":"enter"' "$TR" | tail -6
