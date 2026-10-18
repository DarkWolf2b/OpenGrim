#!/bin/bash
# slow-tab.sh — click Movement, wait long, screenshot; then Player likewise.
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 2

xdotool mousemove 283 260 click 1
sleep 10
import -window root /mnt/d/WSL/shots/60-movement.png
echo "shot 60-movement"

xdotool mousemove 283 297 click 1
sleep 10
import -window root /mnt/d/WSL/shots/61-player.png
echo "shot 61-player"
