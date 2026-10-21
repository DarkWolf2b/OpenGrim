#!/usr/bin/env python3
"""Sig-anchored handler resolution: for each sig-pointer site, find the
nearest name pointer (identifies class+method) and the nearest qword inside
the DLL code range (the handler)."""
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
    n = struct.unpack_from('<I', f.read(4))[0]
    for _ in range(n):
        s, e, plen, palen = struct.unpack('<QQII', f.read(24))
        f.read(plen + palen)
        blob = f.read(e - s)
        if len(blob) == e - s:
            regions.append((s, e, blob))

# DLL code range: the big r-xp region
code_lo = code_hi = None
for s, e, blob in regions:
    if (e - s) > 100 * 1024 * 1024:
        # find path-less r-xp region in the 0x6ffff range
        pass
# locate via region index paths
import re as _re
with open(DUMP, 'rb') as f:
    f.read(9)
    for _ in range(n):
        s, e, plen, palen = struct.unpack('<QQII', f.read(24))
        perms = f.read(plen).decode('latin-1')
        path = f.read(palen).decode('latin-1')
        if 'jna1.21.11' in path:
            print('jna region: %x..%x %s' % (s, e, perms), flush=True)
        if (e - s) > 100 * 1024 * 1024 and s > 0x6ffff0000000:
            print('big region: %x..%x %s' % (s, e, perms), flush=True)
        f.seek(e - s, 1)

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

all_sig_vas = np.array(sorted(sig_sites.keys()), dtype=np.uint64)
all_name_vas = np.array(sorted(name_sites.keys()), dtype=np.uint64)

# code range from the big r-xp region: hardcode after inspecting
code_lo, code_hi = 0x6fffeaf5f000, 0x6ffff8b03000

resolved = defaultdict(list)
seen_triples = set()
for s, e, blob in regions:
    cnt = len(blob) // 8
    q = np.frombuffer(blob[:cnt * 8], dtype='<u8')
    s_idx = np.searchsorted(all_sig_vas, q)
    s_idx_c = np.minimum(s_idx, len(all_sig_vas) - 1)
    sig_hit = all_sig_vas[s_idx_c] == q
    for h in np.nonzero(sig_hit)[0]:
        sg = sig_sites[int(all_sig_vas[s_idx_c[h]])]
        # search ±4 qwords for name ptr and fn ptr
        nm = None
        fn = None
        for d in range(-4, 5):
            k = h + d
            if k < 0 or k >= cnt:
                continue
            v = int(q[k])
            if v in name_sites and nm is None and d != 0:
                nm = name_sites[v]
            if code_lo <= v < code_hi and d != 0:
                fn = v
        if nm is None or fn is None:
            continue
        sg_str = sg
        for cid, pairs in SIGS.items():
            for n2, s2 in pairs:
                if n2 == nm and s2 == sg_str:
                    key = (cid, nm, sg_str)
                    if key not in seen_triples:
                        seen_triples.add(key)
                        resolved[cid].append([nm, sg_str, hex(fn)])
print('resolved: %d methods across %d classes' % (sum(len(v) for v in resolved.values()), len(resolved)), flush=True)
for cid in sorted(resolved)[:10]:
    print(cid, resolved[cid][:3], flush=True)
with open('analysis/ghidra/native-handlers-runtime.json', 'w') as f:
    json.dump(resolved, f, indent=1)
print('-> analysis/ghidra/native-handlers-runtime.json', flush=True)
