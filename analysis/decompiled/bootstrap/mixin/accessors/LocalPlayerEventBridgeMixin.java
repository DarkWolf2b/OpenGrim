package mixin.accessors;

import net.minecraft.class_746;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.Redirect;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.eC;
import sixtwo.ov;
import sixtwo.rD;

@Mixin(
   value = {class_746.class},
   remap = false
)
public abstract class LocalPlayerEventBridgeMixin {
   public LocalPlayerEventBridgeMixin() {
   }

   @Redirect(
      method = {"method_6007"},
      at = @At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_746;method_5728(Z)V"
      ),
      remap = false
   )
   private void offline$sprintState(class_746 var1, boolean var2) {
      try {
         eC var3 = rD.dlJ().aZx(eC.class);
         boolean var4 = var2 && (var3.bag() && var3.awg() || !var3.bag() && rD.dlX().dbT());
         var1.method_5728(var4 ? false : var2);
      } catch (Throwable var5) {
         var1.method_5728(var2);
      }
   }

   @Redirect(
      method = {"method_65949"},
      at = @At(
         value = "FIELD",
         target = "Lnet/minecraft/class_746;field_5976:Z"
      ),
      remap = false
   )
   private boolean offline$sprintCollision(class_746 var1) {
      try {
         eC var2 = rD.dlJ().aZx(eC.class);
         if (var2.bag() && var2.awf()) {
            return false;
         }
      } catch (Throwable var3) {
      }

      return var1.field_5976;
   }

   @Redirect(
      method = {"method_74047"},
      at = @At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_746;method_76458()Z"
      ),
      remap = false
   )
   private boolean offline$sprintHunger(class_746 var1) {
      boolean var2 = ((PlayerSprintAccessor)var1).offline$invokeCanSprint();

      try {
         eC var3 = rD.dlJ().aZx(eC.class);
         if (var3.bag() && var3.awe()) {
            return true;
         }
      } catch (Throwable var4) {
      }

      return var2;
   }

   @Redirect(
      method = {"method_3136", "method_5773"},
      at = @At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_746;method_36454()F"
      ),
      remap = false
   )
   private float offline$managedYaw(class_746 var1) {
      try {
         ov var2 = rD.dlX().dbX();
         if (var2 != null) {
            return var2.cGI();
         }
      } catch (Throwable var3) {
      }

      return var1.method_36454();
   }

   @Redirect(
      method = {"method_3136", "method_5773"},
      at = @At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_746;method_36455()F"
      ),
      remap = false
   )
   private float offline$managedPitch(class_746 var1) {
      try {
         ov var2 = rD.dlX().dbX();
         if (var2 != null) {
            return var2.cGJ();
         }
      } catch (Throwable var3) {
      }

      return var1.method_36455();
   }

   @Inject(
      method = {"method_5773"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$playerTick(CallbackInfo var1) {
      try {
         Class var2 = Class.forName("sixtwo.hc", true, this.getClass().getClassLoader());
         Object var3 = var2.getDeclaredConstructor().newInstance();
         var2.getMethod("bdV").invoke(var3);
         if (Boolean.TRUE.equals(var2.getMethod("bdW").invoke(var3))) {
            var1.cancel();
         }
      } catch (Throwable var4) {
      }
   }
}
