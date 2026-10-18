package fivefive;

import java.io.InputStream;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.lang.reflect.Method;
import java.net.URL;
import java.security.SecureClassLoader;
import java.util.HashMap;
import java.util.Map;
import natives.Loader;

public class n extends SecureClassLoader {
   private final ClassLoader MucZK;
   private final ClassLoader Zgfyb;
   private final Map<String, Class<?>> zERoz = new HashMap<>();
   private final Map<String, Object> NnQnE;
   private static String eavGy;
   private static long MSLLa;
   private static String[] aenZJ;
   private static String[] XrVJh;
   private static Map IjlAo;
   private static long[] mBFul;
   private static Integer[] lVsKR;
   private static Map IaNVy;
   private static long oOMnW;

   public n(ClassLoader var1, ClassLoader var2) {
      super(var1);
      l.bk();
      this.NnQnE = new HashMap<>();

      try {
         this.MucZK = var1;
         this.Zgfyb = var2;
         if (C.eP()) {
            l.bj(new C[1]);
         }
      } catch (RuntimeException var4) {
         throw bM(var4);
      }
   }

   static {
      Loader.doInit(n.class);
      _916b06c7433c90bd33df7fa906008ecd();
   }

   @Override
   public native Class<?> loadClass(String var1) throws ClassNotFoundException;

   @Override
   public native InputStream getResourceAsStream(String var1);

   @Override
   public native URL getResource(String var1);

   private static native Object by(Object[] var0) throws Throwable;

   private static native void _916b06c7433c90bd33df7fa906008ecd();

   private static native int bR(int var0, long var1);

   private native boolean bF(Object[] var1);

   public native void bE(Object[] var1);

   private static native String bN(byte[] var0);

   private static native Object bC(Object... var0) throws Throwable;

   public static native String bJ(Object[] var0);

   private static native Class bz(Object[] var0) throws Throwable;

   private static native Method bB(Object... var0);

   private native Object bD(Object[] var1);

   private static native byte[] bG(Object[] var0);

   private static native String bO(int var0, long var1);

   private static native Throwable bM(Throwable var0);

   private static native CallSite bQ(Lookup var0, String var1, MethodType var2);

   public native void bH(Object[] var1);

   private static native int bS(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native String bI(Object[] var0);

   private static native void bA(Object[] var0) throws Throwable;

   public static native void bK(String var0);

   private native Class bx(Object[] var1) throws Throwable;

   public static native String bL();

   private static native Object bP(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite bT(Lookup var0, String var1, MethodType var2);
}
