package mixin.accessors;

import com.mojang.blaze3d.systems.RenderSystem;
import net.minecraft.class_310;
import net.minecraft.class_4184;
import net.minecraft.class_4587;
import net.minecraft.class_757;
import net.minecraft.class_7833;
import net.minecraft.class_9779;
import org.joml.Matrix4f;
import org.joml.Matrix4fStack;
import org.spongepowered.asm.mixin.Final;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.Unique;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.At.Shift;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;
import sixtwo.df;
import sixtwo.go$sX;
import sixtwo.go$sY;
import sixtwo.jI;
import sixtwo.rD;

@Mixin(
   value = {class_757.class},
   remap = false
)
public abstract class WorldRenderEventBridgeMixin {
   @Shadow
   @Final
   private class_310 field_4015;
   @Shadow
   @Final
   private class_4184 field_18765;
   @Shadow
   private float field_4025;
   @Unique
   private class_4587 offline$worldPoseStack;
   @Unique
   private static boolean offline$reportedRenderFailure;

   public WorldRenderEventBridgeMixin() {
   }

   @Shadow
   abstract float method_3196(class_4184 var1, float var2, boolean var3);

   @Shadow
   public abstract Matrix4f method_22973(float var1);

   @Inject(
      method = {"method_22973"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$aspectRatio(float var1, CallbackInfoReturnable<Matrix4f> var2) {
      try {
         df var3 = rD.dlJ().aZx(df.class);
         if (!var3.bag()) {
            return;
         }

         float var4 = Math.max(this.field_4025 * 4.0F, ((Integer)this.field_4015.field_1690.method_71270().method_41753()).intValue() * 16.0F);
         Matrix4f var5 = new Matrix4f().setPerspective((float)(var1 * (float) (Math.PI / 180.0)), var3.aeb().VB(), 0.05F, var4);
         var2.setReturnValue(var5);
      } catch (Throwable var6) {
      }
   }

   @Inject(
      method = {"method_3188"},
      at = {@At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_761;method_22710(Lnet/minecraft/class_9922;Lnet/minecraft/class_9779;ZLnet/minecraft/class_4184;Lorg/joml/Matrix4f;Lorg/joml/Matrix4f;Lorg/joml/Matrix4f;Lcom/mojang/blaze3d/buffers/GpuBufferSlice;Lorg/joml/Vector4f;Z)V",
         shift = Shift.AFTER
      )},
      cancellable = true,
      require = 1,
      remap = false
   )
   private void offline$renderWorldPreHand(class_9779 var1, CallbackInfo var2) {
      Matrix4fStack var3 = RenderSystem.getModelViewStack();

      try {
         float var4 = var1.method_60637(true);
         this.offline$worldPoseStack = new class_4587();
         var3.pushMatrix().mul(this.offline$worldPoseStack.method_23760().method_23761());
         this.offline$worldPoseStack.method_22907(class_7833.field_40714.rotationDegrees(this.field_18765.method_19329()));
         this.offline$worldPoseStack.method_22907(class_7833.field_40716.rotationDegrees(this.field_18765.method_19330() + 180.0F));
         Matrix4f var5 = this.method_22973(this.method_3196(this.field_18765, var4, true));
         jI.bIj(RenderSystem.getModelViewMatrix(), var5, this.offline$worldPoseStack.method_23760().method_23761());
         go$sX var6 = new go$sX(this.offline$worldPoseStack, var4);
         var6.bdV();
         if (var6.bdW()) {
            var2.cancel();
         }
      } catch (Throwable var15) {
         offline$report(var15);
      } finally {
         try {
            var3.popMatrix();
         } catch (Throwable var14) {
         }
      }
   }

   @Inject(
      method = {"method_3188"},
      at = {@At("TAIL")},
      cancellable = true,
      remap = false
   )
   private void offline$renderWorldPost(class_9779 var1, CallbackInfo var2) {
      try {
         if (this.offline$worldPoseStack == null) {
            return;
         }

         go$sY var3 = new go$sY(this.offline$worldPoseStack, var1.method_60637(true));
         var3.bdV();
         if (var3.bdW()) {
            var2.cancel();
         }
      } catch (Throwable var4) {
         offline$report(var4);
      }
   }

   @Unique
   private static void offline$report(Throwable var0) {
      if (!offline$reportedRenderFailure) {
         offline$reportedRenderFailure = true;
         System.err.println("[offline-bootstrap] world render event bridge failed: " + var0);
         var0.printStackTrace();
      }
   }
}
