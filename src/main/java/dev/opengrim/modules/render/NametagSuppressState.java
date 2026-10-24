package dev.opengrim.modules.render;

/**
 * Duck interface added to {@code net.minecraft.client.render.entity.state.EntityRenderState}
 * to suppress entity nametags (e.g. 2D ESP nametag gate, sixtwo.di#afA/afK).
 */
public interface NametagSuppressState {
	void opengrim$setNametagSuppressed(boolean suppressed);

	boolean opengrim$isNametagSuppressed();
}
