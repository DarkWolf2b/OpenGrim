package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class o extends ak<cC> {
   private boolean bukXl;
   private final rk rCPHm;
   private final rk ibThS;
   private static String ePmoh;
   private static long Cbosm;
   private static String[] HsJpN;
   private static String[] ihrIv;
   private static Map lsTbb;
   private static long[] tYXzh;
   private static Integer[] JUjbf;
   private static Map xRAUH;

   public o(cC var1, az var2) {
      long var3 = Cbosm ^ 104095479536836L;
      super(var1, var2);
      this.rCPHm = new rk(dy<"a">(12434, 8747872211928334834L ^ var3)).dhs(rj.MBpuQ);
      this.ibThS = new rk(dy<"a">(23154, 8101636139082525466L ^ var3)).dhs(rj.UPXqT);
   }

   static {
      Loader.doInit(o.class);
      _061d8d509950ae59162f9813975ed3d5();
   }

   public static native void dp(String var0);

   @Override
   public native float dn();

   private static native int dw(int var0, long var1);

   private static native String dt(int var0, long var1);

   @Override
   public native void dl(double var1, double var3, mA var5);

   private static native CallSite dv(Lookup var0, String var1, MethodType var2);

   private static native String ds(byte[] var0);

   @Override
   public native boolean dm(int var1, int var2, int var3);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   public static native String dq();

   private static native int dx(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite dy(Lookup var0, String var1, MethodType var2);

   private native void dj();

   private static native Object du(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native NumberFormatException dr(NumberFormatException var0);

   private static native void _061d8d509950ae59162f9813975ed3d5();
}
