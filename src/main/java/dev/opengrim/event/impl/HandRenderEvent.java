package dev.opengrim.event.impl;

import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.Hand;

/**
 * Fired for the first-person hand render matrices. Mirrors the original shell's
 * {@code gl} (held item: Hand + MatrixStack) and {@code gt} (arm: MatrixStack)
 * events (bootstrap {@code mixin.accessors.ItemInHandEventBridgeMixin}). View
 * Model (sixtwo.dC) consumes both: its {@code akr(gl)} handler transforms the
 * held-item stack, {@code aks(gt)} the arm stack.
 */
public class HandRenderEvent {
	public enum Part {
		ITEM,
		ARM
	}

	private final Part part;
	private final Hand hand;
	private final MatrixStack matrices;

	public HandRenderEvent(Part part, Hand hand, MatrixStack matrices) {
		this.part = part;
		this.hand = hand;
		this.matrices = matrices;
	}

	public Part part() {
		return part;
	}

	/** The rendered hand; {@code null} for {@link Part#ARM}. */
	public Hand hand() {
		return hand;
	}

	/** The live first-person render stack (mutations affect the vanilla draw). */
	public MatrixStack matrices() {
		return matrices;
	}
}
