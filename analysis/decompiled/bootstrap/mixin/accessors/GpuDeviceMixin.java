package mixin.accessors;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import java.util.Map;
import net.minecraft.class_10865;
import net.minecraft.class_10867;
import net.minecraft.class_5944;
import org.spongepowered.asm.mixin.Final;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.Redirect;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;
import sixtwo.jN;
import sixtwo.kT;
import sixtwo.lR;
import sixtwo.lT;

@Mixin(
   value = {class_10865.class},
   remap = false
)
public abstract class GpuDeviceMixin {
   @Shadow
   @Final
   private Map<RenderPipeline, class_10867> field_57860;

   public GpuDeviceMixin() {
   }

   @Inject(
      method = {"method_68381"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$getOrCompilePipeline(RenderPipeline var1, CallbackInfoReturnable<class_10867> var2) {
      try {
         jN var3 = kT.bVT(var1);
         if (var3 == null) {
            return;
         }

         lR var4 = lT.ciS();
         if (var4 == null) {
            return;
         }

         var2.setReturnValue(var4.cix(var1, var3.bJz(), this.field_57860));
      } catch (Throwable var5) {
         var5.printStackTrace();
      }
   }

   @Redirect(
      method = {"clearPipelineCache"},
      at = @At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_5944;close()V"
      ),
      remap = false
   )
   private void offline$clearWrappedProgram(class_5944 var1) {
      try {
         lR var2 = lT.ciS();
         if (var2 != null) {
            var2.ciy(var1);
            return;
         }
      } catch (Throwable var4) {
      }

      try {
         var1.close();
      } catch (Throwable var3) {
      }
   }
}
