#!/bin/bash
# tab-tour.sh — click through every sidebar tab with screenshots.
set -u
export DISPLAY=:99
W=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
click() {
  [ -n "$W" ] && xdotool windowfocus "$W"
  sleep 0.5
  xdotool mousemove "$1" "$2" click 1
  sleep 1.5
}
shot() { import -window root "/mnt/d/WSL/shots/$1.png"; echo "shot $1"; }

click 283 260; shot 05-tab-movement
click 283 297; shot 06-tab-player
click 283 334; shot 07-tab-visuals
click 283 371; shot 08-tab-client
click 283 417; shot 09-tab-friends
click 283 487; shot 10-tab-hud
click 283 222; shot 11-tab-combat
echo "tab tour done"
