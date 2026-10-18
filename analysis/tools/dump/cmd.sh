#!/bin/bash
# cmd.sh <command text> — type a chat command into the game (opens chat with t).
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 0.3
xdotool key t
sleep 1
xdotool type --delay 30 "$1"
sleep 0.5
xdotool key Return
sleep 1
echo "sent: $1"
