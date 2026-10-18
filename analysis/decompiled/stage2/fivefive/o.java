package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class o {
   private String cQAIi;
   private static int oJbxa;
   private static long nAUpJ;
   private static String[] RoRsj;
   private static String[] IJtMQ;
   private static Map HXYml;
   private static long[] PLvEx;
   private static Integer[] clYOx;
   private static Map UgoiJ;

   public o() {
   }

   static {
      Loader.doInit(o.class);
      _0a1e39a2a7a5c8d3c50f7d33a0815f07();
   }

   @Override
   public native boolean equals(Object var1);

   @Override
   public native String toString();

   @Override
   public native int hashCode();

   public static native int ca();

   private static native String cd(int var0, long var1);

   private static native Object ce(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native RuntimeException cb(RuntimeException var0);

   private static native int ch(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite cf(Lookup var0, String var1, MethodType var2);

   private static native String cc(byte[] var0);

   private static native CallSite ci(Lookup var0, String var1, MethodType var2);

   public static native void bY(int var0);

   protected native boolean bX(Object[] var1);

   private static native int cg(int var0, long var1);

   public static native int bZ();

   public native String bV(Object[] var1);

   public native void bW(Object[] var1);

   public native void bU(Object[] var1);

   private static native void _0a1e39a2a7a5c8d3c50f7d33a0815f07();
}
