#!/usr/bin/env python3
"""Parse the wine JVM memory dump: find runtime-built JNINativeMethod triples
{char* name, char* sig, void* fn} and map fn pointers to the jna1.21.11 image.

Input:  win/dump/mem-pid<java>.bin  (WMEM1 format from dump_wine_mem.py)
Output: analysis/ghidra/native-handlers-runtime.json
"""
import json
import re
import struct
import sys

DUMP = sys.argv[1] if len(sys.argv) > 1 else 'win/dump/mem-pid211329.bin'
SIGS = json.load(open('analysis/ghidra/native-sigs.json'))
OUT = 'analysis/ghidra/native-handlers-runtime.json'

# --- load dump ---
regions = []  # (start, end, blob)
with open(DUMP, 'rb') as f:
    magic = f.readline().strip()
    assert magic == b'WMEM1', magic
    n = int(f.readline().strip())
    for _ in range(n):
        hdr = f.readline().decode().strip().split(' ')
        s, e = int(hdr[0], 16), int(hdr[1], 16)
        blob = f.read(e - s)
        if len(blob) == e - s:
            regions.append((s, e, blob))
print('regions: %d' % len(regions), flush=True)

# --- find string occurrences for all native names and sigs ---
name_addrs = {}   # bytes -> [vas]
sig_addrs = {}    # bytes -> [vas]
name_needles = sorted({nm.encode() + b'\0' for pairs in SIGS.values() for nm, _ in pairs})
sig_needles = sorted({sg.encode() + b'\0' for pairs in SIGS.values() for _, sg in pairs})
print('needles: %d names, %d sigs' % (len(name_needles), len(sig_needles)), flush=True)

for s, e, blob in regions:
    for needle_set, table in ((name_needles, name_addrs), (sig_needles, sig_addrs)):
        for needle in needle_set:
            start = 0
            while True:
                i = blob.find(needle, start)
                if i < 0:
                    break
                table.setdefault(needle[:-1], []).append(s + i)
                start = i + 1
print('name string sites: %d unique, sig string sites: %d unique'
      % (len(name_addrs), len(sig_addrs)), flush=True)

# --- find qword pointers to name strings; validate triples ---
sig_by_va = {}
for sg, vas in sig_addrs.items():
    for va in vas:
        sig_by_va[va] = sg

results = {}
n_sites = 0
for s, e, blob in regions:
    if len(blob) < 24:
        continue
    for off in range(0, len(blob) - 24, 8):
        v = struct.unpack_from('<Q', blob, off)[0]
        if v == 0:
            continue
        lst = name_addrs.get(v - 0)  # direct pointer to name string
        if not lst:
            continue
        n_sites += 1
        sig_va = struct.unpack_from('<Q', blob, off + 8)[0]
        fn_va = struct.unpack_from('<Q', blob, off + 16)[0]
        sg = sig_by_va.get(sig_va)
        if sg is None or fn_va == 0:
            continue
        nm = v  # pointer target string VA — resolve name bytes
        for nmb, vas in name_addrs.items():
            if nm in vas:
                nm_str = nmb.decode()
                sg_str = sg.decode()
                for cid, pairs in SIGS.items():
                    for n2, s2 in pairs:
                        if n2 == nm_str and s2 == sg_str:
                            results.setdefault(cid, []).append([nm_str, sg_str, hex(fn_va)])
                break
    if n_sites and n_sites % 5000 == 0:
        print('sites: %d, resolved: %d' % (n_sites, sum(len(v) for v in results.values())), flush=True)

print('name-ptr sites: %d; resolved: %d across %d classes'
      % (n_sites, sum(len(v) for v in results.values()), len(results)), flush=True)
with open(OUT, 'w') as f:
    json.dump(results, f, indent=1)
print('-> ' + OUT, flush=True)
