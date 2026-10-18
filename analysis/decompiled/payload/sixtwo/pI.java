package sixtwo;

import com.google.gson.Gson;
import com.google.gson.JsonObject;
import java.util.EnumMap;
import java.util.List;
import java.util.Map;
import native.Loader;

public class pI {
   private static Gson jlIME;
   private final Map<pF, pI$vA> qUptW;
   private static long ZQFxo;

   public pI() {
      long var1 = ZQFxo ^ 72478715733572L;
      String[] var10000 = pM.cTD();
      super();
      String[] var3 = var10000;
      this.qUptW = new EnumMap<>(pF.class);

      for (pF var7 : pF.values()) {
         this.qUptW.put(var7, new pI$vA(this.cTa(), 1.0F, false));
         if (var3 == null) {
            break;
         }
      }
   }

   static {
      Loader.doInit(pI.class);
      _ff166165805cc4a571338e1f7d1e91e5();
   }

   private native void cTc(py var1, JsonObject var2);

   private native pI$vA cTd(pF var1);

   public native Map<pF, pI$vA> cTe();

   private static native Exception cTf(Exception var0);

   private native List<py> cTa();

   public native void cSW(pF var1, boolean var2);

   public native void cSX(pF var1, float var2);

   public native float cSV(pF var1);

   private native JsonObject cTb(py var1);

   public native pH cSR(pF var1);

   public native boolean cSU(pF var1);

   private native float cSZ(pF var1);

   public native void cST(pF var1, pH var2);

   private native void cSY(pF var1, float var2);

   public native List<py> cSP(pF var1);

   public native pG cSQ();

   public native void cSS(pG var1);

   private static native void _ff166165805cc4a571338e1f7d1e91e5();
}
