package dev.opengrim.modules.utility;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.network.packet.c2s.play.HandSwingC2SPacket;

/**
 * No Swing (registry sixtwo.eg, module id 77): "Cancels swinging".
 *
 * <p>Port of sixtwo.eg (payload-decrypted/sixtwo/eg.java:10-59 constructor;
 * getters ast/asu eg.java:50-52; spec analysis/specs/casesafe/handlers/eg.md —
 * the non-casesafe specs/handlers/eg.md path may carry eG "Spear Lunge"
 * content because of the eG/eg filename collision).
 *
 * <p>Settings:
 * <ul>
 *   <li>Bool "Client" (cJ DdQgn, eg.java:28, default true)
 *   <li>Bool "Both" (cJ WgBhf, eg.java:29-40, default false)
 * </ul>
 *
 * <p>Behavior:
 * <ul>
 *   <li>Client (default on): suppresses local arm-swing animation each tick.
 *   <li>Both (default off): additionally cancels outbound HandSwingC2SPacket
 *       packets via PacketSendEvent.
 * </ul>
 *
 * <p>Parity notes: the original class is config-only (zero @hG handlers); the
 * swing suppression lives in the native DLL patch layer, and the spec
 * explicitly says the "Both" C2S-suppression point is NOT token-cited — the
 * packet cancel below is the name-based reading (casesafe/handlers/eg.md,
 * "Semantics implied by the setting names"), i.e. a high-probability-guess
 * implementation of an unrecovered mechanism.
 *
 * <p>static re-verify 2026-10-17: resolving the decrypted native pool
 * (jna-decrypted-v2.dll, pool base RVA 0x301ee50) at the {@code sixtwo/eg}
 * marker gives a run with <b>no Minecraft token at all</b> — only eg's own
 * members ({@code DdQgn}, {@code WgBhf}, eg.java:28-29) and its obfuscation
 * statics. In particular there is no {@code HandSwingC2SPacket}
 * ({@code class_2883}) and no packet/network class reference anywhere in eg's
 * run, so the payload-side class cannot be the place the C2S cancel happens:
 * the DLL swing patch is the only host, and the cancel below stays a labeled
 * stand-in.
 *
 * <p>trace 2026-10-17 (registry id 77): the class loaded but produced zero method
 * entries — expected, since the payload declares no behavior handler (only the two
 * setting getters ast/asu and decryptors; the DLL swing patch is outside the payload,
 * eg.md "Architecture"). No in-payload capture condition exists: a follow-up would need
 * to observe the native swing hook (arm-swing animation state), not JVMTI method entries.
 */
public class NoSwing extends Module {
	private final BoolSetting client = register(new BoolSetting("client", true));
	private final BoolSetting both = register(new BoolSetting("both", false));

	public NoSwing() {
		super("no_swing", "No Swing", "Cancels swinging", ModuleCategory.PLAYER);
	}

	@Override
	public void onTick() {
		MinecraftClient mc = MinecraftClient.getInstance();
		ClientPlayerEntity player = mc.player;
		if (player == null) {
			return;
		}
		if (client.getValue() || both.getValue()) {
			player.handSwinging = false;
			player.handSwingTicks = 0;
		}
	}

	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		if (both.getValue() && event.packet() instanceof HandSwingC2SPacket) {
			event.cancel();
		}
	}

	public BoolSetting ast() {
		return client;
	}

	public BoolSetting asu() {
		return both;
	}

	public BoolSetting getClient() {
		return client;
	}

	public BoolSetting getBoth() {
		return both;
	}
}