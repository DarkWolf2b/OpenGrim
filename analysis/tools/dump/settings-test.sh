#!/bin/bash
# settings-test.sh — right-click a module card (settings popup?), screenshot,
# then close it. Coordinates from the 1280x720 reference screenshot.
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 0.5
# right-click "Spear Reach" card (top-left card)
xdotool mousemove 468 210 click 3
sleep 2
import -window root "/mnt/d/WSL/shots/12-settings-popup.png"
echo "shot 12-settings-popup"
sleep 1
# close popup with Escape
xdotool key Escape
sleep 1
import -window root "/mnt/d/WSL/shots/13-after-esc.png"
echo "shot 13-after-esc"
