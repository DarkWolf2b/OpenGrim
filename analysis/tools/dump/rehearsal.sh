#!/bin/bash
# rehearsal.sh — end-to-end dump-session rehearsal: local server + client with
# the hook-args agent (string capture on). Waits for the client to join.
set -u
export DISPLAY=:99 WINEPREFIX=/root/win/prefix11 WINEDEBUG=-all WINEDLLOVERRIDES='mscoree,mshtml='
export TRACE_CLASSES='sixtwo/,Init'
export TRACE_STRINGS=1
export TRACE_STRING_CLASSES='sixtwo/'

pgrep -f 'Xvfb :99' >/dev/null || { nohup Xvfb :99 -screen 0 1280x720x24 >/tmp/xvfb.log 2>&1 & sleep 3; }

# switch the launcher to the string-capturing agent
sed -i 's|-agentpath:win\\hook\.dll|-agentpath:win\\hook-args.dll|' /root/win/mc/run-client.sh
echo "agent: $(grep -o 'hook-args.dll' /root/win/mc/run-client.sh | head -1)"

# local server
cd /root/win/mc/server
pkill -f 'server.jar' 2>/dev/null || true
: > server-run.log
grep -E 'online-mode|server-port' server.properties
nohup java -Xmx2G -jar server.jar nogui > server-run.log 2>&1 &
sleep 60
echo "=== server status ==="
grep -aE 'Done \(|joined the game|ERROR|FAILED' server-run.log | tail -5

# client
cd /root/win
: > /root/win/logs/rehearsal.log
nohup bash mc/run-client.sh >> /root/win/logs/rehearsal.log 2>&1 &
WPID=$!
echo "client pid $WPID; waiting up to 900s for join..."
for i in $(seq 1 90); do
  sleep 10
  if grep -aq 'joined the game' server-run.log; then echo "JOINED after ~$((i*10))s"; break; fi
done
echo "=== client markers ==="
grep -aE 'Loading Minecraft|Setting user|Backend|LWJGL|joined|Exception|ERROR|mixin|bootstrap' /root/win/logs/rehearsal.log | tail -25
echo "=== server join lines ==="
grep -aE 'joined|Done \(' server-run.log | tail -5
echo "=== trace ==="
ls -la /root/win/trace.jsonl
echo "str events: $(grep -ac '"e":"str"' /root/win/trace.jsonl || true)"
echo "enter events: $(grep -ac '"e":"enter"' /root/win/trace.jsonl || true)"
echo "sample strings:"; grep -a '"e":"str"' /root/win/trace.jsonl | head -5
# cleanup
kill $WPID 2>/dev/null || true
pkill -f KnotClient 2>/dev/null || true
pkill -f java.exe 2>/dev/null || true
pkill -f 'server.jar' 2>/dev/null || true
sleep 2
echo "=== rehearsal done ==="
