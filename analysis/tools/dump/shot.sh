#!/bin/bash
# shot.sh <name> — focus the game window and capture the full screen.
set -u
export DISPLAY=:99
mkdir -p /mnt/d/WSL/shots
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 1
import -window root "/mnt/d/WSL/shots/${1:-shot}.png"
echo "saved ${1:-shot}.png"
