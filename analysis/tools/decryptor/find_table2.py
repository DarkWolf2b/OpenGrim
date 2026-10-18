#!/usr/bin/env python3
"""Find the JNI table via GetVersion's distinctive code pattern."""
import struct

DUMP = '/workspace/binaries/native/jna1.21.11'
DUMP = '/workspace/win/dump/mem-pid216130.bin'
JVM_DLL = '/workspace/win/jdk-21.0.12.1+1/bin/server/jvm.dll'
jbase, jend = 0x6ffff9770000, 0x6ffffa512000

regions = []
with open(DUMP, 'rb') as f:
    assert f.read(5) == b'WMEM2'
    n = struct.unpack_from('<I', f.read(4))[0]
    for _ in range(n):
        s, e, plen, palen = struct.unpack('<QQII', f.read(24))
        f.read(plen + palen)
        blob = f.read(e - s)
        if len(blob) == e - s:
            regions.append((s, e, blob))

# executable regions of jvm.dll
code_regions = []
for s, e, blob in regions:
    if jbase <= s < jend:
        # check perms via... assume all regions in this range; the exec one is big
        code_regions.append((s, e, blob))
print('jvm.dll regions: %d' % len(code_regions), flush=True)

# GetVersion pattern: mov eax, 0x00010006 ; ret  (b8 06 00 01 00 c3)
# HotSpot's GetVersion returns JNI_VERSION_1_6? Actually it returns the
# ACTUAL supported version... try both 1.6 (0x00010006) and 1.8 (0x00010008)
patterns = [b'\xb8\x06\x00\x01\x00\xc3', b'\xb8\x08\x00\x01\x00\xc3', b'\xb8\x04\x00\x01\x00\xc3']
hits = []
for s, e, blob in code_regions:
    for pat in patterns:
        start = 0
        while True:
            i = blob.find(pat, start)
            if i < 0:
                break
            hits.append((s + i, pat))
            start = i + 1
print('GetVersion code candidates: %d' % len(hits), flush=True)
for va, pat in hits[:10]:
    print('  %x (ver %x)' % (va, int.from_bytes(pat[1:5], 'little')), flush=True)

# find qwords pointing to those VAs (table slot 4)
dll = open(JVM_DLL, 'rb').read()
for va, pat in hits[:10]:
    needle = struct.pack('<Q', va)
    start = 0
    while True:
        i = data_find = None
        # search across regions
        found = False
        for s, e, blob in regions:
            i = blob.find(needle, start if False else 0)
            while i >= 0:
                site_va = s + i
                if jbase <= site_va < jend:  # table lives in jvm.dll data
                    table_base = site_va - 4 * 8
                    rn = struct.unpack_from('<Q', blob, i - 4 * 8 + 215 * 8)[0]
                    print('table slot4 hit @%x -> table base %x -> RegisterNatives @%x'
                          % (site_va, table_base, rn), flush=True)
                    # first bytes of that function
                    for rs, re_, rblob in regions:
                        if rs <= rn < re_:
                            code = rblob[rn - rs:rn - rs + 24]
                            print('  fn first bytes: %s' % code.hex(), flush=True)
                            # find in jvm.dll file
                            fo = dll.find(code)
                            if fo >= 0:
                                pe_off = struct.unpack_from('<I', dll, 0x3C)[0]
                                nsec = struct.unpack_from('<H', dll, pe_off + 6)[0]
                                opt = struct.unpack_from('<H', dll, pe_off + 20)[0]
                                secs = pe_off + 24 + opt
                                for k in range(nsec):
                                    o = secs + k * 40
                                    vsize, vaddr, rsize, roff = struct.unpack_from('<IIII', dll, o + 8)
                                    if roff <= fo < roff + rsize:
                                        print('  RVA: %x (breakpoint = runtime jvm.dll base + %x)'
                                              % (vaddr + (fo - roff), vaddr + (fo - roff)), flush=True)
                                        break
                            break
                i = blob.find(needle, i + 1)
        break
