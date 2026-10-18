package sixtwo;

import net.minecraft.entity.Entity;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

public class hr extends hH {
   private Entity HztkT;
   private CallbackInfoReturnable<Float> hdBkc;

   public CallbackInfoReturnable<Float> bdc() {
      return this.hdBkc;
   }

   public Entity bdb() {
      return this.HztkT;
   }

   public hr(Entity var1, CallbackInfoReturnable<Float> var2) {
      this.HztkT = var1;
      this.hdBkc = var2;
   }
}
