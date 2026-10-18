package dev.opengrim.mixin;

import java.util.List;
import java.util.Map;

import net.minecraft.client.model.ModelPart;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

/**
 * Port of the original's mixin accessor
 * {@code mixin.accessors.ModelPartAccessor} (bootstrap decompile
 * analysis/decompiled/bootstrap/mixin/accessors/ModelPartAccessor.java):
 * exposes {@code ModelPart.cuboids} and {@code ModelPart.children}, both
 * private in 1.21.11. Used by Soul Effects (sixtwo.cZ#abg, cZ.java:594-689)
 * to collect the rendered model's cuboids as transformed world AABBs.
 */
@Mixin(ModelPart.class)
public interface ModelPartAccessor {
	@Accessor("cuboids")
	List<ModelPart.Cuboid> opengrim$getCuboids();

	@Accessor("children")
	Map<String, ModelPart> opengrim$getChildren();
}
