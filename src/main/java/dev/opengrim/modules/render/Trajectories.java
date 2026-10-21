package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.List;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.component.type.ItemEnchantmentsComponent;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.enchantment.Enchantments;
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.ArrowEntity;
import net.minecraft.item.BowItem;
import net.minecraft.item.CrossbowItem;
import net.minecraft.item.EggItem;
import net.minecraft.item.EnderPearlItem;
import net.minecraft.item.ExperienceBottleItem;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.LingeringPotionItem;
import net.minecraft.item.SnowballItem;
import net.minecraft.item.SplashPotionItem;
import net.minecraft.item.TridentItem;
import net.minecraft.registry.entry.RegistryEntry;
import net.minecraft.registry.tag.FluidTags;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;
import net.minecraft.world.World;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;

/**
 * Trajectories (registry sixtwo.cP): "Renders trajectories of items".
 * Original decompile: analysis/decompiled/payload-decrypted/sixtwo/cP.java (lines 93-156 constructor, 238-290 Yw pitch offset, 300-364 Yv item velocity multiplier, 381-391 Yu projectile classification, 393-493 Yt throwable items, 549-797 Yr world render event, 803-1027 Ys simulate and draw trajectory).
 * Helpers: sixtwo.mh (builder) / sixtwo.me#cjZ (simulator, analysis/decompiled/jar-casesafe/sixtwo/me.class) and
 * analysis/decompiled/payload-named-cfr/sixtwo/iW.java (lines 343-502 bxs box fill/outline, 516-618 bxt path strip).
 *
 * <p>Observational first-person trajectory renderer for items in the player's hands.
 * Computes projectile pull charge, velocity multipliers, drag, and gravity; traces
 * collision with entities and blocks, and renders the path line and landing marker.
 *
 * <p>Runtime-decrypted constants (cP#Yw slot 21567 and the mh#cky argument slot 14295)
 * were recovered by executing the original's own DES decoder (cP#YC) against the
 * decrypted native image: Yw = {@code 20} (potions/XP pitch offset), cky = {@code 150}
 * (simulation step cap). Verified against analysis/decrypted/full-dump.jsonl site
 * (cP, slot 17563, key 5174663421668020251 -> 87).
 */
public class Trajectories extends Module {
	private final ColorSetting lineColor = register(new ColorSetting("line_color", 0xFFFFFFFF, true));
	private final ColorSetting boxOutlineColor = register(new ColorSetting("box_outline_color", 0xFFFFFFFF, true));
	private final ColorSetting boxFillColor = register(new ColorSetting("box_fill_color", 0x80FFFFFF, true));
	private final BoolSetting filledBox = register(new BoolSetting("filled_box", true));

	/** cP.java:945 {@code cky(150)} — step cap; decoded slot 14295 = 150 (probe). */
	private static final int MAX_SIMULATION_STEPS = 150;
	/** cP.java:945 {@code ckz(-128.0)} — minimum Y (me.class: pos.y &lt;= -128). */
	private static final double MIN_Y = -128.0;
	/** cP.java:945 {@code ckA(0.99)} — air drag (mh.ckn). */
	private static final double DRAG = 0.99;
	/** cP.java:945 {@code ckB(0.8)} — water drag (mh.cko). */
	private static final double WATER_DRAG = 0.8;

	public Trajectories() {
		super("trajectories", "Trajectories", "Renders trajectories of items", ModuleCategory.VISUALS);
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		if (!isEnabled()) {
			return;
		}

		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		if (!client.options.getPerspective().isFirstPerson()) {
			return;
		}

		ItemStack mainStack = player.getMainHandStack();
		ItemStack offStack = player.getOffHandStack();
		Hand hand;
		Item item;

		if (mainStack.getItem() instanceof BowItem || mainStack.getItem() instanceof CrossbowItem || isThrowable(mainStack.getItem())) {
			hand = Hand.MAIN_HAND;
			item = mainStack.getItem();
		} else if (offStack.getItem() instanceof BowItem || offStack.getItem() instanceof CrossbowItem || isThrowable(offStack.getItem())) {
			hand = Hand.OFF_HAND;
			item = offStack.getItem();
		} else {
			return;
		}

		boolean prevBobView = client.options.getBobView().getValue();
		client.options.getBobView().setValue(false);

		// cP.java:685-733 (bytecode 307-408): off hand first, then main hand; either
		// multishot crossbow draws three lines regardless of the active hand.
		boolean multishot = (offStack.getItem() instanceof CrossbowItem && hasMultishot(offStack))
				|| (mainStack.getItem() instanceof CrossbowItem && hasMultishot(mainStack));

		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();

		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();
			float tickDelta = client.getRenderTickCounter().getTickProgress(true);

			Item activeItem = (hand == Hand.OFF_HAND) ? offStack.getItem() : mainStack.getItem();
			if (multishot) {
				renderTrajectory(entry, consumers, client, player, activeItem, player.getYaw() - 10.0f, tickDelta);
				renderTrajectory(entry, consumers, client, player, activeItem, player.getYaw(), tickDelta);
				renderTrajectory(entry, consumers, client, player, activeItem, player.getYaw() + 10.0f, tickDelta);
			} else {
				renderTrajectory(entry, consumers, client, player, activeItem, player.getYaw(), tickDelta);
			}
		} finally {
			matrices.pop();
		}
		client.options.getBobView().setValue(prevBobView);
	}

	private boolean isThrowable(Item item) {
		return item instanceof EnderPearlItem
				|| item instanceof TridentItem
				|| item instanceof ExperienceBottleItem
				|| item instanceof SnowballItem
				|| item instanceof EggItem
				|| item instanceof SplashPotionItem
				|| item instanceof LingeringPotionItem;
	}

	private static boolean hasMultishot(ItemStack stack) {
		if (stack == null || stack.isEmpty()) {
			return false;
		}
		ItemEnchantmentsComponent enchantments = stack.getEnchantments();
		for (RegistryEntry<Enchantment> entry : enchantments.getEnchantments()) {
			if (entry.matchesKey(Enchantments.MULTISHOT)) {
				return true;
			}
		}
		return false;
	}

	/**
	 * cP#Yw (cP.java:238-290): pitch offset applied to the launch direction.
	 * Splash/lingering potions and XP bottles throw with the vanilla -20 degree
	 * roll (pitch - 20); the decoded slot value is 20 (probe, see class javadoc).
	 */
	private float getPitchOffset(Item item) {
		if (item instanceof SplashPotionItem || item instanceof LingeringPotionItem || item instanceof ExperienceBottleItem) {
			return 20.0f;
		}
		return 0.0f;
	}

	private float getItemVelocityMultiplier(Item item) {
		if (item instanceof SplashPotionItem || item instanceof LingeringPotionItem) {
			return 0.4f;
		}
		if (item instanceof ExperienceBottleItem) {
			return 0.59f;
		}
		if (item instanceof TridentItem) {
			return 2.0f;
		}
		return 1.5f;
	}

	private void renderTrajectory(MatrixStack.Entry entry, VertexConsumerProvider consumers,
			MinecraftClient client, ClientPlayerEntity player, Item item, float yaw, float tickDelta) {
		double startX = MathHelper.lerp(tickDelta, player.lastX, player.getX());
		double startY = MathHelper.lerp(tickDelta, player.lastY, player.getY()) + player.getEyeHeight(player.getPose()) - 0.1000000014901161;
		double startZ = MathHelper.lerp(tickDelta, player.lastZ, player.getZ());

		float yawRad = yaw / 180.0f * 3.1415927f;
		if (item == player.getMainHandStack().getItem()) {
			startX -= MathHelper.cos(yawRad) * 0.16f;
			startZ -= MathHelper.sin(yawRad) * 0.16f;
		} else {
			startX += MathHelper.cos(yawRad) * 0.16f;
			startZ += MathHelper.sin(yawRad) * 0.16f;
		}

		float yu = (item instanceof BowItem) ? 1.0f : 0.4f;
		float pitchOffset = getPitchOffset(item);
		float pitchRad = player.getPitch() / 180.0f * 3.1415927f;
		float launchPitchRad = (player.getPitch() - pitchOffset) / 180.0f * 3.1415927f;

		Vec3d direction = new Vec3d(
				-MathHelper.sin(yawRad) * MathHelper.cos(pitchRad) * yu,
				-MathHelper.sin(launchPitchRad) * yu,
				MathHelper.cos(yawRad) * MathHelper.cos(pitchRad) * yu
		).normalize();

		float pullTime = (float) player.getItemUseTime() / 20.0f;
		float pullProgress = (pullTime * pullTime + pullTime * 2.0f) / 3.0f;
		// cP.java:855-870 (bytecode 405-451): t = 1 when t > 1.0f or t == 0.0f.
		if (pullProgress > 1.0f || pullProgress == 0.0f) {
			pullProgress = 1.0f;
		}

		float baseVelocity;
		if (item instanceof BowItem) {
			baseVelocity = pullProgress * 2.0f;
		} else if (item instanceof CrossbowItem) {
			baseVelocity = 2.2f;
		} else {
			baseVelocity = 1.0f;
		}

		float velocityMultiplier = baseVelocity * getItemVelocityMultiplier(item);
		Vec3d velocity = direction.multiply(velocityMultiplier);
		if (!player.isOnGround()) {
			velocity = velocity.add(0.0, player.getVelocity().getY(), 0.0);
		}

		double gravity = (item instanceof BowItem || (player.getMainHandStack().getItem() instanceof CrossbowItem))
				? 0.05000000074505806
				: 0.029999999329447746;

		List<Vec3d> positions = simulateTrajectory(client.world, player, new Vec3d(startX, startY, startZ), velocity, gravity);
		if (positions.isEmpty()) {
			return;
		}

		// cP.java:946-1021: first entity whose bounding box intersects a +/-0.3 box
		// around a sampled path point is boxed; the path itself is NOT truncated.
		float hitRadius = 0.3f;
		Entity hitEntity = null;

		for (int i = 1; i < positions.size() && hitEntity == null; ++i) {
			Vec3d pt = positions.get(i);
			Box checkRange = new Box(pt.x - hitRadius, pt.y - hitRadius, pt.z - hitRadius, pt.x + hitRadius, pt.y + hitRadius, pt.z + hitRadius);
			for (Entity entity : client.world.getEntities()) {
				if (entity instanceof ArrowEntity || entity.equals(player)) {
					continue;
				}
				if (entity.getBoundingBox().intersects(checkRange)) {
					hitEntity = entity;
					break;
				}
			}
		}

		if (hitEntity != null) {
			renderBox(entry, consumers, hitEntity.getBoundingBox());
		}

		// cP.java:1021 iW.bxt — full path polyline.
		VertexConsumer lineConsumer = consumers.getBuffer(RenderLayers.lines());
		int lineCol = lineColor.getValue();
		for (int i = 0; i < positions.size() - 1; ++i) {
			drawLine(entry, lineConsumer, positions.get(i), positions.get(i + 1), lineCol);
		}

		// cP.java:1023-1026 iW.bxs — landing box at the simulator's final position
		// (drawn unconditionally, also after an entity hit).
		Vec3d landing = positions.get(positions.size() - 1);
		double landingRadius = 0.3;
		Box landingBox = new Box(landing.x - landingRadius, landing.y - landingRadius, landing.z - landingRadius,
				landing.x + landingRadius, landing.y + landingRadius, landing.z + landingRadius);
		renderBox(entry, consumers, landingBox);
	}

	/**
	 * sixtwo.me#cjZ over a sixtwo.mh builder (cP.java:945: cky(150).ckz(-128.0)
	 * .ckA(0.99).ckB(0.8).ckC(gravity), defaults KfLbf=true, gifiq=false,
	 * mi.CkcQW = identity). Per step: gravity, then water drag, then move,
	 * then block raycast; the water check uses the position at the step start
	 * (me.class bytecode 325-563).
	 */
	private List<Vec3d> simulateTrajectory(World world, ClientPlayerEntity player, Vec3d startPos, Vec3d startVel, double gravity) {
		List<Vec3d> points = new ArrayList<>();
		Vec3d pos = startPos;
		Vec3d vel = startVel;
		points.add(pos);

		for (int step = 0; step < MAX_SIMULATION_STEPS; ++step) {
			Vec3d prev = pos;
			vel = vel.add(0.0, -gravity, 0.0);
			boolean inWater = world.getBlockState(BlockPos.ofFloored(pos)).getFluidState().isIn(FluidTags.WATER);
			vel = vel.multiply(inWater ? WATER_DRAG : DRAG);
			pos = pos.add(vel);

			BlockHitResult hit = world.raycast(new RaycastContext(
					prev, pos, RaycastContext.ShapeType.COLLIDER, RaycastContext.FluidHandling.NONE, player));

			if (hit.getType() == HitResult.Type.BLOCK) {
				pos = hit.getPos();
				points.add(pos);
				break;
			}

			points.add(pos);

			if (pos.y <= MIN_Y) {
				break;
			}
		}

		return points;
	}

	private void renderBox(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box) {
		if (filledBox.getValue()) {
			drawFilledBox(entry, consumers, box, boxFillColor.getValue());
		}
		drawBoxOutline(entry, consumers, box, boxOutlineColor.getValue());
	}

	private static void drawFilledBox(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box, int argb) {
		// iW.java:359-363: the fill alpha is halved before upload (con()[3] / 2.0f).
		float a = (((argb >>> 24) & 0xFF) / 255.0f) / 2.0f;
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
		line(entry, vc, x0, y0, z0, x1, y0, z0, r, g, b, a);
		line(entry, vc, x1, y0, z0, x1, y0, z1, r, g, b, a);
		line(entry, vc, x1, y0, z1, x0, y0, z1, r, g, b, a);
		line(entry, vc, x0, y0, z1, x0, y0, z0, r, g, b, a);
		line(entry, vc, x0, y1, z0, x1, y1, z0, r, g, b, a);
		line(entry, vc, x1, y1, z0, x1, y1, z1, r, g, b, a);
		line(entry, vc, x1, y1, z1, x0, y1, z1, r, g, b, a);
		line(entry, vc, x0, y1, z1, x0, y1, z0, r, g, b, a);
		line(entry, vc, x0, y0, z0, x0, y1, z0, r, g, b, a);
		line(entry, vc, x1, y0, z0, x1, y1, z0, r, g, b, a);
		line(entry, vc, x1, y0, z1, x1, y1, z1, r, g, b, a);
		line(entry, vc, x0, y0, z1, x0, y1, z1, r, g, b, a);
	}

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float x1, float y1, float z1,
			float x2, float y2, float z2, float r, float g, float b, float a) {
		float dx = x2 - x1, dy = y2 - y1, dz = z2 - z1;
		vc.vertex(entry, x1, y1, z1).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
		vc.vertex(entry, x2, y2, z2).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
	}

	private static void drawLine(MatrixStack.Entry entry, VertexConsumer vc, Vec3d from, Vec3d to, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		float dx = (float) (to.x - from.x), dy = (float) (to.y - from.y), dz = (float) (to.z - from.z);
		vc.vertex(entry, (float) from.x, (float) from.y, (float) from.z).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
		vc.vertex(entry, (float) to.x, (float) to.y, (float) to.z).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
	}
}
