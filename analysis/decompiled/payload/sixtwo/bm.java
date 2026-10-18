package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class bm extends az {
   private final nc lBVqw;
   private final az XOmFR;
   private final rk rYqmq;
   private static boolean mddAz;
   private static long ILQMi;
   private static String[] GaHJp;
   private static String[] TyKLp;
   private static Map KTJbD;
   private static long[] kVLgE;
   private static Integer[] ONeTB;
   private static Map bLkZb;

   public bm(nc var1, az var2) {
      long var3 = ILQMi ^ 128915536880591L;
      super();
      this.rYqmq = new rk(Fi<"u">(28095, 7996524777947050912L ^ var3)).dhs(rj.UPXqT);
      this.lBVqw = var1;
      this.XOmFR = var2;
   }

   static {
      Loader.doInit(bm.class);
      _620c6a3cba54f7577c9dfae4624e2c56();
   }

   @Override
   public native float dn();

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   @Override
   public native void dY();

   private native void ET(double var1, double var3);

   private static native void _620c6a3cba54f7577c9dfae4624e2c56();

   public native nc EU();

   private static native Object Fe(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException Fb(MatchException var0);

   private static native CallSite Fi(Lookup var0, String var1, MethodType var2);

   public static native void EY(boolean var0);

   public static native boolean EZ();

   private static native String Fd(int var0, long var1);

   public native rk EW();

   private static native String Fc(byte[] var0);

   public static native boolean Fa();

   private static native CallSite Ff(Lookup var0, String var1, MethodType var2);

   private static native int Fg(int var0, long var1);

   private static native int Fh(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native az EV();
}
