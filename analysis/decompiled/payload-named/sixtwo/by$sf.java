package sixtwo;

import native.Loader;

record by$sf(boolean hasVisibleChips, int lines, float chipHeight) {
   static {
      Loader.doInit(by$sf.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native int lines();

   public native boolean hasVisibleChips();

   public native float chipHeight();
}
