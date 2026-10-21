package dev.opengrim.modules.utility;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.network.packet.s2c.common.CommonPingS2CPacket;

/**
 * Transactions (registry sixtwo.fW, module id 109, bind -999, category gh.KfAlY):
 * "Reads the transactions the server sends you".
 *
 * <p>Sources:
 * <ul>
 *   <li>analysis/decompiled/payload-named-cfr/sixtwo/fW.java:13-39 (constructor fW.java:20-23
 *       with {@code .aZS(false)}; native S2C listener aXZ(gL$tk) fW.java:32-33; native
 *       byte[]&rarr;String decoder aYb fW.java:30; static String HDivr fW.java:16)</li>
 *   <li>analysis/specs/casesafe/handlers/fW_.md (pool window POOL[0x153d1,0x353): fZ/ga/gb
 *       state-container surface, gb long-math codecs, Vector/ArrayList/ConcurrentHashMap
 *       accumulation; negative finding: zero packet-class tokens — the transaction filter is
 *       VM-resident)</li>
 * </ul>
 *
 * <p>Settings: zero settings constructed in the original class (fW_.md Settings section).
 *
 * <p>Behavior: passive observer of inbound transaction ("ping"/window-confirmation) traffic,
 * recording receive timing into the module's fields — the rebuild analog of the original's
 * shared fZ/ga/gb state-store measurements (no packet mutation in either; fW_.md contract).
 *
 * <p>Packet selection is a high-probability guess: the original's S2C type test has no
 * recoverable token. In 1.21.2+ the classic ConfirmTransactionS2C transaction packet was
 * replaced by {@link CommonPingS2CPacket} (server ping &rarr; client pong), the closest modern
 * transaction analog; keep-alive probing and screen-handler sync-id tracking are NOT
 * mirrored (no evidence of either in the decompile), so they were removed here.
 *
 * <p>trace 2026-10-17 (module window, registry id 109): {@code aXZ} entered 16&times; — once
 * per inbound S2C packet (16 aXZ calls against the window's {@code gL$tk} dispatches), i.e. the
 * listener is registered for the general inbound packet event and filters inside the body.
 * Every call's nested sequence was identical: {@code fX.aYu()} (decrypt watermark) &rarr;
 * {@code gg.bab() = 1} (the base in-game guard: player/world/interactionManager/
 * getNetworkHandler all non-null, gg.java:393-459) &rarr; {@code gL.bcf()} (packet read).
 * No {@code fZ}/{@code ga}/{@code gb} state-store calls occurred in any of the 16 spans
 * (their trace events are all boot-time config activity), so the latency pipeline only runs
 * past the packet filter — capture condition for a follow-up: a server that sends the
 * matching transaction packet (singleplayer's traffic did not match during the window).
 */
public class Transactions extends Module {
	private int lastPingParameter = -1;
	private int lastPingTick = -1;
	private int totalTransactionsObserved;

	public Transactions() {
		super("transactions", "Transactions", "Reads the transactions the server sends you", ModuleCategory.CLIENT);
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		// trace 2026-10-17: gg.bab() guard ran first on all 16 aXZ calls (returned 1), before
		// the packet read — the in-game check is the handler's first statement (1:1).
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		if (!(event.packet() instanceof CommonPingS2CPacket packet)) {
			return;
		}
		lastPingParameter = packet.getParameter();
		lastPingTick = clientTick();
		totalTransactionsObserved++;
	}

	/**
	 * Returns the parameter of the last observed server transaction ping, or -1 if unobserved.
	 */
	public int lastPingParameter() {
		return lastPingParameter;
	}

	/**
	 * Returns the client tick at which the last server transaction ping was observed, or -1.
	 */
	public int lastPingTick() {
		return lastPingTick;
	}

	/**
	 * Returns the total count of transaction packets observed while enabled.
	 */
	public int totalTransactionsObserved() {
		return totalTransactionsObserved;
	}

	private static int clientTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		return client.player == null ? -1 : client.player.age;
	}
}
