package dev.opengrim.modules.movement;

import com.google.common.collect.Streams;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import net.minecraft.util.shape.VoxelShape;

/**
 * Parkour (registry sixtwo.eE, module id 52): "Automatically jumps at edges of blocks".
 * Category {@code gh.xgeEn} (Movement; eE.java:20).
 *
 * <p>parity: settings 2/2 verbatim, behavior approximate. decompile:
 * payload-decrypted/casesafe/sixtwo/eE_.java (declared class eE) —
 * constructor eE.java:18-55: "Only If W Pressed" cJ {@code .WE(false)},
 * "Edge Distance" cA {@code .UG(0.001).UE(0.001).UF(0.1).UI(0.001, 0.001)}
 * (step 0.001, min 0.001, max 0.1, default pair 0.001/0.001, no suffix; the
 * cA pair is the recovered range for {@code UN()} = {@code mU.cpP(left,right)}
 * — casesafe/payload-named-cfr/sixtwo/cA_.java:37, 557-559, sixtwo_77.java:
 * 125-127/215-219 — and is degenerate here, so the drawn value is exactly
 * 0.001 and the port's plain DoubleSetting is 1:1).
 * Public surface: {@code public native boolean awz()} (eE.java:70) — the
 * jump-decision query consumed by the native movement patch. The class
 * declares zero {@code @hG} handlers, so the query result is polled by the
 * engine side, not from a tick listener. Structural spec:
 * analysis/specs/casesafe/modules/eE_.md; behavior spec:
 * analysis/specs/casesafe/handlers/eE_.md (analysis/specs/handlers/eE.md holds
 * the sibling class ee "Cape" — case-twin; do not cite it for eE). Native
 * corpus: analysis/ghidra/handlers-full-annotated/sixtwo_eE.c (verified
 * {@code Lsixtwo/eE;}) — {@code awz()Z} is the only behavior handler.
 *
 * <p>high-probability guess: {@code awz()}'s body is a j2cc native — its edge
 * detection math is unrecovered. This port reproduces the registry behavior
 * ("automatically jumps at edges of blocks") with the recovered settings and
 * the recovered token pipeline (casesafe/handlers/eE_.md: "Edge Distance"
 * unboxed via {@code floatValue}, {@code Box.offset}/{@code Box.expand} edge
 * probe, {@code World.getBlockCollisions(player, box)} + Guava
 * {@code Streams.findAny} ground test): ground search past the movement
 * direction under the shifted bounding box, gated by Only If W Pressed. Jump
 * application (PlayerInput mutation + {@code jump()}) is our stack wiring guess
 * for the native query consumer — eE declares no self-call site for
 * {@code awz()} and no mixin polls it yet, so {@link #onTick()} runs the query.
 * The on-ground/sneaking/using-item gates have no exclusive token in eE's run
 * (eE_.md §Unrecovered 4) and are high-probability guesses.
 *
 * <p>trace 2026-10-17: {@code awz} did not run in its 4s window (the native
 * movement layer never polled the query — no movement across block edges in
 * the captured state; the class logged only its load event). Capture
 * condition: enable Parkour and sprint/walk on ground toward a block edge so
 * the movement patch polls {@code awz()}; log the exact offset/expand vectors
 * from the returned boolean per tick.
 */
public class Parkour extends Module {
	private final BoolSetting onlyIfWPressed = register(new BoolSetting("only_if_w_pressed", false));
	private final DoubleSetting edgeDistance = register(new DoubleSetting("edge_distance", 0.001, 0.001, 0.1, 0.001, null));

	private boolean forcedJump;

	public Parkour() {
		super("parkour", "Parkour", "Automatically jumps at edges of blocks", ModuleCategory.MOVEMENT);
	}

	/**
	 * Stateless "should the player jump now?" query, porting {@code awz()} from sixtwo.eE.
	 */
	public boolean awz() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return false;
		}
		if (!player.isOnGround() || player.isSneaking() || player.isUsingItem()) {
			return false;
		}
		if (onlyIfWPressed.getValue() && !player.input.playerInput.forward()) {
			return false;
		}
		Vec3d velocity = player.getVelocity();
		double h = Math.hypot(velocity.x, velocity.z);
		if (h < 1.0e-4) {
			return false;
		}
		double distance = edgeDistance.getValue().floatValue();
		double dx = (velocity.x / h) * (h + distance);
		double dz = (velocity.z / h) * (h + distance);
		Box shifted = player.getBoundingBox().offset(dx, -0.5, dz).expand(-distance, 0.0, -distance);
		Iterable<VoxelShape> collisions = client.world.getBlockCollisions(player, shifted);
		boolean groundPresent = Streams.stream(collisions).findAny().isPresent();
		return !groundPresent;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		boolean jump = awz();
		applyJump(player, jump);
	}

	private void applyJump(ClientPlayerEntity player, boolean jump) {
		if (jump == forcedJump) {
			return;
		}
		PlayerInput current = player.input.playerInput;
		player.input.playerInput = new PlayerInput(current.forward(), current.backward(), current.left(),
				current.right(), jump || current.jump(), current.sneak(), current.sprint());
		if (jump) {
			player.jump();
		}
		forcedJump = jump;
	}

	@Override
	protected void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (forcedJump && client.player != null) {
			applyJump(client.player, false);
		}
		forcedJump = false;
	}
}
