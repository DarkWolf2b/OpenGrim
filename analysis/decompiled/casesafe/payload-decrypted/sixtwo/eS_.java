package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;

public class eS extends gg {
   private final ct ZPhzU;
   private final cu eQeWA;
   private final cu ZDYKK;
   private final cJ dVnxZ;
   private final cC FXDzg;
   private final cA GEHFQ;
   private final cC irxdG;
   private final ol cVZni;
   private final mT Dwgkb;
   private final mW VYWYG;
   private boolean cRMrD;
   private boolean EiuGH;
   private int UKQaD;
   private static long muwCI;
   private static String[] tZjZX;
   private static String[] zfqcZ;
   private static Map SCZFK;
   private static long[] QoRIe;
   private static Integer[] rRLeM;
   private static Map eJHIG;

   public eS() {
      long var1 = muwCI ^ 132275791603575L;
      super(gf.aZL(117, false, gh.xwjCw));
      int[] var10004 = new int[7];
      var10004[0] = 84;
      var10004[1] = 114;
      var10004[2] = 105;
      var10004[3] = 103;
      var10004[4] = 103;
      var10004[5] = 101;
      var10004[6] = 114;
      this.ZPhzU = new ct(this, mr.clS(var10004)).SO(0);
      this.eQeWA = new cu(
         this.ZPhzU,
         mr.clS(
            new int[]{
               65,
               117,
               116,
               111
            }
         )
      );
      ct var10003 = this.ZPhzU;
      var10004 = new int[9];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 32;
      var10004[3] = 65;
      var10004[4] = 116;
      var10004[5] = 116;
      var10004[6] = 97;
      var10004[7] = 99;
      var10004[8] = 107;
      this.ZDYKK = new cu(var10003, mr.clS(var10004));
      var10004 = new int[12];
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
      this.dVnxZ = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[17];
      var10004[0] = 77;
      var10004[1] = 105;
      var10004[2] = 110;
      var10004[3] = 32;
      var10004[4] = 70;
      var10004[5] = 97;
      var10004[6] = 108;
      var10004[7] = 108;
      var10004[8] = 32;
      var10004[9] = 68;
      var10004[10] = 105;
      var10004[11] = 115;
      var10004[12] = 116;
      var10004[13] = 97;
      var10004[14] = 110;
      var10004[15] = 99;
      var10004[16] = 101;
      this.FXDzg = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5).Vz(" blocks");
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
      this.GEHFQ = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms");
      var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 110;
      var10004[4] = 99;
      var10004[5] = 101;
      this.irxdG = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz("%");
      this.cVZni = new ol(this);
      this.Dwgkb = mT.cpz();
      this.VYWYG = new mW();
      this.UKQaD = -1;
   }

   static {
      Loader.doInit(eS.class);
      _6c3f9fef805ed141ce14c78ae08c1661();
   }

   private static native void _6c3f9fef805ed141ce14c78ae08c1661();

   private static native CallSite aDt(Lookup var0, String var1, MethodType var2);

   public native cC aDf();

   public native ol aDg();

   public native mT aDh();

   public native mW aDi();

   private native void aCT();

   private native boolean aCU(PlayerEntity var1);

   public native ct aCZ();

   public native boolean aDj();

   public native boolean aDk();

   private native void aCV();

   public native cu aDa();

   public native cA aDe();

   public native int aDl();

   private static native MatchException aDm(MatchException var0);

   @hG
   public native void aCP(gH$th var1);

   private native void aCS();

   private native boolean aCQ(PlayerEntity var1);

   private static native CallSite aDq(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aCN(gM var1);

   public native boolean aCW(LivingEntity var1);

   public native boolean aCX();

   public native boolean aCY();

   public native cJ aDc();

   @hG
   public native void aCO(gZ$tt var1);

   private native void aCR(PlayerEntity var1);

   public native cu aDb();

   public native cC aDd();

   private static native Object aDp(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aDo(int var0, long var1);

   private static native int aDr(int var0, long var1);

   private static native int aDs(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aDn(byte[] var0);

   @Override
   public native void YO();
}
