# Block ESP (sixtwo.dd) — handler-derived behavior spec

Class: `sixtwo/dd` · display name **Block ESP** (module id 82).
Superclass `gg`, implements `lG` (3D batched render contract). **Zero native
methods declared** (javap-verified; coverage matrix `natives_declared=0`) —
pure-Java payload class; no image addresses (0x18xxxxxxx) to cite. Evidence
cites are decompile line numbers of
`analysis/decompiled/payload-decrypted/sixtwo/dd.java` (504 lines).

## Evidence base

1. `analysis/decompiled/payload-decrypted/sixtwo/dd.java` — fully decompiled
   (tick + render handlers readable).
2. `analysis/decompiled/payload-named/sixtwo/dd.java` — identifier
   cross-check.
3. `analysis/specs/modules/dd.md` structural spec.
4. Registry entry (module id 82) for display name.
5. Shared scanner `rl` (`rNrBp` instance, one-liner): `dhF()` reset,
   `dhJ(hash, range, predicate)` positional scan, `dhG()` results,
   `dhH()` clear — the same scanner family cW uses (`NkSiv`).
6. Helpers (one-liners): `cK` item-list setting (`WM(jc.GjreY)` item filter
   for the picker, `WW(Item)` membership test); `cC` numeric (`Vy/Vw/Vx/VA/
   Vz`); `cG` color (`Wh()` int → `mG.cnQ`); `cJ` boolean (`WF()`, `WE(def)`);
   `MMuss` box batch renderer (module field); `kH.bTJ` box builder (`dtN`
   outline color / `dtO` fill color / `dtS` end); `kF.bTn` line builder
   (`dts` width / `dtt` end); `jJ.bIA(Vec3d)` visibility (frustum+occlusion
   gate); `IfTUx::WF` tracer-visibility predicate wiring; `gb.aYR` DES
   seeds (unrecoverable).

## Runtime model

- **`aaj()`** [dd.java:319] — on-enable: `rNrBp.dhF()` (scanner reset).
- **`aci(gH.th)`** [365] — pre-motion tick scan: `rNrBp.dhJ(SSCLk /* DES long
  scan-hash, unrecovered */, Range.VC() /* int 1..128 */, predicate)` where
  the predicate tests `MKdlw.WW(block.asItem())` — scans all loaded blocks
  within Range whose item is selected in "Blocks To Highlight". Results are
  cached inside the `rl` scanner between frames.
- **`acj(go.sX)`** [377] — world render:
  1. for each scanned position: camera-relative box
     `new Box(pos).offset(−camPos)`; batch `MMuss`:
     `kH.bTJ(stack, box, Filled, false).dtN(Outline Color).dtO(Fill
     Color).dtS()`, each draw gated by `jJ.bIA(center)`;
  2. if **Tracers**: line from eye position to block center, batch `dJxyG`:
     `kF.bTn(stack, from, blockCenter, Outline Color).dts(Tracers
     Width).dtt()`; third-person eye origin = eye + (0, 0, 75) rotated by
     `rotateX(−pitch)` then `rotateY(−yaw)` — recovered literal vector
     math.
- **`YO()`** — unregister + scanner clear.

## Per-handler semantics

- Scan cadence: once per `gH.th` tick; render only reads scanner results —
  no per-frame world iteration.
- The `cK` list membership tests the block's `asItem()` — items without a
  block form are never matched; block-state variants collapse to the item.
- Tracer width uses "Tracers Width"; box outline thickness is
  pipeline-fixed (not a setting).
- Visibility gate `jJ.bIA` is applied per block center, so occluded blocks
  drop out individually, not per batch.

## Settings→behavior

Exact names/steps/mins/maxes/defaults from decrypted literals (constructor
lines 69–158):

| Setting | Kind | Values | Default | Citation |
|---|---|---|---|---|
| "Blocks To Highlight" (`cK MKdlw`) | item-list, picker filter `jc.GjreY` | — | empty list | [dd.java:92] |
| "Range" (`cC pYKFd`) | numeric | step **1.0**, min **1.0**, max **128.0** | **100.0**, suffix DES `vRYIv` (**" blocks"**, 7 bytes) | [dd.java:93] |
| "Outline Color" (`cG KhQrs`) | color | — | `bjG().bis()` white | [dd.java:108] |
| "Fill Color" (`cG zdHIt`) | color | — | white `.cob(0.5f)` (alpha **0.5**) | [dd.java:120] |
| "Filled" (`cJ jUhNc`) | boolean | — | `false` (`WE(false)`) | [dd.java:128] |
| "Tracers" (`cJ IfTUx`) | boolean | — | `false`; `Vf(IfTUx::WF)` gates "Tracers Width" visibility | [dd.java:137] |
| "Tracers Width" (`cC JkVNw`) | numeric | step **0.1**, min **1.0**, max **3.0** | **1.0** | [dd.java:152] |

## Unrecovered

- `dd.SSCLk` — DES **long** scan-hash passed to `rNrBp.dhJ` [declared
  dd.java:66]: scanner program id (same family as cW's `UBtqj`), value
  unrecovered.
- `vRYIv` suffix plaintext confirmed as " blocks" via byte length only;
  ciphertext not decrypted in-place.
- `jc.GjreY` filter semantics (which items are offered in the `cK` picker —
  likely "items with a block form") — [uncertain].
- Whether the scanner deduplicates multi-block states (double chests,
  doors) at the `rl` level — [uncertain], scanner internals out of scope.
- Whether the Range scan is spherical or cubic around the player — the
  predicate shape is inside `rl.dhJ` — [uncertain].