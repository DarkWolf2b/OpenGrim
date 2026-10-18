package mixin.accessors;

import net.minecraft.class_1293;
import net.minecraft.class_310;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Unique;
import sixtwo.Z;
import sixtwo.lE;
import sixtwo.mM;
import sixtwo.rj;
import sixtwo.rk;

@Mixin(
   value = {class_1293.class},
   remap = false
)
public abstract class StatusEffectInstanceAnimationMixin implements mM {
   @Unique
   private rk offline$fadeAnimation;
   @Unique
   private Z offline$timeAnimation;

   public StatusEffectInstanceAnimationMixin() {
   }

   @Override
   public rk getFadeAnimation() {
      if (this.offline$fadeAnimation == null) {
         this.offline$fadeAnimation = new rk(300).dhs(rj.UPXqT);
      }

      return this.offline$fadeAnimation;
   }

   @Override
   public Z getTimerAnimation() {
      if (this.offline$timeAnimation == null && class_310.method_1551() != null && class_310.method_1551().field_1724 != null && lE.joxgd != null) {
         this.offline$timeAnimation = new Z().kJ(lE.joxgd.bYM(7.0F)).kK(3.0F).kL(300).kM(rj.UPXqT);
      }

      return this.offline$timeAnimation;
   }
}
