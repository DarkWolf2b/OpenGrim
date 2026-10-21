package dev.opengrim.event.impl;

import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;

/**
 * Fired when the local player's main- or off-hand stack object changes.
 *
 * <p>Wired at the head of {@code HeldItemRenderer#updateHeldItems} (Yarn
 * {@code method_3220}) by {@code HeldItemRendererMixin}, immediately before
 * vanilla compares its cached {@code mainHand}/{@code offHand} stacks with the
 * player's hands and resets the equip progress. That is the client's held-item
 * change point.
 *
 * <p>Original evidence: the shell dispatches its blank per-tick {@code hc}
 * event at {@code ClientPlayerEntity.tick} HEAD (bootstrap
 * {@code mixin.accessors.LocalPlayerEventBridgeMixin#offline$playerTick},
 * analysis/decompiled/bootstrap/mixin/accessors/LocalPlayerEventBridgeMixin.java
 * :121-137), and Swing Animations ({@code sixtwo.cQ}) handles it in
 * {@code YF(hc)} (cQ.java:213-301), which reads the native per-hand
 * predicates {@code in.bkX()}/{@code in.bkY()} (cQ.java:240,266). Those
 * predicates live in the native {@code in} profile and are unrecovered; this
 * event carries the equivalent observable predicates — whether the hand's
 * stack object actually changed — so {@code YF} runs on a real held-item
 * change instead of the former per-tick stack comparison.
 */
public class HeldItemChangeEvent {
	private final ClientPlayerEntity player;
	private final ItemStack mainHand;
	private final ItemStack offHand;
	private final boolean mainHandChanged;
	private final boolean offHandChanged;

	public HeldItemChangeEvent(ClientPlayerEntity player, ItemStack mainHand, ItemStack offHand,
			boolean mainHandChanged, boolean offHandChanged) {
		this.player = player;
		this.mainHand = mainHand;
		this.offHand = offHand;
		this.mainHandChanged = mainHandChanged;
		this.offHandChanged = offHandChanged;
	}

	public ClientPlayerEntity player() {
		return player;
	}

	public ItemStack mainHand() {
		return mainHand;
	}

	public ItemStack offHand() {
		return offHand;
	}

	/** The main-hand stack object changed (reference comparison, as vanilla). */
	public boolean mainHandChanged() {
		return mainHandChanged;
	}

	/** The off-hand stack object changed (reference comparison, as vanilla). */
	public boolean offHandChanged() {
		return offHandChanged;
	}
}
