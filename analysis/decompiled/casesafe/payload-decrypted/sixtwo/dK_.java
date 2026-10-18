package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class dK extends gg {
   private final cv zrgbM;
   private final cw ImshN;
   private final cw CzAnG;
   private final cJ QiyGI;
   private mB vuasL;
   private float jcQsa;
   private static long UtFqN;
   private static long[] MxRqJ;
   private static Integer[] krUWC;
   private static Map gnfiQ;

   private static native void _c519c9ae2f6445b40eac7d3bfde68b13();

   public dK() {
      long var1 = UtFqN ^ 65989606487398L;
      super(gf.aZL(130, false, gh.qBzlZ));
      int[] var10004 = new int[9];
      var10004[0] = 87;
      var10004[1] = 111;
      var10004[2] = 114;
      var10004[3] = 107;
      var10004[4] = 32;
      var10004[5] = 87;
      var10004[6] = 105;
      var10004[7] = 116;
      var10004[8] = 104;
      this.zrgbM = new cv(this, mr.clS(var10004));
      cv var10003 = this.zrgbM;
      var10004 = new int[9];
      var10004[0] = 65;
      var10004[1] = 117;
      var10004[2] = 116;
      var10004[3] = 111;
      var10004[4] = 32;
      var10004[5] = 84;
      var10004[6] = 114;
      var10004[7] = 97;
      var10004[8] = 112;
      this.ImshN = new cw(var10003, mr.clS(var10004));
      var10003 = this.zrgbM;
      var10004 = new int[8];
      var10004[0] = 65;
      var10004[1] = 117;
      var10004[2] = 116;
      var10004[3] = 111;
      var10004[4] = 32;
      var10004[5] = 87;
      var10004[6] = 101;
      var10004[7] = 98;
      this.CzAnG = new cw(var10003, mr.clS(var10004));
      var10004 = new int[12];
      var10004[0] = 73;
      var10004[1] = 103;
      var10004[2] = 110;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 87;
      var10004[8] = 97;
      var10004[9] = 108;
      var10004[10] = 108;
      var10004[11] = 115;
      this.QiyGI = new cJ(this, mr.clS(var10004)).WE(true);
   }

   static {
      Loader.doInit(dK.class);
      _c519c9ae2f6445b40eac7d3bfde68b13();
   }

   public native cw ani();

   private native void and(boolean var1);

   private static native int ann(int var0, long var1);

   public native cv ang();

   @hG
   public native void ana(gv var1);

   private native void ane();

   private static native int ano(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native float anl();

   private native void anf();

   public native cw anh();

   @hG
   public native void anb(gH$th var1);

   private static native MatchException anm(MatchException var0);

   private static native CallSite anp(Lookup var0, String var1, MethodType var2);

   public native mB ank();

   public native cJ anj();

   @hG
   public native void anc(gV var1);

   @Override
   public native void YO();
}
