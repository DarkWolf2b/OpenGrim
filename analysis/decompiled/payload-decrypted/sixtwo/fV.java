package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fV extends gg {
   private final cJ YELYg;
   private final cJ LplVs;
   private final ct sgXyu;
   private final cu GhxZC;
   private final cu mZCNn;
   private final cu Oiypq;
   private final cu JFraG;
   private final cy gJTkT;
   private final cJ dczoz;
   private final cy oNtMH;
   private static long fVUJp;
   private static long[] LkpRK;
   private static Integer[] hGStG;
   private static Map byJrA;

   public fV() {
      long var1 = fVUJp ^ 50220215738545L;
      super(gf.aZL(105, false, gh.KfAlY).aZS(false).aZU(true));
      int[] var10004 = new int[10];
      var10004[0] = 67;
      var10004[1] = 108;
      var10004[2] = 101;
      var10004[3] = 97;
      var10004[4] = 114;
      var10004[5] = 32;
      var10004[6] = 67;
      var10004[7] = 104;
      var10004[8] = 97;
      var10004[9] = 116;
      this.YELYg = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[13];
      var10004[0] = 67;
      var10004[1] = 108;
      var10004[2] = 101;
      var10004[3] = 97;
      var10004[4] = 110;
      var10004[5] = 32;
      var10004[6] = 83;
      var10004[7] = 116;
      var10004[8] = 114;
      var10004[9] = 105;
      var10004[10] = 110;
      var10004[11] = 103;
      var10004[12] = 115;
      this.LplVs = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[11];
      var10004[0] = 80;
      var10004[1] = 111;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 32;
      var10004[5] = 65;
      var10004[6] = 99;
      var10004[7] = 116;
      var10004[8] = 105;
      var10004[9] = 111;
      var10004[10] = 110;
      this.sgXyu = new ct(this, mr.clS(var10004));
      ct var10003 = this.sgXyu;
      var10004 = new int[11];
      var10004[0] = 68;
      var10004[1] = 101;
      var10004[2] = 108;
      var10004[3] = 101;
      var10004[4] = 116;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 70;
      var10004[8] = 105;
      var10004[9] = 108;
      var10004[10] = 101;
      this.GhxZC = new cu(var10003, mr.clS(var10004));
      var10003 = this.sgXyu;
      var10004 = new int[12];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 112;
      var10004[3] = 108;
      var10004[4] = 97;
      var10004[5] = 99;
      var10004[6] = 101;
      var10004[7] = 32;
      var10004[8] = 70;
      var10004[9] = 105;
      var10004[10] = 108;
      var10004[11] = 101;
      this.mZCNn = new cu(var10003, mr.clS(var10004));
      fX.aYu();
      ct var10 = this.sgXyu;
      int[] var10005 = new int[13];
      var10005[0] = 67;
      var10005[1] = 108;
      var10005[2] = 111;
      var10005[3] = 115;
      var10005[4] = 101;
      var10005[5] = 32;
      var10005[6] = 72;
      var10005[7] = 97;
      var10005[8] = 110;
      var10005[9] = 100;
      var10005[10] = 108;
      var10005[11] = 101;
      var10005[12] = 115;
      this.Oiypq = new cu(var10, mr.clS(var10005));
      this.JFraG = new cu(
         this.sgXyu,
         mr.clS(
            new int[]{
               78,
               111,
               110,
               101
            }
         )
      );
      var10005 = new int[12];
      var10005[0] = 82;
      var10005[1] = 101;
      var10005[2] = 112;
      var10005[3] = 108;
      var10005[4] = 97;
      var10005[5] = 99;
      var10005[6] = 101;
      var10005[7] = 32;
      var10005[8] = 70;
      var10005[9] = 105;
      var10005[10] = 108;
      var10005[11] = 101;
      this.gJTkT = new cy(this, mr.clS(var10005)).Un(2048).Up("");
      var10005 = new int[13];
      var10005[0] = 67;
      var10005[1] = 117;
      var10005[2] = 115;
      var10005[3] = 116;
      var10005[4] = 111;
      var10005[5] = 109;
      var10005[6] = 32;
      var10005[7] = 77;
      var10005[8] = 111;
      var10005[9] = 100;
      var10005[10] = 32;
      var10005[11] = 73;
      var10005[12] = 100;
      this.dczoz = new cJ(this, mr.clS(var10005)).WE(false);
      var10005 = new int[6];
      var10005[0] = 77;
      var10005[1] = 111;
      var10005[2] = 100;
      var10005[3] = 32;
      var10005[4] = 73;
      var10005[5] = 100;
      this.oNtMH = new cy(this, mr.clS(var10005)).Un(32).Up("");

      try {
         this.gJTkT.Vf(this.mZCNn::SZ);
         this.oNtMH.Vf(this.dczoz::WF);
         if (iS.bwL() == null) {
            fX.aYt(new int[5]);
         }
      } catch (MatchException var4) {
         throw aXV(var4);
      }
   }

   static {
      Loader.doInit(fV.class);
      _d9531e8e50a6ac533da20314017f39c4();
   }

   @Override
   public native void aaj();

   private static native MatchException aXV(MatchException var0);

   private static native CallSite aXY(Lookup var0, String var1, MethodType var2);

   private static native int aXX(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aXW(int var0, long var1);

   private static native void _d9531e8e50a6ac533da20314017f39c4();
}
