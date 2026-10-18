package dev.opengrim.modules.movement;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.entity.BlockEntity;
import net.minecraft.block.entity.ShulkerBoxBlockEntity;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.ChunkPos;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.chunk.WorldChunk;

/**
 * High Jump (registry sixtwo.em, module id 167): "Allows player to jump higher".
 *
 * <p>Port of sixtwo.em (casesafe/payload-decrypted/sixtwo/em.java:22-90
 * constructor, listeners em.java:101-108). Spec: analysis/specs/handlers/em.md.
 * Settings ctor order: Mode group (em.java:25-35) with Vanilla (em.java:45) and
 * Grim Shulker {@code .SY()} (em.java:60); Jump Height
 * {@code cC Vy(0.01).Vw(1.0).Vx(3.0).VA(1.6)} + {@code Vf(Mbkzf::SZ)} (em.java:73);
 * Vertical Boost {@code cC Vy(0.01).Vw(0.1).Vx(3.0).VA(1.91)} +
 * {@code Vf(nszob::SZ)} (em.java:89). Original handlers: {@code ati(hs)} jump-velocity
 * event (mutable two-float event on a living entity, VM-only), {@code atj(gH$th)}
 * tick, {@code atk(ShulkerBoxBlockEntity)} platform predicate; Grim Shulker upkeep
 * scans the player's chunk ({@code Entity.getChunkPos} {@code method_31476},
 * {@code World.isChunkLoaded} {@code method_8393}, {@code World.getChunk}
 * {@code method_8497}, {@code ja.byD(WorldChunk)} = {@code new
 * ArrayList<>(chunk.getBlockEntities().values())} — recovered Java, ja.java:26-28,
 * {@code BlockEntity.getPos} {@code method_11016}).
 *
 * <p><b>Recovered jump-event surface (2026-10-18 re-verify):</b> the original
 * {@code hs} event is built by the bootstrap mixin
 * {@code mixin/accessors/LivingEntityJumpEventBridgeMixin.class} (javap -c):
 * an {@code @Inject} at HEAD of {@code method_6043} (= {@code jump}, cancellable)
 * constructs {@code new hs(this, method_6106(), method_36454())} — i.e.
 * ({@code LivingEntity}, {@code getJumpVelocity()}, {@code getYaw()}) — and
 * dispatches it ({@code bdV()}); if the event is cancelled ({@code bdW()}) the
 * whole jump is cancelled. Two {@code @Redirect}s replace the vanilla reads:
 * {@code method_6106()} &rarr; {@code hs.bde()} and {@code method_36454()} &rarr;
 * {@code hs.bdf()} (yarn-1.21.11+build.6: jump, getJumpVelocity, getYaw). So the
 * two event floats are (jump velocity, yaw) and em's slice touches only
 * {@code bde}/{@code bdg} (em.md "Per-handler" — the yaw accessors are absent) —
 * i.e. the module rewrites the *vertical jump velocity* at jump time. The port
 * multiplies the just-set {@code velocity.y} (= the vanilla
 * {@code getJumpVelocity()} value, 0.42 for an unmodified player) by the active
 * slider, which is the same value the original writes through
 * {@code bdg(bde() * setting)}; the exact arithmetic inside {@code ati} stays
 * VM-only (em.md "Unrecovered" #1). The per-shulker {@code atk} predicate is
 * replaced by the proximity test below (em.md "Unrecovered" #2).
 *
 * <p>trace 2026-10-17: atj entered 2× in its 4s window (once per client tick,
 * ~2.5ms/1.6ms under trace load — consistent with the recovered chunk scan) and
 * each call ran the shared VM tripwire {@code eB.avS()}; ati (jump-velocity
 * event) did not trigger — capture condition: jump while the module is enabled.
 * The per-tick scan below is the atj upkeep port; the boost reads the cached
 * result.
 */
public class HighJump extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode", List.of("vanilla", "grim_shulker"), "grim_shulker"));
	private final DoubleSetting jumpHeight = register(new DoubleSetting("jump_height", 0.01, 1.0, 3.0, 1.6, null));
	private final DoubleSetting verticalBoost = register(new DoubleSetting("vertical_boost", 0.01, 0.1, 3.0, 1.91, null));

	private boolean wasOnGround;
	private boolean boostedJump;
	private boolean shulkerPlatform;

	public HighJump() {
		super("high_jump", "High Jump", "Allows player to jump higher", ModuleCategory.MOVEMENT);
	}

	public boolean isShulkerPlatform(ShulkerBoxBlockEntity shulker) {
		if (shulker == null) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return false;
		}
		BlockPos feet = client.player.getBlockPos();
		BlockPos pos = shulker.getPos();
		return Math.abs(pos.getX() - feet.getX()) <= 1 && Math.abs(pos.getZ() - feet.getZ()) <= 1
				&& pos.getY() <= feet.getY() && feet.getY() - pos.getY() <= 2;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		jumpHeight.setVisible("vanilla".equals(mode.getValue()));
		verticalBoost.setVisible("grim_shulker".equals(mode.getValue()));

		// atj upkeep: per-tick chunk block-entity scan feeding atk (trace
		// 2026-10-17: atj ran once per client tick, each call running the VM
		// tripwire eB.avS()). Only Grim Shulker consumes the result.
		shulkerPlatform = "grim_shulker".equals(mode.getValue()) && hasShulkerPlatform(client, player);

		boolean onGround = player.isOnGround();
		if (onGround) {
			boostedJump = false;
		} else if (!wasOnGround && player.getVelocity().y > 0.0 && !boostedJump) {
			applyBoost(player);
			boostedJump = true;
		}
		wasOnGround = onGround;
	}

	private void applyBoost(ClientPlayerEntity player) {
		Vec3d velocity = player.getVelocity();
		if ("vanilla".equals(mode.getValue())) {
			player.setVelocity(velocity.x, velocity.y * jumpHeight.getValue(), velocity.z);
			return;
		}
		if (shulkerPlatform) {
			player.setVelocity(velocity.x, velocity.y * verticalBoost.getValue(), velocity.z);
		}
	}

	/**
	 * Port of the {@code atj} Grim Shulker upkeep scan: chunk at the player
	 * ({@code getChunkPos}/{@code isChunkLoaded}/{@code getChunk}) → block-entity
	 * list ({@code ja.byD}) → per-shulker {@code atk}.
	 */
	private boolean hasShulkerPlatform(MinecraftClient client, ClientPlayerEntity player) {
		ChunkPos chunkPos = player.getChunkPos();
		if (!client.world.isChunkLoaded(chunkPos.x, chunkPos.z)) {
			return false;
		}
		WorldChunk chunk = client.world.getChunk(chunkPos.x, chunkPos.z);
		for (BlockEntity blockEntity : chunk.getBlockEntities().values()) {
			if (blockEntity instanceof ShulkerBoxBlockEntity shulker && isShulkerPlatform(shulker)) {
				return true;
			}
		}
		return false;
	}
}
