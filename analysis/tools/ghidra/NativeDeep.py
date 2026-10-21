# Bounded recursive decompilation from the JNI exports (NO full auto-analysis).
# Follows direct call targets breadth-first from the exports to a depth limit.
# @runtime PyGhidra
from ghidra.app.decompiler import DecompInterface
from collections import deque

args = getScriptArgs()
out_path = args[0] if args else 'analysis/ghidra/deep-decomp.c'
MAX_DEPTH = 3
MAX_FUNCS = 400

program = currentProgram
fm = program.getFunctionManager()
st = program.getSymbolTable()
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

print('=== NativeDeep: %d seeds ===' % len(queue))

done = 0
failed = 0
out = open(out_path, 'w')
out.write('/* deep-tier bounded decompilation from JNI exports */\n')

while queue and done < MAX_FUNCS:
    addr, depth = queue.popleft()
    if addr in visited:
        continue
    visited.add(addr)
    f = fm.getFunctionAt(addr)
    if f is None:
        disassemble(addr)
        f = createFunction(addr, None)
    if f is None:
        continue
    label = names.get(addr, f.getName())
    try:
        res = di.decompileFunction(f, 120, monitor)
        if res is not None and res.getDecompiledFunction() is not None:
            code = res.getDecompiledFunction().getC()
            done += 1
        else:
            code = '/* decompile failed: %s */' % (res.getErrorMessage() if res is not None else 'null')
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
                    if 'Address' in op.__class__.__name__:
                        if op not in visited:
                            queue.append((op, depth + 1))
    if done % 25 == 0:
        print('progress: %d decompiled, %d queued, %d failed' % (done, len(queue), failed))

out.close()
di.dispose()
print('=== NativeDeep done: %d decompiled, %d failed, %d visited -> %s ===' % (done, failed, len(visited), out_path))
