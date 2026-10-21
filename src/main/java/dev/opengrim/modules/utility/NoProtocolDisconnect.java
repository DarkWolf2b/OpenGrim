package dev.opengrim.modules.utility;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.network.packet.s2c.common.DisconnectS2CPacket;

/**
 * No Protocol Disconnect (registry sixtwo.fQ, module id 160): "Prevents disconnections
 * caused by invalid server packets".
 *
 * <p>Port of sixtwo.fQ (payload-named-cfr/sixtwo/fQ.java:11-28 constructor;
 * native class-init _e4e61cf1cd02b1b2e46e5f297e1a41ef; spec analysis/specs/handlers/fQ.md).
 *
 * <p>Settings: 0 settings in the original class.
 *
 * <p>Behavior: the original class declares no {@code @hG} listener and no lifecycle
 * overrides — its only native behavior surface is the VM class-init stub
 * {@code _e4e61cf1cd02b1b2e46e5f297e1a41ef()V} (fQ.java:19,24-27), so the real hook is
 * VM-resident ([N] VM-virtualized → needs runtime trace; handlers/fQ.md "Unrecovered"
 * items 2/6; the one recovered token — {@code String.endsWith} — is cited below).
 * The receive-side guard below (cancel inbound DisconnectS2CPacket at the
 * PacketReceiveEvent hook) is a design-level stand-in for the registry contract "Prevents
 * disconnections caused by invalid server packets"; fQ.md "Rebuild guidance" would prefer
 * an exception-swallowing guard on the transport decode path, which is NOT implemented
 * (would require a ClientConnection/exceptionCaught change and is not evidenced).
 *
 * <p>static re-verify 2026-10-17 (wave-1 re-attack): fQ's own pool run is
 * recoverable after all and is remarkably small — resolving the decrypted
 * native pool (jna-decrypted-v2.dll, pool base RVA 0x301ee50) at the
 * {@code sixtwo/fQ} marker gives exactly
 * {@code YXdPC | java/lang/String.endsWith | AXCPX}, bounded by fR's own
 * member run ({@code foDkU/sxltZ/...}). Both bounded entries are fQ's declared
 * statics (fQ.java:9-10), so the run is fQ's. It recovers one API token the
 * handler spec (fQ.md "Pool surface: none") did not have: the class's only
 * Minecraft-adjacent call is {@code String.endsWith} — i.e. the "invalid
 * packet" predicate is a <b>string-suffix test</b>, not a packet-class or
 * channel test. This narrows fQ.md "Unrecovered" #3/#4 (a pure
 * exception-swallowing guard is no longer the only reading) while leaving the
 * tested string and the hook point unrecovered.
 *
 * <p>trace 2026-10-17 (registry id 160): the class loaded during client boot (trace line
 * 829) and the tour toggle registered/unregistered the base listeners with no module-class
 * method entries — consistent with the payload surface above. The class-init stub is
 * native, and JVMTI MethodEntry never reports native methods, so its execution is invisible
 * to this trace by construction; capture condition for a follow-up: a native-level hook (or
 * side-effect observation at class-initialization time — the class initializes during boot,
 * before the world loads), not a JVMTI window.
 */
public class NoProtocolDisconnect extends Module {
	public NoProtocolDisconnect() {
		super("no_protocol_disconnect", "No Protocol Disconnect",
				"Prevents disconnections caused by invalid server packets", ModuleCategory.CLIENT);
	}

	/**
	 * Boot-enabled: unlike every sibling module in its batch, the original registers fQ
	 * with the {@code true} metadata flag ({@code gf.aZL((int)AXCPX, true, gh.KfAlY)},
	 * fQ.java:19; handlers/fQ.md "Runtime model"). This is the same flag Discord Activity
	 * (fO) boots with — see Module.bootEnabled / OpenGrimClient lines 18-24.
	 */
	@Override
	public boolean bootEnabled() {
		return true;
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (event.packet() instanceof DisconnectS2CPacket) {
			event.cancel();
		}
	}
}
