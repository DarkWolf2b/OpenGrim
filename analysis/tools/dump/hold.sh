#!/bin/bash
# hold.sh <key> <seconds> — focus the game and hold a key for N seconds.
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 0.3
xdotool keydown "$1"
sleep "$2"
xdotool keyup "$1"
echo "held $1 for $2s"
