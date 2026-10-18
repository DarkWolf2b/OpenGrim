package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1297;

public class oY {
   private final pa OcRSu = new pa();
   private final pb KODCp = new pb();
   private boolean WzTEi;
   private static long VZDMl;
   private static long[] jVScc;
   private static Integer[] TnPJT;
   private static Map ghxZc;

   public oY() {
      hF.bdI(this);
   }

   static {
      Loader.doInit(oY.class);
      _c9a0052a838a5503001e18d485570420();
   }

   private native boolean cLU(oW var1);

   private native boolean cLY(oW var1);

   public native boolean cLP(oW var1);

   public native boolean cLS();

   private native boolean cLW(oW var1);

   private native void cLX(oW var1);

   public native boolean cMb();

   private native boolean cLV(oW var1);

   private static native MatchException cMg(MatchException var0);

   private static native int cMi(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite cMj(Lookup var0, String var1, MethodType var2);

   @hG
   public native void cLO(gM var1);

   public native boolean cLQ(class_1297 var1);

   public native boolean cLT(oW var1);

   public native pb cMa();

   public native pa cLZ();

   private native boolean cLR(class_1297 var1);

   private static native int cMh(int var0, long var1);

   private static native void _c9a0052a838a5503001e18d485570420();
}
