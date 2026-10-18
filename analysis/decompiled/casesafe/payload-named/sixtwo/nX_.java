package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public final class nX implements lA {
   private static rk YgGnF;
   private static rk lCtmb;
   private static mT UAUwi;
   private static boolean ktJNW;
   private static boolean IuVvI;
   private static long hBcIr;
   private static String[] CGTeE;
   private static String[] NKmtF;
   private static Map MOHEo;
   private static long[] OLPKB;
   private static Integer[] lLAxM;
   private static Map dDMRE;
   private static long ePbqd;

   private nX() {
      long var1 = hBcIr ^ 85045834639694L;
      super();
      throw new UnsupportedOperationException(cAz<"n">(14031, 1593544029190204953L ^ var1));
   }

   static {
      Loader.doInit(nX.class);
      _7121319a0950db9a8912791192064035();
   }

   public static boolean cAt() {
      long var0 = hBcIr ^ 39235205244423L;
      boolean var2 = nW.cAp();

      try {
         if (var2) {
            return IuVvI;
         }

         if (!IuVvI) {
            return true;
         }
      } catch (UnsupportedOperationException var3) {
         throw cAv(var3);
      }

      return false;
   }

   public static native void cAr(lC var0);

   private static native void _7121319a0950db9a8912791192064035();

   private static native int cAA(int var0, long var1);

   private static native int cAB(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite cAC(Lookup var0, String var1, MethodType var2);

   private static native void cAu(lC var0, float var1, float var2, float var3, float var4, float var5);

   private static native String cAx(int var0, long var1);

   private static native UnsupportedOperationException cAv(UnsupportedOperationException var0);

   private static native CallSite cAz(Lookup var0, String var1, MethodType var2);

   private static native String cAw(byte[] var0);

   public static native boolean cAs();

   private static native Object cAy(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
