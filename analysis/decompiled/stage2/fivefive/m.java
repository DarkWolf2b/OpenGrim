package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class m {
   private static boolean USVvy;
   private static long FneyY;
   private static String[] ORltd;
   private static String[] cBmIi;
   private static Map hycFd;
   private static long MpcSW;

   public m() {
   }

   static {
      Loader.doInit(m.class);
      _6918f5ee01b6e3e5cd5b95663fe34dba();
   }

   private static native CallSite bw(Lookup var0, String var1, MethodType var2);

   private static native Object bv(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native void bo(Object[] var1);

   public static native void bp(boolean var0);

   private static native String bt(byte[] var0);

   public static native boolean br();

   public static native boolean bq();

   private static native RuntimeException bs(RuntimeException var0);

   private static native void _6918f5ee01b6e3e5cd5b95663fe34dba();

   private static native String bu(int var0, long var1);

   public native void bn(Object[] var1);
}
