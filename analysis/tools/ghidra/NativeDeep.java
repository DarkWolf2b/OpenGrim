import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

import java.util.*;

/**
 * Bounded recursive decompilation from the JNI exports (NO full auto-analysis).
 * Starts at Java_native_Loader_bootstrap / initClass / chacha pair /
 * fuckMyShitUp, follows called functions breadth-first to a depth limit, and
 * writes every decompilation to a report. Answers "how do natives register"
 * in minutes instead of a 12h full-binary analysis.
 */
public class NativeDeep extends GhidraScript {
	int maxDepth = 3;
	int maxFuncs = 400;
	int perFuncTimeoutSec = 120;

	Set<Address> visited = new HashSet<>();
	Deque<Item> queue = new ArrayDeque<>();
	Map<Address, String> names = new HashMap<>();

	static class Item {
		final Address addr;
		final int depth;
		Item(Address addr, int depth) { this.addr = addr; this.depth = depth; }
	}

	void enqueueCallees(Function f, int depth) {
		if (depth >= maxDepth) return;
		Set<Address> targets = new HashSet<>();
		// unanalyzed code has no reference table — read call operands directly
		for (Instruction insn : currentProgram.getListing().getInstructions(f.getBody(), true)) {
			String mn = insn.getMnemonicString().toLowerCase();
			if (!mn.startsWith("call")) continue;
			if (mn.equals("call") || mn.startsWith("callq")) {
				for (Address opAddr : insn.getOpObjects(0)) {
					targets.add(opAddr);
				}
			}
		}
		for (Address t : targets) {
			if (!visited.contains(t)) {
				queue.add(new Item(t, depth + 1));
			}
		}
	}

	@Override
	public void run() throws Exception {
		String outPath = getScriptArgs().length > 0 ? getScriptArgs()[0]
				: "/workspace/analysis/ghidra/deep-decomp.c";
		println("=== NativeDeep: bounded recursive decompilation ===");

		DecompInterface di = new DecompInterface();
		di.openProgram(currentProgram);
		FunctionManager fm = currentProgram.getFunctionManager();

		StringBuilder report = new StringBuilder();
		report.append("/* Deep-tier bounded decompilation from JNI exports. ")
		      .append("depth=").append(maxDepth).append(" maxFuncs=").append(maxFuncs).append(" */\n");

		// seeds: entry points of interest
		SymbolTable st = currentProgram.getSymbolTable();
		for (Iterator<Address> it = st.getExternalEntryPointIterator(); it.hasNext();) {
			Address a = it.next();
			Symbol s = st.getPrimarySymbol(a);
			String nm = s == null ? "?" : s.getName();
			if (nm.startsWith("Java_") || nm.contains("chacha") || nm.contains("fuckMyShitUp")) {
				names.put(a, nm);
				queue.add(new Item(a, 0));
			}
		}

		int done = 0, failed = 0;
		PrintWriterHolder w = new PrintWriterHolder(outPath);
		while (!queue.isEmpty() && done < maxFuncs) {
			Item item = queue.poll();
			Address a = item.addr;
			int depth = item.depth;
			if (visited.contains(a)) continue;
			visited.add(a);

			Function f = fm.getFunctionAt(a);
			if (f == null) {
				disassemble(a);
				f = createFunction(a, null);
			}
			if (f == null) { continue; }
			if (f.getName().startsWith("FUN_") && names.containsKey(a)) {
				// keep meaningful name
			}
			String label = names.getOrDefault(a, f.getName());
			DecompileResults res = di.decompileFunction(f, perFuncTimeoutSec, monitor);
			String code;
			if (res != null && res.getDecompiledFunction() != null) {
				code = res.getDecompiledFunction().getC();
				done++;
			} else {
				code = "/* decompile failed: " + (res == null ? "null" : res.getErrorMessage()) + " */";
				failed++;
			}
			w.line("// ===== " + label + " @ " + a + " (depth " + depth + ") =====");
			w.line(code);
			w.line("");
			enqueueCallees(f, depth);
			if (done % 25 == 0) {
				println("progress: " + done + " decompiled, " + queue.size() + " queued, " + failed + " failed");
			}
		}
		w.close();
		di.dispose();
		println("=== NativeDeep done: " + done + " decompiled, " + failed + " failed, "
				+ visited.size() + " visited -> " + outPath + " ===");
	}

	static class PrintWriterHolder {
		private final java.io.PrintWriter pw;
		PrintWriterHolder(String path) throws Exception {
			pw = new java.io.PrintWriter(new java.io.BufferedWriter(new java.io.FileWriter(path)));
		}
		void line(String s) { pw.println(s); }
		void close() { pw.close(); }
	}
}
