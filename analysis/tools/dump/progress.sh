#!/bin/bash
# progress.sh — client boot progress (markers, not tail noise).
L=/root/win/logs/rehearsal.log
echo "=== size: $(stat -c%s $L) bytes ==="
grep -aE 'Loading Minecraft|Fabric Loader|Mixin Subsystem|offline-bootstrap|Setting user|Backend|LWJGL|joined|OpenGrim|Exception|ERROR|Failed|crash' "$L" | tail -30
