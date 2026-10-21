#!/usr/bin/env python3
"""Decompile ALL mapped native handlers (446 classes) from the decrypted
image via pyghidra, writing per-class C files. Reads the union bind log;
maps runtime VAs to image RVAs; decompiles per function with resume support.
"""
import json
import os
import sys
from collections import defaultdict

import pyghidra

BINDLOG = 'analysis/ghidra/native-handlers-final.jsonl'
DLL = 'analysis/ghidra/dumps/jna-decrypted-invoke.dll'
RUNTIME_BASE = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x6fffe7c10000
IMAGE_BASE = 0x180000000
OUTDIR = 'analysis/ghidra/handlers-full'
PER_FUNC_TIMEOUT = 90

os.makedirs(OUTDIR, exist_ok=True)

classes = defaultdict(list)
for line in open(BINDLOG):
    d = json.loads(line)
    if d.get('class', '').startswith('Lsixtwo/'):
        classes[d['class']].append(d)
total = sum(len(v) for v in classes.values())
print('sixtwo bindings: %d across %d classes' % (total, len(classes)), flush=True)

pyghidra.start()
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

with pyghidra.open_program(DLL,
                           project_location='win/ghidra-proj-dec',
                           project_name='dec', analyze=False) as flat:
    program = flat.getCurrentProgram()
    fm = program.getFunctionManager()
    di = DecompInterface()
    monitor = ConsoleTaskMonitor()
    di.openProgram(program)
    addr_space = program.getAddressFactory().getDefaultAddressSpace()

    ok = fail = 0
    per_class_files = {}
    for ci, (cls, entries) in enumerate(sorted(classes.items())):
        cid_path = cls[1:-1].replace('/', '_')
        path = os.path.join(OUTDIR, cid_path + '.c')
        # resume: skip classes already fully written
        if os.path.exists(path) and os.path.getsize(path) > 0:
            have = sum(1 for l in open(path, errors='replace') if l.startswith('// ===== Lsixtwo'))
            if have >= len(entries):
                ok += len(entries)
                continue
        out = open(path, 'a' if os.path.exists(path) else 'w')
        if os.path.getsize(path) > 0:
            out.write('\n')
        for d in entries:
            mname, sig, va = d['method'], d['sig'], int(d['addr'], 16)
            img = IMAGE_BASE + (va - RUNTIME_BASE)
            try:
                addr = addr_space.getAddress(img)
                f = fm.getFunctionAt(addr)
                if f is None:
                    flat.disassemble(addr)
                    f = flat.createFunction(addr, None)
                if f is None:
                    raise RuntimeError('no function at %x' % img)
                res = di.decompileFunction(f, PER_FUNC_TIMEOUT, monitor)
                if res is not None and res.getDecompiledFunction() is not None:
                    code = res.getDecompiledFunction().getC()
                    ok += 1
                else:
                    code = '/* decompile failed: %s */' % (res.getErrorMessage() if res else 'null')
                    fail += 1
            except Exception as e:
                code = '/* exception: %s */' % e
                fail += 1
            out.write('// ===== %s %s %s (handler @ image %x, runtime %x) =====\n' % (cls, mname, sig, img, va))
            out.write(code)
            out.write('\n\n')
        out.close()
        print('class %d/%d %s (%d handlers)' % (ci + 1, len(classes), cls, len(entries)), flush=True)
    di.dispose()

print('DONE: %d decompiled, %d failed -> %s' % (ok, fail, OUTDIR), flush=True)
