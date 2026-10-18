package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;
import net.minecraft.client.texture.AbstractTexture;

public final class nY {
   private Map<String, ob> mhgMR;
   private static int[] hwpdj;
   private static long yuJfK;
   private static String[] zwMvo;
   private static String[] WYwKn;
   private static Map DPRqk;
   private static long qRzfM;

   static {
      Loader.doInit(nY.class);
      _6fedacbd020f89021887dfb43c03644f();
   }

   private native CompletableFuture<Void> cAG();

   public native void cAF();

   private native CompletableFuture<Void> cAH(Throwable var1);

   private static native CallSite cAS(Lookup var0, String var1, MethodType var2);

   public native CompletableFuture<Void> cAD();

   private static native String cAQ(int var0, long var1);

   private static native Object cAR(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native void cAM(int[] var0);

   public native AbstractTexture cAE(String var1);

   public static native int[] cAN();

   private static native Throwable cAO(Throwable var0);

   private static native String cAP(byte[] var0);

   private native void cAI(Map<String, ob> var1);

   private static native void _6fedacbd020f89021887dfb43c03644f();
}
