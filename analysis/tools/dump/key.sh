#!/bin/bash
# key.sh <key> [repeat] — focus the game window and send a key.
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 0.3
xdotool key --repeat "${2:-1}" --delay 120 "$1"
echo "sent $1 x${2:-1}"
