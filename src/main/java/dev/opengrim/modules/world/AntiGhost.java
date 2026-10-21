package dev.opengrim.modules.world;

import java.lang.reflect.Field;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.block.entity.ShulkerBoxBlockEntity;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerInteractionManager;
import net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;

/**
 * Anti Ghost (registry sixtwo.en): "Fixes ghost blocks".
 *
 * <p>Port of sixtwo.en from the declared-class-verified decompile
 * analysis/decompiled/casesafe/payload-decrypted/sixtwo/en.java:20-43
 * (constructor id 46, category {@code gh.xgeEn}, {@code cPtuD = mT.cpA()};
 * :35-36 {@code aaj()} enable override; :38 {@code atp()} private helper).
 * The un-prefixed payload-decrypted/sixtwo/en.java declares sixtwo.eN (Mace
 * Swap) on this checkout — a case-collision twin. Spec
 * analysis/specs/casesafe/handlers/en.md — the plain handlers/en.md file is
 * the eN (Mace Swap) case-twin.
 *
 * <p>sixtwo.en declares zero settings.
 *
 * <p>State and behavioral tokens from decompile and the cluster pool window
 * 0xd0d7,0x240:
 * <ul>
 *   <li>cPtuD (mT.cpA()) debounce stopwatch</li>
 *   <li>PlayerActionC2SPacket with Action.ABORT_DESTROY_BLOCK (field_12971)</li>
 *   <li>fallDistance gating (field_6017)</li>
 *   <li>ShulkerBoxBlockEntity.getAnimationProgress(F)F gating (method_11312)</li>
 * </ul>
 *
 * <p>static re-verify 2026-10-17 (attribution caveat): the window 0xd0d7,0x240
 * is a <b>cluster</b> slice, not an en-only run — it starts two bytes inside
 * em's field {@code eXBkK} and ends inside eo's run. Bounding en's run by its
 * own declared members (en.java:4-14: {@code XGcHI/cPtuD/kpGmO/atq/BCAKr/
 * VqNdz/pFvmE/atr}) leaves exactly the {@code PlayerActionC2SPacket} /
 * {@code ABORT_DESTROY_BLOCK} block. The {@code field_6017} (fallDistance) and
 * {@code method_11312} (getAnimationProgress) tokens sit in em's part of the
 * same window, and em declares {@code private native boolean
 * atk(net.minecraft.block.entity.ShulkerBoxBlockEntity)} — i.e. they are at
 * least shared with em (High Jump) and cannot be attributed to en exclusively.
 * The two gates below are therefore labeled shared/uncertain rather than
 * en-recovered.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): {@code aaj()} (the enable
 * hook override) ran once — first action {@code mT.cpC(J)Z → true} (the
 * cPtuD stopwatch created without reset, so the debounce gate passes), then
 * the VM decrypted its 101-char constant: a {@code '5'} length byte
 * (53 = message length) followed by "You are on cooldown wait a moment before
 * trying again" with an integrity marker (values 6..52) interleaved before
 * every message char after the first six — the recovered enable-cooldown
 * message. {@code atp()} never triggered (capture condition: break a block so
 * the client's breaking state goes stale with the module enabled). The
 * cooldown threshold argument of {@code cpC(J)} is not visible in the trace —
 * the gate below uses a labeled 500 ms placeholder.
 */
public class AntiGhost extends Module {
	/** mT.cpA() stopwatch (no reset) — the first enable always passes the gate. */
	private static final long ENABLE_COOLDOWN_MS = 500L;

	private BlockPos breakingPos;
	private int idleTicks;
	private long lastActionMs;
	private long lastEnableAt;

	public AntiGhost() {
		super("anti_ghost", "Anti Ghost", "Fixes ghost blocks", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onEnable() {
		// trace 2026-10-17: aaj()'s first action is cPtuD.cpC(...) → true (the
		// mT.cpA() stopwatch is created without reset so the first check
		// passes); the hook references the recovered message
		// "You are on cooldown wait a moment before trying again". The
		// threshold argument is unrecovered — 500 ms placeholder. The message
		// output path is a stack adaptation (no chat/Text token in en's pool
		// window).
		if (System.currentTimeMillis() - lastEnableAt < ENABLE_COOLDOWN_MS) {
			MinecraftClient client = MinecraftClient.getInstance();
			if (client.inGameHud != null) {
				client.inGameHud.getChatHud().addMessage(net.minecraft.text.Text.literal(
						"You are on cooldown wait a moment before trying again"));
			}
			return;
		}
		lastEnableAt = System.currentTimeMillis();
		breakingPos = null;
		idleTicks = 0;
		lastActionMs = 0L;
	}

	@Override
	public void onDisable() {
		breakingPos = null;
		idleTicks = 0;
		lastActionMs = 0L;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		ClientPlayerInteractionManager interactionManager = client.interactionManager;
		if (player == null || player.getEntityWorld() == null || interactionManager == null || client.getNetworkHandler() == null) {
			return;
		}

		if (interactionManager.isBreakingBlock()) {
			BlockPos pos = currentBreakingPos(interactionManager);
			if (pos != null) {
				breakingPos = pos.toImmutable();
				idleTicks = 0;
			}
			return;
		}

		if (breakingPos == null) {
			return;
		}

		idleTicks++;
		if (idleTicks < 2) {
			return;
		}

		long now = System.currentTimeMillis();
		if (now - lastActionMs < 50L) {
			return;
		}

		if (player.fallDistance > 0.0) {
			return;
		}

		if (player.getEntityWorld().getBlockEntity(breakingPos) instanceof ShulkerBoxBlockEntity shulker
				&& shulker.getAnimationProgress(1.0f) > 0.0f) {
			return;
		}

		if (!player.getEntityWorld().getBlockState(breakingPos).isAir()) {
			client.getNetworkHandler().sendPacket(new PlayerActionC2SPacket(
					PlayerActionC2SPacket.Action.ABORT_DESTROY_BLOCK, breakingPos, Direction.UP));
			lastActionMs = now;
		} else {
			breakingPos = null;
		}
	}

	private static BlockPos currentBreakingPos(ClientPlayerInteractionManager interactionManager) {
		try {
			Field field = ClientPlayerInteractionManager.class.getDeclaredField("currentBreakingPos");
			field.setAccessible(true);
			return (BlockPos) field.get(interactionManager);
		} catch (ReflectiveOperationException | ClassCastException e) {
			return null;
		}
	}
}
