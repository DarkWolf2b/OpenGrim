import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

import java.util.*;

/**
 * Targeted triage for the j2cc native DLL (runs WITHOUT full auto-analysis):
 * exports, external imports (network/persistence indicators), pattern scan,
 * and decompilation of the JNI entry points.
 */
public class NativeTriage extends GhidraScript {
	@Override
	public void run() throws Exception {
		println("=== NativeTriage: " + currentProgram.getName() + " ===");

		// ---- exports / entry points ----
		println("\n== ENTRY POINTS / EXPORTS ==");
		SymbolTable st = currentProgram.getSymbolTable();
		List<Address> eps = new ArrayList<>();
		for (Iterator<Address> it2 = st.getExternalEntryPointIterator(); it2.hasNext();) {
			Address a = it2.next();
			Symbol s = st.getPrimarySymbol(a);
			if (s != null) {
				eps.add(a);
				println("EXPORT " + s.getName() + " @ " + a);
			}
		}
		println("total entry symbols: " + eps.size());

		// ---- external imports ----
		println("\n== EXTERNAL IMPORTS (network/persistence-relevant marked) ==");
		String[] watch = {"socket", "WSA", "connect", "send", "recv", "Internet", "WinHttp", "WinInet",
				"URLDownload", "CreateProcess", "ShellExecute", "WinExec", "Reg", "RegCreate", "RegSet",
				"WriteFile", "CreateFile", "DeleteFile", "MoveFile", "CopyFile", "LoadLibrary", "GetProcAddress",
				"CreateService", "schtasks", "SetWindowsHook", "CreateRemoteThread", "VirtualAllocEx",
				"WriteProcessMemory", "Crypt", "BCrypt", "NCrypt"};
		FunctionIterator ext = currentProgram.getFunctionManager().getExternalFunctions();
		Set<String> extNames = new TreeSet<>();
		while (ext.hasNext()) {
			extNames.add(ext.next().getName());
		}
		for (String name : extNames) {
			String low = name.toLowerCase();
			boolean flagged = false;
			for (String w : watch) {
				if (low.contains(w.toLowerCase())) { flagged = true; break; }
			}
			println((flagged ? "FLAG " : "  ok ") + name);
		}
		println("total external functions: " + extNames.size());

		// ---- raw string pattern scan ----
		println("\n== PATTERN SCAN (raw memory) ==");
		Memory mem = currentProgram.getMemory();
		String[] patterns = {"https://", "http://", "ws://", "CreateProcess", "WSAStartup", "InternetOpen",
				"WinHttpOpen", "URLDownloadToFile", "ShellExecute", "regsvr32", "schtasks", "CurrentVersion\\Run",
				"GetAsyncKeyState", "SetWindowsHookEx", "CreateRemoteThread", "WriteProcessMemory"};
		for (String p : patterns) {
			int count = 0;
			StringBuilder first = new StringBuilder();
			for (MemoryBlock block : mem.getBlocks()) {
				if (!block.isInitialized()) continue;
				byte[] data = new byte[(int) Math.min(block.getSize(), 300_000_000L)];
				int read = (int) block.getBytes(block.getStart(), data);
				String hay = new String(data, 0, read, java.nio.charset.StandardCharsets.ISO_8859_1);
				int idx = 0;
				while ((idx = hay.indexOf(p, idx)) >= 0) {
					count++;
					if (first.length() == 0) {
						int s = Math.max(0, idx - 24);
						int e = Math.min(hay.length(), idx + p.length() + 48);
						first.append(hay.substring(s, e).replaceAll("[^\\x20-\\x7e]", "."));
					}
					idx += p.length();
					if (count > 200) break;
				}
			}
			println((count > 0 ? "HIT " : "  -  ") + p + " x" + count + (count > 0 ? "  e.g. ..." + first : ""));
		}

		// ---- decompile JNI exports ----
		println("\n== DECOMPILE JNI EXPORTS ==");
		DecompInterface di = new DecompInterface();
		di.openProgram(currentProgram);
		FunctionManager fm = currentProgram.getFunctionManager();
		for (Address ep : eps) {
			String name = st.getPrimarySymbol(ep).getName();
			if (!name.startsWith("Java_") && !name.startsWith("JNI")) continue;
			Function f = fm.getFunctionAt(ep);
			if (f == null) {
				disassemble(ep);
				f = createFunction(ep, name);
			}
			if (f == null) { println("SKIP (no fn) " + name); continue; }
			DecompileResults res = di.decompileFunction(f, 60, monitor);
			println("\n----- " + name + " -----");
			if (res != null && res.getDecompiledFunction() != null) {
				String code = res.getDecompiledFunction().getC();
				println(code.length() > 12000 ? code.substring(0, 12000) + "\n...[truncated]" : code);
			} else {
				println("decompile failed: " + (res == null ? "null" : res.getErrorMessage()));
			}
		}
		di.dispose();
		println("\n=== NativeTriage done ===");
	}
}
