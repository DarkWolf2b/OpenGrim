# Tracers (sixtwo.du) + shared `cF` entity picker

Date: 2026-10-21
Module: `src/main/java/dev/opengrim/modules/render/Tracers.java`
Status: ported; the "Entities" setting is now the real `cF` multiselect.

## Evidence

- `analysis/decompiled/payload/sixtwo/cF.java` (270 lines, **0 natives**):
  - `AcnID` offered universe, `sulLA` selected set seeded with `PLAYER`
    (cF.java:34–36)
  - `VS(jg$tJ)` / `VT(...)` seed the universe; `VU`/`VV` add/remove;
    `VW` contains; `VX(Entity)` = `!selected.isEmpty() &&
    universe.contains(type) && selected.contains(type)` (cF.java:264–290)
  - `SS`/`SR` serialize the selection by type name
- `analysis/decompiled/payload-cfr/sixtwo/jg.java`:
  - `bBT()` (OCdZM) = every registered `EntityType` whose base class is a
    `LivingEntity`, minus `ARMOR_STAND`
  - `hZYeV`/`fbEDU`/`skTlu` are the three preset universes
- `du` settings: "Entities" = `cF.VS(jg$tJ.OCdZM)` + `VT(ITEM,
  CHEST_MINECART, TNT_MINECART)`, selected `{PLAYER}`; `VX` membership is used
  in the draw pass

## What changed

- Added `src/main/java/dev/opengrim/settings/EntityListSetting.java` — the
  generic `cF` equivalent:
  - universe + selected set, default `{PLAYER}`;
  - `contains`, `matches` (`VX`), `select`/`deselect`/`toggle`;
  - JSON stores registry ids (stable) instead of the original's display name
    (the repo's plain-JSON convention; membership semantics identical).
- Added `src/main/java/dev/opengrim/gui/ui/widgets/EntityListWidget.java` — an
  expandable searchable entity list (name + selected checkbox, MSDF/shape
  widgets), copied from the `ItemListWidget` surface pattern.
- Added the `EntityListSetting` case to `ModuleWidgetFactory`, so any module can
  use the picker; only Tracers was rewired (per instruction).
- `Tracers`:
  - replaced the private `selected`/`universe` sets with
    `EntityListSetting entities`;
  - `defaultUniverse()` = `Registries.ENTITY_TYPE` where
    `LivingEntity.class.isAssignableFrom(type.getBaseClass())`, minus
    `ARMOR_STAND`, plus ITEM/CHEST_MINECART/TNT_MINECART;
  - `matches(Entity)` delegates to `cF.VX` semantics;
  - `getEntityTypes()` / `addEntityType` / `removeEntityType` now delegate to
    the setting (cross-module API preserved).
- Draw logic, origin geometry, friend handling, mode anchors and settings are
  unchanged.

## Build

`JAVA_HOME=/usr/lib/jvm/java-21-openjdk bash gradlew compileJava` → BUILD SUCCESSFUL.

## Remaining gaps

- `[S]` `EntityListWidget` renders the recovered name/selected surface, not the
  original `cF` row geometry (the GUI shell/native widget handler is not in the
  recovered corpus). Selection behavior is 1:1.
- `[S]` Config stores registry ids, not the original's display names (locale
  stable; labeled).
- The other eight `cF` consumers (AntiInvisible, Chams, CircleEsp, EntityEsp,
  BlockPiercer, AimAssist, KillAura, TriggerBot) are **not** rewired —
  explicitly out of this queue; the setting/widget is ready for their owners.
