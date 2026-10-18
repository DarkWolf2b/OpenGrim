#!/usr/bin/env python3
"""Diagnose: anchor on LONG sig strings (unique), inspect neighboring qwords."""
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
    n = struct.unpack('<I', f.read(4))[0]
    for _ in range(n):
        s, e, plen, palen = struct.unpack('<QQII', f.read(24))
        f.read(plen + palen)
        blob = f.read(e - s)
        if len(blob) == e - s:
            regions.append((s, e, blob))

names = sorted({nm for pairs in SIGS.values() for nm, _ in pairs})
sigs = sorted({sg for pairs in SIGS.values() for _, sg in pairs})
long_sigs = [sg for sg in sigs if len(sg) >= 12]
print('sigs: %d, long sigs (>=12): %d' % (len(sigs), len(long_sigs)), flush=True)

A = ahocorasick.Automaton()
tag_map = {}
for i, nm in enumerate(names):
    tag_map[str(i)] = nm
    A.add_word(nm.encode().decode('latin-1') + '\0', str(i))
for j, sg in enumerate(long_sigs):
    tag_map[str(2000000 + j)] = sg
    A.add_word(sg.encode().decode('latin-1') + '\0', str(2000000 + j))
A.make_automaton()

sig_sites = defaultdict(list)   # VA -> sig str
name_sites = defaultdict(list)  # VA -> name str
for s, e, blob in regions:
    text = blob.decode('latin-1')
    for end_idx, tag in A.iter(text):
        i = int(tag)
        val = tag_map[tag]
        va = s + end_idx - len(val)
        (sig_sites if i >= 2000000 else name_sites)[va].append(val)
print('sig VAs: %d, name VAs: %d' % (len(sig_sites), len(name_sites)), flush=True)

all_sig_vas = np.array(sorted(sig_sites.keys()), dtype=np.uint64)
shown = 0
resolved = defaultdict(list)
for s, e, blob in regions:
    if shown >= 20:
        break
    cnt = len(blob) // 8
    q = np.frombuffer(blob[:cnt * 8], dtype='<u8')
    idx = np.searchsorted(all_sig_vas, q)
    idx_c = np.minimum(idx, len(all_sig_vas) - 1)
    match = all_sig_vas[idx_c] == q
    for h in np.nonzero(match)[0]:
        off = int(h) * 8
        q_prev = int(q[h - 1]) if h > 0 else 0
        q_next = int(q[h + 1]) if h + 1 < cnt else 0
        sg = sig_sites[int(all_sig_vas[idx_c[h]])][0]
        nm_prev = name_sites.get(q_prev, [None])[0]
        nm_next = name_sites.get(q_next, [None])[0]
        print('sig=%r @%x | prev=%x (%r) | next=%x (%r)'
              % (sg, s + off, q_prev, nm_prev, q_next, nm_next), flush=True)
        if nm_prev or nm_next:
            nm = nm_prev or nm_next
            for cid, pairs in SIGS.items():
                for n2, s2 in pairs:
                    if n2 == nm and s2 == sg:
                        resolved[cid].append([nm, sg, hex(q_next if nm_next else q_prev - 16)])
        shown += 1
        if shown >= 20:
            break

print('resolved so far:', {k: v[:2] for k, v in resolved.items()}, flush=True)
