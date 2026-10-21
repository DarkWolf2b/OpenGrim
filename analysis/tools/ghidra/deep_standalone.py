#!/usr/bin/env python3
"""Standalone deep-tier decompilation driver (pyghidra).

Imports the j2cc DLL WITHOUT full auto-analysis, then does bounded BFS
decompilation from the JNI exports: initClass/bootstrap registration path +
the chacha pair. Runs in minutes instead of a 12h full-binary analysis.
"""
import sys
from collections import deque

import pyghidra

BINARY = 'binaries/native/jna1.21.11'
PROJ_LOC = 'binaries/ghidra-proj/pydeep'
OUT = 'analysis/ghidra/deep-decomp.c'
MAX_DEPTH = 3
MAX_FUNCS = 400
PER_FUNC_TIMEOUT = 120


def main():
    pyghidra.start()
    with pyghidra.open_program(BINARY, project_location=PROJ_LOC,
                               project_name='pydeep', analyze=False) as flat:
        program = flat.getCurrentProgram()
        fm = program.getFunctionManager()
        st = program.getSymbolTable()
        from ghidra.app.decompiler import DecompInterface
        from ghidra.util.task import ConsoleTaskMonitor
        monitor = ConsoleTaskMonitor()
        di = DecompInterface()
        di.openProgram(program)

        visited = set()
        queue = deque()
        names = {}
        for addr in st.getExternalEntryPointIterator():
            sym = st.getPrimarySymbol(addr)
            nm = sym.getName() if sym is not None else '?'
            if nm.startswith('Java_') or 'chacha' in nm or 'fuckMyShitUp' in nm:
                names[addr] = nm
                queue.append((addr, 0))
        print('seeds: %d' % len(queue), flush=True)

        tx = program.startTransaction('deep')
        done = failed = 0
        with open(OUT, 'w') as out:
            out.write('/* deep-tier bounded decompilation from JNI exports (pyghidra) */\n')
            while queue and done < MAX_FUNCS:
                addr, depth = queue.popleft()
                if addr in visited:
                    continue
                visited.add(addr)
                f = fm.getFunctionAt(addr)
                if f is None:
                    flat.disassemble(addr)
                    f = flat.createFunction(addr, None)
                if f is None:
                    continue
                label = names.get(addr, f.getName())
                try:
                    res = di.decompileFunction(f, PER_FUNC_TIMEOUT, monitor)
                    if res is not None and res.getDecompiledFunction() is not None:
                        code = res.getDecompiledFunction().getC()
                        done += 1
                    else:
                        code = '/* decompile failed: %s */' % (
                            res.getErrorMessage() if res is not None else 'null')
                        failed += 1
                except Exception as e:
                    code = '/* decompile exception: %s */' % e
                    failed += 1
                out.write('// ===== %s @ %s (depth %d) =====\n' % (label, addr, depth))
                out.write(code)
                out.write('\n\n')
                if depth < MAX_DEPTH:
                    for insn in program.getListing().getInstructions(f.getBody(), True):
                        mn = insn.getMnemonicString().lower()
                        if mn.startswith('call'):
                            for op in insn.getOpObjects(0):
                                if 'Address' in op.__class__.__name__ and op not in visited:
                                    queue.append((op, depth + 1))
                if done % 25 == 0:
                    print('progress: %d decompiled, %d queued, %d failed' % (done, len(queue), failed), flush=True)
        program.endTransaction(tx, True)
        di.dispose()
        print('DONE: %d decompiled, %d failed, %d visited -> %s' % (done, failed, len(visited), OUT), flush=True)


if __name__ == '__main__':
    main()
