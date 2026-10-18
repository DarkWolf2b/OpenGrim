package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Items;

public class dS extends gg {
   private final ct CFOLa;
   private final cu CeZar;
   private final cu UeXgv;
   private final cv gWbBh;
   private final cw Shkca;
   private final cw FoNvc;
   private final cK xmgVN;
   private static long bOPYi;
   private static long[] MuwUi;
   private static Integer[] MVuFv;
   private static Map kpzZC;

   private static native void _3323b79ccdee7f922ab8849d424294e5();

   public dS() {
      long var1 = bOPYi ^ 11157974212133L;
      super(gf.aZL(55, false, gh.qBzlZ));
      int[] var10004 = new int[6];
      var10004[0] = 73;
      var10004[1] = 103;
      var10004[2] = 110;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 101;
      this.CFOLa = new ct(this, mr.clS(var10004));
      this.CeZar = new cu(
         this.CFOLa,
         mr.clS(
            new int[]{65, 108, 108}
         )
      );
      ct var10003 = this.CFOLa;
      var10004 = new int[9];
      var10004[0] = 83;
      var10004[1] = 112;
      var10004[2] = 101;
      var10004[3] = 99;
      var10004[4] = 105;
      var10004[5] = 102;
      var10004[6] = 105;
      var10004[7] = 101;
      var10004[8] = 100;
      this.UeXgv = new cu(var10003, mr.clS(var10004));
      var10004 = new int[7];
      var10004[0] = 87;
      var10004[1] = 111;
      var10004[2] = 114;
      var10004[3] = 107;
      var10004[4] = 32;
      var10004[5] = 79;
      var10004[6] = 110;
      this.gWbBh = new cv(this, mr.clS(var10004)).Tm(1);
      this.Shkca = new cw(
            this.gWbBh,
            mr.clS(
               new int[]{
                  80,
                  108,
                  97,
                  99,
                  101
               }
            )
         )
         .Tz();
      this.FoNvc = new cw(
            this.gWbBh,
            mr.clS(
               new int[]{
                  66,
                  114,
                  101,
                  97,
                  107
               }
            )
         )
         .Tz();
      var10004 = new int[6];
      var10004[0] = 66;
      var10004[1] = 108;
      var10004[2] = 111;
      var10004[3] = 99;
      var10004[4] = 107;
      var10004[5] = 115;
      this.xmgVN = new cK(this, mr.clS(var10004)).WM(jc.GjreY).WN(Items.COBWEB, Items.PAINTING);
      this.xmgVN.Vf(this.UeXgv::SZ);
   }

   static {
      Loader.doInit(dS.class);
      _3323b79ccdee7f922ab8849d424294e5();
   }

   private static native int apG(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int apF(int var0, long var1);

   private static native CallSite apH(Lookup var0, String var1, MethodType var2);

   @hG
   public native void apC(hm var1);

   private static native MatchException apE(MatchException var0);

   private native boolean apD();
}
