package dev.opengrim.modules.world;

import java.lang.reflect.Field;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.EntityListSetting;
import dev.opengrim.settings.ItemListSetting;
import net.minecraft.block.Block;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.registry.Registries;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.EntityHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;

/**
 * Block Piercer (registry sixtwo.dP, module id 143): "Allows to place blocks
 * through entities". Category {@code gh.qBzlZ} (dP.java:26) — structured with
 * our WORLD category.
 *
 * <p>Original decompile: analysis/decompiled/casesafe/payload-decrypted/sixtwo/dP_.java
 * (declared class dP; constructor dP.java:24-53). Spec:
 * analysis/specs/casesafe/handlers/dP_.md; native corpus
 * analysis/ghidra/handlers-full-annotated/sixtwo_dP.c (verified
 * {@code Lsixtwo/dP;}).
 *
 * <p>Recovered settings (verbatim): {@code cF "Entities" .VS(jg$tJ.OCdZM)} — an
 * entity-type SET widget, and {@code cK "Allowed Blocks" .WM(jc.GjreY).
 * WN(Items.COBWEB)} — an item/block SET widget.
 *
 * <p><b>Recovered set semantics + defaults (2026-10-18 re-verify):</b>
 * {@code cF} holds a selected set ({@code sulLA}) and a universe set
 * ({@code AcnID}); its constructor seeds the selection with
 * {@code class_1299.field_6097} = {@code EntityType.PLAYER}
 * (casesafe/payload-cfr/sixtwo/cF_.java:29, 33-36), so the default selection is
 * exactly {PLAYER}. {@code cK.WM(jc.GjreY)} sets the picker selection to all
 * block items ({@code jc.GjreY} = {@code jc.bzN()} = every non-AIR
 * {@code Blocks} field's {@code asItem()}, casesafe/payload-named-cfr/sixtwo/
 * jc.java:1335-1352) and {@code WN(Items.COBWEB)} recomputes the effective set
 * {@code eAose} = ({COBWEB}) ∩ selection = {COBWEB} (cK.Xa, cK.java:121-199);
 * the behavior predicates WY/WZ/WW/WX all read {@code eAose} (cK.java:552-573) —
 * so the effective default is exactly {COBWEB}.
 *
 * <p>Implemented 1:1 with real {@link EntityListSetting} and {@link ItemListSetting}
 * instances reflecting {@code cF} and {@code cK} respectively.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): {@code YO()} ran once (the
 * disable path) with the visible body {@code ee.arS() → 0} (the payload's
 * static sentry/broadcast read — same family as gg.baA()/mT.cpK()) then
 * {@code super.YO()} — the override adds no behavior beyond the base
 * deregistration. {@code aoR(gO$tm)}/{@code aoS(gO$tn)} and {@code aoT()}
 * never triggered — capture condition: right-click with a placeable stack
 * while an entity blocks the crosshair, then place through it.
 *
 * <p>State {@code KhkCT : HitResult} (dP.java:16) is the working crosshair
 * result; handlers {@code aoR(gO$tm)}/{@code aoS(gO$tn)} (dP.java:60-64) are
 * tick-phase variants and {@code aoT() : Hand} the hand selector (dP.java:68) —
 * all j2cc natives whose raycast/rebuild math is virtualized (dP.md "Per-handler
 * semantics": reads the working HitResult, gates on
 * {@code PlayerEntity.getEntityInteractionRange()}, tests the blocking entity
 * against the Entities set via the {@code VX(Entity)Z} predicate, feature-gates
 * held stacks via {@code isItemEnabled(getEnabledFeatures())}, and stores the
 * {@code HitResult.Type.MISS} sentinel — {@code BlockHitResult.createMissed} —
 * when no block qualifies; field_1333 = MISS in the slice).
 */
public class BlockPiercer extends Module {
	private final EntityListSetting entities = register(new EntityListSetting(
			"entities", defaultUniverse(), List.of(EntityType.PLAYER)));
	private final ItemListSetting allowedBlocks = register(new ItemListSetting(
			"allowed_blocks", defaultBlockItems(), Integer.MAX_VALUE, false, Items.COBWEB));

	private HitResult workingHit;
	private boolean useHeld;

	public BlockPiercer() {
		super("block_piercer", "Block Piercer", "Allows to place blocks through entities", ModuleCategory.PLAYER);
	}

	private static List<EntityType<?>> defaultUniverse() {
		LinkedHashSet<EntityType<?>> set = new LinkedHashSet<>();
		for (EntityType<?> type : Registries.ENTITY_TYPE) {
			if (LivingEntity.class.isAssignableFrom(type.getBaseClass())) {
				set.add(type);
			}
		}
		set.remove(EntityType.ARMOR_STAND);
		return List.copyOf(set);
	}

	private static Set<Item> defaultBlockItems() {
		Set<Item> items = new LinkedHashSet<>();
		for (Field field : Blocks.class.getDeclaredFields()) {
			try {
				if (!(field.get(null) instanceof Block block) || block.asItem() == Items.AIR) {
					continue;
				}
				items.add(block.asItem());
			} catch (IllegalAccessException ignored) {
			}
		}
		return items;
	}

	@Override
	public void onDisable() {
		workingHit = null;
		useHeld = false;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null
				|| client.currentScreen != null) {
			workingHit = null;
			useHeld = false;
			return;
		}

		boolean held = client.options.useKey.isPressed();
		boolean pressed = held && !useHeld;
		useHeld = held;
		if (!pressed) {
			return;
		}

		if (!(client.crosshairTarget instanceof EntityHitResult entityHit)) {
			workingHit = null;
			return;
		}

		Entity entity = entityHit.getEntity();
		if (!shouldPierce(entity, player)) {
			workingHit = null;
			return;
		}

		double reach = player.getBlockInteractionRange();
		Vec3d start = player.getEyePos();
		Vec3d look = player.getRotationVector();
		Vec3d end = start.add(look.multiply(reach));
		HitResult blockHit = player.getEntityWorld().raycast(new RaycastContext(
				start, end, RaycastContext.ShapeType.COLLIDER,
				RaycastContext.FluidHandling.NONE, player));

		if (blockHit.getType() != HitResult.Type.BLOCK) {
			workingHit = BlockHitResult.createMissed(end,
					Direction.getFacing(look.x, look.y, look.z), BlockPos.ofFloored(end));
			return;
		}

		workingHit = blockHit;
		Hand hand = selectHand(player);
		if (hand == null) {
			return;
		}

		client.interactionManager.interactBlock(player, hand, (BlockHitResult) blockHit);
		player.swingHand(hand);
	}

	private Hand selectHand(ClientPlayerEntity player) {
		if (isAllowedStack(player.getMainHandStack())) {
			return Hand.MAIN_HAND;
		}
		if (isAllowedStack(player.getOffHandStack())) {
			return Hand.OFF_HAND;
		}
		return null;
	}

	private boolean isAllowedStack(ItemStack stack) {
		if (stack.isEmpty()) {
			return false;
		}
		return allowedBlocks.contains(stack.getItem());
	}

	private boolean shouldPierce(Entity entity, ClientPlayerEntity player) {
		if (entity == null || entity == player) {
			return false;
		}
		return entities.matches(entity.getType());
	}

	public HitResult getWorkingHit() {
		return workingHit;
	}
}
