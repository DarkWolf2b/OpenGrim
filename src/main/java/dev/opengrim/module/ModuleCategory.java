package dev.opengrim.module;

/**
 * Module categories, in the original {@code gh} enum order:
 * {@code xwjCw} (Combat), {@code xgeEn} (Movement), {@code qBzlZ} (Player),
 * {@code nOCvV} (Visuals), {@code KfAlY} (Client).
 *
 * <p>Every module constructor passes its original constant
 * ({@code super(gf.aZL(..., gh.X))}); the recovered mapping is recorded in
 * analysis/artifacts/gui-reference/category-map.tsv. The Click GUI pages use
 * this order (page-*.png sidebar).
 */
public enum ModuleCategory {
	COMBAT,
	MOVEMENT,
	PLAYER,
	VISUALS,
	CLIENT
}
