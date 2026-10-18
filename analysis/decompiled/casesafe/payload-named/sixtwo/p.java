package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class p extends ak<cA> {
   private boolean VeJrH;
   private boolean PysNf;
   private boolean cHwmi;
   private double lJkuw;
   private final rk LmPiG;
   private final rk mcCyI;
   private final rk jDhzO;
   private final rk zNxSk;
   private static long xGtcx;
   private static String[] kDxWL;
   private static String[] LqULr;
   private static Map HDBwv;
   private static long[] Jujsa;
   private static Integer[] rEndQ;
   private static Map CCCPZ;

   public p(cA var1, az var2) {
      long var3 = xGtcx ^ 111690125729243L;
      super(var1, var2);
      this.LmPiG = new rk(dK<"m">(14557, 4551825384829804409L ^ var3)).dhs(rj.MBpuQ);
      this.mcCyI = new rk(dK<"m">(5977, 1942956261220249847L ^ var3)).dhs(rj.MBpuQ);
      this.jDhzO = new rk(dK<"m">(28803, 6867856040628623136L ^ var3)).dhs(rj.UPXqT);
      this.zNxSk = new rk(dK<"m">(18873, 4240102668053425694L ^ var3)).dhs(rj.UPXqT);
   }

   static {
      Loader.doInit(sixtwo.p.class);
      _abb327e371537caac251ee182a598689();
   }

   @Override
   public native float dn();

   @Override
   public native void dl(double var1, double var3, mA var5);

   @Override
   public native boolean dm(int var1, int var2, int var3);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   private native void dz(lC var1, float var2, float var3, float var4);

   @Override
   protected native void bV(lC var1);

   private static native CallSite dK(Lookup var0, String var1, MethodType var2);

   private static native NumberFormatException dD(NumberFormatException var0);

   private static native CallSite dH(Lookup var0, String var1, MethodType var2);

   private static native String dE(byte[] var0);

   private static native int dJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native Object dG(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int dI(int var0, long var1);

   @Override
   public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

   private static native String dF(int var0, long var1);

   private native void dA(boolean var1);

   private static native void _abb327e371537caac251ee182a598689();
}
