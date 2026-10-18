package mixin.accessors;

import com.mojang.brigadier.suggestion.Suggestions;
import java.lang.reflect.Field;
import java.util.concurrent.CompletableFuture;
import net.minecraft.class_342;
import net.minecraft.class_4717;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.At.Shift;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.ia;
import sixtwo.rD;

@Mixin(
   value = {class_4717.class},
   remap = false
)
public abstract class ChatSuggestionMixin {
   @Shadow
   private class_342 field_21599;
   @Shadow
   private CompletableFuture<Suggestions> field_21611;

   public ChatSuggestionMixin() {
   }

   @Shadow
   public abstract void method_23920(boolean var1);

   @Inject(
      method = {"method_23934"},
      at = {@At(
         value = "INVOKE",
         target = "Lcom/mojang/brigadier/StringReader;canRead()Z",
         shift = Shift.BEFORE
      )},
      cancellable = true,
      remap = false
   )
   private void offline$updateLocalCommandSuggestions(CallbackInfo var1) {
      try {
         ia var2 = rD.dlL();
         if (var2 == null) {
            return;
         }

         String var3 = this.field_21599.method_1882();
         if (!var3.startsWith(var2.bgI())) {
            return;
         }

         this.field_21611 = var2.bgA(var3, this.field_21599.method_1881());
         this.field_21611.thenRun(() -> {
            try {
               if (this.field_21611.isDone() && !this.field_21611.get().isEmpty() && this.offline$suggestionWindowAbsent()) {
                  this.method_23920(false);
                  var1.cancel();
               }
            } catch (Throwable var3x) {
               System.err.println("[offline-bootstrap] local command suggestion completion failed: " + var3x);
            }
         });
      } catch (Throwable var4) {
         System.err.println("[offline-bootstrap] local command suggestions failed: " + var4);
      }
   }

   private boolean offline$suggestionWindowAbsent() {
      try {
         Field var1 = class_4717.class.getDeclaredField("field_21612");
         var1.setAccessible(true);
         return var1.get(this) == null;
      } catch (Throwable var2) {
         return true;
      }
   }
}
