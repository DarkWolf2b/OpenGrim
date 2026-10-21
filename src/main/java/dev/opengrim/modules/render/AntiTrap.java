package dev.opengrim.modules.render;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.CollisionShapeEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.block.AbstractBannerBlock;
import net.minecraft.block.AbstractSignBlock;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.block.ButtonBlock;
import net.minecraft.block.DecoratedPotBlock;
import net.minecraft.block.LeverBlock;
import net.minecraft.block.entity.BannerBlockEntity;
import net.minecraft.block.entity.BlockEntity;
import net.minecraft.block.entity.SignBlockEntity;
import net.minecraft.client.MinecraftClient;
import net.minecraft.entity.Entity;
import net.minecraft.entity.FallingBlockEntity;
import net.minecraft.entity.decoration.AbstractDecorationEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;
import net.minecraft.entity.vehicle.AbstractMinecartEntity;

/**
 * Anti Trap (registry sixtwo.dG): "Cancels rendering of specific entities".
 *
 * <p>parity: full for the Java-visible surface. 1:1 reconstruction of
 * sixtwo.dG. Spec: analysis/specs/casesafe/handlers/dG_.md (evidence: dG.java:93-197
 * constructor module id 61 with group "Hide" plus 9 checkboxes, dG.java:87-91
 * als block-entity cancel, dG.java:277-282 alt entity cancel, dG.java:300-311
 * alr outline cancel, dG.java:313-323 alu collision cancel with empty shape,
 * dG.java:674-682 alq second entity cancel, dG.java:346-500 alv entity
 * predicate, dG.java:508-672 alx block predicate, dG.java:684-754 alw
 * block-entity predicate, dG.java:284-298 aaj enable, dG.java:756-760 YO
 * disable).
 *
 * <p>The module is a pure render-event filter with no timers or packets. The
 * collision-shape branch (alu) is wired to {@link CollisionShapeEvent} (the
 * original cancels and rewrites the shape to {@code VoxelShapes.empty()};
 * the repo event replaces the state, so air — whose collision shape is empty —
 * is substituted, the same convention as Hand No Clip). The three remaining
 * branches have no counterpart in the allowed event list, so their predicates
 * are exposed for later renderer wiring:
 * <ul>
 *   <li>als (block-entity render cancel, dG.java:87-91) → {@link #matchesBlockEntity};</li>
 *   <li>alt/alq (entity render cancels, dG.java:277-282, 674-678) → {@link #matchesEntity};</li>
 *   <li>alr (block-outline cancel, dG.java:300-311) → {@link #matchesBlock}.</li>
 * </ul>
 *
 * <p>The {@code ja.byJ()} cache refresh (dG.java:284-287, 756-759 enable/
 * disable; dG.java:193 {@code gMmLp.Vd(ja::byJ)} group-change listener) is
 * mapped to {@code worldRenderer.reload()} through the {@link ReloadBoolSetting}
 * toggles — the repo's established reading of {@code ja.byJ} (XRay
 * ReloadBoolSetting, dk.java:85 precedent).
 */
public class AntiTrap extends Module {
	private final GroupSetting hide = register(new GroupSetting("hide"));
	private final BoolSetting paintings = new ReloadBoolSetting("paintings", true);
	private final BoolSetting signs = new ReloadBoolSetting("signs", true);
	private final BoolSetting buttons = new ReloadBoolSetting("buttons", false);
	private final BoolSetting levers = new ReloadBoolSetting("levers", false);
	private final BoolSetting banners = new ReloadBoolSetting("banners", true);
	private final BoolSetting armorStands = new ReloadBoolSetting("armor_stands", true);
	private final BoolSetting minecarts = new ReloadBoolSetting("minecarts", true);
	private final BoolSetting fallingBlocks = new ReloadBoolSetting("falling_blocks", true);
	private final BoolSetting decorationPots = new ReloadBoolSetting("decoration_pots", false);

	/**
	 * dG.java:193 {@code this.gMmLp.Vd(ja::byJ)} — any checkbox change in the
	 * Hide group triggers the chunk/block-entity cache refresh; mapped to the
	 * repo's established {@code ja.byJ} reading (XRay ReloadBoolSetting,
	 * dk.java:85 precedent).
	 */
	private final class ReloadBoolSetting extends BoolSetting {
		ReloadBoolSetting(String id, boolean defaultValue) {
			super(id, defaultValue);
		}

		@Override
		protected void onChange() {
			reloadChunks();
		}
	}

	public AntiTrap() {
		super("anti_trap", "Anti Trap", "Cancels rendering of specific entities", ModuleCategory.PLAYER);
		hide.add(paintings);
		hide.add(signs);
		hide.add(buttons);
		hide.add(levers);
		hide.add(banners);
		hide.add(armorStands);
		hide.add(minecarts);
		hide.add(fallingBlocks);
		hide.add(decorationPots);
	}

	/** dG.java:284-287 aaj → {@code ja.byJ()}. */
	@Override
	protected void onEnable() {
		reloadChunks();
	}

	/** dG.java:756-759 YO → {@code ja.byJ()}. */
	@Override
	protected void onDisable() {
		reloadChunks();
	}

	/** ja.byJ() — chunk/block-entity cache refresh (XRay precedent). */
	private void reloadChunks() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.worldRenderer != null) {
			client.worldRenderer.reload();
		}
	}

	/**
	 * Collision-shape branch (dG.java alu, dG.java:313-323): when the queried
	 * block matches {@link #matchesBlock}, the original cancels and rewrites
	 * the shape to empty. The allowed event carries a replacement state, so
	 * air (empty collision) is substituted.
	 */
	@Subscribe
	private void onCollisionShape(CollisionShapeEvent event) {
		if (!isEnabled()) {
			return;
		}
		if (matchesBlock(event.state())) {
			event.setReplacement(Blocks.AIR.getDefaultState());
		}
	}

	/**
	 * Entity predicate alv (dG.java:346-500): Paintings gate
	 * AbstractDecorationEntity, then Armor Stands, Minecarts, Falling Blocks;
	 * anything else is false.
	 */
	public boolean matchesEntity(Entity entity) {
		if (entity instanceof AbstractDecorationEntity) {
			return paintings.getValue();
		}
		if (entity instanceof ArmorStandEntity) {
			return armorStands.getValue();
		}
		if (entity instanceof AbstractMinecartEntity) {
			return minecarts.getValue();
		}
		if (entity instanceof FallingBlockEntity) {
			return fallingBlocks.getValue();
		}
		return false;
	}

	/**
	 * Block predicate alx (dG.java:508-672): Signs, Banners, Levers, Buttons,
	 * Decoration Pots in order; drives both the outline branch (alr) and the
	 * collision branch (alu).
	 */
	public boolean matchesBlock(BlockState state) {
		if (state.getBlock() instanceof AbstractSignBlock) {
			return signs.getValue();
		}
		if (state.getBlock() instanceof AbstractBannerBlock) {
			return banners.getValue();
		}
		if (state.getBlock() instanceof LeverBlock) {
			return levers.getValue();
		}
		if (state.getBlock() instanceof ButtonBlock) {
			return buttons.getValue();
		}
		if (state.getBlock() instanceof DecoratedPotBlock) {
			return decorationPots.getValue();
		}
		return false;
	}

	/**
	 * Block-entity predicate alw (dG.java:684-754): Signs cover
	 * SignBlockEntity, Banners cover BannerBlockEntity.
	 */
	public boolean matchesBlockEntity(BlockEntity blockEntity) {
		if (blockEntity instanceof SignBlockEntity) {
			return signs.getValue();
		}
		if (blockEntity instanceof BannerBlockEntity) {
			return banners.getValue();
		}
		return false;
	}

	public boolean isPaintings() {
		return paintings.getValue();
	}

	public boolean isSigns() {
		return signs.getValue();
	}

	public boolean isButtons() {
		return buttons.getValue();
	}

	public boolean isLevers() {
		return levers.getValue();
	}

	public boolean isBanners() {
		return banners.getValue();
	}

	public boolean isArmorStands() {
		return armorStands.getValue();
	}

	public boolean isMinecarts() {
		return minecarts.getValue();
	}

	public boolean isFallingBlocks() {
		return fallingBlocks.getValue();
	}

	public boolean isDecorationPots() {
		return decorationPots.getValue();
	}
}
