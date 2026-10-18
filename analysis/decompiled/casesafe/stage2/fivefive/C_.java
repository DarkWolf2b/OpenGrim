package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class C {
   static C$G eVpkU;
   static C$I ZSkIn;
   static C$H ixAUe;
   private static boolean ZOCoV;
   private static String AteIz;
   private static String bDEiA;
   private static C[] xjOCe;
   private static C[] oIBfz;
   private static int liQpX;
   private static long XoXOR;
   private static String[] isEKB;
   private static String[] KKLPs;
   private static Map dNFLJ;
   private static long[] bRssP;
   private static Integer[] tGGzr;
   private static Map qmFkC;

   public C() {
   }

   static {
      Loader.doInit(C.class);
      _bc59be1a3a88c1c5466b4657c6a72257();
   }

   private static native String fd(int var0, long var1);

   private static native int fh(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String fc(byte[] var0);

   private static native CallSite fi(Lookup var0, String var1, MethodType var2);

   private static native int fg(int var0, long var1);

   private static native Exception fb(Exception var0);

   private static native Object fe(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite ff(Lookup var0, String var1, MethodType var2);

   public static native void eQ(String var0);

   public static native void eS(String var0);

   public static native String eT();

   public static native C[] eV();

   public static native String eR();

   public static native boolean eO();

   public static native void eU(C[] var0);

   public static native void eW(C[] var0);

   public static native C[] eX();

   public static native void eY(int var0);

   public static native int eZ();

   public static native String eM(Object[] var0);

   public static native void eN(boolean var0);

   public static native String eL(Object[] var0);

   public static native boolean eP();

   public static native int fa();

   private static native void _bc59be1a3a88c1c5466b4657c6a72257();
}
