#!/usr/bin/env python3
"""Empirically determine the JNINativeMethod struct layout in the dump:
count sig-pointer sites; classify qwords around name-pointer sites."""
import json
import struct
from collections import defaultdict, Counter

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
print('regions: %d, total GB: %.3f' % (len(regions), sum(e - s for _, e, _ in regions) / 1e9), flush=True)

names = sorted({nm for pairs in SIGS.values() for nm, _ in pairs})
sigs = sorted({sg for pairs in SIGS.values() for _, sg in pairs})
A = ahocorasick.Automaton()
tag_map = {}
for i, nm in enumerate(names):
    tag_map[str(i)] = ('N', nm)
    A.add_word(nm.encode().decode('latin-1') + '\0', str(i))
for j, sg in enumerate(sigs):
    tag_map[str(2000000 + j)] = ('S', sg)
    A.add_word(sg.encode().decode('latin-1') + '\0', str(2000000 + j))
A.make_automaton()

name_sites = {}
sig_sites = {}
for s, e, blob in regions:
    text = blob.decode('latin-1')
    for end_idx, tag in A.iter(text):
        kind, val = tag_map[tag]
        va = s + end_idx - len(val)
        (name_sites if kind == 'N' else sig_sites)[va] = val
print('name VAs: %d, sig VAs: %d' % (len(name_sites), len(sig_sites)), flush=True)

all_name_vas = np.array(sorted(name_sites.keys()), dtype=np.uint64)
all_sig_vas = np.array(sorted(sig_sites.keys()), dtype=np.uint64)

sig_ptr_count = 0
layout_counter = Counter()
samples = []
for s, e, blob in regions:
    if len(blob) < 48:
        continue
    cnt = len(blob) // 8
    q = np.frombuffer(blob[:cnt * 8], dtype='<u8')
    # sig pointers: how many qwords point at a sig string?
    s_idx = np.searchsorted(all_sig_vas, q)
    s_idx_c = np.minimum(s_idx, len(all_sig_vas) - 1)
    sig_hit = all_sig_vas[s_idx_c] == q
    sig_ptr_count += int(sig_hit.sum())
    # name pointers
    n_idx = np.searchsorted(all_name_vas, q)
    n_idx_c = np.minimum(n_idx, len(all_name_vas) - 1)
    name_hit = all_name_vas[n_idx_c] == q
    for h in np.nonzero(name_hit)[0]:
        # classify q[h-3..h+3]: N=name ptr, S=sig ptr, . = neither
        tags = []
        for d in (-3, -2, -1, 0, 1, 2, 3):
            k = h + d
            if k < 0 or k >= cnt:
                tags.append('|')
            elif d == 0:
                tags.append('N')
            elif sig_hit[k]:
                tags.append('S')
            elif name_hit[k]:
                tags.append('n')  # another name ptr
            else:
                tags.append('.')
        layout_counter[''.join(tags)] += 1
        if len(samples) < 8 and 'S' in ''.join(tags):
            i0 = int(h)
            nm = name_sites[int(all_name_vas[n_idx_c[i0]])]
            samples.append((hex(s + off if False else s + i0 * 8), nm, ''.join(tags)))

print('sig-pointer qwords total: %d' % sig_ptr_count, flush=True)
print('layout patterns around name ptrs:', layout_counter.most_common(10), flush=True)
for sm in samples:
    print('sample with S nearby:', sm, flush=True)
