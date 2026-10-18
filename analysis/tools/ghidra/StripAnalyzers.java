import ghidra.app.script.GhidraScript;

/**
 * Headless preScript: disable the analyzers that explode on j2cc-obfuscated
 * binaries (jumptable/opaque-predicate driven), keeping the cheap structural
 * ones so per-address decompilation works afterwards.
 */
public class StripAnalyzers extends GhidraScript {
	@Override
	public void run() {
		String[] off = {
			"Decompiler Parameter ID",
			"Decompiler Switch Analysis",
			"Shared Return Calls",
			"Function ID",
			"Demangler",
			"WindowsResourceReference",
			"Subsequent References",
			"ASCII Strings",  // we scan strings ourselves; saves time
		};
		for (String opt : off) {
			try {
				setAnalysisOption(currentProgram, opt, "false");
				println("[strip] disabled: " + opt);
			} catch (Exception e) {
				println("[strip] could not disable " + opt + ": " + e);
			}
		}
	}
}
