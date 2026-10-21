#!/usr/bin/env python3
"""Walk the WMEM2 dump strictly; print every region; stop at first anomaly."""
import struct
import sys

DUMP = sys.argv[1] if len(sys.argv) > 1 else 'win/dump/mem-pid216130.bin'
data = open(DUMP, 'rb').read()
print('file size:', len(data))
assert data[:5] == b'WMEM2'
n = struct.unpack_from('<I', data, 5)[0]
print('region count:', n)
pos = 9
for i in range(n):
    if pos + 24 > len(data):
        print('EOF at region', i)
        break
    s, e, plen, palen = struct.unpack_from('<QQII', data, pos)
    ok = s < e and plen <= 8 and palen < 4096 and pos + 24 + plen + palen + (e - s) <= len(data)
    if not ok or i < 3 or i % 150 == 0:
        print('region %d @file%d: va=%x..%x size=%d perms_len=%d path_len=%d ok=%s'
              % (i, pos, s, e, e - s if e > s else -1, plen, palen, ok))
        if not ok:
            print('  bytes at pos: %s' % data[pos:pos + 40].hex())
    if not ok:
        print('FIRST ANOMALY at region', i)
        break
    perms = data[pos + 24:pos + 24 + plen]
    pos += 24 + plen + palen
    pos += e - s
else:
    print('walked all regions; final pos=', pos, 'file size=', len(data))
