package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public abstract class aj extends az {
   public static float BxXRB;
   protected final rk nXrOu;
   protected final rk Rpjei;
   protected boolean FHbTC;
   protected float IzFhM;
   protected boolean fWqrr;
   protected boolean rjDwh;
   protected float dWFbt;
   protected float DHgsI;
   protected float bQoPs;
   protected static float TRsBX;
   protected boolean ImWAC;
   private static String[] XrosG;
   private static long xPnXy;
   private static long[] mJOOd;
   private static Integer[] PlKvG;
   private static Map Nupxb;

   private static native void _bb4768691cd64636a3a9c49f7274580e();

   public native float ow();

   protected aj(float var1, float var2, float var3, float var4) {
      long var5 = xPnXy ^ 127341194313308L;
      super(var1, var2, var3, var4);
      this.nXrOu = new rk(oE<"b">(13266, 9111039556449161939L ^ var5)).dhs(rj.NJlxm);
      this.Rpjei = new rk(oE<"b">(4740, 8177755183240147844L ^ var5)).dhs(rj.UPXqT);
      this.IzFhM = 2.0F;
      this.fWqrr = true;
      this.bQoPs = 7.5F;
      this.ImWAC = false;
   }

   protected aj() {
      this(0.0F, 0.0F, 0.0F, 0.0F);
   }

   static {
      Loader.doInit(aj.class);
      _bb4768691cd64636a3a9c49f7274580e();
   }

   public native void of(double var1, double var3);

   public native float ov();

   protected native float gc();

   public native rk op();

   public native <T extends aj> T on(float var1);

   public native boolean os();

   public native <T extends aj> T om(boolean var1);

   @Override
   public native boolean hc(double var1, double var3);

   protected native void oa();

   public native <T extends aj> T ob(boolean var1);

   @Override
   public native void dl(double var1, double var3, mA var5);

   public native <T extends aj> T ok(float var1);

   public native float or();

   protected native void oc(lC var1, Runnable var2, Runnable var3);

   public native boolean ox();

   protected native void gd(lC var1, Runnable var2);

   @Override
   protected native void bV(lC var1);

   protected native boolean oe();

   public static native void oz(String[] var0);

   protected native rj ga();

   protected native float gb();

   public native void og(lC var1);

   public native boolean oh(double var1, double var3);

   protected native int fY();

   @Override
   public native void fX(lC var1);

   protected native rj fZ();

   @Override
   public native boolean oi();

   public static native String[] oA();

   @Override
   protected native boolean nZ();

   protected native boolean od();

   public native <T extends aj> T oj(boolean var1);

   public native rk oo();

   private static native int oC(int var0, long var1);

   private static native int oD(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native <T extends aj> T ol(boolean var1);

   public native boolean oq();

   private static native MatchException oB(MatchException var0);

   private static native CallSite oE(Lookup var0, String var1, MethodType var2);

   public native float ou();

   public native boolean ot();
}
