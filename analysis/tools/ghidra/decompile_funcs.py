#!/usr/bin/env python3
"""Decompile specific image functions (blob decryptor + chain) from the
decrypted image. Usage: decompile_funcs.py <image_rva_hex> [...more]"""
import sys
import os
import pyghidra

DLL = '/workspace/analysis/ghidra/dumps/jna-decrypted-invoke.dll'
IMAGE_BASE = 0x180000000
OUT = '/workspace/analysis/ghidra/funcs'
os.makedirs(OUT, exist_ok=True)

rvas = [int(a, 16) for a in sys.argv[1:]] or [0x0dd72e0]

pyghidra.start()
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

with pyghidra.open_program(DLL, project_location='/workspace/win/ghidra-proj-dec',
                           project_name='dec', analyze=False) as flat:
    program = flat.getCurrentProgram()
    fm = program.getFunctionManager()
    di = DecompInterface()
    monitor = ConsoleTaskMonitor()
    di.openProgram(program)
    af = program.getAddressFactory().getDefaultAddressSpace()
    for rva in rvas:
        addr = af.getAddress(IMAGE_BASE + rva)
        f = fm.getFunctionAt(addr)
        if f is None:
            flat.disassemble(addr)
            f = flat.createFunction(addr, None)
        if f is None:
            print('no function at', hex(IMAGE_BASE + rva)); continue
        res = di.decompileFunction(f, 300, monitor)
        code = res.getDecompiledFunction().getC() if res and res.getDecompiledFunction() else 'FAIL'
        name = f.getName()
        path = os.path.join(OUT, 'func_%x_%s.c' % (rva, name))
        open(path, 'w').write(code)
        print('wrote', path, len(code), 'bytes')
    di.dispose()
