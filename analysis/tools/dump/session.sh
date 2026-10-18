#!/bin/bash
# session.sh — launch the client (deferred tracing) and stay alive through the
# join; then enable tracing, take baseline screenshots and open the Click GUI.
set -u
export DISPLAY=:99 WINEPREFIX=/root/win/prefix11 WINEDEBUG=-all WINEDLLOVERRIDES='mscoree,mshtml='
export TRACE_CLASSES='sixtwo/,Init'
export TRACE_STRINGS=1
export TRACE_STRING_CLASSES='sixtwo/'
export TRACE_FILE='Z:\root\win\trace.jsonl'

mkdir -p /mnt/d/WSL/shots
printf 'bt all\ninfo modules\nquit\n' > /root/win/winedbg-cmds.txt

pgrep -f 'Xvfb :99' >/dev/null || { nohup Xvfb :99 -screen 0 1280x720x24 >/tmp/xvfb.log 2>&1 & sleep 3; }

if ! pgrep -f '[s]erver\.jar' >/dev/null; then
  cd /root/win/mc/server
  nohup java -Xmx2G -jar server.jar nogui > server-run.log 2>&1 &
  sleep 50
fi

pkill -f '[K]notClient' 2>/dev/null || true
pkill -f '[j]ava\.exe' 2>/dev/null || true
pkill -f '[w]inedbg' 2>/dev/null || true
rm -f /root/win/driver-go /root/win/trace-go
sleep 3

# join detection baseline (server log accumulates across sessions)
BASE_JOINS=$(grep -ac 'joined the game' /root/win/mc/server/server-run.log 2>/dev/null || true)
echo "baseline joins: $BASE_JOINS"

cd /root/win
: > /root/win/logs/dump.log
: > /root/win/trace.jsonl
nohup bash mc/run-client.sh < /root/win/winedbg-cmds.txt >> /root/win/logs/dump.log 2>&1 &
echo "client launched (deferred tracing)"

JOINED=0
for i in $(seq 1 270); do
  sleep 20
  NOW_JOINS=$(grep -ac 'joined the game' /root/win/mc/server/server-run.log 2>/dev/null || true)
  if [ "$NOW_JOINS" -gt "$BASE_JOINS" ]; then
    JOINED=1
    SEC=$((i * 20))
    echo "JOINED after ~${SEC}s"
    break
  fi
  if ! pgrep -f '[K]notClient' >/dev/null; then
    echo "CLIENT DIED"
    grep -av 'OpenJDK 64-Bit' /root/win/logs/dump.log | tail -25
    exit 1
  fi
  if grep -aq 'page fault' /root/win/logs/dump.log; then
    SEC=$((i * 20))
    echo "CRASH DETECTED at ~${SEC}s"
    grep -av 'OpenJDK 64-Bit' /root/win/logs/dump.log | tail -30
    break
  fi
done
echo "joined=$JOINED"
[ "$JOINED" = "1" ] || exit 1

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
  import -window root "/mnt/d/WSL/shots/01-ingame.png" || true
  xdotool key Shift_R || true
  sleep 2
  xdotool key b || true
  sleep 5
  import -window root "/mnt/d/WSL/shots/02-gui-open.png" || true
  echo "screenshots taken (GUI opened)"
fi
echo "=== session ready; client left running ==="
