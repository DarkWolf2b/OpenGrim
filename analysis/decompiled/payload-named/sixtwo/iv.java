package sixtwo;

import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CopyOnWriteArrayList;
import native.Loader;

public class iv {
   private final it QSnra;
   private volatile iu iMNtZ;
   private final CopyOnWriteArrayList<Runnable> YBBgC;
   private static String FjYKk;
   private static long bvKIY;
   private static String lrwfu;

   public iv(it var1) {
      long var2 = bvKIY ^ 103498249760156L;
      String var10000 = bnQ();
      super();
      String var4 = var10000;

      try {
         this.YBBgC = new CopyOnWriteArrayList<>();
         this.QSnra = var1;
         if (var4 == null) {
            iS.bwK("IwRUt");
         }
      } catch (MatchException var5) {
         throw bnR(var5);
      }
   }

   static {
      Loader.doInit(iv.class);
      _1c48381a34d1c5da094b65381060527d();
   }

   public static native void bnP(String var0);

   public static native String bnQ();

   private native void bnJ();

   private static native MatchException bnR(MatchException var0);

   public native void bnI(Runnable var1);

   public native void bnK(iu var1);

   public native CompletableFuture<iu> bnL();

   private static native String bnS(byte[] var0);

   public native iu bnM();

   private static native void _1c48381a34d1c5da094b65381060527d();
}
