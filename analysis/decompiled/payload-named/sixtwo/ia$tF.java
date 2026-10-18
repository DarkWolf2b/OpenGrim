package sixtwo;

import native.Loader;

record ia$tF(hZ command, int index) {
   public native int index();

   static {
      Loader.doInit(ia$tF.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native hZ command();
}
