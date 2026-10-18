package sixtwo;

import java.util.concurrent.CompletableFuture;
import native.Loader;

public class oc {
   private final byte[] JfvPh;
   private static long ZGgIX;

   public oc(byte[] var1) {
      this.JfvPh = var1;
   }

   static {
      Loader.doInit(oc.class);
      _1d46882e67edd745344f721f66ee78a9();
   }

   public static native CompletableFuture<oc> cBK(String var0);

   public static native oc cBJ(String var0);

   public static native CompletableFuture<oc> cBL(String var0);

   public native void cBM();

   public native byte[] cBN();

   private static native MatchException cBO(MatchException var0);

   private static native void _1d46882e67edd745344f721f66ee78a9();
}
