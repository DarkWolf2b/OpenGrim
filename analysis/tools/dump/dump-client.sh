#!/bin/bash
# dump-client.sh — start only the client (server already up), wait for join,
# then baseline screenshots + open the Click GUI. Leaves client running.
set -u
export DISPLAY=:99 WINEPREFIX=/root/win/prefix11 WINEDEBUG=-all WINEDLLOVERRIDES='mscoree,mshtml='
export TRACE_CLASSES='sixtwo/,Init'
export TRACE_STRINGS=1
export TRACE_STRING_CLASSES='sixtwo/'
export TRACE_FILE='Z:\root\win\trace.jsonl'

mkdir -p /mnt/d/WSL/shots

pgrep -f 'Xvfb :99' >/dev/null || { nohup Xvfb :99 -screen 0 1280x720x24 >/tmp/xvfb.log 2>&1 & sleep 3; }

# ensure the local server is up
if ! pgrep -f '[s]erver\.jar' >/dev/null; then
  cd /root/win/mc/server
  nohup java -Xmx2G -jar server.jar nogui > server-run.log 2>&1 &
  sleep 50
fi

# winedbg auto-commands: if the client faults, print a backtrace to the log
printf 'bt all\ninfo modules\nquit\n' > /root/win/winedbg-cmds.txt

# cleanup: crashed client, wine debugger, stale tour state
pkill -f '[K]notClient' 2>/dev/null || true
pkill -f '[j]ava\.exe' 2>/dev/null || true
pkill -f '[w]inedbg' 2>/dev/null || true
pkill -f '[d]ump-session' 2>/dev/null || true
rm -f /root/win/driver-go /root/win/trace-go
sleep 3

cd /root/win
: > /root/win/logs/dump.log
: > /root/win/trace.jsonl
nohup bash mc/run-client.sh < /root/win/winedbg-cmds.txt >> /root/win/logs/dump.log 2>&1 &
echo "client launched (tracing deferred until trace-go)"
