package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class bn extends az {
   private final nd oUrRP;
   private final az CRIaI;
   private final rk ThKyW;
   private static long WKWqD;
   private static String[] ZGPGj;
   private static String[] ojBkx;
   private static Map ubJdR;
   private static long[] jzoAa;
   private static Integer[] kwnpJ;
   private static Map uHZms;

   public bn(nd var1, az var2) {
      long var3 = WKWqD ^ 3257936932313L;
      super();
      this.ThKyW = new rk(Fv<"r">(5152, 6052752358749138694L ^ var3)).dhs(rj.UPXqT);
      this.oUrRP = var1;
      this.CRIaI = var2;
   }

   static {
      Loader.doInit(bn.class);
      _ae95296b69fb76f64e5f8e3764d2f6be();
   }

   @Override
   public native float dn();

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   @Override
   public native void dY();

   private static native void _ae95296b69fb76f64e5f8e3764d2f6be();

   private native void Fj(double var1, double var3);

   private static native int Ft(int var0, long var1);

   private static native int Fu(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native nd Fk();

   private static native MatchException Fo(MatchException var0);

   private static native String Fp(byte[] var0);

   private static native CallSite Fs(Lookup var0, String var1, MethodType var2);

   private static native CallSite Fv(Lookup var0, String var1, MethodType var2);

   public native az Fl();

   public native rk Fm();

   private static native String Fq(int var0, long var1);

   private static native Object Fr(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
