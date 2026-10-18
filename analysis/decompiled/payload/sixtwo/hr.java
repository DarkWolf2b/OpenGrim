package sixtwo;

import net.minecraft.class_1297;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

public class hr extends hH {
   private class_1297 HztkT;
   private CallbackInfoReturnable<Float> hdBkc;

   public CallbackInfoReturnable<Float> bdc() {
      return this.hdBkc;
   }

   public class_1297 bdb() {
      return this.HztkT;
   }

   public hr(class_1297 var1, CallbackInfoReturnable<Float> var2) {
      this.HztkT = var1;
      this.hdBkc = var2;
   }
}
