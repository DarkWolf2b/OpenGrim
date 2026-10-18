#!/bin/bash
# wait-terrain.sh — wait for the singleplayer world to finish loading, then
# open the Click GUI (RSHIFT + B) and screenshot.
set -u
export DISPLAY=:99

for i in $(seq 1 40); do
  sleep 30
  if grep -aqE 'Done \([0-9.]+s\)!' /root/win/logs/dump.log; then
    echo "server done at ~$((i*30))s; extra 45s for client terrain"
    sleep 45
    break
  fi
  if ! pgrep -f '[K]notClient' >/dev/null; then
    echo "CLIENT DIED"
    exit 1
  fi
done

W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
echo "window=$W"
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 2
import -window root /mnt/d/WSL/shots/30-after-load.png
xdotool key Shift_R
sleep 2
xdotool key b
sleep 4
import -window root /mnt/d/WSL/shots/31-gui.png
echo "done"
