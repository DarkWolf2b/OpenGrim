package dev.opengrim.modules.render;

import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.Set;

import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.fluid.FluidState;
import net.minecraft.fluid.Fluids;
import net.minecraft.item.Item;
import net.minecraft.item.Items;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;

/**
 * XRay (registry sixtwo.dk): "Allows to see ores through walls".
 * Original decompile: analysis/decompiled/payload-decrypted/sixtwo/dk.java (lines 59-86 constructor, 170-175 aaj onEnable, 176-179 agA block filter, 181-185 YO onDisable, 188-191 agz fog event, 194-204 agv block filter stage 1, 207-209 agy bare cancel, 216-226 agw block filter stage 2, 232-339 agx fluid filter).
 * Spec: analysis/specs/handlers/dk.md.
 *
 * <p>Enables ore visibility by disabling chunk culling and filtering out non-whitelisted blocks
 * and fluids during world rendering. On toggle or setting update, chunk reloading is requested.
 * Registry key=96 is the module id; bind=-999 (unbound) — the Module default is kept.
 * Trace 2026-10-17: aaj 2x, YO 2x (enable/disable only; no render-filter handler events).
 *
 * <p>Remaining gaps (documented, not implemented): the five render-cancel handlers
 * ({@code agz(ha)} fog pin 1.0, {@code agv(gs)}/{@code agw(gr)} block filters,
 * {@code agy(gT)} bare cancel, {@code agx(gn)} fluid filter) are injected by the
 * native agent layer, which is not part of the decompiled corpus — OpenGrim's
 * mixin set has no counterpart, so only the whitelist predicates
 * ({@link #isBlockVisible}, {@link #isFluidVisible}) and the culling/chunk-reload
 * lifecycle are ported. The {@code .aZS(false)} descriptor flag (dk.java:61) is
 * native and unmodelled.
 */
public class XRay extends Module {
	/**
	 * "Water"/"Lava" carry the original's change callback
	 * ({@code bwI().forEach(cB -> cB.Vd(ja::byJ))}, dk.java:85) so any toggle
	 * change re-renders chunks immediately.
	 */
	private final BoolSetting water = register(new ReloadBoolSetting("water", false));
	private final BoolSetting lava = register(new ReloadBoolSetting("lava", false));

	private static final Set<Item> DEFAULT_ORES = Set.of(
			Items.ANCIENT_DEBRIS, Items.DIAMOND_ORE, Items.GOLD_ORE, Items.IRON_ORE, Items.EMERALD_ORE,
			Items.REDSTONE_ORE, Items.LAPIS_ORE, Items.COAL_ORE, Items.NETHER_QUARTZ_ORE,
			Items.DEEPSLATE_DIAMOND_ORE, Items.DEEPSLATE_GOLD_ORE, Items.DEEPSLATE_IRON_ORE,
			Items.DEEPSLATE_EMERALD_ORE, Items.DEEPSLATE_REDSTONE_ORE, Items.DEEPSLATE_LAPIS_ORE,
			Items.NETHER_GOLD_ORE, Items.COPPER_ORE, Items.DEEPSLATE_COPPER_ORE, Items.BEDROCK
	);

	private final Set<Item> ores = new LinkedHashSet<>(DEFAULT_ORES);

	public XRay() {
		super("xray", "XRay", "Allows to see ores through walls", ModuleCategory.RENDER);
		// registry metadata.txt:147 sixtwo.dk key=96 (= module id) bind=-999.
	}

	private final class ReloadBoolSetting extends BoolSetting {
		ReloadBoolSetting(String id, boolean defaultValue) {
			super(id, defaultValue);
		}

		@Override
		protected void onChange() {
			reloadChunks();
		}
	}

	@Override
	protected void onEnable() {
		MinecraftClient client = MinecraftClient.getInstance();
		client.chunkCullingEnabled = false;
		reloadChunks();
	}

	@Override
	protected void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		client.chunkCullingEnabled = true;
		reloadChunks();
	}

	public void reloadChunks() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.worldRenderer != null) {
			client.worldRenderer.reload();
		}
	}

	public boolean isBlockVisible(BlockState blockState) {
		if (blockState == null) {
			return false;
		}
		return ores.contains(blockState.getBlock().asItem());
	}

	public boolean isFluidVisible(FluidState fluidState) {
		if (fluidState == null) {
			return false;
		}
		if (fluidState.isOf(Fluids.WATER) || fluidState.isOf(Fluids.FLOWING_WATER)) {
			return water.getValue();
		}
		if (fluidState.isOf(Fluids.LAVA) || fluidState.isOf(Fluids.FLOWING_LAVA)) {
			return lava.getValue();
		}
		return false;
	}

	public Set<Item> getOres() {
		return Collections.unmodifiableSet(ores);
	}

	public void addOre(Item item) {
		if (ores.add(item)) {
			reloadChunks();
		}
	}

	public void removeOre(Item item) {
		if (ores.remove(item)) {
			reloadChunks();
		}
	}

	public boolean isWater() {
		return water.getValue();
	}

	public boolean isLava() {
		return lava.getValue();
	}
}