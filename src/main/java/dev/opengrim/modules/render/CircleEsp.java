package dev.opengrim.modules.render;

import java.lang.reflect.Field;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.OverlayTexture;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.combat.KillAura;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.StringSetting;

/**
 * Circle ESP (registry sixtwo.dw, module id 84, category {@code gh.nOCvV}):
 * "Draws circle around entities".
 *
 * <p>1:1 port of {@code analysis/decompiled/casesafe/payload-decrypted/sixtwo/dw.java}
 * (class-key 27796957615364, recovered from the runtime dump
 * {@code analysis/decrypted/full-dump.jsonl} — the {@code (IJ)I} entry for
 * call site 25621 decrypts to 100 with this key, validating it):
 * <ul>
 * <li>Constructor/settings, dw.java:96-225: {@code Entities} cF
 *     ({@code .VS(jg$tJ.OCdZM)} = {@code jg.bBT()} living universe minus
 *     ARMOR_STAND, jg.java:1400-1428; cF ctor seeds PLAYER, cF.java:20-22;
 *     {@code .VT(EntityType.ITEM)}), {@code Animated} {@code WE(true)},
 *     {@code Circle Scale} (step .1, min .5, max 5, default 1),
 *     {@code Speed} (step 1, min 10, max 40, default 20), {@code Color}
 *     (theme default; port keeps white like the neighbouring dz/ds ports),
 *     {@code Circle Texture} Default(0)/Custom(1) (no {@code SO} = default
 *     Default), {@code Texture URL} (max 2048, default ""), {@code Circle Style}
 *     Textured(0)/Solid(1) with {@code .SO(1)} (Solid factory default),
 *     {@code Only For Target} {@code WE(false)}.</li>
 * <li>{@code aiT(gH.th)} tick, dw.java:548-683 (bytecode-verified): enabled
 *     guard; Solid style advances the module-global {@code kA} phase by
 *     Speed/100 per tick (kA.java:35-38) and returns; Textured style (re)loads
 *     the texture at most once per 1000 ms — Default sets {@code ob.cBv("circle")},
 *     Custom reads {@code Texture URL} and, when {@code jd.bAm(url)} accepts and
 *     the URL changed, starts {@code oe.cCd(url)} (callback aiY sets the texture,
 *     remembers the URL and resets the throttle); otherwise it just resets the
 *     throttle. Decrypted throttle longs: both 1000.</li>
 * <li>{@code aiV()} selection, dw.java:391-467: KillAura ({@code fr})
 *     target prepended when {@code Only For Target} is on (the toggle only gates
 *     the prepend), then every world entity except self that passes
 *     {@code jJ.bIB} (camera frustum, jJ.java:59-80) and {@code cF.VX}
 *     (non-empty selected set + universe membership, cF.java:260-278).</li>
 * <li>{@code aiU(go.sX)} render, dw.java:689-789: textured flag =
 *     {@code Circle Style.SQ(0)}; when textured and no texture is loaded yet it
 *     loads {@code ob.cBv("circle")} and skips the frame; per frame scale =
 *     Circle Scale, period = Speed(int) × 100 ms (int 25621 = 100); selection
 *     list computed per frame; empty list returns.</li>
 * <li>{@code aiX} textured circle, dw.java:791-811: pos = lerped entity pos;
 *     bob = sin((now % period)/period × π) × height, applied only when
 *     {@code Animated} is on (this is the recovered consumer of DVJWE);
 *     {@code kz.bSh} billboard (kz.java:458-480): translate by pos−camera
 *     ({@code jI.bIs}, jI.java), rotate X 90°, scale×2 quad, textured.</li>
 * <li>{@code aiW} solid circle, dw.java:871-873 → {@code kz.bSi}
 *     (kz.java:344-452): phase = {@code kA.bSt(delta)} = lerp(delta, prev, cur);
 *     top = |1+sin(phase−0.45)|/2, bottom = |1+sin(phase)|/2; ring radius =
 *     entity width × scale; vertical band between the bottom plane (alpha A) and
 *     the top point (alpha 0), segments+1 pairs, TRIANGLE_STRIP.</li>
 * </ul>
 *
 * <p>Framework ports / remaining gaps (all labeled):
 * <ul>
 * <li>[G] {@code kz.bSr} constants are unrecoverable (kz class key is
 *     {@code gb.aYR}-derived and kz is absent from the runtime dump): the ring
 *     segment count is a high-probability guess ({@value #RING_SEGMENTS}) and
 *     the rim alpha is a high-probability guess ({@value #RIM_ALPHA}); the
 *     TRIANGLE_STRIP is emulated as {@code DEBUG_FILLED_BOX} quads (our
 *     consumers API has no strip layer) with identical geometry and winding.</li>
 * <li>[G] texture light values ({@code kz.bSr("a",4097/28672)}) are replaced by
 *     full-bright 0xF000F0; the textured layer (original {@code kR.Dmmsd}) is
 *     ported to {@code RenderLayers.entityTranslucent} (no cull, blended).</li>
 * <li>[G] {@code jd.bAm(String)} (native) is approximated by a non-blank
 *     http(s) test; {@code ob.cBv} assets are generated procedurally
 *     ({@link CircleTextures}).</li>
 * <li>[U] the original does not clear its draw list or phase on disable (no
 *     {@code YO} override in dw); this port matches that and also keeps the
 *     cF entity selection out of the settings tree — our framework has no
 *     entity-type-list widget (same approximation as EntityEsp/TriggerBot),
 *     selection lives in {@link #getEntityTypes()}/{@link #addEntityType}/
 *     {@link #removeEntityType}.</li>
 * <li>Trace 2026-10-17: aiT 2× (tick only; Solid default branch), no render
 *     events captured — the tick branch and constants above are the trace-backed
 *     surface.</li>
 * </ul>
 */
public class CircleEsp extends Module {
	/** [G] kz.bSr("a",18164) unrecovered — high-probability guess. */
	private static final int RING_SEGMENTS = 64;
	/** [G] kz.bSr("a",28421) unrecovered — high-probability guess (rim alpha). */
	private static final int RIM_ALPHA = 170;
	/** kz.bSh light values 4097/28672 unrecovered — full-bright instead. */
	private static final int FULL_BRIGHT = 0xF000F0;
	/** dw.java:561/609/634 — both texture throttles decrypt to 1000 ms. */
	private static final long TEXTURE_THROTTLE_MS = 1000L;

	private final BoolSetting animated = register(new BoolSetting("animated", true));
	private final DoubleSetting circleScale = register(new DoubleSetting("circle_scale", 0.1, 0.5, 5.0, 1.0, null));
	private final DoubleSetting speed = register(new DoubleSetting("speed", 1.0, 10.0, 40.0, 20.0, null));
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF, false));
	private final ModeSetting circleTexture = register(new ModeSetting("circle_texture",
			List.of("Default", "Custom"), "Default"));
	private final StringSetting textureUrl = register(new StringSetting("texture_url", ""));
	private final ModeSetting circleStyle = register(new ModeSetting("circle_style",
			List.of("Textured", "Solid"), "Solid"));
	private final BoolSetting onlyForTarget = register(new BoolSetting("only_for_target", false));

	/**
	 * cF "Entities" selection (sulLA): ctor seeds PLAYER (cF.java:20-22) and
	 * dw.java:108 adds ITEM. Universe (AcnID) = jg$tJ.OCdZM → jg.bBT().
	 */
	private final Set<EntityType<?>> entityTypes = new LinkedHashSet<>(List.of(EntityType.PLAYER, EntityType.ITEM));
	private final Set<EntityType<?>> entityUniverse = livingUniverse();

	/** pjPhF: current texture identifier (null = not loaded yet). */
	private Identifier texture;
	/** GViCt: URL the current custom texture was loaded from (default ""). */
	private String loadedUrl = "";
	/** WHKNh = mT.cpA(): stopwatch whose last-reset is 0 (never reset at ctor). */
	private long textureTimerMs;

	/** kA.oYWsU / kA.BBpyW — module-global solid-ring phase (never reset). */
	private static float phasePrev;
	private static float phase;

	public CircleEsp() {
		super("circle_esp", "Circle ESP", "Draws circle around entities", ModuleCategory.RENDER);
	}

	/**
	 * {@code aiT(gH.th)} — dw.java:548-683. Solid: advance the phase and
	 * return. Textured: throttled texture (re)load (Default → built-in
	 * "circle"; Custom → URL download when the URL is usable and changed).
	 */
	@Override
	public void onTick() {
		if (!isEnabled()) {
			return;
		}
		if (isSolid()) {
			advancePhase(speed.getValue().floatValue() / 100.0f);
			return;
		}
		if (isDefaultTexture()) {
			if (textureTimerElapsed(TEXTURE_THROTTLE_MS)) {
				texture = CircleTextures.builtin("circle");
				resetTextureTimer();
			}
			return;
		}
		if (!textureTimerElapsed(TEXTURE_THROTTLE_MS)) {
			return;
		}
		String url = textureUrl.getValue();
		if (CircleTextures.validUrl(url) && !url.equals(loadedUrl)) {
			CircleTextures.fetch(url, "circle_custom", id -> {
				texture = id;
				loadedUrl = url;
				resetTextureTimer();
			});
		} else {
			resetTextureTimer();
		}
	}

	/**
	 * {@code aiU(go.sX)} — dw.java:689-789.
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		if (!isEnabled()) {
			return;
		}
		boolean textured = isTextured();
		if (textured && texture == null) {
			texture = CircleTextures.builtin("circle");
			return;
		}
		MatrixStack stack = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		float delta = MinecraftClient.getInstance().getRenderTickCounter().getTickProgress(true);
		float scale = circleScale.getValue().floatValue();
		int period = speed.getValue().intValue() * 100;
		List<Entity> targets = selectTargets();
		if (targets.isEmpty()) {
			return;
		}
		for (Entity entity : targets) {
			if (textured) {
				renderTextured(entity, stack, consumers, delta, scale, period);
			} else {
				renderSolid(entity, stack, consumers, event.camera().getCameraPos(), delta, scale);
			}
		}
	}

	/**
	 * {@code aiV()} — dw.java:391-467. KillAura target prepended when
	 * Only For Target is on; the toggle does not restrict the list.
	 */
	private List<Entity> selectTargets() {
		MinecraftClient client = MinecraftClient.getInstance();
		List<Entity> list = new ArrayList<>();
		if (client.world == null || client.player == null) {
			return list;
		}
		if (onlyForTarget.getValue()) {
			Entity target = killAuraTarget();
			if (target != null) {
				list.add(target);
			}
		}
		Frustum frustum = client.worldRenderer.getCapturedFrustum();
		for (Entity entity : client.world.getEntities()) {
			if (entity == client.player) {
				continue;
			}
			if (frustum == null || !frustum.isVisible(entity.getBoundingBox())) {
				continue;
			}
			if (!entityTypes.contains(entity.getType()) || !entityUniverse.contains(entity.getType())) {
				continue;
			}
			list.add(entity);
		}
		return list;
	}

	/** {@code fr.aOQ()} — the KillAura cached target (fr.java:1214-1216). */
	private static Entity killAuraTarget() {
		Module module = ModuleManager.get().byId("kill_aura");
		if (module instanceof KillAura aura) {
			LivingEntity target = aura.getTarget();
			if (target != null) {
				return target;
			}
		}
		return null;
	}

	/**
	 * {@code aiX(entity, stack, delta, scale, period)} — dw.java:791-811,
	 * bytecode-verified: the half-period sine bob is applied only when
	 * {@code Animated} (DVJWE) is on.
	 */
	private void renderTextured(Entity entity, MatrixStack stack, VertexConsumerProvider consumers,
			float delta, float scale, int period) {
		MinecraftClient client = MinecraftClient.getInstance();
		Vec3d pos = entity.getLerpedPos(delta);
		double d2 = System.currentTimeMillis() % (long) period;
		double d3 = Math.sin(d2 / (double) period * Math.PI) * (double) entity.getHeight();
		if (animated.getValue()) {
			pos = pos.add(0.0, d3, 0.0);
		}
		// kz.bSh (kz.java:458-480): jI.bIs translate, X-90, scale×2 quad.
		Vec3d cam = client.gameRenderer.getCamera().getCameraPos();
		stack.push();
		try {
			stack.translate(pos.x - cam.x, pos.y - cam.y, pos.z - cam.z);
			stack.multiply(RotationAxis.POSITIVE_X.rotationDegrees(90.0f));
			MatrixStack.Entry entry = stack.peek();
			VertexConsumer vc = consumers.getBuffer(RenderLayers.entityTranslucent(texture));
			int argb = color.getValue();
			vertex(vc, entry, -scale, scale, argb, 0.0f, 1.0f);
			vertex(vc, entry, scale, scale, argb, 1.0f, 1.0f);
			vertex(vc, entry, scale, -scale, argb, 1.0f, 0.0f);
			vertex(vc, entry, -scale, -scale, argb, 0.0f, 0.0f);
		} finally {
			stack.pop();
		}
	}

	private static void vertex(VertexConsumer vc, MatrixStack.Entry entry, float x, float y, int argb,
			float u, float v) {
		vc.vertex(entry, x, y, 0.0f)
				.color(argb)
				.texture(u, v)
				.overlay(OverlayTexture.DEFAULT_UV)
				.light(FULL_BRIGHT)
				.normal(entry, 0.0f, 0.0f, 1.0f);
	}

	/**
	 * {@code aiW} → {@code kz.bSi} — dw.java:871-873, kz.java:344-452.
	 * Camera-relative vertical band; the TRIANGLE_STRIP (bottom,top pairs) is
	 * emitted as quads with the same winding.
	 */
	private void renderSolid(Entity entity, MatrixStack stack, VertexConsumerProvider consumers,
			Vec3d cam, float delta, float scale) {
		float p = MathHelper.lerp(delta, phasePrev, phase);
		double top = Math.abs(1.0 + Math.sin(p - 0.44999998807907104)) / 2.0;
		double bottom = Math.abs(1.0 + Math.sin(p)) / 2.0;
		Vec3d topWorld = entity.getLerpedPos(delta).add(0.0, top * (double) entity.getHeight(), 0.0);
		Vec3d topRel = topWorld.subtract(cam);
		double bottomY = entity.lastRenderY + (entity.getY() - entity.lastRenderY) * (double) delta
				- cam.y + bottom * (double) entity.getHeight();
		double radius = (double) entity.getWidth() * (double) scale;
		MatrixStack.Entry entry = stack.peek();
		VertexConsumer vc = consumers.getBuffer(RenderLayers.debugFilledBox());
		int rgb = color.getValue() & 0x00FFFFFF;
		int bottomColor = rgb | RIM_ALPHA << 24;
		int topColor = rgb; // alpha 0 (jk.bDv(color, 0), kz.java:370)
		for (int i = 0; i < RING_SEGMENTS; i++) {
			float a0 = (float) i * 6.2831855f / RING_SEGMENTS;
			float a1 = (float) (i + 1) * 6.2831855f / RING_SEGMENTS;
			float x0 = (float) (topRel.x + Math.cos(a0) * radius);
			float z0 = (float) (topRel.z + Math.sin(a0) * radius);
			float x1 = (float) (topRel.x + Math.cos(a1) * radius);
			float z1 = (float) (topRel.z + Math.sin(a1) * radius);
			float ty = (float) topRel.y;
			float by = (float) bottomY;
			vc.vertex(entry, x0, by, z0).color(bottomColor);
			vc.vertex(entry, x0, ty, z0).color(topColor);
			vc.vertex(entry, x1, ty, z1).color(topColor);
			vc.vertex(entry, x1, by, z1).color(bottomColor);
		}
	}

	/** kA.bSs (kA.java:24-27). */
	private static void advancePhase(float step) {
		phasePrev = phase;
		phase += step;
	}

	/** Textured style is option 0 ({@code JxSnN.SQ(0)}); Solid is the SO(1) default. */
	public boolean isTextured() {
		return "Textured".equals(circleStyle.getValue());
	}

	public boolean isSolid() {
		return "Solid".equals(circleStyle.getValue());
	}

	/** Default texture is option 0 ({@code OrinU.SQ(0)}); Custom is option 1. */
	public boolean isDefaultTexture() {
		return "Default".equals(circleTexture.getValue());
	}

	/** mT.cpC(long): now − last − ms > 0 (mT.java:60-81); last starts at 0. */
	private boolean textureTimerElapsed(long ms) {
		return System.currentTimeMillis() - textureTimerMs - ms > 0L;
	}

	/** mT.cpB(): last = now (mT.java:118-120). */
	private void resetTextureTimer() {
		textureTimerMs = System.currentTimeMillis();
	}

	public Set<EntityType<?>> getEntityTypes() {
		return entityTypes;
	}

	public void addEntityType(EntityType<?> type) {
		entityTypes.add(type);
	}

	public void removeEntityType(EntityType<?> type) {
		entityTypes.remove(type);
	}

	public Identifier getTexture() {
		return texture;
	}

	/**
	 * {@code jg.bBT()} (jg.java:1400-1428): every EntityType whose generic
	 * parameter is a LivingEntity class, minus ARMOR_STAND.
	 */
	private static Set<EntityType<?>> livingUniverse() {
		Set<EntityType<?>> set = new LinkedHashSet<>();
		for (Field field : EntityType.class.getDeclaredFields()) {
			if (field.getType() != EntityType.class) {
				continue;
			}
			field.setAccessible(true);
			try {
				Object value = field.get(null);
				Type generic = field.getGenericType();
				if (!(value instanceof EntityType) || !(generic instanceof ParameterizedType parameterized)
						|| parameterized.getActualTypeArguments().length != 1
						|| !(parameterized.getActualTypeArguments()[0] instanceof Class<?> clazz)) {
					continue;
				}
				if (!LivingEntity.class.isAssignableFrom(clazz)) {
					continue;
				}
				set.add((EntityType<?>) value);
			} catch (IllegalAccessException | RuntimeException ignored) {
				// jg.bBT swallows reflective failures (jg.java:1422-1424).
			}
		}
		set.remove(EntityType.ARMOR_STAND);
		return set;
	}
}
