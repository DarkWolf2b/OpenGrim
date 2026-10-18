package sixtwo;

import native.Loader;
import net.minecraft.item.equipment.EquipmentType;

record fv$sS(int armorIndex, EquipmentType armorType, int sourceSlot, boolean currentArmorEmpty) {
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

   public native EquipmentType armorType();

   public native boolean currentArmorEmpty();
}
