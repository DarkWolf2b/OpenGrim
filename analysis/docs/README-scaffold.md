# OpenGrim

1:1 rebuild of the "Grim 4.4" Fabric 1.21.11 utility client. This project
reimplements observed behavior from static analysis; original code/assets may be
reused at the owner's direction (see `../../../analysis/specs/` for the behavior
specs and `../PARITY.md` for module parity tracking).

## Build

```bash
./gradlew build
```

Requires JDK 21. Artifacts land in `build/libs/`.

## Layout

- `dev.opengrim.OpenGrimClient` — client entrypoint; registers modules, loads config, wires keybinds and the tick loop.
- `dev.opengrim.module` — `Module` base, `ModuleCategory`, `ModuleManager` (162-module registry target).
- `dev.opengrim.settings` — Bool/Double/Int/Mode/Group settings mirroring the original's builder-chain constraints (step/min/max/default evidence in `../../../analysis/specs/00-framework.md`).
- `dev.opengrim.keybind` — one keybinding per bound module (`bind = -999` = unbound).
- `dev.opengrim.config` — JSON config persistence (`config/opengrim.json`).
- `dev.opengrim.modules` — the modules themselves.

## Status

Framework complete; module porting in progress — see `../PARITY.md`
(3/162 ported as reference implementations).

## License

All Rights Reserved. The GPL `LICENSE` was removed at the owner's direction.