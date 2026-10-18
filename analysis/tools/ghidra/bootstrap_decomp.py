#!/usr/bin/env python3
"""Decompile just Java_native_Loader_bootstrap with a long timeout."""
import pyghidra

BINARY = '/workspace/binaries/native/jna1.21.11'
OUT = '/workspace/analysis/ghidra/bootstrap-decomp.c'

pyghidra.start()
with pyghidra.open_program(BINARY, project_location='/workspace/binaries/ghidra-proj/pydeep',
                           project_name='pydeep', analyze=False) as flat:
    program = flat.getCurrentProgram()
    fm = program.getFunctionManager()
    st = program.getSymbolTable()
    from ghidra.app.decompiler import DecompInterface
    from ghidra.util.task import ConsoleTaskMonitor
    di = DecompInterface()
    monitor = ConsoleTaskMonitor()
    di.openProgram(program)
    for addr in st.getExternalEntryPointIterator():
        sym = st.getPrimarySymbol(addr)
        if sym is None or sym.getName() != 'Java_native_Loader_bootstrap':
            continue
        f = fm.getFunctionAt(addr)
        if f is None:
            flat.disassemble(addr)
            f = flat.createFunction(addr, None)
        print('decompiling bootstrap (900s timeout)...', flush=True)
        res = di.decompileFunction(f, 900, monitor)
        if res is not None and res.getDecompiledFunction() is not None:
            code = res.getDecompiledFunction().getC()
            with open(OUT, 'w') as out:
                out.write('// ===== Java_native_Loader_bootstrap @ %s =====\n' % addr)
                out.write(code)
            print('DONE: %d chars -> %s' % (len(code), OUT), flush=True)
        else:
            print('FAILED: %s' % (res.getErrorMessage() if res is not None else 'null'), flush=True)
    di.dispose()
