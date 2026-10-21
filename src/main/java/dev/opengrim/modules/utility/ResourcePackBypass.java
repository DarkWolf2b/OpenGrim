package dev.opengrim.modules.utility;

import java.util.Locale;
import java.util.UUID;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.StringSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ServerInfo;
import net.minecraft.network.packet.c2s.common.ResourcePackStatusC2SPacket;
import net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket;

/**
 * Resource Pack Bypass (registry sixtwo.fT, key 78, bind -999, category gh.KfAlY):
 * "Allows to bypass required server texture pack".
 *
 * <p>Specification and evidence (case-safe paths - the non-casesafe
 * payload-decrypted/payload-named-cfr entries are collapsed onto sixtwo.ft
 * Auto GApple and must not be trusted):
 * <ul>
 *   <li>Primary constructor &amp; settings: analysis/decompiled/casesafe/payload-decrypted/sixtwo/fT_.java:24-90
 *       (ct "Mode" group, cu "Enable For All" / cu "Specific Servers" .SY() default,
 *       cy "Servers" .Un(1024).Uo(placeholder).Up("anarchia.gg"), NKPoi.Vf(IVIuI::SZ) at :86,
 *       hF.bdI(this) at :89, super(gf.aZL(78, true, gh.KfAlY)) at :26)</li>
 *   <li>CFR decompile &amp; listener declarations: analysis/decompiled/casesafe/payload-named-cfr/sixtwo/fT_.java:24-90, 102-114, 156-157</li>
 *   <li>Handler &amp; pool analysis: analysis/specs/casesafe/handlers/fT_.md (POOL 0x15094,0x349:
 *       ResourcePackSendS2CPacket, ResourcePackStatusC2SPacket ACCEPTED / SUCCESSFULLY_LOADED,
 *       Thread.sleep + InterruptedException, server-list split/matching)</li>
 *   <li>Registry: analysis/specs/casesafe/modules/fT_.md:1-18</li>
 * </ul>
 *
 * <p>Boot flag: the original is the only module of this batch registered with the
 * {@code true} metadata flag (fT_.java:26) - see {@link #bootEnabled()} (same flag
 * as fQ/fO).
 *
 * <p>high-probability guess: the forged-reply details are VM-hidden
 * (casesafe/handlers/fT_.md "Unrecovered" #1): which status is sent first
 * (ACCEPTED then SUCCESSFULLY_LOADED), the 500 ms reply delay, and the
 * inbound-packet cancellation. The recovered surface proves only the two status
 * constants, the {@code (UUID, status)} ctor and {@code Thread.sleep}.
 *
 * <p>trace 2026-10-17: aXs fired 4353x - the session's global inbound-packet
 * hook (every S2C packet; every other gL$tk handler fired 1-24x) - fanning out to
 * aXu/aXv/aXw/aXx/aXz/aXA once and aXy twice per call, with every boolean probe
 * returning false (no forced pack in the traced run; aaj/YO 1x each). Capture
 * condition: join a server that forces a texture pack with the default
 * "Specific Servers" mode and a matching address, and log the two status sends.
 *
 * <p>Settings hierarchy:
 * <ul>
 *   <li>Mode (ct GroupSetting): "mode"</li>
 *   <li>Enable For All (cu BoolSetting under Mode): "enable_for_all", default false</li>
 *   <li>Specific Servers (cu BoolSetting under Mode): "specific_servers", default true (.SY())</li>
 *   <li>Servers (cy StringSetting): "servers", max len 1024, placeholder "hypixel.net, play.example.com", default "anarchia.gg"</li>
 * </ul>
 */
public class ResourcePackBypass extends Module {
	private final GroupSetting mode = register(new GroupSetting("mode"));
	private final BoolSetting enableForAll = new BoolSetting("enable_for_all", false);
	private final BoolSetting specificServers = new BoolSetting("specific_servers", true);
	private final StringSetting servers = register(new StringSetting("servers", "anarchia.gg"));

	public ResourcePackBypass() {
		super("resource_pack_bypass", "Resource Pack Bypass", "Allows to bypass required server texture pack",
				ModuleCategory.CLIENT);
		mode.add(enableForAll);
		mode.add(specificServers);
	}

	/**
	 * Boot-enabled: unlike most modules, the original registers fT with the {@code true}
	 * metadata flag ({@code gf.aZL(78, true, gh.KfAlY)}, casesafe fT_.java:26) - the same
	 * flag fQ/fO boot with (Module.bootEnabled / OpenGrimClient lines 18-24).
	 */
	@Override
	public boolean bootEnabled() {
		return true;
	}

	/**
	 * "Servers" is only visible while "Specific Servers" is the active mode
	 * ({@code NKPoi.Vf(this.IVIuI::SZ)}, casesafe fT_.java:86).
	 */
	@Override
	public void onTick() {
		servers.setVisible(specificServers.getValue());
	}

	/**
	 * Inbound packet listener mirroring sixtwo.fT#aXs(gL$tk) and sixtwo.fT#aXG(ResourcePackSendS2CPacket).
	 * Intercepts forced resource packs and sends forged ACCEPTED and delayed SUCCESSFULLY_LOADED status replies.
	 */
	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!isEnabled()) {
			return;
		}
		if (!(event.packet() instanceof ResourcePackSendS2CPacket packet)) {
			return;
		}

		MinecraftClient client = MinecraftClient.getInstance();
		ServerInfo serverEntry = client.getCurrentServerEntry();
		String currentAddress = serverEntry != null && serverEntry.address != null ? serverEntry.address : "";

		if (!shouldBypass(currentAddress)) {
			return;
		}

		event.setCancelled(true);

		UUID packId = packet.id();
		if (client.getNetworkHandler() != null) {
			client.getNetworkHandler().sendPacket(
					new ResourcePackStatusC2SPacket(packId, ResourcePackStatusC2SPacket.Status.ACCEPTED));

			Thread.ofVirtual().start(() -> {
				try {
					Thread.sleep(500L);
					MinecraftClient currentClient = MinecraftClient.getInstance();
					if (currentClient.getNetworkHandler() != null) {
						currentClient.getNetworkHandler().sendPacket(new ResourcePackStatusC2SPacket(
								packId, ResourcePackStatusC2SPacket.Status.SUCCESSFULLY_LOADED));
					}
				} catch (InterruptedException e) {
					Thread.currentThread().interrupt();
				}
			});
		}
	}

	/**
	 * Evaluates whether a server resource pack request for the given server address should be bypassed.
	 * Matches against parsed comma-separated server host entries.
	 */
	public boolean shouldBypass(String serverAddress) {
		if (enableForAll.getValue()) {
			return true;
		}
		if (!specificServers.getValue()) {
			return false;
		}
		if (serverAddress == null || serverAddress.isEmpty()) {
			return false;
		}
		String target = serverAddress.toLowerCase(Locale.ROOT);
		String configured = servers.getValue();
		if (configured == null || configured.isEmpty()) {
			return false;
		}
		for (String entry : configured.split(",")) {
			String host = entry.trim().toLowerCase(Locale.ROOT);
			if (!host.isEmpty() && (target.equals(host) || target.endsWith("." + host) || target.endsWith(host))) {
				return true;
			}
		}
		return false;
	}

	/**
	 * Query method matching the should-decline contract for external consumers.
	 */
	public boolean shouldDecline(String serverAddress) {
		return shouldBypass(serverAddress);
	}
}