#!/usr/bin/env python3
"""Dump the memory of the running PoolDump Wine JVM (decryptor path) and
extract runtime-built JNINativeMethod triples {char* name, char* sig, void* fn}.

Usage: dump_wine_mem.py <output_dir>
Finds java.exe wine processes, dumps their maps+mem, then scans the dump for
the native name strings (pointer-referenced) and resolves (name,sig,fn) triples.
"""
import os
import re
import struct
import sys
import json
import glob

OUT_DIR = sys.argv[1] if len(sys.argv) > 1 else 'win/dump'
os.makedirs(OUT_DIR, exist_ok=True)

# name strings the JVM passes to RegisterNatives come from the class files
SIGS = json.load(open('analysis/ghidra/native-sigs.json'))
all_names = sorted({nm for pairs in SIGS.values() for nm, _ in pairs}, key=len, reverse=True)
sig_set = set()
for pairs in SIGS.values():
    for _, sg in pairs:
        sig_set.add(sg.encode())

def find_pids():
    pids = []
    for statm in glob.glob('/proc/[0-9]*/comm'):
        try:
            comm = open(statm).read().strip()
        except Exception:
            continue
        if comm in ('java.exe', 'java', 'wine64-preloader', 'wine-preloader'):
            pid = int(statm.split('/')[2])
            try:
                cmdline = open('/proc/%d/cmdline' % pid, 'rb').read().decode('utf8', 'replace')
            except Exception:
                continue
            if 'java' in comm or 'PoolDump' in cmdline or 'java.exe' in cmdline:
                pids.append((pid, comm, cmdline[:120]))
    return pids

pids = find_pids()
print('candidate wine processes:')
for pid, comm, cmd in pids:
    print('  pid=%d comm=%s cmd=%s' % (pid, comm, cmd))

if not pids:
    print('NO WINE JVM PROCESS FOUND — is PoolDump running with POOLDUMP_SLEEP?')
    sys.exit(1)

for pid, comm, cmd in pids:
    # the java.exe process is the one with a big heap; dump its readable regions
    maps = open('/proc/%d/maps' % pid).read().splitlines()
    dump_ranges = []
    total = 0
    for line in maps:
        m = re.match(r'([0-9a-f]+)-([0-9a-f]+)\s+(\S+)\s+\S+\s+\S+\s+\S+\s*(.*)', line)
        if not m:
            continue
        s, e, perms, path = int(m.group(1), 16), int(m.group(2), 16), m.group(3), m.group(4).strip()
        if 'r' not in perms:
            continue
        # keep every readable region (chunked reads handle the big heap)
        dump_ranges.append((s, e, perms, path))
        total += e - s
    print('pid %d: %d regions, %.2f GB to dump' % (pid, len(dump_ranges), total / 1e9))
    outpath = os.path.join(OUT_DIR, 'mem-pid%d.bin' % pid)
    with open(outpath, 'wb') as out:
        out.write(b'WMEM2')
        out.write(struct.pack('<I', len(dump_ranges)))
        with open('/proc/%d/mem' % pid, 'rb') as mem:
            for s, e, perms, path in dump_ranges:
                pb = path.encode()
                out.write(struct.pack('<QQII', s, e, len(perms), len(pb)))
                out.write(perms.encode())
                out.write(pb)
                try:
                    mem.seek(s)
                    blob = mem.read(e - s)
                    if len(blob) < e - s:
                        blob = blob + b'\0' * (e - s - len(blob))
                except Exception:
                    blob = b'\0' * (e - s)
                out.write(blob)
    print('dumped -> %s (%.2f GB)' % (outpath, os.path.getsize(outpath) / 1e9))
print('DUMP_DONE')
