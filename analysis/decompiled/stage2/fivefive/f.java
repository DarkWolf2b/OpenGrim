package fivefive;

import java.io.IOException;
import java.io.InputStream;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.nio.file.Path;
import java.util.Map;
import natives.Loader;

public class f {
   private static C[] VXkGX;
   private static long oelyq;
   private static String[] fPnRz;
   private static String[] uFFhj;
   private static Map ZdzUk;
   private static long[] cQdHt;
   private static Integer[] jYWQf;
   private static Map rwCkZ;

   private static native byte[] O(Object[] var0) throws IOException;

   public f() {
   }

   static {
      Loader.doInit(f.class);
      _28819190cf05c271b6e341dc513d2604();
   }

   public static native void F(Object[] var0);

   private static native long[] I(Object[] var0) throws IOException;

   private static native InputStream J(Object[] var0) throws IOException;

   private static native byte[] S(Object[] var0);

   public static native C[] Z();

   private static native Object ad(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite ae(Lookup var0, String var1, MethodType var2);

   public static native boolean U(Object[] var0);

   private static native int af(int var0, long var1);

   public static native void Y(C[] var0);

   private static native byte[] L(Object[] var0) throws IOException;

   private static native String ac(int var0, long var1);

   private static native void M(Object[] var0) throws IOException;

   private static native byte[] N(Object[] var0) throws IOException;

   private static native byte[] P(Object[] var0) throws IOException;

   private static native byte[] H(Object[] var0) throws IOException;

   private static native byte[] T(Object[] var0);

   private static native byte[] R(Object[] var0);

   private static native byte[] K(Object[] var0) throws IOException;

   private static native byte[] Q(Object[] var0);

   private static native Path G(Object[] var0) throws IOException;

   private static native void _28819190cf05c271b6e341dc513d2604();

   private static native int ag(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String ab(byte[] var0);

   private static native Throwable aa(Throwable var0);

   private static native CallSite ah(Lookup var0, String var1, MethodType var2);
}
