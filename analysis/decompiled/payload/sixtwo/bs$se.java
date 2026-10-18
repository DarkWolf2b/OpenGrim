package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1792;

class bs$se extends az {
   private final bs mAGlG;
   private final class_1792 zVisd;
   private final rk XIdWx;
   private final rk PlZba;
   private boolean rjcuK;
   private static long jnWEe;
   private static String gUvvz;
   private static long[] NEAZe;
   private static Integer[] ZJgLS;
   private static Map xVRty;

   public bs$se(bs var1, class_1792 var2) {
      long var3 = jnWEe ^ 138251043208893L;
      super();
      this.XIdWx = new rk(dnu<"e">(20016, 1855737667574910776L ^ var3)).dhs(rj.UPXqT);
      this.PlZba = new rk(dnu<"e">(27095, 800108513204005086L ^ var3)).dhs(rj.UPXqT);
      this.mAGlG = var1;
      this.zVisd = var2;
   }

   static {
      Loader.doInit(bs$se.class);
      _02c8e32375e80bbbd9a400eee85b58d8();
   }

   private static native void _02c8e32375e80bbbd9a400eee85b58d8();

   @Override
   protected native void bV(lC var1);

   private static native MatchException dnq(MatchException var0);

   public native void dnk(boolean var1);

   public native boolean dnp();

   public native rk dno();

   public native bs dnl();

   public native class_1792 dnm();

   private static native CallSite dnu(Lookup var0, String var1, MethodType var2);

   public native rk dnn();

   private static native String dnr(byte[] var0);

   private static native int dns(int var0, long var1);

   private static native int dnt(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
