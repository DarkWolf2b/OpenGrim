package mixin.accessors;

import net.minecraft.class_634;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.gU;
import sixtwo.ia;
import sixtwo.rD;

@Mixin(
   value = {class_634.class},
   remap = false
)
public abstract class ChatCommandEventBridgeMixin {
   private static boolean offline$reportedChatFailure;

   public ChatCommandEventBridgeMixin() {
   }

   @Inject(
      method = {"method_45729"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$sendChat(String var1, CallbackInfo var2) {
      boolean var3 = var1 != null && var1.startsWith(".");

      try {
         gU var4 = new gU(var1);
         var4.bdV();
         if (!var4.bdW() && var3) {
            ia var5 = rD.dlL();
            if (var5 != null) {
               rD.dlL().bgw(var4);
            }
         }

         if (var4.bdW() || var3) {
            var2.cancel();
         }
      } catch (Throwable var6) {
         if (!offline$reportedChatFailure) {
            offline$reportedChatFailure = true;
            System.err.println("[offline-bootstrap] outgoing chat event bridge failed: " + var6);
            var6.printStackTrace();
         }

         if (var3) {
            var2.cancel();
         }
      }
   }
}
