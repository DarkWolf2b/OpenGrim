#!/bin/bash
# dump-session.sh — stage A: cleanup, server, client (hook-args v2 + string
# capture), wait for join + window, screenshots, open the Click GUI.
set -u
export DISPLAY=:99 WINEPREFIX=/root/win/prefix11 WINEDEBUG=-all WINEDLLOVERRIDES='mscoree,mshtml='
export TRACE_CLASSES='sixtwo/,Init'
export TRACE_STRINGS=1
export TRACE_STRING_CLASSES='sixtwo/,net/minecraft/client/'
export TRACE_FILE='win\trace.jsonl'

SHOTS=/mnt/d/WSL/shots
mkdir -p "$SHOTS"

pgrep -f 'Xvfb :99' >/dev/null || { nohup Xvfb :99 -screen 0 1280x720x24 >/tmp/xvfb.log 2>&1 & sleep 3; }

# cleanup (bracket-safe patterns so pkill never matches our own cmdline)
pkill -f '[K]notClient' 2>/dev/null || true
pkill -f '[j]ava\.exe' 2>/dev/null || true
pkill -f '[s]erver\.jar' 2>/dev/null || true
rm -f /root/win/driver-go
sleep 3

# server
cd /root/win/mc/server
: > server-run.log
nohup java -Xmx2G -jar server.jar nogui > server-run.log 2>&1 &
sleep 50
echo "server: $(grep -aE 'Done \(' server-run.log | tail -1)"

# client
cd /root/win
: > /root/win/logs/dump.log
: > /root/win/trace.jsonl
nohup bash mc/run-client.sh >> /root/win/logs/dump.log 2>&1 &
echo "client launched"

JOINED=0
for i in $(seq 1 150); do
  sleep 10
  if grep -aq 'joined the game' /root/win/mc/server/server-run.log; then
    JOINED=1; echo "JOINED after ~$((i*10))s"; break
  fi
done
echo "joined=$JOINED"

WIN=""
for i in $(seq 1 30); do
  WIN=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
  [ -n "$WIN" ] && break
  sleep 5
done
echo "window=$WIN"
if [ -n "$WIN" ]; then
  xdotool windowfocus "$WIN" || true
  sleep 2
  import -window root "$SHOTS/01-ingame.png" || true
  sleep 1
  xdotool key b || true
  sleep 4
  import -window root "$SHOTS/02-gui-open.png" || true
fi
echo "=== trace stats ==="
ls -la /root/win/trace.jsonl
echo "str: $(grep -ac '"e":"str"' /root/win/trace.jsonl || true)"
echo "enter: $(grep -ac '"e":"enter"' /root/win/trace.jsonl || true)"
echo "=== stage A done; client+server left running ==="
