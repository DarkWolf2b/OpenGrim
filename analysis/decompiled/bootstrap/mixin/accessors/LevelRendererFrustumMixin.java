package mixin.accessors;

import net.minecraft.class_243;
import net.minecraft.class_310;
import net.minecraft.class_4604;
import net.minecraft.class_761;
import org.joml.Matrix4f;
import org.spongepowered.asm.mixin.Final;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.Unique;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;
import sixtwo.mN;

@Mixin(
   value = {class_761.class},
   remap = false
)
public abstract class LevelRendererFrustumMixin implements mN {
   @Shadow
   @Final
   private class_310 field_4088;
   @Unique
   private class_243 offline$frustumPos;
   @Unique
   private class_4604 offline$cullingFrustum;

   public LevelRendererFrustumMixin() {
   }

   @Shadow
   public abstract class_4604 method_62222();

   @Inject(
      method = {"method_32133"},
      at = {@At("RETURN")},
      remap = false
   )
   private void offline$captureFrustum(Matrix4f var1, Matrix4f var2, class_243 var3, CallbackInfoReturnable<class_4604> var4) {
      try {
         this.offline$frustumPos = var3;
         this.offline$cullingFrustum = (class_4604)var4.getReturnValue();
      } catch (Throwable var6) {
      }
   }

   @Override
   public class_243 getFrustumPos() {
      return this.offline$frustumPos;
   }

   @Override
   public class_4604 getCullingFrustum() {
      return this.offline$cullingFrustum != null ? this.offline$cullingFrustum : this.method_62222();
   }
}
