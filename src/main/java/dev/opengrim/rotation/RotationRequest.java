package dev.opengrim.rotation;

import dev.opengrim.module.Module;

/**
 * Port of the sixtwo.ot shell (payload-named-cfr/sixtwo/ot.java:17-48) — a
 * resolved rotation context: rotation ({@code YsbSE}, ot.java:17), owning
 * module (charged via {@code gg} in qL#dbJ/dbH/dbG/dbI), expiry tick
 * (cf. mt$uN#dkmea) and priority (cf. mt$uN#cjmFK).
 *
 * <p>The {@code ot} predicate natives ({@code cGe/cGf/cGg/cGm}, ot.java:55-79)
 * and the {@code ou/os/ow} policy chain behind them are not recoverable
 * statically — see analysis/PARITY-DIVERGENCES.md. Validity here mirrors the
 * strict-queue check in sixtwo.mt#cmd (mt.java:24-140), which requires the
 * owning module to still be enabled ({@code xOoyO.bag()}).
 */
public class RotationRequest {
	private final Rotation rotation;
	private final Module owner;
	private final RotationPriority priority;
	private int expiryTick;

	RotationRequest(Rotation rotation, Module owner, RotationPriority priority, int expiryTick) {
		this.rotation = rotation;
		this.owner = owner;
		this.priority = priority;
		this.expiryTick = expiryTick;
	}

	public Rotation rotation() {
		return rotation;
	}

	public Module owner() {
		return owner;
	}

	public RotationPriority priority() {
		return priority;
	}

	int expiryTick() {
		return expiryTick;
	}

	/** Mirrors the {@code xOoyO.bag()} strict gate in mt#cmd. */
	boolean isValid() {
		return owner != null && owner.isEnabled();
	}
}
