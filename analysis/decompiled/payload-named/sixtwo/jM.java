package sixtwo;

import java.io.Closeable;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;

public class jM implements Closeable {
   private final lV zfUkH;
   private boolean fVywk;
   private static long pnBkR;
   private static String[] fCAKE;
   private static String[] ZkwRT;
   private static Map nmqtl;

   public jM(byte[] var1, lS var2) {
      this.zfUkH = lT.ciQ().createShader(var1, var2);
   }

   static {
      Loader.doInit(jM.class);
      _18ff504f06d16f9d4ce773f137598732();
   }

   @Override
   public native void close();

   private static native String bJg(byte[] var0);

   public native lV bJb();

   private static native Throwable bJf(Throwable var0);

   private static native String bJh(int var0, long var1);

   public static native CompletableFuture<byte[]> bJa(String var0);

   private static native Object bJi(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite bJj(Lookup var0, String var1, MethodType var2);

   private static native void _18ff504f06d16f9d4ce773f137598732();
}
