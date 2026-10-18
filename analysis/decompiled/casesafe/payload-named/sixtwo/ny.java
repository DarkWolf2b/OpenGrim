package sixtwo;

import native.Loader;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.slot.Slot;

public class ny extends nx {
   private final long mhxFk;

   public ny(ItemStack var1, Slot var2, long var3) {
      super(var1, var2);
      this.mhxFk = var3;
   }

   static {
      Loader.doInit(ny.class);
   }

   public native long cwl();
}
