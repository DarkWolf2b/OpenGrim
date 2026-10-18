#!/bin/bash
# careful-tab.sh — open GUI, verify, click Movement slowly, verify.
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 2

xdotool key b
sleep 10
import -window root /mnt/d/WSL/shots/62-reopened.png
echo "shot 62-reopened"

xdotool mousemove 283 260
sleep 2
xdotool click 1
sleep 12
import -window root /mnt/d/WSL/shots/63-after-movement-click.png
echo "shot 63-after-movement-click"
