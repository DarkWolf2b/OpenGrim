package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;

/**
 * Raw keyboard event, mirroring the original shell's {@code gA} key event
 * (sixtwo.gA_, analysis/decompiled/casesafe/payload-named/sixtwo/gA_.java:14-50;
 * 0 natives) and the shell bridge
 * {@code mixin.accessors.KeyboardInputMixin} on {@code Keyboard#onKey}
 * (bootstrap line 28-47), which constructs {@code gA} with
 * {@code (KeyInput.key, action, modifiers)}.
 *
 * <p>Fields match what {@code fX.aYc} reads: {@code bbQ()} = action
 * ({@code == 1} for GLFW press), {@code bbP()} = key. {@code scancode} and
 * {@code modifiers} are carried for completeness. Cancelling mirrors
 * {@code hH.bdW()}: the shell cancels the vanilla key callback when a listener
 * sets it, although Interface itself never cancels.
 */
public class KeyEvent implements Cancellable {
	private final int key;
	private final int scancode;
	private final int action;
	private final int modifiers;
	private boolean cancelled;

	public KeyEvent(int key, int scancode, int action, int modifiers) {
		this.key = key;
		this.scancode = scancode;
		this.action = action;
		this.modifiers = modifiers;
	}

	public int key() {
		return key;
	}

	public int scancode() {
		return scancode;
	}

	/** GLFW action: 1 = press, 0 = release, 2 = repeat. */
	public int action() {
		return action;
	}

	public int modifiers() {
		return modifiers;
	}

	@Override
	public boolean cancelled() {
		return cancelled;
	}

	@Override
	public void setCancelled(boolean cancelled) {
		this.cancelled = cancelled;
	}
}
