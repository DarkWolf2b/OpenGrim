#!/usr/bin/env python3
"""Scan the DLL's mapped .data/.globals for qwords pointing into its code
range (handler pointers); resolve names/sigs nearby."""
import json
import struct
from collections import defaultdict

import ahocorasick
import numpy as np

DUMP = '/workspace/win/dump/mem-pid216130.bin'
SIGS = json.load(open('/workspace/analysis/ghidra/native-sigs.json'))

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

# DLL mapped span: from the region index, jna1.21.11 regions + the big r-xp
dll_lo, dll_hi = 0x6fffe7a60000, 0x6ffff8b04000
code_lo, code_hi = 0x6fffeaf5f000, 0x6ffff8b03000

dll_data_regions = [(s, e, b) for (s, e, b) in regions
                    if dll_lo <= s < dll_hi and not (code_lo <= s and e <= code_hi)]
print('DLL data/header regions: %d, total %d KB'
      % (len(dll_data_regions), sum(e - s for _, e, _ in dll_data_regions) // 1024), flush=True)

names = sorted({nm for pairs in SIGS.values() for nm, _ in pairs})
sigs = sorted({sg for pairs in SIGS.values() for _, sg in pairs})
A = ahocorasick.Automaton()
tag_map = {}
for i, nm in enumerate(names):
    tag_map[str(i)] = nm
    A.add_word(nm.encode().decode('latin-1') + '\0', str(i))
for j, sg in enumerate(sigs):
    tag_map[str(2000000 + j)] = sg
    A.add_word(sg.encode().decode('latin-1') + '\0', str(2000000 + j))
A.make_automaton()

name_sites = {}
sig_sites = {}
for s, e, blob in regions:
    text = blob.decode('latin-1')
    for end_idx, tag in A.iter(text):
        i = int(tag)
        val = tag_map[tag]
        va = s + end_idx - len(val)
        (name_sites if i < 2000000 else sig_sites)[va] = val
print('name VAs: %d, sig VAs: %d' % (len(name_sites), len(sig_sites)), flush=True)

all_name_vas = np.array(sorted(name_sites.keys()), dtype=np.uint64)
all_sig_vas = np.array(sorted(sig_sites.keys()), dtype=np.uint64)

handler_ptrs = 0
resolved = defaultdict(list)
samples = []
for s, e, blob in dll_data_regions:
    cnt = len(blob) // 8
    q = np.frombuffer(blob[:cnt * 8], dtype='<u8')
    in_code = (q >= np.uint64(code_lo)) & (q < np.uint64(code_hi))
    handler_ptrs += int(in_code.sum())
    for h in np.nonzero(in_code)[0]:
        fn = int(q[h])
        nm = None
        sg = None
        for d in range(-8, 9):
            k = h + d
            if k < 0 or k >= cnt:
                continue
            v = int(q[k])
            if v in name_sites and nm is None:
                nm = name_sites[v]
            if v in sig_sites and sg is None:
                sg = sig_sites[v]
        if nm:
            for cid, pairs in SIGS.items():
                for n2, s2 in pairs:
                    if n2 == nm and (sg is None or s2 == sg):
                        resolved[cid].append([nm, s2 if sg is None else sg, hex(fn)])
        if len(samples) < 8:
            samples.append((hex(s + h * 8), hex(fn), nm, sg))
print('handler-pointer qwords in DLL data: %d' % handler_ptrs, flush=True)
for sm in samples:
    print('sample:', sm, flush=True)
print('resolved: %d across %d classes' % (sum(len(v) for v in resolved.values()), len(resolved)), flush=True)
with open('/workspace/analysis/ghidra/native-handlers-runtime.json', 'w') as f:
    json.dump(resolved, f, indent=1)
