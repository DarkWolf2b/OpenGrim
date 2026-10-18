package sixtwo;

import native.Loader;

record qV$vP(double top, double mean, double standardDeviation) {
   static {
      Loader.doInit(qV$vP.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native double top();

   public native double mean();

   public native double standardDeviation();
}
