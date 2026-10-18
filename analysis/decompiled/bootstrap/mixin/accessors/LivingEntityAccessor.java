package mixin.accessors;

import net.minecraft.class_1309;
import net.minecraft.class_2940;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

@Mixin({class_1309.class})
public interface LivingEntityAccessor {
   @Accessor("field_6228")
   void setJumpDelay(int var1);

   @Accessor("field_6247")
   static class_2940<Float> getDataHealthId() {
      throw new AssertionError();
   }

   @Accessor("field_6228")
   int getJumpDelay();

   @Invoker("method_6085")
   void callSetLivingEntityFlag(int var1, boolean var2);
}
