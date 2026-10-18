package mixin.accessors;

import net.minecraft.class_1297;
import net.minecraft.class_243;
import net.minecraft.class_5819;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Mutable;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

@Mixin({class_1297.class})
public interface EntityAccessor {
   @Accessor("field_5974")
   class_5819 getRandom();

   @Accessor("field_17046")
   class_243 getStuckSpeedMultiplier();

   @Accessor("field_5957")
   void setWasTouchingWater(boolean var1);

   @Invoker("method_5762")
   void callPush(double var1, double var3, double var5);

   @Mutable
   @Accessor("field_5974")
   void setRandom(class_5819 var1);

   @Accessor("field_6000")
   void setWasEyeInWater(boolean var1);
}
