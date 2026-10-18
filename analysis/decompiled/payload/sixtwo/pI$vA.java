package sixtwo;

import java.util.List;
import native.Loader;

class pI$vA {
   private final List<py> kJJrH;
   private float QVsEO;
   private boolean UaqaR;

   private pI$vA(List<py> var1, float var2, boolean var3) {
      this.kJJrH = var1;
      this.QVsEO = var2;
      this.UaqaR = var3;
   }

   static {
      Loader.doInit(pI$vA.class);
   }

   public native List<py> dxx();

   private native void dxv(float var1);

   public native float dxy();

   private native void dxw(boolean var1);

   public native boolean dxz();
}
