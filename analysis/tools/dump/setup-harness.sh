#!/bin/bash
# setup-harness.sh — first-stage WSL harness setup for the Grim runtime dump.
# Run from Windows:  wsl -d GrimHarness -e bash /mnt/d/WSL/setup-harness.sh
set -e
BASE=.
[ -d "$BASE/win" ] || BASE=.
echo "BASE=$BASE"

# 1. copy harness tree into the distro (native fs, not /mnt)
mkdir -p /root/win
cp -r "$BASE/win/." /root/win/

# 2. native DLL (292MB) next to the harness
mkdir -p /root/win/tmp/native
cp "$BASE/binaries/native/jna1.21.11" /root/win/tmp/native/jna1.21.11

# 3. adapt launcher paths: win -> win
sed -i 's|win|win|g; s|win|/root/win|g' /root/win/mc/run-client.sh
echo "run-client root.win refs: $(grep -c 'root.win' /root/win/mc/run-client.sh || true)"

# 4. entropy file for java.security.egd
head -c 4096 /dev/urandom > /root/win/entropy.bin

# 5. size check
du -sh /root/win

# 6. Xvfb on :99
if ! pgrep -f 'Xvfb :99' >/dev/null; then
  nohup Xvfb :99 -screen 0 1280x720x24 >/tmp/xvfb.log 2>&1 &
  sleep 3
fi

# 7. wineprefix + java-under-wine smoke test
export DISPLAY=:99 WINEPREFIX=/root/win/prefix11 WINEDEBUG=-all WINEDLLOVERRIDES='mscoree,mshtml='
/opt/wine-stable/bin/wineboot -u >/tmp/wineboot.log 2>&1 || true
echo "=== java under wine ==="
/opt/wine-stable/bin/wine /root/win/jdk-21.0.12.1+1/bin/java.exe -version 2>&1 | tail -4
echo "=== DONE ==="
