package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;

/**
 * Outlines (registry sixtwo.dl): "Renders outlines around entities".
 * Module id 131, category gh.nOCvV.
 *
 * <p>Decompile citation:
 * <ul>
 *   <li>Primary constructor &amp; settings tree: {@code analysis/decompiled/payload-cfr/sixtwo/dl.java} lines 50–180.
 *       (Never read {@code payload-decrypted/sixtwo/dl.java} on Windows — the case-collision bug makes it hold
 *       dL = No Entity Clip content; see analysis/docs/CASE-COLLISION-WARNING.md.)</li>
 *   <li>World render handler {@code agJ(go.sX)}: lines 425–535. Filters visible entities against {@code Myqqn} set,
 *       skips local player, passes batch parameters to {@code ki.bPi} with {@code kn.YNOIY} active window.</li>
 *   <li>Nametag suppression handler {@code agK(gi)}: lines 537–544. Cancels nameplates while {@code kn.YNOIY} outline batch renders.</li>
 *   <li>Setting visibility callbacks: lines 185–230. Second Color shown only for Color Mode
 *       Two/Three; Animation Speed shown when Color Mode is not Zero; Brightness and Saturation
 *       shown only when Color Mode is One; Glow Quality and Glow Radius have no callbacks and are
 *       always visible.</li>
 * </ul>
 *
 * <p>Audit 2026-10-17 fix: the per-tick entity collection now mirrors agJ exactly — a captured-frustum
 * {@code jJ.bIB} gate (dl.java:457, null-frustum → render, EntityEsp/Trails convention) and a plain
 * {@code world.getEntities()} scan (the previous infinite-box {@code getOtherEntities} filter is gone).
 *
 * <p>Known gap [S]: the original's drawing lives in the {@code ki.bPi}/{@code kn.bQt} Java shell
 * (out of dl's recovered surface, analysis/specs/casesafe/handlers/dl.md §Unrecovered) — this rebuild
 * has no post-process glow consumer, so {@link #getOutlinedEntities()} / {@link #shouldCancelNameplate()} /
 * {@link #isOutliningActive} are exposed for later renderer wiring and the {@code ki.bPi} parameter
 * dispatch is not executed. Module-side code (settings, collection, predicates) is 1:1.
 *
 * <p>The original sets {@code kn.YNOIY} true only inside that unexecuted batch (dl.java:504-531,
 * see {@link #isOutliningActive}), so there is no point in this rebuild at which the flag could
 * provably be true; it stays false and Health Indicators' suppression is inert until an outline
 * batch consumer exists.
 */
public class Outlines extends Module {
	/**
	 * Shared flag matching {@code sixtwo.kn.YNOIY}. Recovered lifecycle (dl.java:504-531):
	 * {@code dl#agJ} builds a {@code Runnable} that sets it true, fills the outline batch
	 * ({@code lH.cgm(kn.bQt(entity, tickDelta, matrices))} per entity, {@code lH.cgp()} flush)
	 * and resets it false in a {@code finally}; {@code ki.bPi} runs that runnable synchronously
	 * under {@code kn.bQo} (kn.java:332-340) while the entities — and their nameplates — are
	 * drawn into the outline framebuffer. It is true exactly for that window, nowhere else
	 * (the module's tick/render collection never touches it). This rebuild has no outline
	 * framebuffer/post-process consumer, so the window does not exist here and the flag stays
	 * false; {@link #shouldCancelNameplate()} and the Health Indicators suppression check
	 * ({@code dr#aib} guard, dr.java:247) remain inert until one is wired.
	 */
	public static volatile boolean isOutliningActive = false;

	private final Set<EntityType<?>> entities = new HashSet<>(List.of(EntityType.END_CRYSTAL));
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF, true));
	private final ModeSetting colorMode = register(new ModeSetting("color_mode",
			List.of("Zero", "One", "Two", "Three"), "Zero"));
	private final ColorSetting secondColor = register(new ColorSetting("second_color", 0xFFFFFFFF, true));
	private final DoubleSetting glowQuality = register(new DoubleSetting("glow_quality", 1.0, 1.0, 4.0, 2.0, null));
	private final DoubleSetting glowRadius = register(new DoubleSetting("glow_radius", 0.1, 1.0, 16.0, 4.3, null));
	private final DoubleSetting animationSpeed = register(new DoubleSetting("animation_speed", 0.1, 0.0, 3.0, 1.5, null));
	private final DoubleSetting glowAlphaMultiplier = register(new DoubleSetting("glow_alpha_multiplier", 0.1, 0.0, 4.0, 1.0, null));
	private final DoubleSetting fillAlphaMultiplier = register(new DoubleSetting("fill_alpha_multiplier", 0.01, 0.0, 1.0, 0.3, null));
	private final DoubleSetting saturation = register(new DoubleSetting("saturation", 0.1, 0.0, 5.0, 0.7, null));
	private final DoubleSetting brightness = register(new DoubleSetting("brightness", 0.1, 0.0, 50.0, 2.0, null));

	private final List<Entity> outlined = new ArrayList<>();

	public Outlines() {
		super("outlines", "Outlines", "Renders outlines around entities", ModuleCategory.VISUALS);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (client.world == null || player == null || entities.isEmpty()) {
			outlined.clear();
			return;
		}

		// Original callbacks (dl.java:185-230): secondColor -> SQ(2)||SQ(3); animationSpeed,
		// saturation, brightness -> SQ(1) and SQ(1)||SQ(2)||SQ(3); glowQuality and glowRadius
		// have NO callbacks and are always visible.
		String mode = colorMode.getValue();
		boolean isOne = "One".equalsIgnoreCase(mode);
		secondColor.setVisible("Two".equalsIgnoreCase(mode) || "Three".equalsIgnoreCase(mode));
		animationSpeed.setVisible(!"Zero".equalsIgnoreCase(mode));
		saturation.setVisible(isOne);
		brightness.setVisible(isOne);

		outlined.clear();
		// dl.java:426-443 agJ: world.getEntities() → jJ.bIB frustum gate →
		// skip self → Myqqn.VX entity-type set membership. jJ.bID falls back
		// to the world renderer's culling frustum when the captured frustum is
		// null; OpenGrim has no WorldRenderer accessor mixin, so a null
		// captured frustum renders instead of skipping (EntityEsp/Trails
		// convention).
		Frustum frustum = client.worldRenderer.getCapturedFrustum();
		for (Entity entity : client.world.getEntities()) {
			if (frustum != null && !frustum.isVisible(entity.getBoundingBox())) {
				continue;
			}
			if (entity == player) {
				continue;
			}
			if (!entities.contains(entity.getType())) {
				continue;
			}
			outlined.add(entity);
		}
	}

	@Override
	public void onDisable() {
		outlined.clear();
		isOutliningActive = false;
	}

	/** Entities that should receive an outline. */
	public List<Entity> getOutlinedEntities() {
		return List.copyOf(outlined);
	}

	public Set<EntityType<?>> getEntityTypes() {
		return Collections.unmodifiableSet(entities);
	}

	public void addEntityType(EntityType<?> type) {
		entities.add(type);
	}

	public void removeEntityType(EntityType<?> type) {
		entities.remove(type);
	}

	public int getGlowQuality() {
		return glowQuality.getValue().intValue();
	}

	public double getGlowRadius() {
		return glowRadius.getValue().doubleValue();
	}

	public double getAnimationSpeed() {
		return animationSpeed.getValue().doubleValue();
	}

	public double getGlowAlphaMultiplier() {
		return glowAlphaMultiplier.getValue().doubleValue();
	}

	public double getFillAlphaMultiplier() {
		return fillAlphaMultiplier.getValue().doubleValue();
	}

	public double getSaturation() {
		return saturation.getValue().doubleValue();
	}

	public double getBrightness() {
		return brightness.getValue().doubleValue();
	}

	public int getColor() {
		return color.getValue();
	}

	public int getSecondColor() {
		return secondColor.getValue();
	}

	public String getColorMode() {
		return colorMode.getValue();
	}

	/** Returns true when vanilla nameplates should be suppressed during outline pass (agK). */
	public static boolean shouldCancelNameplate() {
		return isOutliningActive;
	}
}