package sixtwo;

import native.Loader;
import net.minecraft.class_8051;

record fv$sS(int armorIndex, class_8051 armorType, int sourceSlot, boolean currentArmorEmpty) {
   static {
      Loader.doInit(fv$sS.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native int sourceSlot();

   public native int armorIndex();

   public native class_8051 armorType();

   public native boolean currentArmorEmpty();
}
