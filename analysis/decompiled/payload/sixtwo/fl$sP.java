package sixtwo;

import native.Loader;
import net.minecraft.class_1268;

record fl$sP(int hotbarSlot, class_1268 hand) {
   static {
      Loader.doInit(fl$sP.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native int hotbarSlot();

   public native class_1268 hand();
}
