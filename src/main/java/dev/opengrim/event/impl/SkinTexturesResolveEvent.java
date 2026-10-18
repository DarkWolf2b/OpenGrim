package dev.opengrim.event.impl;

import java.util.UUID;

import net.minecraft.entity.player.SkinTextures;

/**
 * Fired when a player list entry resolves its {@link SkinTextures} (the
 * {@code PlayerListEntry#getSkinTextures()} result). Cape (sixtwo ee)
 * replaces the cape asset here, mirroring the original's
 * skin-provider hook ({@code qG.dam}).
 *
 * <p>The vanilla skin is carried in {@link #skin()}; a listener may swap in a
 * rebuilt skin (e.g. via {@code SkinTextures#withOverride}) through
 * {@link #setReplacement(SkinTextures)}.
 */
public class SkinTexturesResolveEvent {
	private final UUID profileId;
	private final SkinTextures skin;
	private SkinTextures replacement;

	public SkinTexturesResolveEvent(UUID profileId, SkinTextures skin) {
		this.profileId = profileId;
		this.skin = skin;
	}

	public UUID profileId() {
		return profileId;
	}

	public SkinTextures skin() {
		return skin;
	}

	public SkinTextures replacement() {
		return replacement;
	}

	public void setReplacement(SkinTextures replacement) {
		this.replacement = replacement;
	}
}