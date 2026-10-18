package dev.opengrim.modules.movement;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.network.packet.c2s.play.UpdateSelectedSlotC2SPacket;
import net.minecraft.util.Hand;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

/**
 * No Slow (registry sixtwo.eo, module id 39): "Allows to move faster when using items".
 *
 * <p>Sources:
 * <ul>
 * <li>analysis/decompiled/casesafe/payload-decrypted/sixtwo/eo.java (lines 10-358)</li>
 * <li>analysis/decompiled/payload-decrypted/sixtwo/eo.java (lines 10-358)</li>
 * <li>analysis/specs/handlers/eo.md</li>
 * <li>analysis/specs/modules/eo.md</li>
 * </ul>
 *
 * <p>Settings (20 constructed widgets, 12 display groups; cw defaults: no
 * .Tz() = not selected = off, .Tz() = selected):
 * <ul>
 * <li>Mode (lKIKk, ct group): Grim (EhnRt), Matrix (HGufy), Matrix 2 (cvVxe), Matrix 3 (VtAqw), NCP (gJhNS), Grim V3 (hcJrI, .SY() default = index 5)</li>
 * <li>Main Hand (DVCYL, cJ bool, .WE(true) default true)</li>
 * <li>Item Options (eWPzd, cv group): Food (iqEmI, .Tz()), Shield (DKvXJ, .Tz()), Chargeables (emXqU, .Tz()) - all selected</li>
 * <li>Block Options (SZtpC, cv group): Honey (dsCpw), Ice (yIflo), Slime (OcKIt), Soul Sand (tzUdG), Berry Bush (zwMyB) - none selected</li>
 * <li>Movement Options (AwpkE, cv group): Sneak (lJLoK), Crawl (yMbIT) - none selected</li>
 * </ul>
 *
 * <p>Behavior:
 * Compensates item-use slowdown (negates vanilla 0.2x speed penalty) when held items match enabled Item Options and Main Hand setting.
 * Compensates block-induced friction and drag (honey, ice, slime, soul sand, sweet berry bush).
 * Compensates sneak and crawl speed penalties.
 * Dispatches slot re-sync packet sequences on Grim V3 mode.
 *
 * <p>Stack divergence (documented): the original suppresses the slowdown by
 * rewriting the client input vector through the {@code ClientInputAccessor}
 * mixin ({@code setMoveVector}) in the {@code hc} slowdown event (eo.md
 * "Runtime model"); this rebuild has neither that mixin nor that event and
 * applies the compensation to the velocity in the per-tick update instead.
 * The mode algorithms (Grim/Matrix/NCP packet sequences) are j2cc-VM blocked
 * and remain approximations.
 */
public class NoSlow extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("grim", "matrix", "matrix_2", "matrix_3", "ncp", "grim_v3"), "grim_v3"));
	private final BoolSetting mainHand = register(new BoolSetting("main_hand", true));

	private final GroupSetting itemOptions = register(new GroupSetting("item_options"));
	private final BoolSetting food = register(new BoolSetting("food", true));
	private final BoolSetting shield = register(new BoolSetting("shield", true));
	private final BoolSetting chargeables = register(new BoolSetting("chargeables", true));

	private final GroupSetting blockOptions = register(new GroupSetting("block_options"));
	private final BoolSetting honey = register(new BoolSetting("honey", false));
	private final BoolSetting ice = register(new BoolSetting("ice", false));
	private final BoolSetting slime = register(new BoolSetting("slime", false));
	private final BoolSetting soulSand = register(new BoolSetting("soul_sand", false));
	private final BoolSetting berryBush = register(new BoolSetting("berry_bush", false));

	private final GroupSetting movementOptions = register(new GroupSetting("movement_options"));
	private final BoolSetting sneak = register(new BoolSetting("sneak", false));
	private final BoolSetting crawl = register(new BoolSetting("crawl", false));

	public NoSlow() {
		super("no_slow", "No Slow", "Allows to move faster when using items", ModuleCategory.MOVEMENT);
		itemOptions.add(food);
		itemOptions.add(shield);
		itemOptions.add(chargeables);
		blockOptions.add(honey);
		blockOptions.add(ice);
		blockOptions.add(slime);
		blockOptions.add(soulSand);
		blockOptions.add(berryBush);
		movementOptions.add(sneak);
		movementOptions.add(crawl);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}

		// Riding exclusion per pool token method_3144 (isRiding)
		if (player.isRiding()) {
			return;
		}

		boolean usingItem = player.isUsingItem();
		boolean itemSlowed = false;
		if (usingItem && itemCategoryEnabled(player)) {
			itemSlowed = true;
		}

		BlockPos pos = player.getBlockPos();
		BlockState feet = client.world.getBlockState(pos);
		BlockState below = client.world.getBlockState(pos.down());

		if (itemSlowed) {
			if ("grim_v3".equals(mode.getValue()) && player.networkHandler != null) {
				player.networkHandler.sendPacket(new UpdateSelectedSlotC2SPacket(player.getInventory().getSelectedSlot()));
			}
			Vec3d velocity = player.getVelocity();
			double speed = Math.hypot(velocity.x, velocity.z);
			if (speed > 0.01) {
				double factor = 5.0;
				player.setVelocity(velocity.x * factor, velocity.y, velocity.z * factor);
			}
		}

		if (honey.getValue() && (feet.isOf(Blocks.HONEY_BLOCK) || below.isOf(Blocks.HONEY_BLOCK))) {
			Vec3d v = player.getVelocity();
			player.setVelocity(v.x * 1.5, v.y, v.z * 1.5);
		}
		if (soulSand.getValue() && below.isOf(Blocks.SOUL_SAND)) {
			Vec3d v = player.getVelocity();
			player.setVelocity(v.x * 2.5, v.y, v.z * 2.5);
		}
		if (berryBush.getValue() && feet.isOf(Blocks.SWEET_BERRY_BUSH)) {
			Vec3d v = player.getVelocity();
			player.setVelocity(v.x * 2.5, v.y, v.z * 2.5);
		}
		if (slime.getValue() && below.isOf(Blocks.SLIME_BLOCK)) {
			Vec3d v = player.getVelocity();
			player.setVelocity(v.x * 1.25, v.y, v.z * 1.25);
		}
		if (ice.getValue() && isIce(below)) {
			Vec3d v = player.getVelocity();
			player.setVelocity(v.x * 1.1, v.y, v.z * 1.1);
		}

		if (sneak.getValue() && player.isSneaking()) {
			Vec3d v = player.getVelocity();
			player.setVelocity(v.x * 3.33, v.y, v.z * 3.33);
		}
		if (crawl.getValue() && player.isCrawling()) {
			Vec3d v = player.getVelocity();
			player.setVelocity(v.x * 3.33, v.y, v.z * 3.33);
		}
	}

	private boolean itemCategoryEnabled(ClientPlayerEntity player) {
		if (mainHand.getValue() && player.getActiveHand() != Hand.MAIN_HAND) {
			return false;
		}
		ItemStack active = player.getActiveItem();
		return (food.getValue() && active.contains(DataComponentTypes.FOOD))
				|| (shield.getValue() && active.isOf(Items.SHIELD))
				|| (chargeables.getValue() && (active.isOf(Items.BOW) || active.isOf(Items.CROSSBOW) || active.isOf(Items.TRIDENT)));
	}

	private static boolean isIce(BlockState state) {
		return state.isOf(Blocks.ICE) || state.isOf(Blocks.PACKED_ICE) || state.isOf(Blocks.BLUE_ICE);
	}
}