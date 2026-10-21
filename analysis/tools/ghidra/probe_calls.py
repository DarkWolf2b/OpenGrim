#!/usr/bin/env python3
"""Probe: how do call instructions look in unanalyzed code?"""
import pyghidra

BINARY = 'binaries/native/jna1.21.11'

pyghidra.start()
with pyghidra.open_program(BINARY, project_location='binaries/ghidra-proj/pydeep',
                           project_name='pydeep', analyze=False) as flat:
    program = flat.getCurrentProgram()
    fm = program.getFunctionManager()
    st = program.getSymbolTable()
    init_addr = None
    for addr in st.getExternalEntryPointIterator():
        sym = st.getPrimarySymbol(addr)
        if sym is not None and sym.getName() == 'Java_native_Loader_initClass':
            init_addr = addr
    print('initClass @', init_addr)
    f = fm.getFunctionAt(init_addr)
    if f is None:
        flat.disassemble(init_addr)
        f = flat.createFunction(init_addr, None)
    n = 0
    for insn in program.getListing().getInstructions(f.getBody(), True):
        mn = insn.getMnemonicString().lower()
        if mn.startswith('call'):
            n += 1
            if n <= 10:
                print(repr(insn), '| opobjects:', [type(o).__name__ for o in insn.getOpObjects(0)],
                      '| flows:', insn.getFlows(), '| ops:', insn.getOpObjects(0))
    print('total calls in initClass:', n)
