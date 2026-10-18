#!/usr/bin/env python3
"""Find the JNI function table in jvm.dll's mapped data (dump), read the
RegisterNatives entry, and locate its code in the jvm.dll FILE to derive RVA."""
import struct

DUMP = '/workspace/win/dump/mem-pid216130.bin'
JVM_DLL = '/workspace/win/jdk-21.0.12.1+1/bin/server/jvm.dll'

# jvm.dll mapped range (from hs_err): 0x6ffff9770000 - 0x6ffffa512000
jbase, jend = 0x6ffff9770000, 0x6ffffa512000

regions = []
with open(DUMP, 'rb') as f:
    assert f.read(5) == b'WMEM2'
    n = struct.unpack('<I', f.read(4))[0]
    for _ in range(n):
        s, e, plen, palen = struct.unpack('<QQII', f.read(24))
        f.read(plen + palen)
        blob = f.read(e - s)
        if len(blob) == e - s:
            regions.append((s, e, blob))

# find the JNI table: >= 200 consecutive qwords, all in [jbase+0x1000, jend),
# inside a jvm.dll-data region, starting right after 4 zero qwords (reserved)
best = None
for s, e, blob in regions:
    if not (jbase <= s < jend):
        continue
    cnt = len(blob) // 8
    q = np.frombuffer(blob[:cnt * 8], dtype='<u8') if False else None
import numpy as np
for s, e, blob in regions:
    if not (jbase <= s < jend):
        continue
    cnt = len(blob) // 8
    if cnt < 300:
        continue
    q = np.frombuffer(blob[:cnt * 8], dtype='<u8')
    incode = (q >= np.uint64(jbase + 0x1000)) & (q < np.uint64(jend))
    # longest run of True
    run = 0
    run_start = 0
    best_run = 0
    best_start = 0
    for i, v in enumerate(incode):
        if v:
            if run == 0:
                run_start = i
            run += 1
            if run > best_run:
                best_run = run
                best_start = run_start
        else:
            run = 0
    if best_run > 200:
        print('candidate JNI table: VA=%x run=%d' % (s + best_start * 8, best_run), flush=True)
        best = (s + best_start * 8, best_run, blob, best_start)

if best:
    table_va, run_len, blob, start_idx = best
    # the table starts after 4 reserved NULLs; walk back
    base_idx = start_idx - 4
    q = np.frombuffer(blob[:len(blob) // 8 * 8], dtype='<u8')
    regn_base = table_va - start_idx * 8
    print('JNI table base (with reserved): %x' % (regn_base + base_idx * 8), flush=True)
    rn_idx = 215
    fn_va = int(q[base_idx + rn_idx])
    print('RegisterNatives runtime VA: %x' % fn_va, flush=True)
    # read first 32 bytes of the function
    off_in_blob = base_idx + rn_idx
    # find the file offset of fn_va: the region (s) maps blob; fn is in .text region
    for rs, re_, rblob in regions:
        if rs <= fn_va < re_:
            code = rblob[fn_va - rs:fn_va - rs + 32]
            print('first bytes: %s' % code.hex(), flush=True)
            # locate in jvm.dll file
            dll = open(JVM_DLL, 'rb').read()
            fo = dll.find(code)
            print('file offset of function start: %x' % fo, flush=True)
            # PE: file offset -> RVA
            pe_off = struct.unpack_from('<I', dll, 0x3C)[0]
            nsec = struct.unpack_from('<H', dll, pe_off + 6)[0]
            opt = struct.unpack_from('<H', dll, pe_off + 20)[0]
            secs = pe_off + 24 + opt
            for i in range(nsec):
                o = secs + i * 40
                vsize, vaddr, rsize, roff = struct.unpack_from('<IIII', dll, o + 8)
                if roff <= fo < roff + rsize:
                    rva = vaddr + (fo - roff)
                    print('RVA: %x' % rva, flush=True)
                    print('pattern for runtime breakpoint: jvm.dll base + %x' % rva, flush=True)
                    break
            break
