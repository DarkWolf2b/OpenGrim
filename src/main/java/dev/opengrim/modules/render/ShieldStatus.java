package dev.opengrim.modules.render;

import java.util.Map;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.network.packet.s2c.play.PlaySoundS2CPacket;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;

/**
 * Shield Status (registry sixtwo.cY): "Shows shield status represented by color".
 *
 * <p>Port of sixtwo.cY (analysis/decompiled/payload-decrypted/sixtwo/cY.java lines 68-571;
 * helper class on.java lines 26-127; spec analysis/specs/handlers/cY.md and
 * analysis/specs/modules/cY.md).
 *
 * <p>Settings (cY.java:82-144): "Only Self" false; "Color Transition" default false
 * (cJ field init cJ_.java:20 — cY.java:100 passes no .WE(...));
 * "Enabled Color" = mG.rxCUH = cnP(0,255,71) = 0xFF00FF47 (mG_.java:185);
 * "Using Color" = mG.rxCUH; "Disabled Color" = mG.vuAhq = cnP(255,0,0) = 0xFFFF0000
 * (mG_.java:184). Color resolution (cY.java:267-369 aaK): null/other-player → mG.UhgnI
 * (transparent, mG_.java:194); shield in use → Using Color; Color Transition off →
 * Disabled/Enabled; on → jk.bDu(Enabled, Disabled, progress).
 *
 * <p>Handler wiring (cY.java): aaO bare tick → on.cFG() clear (cY.java:252); aaL
 * post-motion tick → on.cFv() update (cY.java:372); aaM attack → on.cFz(player)
 * (cY.java:381); aaN packet → EntityStatusS2CPacket → on.cFy(player, status), and
 * PlaySoundS2CPacket path containing qnaeb (unrecovered) → on.cFw(x,y,z) (cY.java:409);
 * aaP/aaQ render → jD.bHl() flush (cY.java:527/561); YO → on.cFG() + jD teardown
 * (cY.java:566). Trace 2026-10-17: aaN entered 34×, aaL 6×, YO 2×; aaO/aaM/aaP/aaQ
 * never fired in the tour.
 *
 * <p>Gaps (audit 2026-10-17): the on helper is fully native (on.java:74-127 native
 * declarations; VM blobs in ghidra handlers-stitched/sixtwo_on.c, pool names only) —
 * [N], capture condition: runtime trace of on.cFA/cFB/cFC returns per shield state.
 * The state machine reproduced here is a high-probability guess: 100-tick disable
 * (vanilla shield cooldown, BlocksAttacksComponent.applyShieldCooldown), status bytes
 * 9/30, "shield.break"/"shield.block" sound substrings, 2-block sound radius, and the
 * axe-only attack gate are all labeled guesses. Visual: the original queues the
 * rendered player's model via jD.bHk (called from a native/mixin player-render hook)
 * and flushes it through the glow pass in aaP/aaQ; OpenGrim has no such hook, so a
 * small outline marker above each player is drawn instead (approximation).
 */
public class ShieldStatus extends Module {
	private final BoolSetting onlySelf = register(new BoolSetting("only_self", false));
	// cJ field default is false (cJ_.java:20); cY.java:100 has no .WE(...) call.
	private final BoolSetting colorTransition = register(new BoolSetting("color_transition", false));
	private final ColorSetting enabledColor = register(new ColorSetting("enabled_color", 0xFF00FF47));
	private final ColorSetting usingColor = register(new ColorSetting("using_color", 0xFF00FF47));
	private final ColorSetting disabledColor = register(new ColorSetting("disabled_color", 0xFFFF0000));

	private static final int SHIELD_DISABLE_TICKS = 100;
	private final Map<UUID, PlayerShieldState> playerStates = new ConcurrentHashMap<>();

	public ShieldStatus() {
		super("shield_status", "Shield Status", "Shows shield status represented by color", ModuleCategory.RENDER);
	}

	@Override
	public void onTick() {
		for (Map.Entry<UUID, PlayerShieldState> entry : playerStates.entrySet()) {
			PlayerShieldState state = entry.getValue();
			if (state.disableTicksRemaining > 0) {
				state.disableTicksRemaining--;
			}
		}
	}

	@Subscribe
	public void onAttack(AttackEntityEvent event) {
		if (!isEnabled()) {
			return;
		}
		if (!(event.target() instanceof PlayerEntity target)) {
			return;
		}
		PlayerEntity attacker = event.player();
		ItemStack weapon = attacker.getMainHandStack();
		if (weapon.getItem().toString().contains("axe") && target.isBlocking()) {
			PlayerShieldState state = playerStates.computeIfAbsent(target.getUuid(), k -> new PlayerShieldState());
			state.disableTicksRemaining = SHIELD_DISABLE_TICKS;
		}
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!isEnabled()) {
			return;
		}
		Packet<?> packet = event.packet();
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return;
		}

		if (packet instanceof EntityStatusS2CPacket statusPacket) {
			Entity entity = statusPacket.getEntity(client.world);
			if (entity instanceof PlayerEntity player) {
				byte status = statusPacket.getStatus();
				if (status == 9 || status == 30) {
					PlayerShieldState state = playerStates.computeIfAbsent(player.getUuid(), k -> new PlayerShieldState());
					state.disableTicksRemaining = SHIELD_DISABLE_TICKS;
				}
			}
		} else if (packet instanceof PlaySoundS2CPacket soundPacket) {
			String soundId = soundPacket.getSound().getIdAsString();
			if (soundId.contains("shield.break") || soundId.contains("shield.block")) {
				Vec3d soundPos = new Vec3d(soundPacket.getX(), soundPacket.getY(), soundPacket.getZ());
				for (PlayerEntity player : client.world.getPlayers()) {
					if (player.getEntityPos().squaredDistanceTo(soundPos) < 4.0) {
						if (soundId.contains("shield.break")) {
							PlayerShieldState state = playerStates.computeIfAbsent(player.getUuid(), k -> new PlayerShieldState());
							state.disableTicksRemaining = SHIELD_DISABLE_TICKS;
						}
						break;
					}
				}
			}
		}
	}

	/**
	 * Resolves the color for a player, matching original cY.aaK.
	 *
	 * @param player target player
	 * @return ARGB color int or 0 (transparent)
	 */
	public int resolveColor(PlayerEntity player) {
		if (player == null) {
			return 0;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (onlySelf.getValue() && player != client.player) {
			return 0;
		}

		boolean isUsing = player.isBlocking();
		if (isUsing) {
			return usingColor.getValue();
		}

		boolean isDisabled = isShieldDisabled(player);
		if (!colorTransition.getValue()) {
			return isDisabled ? disabledColor.getValue() : enabledColor.getValue();
		}

		float progress = isDisabled ? getProgress(player) : 0.0f;
		return lerpColor(enabledColor.getValue(), disabledColor.getValue(), progress);
	}

	private boolean isShieldDisabled(PlayerEntity player) {
		ItemStack shield = findShield(player);
		if (shield != null && player.getItemCooldownManager().isCoolingDown(shield)) {
			return true;
		}
		PlayerShieldState state = playerStates.get(player.getUuid());
		return state != null && state.disableTicksRemaining > 0;
	}

	private float getProgress(PlayerEntity player) {
		ItemStack shield = findShield(player);
		if (shield != null && player.getItemCooldownManager().isCoolingDown(shield)) {
			return player.getItemCooldownManager().getCooldownProgress(shield, 0.0f);
		}
		PlayerShieldState state = playerStates.get(player.getUuid());
		if (state != null && state.disableTicksRemaining > 0) {
			return state.disableTicksRemaining / (float) SHIELD_DISABLE_TICKS;
		}
		return 0.0f;
	}

	private static ItemStack findShield(PlayerEntity player) {
		ItemStack offhand = player.getOffHandStack();
		if (offhand.isOf(Items.SHIELD)) {
			return offhand;
		}
		ItemStack mainHand = player.getMainHandStack();
		return mainHand.isOf(Items.SHIELD) ? mainHand : null;
	}

	private static int lerpColor(int from, int to, float factor) {
		factor = Math.max(0.0f, Math.min(1.0f, factor));
		int a1 = (from >> 24) & 0xFF, r1 = (from >> 16) & 0xFF, g1 = (from >> 8) & 0xFF, b1 = from & 0xFF;
		int a2 = (to >> 24) & 0xFF, r2 = (to >> 16) & 0xFF, g2 = (to >> 8) & 0xFF, b2 = to & 0xFF;
		int a = (int) (a1 + (a2 - a1) * factor);
		int r = (int) (r1 + (r2 - r1) * factor);
		int g = (int) (g1 + (g2 - g1) * factor);
		int b = (int) (b1 + (b2 - b1) * factor);
		return (a << 24) | (r << 16) | (g << 8) | b;
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.player == null) {
			return;
		}

		Camera camera = event.camera();
		Vec3d cameraPos = camera.getCameraPos();
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		VertexConsumer lines = consumers.getBuffer(RenderLayers.lines());

		matrices.push();
		try {
			matrices.translate(-cameraPos.x, -cameraPos.y, -cameraPos.z);

			for (PlayerEntity player : client.world.getPlayers()) {
				int argb = resolveColor(player);
				// jD.bHk skips transparent colors (mG.cnW: alpha == 0, mG_.java:951-972);
				// non-zero alpha is passed through unchanged.
				if ((argb >>> 24) == 0) {
					continue;
				}

				Vec3d center = player.getEntityPos().add(0.0, player.getStandingEyeHeight() + 0.5, 0.0);
				float sz = 0.15f;
				Box box = new Box(center.x - sz, center.y - sz, center.z - sz, center.x + sz, center.y + sz, center.z + sz);
				drawBoxOutline(matrices.peek(), lines, box, argb);
			}
		} finally {
			matrices.pop();
		}
	}

	private static void drawBoxOutline(MatrixStack.Entry entry, VertexConsumer vc, Box box, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, y1 = (float) box.maxY, z1 = (float) box.maxZ;

		line(entry, vc, x0, y0, z0, x1, y0, z0, r, g, b, a);
		line(entry, vc, x1, y0, z0, x1, y0, z1, r, g, b, a);
		line(entry, vc, x1, y0, z1, x0, y0, z1, r, g, b, a);
		line(entry, vc, x0, y0, z1, x0, y0, z0, r, g, b, a);
		line(entry, vc, x0, y1, z0, x1, y1, z0, r, g, b, a);
		line(entry, vc, x1, y1, z0, x1, y1, z1, r, g, b, a);
		line(entry, vc, x1, y1, z1, x0, y1, z1, r, g, b, a);
		line(entry, vc, x0, y1, z1, x0, y1, z0, r, g, b, a);
		line(entry, vc, x0, y0, z0, x0, y1, z0, r, g, b, a);
		line(entry, vc, x1, y0, z0, x1, y1, z0, r, g, b, a);
		line(entry, vc, x1, y0, z1, x1, y1, z1, r, g, b, a);
		line(entry, vc, x0, y0, z1, x0, y1, z1, r, g, b, a);
	}

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float x1, float y1, float z1,
			float x2, float y2, float z2, float r, float g, float b, float a) {
		float dx = x2 - x1, dy = y2 - y1, dz = z2 - z1;
		vc.vertex(entry, x1, y1, z1).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
		vc.vertex(entry, x2, y2, z2).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
	}

	@Override
	protected void onDisable() {
		playerStates.clear();
	}

	private static final class PlayerShieldState {
		int disableTicksRemaining;
	}
}
