#!/bin/bash
# open-gui.sh — try to open the Click GUI (B), with a RSHIFT fallback.
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 1

xdotool key b
sleep 3
import -window root "/mnt/d/WSL/shots/20-try-b.png"
echo "shot 20-try-b"

xdotool key Shift_R
sleep 2
xdotool key b
sleep 3
import -window root "/mnt/d/WSL/shots/21-try-rshift-b.png"
echo "shot 21-try-rshift-b"
