package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.block.BlockState;

public class fL extends gg {
   private final cA CFGfw;
   private final cJ ryfBX;
   private final cA Hykwk;
   private final mT xBzWg;
   private final ol CwHuM;
   private boolean aLWOy;
   private static long nhtSN;
   private static String[] XugXT;
   private static String[] HzpGA;
   private static Map njIli;
   private static long[] zhmCi;
   private static Integer[] nDlqe;
   private static Map SNXwO;

   private static native void _31c3a3d62932965f4ffe30371de80c96();

   public fL() {
      long var1 = nhtSN ^ 101916258574058L;
      super(gf.aZL(22, false, gh.xwjCw));
      int[] var10004 = new int[8];
      var10004[0] = 67;
      var10004[1] = 111;
      var10004[2] = 111;
      var10004[3] = 108;
      var10004[4] = 100;
      var10004[5] = 111;
      var10004[6] = 119;
      var10004[7] = 110;
      this.CFGfw = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms");
      var10004 = new int[11];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 116;
      var10004[3] = 117;
      var10004[4] = 114;
      var10004[5] = 110;
      var10004[6] = 32;
      var10004[7] = 66;
      var10004[8] = 97;
      var10004[9] = 99;
      var10004[10] = 107;
      this.ryfBX = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[12];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 116;
      var10004[3] = 117;
      var10004[4] = 114;
      var10004[5] = 110;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 101;
      var10004[9] = 108;
      var10004[10] = 97;
      var10004[11] = 121;
      this.Hykwk = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms");
      this.xBzWg = mT.cpz();
      this.CwHuM = new ol(this);
      this.aLWOy = true;
   }

   static {
      Loader.doInit(fL.class);
      _31c3a3d62932965f4ffe30371de80c96();
   }

   private static native String aVi(byte[] var0);

   private static native CallSite aVo(Lookup var0, String var1, MethodType var2);

   private static native CallSite aVl(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aVf(gH$th var1);

   private static native Object aVk(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aVm(int var0, long var1);

   private native void aVg(BlockState var1);

   private static native MatchException aVh(MatchException var0);

   private static native int aVn(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aVj(int var0, long var1);

   @Override
   public native void YO();
}
