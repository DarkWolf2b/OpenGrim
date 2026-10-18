package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;
import net.minecraft.client.sound.SoundInstance;

/**
 * Fired for every client-side sound start (before the sound is handed to the
 * engine); cancellable. Port of the original's {@code gI} sound-play event
 * wrapping a {@code SoundInstance} (sixtwo.gI, accessed via {@code bcc()} —
 * handlers/dQ_.md "Per-handler semantics" 2); sixtwo.dQ#aoY subscribes to it
 * at {@code @hG(mw.LOWEST)} so it runs first and can cancel the original sound.
 */
public class SoundPlayEvent implements Cancellable {
	private final SoundInstance sound;
	private boolean cancelled;

	public SoundPlayEvent(SoundInstance sound) {
		this.sound = sound;
	}

	public SoundInstance sound() {
		return sound;
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
