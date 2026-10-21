#!/usr/bin/env python3
"""Diagnose: what do the 17K name-pointer sites actually look like?"""
import json
import struct
from collections import defaultdict

import ahocorasick
import numpy as np

DUMP = 'win/dump/mem-pid216130.bin'
SIGS = json.load(open('analysis/ghidra/native-sigs.json'))

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

name_sites = defaultdict(list)
sig_sites = defaultdict(list)
for s, e, blob in regions:
    text = blob.decode('latin-1')
    for end_idx, tag in A.iter(text):
        i = int(tag)
        val = tag_map[tag]
        va = s + end_idx - len(val)
        (name_sites if i < 2000000 else sig_sites)[va].append(val)

# DLL image mapping region (path contains jna)
dll_regions = [(s, e) for s, e, b in regions]
# find qwords pointing at name strings; print neighborhood qwords
shown = 0
name_va_set = set(name_sites.keys())
for s, e, blob in regions:
    if shown >= 12:
        break
    cnt = len(blob) // 8
    q = np.frombuffer(blob[:cnt * 8], dtype='<u8')
    idx = np.searchsorted(np.array(sorted(name_va_set), dtype=np.uint64), q)
    idx_c = np.minimum(idx, len(name_va_set) - 1)
    all_vas = np.array(sorted(name_va_set), dtype=np.uint64)
    match = all_vas[idx_c] == q
    for h in np.nonzero(match)[0]:
        off = int(h) * 8
        q0 = int(q[h])
        q1 = int(q[h + 1]) if h + 1 < cnt else 0
        q2 = int(q[h + 2]) if h + 2 < cnt else 0
        q3 = int(q[h + 3]) if h + 3 < cnt else 0
        nm = name_sites[q0][0]
        # context: is q1 a sig string? what does the memory around the site look like
        print('site @%x: name=%r q1=%x q2=%x q3=%x | name_sites[q1]=%r sig_sites=%r'
              % (s + off, nm, q1, q2, q3,
                 sig_sites.get(q1, name_sites.get(q1, ['-'])[0][:12] if q1 in name_sites else None),
                 sig_sites.get(q1, ['-'])[:1]))
        shown += 1
        if shown >= 12:
            break
