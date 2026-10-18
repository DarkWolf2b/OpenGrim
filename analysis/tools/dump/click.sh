#!/bin/bash
# click.sh <x> <y> [button] — focus the game window and click at screen coords.
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 0.3
xdotool mousemove "$1" "$2" click "${3:-1}"
echo "clicked $1,$2 btn ${3:-1}"
