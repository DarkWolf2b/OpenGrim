#!/usr/bin/env python3
"""Follow the obfuscator's continuation chains and decompile full bodies.

Pattern in handlers: an indirect jump through a relocated .rdata table:
    (**(code **)(&UNK_<rva> + (cond)*8))();
The table at rva holds runtime VAs (from the v2 dump) pointing at the
continuation code block (in the executable section). Ghidra refuses to
follow these ("jumptable did not pass sanity check"), truncating every
handler at its first continuation.

This script:
1. scans decompiled handler files for UNK_<rva> table references,
2. reads table entries from the v2 decrypted image (runtime VA -> RVA),
3. decompiles each continuation address recursively (bounded),
4. writes the continuation blocks keyed by address for stitching.
"""
import json
import os
import re
import struct
import sys
from collections import OrderedDict

import pyghidra

DLL = 'analysis/ghidra/dumps/jna-decrypted-v2.dll'
IN = 'analysis/ghidra/handlers-full-annotated'
OUT = 'analysis/ghidra/continuations'
IMAGE_BASE = 0x180000000
RUNTIME_BASE = 0x6fffe7c10000
PER_FUNC_TIMEOUT = 90
MAX_CHAIN = 24

os.makedirs(OUT, exist_ok=True)

img = open(DLL, 'rb').read()
orig = open('win/tmp/native/jna1.21.11', 'rb').read()

# section map for file-offset lookup
def sections():
    e = struct.unpack_from('<I', orig, 0x3c)[0]
    coff = e + 4
    nsec = struct.unpack_from('<H', orig, coff + 2)[0]
    optsize = struct.unpack_from('<H', orig, coff + 16)[0]
    secoff = coff + 20 + optsize
    out = []
    for i in range(nsec):
        s = secoff + i * 40
        name = orig[s:s + 8].rstrip(b'\0').decode()
        vsize, vaddr, rawsize, rawptr = struct.unpack_from('<IIII', orig, s + 8)
        out.append((name, vaddr, vsize, rawptr, rawsize))
    return out

SECS = sections()

def fo_of(rva):
    for name, vaddr, vsize, rawptr, rawsize in SECS:
        if vaddr <= rva < vaddr + vsize:
            return rawptr + (rva - vaddr)
    return None

def read_rva(rva, n):
    fo = fo_of(rva)
    if fo is None:
        return None
    return img[fo:fo + n]

# 1. collect all UNK table rvas from decompiled corpus
unk_re = re.compile(r'UNK_(\w{9})')  # 9 hex digits, image VA 0x18........
tables = OrderedDict()
for f in os.listdir(IN):
    for m in unk_re.finditer(open(os.path.join(IN, f), errors='replace').read()):
        rva = int(m.group(1), 16) - IMAGE_BASE if int(m.group(1), 16) >= IMAGE_BASE else int(m.group(1), 16)
        tables[rva] = f
print('distinct jumptables:', len(tables), flush=True)

# 2. read entries -> continuation RVAs
cont_rvas = OrderedDict()
table_entries = {}
for rva, src in tables.items():
    raw = read_rva(rva, 16 * 8)
    if raw is None:
        continue
    ents = []
    for i in range(0, len(raw), 8):
        v = struct.unpack_from('<Q', raw, i)[0]
        if RUNTIME_BASE <= v - 0x1000 < RUNTIME_BASE + 0x1176b000 or RUNTIME_BASE <= v < RUNTIME_BASE + 0x1176b000:
            ents.append(v - RUNTIME_BASE)
    if ents:
        table_entries[rva] = ents
        for c in ents:
            cont_rvas[c] = cont_rvas.get(c, 0) + 1
print('tables with runtime entries:', len(table_entries), 'continuation addrs:', len(cont_rvas), flush=True)
json.dump({hex(k): [hex(e) for e in v] for k, v in table_entries.items()},
          open(os.path.join(OUT, 'tables.json'), 'w'), indent=1)

# 3. decompile all continuation addresses (and chained UNK references inside them)
pyghidra.start()
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

with pyghidra.open_program(DLL, project_location='win/ghidra-proj-dec',
                           project_name='dec', analyze=False) as flat:
    program = flat.getCurrentProgram()
    fm = program.getFunctionManager()
    di = DecompInterface()
    monitor = ConsoleTaskMonitor()
    di.openProgram(program)
    af = program.getAddressFactory().getDefaultAddressSpace()

    def decompile_at(rva):
        addr = af.getAddress(IMAGE_BASE + rva)
        f = fm.getFunctionAt(addr)
        if f is None:
            flat.disassemble(addr)
            f = flat.createFunction(addr, None)
        if f is None:
            return None
        res = di.decompileFunction(f, PER_FUNC_TIMEOUT, monitor)
        if res is not None and res.getDecompiledFunction() is not None:
            return res.getDecompiledFunction().getC()
        return '/* decompile failed: %s */' % (res.getErrorMessage() if res else 'null')

    # build worklist: first-level continuations, then follow UNK refs found inside
    RESUME = os.path.join(OUT, 'blocks-resume.jsonl')
    done_rvas = OrderedDict()
    if os.path.exists(RESUME):
        for line in open(RESUME):
            d = json.loads(line)
            done_rvas[int(d['rva'], 16)] = d['code']
    print('resume: %d blocks already decompiled' % len(done_rvas), flush=True)
    work = [r for r in cont_rvas.keys() if r not in done_rvas]
    chain_count = len(done_rvas)
    resume_f = open(RESUME, 'a')
    while work and len(done_rvas) < 200000:
        rva = work.pop(0)
        if rva in done_rvas:
            continue
        code = decompile_at(rva)
        if code is None:
            code = '/* no function at continuation %x */' % rva
        done_rvas[rva] = code
        resume_f.write(json.dumps({'rva': hex(rva), 'code': code}) + '\n')
        chain_count += 1
        if chain_count % 100 == 0:
            resume_f.flush()
            print('continuations decompiled: %d (queue %d)' % (chain_count, len(work)), flush=True)
        # find further UNK tables inside
        for m in unk_re.finditer(code):
            t = int(m.group(1), 16) - IMAGE_BASE
            if t in table_entries:
                for c in table_entries[t]:
                    if c not in done_rvas:
                        work.append(c)
    resume_f.close()
    print('total continuations: %d' % len(done_rvas), flush=True)

    # write all blocks as one stitched corpus keyed by rva
    p = os.path.join(OUT, 'all-continuations.c')
    with open(p, 'w') as w:
        for rva, code in done_rvas.items():
            w.write('// ===== continuation @ rva %x (image %x) =====\n' % (rva, IMAGE_BASE + rva))
            w.write(code if code is not None else '/* missing */')
            w.write('\n\n')
    print('wrote %d blocks -> %s' % (len(done_rvas), p), flush=True)
