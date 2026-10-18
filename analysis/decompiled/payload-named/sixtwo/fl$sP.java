package sixtwo;

import native.Loader;
import net.minecraft.util.Hand;

record fl$sP(int hotbarSlot, Hand hand) {
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

   public native Hand hand();
}
