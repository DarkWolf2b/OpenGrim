package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;

public class iB {
   private final iA NeyGX;
   private final ix CJxKq;
   private final iv sTdzs;
   private final iC WtxwN;
   private final String gQoVO;
   private boolean skPbg;
   private static iS[] mKwrj;
   private static long SaDmh;
   private static String[] qKAOd;
   private static String[] hlrVF;
   private static Map cUKLP;

   public iB(ix var1, iv var2) {
      long var3 = SaDmh ^ 114906485480752L;
      super();
      this.gQoVO = bqH<"m">(3863, 8680004115419122975L ^ var3);
      bqC();
      this.skPbg = false;
      this.CJxKq = var1;

      try {
         this.sTdzs = var2;
         this.NeyGX = new iA();
         this.WtxwN = new iC();
         var2.bnI(this::bqd);
         if (iS.bwL() == null) {
            bqB(new iS[1]);
         }
      } catch (MatchException var6) {
         throw bqD(var6);
      }
   }

   static {
      Loader.doInit(iB.class);
      _492103ed719575fed4a2d58088d5c153();
   }

   public static native iS[] bqC();

   private static native MatchException bqD(MatchException var0);

   public static native void bqB(iS[] var0);

   private static native CallSite bqH(Lookup var0, String var1, MethodType var2);

   private native void bqd();

   private native void bpU();

   private native void bpV();

   public native CompletableFuture<Boolean> bpY(String var1);

   public native CompletableFuture<iy> bpX(iD var1);

   public native String bqi();

   private static native Object bqG(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String bqE(byte[] var0);

   public native iv bqg();

   public native CompletableFuture<Boolean> bpZ(String var1);

   public native ix bqf();

   public native iA bqe();

   public native boolean bqj();

   private static native String bqF(int var0, long var1);

   private static native void _492103ed719575fed4a2d58088d5c153();

   public native iC bqh();

   public native void bpW();

   public native CompletableFuture<iy> bqb(iy var1, List<nf> var2);

   public native CompletableFuture<Boolean> bqc(iy var1);

   public native CompletableFuture<iy> bqa(String var1, iD var2);
}
