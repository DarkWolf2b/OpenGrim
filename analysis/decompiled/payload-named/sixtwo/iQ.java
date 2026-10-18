package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;

public class iQ {
   private final iN qxcSr;
   private final String CUNHl;
   private final iP twrIE;
   private final iK jcfyd;
   private final iv uWkVQ;
   private boolean nVklG;
   private final CompletableFuture<Void> qcuam;
   private static boolean rNaCY;
   private static long MrvMF;
   private static String[] oACCP;
   private static String[] BiDOI;
   private static Map AEinN;
   private static long[] VAzWW;
   private static Integer[] iqBhb;
   private static Map iFkNo;
   private static long QWoXv;

   public static native void bwb(boolean var0);

   private static native int bwj(int var0, long var1);

   private static native String bwg(int var0, long var1);

   private static native Object bwh(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String bwf(byte[] var0);

   public static native boolean bwc();

   private static native int bwk(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite bwl(Lookup var0, String var1, MethodType var2);

   public iQ(iK var1, iv var2) {
      long var3 = MrvMF ^ 41581153983554L;
      boolean var10000 = bwd();
      super();
      this.CUNHl = bwi<"c">(31667, 6181173594500064781L ^ var3);
      boolean var5 = var10000;

      try {
         this.nVklG = false;
         this.qcuam = new CompletableFuture<>();
         this.jcfyd = var1;
         this.uWkVQ = var2;
         this.twrIE = new iP();
         this.qxcSr = new iN(iI.bsC(ry.dkB().dkP()));
         var2.bnI(this::bvk);
         if (!var5) {
            iS.bwK("DU1jrc");
         }
      } catch (MatchException var6) {
         throw bwe(var6);
      }
   }

   static {
      Loader.doInit(iQ.class);
      _51823ea6c52cc2438437060d0f1dc7a6();
   }

   public native iP bvp();

   public native iK bvq();

   public native iv bvr();

   public native boolean bvs();

   public native iN bvn();

   public native void buX(int[] var1, int[] var2, iL var3);

   private static native CallSite bwi(Lookup var0, String var1, MethodType var2);

   public native void bvm();

   public native String bvo();

   public native CompletableFuture<iM> bvc(String var1);

   public native CompletableFuture<iM> bva(String var1, int[] var2, int[] var3, iL var4, boolean var5);

   public native CompletableFuture<Boolean> bvf(iM var1);

   public static native boolean bwd();

   private native void bvk();

   public native CompletableFuture<iO> buZ(String var1);

   public native CompletableFuture<Boolean> bvg();

   public native CompletableFuture<Boolean> buY(String var1);

   private native void bvi(List<iO> var1);

   public native CompletableFuture<Void> bvt();

   public native CompletableFuture<List<iO>> buW();

   public native CompletableFuture<iM> bvd(String var1);

   private native void bvj();

   public native CompletableFuture<Void> buS();

   public native void buT();

   public native boolean buU(cB var1);

   public native boolean buV(iS var1, cB var2);

   private static native MatchException bwe(MatchException var0);

   public native CompletableFuture<iM> bvb(String var1);

   public native CompletableFuture<iM> bve(String var1);

   private native CompletableFuture<Void> bvh();

   private native void bvl(iM var1);

   private static native void _51823ea6c52cc2438437060d0f1dc7a6();
}
