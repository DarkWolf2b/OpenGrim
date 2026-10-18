package dev.opengrim.modules.utility;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.SoundPlayEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.StringSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.sound.SoundInstance;
import net.minecraft.sound.SoundCategory;
import net.minecraft.sound.SoundEvents;

/**
 * Hit Sounds (registry sixtwo.dQ, module id 63): "Plays sound after hit".
 *
 * <p>parity: partial — settings/wiring 1:1, the sound-selection assets and the
 * match needle are VM-resident. Spec: analysis/specs/casesafe/handlers/dQ_.md
 * (the source-map's handlers/dQ.md is the case-collapsed dq Storage ESP twin).
 * Evidence: dQ.java:56-165 constructor with Hit Sound mode dQ.java:69 (Custom
 * dQ.java:77, One dQ.java:78 default via {@code .SY()}, Two dQ.java:79, Three
 * dQ.java:80, Four dQ.java:81, Five dQ.java:82, Six dQ.java:83), Volume mode
 * dQ.java:91 ({@code .SO(1)} ⇒ Custom index 1 default; Synchronized
 * dQ.java:105, Custom dQ.java:113), Sound Volume dQ.java:127 (visible iff
 * Volume=Custom, dQ.java:164), Cancel Original Sound dQ.java:150 (default on),
 * Sound URL dQ.java:161 (max 2048, default empty, visible iff Hit Sound=Custom,
 * dQ.java:163); listener {@code @hG(mw.LOWEST) aoY(gI)} dQ.java:190-191; state
 * {@code FXFhS} dQ.java:44, {@code gxiKQ} dQ.java:43; visibility predicate
 * {@code apa()} dQ.java:176.
 *
 * <p>Recovered contract (handlers/dQ_.md "Per-handler semantics" 2, token trace
 * POOL[0xb040,0x1ea]): on every sound start, take
 * {@code SoundInstance.getId().getPath()} and {@code String.contains}-match a
 * hit-sound pattern; on match, cancel the original sound when Cancel Original
 * Sound is on, then play the selected hit sound (presets One..Six or the
 * Custom URL) at the recovered gain — Custom → Sound Volume (INtkR), and
 * Synchronized → the PLAYERS category gain ({@code method_1630}
 * getCategorySoundVolume).
 *
 * <p>High-probability guesses (labeled): the match needle
 * {@value #HIT_SOUND_MATCH} (the VM needle is unrecovered; the window shows
 * only one {@code contains(CharSequence)} call, "Unrecovered" 1), the preset
 * One..Six → vanilla sound with per-preset pitch (the {@code oc} audio payloads
 * are unrecovered, "Unrecovered" 2), and the gain handling: the vanilla
 * pipeline already multiplies PLAYERS sounds by the category gain, so the
 * Synchronized branch passes 1.0 (equivalent net result).
 *
 * <p>Not implemented ([U]): Custom-mode URL audio ({@code oc.cBL} async fetch +
 * {@code qI.daR} raw-bytes playback, dQ.java:178 aoZ/gxiKQ machinery) has no
 * equivalent in the rebuild — on a match the original sound is still
 * cancelled (the pool order puts sfyvC before rccnf) but no replacement
 * plays, so Custom mode is silent while Cancel Original Sound is on.
 *
 * <p>Framework limitation (labeled): {@code cy.Un(2048)} caps the Sound URL
 * length; {@link StringSetting} has no max-length support, so the cap is not
 * enforced. Trace 2026-10-17: dQ class load only — {@code aoY} never fired
 * (no sound events during the enabled window; capture condition: hit a player
 * with Hit Sounds enabled).
 */
public class HitSounds extends Module {
	/**
	 * High-probability guess for the VM-resident match needle: the vanilla
	 * player attack sound family (entity.player.attack.strong/weak/crit/sweep/
	 * knockback/nodamage), the "hit" sounds a hit-sound replacer targets.
	 */
	private static final String HIT_SOUND_MATCH = "entity.player.attack";

	private final ModeSetting hitSound = register(new ModeSetting("hit_sound",
			List.of("custom", "one", "two", "three", "four", "five", "six"), "one"));
	private final ModeSetting volumeMode = register(new ModeSetting("volume_mode",
			List.of("synchronized", "custom"), "custom"));
	private final DoubleSetting soundVolume = register(new DoubleSetting("sound_volume", 1.0, 0.0, 100.0, 70.0, " %"));
	private final BoolSetting cancelOriginalSound = register(new BoolSetting("cancel_original_sound", true));
	private final StringSetting soundUrl = register(new StringSetting("sound_url", ""));

	public HitSounds() {
		super("hit_sounds", "Hit Sounds", "Plays sound after hit", ModuleCategory.UTILITY);
	}

	@Override
	public void onTick() {
		soundVolume.setVisible("custom".equals(volumeMode.getValue()));
		soundUrl.setVisible("custom".equals(hitSound.getValue()));
	}

	/**
	 * Port of dQ#aoY(gI) (dQ.java:190-191): the sound-play handler. Runs for
	 * every started sound; matches the path, cancels the original when
	 * configured, and plays the replacement. The cancel (sfyvC) precedes the
	 * Hit Sound mode read (rccnf) in the recovered pool order
	 * (handlers/dQ_.md "Per-handler semantics" 2), so it applies in every
	 * matched mode — including Custom, whose fetched-asset playback is the
	 * [U] gap below.
	 */
	@Subscribe
	public void onSoundPlay(SoundPlayEvent event) {
		SoundInstance sound = event.sound();
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}
		if (!sound.getId().getPath().contains(HIT_SOUND_MATCH)) {
			return;
		}
		if (cancelOriginalSound.getValue()) {
			event.cancel();
		}
		if ("custom".equals(hitSound.getValue())) {
			// [U] the Custom URL audio pipeline (oc.cBL fetch / qI.daR raw
			// playback, dQ.java:178 aoZ + gxiKQ machinery) has no rebuild
			// equivalent; the original plays the fetched asset here.
			return;
		}
		client.world.playSound(client.player, client.player.getBlockPos(),
				SoundEvents.ENTITY_EXPERIENCE_ORB_PICKUP, SoundCategory.PLAYERS,
				resolveVolume(client), resolvePitch());
	}

	/**
	 * Playback gain (dQ.md "Volume" contract): the Custom slider value as a
	 * 0-1 fraction; the Synchronized branch's recovered
	 * {@code getCategorySoundVolume(PLAYERS)} readout is applied by the vanilla
	 * pipeline itself, so it passes 1.0.
	 */
	public float resolveVolume(MinecraftClient client) {
		if ("custom".equals(volumeMode.getValue())) {
			return (float) (soundVolume.getValue() / 100.0);
		}
		return 1.0f;
	}

	/** Whether the vanilla hit sound is suppressed when a hit sound fires. */
	public boolean shouldCancelOriginal() {
		return cancelOriginalSound.getValue();
	}

	/** [G] preset One..Six pitch stand-in (the original assets are unrecovered). */
	private float resolvePitch() {
		return switch (hitSound.getValue()) {
			case "two" -> 1.1f;
			case "three" -> 1.2f;
			case "four" -> 1.3f;
			case "five" -> 1.4f;
			case "six" -> 1.5f;
			default -> 1.0f;
		};
	}
}
