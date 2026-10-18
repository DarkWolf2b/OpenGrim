package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.player.PlayerEntity;

public class eI extends gg {
   private final cJ tOxMr;
   private final ct yTUFP;
   private final cu TEwfc;
   private final cu cKxMx;
   private final cJ ytGpS;
   private final cA Eppcp;
   private final ol otZOf;
   private boolean NLSbB;
   private PlayerEntity yWkAS;
   private static long HWETW;
   private static String GGWXd;
   private static long[] ESWVg;
   private static Integer[] gFMwa;
   private static Map CSkNc;

   public native PlayerEntity ayk();

   private native void ayb();

   @hG
   public native void axZ(gH$th var1);

   public native boolean ayj();

   private static native String aym(byte[] var0);

   private native void aya();

   @hG
   public native void axX(gM var1);

   @hG
   public native void axY(gL$tk var1);

   public native cJ ayg();

   private static native MatchException ayl(MatchException var0);

   private static native int ayn(int var0, long var1);

   public native cu aye();

   public native cJ ayc();

   public native cu ayf();

   public native cA ayh();

   public native ol ayi();

   private static native CallSite ayp(Lookup var0, String var1, MethodType var2);

   public native ct ayd();

   private static native int ayo(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public eI() {
      long var1 = HWETW ^ 99207167628814L;
      super(gf.aZL(150, false, gh.xwjCw));
      int[] var10004 = new int[12];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 110;
      var10004[4] = 103;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 65;
      var10004[8] = 114;
      var10004[9] = 109;
      var10004[10] = 111;
      var10004[11] = 114;
      this.tOxMr = new cJ(this, mr.clS(var10004));
      var10004 = new int[19];
      var10004[0] = 65;
      var10004[1] = 114;
      var10004[2] = 109;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 32;
      var10004[6] = 67;
      var10004[7] = 104;
      var10004[8] = 97;
      var10004[9] = 110;
      var10004[10] = 103;
      var10004[11] = 101;
      var10004[12] = 32;
      var10004[13] = 84;
      var10004[14] = 105;
      var10004[15] = 109;
      var10004[16] = 105;
      var10004[17] = 110;
      var10004[18] = 103;
      this.yTUFP = new ct(this, mr.clS(var10004));
      ct var10003 = this.yTUFP;
      var10004 = new int[15];
      var10004[0] = 65;
      var10004[1] = 102;
      var10004[2] = 116;
      var10004[3] = 101;
      var10004[4] = 114;
      var10004[5] = 32;
      var10004[6] = 83;
      var10004[7] = 112;
      var10004[8] = 101;
      var10004[9] = 97;
      var10004[10] = 114;
      var10004[11] = 32;
      var10004[12] = 72;
      var10004[13] = 105;
      var10004[14] = 116;
      this.TEwfc = new cu(var10003, mr.clS(var10004));
      var10003 = this.yTUFP;
      var10004 = new int[15];
      var10004[0] = 66;
      var10004[1] = 101;
      var10004[2] = 102;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 77;
      var10004[8] = 97;
      var10004[9] = 99;
      var10004[10] = 101;
      var10004[11] = 32;
      var10004[12] = 72;
      var10004[13] = 105;
      var10004[14] = 116;
      this.cKxMx = new cu(var10003, mr.clS(var10004));
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
      this.ytGpS = new cJ(this, mr.clS(var10004)).WE(true);
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
      this.Eppcp = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(GGWXd);
      this.otZOf = new ol(this);
      this.yTUFP.Vf(this.tOxMr::WF);
      this.Eppcp.Vf(this.ytGpS::WF);
   }

   static {
      Loader.doInit(eI.class);
      _cdcae71d6367009ee05d59056e6b1245();
   }

   private static native void _cdcae71d6367009ee05d59056e6b1245();

   @Override
   public native void YO();
}
