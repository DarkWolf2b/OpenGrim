package mixin.accessors;

import java.util.List;
import java.util.Map;
import net.minecraft.class_304;
import net.minecraft.class_3675.class_306;
import org.spongepowered.asm.mixin.Final;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.gz;

@Mixin(
   value = {class_304.class},
   remap = false
)
public abstract class KeyMappingClickEventBridgeMixin {
   @Shadow
   @Final
   private static Map<class_306, List<class_304>> field_1658;

   public KeyMappingClickEventBridgeMixin() {
   }

   @Inject(
      method = {"method_1420"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private static void offline$keyMappingClick(class_306 var0, CallbackInfo var1) {
      try {
         gz var2 = new gz(var0, field_1658);
         var2.bdV();
         if (var2.bdW()) {
            var1.cancel();
         }
      } catch (Throwable var3) {
         System.err.println("[offline-bootstrap] key-mapping event failed: " + var3);
      }
   }
}
