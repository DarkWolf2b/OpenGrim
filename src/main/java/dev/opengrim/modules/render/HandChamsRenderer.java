package dev.opengrim.modules.render;

import com.mojang.blaze3d.systems.CommandEncoder;
import com.mojang.blaze3d.systems.RenderSystem;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gl.Framebuffer;
import net.minecraft.client.gl.SimpleFramebuffer;
import com.mojang.blaze3d.textures.GpuTextureView;

/**
 * First-person hand mask/composite for sixtwo.de ({@code acv}).
 *
 * <p>The original {@code acv} re-renders the hand through
 * {@code GameRendererAccessor.callRenderItemInHand} into the effect target and
 * then composites with {@code ki.bPi} (Outline) or {@code kj.bPr..bPu}
 * (Glass/Water/Chrome/Liquid Metal) - all Java shells (de.java:1318-1381).
 * {@code GameRendererMixin} brackets {@code GameRenderer.renderHand} and calls
 * {@link #begin()} / {@link #end()}; the hand draws go to a private mask target
 * via {@link RenderSystem#outputColorTextureOverride}, then the recovered
 * composite shaders draw the effect over the captured background.
 *
 * <p>Remaining native/DES gaps are only the {@code ro.diF} preset tables and
 * the {@code acw}/{@code OTglH} literal tables; the shader passes themselves are
 * the imported {@code chams_*} / {@code outlines} stages.
 */
final class HandChamsRenderer {
	private static SimpleFramebuffer mask;
	private static SimpleFramebuffer background;
	private static int width;
	private static int height;
	private static boolean rendering;
	private static GpuTextureView previousColor;
	private static GpuTextureView previousDepth;

	private HandChamsRenderer() {
	}

	static boolean isRendering() {
		return rendering;
	}

	private static HandChams module() {
		var module = dev.opengrim.module.ModuleManager.get().byId("hand_chams");
		return module instanceof HandChams chams ? chams : null;
	}

	/** True when the selected effect can be composited (used by the tint fallback). */
	static boolean available(String effect) {
		if ("outline".equals(effect)) {
			return OutlineRenderer.available();
		}
		return ChamsRenderer.available(chamsMode(effect));
	}

	/** GameRenderer.renderHand HEAD. Returns false when the hand stays untouched. */
	static boolean begin(boolean sleeping) {
		if (sleeping) {
			return false;
		}
		HandChams chams = module();
		if (chams == null || !chams.isEnabled() || !chams.isHandPassActive()
				|| !available(chams.getEffect())) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		Framebuffer main = client.getFramebuffer();
		if (main == null || main.getColorAttachment() == null || main.getDepthAttachment() == null) {
			return false;
		}
		int w = main.textureWidth;
		int h = main.textureHeight;
		if (w <= 0 || h <= 0) {
			return false;
		}
		ensure(w, h);
		CommandEncoder encoder = RenderSystem.getDevice().createCommandEncoder();
		encoder.copyTextureToTexture(main.getColorAttachment(), background.getColorAttachment(),
				0, 0, 0, 0, 0, w, h);
		encoder.clearColorAndDepthTextures(mask.getColorAttachment(), 0,
				mask.getDepthAttachment(), 1.0);
		previousColor = RenderSystem.outputColorTextureOverride;
		previousDepth = RenderSystem.outputDepthTextureOverride;
		RenderSystem.outputColorTextureOverride = mask.getColorAttachmentView();
		RenderSystem.outputDepthTextureOverride = mask.getDepthAttachmentView();
		rendering = true;
		return true;
	}

	/** GameRenderer.renderHand RETURN. */
	static void end() {
		if (!rendering) {
			return;
		}
		rendering = false;
		RenderSystem.outputColorTextureOverride = previousColor;
		RenderSystem.outputDepthTextureOverride = previousDepth;
		previousColor = null;
		previousDepth = null;
		HandChams chams = module();
		if (chams == null) {
			return;
		}
		if ("outline".equals(chams.getEffect())) {
			HandChams.OutlineParams p = chams.outlineParams();
			OutlineRenderer.composite(mask, p.color(), p.secondColor(), p.colorMode(),
					p.glowQuality(), p.glowRadius(), p.animationSpeed(), p.glowAlpha(),
					p.fillAlpha(), p.saturation(), p.brightness());
		} else {
			ChamsRenderer.composite(chamsMode(chams.getEffect()), chams.chamsSlots(), mask,
					background);
		}
	}

	private static String chamsMode(String effect) {
		return switch (effect) {
			case "water" -> "Water";
			case "chrome" -> "Chrome";
			case "liquid_metal" -> "Liquid Metal";
			default -> "Glass";
		};
	}

	private static void ensure(int w, int h) {
		if (mask == null || width != w || height != h) {
			if (mask != null) {
				mask.delete();
				background.delete();
			}
			mask = new SimpleFramebuffer("opengrim-hand-mask", w, h, true);
			background = new SimpleFramebuffer("opengrim-hand-background", w, h, false);
			width = w;
			height = h;
		}
	}

	/** Restore the overrides if renderHand unexpectedly unwinds. */
	static void abort() {
		if (rendering) {
			rendering = false;
			RenderSystem.outputColorTextureOverride = previousColor;
			RenderSystem.outputDepthTextureOverride = previousDepth;
			previousColor = null;
			previousDepth = null;
		}
	}
}
