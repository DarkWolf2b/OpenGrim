#!/bin/bash
# driver-watch.sh — release the module-tour driver and wait for it to finish.
set -u
touch /root/win/driver-go
echo "driver-go set; waiting for tour..."
for i in $(seq 1 120); do
  sleep 20
  if grep -aq 'tour done' /root/win/driver.log 2>/dev/null; then
    echo "TOUR DONE at ~$((i*20))s"
    break
  fi
  if ! pgrep -f '[K]notClient' >/dev/null; then
    echo "CLIENT DIED"
    break
  fi
done
echo "--- driver.log head:"
head -6 /root/win/driver.log 2>/dev/null
echo "--- driver.log tail:"
tail -10 /root/win/driver.log 2>/dev/null
echo "--- driver.log lines:"
wc -l /root/win/driver.log 2>/dev/null
echo "--- trace size:"
ls -la /root/win/trace.jsonl
