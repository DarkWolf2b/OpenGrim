package mixin.accessors;

import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.reflect.InvocationTargetException;
import net.minecraft.class_11246;
import net.minecraft.class_310;
import net.minecraft.class_312;
import net.minecraft.class_332;
import net.minecraft.class_437;
import net.minecraft.class_757;
import net.minecraft.class_9779;
import org.spongepowered.asm.mixin.Final;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.Unique;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.Redirect;
import org.spongepowered.asm.mixin.injection.At.Shift;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(
   value = {class_757.class},
   remap = false
)
public abstract class GameRendererUiMixin {
   @Shadow
   @Final
   private class_310 field_4015;
   @Unique
   private boolean offline$grimRenderFailureReported;

   public GameRendererUiMixin() {
   }

   @Redirect(
      method = {"method_3192"},
      at = @At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_437;method_47413(Lnet/minecraft/class_332;IIF)V"
      ),
      require = 0,
      remap = false
   )
   private void offline$deferGrimScreen(class_437 var1, class_332 var2, int var3, int var4, float var5) {
      try {
         if (Class.forName("sixtwo.av", false, var1.getClass().getClassLoader()).isInstance(var1)) {
            return;
         }

         var1.method_47413(var2, var3, var4, var5);
      } catch (Throwable var7) {
      }
   }

   @Inject(
      method = {"method_3192"},
      at = {@At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_11228;method_70879()V",
         shift = Shift.AFTER
      )},
      require = 1,
      remap = false
   )
   private void offline$renderGrimScreenLate(class_9779 var1, boolean var2, CallbackInfo var3) {
      class_437 var4 = this.field_4015.field_1755;
      if (var4 != null) {
         try {
            Class var5 = Class.forName("sixtwo.av", false, var4.getClass().getClassLoader());
            if (!var5.isInstance(var4)) {
               return;
            }

            int var17 = (int)class_312.method_68880(this.field_4015.method_22683(), this.field_4015.field_1729.method_1603());
            int var7 = (int)class_312.method_68884(this.field_4015.method_22683(), this.field_4015.field_1729.method_1604());
            class_332 var8 = new class_332(this.field_4015, new class_11246(), var17, var7);
            float var9 = var1.method_60637(true);
            RenderSystem.backupProjectionMatrix();

            try {
               Class var10 = Class.forName("sixtwo.jo", true, var4.getClass().getClassLoader());
               Runnable var11 = () -> var4.method_25394(var8, var17, var7, var9);
               var10.getMethod("bEs", Runnable.class).invoke(null, var11);
            } finally {
               RenderSystem.restoreProjectionMatrix();
            }
         } catch (Throwable var16) {
            if (!this.offline$grimRenderFailureReported) {
               this.offline$grimRenderFailureReported = true;
               Throwable var6 = var16;

               while (var6 instanceof InvocationTargetException && var6.getCause() != null) {
                  var6 = var6.getCause();
               }

               System.err.println("[offline-bootstrap] late Grim screen render failed: " + var6);
               var6.printStackTrace();
            }
         }
      }
   }
}
