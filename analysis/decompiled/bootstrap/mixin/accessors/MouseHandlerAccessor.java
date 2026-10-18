package mixin.accessors;

import net.minecraft.class_11910;
import net.minecraft.class_312;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

@Mixin({class_312.class})
public interface MouseHandlerAccessor {
   @Invoker("method_1600")
   void callOnMove(long var1, double var3, double var5);

   @Accessor("field_1795")
   void setXPos(double var1);

   @Accessor("field_1794")
   void setYPos(double var1);

   @Invoker("method_1601")
   void callOnButton(long var1, class_11910 var3, int var4);
}
