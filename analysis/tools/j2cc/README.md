# j2cc native recovery tools

Targeted recovery of the j2cc-transpiled Grim GUI bodies in
`binaries/native/jna1.21.11`.  Ghidra's full auto-analysis of the 280 MB DLL
times out; these tools work from one handler entry at a time.

Requirements: Python 3 and `capstone` (this checkout has it at
`/tmp/opencode/pylibs`; otherwise `pip install capstone`).  `pefile` is not
needed.

## pe.py

PE reader over the **decrypted** overlay (`jna-decrypted-v2.dll`):

* section VA→file mapping (original + decrypted bytes),
* base-relocation table (every 8-byte pointer the linker emitted): exact
  jump-table extents and continuation slots,
* `.pdata` exact function bounds,
* j2cc constant pool at `0x18301ee60` (`StringCpInfo.ptr`): `pool(off)`
  returns the decrypted class/field/method/string descriptor,
* runtime→image pointer normalization (`RUNTIME_DELTA = 0x6ffe67c10000`).

## j2cc_cfg.py

```
PYTHONPATH=/tmp/opencode/pylibs \
python3 analysis/tools/j2cc/j2cc_cfg.py --entry 0x18f15c990 \
        --no-follow-outside --json /tmp/bo.json
```

Starts at an entry, follows direct `jmp`/`jcc`, `jmp [rip+slot]` (resolved
through relocations) and `lea reg,[rip+table]; jmp [reg+idx*8]` jump tables.
Index ranges come from the dominating `cmp`/`and`/`setcc` chain; otherwise the
contiguous relocation run is used and marked uncertain.  Annotates JNI vtable
slots (`ExceptionCheck`, `CallVoidMethodA`, …), the decrypted pool strings and
float constants.

`--xrefs 0x…` scans for direct call sites and pointer slots.

## j2cc_lift.py

Consumes the CFG JSON, walks the normal continuation chain (skipping
ExceptionCheck/NPE dispatch) and symbolizes the Windows-x64 stack slots j2cc
uses for its Java operand stack.  Prints a pseudo-Java transcript with
resolved `Class.method(...)` calls, e.g.:

```
sixtwo/jf.bAH(8.0, 12.0) -> float
...
a0.ceo(sixtwo/lf.PqdjL, (float(...) + ((a1 + a3) + -19.5)), ...)
```

## Recovered evidence

`analysis/artifacts/gui-native/`:

* `bd-settings-spec.md` — full settings-panel spec (geometry, draw order,
  colours, close glyph, row heights, height formula, gaps).
* `bd.BO.{cfg,pseudo}.txt`, `bd.BR.{cfg,pseudo}.txt`,
  `bd.dn.{cfg,pseudo}.txt`, `bd.bV.{drawcalls,linear}.txt`
* `bk.bV.keyblocks.txt` (`bk` module row) and `ah.bV.javap.txt` (the
  scroll controller, proving `ah.bV` contains no draw calls).
