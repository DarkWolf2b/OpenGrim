#!/bin/bash
# driver-status.sh — module-tour progress.
echo "--- driver.log tail:"
tail -12 /root/win/driver.log 2>/dev/null || echo "none yet"
echo "--- lines:"
wc -l /root/win/driver.log 2>/dev/null || true
