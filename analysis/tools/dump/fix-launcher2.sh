#!/bin/bash
# fix-launcher2.sh — add the driver agent to the launcher + clean stale go-file.
set -e
F=/root/win/mc/run-client.sh
if ! grep -q 'driver\.dll' "$F"; then
  sed -i '/hook-args\.dll/a\  "-agentpath:win\\driver.dll" \\' "$F"
fi
rm -f /root/win/driver-go
grep -n 'agentpath' "$F"
