package dev.opengrim.modules.world;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.registry.tag.ItemTags;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.EntityHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;

/**
 * No Entity Clip (registry sixtwo.dL): "Ignores entity hitboxes".
 *
 * <p>Port of sixtwo.dL.
 * Source: analysis/decompiled/payload-decrypted/sixtwo/dL.java:19-58,
 * analysis/decompiled/payload-named-cfr/sixtwo/dL.java:19-58.
 * Spec: analysis/specs/handlers/dL.md (verified as sixtwo.dL — not dl
 * Outlines).
 *
 * <p>Settings:
 * <ul>
 *   <li>Only With Pickaxe (lXvtl, dL.java:40) default true</li>
 * </ul>
 * Handler: anq(hh) entity-clip query listener (dL.java:51); anr(MatchException)
 * identity rethrow (dL.java:57). Pool slice POOL[0xa95b,0x1dd] pins the pickaxe
 * gate via ItemStack.isIn(ItemTags.PICKAXES), RaycastContext ShapeType.OUTLINE,
 * World.raycast to BlockHitResult, MinecraftClient.getCameraEntity, and
 * PlayerEntity.getBlockInteractionRange.
 *
 * <p>Parity notes: the original is purely reactive to the cancelable `hh`
 * entity-clip query event fired by the native interaction patch (the meaning
 * of `hh.bcA()` and the exact cancel decision are unrecovered, handlers/dL.md
 * "Unrecovered" #1-#4); there is no `hh`-shaped event in our
 * event bus, so this tick-based "attack through entities" loop is the
 * designer-discretion stand-in. The pickaxe gate, the OUTLINE raycast from the
 * camera and the getBlockInteractionRange reach are the decompile-visible
 * elements mirrored below.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): the module was never
 * enabled in the capture (load only), so {@code anq(hh)} did not run. Capture
 * condition: the native {@code hh} query is issued from the attack/interaction
 * raycast — hold a pickaxe, aim at a block with an entity in front and
 * left-click (mine) with the module enabled.
 */
public class NoEntityClip extends Module {
	private final BoolSetting onlyWithPickaxe = register(new BoolSetting("only_with_pickaxe", true));

	private BlockPos breakingPos;
	private Direction breakingSide;
	private BlockState breakingState;

	public NoEntityClip() {
		super("no_entity_clip", "No Entity Clip", "Ignores entity hitboxes", ModuleCategory.WORLD);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null
				|| client.currentScreen != null) {
			reset();
			return;
		}
		if (onlyWithPickaxe.getValue() && !player.getMainHandStack().isIn(ItemTags.PICKAXES)) {
			reset();
			return;
		}
		if (!client.options.attackKey.isPressed()) {
			reset();
			return;
		}
		if (!(client.crosshairTarget instanceof EntityHitResult)) {
			return;
		}
		double reach = player.getBlockInteractionRange();
		Vec3d camera = client.getCameraEntity() != null
				? client.getCameraEntity().getCameraPosVec(1.0f)
				: player.getEyePos();
		Vec3d end = camera.add(player.getRotationVector().multiply(reach));
		HitResult hit = player.getEntityWorld().raycast(new RaycastContext(camera, end,
				RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.NONE, player));
		if (!(hit instanceof BlockHitResult blockHit)) {
			reset();
			return;
		}
		BlockPos pos = blockHit.getBlockPos();
		BlockState state = player.getEntityWorld().getBlockState(pos);
		if (state.isAir()) {
			reset();
			return;
		}
		RotationManager.get().submitPosition(Vec3d.ofCenter(pos), RotationPriority.uWTdl, this);
		if (breakingPos == null || !breakingPos.equals(pos)) {
			breakingPos = pos.toImmutable();
			breakingSide = blockHit.getSide();
			breakingState = state;
			client.interactionManager.attackBlock(pos, blockHit.getSide());
			return;
		}
		if (!state.equals(breakingState)) {
			reset();
			return;
		}
		client.interactionManager.updateBlockBreakingProgress(pos, breakingSide);
		if (player.getEntityWorld().getBlockState(pos).isAir()) {
			reset();
		}
	}

	@Override
	protected void onDisable() {
		reset();
	}

	private void reset() {
		breakingPos = null;
		breakingSide = null;
		breakingState = null;
	}
}
