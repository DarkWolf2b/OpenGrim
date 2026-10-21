package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.entity.vehicle.TntMinecartEntity;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.combat.TargetMargin;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.util.FriendsManager;

/**
 * Entity ESP (registry sixtwo.ds): "Draws box around entities".
 *
 * <p>parity: full for settings and per-frame shape. 1:1 reconstruction of
 * sixtwo.ds. Spec: analysis/specs/handlers/ds.md (evidence: ds.java
 * constructor with "Entities" cF seeded ITEM plus TNT_MINECART, "Filled"
 * false, "Outline Color" theme, "Fill Color" theme at half value, "Friend
 * Outline Color" jk.jEkxo, "Friend Fill Color" jk.jEkxo at half value,
 * "Mode" ct SO(1) with "Model" option 0 and "Hitbox" option 1 default,
 * ds.java:315-443 aig world render with camera-negated boxes, Hitbox-mode
 * expansion via fJ.aUP, friend branch via qQ.ddy).
 *
 * <p>Each frame draws a filled plus outline box around every matching world
 * entity in {@link WorldRenderEvent} phase AFTER_ENTITIES; the last frame's
 * selection is exposed through {@link #getTargets} for later renderer wiring.
 *
 * <p>Audit 2026-10-17 fixes: "Hitbox" expansion now reads the ported fJ
 * ("Target Margin") {@code marginFor(entity)} instead of a hard-coded 0.1
 * (ds.java:396-409 {@code fJ.bag()}/{@code fJ.aUP(entity)}); added the
 * {@code jJ.bIB} frustum gate (ds.java:361); dropped the invented
 * {@code isAlive} gate (the original only skips self + non-frustum-visible).
 * Known divergence: {@code jJ.bID} falls back to the world renderer's culling
 * frustum when the captured frustum is null (jJ.java:34-57); OpenGrim has no
 * WorldRenderer accessor mixin, so a null captured frustum renders instead of
 * skipping (same convention as Trails).
 */
public class EntityEsp extends Module {
	private final BoolSetting filled = register(new BoolSetting("filled", false));
	private final ColorSetting outlineColor = register(new ColorSetting("outline_color", 0xFFFFFFFF, false));
	private final ColorSetting fillColor = register(new ColorSetting("fill_color", 0x80FFFFFF));
	private final ColorSetting friendOutlineColor = register(new ColorSetting("friend_outline_color", 0xFF55FF55, false));
	private final ColorSetting friendFillColor = register(new ColorSetting("friend_fill_color", 0x8055FF55));
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("model", "hitbox"), "hitbox"));

	private final Set<EntityType<?>> entityTypes = new HashSet<>(List.of(EntityType.ITEM, EntityType.TNT_MINECART));
	private final List<Entity> targets = new ArrayList<>();

	public EntityEsp() {
		super("entity_esp", "Entity ESP", "Draws box around entities", ModuleCategory.VISUALS);
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (client.world == null || player == null) {
			targets.clear();
			return;
		}
		targets.clear();
		// fJ module instance lookup happens once per frame (ds.java:327
		// rD.dlJ().aZx(fJ.class)); fJ = "Target Margin" in this port.
		TargetMargin targetMargin = targetMargin();
		Vec3d cameraNeg = client.gameRenderer.getCamera().getCameraPos().negate();
		boolean hitboxMode = "hitbox".equals(mode.getValue())
				&& targetMargin != null && targetMargin.isEnabled();
		Frustum frustum = client.worldRenderer.getCapturedFrustum();
		for (Entity entity : client.world.getEntities()) {
			if (entity == player) {
				continue;
			}
			// ds.java:361 jJ.bIB(entity) — captured-frustum bounding-box test.
			if (frustum != null && !frustum.isVisible(entity.getBoundingBox())) {
				continue;
			}
			if (!entityTypes.contains(entity.getType())) {
				continue;
			}
			Box box = entity.getBoundingBox();
			if (hitboxMode) {
				// ds.java:408-409 box.expand(fJ.aUP(entity)).
				box = box.expand(targetMargin.marginFor(entity));
			}
			targets.add(entity);
			Box drawn = box.offset(cameraNeg);
			boolean friend = entity instanceof PlayerEntity p
					&& FriendsManager.isFriend(p.getGameProfile().name());
			if (friend) {
				if (filled.getValue()) {
					drawFilledBox(event.context().matrices().peek(), event.context().consumers(),
							drawn, friendFillColor.getValue());
				}
				drawBoxOutline(event.context().matrices().peek(), event.context().consumers(),
						drawn, friendOutlineColor.getValue());
			} else {
				if (filled.getValue()) {
					drawFilledBox(event.context().matrices().peek(), event.context().consumers(),
							drawn, fillColor.getValue());
				}
				drawBoxOutline(event.context().matrices().peek(), event.context().consumers(),
						drawn, outlineColor.getValue());
			}
		}
	}

	@Override
	protected void onDisable() {
		targets.clear();
	}

	private static TargetMargin targetMargin() {
		Module module = ModuleManager.get().byId("target_margin");
		return module instanceof TargetMargin margin ? margin : null;
	}

	/** Targets drawn on the last frame. */
	public List<Entity> getTargets() {
		return List.copyOf(targets);
	}

	public Set<EntityType<?>> getEntityTypes() {
		return Collections.unmodifiableSet(entityTypes);
	}

	public void addEntityType(EntityType<?> type) {
		entityTypes.add(type);
	}

	public void removeEntityType(EntityType<?> type) {
		entityTypes.remove(type);
	}

	public boolean isFilled() {
		return filled.getValue();
	}

	public boolean isHitboxMode() {
		return "hitbox".equals(mode.getValue());
	}

	public String getMode() {
		return mode.getValue();
	}

	private static void drawFilledBox(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		VertexConsumer vc = consumers.getBuffer(RenderLayers.debugFilledBox());
		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, y1 = (float) box.maxY, z1 = (float) box.maxZ;
		quad(entry, vc, x0, y0, z0, x1, y0, z0, x1, y0, z1, x0, y0, z1, r, g, b, a);
		quad(entry, vc, x0, y1, z0, x1, y1, z0, x1, y1, z1, x0, y1, z1, r, g, b, a);
		quad(entry, vc, x0, y0, z0, x1, y0, z0, x1, y1, z0, x0, y1, z0, r, g, b, a);
		quad(entry, vc, x0, y0, z1, x1, y0, z1, x1, y1, z1, x0, y1, z1, r, g, b, a);
		quad(entry, vc, x0, y0, z0, x0, y0, z1, x0, y1, z1, x0, y1, z0, r, g, b, a);
		quad(entry, vc, x1, y0, z0, x1, y0, z1, x1, y1, z1, x1, y1, z0, r, g, b, a);
	}

	private static void quad(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float cx, float cy, float cz, float dx, float dy, float dz,
			float r, float g, float b, float a) {
		vc.vertex(entry, ax, ay, az).color(r, g, b, a);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a);
		vc.vertex(entry, cx, cy, cz).color(r, g, b, a);
		vc.vertex(entry, dx, dy, dz).color(r, g, b, a);
	}

	private static void drawBoxOutline(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		VertexConsumer vc = consumers.getBuffer(RenderLayers.lines());
		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, y1 = (float) box.maxY, z1 = (float) box.maxZ;
		line(entry, vc, x0, y0, z0, x1, y0, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z0, x1, y0, z1, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z1, x0, y0, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z1, x0, y0, z0, r, g, b, a, 1.0f);
		line(entry, vc, x0, y1, z0, x1, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y1, z0, x1, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x1, y1, z1, x0, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y1, z1, x0, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z0, x0, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z0, x1, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z1, x1, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z1, x0, y1, z1, r, g, b, a, 1.0f);
	}

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float r, float g, float b, float a, float width) {
		float dx = bx - ax, dy = by - ay, dz = bz - az;
		vc.vertex(entry, ax, ay, az).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
	}
}
