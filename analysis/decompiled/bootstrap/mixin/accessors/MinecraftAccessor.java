package mixin.accessors;

import net.minecraft.class_276;
import net.minecraft.class_310;
import net.minecraft.class_338.class_11732;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Mutable;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

@Mixin({class_310.class})
public interface MinecraftAccessor {
   @Accessor("field_1752")
   int getRightClickDelay();

   @Invoker("method_1536")
   boolean callStartAttack();

   @Accessor("field_1752")
   void setRightClickDelay(int var1);

   @Invoker("method_1583")
   void callStartUseItem();

   @Accessor("field_1771")
   void setMissTime(int var1);

   @Invoker("method_29041")
   void callOpenChatScreen(class_11732 var1);

   @Accessor("field_1689")
   class_276 getMainRenderTarget();

   @Mutable
   @Accessor("field_1689")
   void setMainRenderTarget(class_276 var1);
}
