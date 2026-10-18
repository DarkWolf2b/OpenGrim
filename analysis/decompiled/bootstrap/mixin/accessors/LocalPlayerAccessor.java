package mixin.accessors;

import net.minecraft.class_746;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

@Mixin({class_746.class})
public interface LocalPlayerAccessor {
   @Accessor("field_3925")
   float getXRotLast();

   @Accessor("field_3919")
   boolean wasSprinting();

   @Accessor("field_3919")
   void setWasSprinting(boolean var1);

   @Accessor("field_3941")
   float getYRotLast();

   @Invoker("method_3136")
   void callSendPosition();

   @Accessor("field_3923")
   int getPositionReminder();

   @Accessor("field_3923")
   void setPositionReminder(int var1);
}
