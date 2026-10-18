#!/bin/bash
# gui-status.sh — did GUI classes run? then retry opening.
set -u
TR=/root/win/trace.jsonl
echo "--- GUI class activity:"
for cls in c ap bl av lf rj fX; do
  n=$(grep -ac "\"c\":\"sixtwo/$cls\"" "$TR" 2>/dev/null || true)
  echo "sixtwo/$cls: $n"
done
echo "--- interface module handler (fX):"
grep -a '"c":"sixtwo/fX"' "$TR" 2>/dev/null | head -3
echo "--- retry GUI open ---"
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 2
xdotool key b
sleep 8
import -window root /mnt/d/WSL/shots/50-try-b.png
xdotool key Shift_R
sleep 3
xdotool key b
sleep 8
import -window root /mnt/d/WSL/shots/51-try-rshift-b.png
echo "shots 50/51 taken"
