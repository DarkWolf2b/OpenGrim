#!/bin/bash
# close-gui-driver.sh — close the Click GUI, then release the module-tour driver.
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
[ -n "$W" ] && xdotool windowfocus "$W"
sleep 1
xdotool key Escape
sleep 1
xdotool key b
sleep 1
import -window root /mnt/d/WSL/shots/40-gui-closed.png
echo "shot 40-gui-closed"
touch /root/win/driver-go
echo "driver-go set"
sleep 6
tail -4 /root/win/driver.log 2>/dev/null || echo "no driver log yet"
