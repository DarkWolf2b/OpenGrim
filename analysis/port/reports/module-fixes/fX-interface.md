# fX — Interface: raw key event (key-event half)

Date: 2026-10-21 · Module: `sixtwo.fX` → `src/main/java/dev/opengrim/modules/utility/Interface.java`
Status: key handler now on a real `Keyboard#onKey` event; Edit Theme remains blocked by `aZ`

## Evidence base

- `analysis/decompiled/casesafe/payload-named/sixtwo/fX_.java`
  - `aYc(gA)` 231-287: the exact order is
    `bab()` in-game gate → `action != 1` return → `currentScreen != null`
    return → `key != Emote Key` return → `aYd()` (F3 held) → `bD.LD()`
    (open the Click GUI). `aYd()` calls `rr.diY` with the encrypted keycode
    slot 7549 (fX_.java:404-407); the port uses the recovered F3 keycode 292.
  - Settings: Emote Key `cD` default 66 (B), Style `ct`, Edit Theme `cI`
    action (54-104).
- `analysis/decompiled/casesafe/payload-named/sixtwo/gA_.java` 14-50:
  the key event is a plain 51-line class with **0 natives**; constructor
  `(MouseInput, KeyInput, int key, int action, int modifiers)`, getters
  `bbP()` key, `bbQ()` action, `bbR()` modifiers.
- Shell bridge:
  `analysis/decompiled/bootstrap/mixin/accessors/KeyboardInputMixin.java:20-47`
  injects at `Keyboard#method_1466` (`onKey(JILnet/minecraft/class_11908;)V`),
  builds `gA(null, input, input.key, action, input.modifiers)`, posts it and
  cancels the vanilla callback when `bdW()` is set.
- Yarn mapping confirms the method signature:
  `class_309.method_1466` = `onKey(long window, int action, KeyInput input)`
  (`analysis/jars/yarn-1.21.11+build.6.tiny:95648`).
- The current port's GLFW edge detection in `onTick` (`emoteKeyDown`,
  `glfwGetKey`) was the labelled `[G]` stand-in for this missing event.
- Theme editor half: `aZ` has 53 behavior natives (audit row `fX`), so the
  `Edit Theme` action remains the ClickGuiScreen stand-in and is **not**
  changed here.

## Changes

- `KeyEvent` (new, `event/impl/KeyEvent.java`): carries key, scancode, action
  and modifiers; cancellable (mirrors `hH.bdW`, though Interface never
  cancels).
- `KeyboardMixin` (new, `mixin/KeyboardMixin.java`): `@Inject` at HEAD of
  `Keyboard#onKey(JILnet/minecraft/client/input/KeyInput;)V`, posts
  `KeyEvent(input.key(), input.scancode(), action, input.modifiers())`, and
  cancels the vanilla callback if a listener cancelled it. Registered in
  `opengrim.mixins.json`.
- `Interface`:
  - removed `emoteKeyDown` and the whole GLFW polling block from `onTick`;
    `onTick` now only applies the theme background style and handles the
    Edit Theme action.
  - added `@Subscribe onKey(KeyEvent)` with the exact original ordering:
    in-game gate → `action == 1` → `currentScreen == null` → key == Emote Key
    → F3 not held → `client.setScreen(new ClickGuiScreen())`.
  - `Edit Theme` remains the documented `[G]` ClickGuiScreen substitute.

## Remaining

- `[N]` `aZ` (theme editor) — 53 behavior natives; not faked. The action
  still opens the Click GUI as before.
- No other fX behavior changed; the module remains boot-enabled and
  self-re-enabling (`YO → baa(true)`).

## Build

```
JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava
```

Result: **PASS** (forced full recompile: `BUILD SUCCESSFUL`, only the
pre-existing `WorldRenderEvent` deprecation warning).

## Files

- `src/main/java/dev/opengrim/event/impl/KeyEvent.java` (new)
- `src/main/java/dev/opengrim/mixin/KeyboardMixin.java` (new)
- `src/main/resources/opengrim.mixins.json` (mixin registered)
- `src/main/java/dev/opengrim/modules/utility/Interface.java`

Not modified: `PARITY.md`, `PROGRESS.md`, `privacy.md`, `.gitignore`, git
state; no render module and no GUI render pipeline file.
