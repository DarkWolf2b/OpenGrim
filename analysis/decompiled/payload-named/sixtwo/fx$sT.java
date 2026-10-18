package sixtwo;

import native.Loader;

record fx$sT(oH slot) {
   public native oH slot();

   static {
      Loader.doInit(fx$sT.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   private native int interactionSlot();
}
