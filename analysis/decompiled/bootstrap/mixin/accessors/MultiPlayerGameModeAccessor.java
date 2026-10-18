package mixin.accessors;

import net.minecraft.class_636;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

@Mixin({class_636.class})
public interface MultiPlayerGameModeAccessor {
   @Invoker("method_2911")
   void callEnsureHasSentCarriedItem();

   @Accessor("field_3715")
   float getDestroyProgress();

   @Accessor("field_3716")
   int getDestroyDelay();

   @Accessor("field_3716")
   void setDestroyDelay(int var1);
}
