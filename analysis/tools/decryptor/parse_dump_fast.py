#!/usr/bin/env python3
"""Self-synchronizing dump parser: finds runtime JNINativeMethod triples in a
wine process memory dump. Tolerates short blobs / desync by realigning on the
next plausible region header."""
import json
import re
import struct
import sys
from collections import defaultdict

import ahocorasick
import numpy as np

DUMP = sys.argv[1] if len(sys.argv) > 1 else '/workspace/win/dump/mem-pid216130.bin'
SIGS = json.load(open('/workspace/analysis/ghidra/native-sigs.json'))
OUT = '/workspace/analysis/ghidra/native-handlers-runtime.json'

data = open(DUMP, 'rb').read()
assert data[:5] == b'WMEM2'
n = struct.unpack_from('<I', data, 5)[0]
pos = 9

regions = []
HEADER = re.compile(rb'([r-][w-][x-][ps-]) (\S{1,64})')
implausible = 0
for _ in range(n):
    if pos + 24 > len(data):
        break
    s, e, plen, palen = struct.unpack_from('<QQII', data, pos)
    plausible = s < e and (e - s) < (1 << 30) and plen <= 8 and palen < 4096
    if not plausible:
        implausible += 1
        # resync: find next perms+path signature after pos
        m = HEADER.search(data, pos + 24, len(data))
        if m is None:
            break
        # header starts 16+4+4 bytes before perms; try back-scan up to 64 bytes
        found = False
        for back in range(0, 96):
            start = (m.start() - 24 - back)
            if start <= pos:
                break
            s2, e2, pl2, pal2 = struct.unpack_from('<QQII', data, start)
            if s2 < e2 and (e2 - s2) < (1 << 30) and pl2 <= 8 and pal2 < 4096:
                p2 = f.read(0)  # noqa
                perms2 = data[start + 24:start + 24 + pl2]
                path2 = data[start + 24 + pl2:start + 24 + pl2 + pal2]
                if perms2 == m.group(1) or data[start + 24:start + 24 + pl2] == m.group(1):
                    pos = start
                    s, e, plen, palen = s2, e2, pl2, pal2
                    found = True
                    break
        if not found:
            pos = m.start() + 24
            continue
    pos += 24
    perms = data[pos:pos + plen]
    pos += plen + palen
    blob = data[pos:pos + (e - s)]
    pos += len(blob)
    regions.append((s, e, blob))
    if len(regions) % 200 == 0:
        print('regions parsed: %d (implausible headers so far: %d)' % (len(regions), implausible), flush=True)

print('regions: %d (skipped implausible: %d), total %.2f GB'
      % (len(regions), implausible, sum(e - s for _, e, _ in regions) / 1e9), flush=True)

names = sorted({nm for pairs in SIGS.values() for nm, _ in pairs})
sigs = sorted({sg for pairs in SIGS.values() for _, sg in pairs})
name_to_class_sigs = defaultdict(set)
for cid, pairs in SIGS.items():
    for nm, sg in pairs:
        name_to_class_sigs[nm].add((sg, cid))

A = ahocorasick.Automaton()
tag_map = {}
for i, nm in enumerate(names):
    tag_map[str(i)] = ('N', nm)
    A.add_word(nm.encode().decode('latin-1') + '\0', str(i))
for j, sg in enumerate(sigs):
    tag_map[str(1000000 + j)] = ('S', sg)
    A.add_word(sg.encode().decode('latin-1') + '\0', str(1000000 + j))
A.make_automaton()
print('automaton built', flush=True)

name_sites = defaultdict(list)
sig_sites = defaultdict(list)
for s, e, blob in regions:
    text = blob.decode('latin-1')
    for end_idx, tag in A.iter(text):
        kind, val = tag_map[tag]
        va = s + end_idx - len(val)
        (name_sites if kind == 'N' else sig_sites)[va].append(val)
print('name string VAs: %d, sig string VAs: %d' % (len(name_sites), len(sig_sites)), flush=True)

sig_va_keys = np.array(sorted(sig_sites.keys()), dtype=np.uint64)
all_name_vas = np.array(sorted(name_sites.keys()), dtype=np.uint64)
all_sig_vas = np.array(sorted(sig_sites.keys()), dtype=np.uint64)
resolved = defaultdict(list)
n_sites = 0
for s, e, blob in regions:
    if len(blob) < 24:
        continue
    cnt = len(blob) // 8
    q = np.frombuffer(blob[:cnt * 8], dtype='<u8')
    idx = np.searchsorted(all_name_vas, q)
    idx_c = np.minimum(idx, len(all_name_vas) - 1)
    name_match = all_name_vas[idx_c] == q
    for h in np.nonzero(name_match)[0]:
        off = int(h) * 8
        if off + 24 > len(blob):
            continue
        n_sites += 1
        sig_va = int(q[h + 1])
        fn_va = int(q[h + 2])
        s_idx = np.searchsorted(all_sig_vas, np.uint64(sig_va))
        s_idx_c = min(int(s_idx), len(all_sig_vas) - 1)
        if int(all_sig_vas[s_idx_c]) != sig_va:
            continue
        if fn_va == 0:
            continue
        nm_str = name_sites[int(all_name_vas[idx_c[h]])][0].decode()
        for sg_str in {x.decode() for x in sig_sites[int(all_sig_vas[s_idx_c])]}:
            for cid in name_to_class_sigs.get(nm_str, ()):
                if (sg_str, cid) in name_to_class_sigs[nm_str]:
                    resolved[cid].append([nm_str, sg_str, hex(fn_va)])
    if n_sites and n_sites % 100000 == 0:
        print('sites: %d, resolved: %d' % (n_sites, sum(len(v) for v in resolved.values())), flush=True)
print('name-ptr sites: %d, resolved: %d across %d classes'
      % (n_sites, sum(len(v) for v in resolved.values()), len(resolved)), flush=True)

with open(OUT, 'w') as f:
    json.dump(resolved, f, indent=1)
print('-> ' + OUT, flush=True)
