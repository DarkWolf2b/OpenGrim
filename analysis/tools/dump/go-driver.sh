#!/bin/bash
# go-driver.sh — release the module-tour driver and show its early log.
set -u
touch /root/win/driver-go
echo "driver-go set"
sleep 8
tail -8 /root/win/driver.log 2>/dev/null || echo "no driver log yet"
