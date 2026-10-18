#!/bin/bash
# wait-join.sh — wait for the running client to join; then enable tracing
# (trace-go), take baseline screenshots and open the Click GUI.
# Client is left running for the tour.
set -u
export DISPLAY=:99
SHOTS=/mnt/d/WSL/shots
mkdir -p "$SHOTS"

JOINED=0
for i in $(seq 1 270); do
  sleep 20
  if grep -aq 'joined the game' /root/win/mc/server/server-run.log; then
    JOINED=1
    SEC=$((i * 20))
    echo "JOINED after ~${SEC}s"
    break
  fi
  if ! pgrep -f '[K]notClient' >/dev/null; then
    echo "CLIENT DIED"
    tail -30 /root/win/logs/dump.log | grep -av 'OpenJDK 64-Bit'
    exit 1
  fi
done
echo "joined=$JOINED"
if [ "$JOINED" != "1" ]; then
  echo "=== timeout without join ==="
  exit 1
fi

# enable tracing now (deferred tracing agent watches this file)
touch /root/win/trace-go
sleep 3

WIN=""
for i in $(seq 1 36); do
  WIN=$(xdotool search --name 'Minecraft' 2>/dev/null | head -1)
  [ -n "$WIN" ] && break
  sleep 5
done
echo "window=$WIN"
if [ -n "$WIN" ]; then
  xdotool windowfocus "$WIN" || true
  sleep 3
  import -window root "$SHOTS/01-ingame.png" || true
  sleep 1
  xdotool key b || true
  sleep 5
  import -window root "$SHOTS/02-gui-open.png" || true
  echo "screenshots taken"
fi
echo "=== wait-join done; client left running ==="
