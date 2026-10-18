#!/bin/bash
# fix-quickplay.sh — switch the launcher to singleplayer quickPlay.
set -e
F=/root/win/mc/run-client.sh
sed -i 's|"--quickPlayMultiplayer"|"--quickPlaySingleplayer"|' "$F"
sed -i 's|"127.0.0.1:25565"|"TourWorld"|' "$F"
grep -n 'quickPlay' "$F"
sed -n '24,27p' "$F"
