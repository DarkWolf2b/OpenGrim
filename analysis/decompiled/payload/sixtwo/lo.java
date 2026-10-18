package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;

public class lo {
   private CompletableFuture<byte[]> cGYYJ;
   private CompletableFuture<byte[]> QztRs;
   private static long IhiKw;
   private static String[] BfKyU;
   private static String[] whvPK;
   private static Map bUPgU;

   static {
      Loader.doInit(lo.class);
      _270dc2ca2840be8f4d53c02699988df3();
   }

   public native lo bZX(String var1);

   public native CompletableFuture<lp> bZZ();

   public native lo bZY(String var1);

   private static native RuntimeException cae(RuntimeException var0);

   private static native Object cah(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String cag(int var0, long var1);

   private static native CallSite cai(Lookup var0, String var1, MethodType var2);

   private static native String caf(byte[] var0);

   private static native void _270dc2ca2840be8f4d53c02699988df3();
}
