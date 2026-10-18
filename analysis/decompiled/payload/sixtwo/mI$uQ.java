package sixtwo;

import native.Loader;

record mI$uQ(mI$uR frame, byte[] bytes) {
   static {
      Loader.doInit(mI$uQ.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native byte[] bytes();

   public native mI$uR frame();
}
