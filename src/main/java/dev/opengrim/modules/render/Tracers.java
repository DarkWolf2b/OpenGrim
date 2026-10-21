package dev.opengrim.modules.render;

import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.util.FriendsManager;

/**
 * Tracers (registry sixtwo.du): "Draws lines to entities".
 *
 * <p>Decompile citations:
 * <ul>
 *   <li>{@code analysis/decompiled/payload-decrypted/sixtwo/du.java:60-121}
 *       (constructor, settings, module id 79)</li>
 *   <li>{@code analysis/decompiled/payload-decrypted/sixtwo/du.java:251-273}
 *       ({@code aiD} handler CFR stub)</li>
 *   <li>Disassembled bytecode of {@code aiD} from
 *       {@code analysis/jars/payload-raw/sixtwo/du.class} via javap (offsets 0-697)</li>
 *   <li>{@code analysis/specs/handlers/du.md} (spec)</li>
 * </ul>
 *
 * <p>Settings verified 1:1: "Entities" ({@code cF .VS(jg$tJ.OCdZM)} — universe
 * all LivingEntity types minus ARMOR_STAND plus the {@code .VT} seed
 * ITEM/CHEST_MINECART/TNT_MINECART, selected set default {PLAYER};
 * cF.java:34-36, dY_.md "Runtime model"), "Line Width"
 * {@code .Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0)}, "Color" theme default,
 * "Friend Color" {@code jk.jEkxo} (ported as 0xFF55FF55, the repo-wide
 * friend-color constant), "Mode" (Head/Chest/Legs/Feet), "Ignore Friends"
 * {@code .WE(true)}. Trace 2026-10-17: class load only (never enabled in the
 * tour).
 *
 * <p>Draws line tracers from the camera origin to target entities matching the
 * selection. In first person view, the origin is projected 75.0 units forward
 * along the camera view vector. For player entities, an anchor height offset is
 * applied (Head: 1.6, Chest: 1.2, Legs: 0.5, Feet: 0.0) unless the player is
 * swimming or gliding. Friend lines use {@code Friend Color} when
 * {@code Ignore Friends} is off, and are omitted when {@code Ignore Friends} is on.
 *
 * <p>Framework limitation (labeled): the original's {@code cF} entity-type
 * multi-select has no settings-API equivalent — the selection lives in
 * {@link #getEntityTypes()} / {@link #addEntityType(EntityType)} /
 * {@link #removeEntityType(EntityType)} (same approximation as AntiInvisible).
 * The panic-switch loop break ({@code dh.afl()}) has no OpenGrim counterpart.
 */
public class Tracers extends Module {
	private final DoubleSetting lineWidth = register(new DoubleSetting("line_width", 0.1, 1.0, 3.0, 1.0, null));
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF, false));
	private final ColorSetting friendColor = register(new ColorSetting("friend_color", 0xFF55FF55, false));
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("head", "chest", "legs", "feet"), "head"));
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", true));

	/** cF selected set (sulLA), default {PLAYER} (cF.java:34-36). */
	private final Set<EntityType<?>> selected = new HashSet<>(List.of(EntityType.PLAYER));
	/** cF candidate universe (AcnID): OCdZM living set + VT seed. */
	private final Set<EntityType<?>> universe = new HashSet<>();

	public Tracers() {
		super("tracers", "Tracers", "Draws lines to entities", ModuleCategory.VISUALS);
		// cF.VT(EntityType.ITEM, EntityType.CHEST_MINECART, EntityType.TNT_MINECART)
		universe.add(EntityType.ITEM);
		universe.add(EntityType.CHEST_MINECART);
		universe.add(EntityType.TNT_MINECART);
	}

	/**
	 * World render handler from du#aiD (bytecode offsets 0-697).
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null || client.getCameraEntity() == null) {
			return;
		}

		Entity cameraEntity = client.getCameraEntity();
		float tickDelta = client.getRenderTickCounter().getTickProgress(true);
		Vec3d cameraLerpedPos = cameraEntity.getLerpedPos(tickDelta);
		float eyeHeight = cameraEntity.getEyeHeight(cameraEntity.getPose());
		boolean firstPerson = client.options.getPerspective().isFirstPerson();

		// Origin geometry from du#aiD bytecode offsets 145-180
		Vec3d origin;
		if (firstPerson) {
			float pitch = (float) -Math.toRadians(cameraEntity.getPitch());
			float yaw = (float) -Math.toRadians(cameraEntity.getYaw());
			origin = new Vec3d(0.0, 0.0, 75.0).rotateX(pitch).rotateY(yaw).add(cameraLerpedPos.add(0.0, eyeHeight, 0.0));
		} else {
			origin = cameraLerpedPos.add(0.0, eyeHeight, 0.0);
		}

		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		float width = lineWidth.getValue().floatValue();

		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();

			for (Entity entity : client.world.getEntities()) {
				// du#aiD: skip the local player, then cF.VX membership.
				if (entity == client.player) {
					continue;
				}
				if (!matches(entity)) {
					continue;
				}

				boolean isPlayer = entity instanceof PlayerEntity;
				boolean isFriend = isPlayer && FriendsManager.isFriend(((PlayerEntity) entity).getGameProfile().name());

				// Ignore Friends check from du#aiD bytecode offsets 350-375
				if (isPlayer && ignoreFriends.getValue() && isFriend) {
					continue;
				}

				// Mode height offset tableswitch from du#aiD bytecode offsets 384-435
				double heightOffset = 0.0;
				if (isPlayer) {
					heightOffset = switch (mode.getValue().toLowerCase()) {
						case "head" -> 1.6;
						case "chest" -> 1.2;
						case "legs" -> 0.5;
						default -> 0.0;
					};
				}

				boolean gliding = isPlayer && ((PlayerEntity) entity).isGliding();
				Vec3d target = entity.getLerpedPos(tickDelta);
				if (!entity.isInSwimmingPose() && !gliding) {
					target = target.add(0.0, heightOffset, 0.0);
				}

				int lineColor = (isPlayer && isFriend) ? friendColor.getValue() : color.getValue();
				drawLine(entry, consumers, origin, target, lineColor, width);
			}
		} finally {
			matrices.pop();
		}
	}

	/**
	 * Port of cF.VX(entity) (cF.java:230-268): true only when the selected set
	 * is non-empty, the entity type is in the OCdZM candidate universe
	 * (LivingEntity minus armor stand, plus the VT seed) and the type is
	 * selected.
	 */
	public boolean matches(Entity entity) {
		if (entity == null || selected.isEmpty()) {
			return false;
		}
		EntityType<?> type = entity.getType();
		boolean offered = universe.contains(type)
				|| (entity instanceof LivingEntity && !(entity instanceof ArmorStandEntity));
		return offered && selected.contains(type);
	}

	/** Live selection of the "Entities" list (default PLAYER). */
	public Set<EntityType<?>> getEntityTypes() {
		return Collections.unmodifiableSet(selected);
	}

	public void addEntityType(EntityType<?> type) {
		selected.add(type);
	}

	public void removeEntityType(EntityType<?> type) {
		selected.remove(type);
	}

	public float getLineWidth() {
		return lineWidth.getValue().floatValue();
	}

	public String getMode() {
		return mode.getValue();
	}

	public boolean shouldIgnoreFriends() {
		return ignoreFriends.getValue();
	}

	public int getColor() {
		return color.getValue();
	}

	public int getFriendColor() {
		return friendColor.getValue();
	}

	private static void drawLine(MatrixStack.Entry entry, VertexConsumerProvider consumers, Vec3d from, Vec3d to, int argb, float width) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		VertexConsumer vc = consumers.getBuffer(RenderLayers.lines());
		float dx = (float) (to.x - from.x), dy = (float) (to.y - from.y), dz = (float) (to.z - from.z);
		vc.vertex(entry, (float) from.x, (float) from.y, (float) from.z).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
		vc.vertex(entry, (float) to.x, (float) to.y, (float) to.z).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
	}
}
