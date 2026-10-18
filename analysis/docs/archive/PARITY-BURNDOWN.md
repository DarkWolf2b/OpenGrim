# PARITY-BURNDOWN — re-audit of the 42 "low-parity" modules (2026-10-16)

> ⚠️ **CASE-COLLISION WARNING:** this audit hit the collision trap live —
> on Windows `analysis/decompiled/payload-named-cfr/sixtwo/dS.java` is actually
> class `ds`; the real `dS` (Hand No Clip) is
> `analysis/decompiled/casesafe/payload-named-cfr/sixtwo/dS_.java`.
> For every collide pair (dS/ds, fB/fb, …) read the **casesafe trees**.
> Rules: `analysis/docs/CASE-COLLISION-WARNING.md`.

Why this document exists: `analysis/docs/PARITY.md` flags 42 modules
"low parity" with explanatory notes, but those notes were written **before**
the framework gained the event bus, mixins, `FriendsManager` and
Color/String settings. Every one of the 42 sources was re-read against the
**current code** by two independent audit passes (2026-10-16). Result: the
notes are stale or partially stale for **32 of 42** modules, and no module
still carries the old `parity: native-blocked, approximation` self-label.
The real remaining work is much smaller and has a different shape than the
notes imply.

## Buckets

| Bucket | Meaning | Needs |
|---|---|---|
| **W** | Wiring — the hook/setting exists; the module isn't subscribed/using it (or a registered setting is inert) | static code change, no runtime |
| **V** | Value — one unrecovered constant/name/suffix | `analysis/decrypted/full-dump.jsonl` / `payload-decrypted` lookup |
| **R** | Renderer — drawing fidelity (shader passes, billboard primitives) | port-side renderer work |
| **N** | Native — behavior lives in j2cc VM bodies | corpus (POOL/structure) + runtime numeric traces (`analysis/docs/RUNTIME-TRACE.md`) |

Totals: **W 22 · N 14 · V 2 · R 4**. Note staleness: 14 fully stale,
18 partial, 10 accurate (different gaps remain even when the note is stale).

## The 42 rows

| id | module | bucket | note | next action |
|---|---|---|---|---|
| di | 2D ESP | W | partial | wire `shouldSuppressNametag`/`getTargets` into the render path; add 64-block cap |
| eU | Air Anchor | N | accurate | recover native anchor packet assembly/sequences |
| eX | Anchor Macro | W | accurate | wire When/Diagonal settings (registered, never read) |
| fP | Anti-Cheat Detector | N | stale | recover sampler/fingerprint inventory (aWt/aWu/aWw); `pushSample` never called |
| eZ | Auto Double Hand | N | partial | recover native crystal-pop/sword-predict math |
| fw | Auto Drain | W | partial | wire mode + cancel_for (incl. `FriendsManager`) |
| fd | Auto Dripstone | V | accurate | recover cooldown suffix (currently assumed "s") |
| ft | Auto GApple | W | accurate | wire offhand/slot apple-use engine via `interactItem` |
| fl | Auto Potion | W | accurate | wire activation=Look gate (currently inert) |
| fB | Auto Shield Break | W | partial | ✅ fixed this session (manual mode + single self-disable) |
| eS | Auto Stun Slam | W | accurate | wire change_armor + AttackEntityEvent trigger (attackKey poll) |
| fa | Auto X-Bow | N | accurate | port native cart plan builders + 8-state machine (fa$sK/sL) |
| fp | Backtrack | W | stale | wire delay_knockback/knock_delay (knockMs computed, unused) |
| ey | Blink | N | stale | runtime-verify queue/pulse/auto-disable semantics |
| dP | Block Piercer | W | accurate | wire allowed_blocks filter (cobweb toggle meaningless) |
| fb | Cart Assist | N | stale | recover native plan-record/phase semantics (fb$sM/sN) |
| fc | Cart Refill | V | partial | recover delay default + suffix; hover semantics |
| dv | Chams | R | accurate | implement 4 shader passes (glass/water/chrome/liquid-metal) |
| cS | China Hat | R | stale | port textured hat shell model (jo.bEt/ky.bSd) |
| fu | Criticals | W | partial | feed web_lag packet-hold queue via `PacketSendEvent` |
| eY | Crystal Optimizer | N | partial | recover native aFI crystal-step/gate behavior |
| ed | Custom Camera Distance | W | accurate | apply distance/no_clip in the camera handler (subscribed, empty) |
| dW | Freecam | W | partial | apply pos/rot via camera, drop swallowed reflection; wire render_hand |
| dm | Friend Indicator | R | stale | billboard primitive + recovered color instead of box outline |
| dS | Hand No Clip | W | stale | ✅ fixed this session (Blocks defaults + membership gate) |
| fq | Hitbox | W | stale | wire only_for_slots/invisible/visible gates; verify box color/width |
| dD | Item Frame Blocker | N | stale | recover native Slots picker; packet entityId accessor |
| fs | Knockback Displacement | W | stale | velocity packet accessor; verify rewrite math (fixed 0.35) |
| eQ | Mace Elytra Target | W | partial | implement armor_swap hit mode (setting exists, unwired) |
| dJ | Mouse Tweaks | W | partial | replace slot-under-cursor reflection with accessor (extend `HandledScreenAccessor`) |
| fE | No Miss | N | stale | recover native aSO slot picker to wire specified_slots |
| dX | No Miss Delay | W | partial | accessor mixin for missTime (kill reflection); verify delay value |
| fQ | No Protocol Disconnect | W | stale | extend `ClientConnectionMixin` transport guard (decode exceptions) |
| fm | Pearl Chaser | N | stale | recover native aKA/aKC/aKD/aKE path evaluation/throw gates |
| cT | Pop Chams | R | stale | restore Simple flat-color pass distinct from Textured (skin) pass |
| fj | Projectile Aim Bot | W | partial | subscribe `WorldRenderEvent` for prediction; gravity-compensated aim |
| fN | SkinProtect | W | partial | ✅ fixed this session (`SkinTexturesResolveEvent` wiring) |
| eH | Spear Dash | N | partial | recover native armor-swap roles (axL/axM/axN) |
| eI | Spear Double Tap | N | partial | recover double-tap timing/weapon-hand bodies (fully virtualized) |
| eG | Spear Lunge | N | partial | recover native awU/awV/awW (trigger edge, armor swap, movement) |
| eF | Spear Reach | W | partial | wire `InteractionRangeEvent` to effectiveReach; populate allowed_items |
| fG | W-Tap | N | partial | recover native tap-phase timing (aTi..aTm) + Fast Bridge bridge |

## First batch — landed 2026-10-16 (working tree, uncommitted)

1. **fN SkinProtect** (`modules/utility/SkinProtect.java`)
   - Subscribes `SkinTexturesResolveEvent` (the hook existed via Cape, was never used).
   - Own/other gating from `protect.profileId` vs local UUID; "Defaults" → Steve.
   - Composes with prior replacements (Cape): swaps body only, keeps cape/elytra/secure.
   - Remaining native gaps unchanged and documented: dynamic preset loader, custom-URL fetch.
2. **dS Hand No Clip** (`modules/combat/HandNoClip.java`)
   - `Blocks` group populated with the decrypted defaults (`dS_.java:87`:
     `Items.COBWEB`, `Items.PAINTING`), as cobweb/painting toggles (default on).
   - `specified` membership gate now honors the cobweb entry; painting is entity-side
     (never queries block shapes) and is retained for structure parity.
3. **fB Auto Shield Break** (`modules/combat/AutoShieldBreak.java`)
   - `attack_mode=manual` was inert (event handler early-returned on non-auto):
     both modes now respond to `AttackEntityEvent`; the tick loop still only
     initiates attacks in `auto` (that is what distinguishes the modes).
   - Disable Mode `single` now self-disables after one break (was: flag only).

Verification: `.\gradlew.bat compileJava --offline -q` → exit 0.

## Next batches

- **W batch 2** (small, no evidence needed): ed, fl, dP, dX, dJ, fu, fq, fs, fp, ft, eS, eX, di, fj.
- **W batch 3** (wiring + a mixin/accessor addition): fQ (transport guard), dW, eF, eQ.
- **N batch** (needs the instrumented runtime session + corpus reads): eU, fP, eZ, fa, ey, fb, eY, dD, fE, fm, eH, eI, eG, fG.
- **V**: fd, fc (look up in `analysis/decrypted/full-dump.jsonl`).
- **R**: dv, cS, dm, cT (dm/cT are the smallest; dv is the big one).

`PARITY.md` note sync is deferred until batches land — its 42 notes currently
still describe pre-hook limitations; this document is the live status until then.

## Verification pass (2026-10-16, 39 remaining rows)

Four independent read-only verification passes re-checked every claim of the
table above against the current code with file:line evidence. Result:
**18 rows confirmed · 21 rows corrected**. Corrections below supersede the
table's action field. Two bucket shifts: `fw` → W+N (native finder), `fs` →
W+N (native core is outbound spoof); `fQ` stands with a caveat.

| id | correction (supersedes table above) |
|---|---|
| di | No 64-block cap in the recovered code — drop that claim; packet-tracker/nametag/empty-groups gaps all real |
| fP | Detection is a skin-asset vanilla probe + chat patterns (aWr), not a brand scan; pushSample dead confirmed |
| eZ | Inert settings here are `totemItem`/`totemSlot` (findTotem hardcodes TOTEM_OF_UNDYING); no "restored" field in eZ |
| fw | Note "glass bottle" wrong (spec says bucket); aRb finder is native (port = 6 fixed samples approximation + omitted fg lock) → row is W+N |
| ft | Original use path is `useKey`/`setPressed` (ft.md:18), not interactItem; restored field written-never-read; offhand has no switch/use path |
| fl | activation unread confirmed, but the original gate is unrecovered (Auto discarded, Look inferred) — Look wiring is a guess |
| eS | GroupSetting imported but never registered (no group in the file); trigger is a 1-option ModeSetting; change_armor unread real |
| fp | knockMs written (L98) never read; delay_knockback never read; name-based classifier approximation real |
| dP | cobweb IS read (L126) but redundant — L129 passes any BlockItem; allowed_blocks set unenforced |
| dv | Shader uniform params have no getters (javadoc overclaims); 4 native passes unrecovered; vanilla lines only |
| cS | Setting names NOT recovered (still DES ciphertext; port labels are invented); shell model jo.bEt/ky.bSd unported |
| dW | Pos IS already applied (setCameraPos reflection); only rotations unapplied; render_hand getter unread; reflection failures swallowed |
| dm | jk.jEkxo RGBA unrecovered — "recovered color" is not available; original tracks a qQ name registry, not FriendsManager |
| fq | Gates real; box color/visible-invisible draw semantics live in the native renderer → color not verifiable; width/height matches aMH |
| fs | Native core is outbound move-packet spoof + VM math; inbound velocity rewrite is the approximation → row is W+N; mixin cannot replace inbound packets |
| eQ | "No friend filter" not a proven gap (spec has no friend token); armor_swap semantics VM-blocked; hotbarSlotOf dead code |
| dJ | Use an `@Invoker` for HandledScreen.getSlotAt (original invoked getHoveredSlot(DD)) instead of focusedSlot |
| dX | Reflection is broken: no missTime in 1.21.11 yarn (field_1771 = attackCooldown, field_1729 = mouse) — the write may throw; ticksSinceLastAttack restore unevidenced |
| fQ | Mixin has no exceptionCaught/decode guard (send/channelRead0 only); module only subscribes the event — action stands, transport guard missing |
| fm | aKE is already implemented (friend filter, L238); target aKA/aKC/aKD only; 1s cadence heuristic real |
| cT | Remove totem-particle claim (not in the original); flat pass = POSITION-only vs Textured POSITION_TEXTURE+Sampler0 |

Confirmed as-is (18): eU, eX, fd, fa, ey, fb, fc, fu, eY, ed, dD, fE, fj,
eH, eI, eG, eF, fG.
