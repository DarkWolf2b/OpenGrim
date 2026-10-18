#!/bin/bash
# open-gui-now.sh — kill the terrain watcher, then open the GUI robustly.
set -u
export DISPLAY=:99
pkill -f '[w]ait-terrain' 2>/dev/null || true

W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
echo "window=$W"
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 1

xdotool key b
sleep 3
import -window root /mnt/d/WSL/shots/33-try-b.png
xdotool key Shift_R
sleep 2
xdotool key b
sleep 4
import -window root /mnt/d/WSL/shots/34-gui.png
echo "shots taken"
