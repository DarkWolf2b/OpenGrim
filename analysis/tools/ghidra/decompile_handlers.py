#!/usr/bin/env python3
"""Decompile all mapped native handlers per class via pyghidra.
Reads native-bind-log.jsonl (runtime VAs), maps to image addresses, writes
per-class C files + a summary."""
import json
import os
import re
from collections import defaultdict

import pyghidra

BINDLOG = '/workspace/win/native-bind-log.jsonl'
RUNTIME_BASE = 0x6fffe7a60000   # stable wine load base for jna1.21.11
IMAGE_BASE = 0x180000000        # PE image base used by ghidra loader
OUTDIR = '/workspace/analysis/ghidra/handlers'
PER_FUNC_TIMEOUT = 60

os.makedirs(OUTDIR, exist_ok=True)

entries = []
for line in open(BINDLOG):
    try:
        d = json.loads(line)
    except Exception:
        continue
    if d.get('class', '').startswith('Lsixtwo/'):
        entries.append(d)
print('sixtwo bindings: %d' % len(entries), flush=True)

pyghidra.start()
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

with pyghidra.open_program('/workspace/binaries/native/jna1.21.11',
                           project_location='/workspace/binaries/ghidra-proj/pydeep',
                           project_name='pydeep', analyze=False) as flat:
    program = flat.getCurrentProgram()
    fm = program.getFunctionManager()
    di = DecompInterface()
    monitor = ConsoleTaskMonitor()
    di.openProgram(program)
    addr_space = program.getAddressFactory().getDefaultAddressSpace()

    ok = fail = 0
    per_class_files = {}
    # resume: collect already-decompiled (class, name, sig) from existing files
    done_keys = set()
    hdr_re = re.compile(r'// ===== (\S+) (\S+) (.*?) \(handler @ image (\S+), runtime (\S+)\) =====')
    for existing in os.listdir(OUTDIR):
        try:
            for line in open(os.path.join(OUTDIR, existing)):
                if line.startswith('// ===== Lsixtwo/'):
                    m = hdr_re.match(line.strip())
                    if m:
                        done_keys.add((m.group(1), m.group(2), m.group(3)))
        except Exception:
            pass
    print('resume: %d already decompiled' % len(done_keys), flush=True)
    for k, d in enumerate(entries):
        cls = d['class']            # Lsixtwo/fr;
        mname = d['method']
        sig = d['sig']
        va = int(d['addr'], 16)
        rva = va - RUNTIME_BASE
        img = IMAGE_BASE + rva
        cid_path = cls[1:-1].replace('/', '_')   # sixtwo_fr
        if (cls, mname, sig) in done_keys:
            continue
        try:
            addr = addr_space.getAddress(img)
            f = fm.getFunctionAt(addr)
            if f is None:
                flat.disassemble(addr)
                f = flat.createFunction(addr, None)
            if f is None:
                raise RuntimeError('no function')
            res = di.decompileFunction(f, PER_FUNC_TIMEOUT, monitor)
            if res is not None and res.getDecompiledFunction() is not None:
                code = res.getDecompiledFunction().getC()
                ok += 1
            else:
                code = '/* decompile failed: %s */' % (res.getErrorMessage() if res else 'null')
                fail += 1
        except Exception as e:
            import traceback, sys
            if fail == 0:
                traceback.print_exc()
            code = '/* exception: %s */' % e
            fail += 1
        out = per_class_files.get(cid_path)
        if out is None:
            path = os.path.join(OUTDIR, cid_path + '.c')
            exists = os.path.exists(path) and os.path.getsize(path) > 0
            out = open(path, 'a' if exists else 'w')
            if exists:
                out.write('\n')
            per_class_files[cid_path] = out
        out.write('// ===== %s %s %s (handler @ image %x, runtime %x) =====\n'
                  % (cls, mname, sig, img, va))
        out.write(code)
        out.write('\n\n')
        if (k + 1) % 50 == 0:
            print('progress: %d/%d (ok=%d fail=%d)' % (k + 1, len(entries), ok, fail), flush=True)

    for fobj in per_class_files.values():
        fobj.close()
    di.dispose()

print('DONE: %d decompiled, %d failed -> %s' % (ok, fail, OUTDIR), flush=True)
