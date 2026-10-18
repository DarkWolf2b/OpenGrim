package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.option.Perspective;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.item.Item;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;

/**
 * Block ESP (registry sixtwo.dd): "Highlights selected blocks".
 *
 * <p>parity: full for settings and scan/render shape. 1:1 reconstruction of
 * sixtwo.dd. Spec: analysis/specs/handlers/dd.md (evidence: dd.java:69-158
 * constructor with "Blocks To Highlight" cK empty, "Range" step 1.0 min 1.0
 * max 128.0 default 100.0, "Outline Color" white, "Fill Color" white at half
 * value, "Filled" false, "Tracers" false gating "Tracers Width" step 0.1 min
 * 1.0 max 3.0 default 1.0, dd.java:319 aaj scanner reset, dd.java:365 aci
 * tick scan with Range int and asItem predicate, dd.java:377 acj world render
 * with camera-relative boxes and eye-to-center tracers).
 *
 * <p>Scan runs once per tick; render reads the cached positions. Boxes draw
 * in {@link WorldRenderEvent} phase AFTER_ENTITIES; cached positions are
 * exposed through {@link #getPositions} for later renderer wiring.
 *
 * <p>Audit 2026-10-17 fixes: scan predicate is now item-based
 * ({@code highlightedItems.contains(state.getBlock().asItem())}, dd.java:367);
 * box draws carry the per-position {@code jJ.bIA(center)} frustum gate
 * (dd.java:410, jJ.java:91-117), tracers deliberately do not; tracer origin
 * now uses the camera entity's lerped position + eye height (dd.java:446-460).
 * Known divergences: the {@code cK} "Blocks To Highlight" item-list setting
 * has no settings-API equivalent (programmatic {@link #addHighlightedItem});
 * the scan radius is capped at {@value #SCAN_CAP} blocks like TrapEsp (the
 * original delegates to the un-decompiled {@code rl} scanner with Range
 * 1..128); null captured frustum renders instead of skipping (no
 * WorldRenderer accessor mixin, same as Trails).
 */
public class BlockEsp extends Module {
	private static final int SCAN_CAP = 32;

	private final DoubleSetting range = register(new DoubleSetting("range", 1.0, 1.0, 128.0, 100.0, " blocks"));
	private final ColorSetting outlineColor = register(new ColorSetting("outline_color", 0xFFFFFFFF, false));
	private final ColorSetting fillColor = register(new ColorSetting("fill_color", 0x80FFFFFF));
	private final BoolSetting filled = register(new BoolSetting("filled", false));
	private final BoolSetting tracers = register(new BoolSetting("tracers", false));
	private final DoubleSetting tracersWidth = register(new DoubleSetting("tracers_width", 0.1, 1.0, 3.0, 1.0, null));

	private final Set<Item> highlightedItems = new HashSet<>();
	private final List<BlockPos> positions = new ArrayList<>();

	public BlockEsp() {
		super("block_esp", "Block ESP", "Highlights selected blocks", ModuleCategory.RENDER);
	}

	@Override
	protected void onEnable() {
		positions.clear();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (client.world == null || player == null || highlightedItems.isEmpty()) {
			positions.clear();
			return;
		}
		tracersWidth.setVisible(tracers.getValue());
		int radius = (int) Math.min(range.getValue(), SCAN_CAP);
		positions.clear();
		BlockPos origin = player.getBlockPos();
		for (BlockPos pos : BlockPos.iterate(origin.add(-radius, -radius, -radius), origin.add(radius, radius, radius))) {
			// dd.java:367 — predicate tests the block's item (asItem) membership.
			if (highlightedItems.contains(client.world.getBlockState(pos).getBlock().asItem())) {
				positions.add(pos.toImmutable());
			}
		}
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || positions.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.getCameraEntity() == null) {
			return;
		}
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();
			Frustum frustum = client.worldRenderer.getCapturedFrustum();
			for (BlockPos pos : positions) {
				// dd.java:410 — each box draw is gated by jJ.bIA(center); the
				// center ±0.5 frustum box (jJ.java:91-117) equals new Box(pos).
				if (frustum != null && !frustum.isVisible(new Box(pos))) {
					continue;
				}
				Box box = new Box(pos);
				if (filled.getValue()) {
					drawFilledBox(entry, consumers, box, fillColor.getValue());
				}
				drawBoxOutline(entry, consumers, box, outlineColor.getValue());
			}
			// Tracers (dd.java:441-480): NOT frustum-gated in the original.
			if (tracers.getValue()) {
				Entity cameraEntity = client.getCameraEntity();
				float tickDelta = client.getRenderTickCounter().getTickProgress(true);
				Vec3d origin = tracerOrigin(cameraEntity, tickDelta);
				float width = tracersWidth.getValue().floatValue();
				for (BlockPos pos : positions) {
					drawLine(entry, consumers, origin, pos.toCenterPos(), outlineColor.getValue(), width);
				}
			}
		} finally {
			matrices.pop();
		}
	}

	@Override
	protected void onDisable() {
		positions.clear();
	}

	/**
	 * Tracer origin (dd.java:446-452): camera entity lerped position + eye
	 * height; in first person the (0, 0, 75) offset is rotated by
	 * rotateX(-pitch) then rotateY(-yaw), in third person the bare eye is used.
	 */
	static Vec3d tracerOrigin(Entity cameraEntity, float tickDelta) {
		Vec3d eye = cameraEntity.getLerpedPos(tickDelta)
				.add(0.0, cameraEntity.getEyeHeight(cameraEntity.getPose()), 0.0);
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.options.getPerspective() != Perspective.FIRST_PERSON) {
			return eye;
		}
		float pitch = (float) -Math.toRadians(cameraEntity.getPitch());
		float yaw = (float) -Math.toRadians(cameraEntity.getYaw());
		return eye.add(new Vec3d(0.0, 0.0, 75.0).rotateX(pitch).rotateY(yaw));
	}

	/** Positions from the last tick scan. */
	public List<BlockPos> getPositions() {
		return List.copyOf(positions);
	}

	/** Render boxes for the highlighted positions. */
	public List<Box> getBoxes() {
		List<Box> boxes = new ArrayList<>();
		for (BlockPos pos : positions) {
			boxes.add(new Box(pos));
		}
		return boxes;
	}

	public Set<Item> getHighlightedItems() {
		return Collections.unmodifiableSet(highlightedItems);
	}

	public void addHighlightedItem(Item item) {
		highlightedItems.add(item);
	}

	public void removeHighlightedItem(Item item) {
		highlightedItems.remove(item);
	}

	public boolean isFilled() {
		return filled.getValue();
	}

	public boolean isTracers() {
		return tracers.getValue();
	}

	public double getTracersWidth() {
		return tracersWidth.getValue();
	}

	public int getOutlineColor() {
		return outlineColor.getValue();
	}

	public int getFillColor() {
		return fillColor.getValue();
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

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float r, float g, float b, float a, float width) {
		float dx = bx - ax, dy = by - ay, dz = bz - az;
		vc.vertex(entry, ax, ay, az).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
	}
}
