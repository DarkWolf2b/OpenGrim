#!/bin/bash
# boot-test.sh — smoke boot of the original client under WSL (agent enabled,
# sixtwo/-only trace to keep the boot fast).
set -u
export DISPLAY=:99 WINEPREFIX=/root/win/prefix11 WINEDEBUG=-all WINEDLLOVERRIDES='mscoree,mshtml='
export TRACE_CLASSES='sixtwo/,Init'
mkdir -p /root/win/logs
LOG=/root/win/logs/boot-test.log
: > "$LOG"
if ! pgrep -f 'Xvfb :99' >/dev/null; then
  nohup Xvfb :99 -screen 0 1280x720x24 >/tmp/xvfb.log 2>&1 &
  sleep 3
fi
cd /root/win
nohup bash mc/run-client.sh >> "$LOG" 2>&1 &
WPID=$!
echo "launched pid $WPID; waiting 420s for boot..."
sleep 420
echo "=== markers ==="
grep -aE "Loading Minecraft|Fabric Loader|Setting user|LWJGL|Backend|mixin|Mixin|crash|Exception|ERROR|OpenGrim|agent" "$LOG" | head -50
echo "=== trace file ==="
ls -la /root/win/trace.jsonl 2>/dev/null && head -c 400 /root/win/trace.jsonl
echo ""
echo "=== tail ==="
tail -25 "$LOG"
kill $WPID 2>/dev/null || true
pkill -f KnotClient 2>/dev/null || true
pkill -f java.exe 2>/dev/null || true
sleep 2
echo "=== boot test done ==="
