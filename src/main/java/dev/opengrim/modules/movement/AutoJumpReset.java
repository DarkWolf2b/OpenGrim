package dev.opengrim.modules.movement;

import java.util.concurrent.ThreadLocalRandom;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket;
import net.minecraft.util.PlayerInput;

/**
 * Auto Jump Reset (registry sixtwo.fz, module id 23): "Reduces knockback by jumping when getting hurt".
 *
 * <p>Port of sixtwo.fz (payload-decrypted/sixtwo/fz.java). Category constant
 * {@code gh.xwjCw} = Combat (fz.java:28, mapping per analysis/port/reports/batch6.md).
 * Spec: analysis/specs/handlers/fz.md. Constructor fz.java:26-73: Chance
 * {@code cC Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(&lt;enc&gt;)} (fz.java:36, suffix
 * DES-encrypted, undecrypted — "%" is an assumption), Cancel In Fire {@code .WE(false)}
 * (fz.java:52), Only From Players {@code .WE(true)} (fz.java:71), gate {@code new mW()}
 * (fz.java:72). Listener order per handlers/fz.md: Only From Players via
 * {@code Attackable.getLastAttacker} ({@code method_49107}, fz pool run), then Cancel In
 * Fire via {@code Entity.isOnFire} ({@code method_5809}), then the one-shot {@code mW}
 * Chance gate ({@code mW.crx}: roll once per window, latch until {@code crA()};
 * mW_.java:33-58, mU.cpN percent roll mU.java:133-189). The pool token order
 * (EiuwG/isOnFire → ZGNVq → QrNyB/getLastAttacker) may imply a different guard
 * order — all guards are pure early-returns, so only the roll position relative
 * to them is affected; unresolved (fz.md "Blockers").
 *
 * <p>On an S2C velocity packet for the local player the module applies the
 * Only From Players and Cancel In Fire gates, rolls Chance through the one-shot
 * latch, and jumps to cut knockback. The original re-arms the latch through the
 * {@code aRU(hc)} hurt-trigger; that event is not on our bus, so the latch is
 * re-armed per tick here (one roll per packet — same effective behavior for one
 * velocity packet per hit). [U] the jump mechanism (which control is spoofed) is
 * VM-resident; no KeyBinding/jumpKey token exists in fz's window.
 *
 * <p>trace 2026-10-17: aRT ran 13× and aRU 3×, YO 1× on disable. aRT is
 * invoked for **every** S2C packet — in its window it fired 13× paired 1:1
 * with the global packet hook {@code fT.aXs} (13/13, ~16ms dispatch delay
 * under trace load), so the packet-type test lives inside the VM body; the
 * {@code EntityVelocityUpdateS2CPacket} filter below remains the recorded
 * high-probability guess (fz.md "Blockers"). Every aRT/aRU invocation
 * synchronously called the shared VM tripwire {@code fg.aIW()} (Target Lock's
 * static int[]; returned null — the same probe is used by fp/fC/fr/fo VM
 * bodies, so it is obfuscation plumbing, not target data). Hurt events trail
 * velocity packets by ~one stalled server tick (e.g. aRT 173134030855 → aRU
 * 173134252022), supporting the packet-then-reset reading; no numeric or
 * string constants surfaced. Capture condition for the latch reset: take
 * player-sourced knockback with the module enabled and compare roll counts
 * across hurt + velocity-packet pairs.
 */
public class AutoJumpReset extends Module {
	private final DoubleSetting chance = register(new DoubleSetting("chance", 1.0, 1.0, 100.0, 100.0, " %"));
	private final BoolSetting cancelInFire = register(new BoolSetting("cancel_in_fire", false));
	private final BoolSetting onlyFromPlayers = register(new BoolSetting("only_from_players", true));

	private boolean gateFired;
	private boolean gateResult;
	private boolean jumpArmed;

	public AutoJumpReset() {
		super("auto_jump_reset", "Auto Jump Reset", "Reduces knockback by jumping when getting hurt",
				ModuleCategory.COMBAT);
	}

	@Override
	protected void onEnable() {
		gateFired = false;
		jumpArmed = false;
	}

	@Override
	protected void onDisable() {
		gateFired = false;
		jumpArmed = false;
	}

	@Override
	public void onTick() {
		gateFired = false;
		if (!jumpArmed) {
			return;
		}
		jumpArmed = false;
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || !player.isOnGround()) {
			return;
		}
		PlayerInput current = player.input.playerInput;
		player.input.playerInput = new PlayerInput(current.forward(), current.backward(), current.left(),
				current.right(), true, current.sneak(), current.sprint());
		player.jump();
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!(event.packet() instanceof EntityVelocityUpdateS2CPacket packet)) {
			return;
		}
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (player == null || packet.getEntityId() != player.getId()) {
			return;
		}
		if (onlyFromPlayers.getValue() && !(player.getLastAttacker() instanceof PlayerEntity)) {
			return;
		}
		if (cancelInFire.getValue() && player.isOnFire()) {
			return;
		}
		if (!gateFired) {
			gateFired = true;
			gateResult = ThreadLocalRandom.current().nextDouble(100.0) < chance.getValue();
		}
		if (gateResult) {
			jumpArmed = true;
		}
	}
}
