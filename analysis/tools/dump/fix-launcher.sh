#!/bin/bash
# fix-launcher.sh — set TRACE_FILE in the adapted launcher (the hook.dll default
# still points at the cloud VM's win\trace.jsonl, whose fopen
# failure kills the JVM at Agent_OnLoad).
set -e
F=/root/win/mc/run-client.sh
if ! grep -q 'TRACE_FILE' "$F"; then
  sed -i '2a export TRACE_FILE="win\\trace.jsonl"' "$F"
fi
grep -n 'TRACE_FILE\|WINEPREFIX' "$F" | head -3
