#!/usr/bin/env python3
"""Map per-class native methods to their DLL handler functions.

Idea: the DLL registers natives via JNINativeMethod {const char* name,
char* sig, void* fnPtr} triples. The name/sig strings exist in the image.
One pass builds a qword->offsets index; name-string addresses then locate
candidate structs; sig pointers validate; fn pointers are the handlers.

Output: analysis/ghidra/native-handlers.json  {class: [[name, sig, fnAddr]]}
"""
import json
import struct
import sys

DLL = 'binaries/native/jna1.21.11'
SIGS = 'analysis/ghidra/native-sigs.json'
OUT = 'analysis/ghidra/native-handlers.json'

data = open(DLL, 'rb').read()
print('loaded %d bytes' % len(data), flush=True)

sigs = json.load(open(SIGS))

# --- PE section table: map file offsets -> image addresses (and exec flag) ---
pe_off = struct.unpack_from('<I', data, 0x3C)[0]
num_sections = struct.unpack_from('<H', data, pe_off + 6)[0]
opt_size = struct.unpack_from('<H', data, pe_off + 20)[0]
sec_off = pe_off + 24 + opt_size
image_base = struct.unpack_from('<Q', data, pe_off + 24 + 24)[0]
sections = []
for i in range(num_sections):
    o = sec_off + i * 40
    name = data[o:o + 8].rstrip(b'\0').decode('ascii', 'replace')
    vsize, vaddr, rsize, roff = struct.unpack_from('<IIII', data, o + 8)
    chars = struct.unpack_from('<I', data, o + 36)[0]
    sections.append((name, vaddr, vsize, roff, rsize, bool(chars & 0x20000000)))
    print('section %-8s va=%x size=%x exec=%s' % (name, vaddr, vsize, bool(chars & 0x20000000)), flush=True)

def file_to_va(off):
    for name, vaddr, vsize, roff, rsize, _exec in sections:
        if roff <= off < roff + rsize:
            return image_base + vaddr + (off - roff)
    return None

def va_to_file(va):
    rva = va - image_base
    for name, vaddr, vsize, roff, rsize, _exec in sections:
        if vaddr <= rva < vaddr + vsize:
            if rva - vaddr < rsize:
                return roff + (rva - vaddr)
            return None
    return None

# --- pass 1: locate name and sig strings ---
names = set()
sigs_set = set()
for cid, pairs in sigs.items():
    for nm, sg in pairs:
        names.add(nm.encode())
        sigs_set.add(sg.encode())
print('unique name strings: %d, sig strings: %d' % (len(names), len(sigs_set)), flush=True)

name_addr = {}   # bytes -> set of VAs where the NUL-terminated string starts
for s in names:
    needle = s + b'\0'
    start = 0
    while True:
        i = data.find(needle, start)
        if i < 0:
            break
        va = file_to_va(i)
        if va is not None:
            name_addr.setdefault(va, s)
        start = i + 1

sig_addr = {}   # VA -> sig bytes
for s in sigs_set:
    needle = s + b'\0'
    start = 0
    count = 0
    while count < 20:
        i = data.find(needle, start)
        if i < 0:
            break
        va = file_to_va(i)
        if va is not None:
            sig_addr[va] = s
        start = i + 1
        count += 1
print('name string VAs: %d, sig string VAs: %d' % (len(name_addr), len(sig_addr)), flush=True)

# --- pass 2: scan qwords for pointers to name strings; validate JNINativeMethod ---
results = {}   # class -> [[name, sig, fnVA]]
n_ptr_sites = 0
step = 8
limit = len(data) - 24
for off in range(0, limit, step):
    v = struct.unpack_from('<Q', data, off)[0]
    nm_bytes = name_addr.get(v)
    if nm_bytes is None:
        continue
    n_ptr_sites += 1
    sig_va = struct.unpack_from('<Q', data, off + 8)[0]
    fn_va = struct.unpack_from('<Q', data, off + 16)[0]
    sg = sig_addr.get(sig_va)
    if sg is None:
        continue
    # find owning class: matches (name bytes, sig bytes)
    nm_str = nm_bytes.decode()
    sg_str = sg.decode()
    for cid, pairs in sigs.items():
        for nm2, sg2 in pairs:
            if nm2 == nm_str and sg2 == sg_str:
                results.setdefault(cid, []).append([nm_str, sg_str, hex(fn_va)])
print('candidate name-ptr sites: %d; resolved structs: %d across %d classes'
      % (n_ptr_sites, sum(len(v) for v in results.values()), len(results)), flush=True)

with open(OUT, 'w') as f:
    json.dump(results, f, indent=1)
print('-> ' + OUT, flush=True)
