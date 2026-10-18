package dev.opengrim.mixin;

import java.util.List;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.HandTintEvent;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.VertexConsumers;
import net.minecraft.client.render.item.ItemRenderer;
import net.minecraft.client.render.item.ItemRenderState;
import net.minecraft.client.render.model.BakedQuad;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.item.ItemDisplayContext;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.Redirect;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

/**
 * Hand Chams render hook. The original (sixtwo.de) runs shader passes
 * ({@code ki.bPi} / kj facades) over the first-person hand pass; this rebuild
 * approximates the visible result with a color/alpha multiplier applied to the
 * held item's vertex consumer (see the Divergences section of PARITY.md).
 *
 * <p>1.21.11 item pipeline note: {@code ItemRenderer.renderItem} draws one
 * collected layer of an {@code ItemRenderState} and picks its consumer through
 * two factories — {@code getItemGlintConsumer} (NONE/STANDARD glint) and the
 * private {@code getSpecialItemGlintConsumer} (SPECIAL glint). Both paths are
 * tinted here. The {@code @Inject} callback repeats the target's full parameter
 * list (mixin 0.8 contract); the handler is static and ignores the unused
 * parameters.
 */
@Mixin(ItemRenderer.class)
public class ItemRendererMixin {
	/** Render-thread flag: the currently rendered item is a first-person hand item. */
	private static boolean opengrim$firstPersonItem;

	@Inject(method = "renderItem(Lnet/minecraft/item/ItemDisplayContext;Lnet/minecraft/client/util/math/MatrixStack;Lnet/minecraft/client/render/VertexConsumerProvider;II[ILjava/util/List;Lnet/minecraft/client/render/RenderLayer;Lnet/minecraft/client/render/item/ItemRenderState$Glint;)V",
			at = @At("HEAD"))
	private static void opengrim$onRenderItem(ItemDisplayContext displayContext, MatrixStack matrices,
			VertexConsumerProvider vertexConsumers, int light, int overlay, int[] tints, List<BakedQuad> quads,
			RenderLayer layer, ItemRenderState.Glint glint, CallbackInfo ci) {
		opengrim$firstPersonItem = displayContext.isFirstPerson();
	}

	@Redirect(method = "renderItem(Lnet/minecraft/item/ItemDisplayContext;Lnet/minecraft/client/util/math/MatrixStack;Lnet/minecraft/client/render/VertexConsumerProvider;II[ILjava/util/List;Lnet/minecraft/client/render/RenderLayer;Lnet/minecraft/client/render/item/ItemRenderState$Glint;)V",
			at = @At(value = "INVOKE",
					target = "Lnet/minecraft/client/render/item/ItemRenderer;getItemGlintConsumer(Lnet/minecraft/client/render/VertexConsumerProvider;Lnet/minecraft/client/render/RenderLayer;ZZ)Lnet/minecraft/client/render/VertexConsumer;"))
	private static VertexConsumer opengrim$tintHandConsumer(VertexConsumerProvider consumers, RenderLayer layer,
			boolean solid, boolean glint) {
		return opengrim$wrapHandConsumer(ItemRenderer.getItemGlintConsumer(consumers, layer, solid, glint));
	}

	/**
	 * SPECIAL-glint branch: the private {@code getSpecialItemGlintConsumer}
	 * helper (called only from {@code renderItem}) unions the glint overlay
	 * consumer with the item-layer consumer — wrapping that union applies the
	 * same tint there.
	 */
	@Redirect(method = "getSpecialItemGlintConsumer(Lnet/minecraft/client/render/VertexConsumerProvider;Lnet/minecraft/client/render/RenderLayer;Lnet/minecraft/client/util/math/MatrixStack$Entry;)Lnet/minecraft/client/render/VertexConsumer;",
			at = @At(value = "INVOKE",
					target = "Lnet/minecraft/client/render/VertexConsumers;union(Lnet/minecraft/client/render/VertexConsumer;Lnet/minecraft/client/render/VertexConsumer;)Lnet/minecraft/client/render/VertexConsumer;"))
	private static VertexConsumer opengrim$tintSpecialGlintConsumer(VertexConsumer glintOverlay,
			VertexConsumer layerConsumer) {
		return opengrim$wrapHandConsumer(VertexConsumers.union(glintOverlay, layerConsumer));
	}

	private static VertexConsumer opengrim$wrapHandConsumer(VertexConsumer delegate) {
		if (!opengrim$firstPersonItem) {
			return delegate;
		}
		HandTintEvent event = EventBus.get().post(new HandTintEvent());
		if (!event.active()) {
			return delegate;
		}
		return new TintedVertexConsumer(delegate, event.red(), event.green(), event.blue(), event.alpha());
	}

	/**
	 * Delegating vertex consumer that scales every quad's color and alpha —
	 * enough for the uniform tint approximation of the original's shader FX.
	 */
	private record TintedVertexConsumer(VertexConsumer delegate, float red, float green, float blue,
			float alpha) implements VertexConsumer {
		@Override
		public VertexConsumer vertex(float x, float y, float z) {
			return delegate.vertex(x, y, z);
		}

		@Override
		public VertexConsumer color(int r, int g, int b, int a) {
			return delegate.color((int) (r * red), (int) (g * green), (int) (b * blue), (int) (a * alpha));
		}

		@Override
		public VertexConsumer color(int argb) {
			int r = (argb >> 16) & 0xFF;
			int g = (argb >> 8) & 0xFF;
			int b = argb & 0xFF;
			int a = (argb >>> 24) & 0xFF;
			return color(r, g, b, a);
		}

		@Override
		public VertexConsumer texture(float u, float v) {
			return delegate.texture(u, v);
		}

		@Override
		public VertexConsumer overlay(int u, int v) {
			return delegate.overlay(u, v);
		}

		@Override
		public VertexConsumer light(int u, int v) {
			return delegate.light(u, v);
		}

		@Override
		public VertexConsumer normal(float x, float y, float z) {
			return delegate.normal(x, y, z);
		}

		@Override
		public VertexConsumer lineWidth(float width) {
			return delegate.lineWidth(width);
		}

		@Override
		public void quad(MatrixStack.Entry matrixEntry, net.minecraft.client.render.model.BakedQuad quad,
				float[] brightnesses, float red, float green, float blue, float alpha, int[] lights, int overlay) {
			delegate.quad(matrixEntry, quad, brightnesses, red * this.red, green * this.green, blue * this.blue,
					alpha * this.alpha, lights, overlay);
		}
	}
}
