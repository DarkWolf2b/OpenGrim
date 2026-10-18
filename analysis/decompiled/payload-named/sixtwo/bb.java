package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class bb<T extends ig> extends az {
   private final T Hzehq;
   private boolean wdYkr;
   private ba yPGPg;
   private ba mVfOV;
   private final rk ENBAX;
   private final rk TExFB;
   private final rk SBrVn;
   private static long bEhCo;
   private static long[] qBphK;
   private static Integer[] EUMNl;
   private static Map vsPex;

   public bb(T var1) {
      long var2 = bEhCo ^ 76588574106532L;
      super();
      this.wdYkr = true;
      this.ENBAX = new rk(Bq<"v">(30884, 3705815286434789192L ^ var2)).dhs(rj.UPXqT);
      this.TExFB = new rk(Bq<"v">(25046, 4010432484552076857L ^ var2)).dhs(rj.UPXqT);
      this.SBrVn = new rk(Bq<"v">(14887, 3438240852891088329L ^ var2)).dhs(rj.MBpuQ);
      this.Hzehq = (T)var1;
      this.BcpIo = 9.0F;
      this.WjISQ = 9.0F;
   }

   static {
      Loader.doInit(bb.class);
      _82fbfebd99153c333724c02ed202703f();
   }

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   private static native int Bo(int var0, long var1);

   public native bb<T> Be(ba var1);

   public native bb<T> Bf(ba var1);

   public native boolean Bh();

   public native bb<T> Bd(boolean var1);

   public native ba Bi();

   public native ba Bj();

   public native rk Bm();

   public native T Bg();

   private static native MatchException Bn(MatchException var0);

   private static native int Bp(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native rk Bk();

   private static native CallSite Bq(Lookup var0, String var1, MethodType var2);

   public native rk Bl();

   private static native void _82fbfebd99153c333724c02ed202703f();
}
