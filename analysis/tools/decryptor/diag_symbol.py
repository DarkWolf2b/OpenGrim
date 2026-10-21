#!/usr/bin/env python3
"""Resolve the sig-anchored structures: read HotSpot symbols at prev, and
check whether next lands inside the mapped jna1.21.11 image."""
import json
import struct
from collections import defaultdict

import ahocorasick
import numpy as np

DUMP = 'win/dump/mem-pid222702.bin'
SIGS = json.load(open('analysis/ghidra/native-sigs.json'))

regions = []
region_path = {}
with open(DUMP, 'rb') as f:
    assert f.read(5) == b'WMEM2'
    n = struct.unpack('<I', f.read(4))[0]
    for _ in range(n):
        s, e, plen, palen = struct.unpack('<QQII', f.read(24))
        path = f.read(palen).decode('latin-1')
        f.read(plen)
        blob = f.read(e - s)
        if len(blob) == e - s:
            regions.append((s, e, blob))
            region_path[s] = path

def region_of(va):
    for s, e, _ in regions:
        if s <= va < e:
            return region_path.get(s, '?')
    return None

def read_at(va, length):
    for s, e, blob in regions:
        if s <= va < e:
            return blob[va - s:va - s + length]
    return None

def symbol_at(va):
    """HotSpot Symbol: [u2 len][utf8...]"""
    b = read_at(va, 2)
    if b is None or len(b) < 2:
        return None
    ln = struct.unpack('<H', b)[0]
    if ln == 0 or ln > 200:
        return None
    body = read_at(va + 2, ln)
    if body is None:
        return None
    return body.decode('latin-1')

names = sorted({nm for pairs in SIGS.values() for nm, _ in pairs})
sigs = sorted({sg for pairs in SIGS.values() for _, sg in pairs})
long_sigs = [sg for sg in sigs if len(sg) >= 12]
A = ahocorasick.Automaton()
tag_map = {}
for i, nm in enumerate(names):
    tag_map[str(i)] = nm
    A.add_word(nm.encode().decode('latin-1') + '\0', str(i))
for j, sg in enumerate(long_sigs):
    tag_map[str(2000000 + j)] = sg
    A.add_word(sg.encode().decode('latin-1') + '\0', str(2000000 + j))
A.make_automaton()

sig_sites = {}
for s, e, blob in regions:
    text = blob.decode('latin-1')
    for end_idx, tag in A.iter(text):
        i = int(tag)
        if i >= 2000000:
            va = s + end_idx - len(tag_map[tag])
            sig_sites[va] = tag_map[tag]

all_sig_vas = np.array(sorted(sig_sites.keys()), dtype=np.uint64)
shown = 0
resolved = defaultdict(list)
for s, e, blob in regions:
    if shown >= 25:
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
        sg = sig_sites[int(all_sig_vas[idx_c[h]])]
        nm_prev = symbol_at(q_prev) if q_prev else None
        path_next = region_of(q_next)
        print('sig=%r | name_symbol(prev)=%r | next=%x region=%s'
              % (sg, nm_prev, q_next, (path_next or 'unmapped')[:60]), flush=True)
        if nm_prev:
            for cid, pairs in SIGS.items():
                for n2, s2 in pairs:
                    if n2 == nm_prev and s2 == sg:
                        resolved[cid].append([nm_prev, sg, hex(q_next)])
        shown += 1
        if shown >= 25:
            break

print('resolved classes:', {k: v[:3] for k, v in resolved.items()}, flush=True)
with open('analysis/ghidra/native-handlers-runtime.json', 'w') as f:
    json.dump(resolved, f, indent=1)
