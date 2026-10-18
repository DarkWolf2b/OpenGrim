package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public final class rd {
   private float msbOo;
   private float WOtQD;
   private float mzZkj;
   private static long rxXqy;
   private static String[] trglW;
   private static String[] VynXP;
   private static Map YEHht;

   public rd() {
      this(1.0F, 1.0F);
   }

   public rd(float var1, float var2) {
      this.deE(var1, var2);
      this.deD();
   }

   static {
      Loader.doInit(rd.class);
      _01d7b445bfb71fed2f754b69eed94d86();
   }

   private static native void _01d7b445bfb71fed2f754b69eed94d86();

   public native float deH();

   public native boolean deA();

   private static native IllegalArgumentException deI(IllegalArgumentException var0);

   private static native CallSite deM(Lookup var0, String var1, MethodType var2);

   private static native Object deL(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String deJ(byte[] var0);

   private static native String deK(int var0, long var1);

   public native float deC(int var1);

   public native boolean deB(int var1);

   public native float deF();

   public native void deE(float var1, float var2);

   public native void deD();

   public native float deG();
}
