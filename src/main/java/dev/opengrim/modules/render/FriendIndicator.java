package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.List;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.util.FriendsManager;

/**
 * Friend Indicator (registry sixtwo.dm): "Visually marks friends".
 *
 * <p>1:1 reconstruction of sixtwo.dm for the recovered surface. Spec:
 * analysis/specs/handlers/dm.md (evidence: dm.java constructor with "Height"
 * cC step 0.1 min 0.4 max 1.6 default 1.2, dm.java:250-320 agU world render
 * with startBatch/finally endBatch, anchor getLerpedPos(delta) plus
 * (0, height + Height, 0), jI.bIs camera-relative translate, one kE.bTf(0,0,0,
 * 0.1f) primitive colored jk.jEkxo; module id 137).
 *
 * <p>The marker primitive is the shared octahedron mesh drawn by kK.bUp
 * (kK.java:136-163, kK.java:376-417): vertices (0,±1.5,0), (±1,0,0),
 * (0,0,±1), 8 triangles with per-face brightness 1.0/0.8/0.6/0.9/0.7/0.5/
 * 0.4/0.6 and scale 0.1; vertex color = base color × brightness (kK.bUq).
 * Drawn here through {@code RenderLayers.debugFilledBox()} (POSITION_COLOR
 * QUADS; each face is padded with a duplicate vertex). The original batch used
 * additive blend (lh.aApMr: SRC_ALPHA/ONE) — layer choice is a documented
 * approximation.
 *
 * <p>Tracked means present in the name registry; this rebuild reads the
 * shared {@link FriendsManager} list. Markers draw in {@link WorldRenderEvent}
 * phase AFTER_ENTITIES; the marked set is exposed through
 * {@link #getMarkedFriends}. The original color constant jk.jEkxo is a
 * native-decrypted int (jk.java:160) and stays unrecovered — the placeholder
 * color is used.
 */
public class FriendIndicator extends Module {
	/** kK.uVxmu (kK.java:137-142): octahedron vertices. */
	private static final float[][] VERTICES = {
			{0.0f, 1.5f, 0.0f},
			{0.0f, -1.5f, 0.0f},
			{1.0f, 0.0f, 0.0f},
			{-1.0f, 0.0f, 0.0f},
			{0.0f, 0.0f, 1.0f},
			{0.0f, 0.0f, -1.0f},
	};
	/** kK.pbVHD (kK.java:145-152): the 8 faces. */
	private static final int[][] FACES = {
			{0, 2, 4}, {0, 4, 3}, {0, 3, 5}, {0, 5, 2},
			{1, 4, 2}, {1, 3, 4}, {1, 5, 3}, {1, 2, 5},
	};
	/** kK.JYPKJ (kK.java:155-162): per-face brightness. */
	private static final float[] FACE_BRIGHTNESS = {1.0f, 0.8f, 0.6f, 0.9f, 0.7f, 0.5f, 0.4f, 0.6f};
	/** kE.bTf(..., 0.1f) size constant (dm.java:293). */
	private static final float MARKER_SCALE = 0.1f;
	/** Placeholder: jk.jEkxo is native-decrypted and unrecovered. */
	private static final int MARKER_COLOR = 0xFF55FF55;

	private final DoubleSetting height = register(new DoubleSetting("height", 0.1, 0.4, 1.6, 1.2, null));

	private final List<PlayerEntity> markedFriends = new ArrayList<>();

	public FriendIndicator() {
		super("friend_indicator", "Friend Indicator", "Visually marks friends", ModuleCategory.VISUALS);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity self = client.player;
		markedFriends.clear();
		if (client.world == null || self == null) {
			return;
		}
		if (!isEnabled()) {
			return;
		}
		for (AbstractClientPlayerEntity player : client.world.getPlayers()) {
			if (player == self || !player.isAlive()) {
				continue;
			}
			if (!FriendsManager.isFriend(player.getGameProfile().name())) {
				continue;
			}
			markedFriends.add(player);
		}
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || markedFriends.isEmpty()) {
			return;
		}
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		float tickDelta = MinecraftClient.getInstance().getRenderTickCounter().getTickProgress(true);
		VertexConsumer vc = consumers.getBuffer(RenderLayers.debugFilledBox());
		for (PlayerEntity friend : markedFriends) {
			Vec3d anchor = new Vec3d(
					MathHelper.lerp(tickDelta, friend.lastX, friend.getX()),
					MathHelper.lerp(tickDelta, friend.lastY, friend.getY()),
					MathHelper.lerp(tickDelta, friend.lastZ, friend.getZ()))
					.add(0.0, friend.getHeight() + height.getValue(), 0.0);
			matrices.push();
			try {
				// jI.bIs (jI.java): camera-relative translate to the anchor.
				matrices.translate(anchor.x - cam.x, anchor.y - cam.y, anchor.z - cam.z);
				matrices.scale(MARKER_SCALE, MARKER_SCALE, MARKER_SCALE);
				MatrixStack.Entry entry = matrices.peek();
				for (int i = 0; i < FACES.length; i++) {
					float brightness = FACE_BRIGHTNESS[i];
					float red = ((MARKER_COLOR >> 16) & 0xFF) / 255.0f * brightness;
					float green = ((MARKER_COLOR >> 8) & 0xFF) / 255.0f * brightness;
					float blue = (MARKER_COLOR & 0xFF) / 255.0f * brightness;
					float alpha = ((MARKER_COLOR >>> 24) & 0xFF) / 255.0f;
					float[] a = VERTICES[FACES[i][0]];
					float[] b = VERTICES[FACES[i][1]];
					float[] c = VERTICES[FACES[i][2]];
					// debugFilledBox draws QUADS: the repeated third vertex makes
					// the second triangle degenerate.
					vc.vertex(entry, a[0], a[1], a[2]).color(red, green, blue, alpha);
					vc.vertex(entry, b[0], b[1], b[2]).color(red, green, blue, alpha);
					vc.vertex(entry, c[0], c[1], c[2]).color(red, green, blue, alpha);
					vc.vertex(entry, c[0], c[1], c[2]).color(red, green, blue, alpha);
				}
			} finally {
				matrices.pop();
			}
		}
	}

	@Override
	protected void onDisable() {
		markedFriends.clear();
	}

	/** Friends currently marked. */
	public List<PlayerEntity> getMarkedFriends() {
		return List.copyOf(markedFriends);
	}

	/** Height offset above the head (default 1.2). */
	public double getMarkerHeight() {
		return height.getValue();
	}
}
