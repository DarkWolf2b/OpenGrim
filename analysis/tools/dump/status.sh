#!/bin/bash
# status.sh — rehearsal progress check (absolute paths only).
echo '=== server ==='
grep -aE 'joined the game|Done \(' /root/win/mc/server/server-run.log | tail -4
echo '=== client tail ==='
tail -8 /root/win/logs/rehearsal.log
echo '=== trace ==='
ls -la /root/win/trace.jsonl
echo "str events: $(grep -ac '"e":"str"' /root/win/trace.jsonl || true)"
echo "enter events: $(grep -ac '"e":"enter"' /root/win/trace.jsonl || true)"
