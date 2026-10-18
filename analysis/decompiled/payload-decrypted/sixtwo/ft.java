package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;

public class ft extends gg {
   private final cC VLpcw;
   private final ct elFbq;
   private final cu wztVz;
   private final cu uaqBp;
   private final cC jOgPB;
   private final cu DExMY;
   private final cJ ZEypD;
   private final cJ CcIwq;
   private final cC ZskBX;
   private final ol xQcjf;
   private boolean dYjds;
   private boolean cDIyq;
   private int bxQEh;
   private Item gyalZ;
   private boolean YmGIh;
   private int ZpJKG;
   private static long bDphN;
   private static long[] RtVVv;
   private static Integer[] QXBqm;
   private static Map jqCWG;

   private static native void _1846d37df278f08b3899a429f067ffc2();

   public ft() {
      long var1 = bDphN ^ 28450188321897L;
      super(gf.aZL(144, false, gh.xwjCw));
      int[] var10004 = new int[9];
      var10004[0] = 69;
      var10004[1] = 97;
      var10004[2] = 116;
      var10004[3] = 32;
      var10004[4] = 66;
      var10004[5] = 101;
      var10004[6] = 108;
      var10004[7] = 111;
      var10004[8] = 119;
      this.VLpcw = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.0).Vx(100.0).VA(40.0).Vz("%");
      var10004 = new int[9];
      var10004[0] = 69;
      var10004[1] = 97;
      var10004[2] = 116;
      var10004[3] = 32;
      var10004[4] = 85;
      var10004[5] = 110;
      var10004[6] = 116;
      var10004[7] = 105;
      var10004[8] = 108;
      this.elFbq = new ct(this, mr.clS(var10004));
      ct var10003 = this.elFbq;
      var10004 = new int[7];
      var10004[0] = 69;
      var10004[1] = 97;
      var10004[2] = 116;
      var10004[3] = 32;
      var10004[4] = 79;
      var10004[5] = 110;
      var10004[6] = 101;
      this.wztVz = new cu(var10003, mr.clS(var10004));
      var10003 = this.elFbq;
      var10004 = new int[17];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 97;
      var10004[3] = 99;
      var10004[4] = 104;
      var10004[5] = 101;
      var10004[6] = 115;
      var10004[7] = 32;
      var10004[8] = 84;
      var10004[9] = 104;
      var10004[10] = 114;
      var10004[11] = 101;
      var10004[12] = 115;
      var10004[13] = 104;
      var10004[14] = 111;
      var10004[15] = 108;
      var10004[16] = 100;
      this.uaqBp = new cu(var10003, mr.clS(var10004)).SY();
      var10004 = new int[13];
      var10004[0] = 69;
      var10004[1] = 97;
      var10004[2] = 116;
      var10004[3] = 32;
      var10004[4] = 84;
      var10004[5] = 104;
      var10004[6] = 114;
      var10004[7] = 101;
      var10004[8] = 115;
      var10004[9] = 104;
      var10004[10] = 111;
      var10004[11] = 108;
      var10004[12] = 100;
      this.jOgPB = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%");
      var10003 = this.elFbq;
      var10004 = new int[11];
      var10004[0] = 70;
      var10004[1] = 117;
      var10004[2] = 108;
      var10004[3] = 108;
      var10004[4] = 32;
      var10004[5] = 72;
      var10004[6] = 101;
      var10004[7] = 97;
      var10004[8] = 108;
      var10004[9] = 116;
      var10004[10] = 104;
      this.DExMY = new cu(var10003, mr.clS(var10004));
      var10004 = new int[13];
      var10004[0] = 69;
      var10004[1] = 97;
      var10004[2] = 116;
      var10004[3] = 32;
      var10004[4] = 69;
      var10004[5] = 110;
      var10004[6] = 99;
      var10004[7] = 104;
      var10004[8] = 97;
      var10004[9] = 110;
      var10004[10] = 116;
      var10004[11] = 101;
      var10004[12] = 100;
      this.ZEypD = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[16];
      var10004[0] = 87;
      var10004[1] = 104;
      var10004[2] = 101;
      var10004[3] = 110;
      var10004[4] = 32;
      var10004[5] = 80;
      var10004[6] = 108;
      var10004[7] = 97;
      var10004[8] = 121;
      var10004[9] = 101;
      var10004[10] = 114;
      var10004[11] = 32;
      var10004[12] = 65;
      var10004[13] = 119;
      var10004[14] = 97;
      var10004[15] = 121;
      this.CcIwq = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[18];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 97;
      var10004[5] = 110;
      var10004[6] = 99;
      var10004[7] = 101;
      var10004[8] = 32;
      var10004[9] = 84;
      var10004[10] = 104;
      var10004[11] = 114;
      var10004[12] = 101;
      var10004[13] = 115;
      var10004[14] = 104;
      var10004[15] = 111;
      var10004[16] = 108;
      var10004[17] = 100;
      this.ZskBX = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.0).Vx(30.0).VA(6.0);
      this.xQcjf = new ol(this);
      this.bxQEh = -1;
      this.ZpJKG = -1;
      this.jOgPB.Vf(this.uaqBp::SZ);
      this.ZskBX.Vf(this.CcIwq::WF);
   }

   static {
      Loader.doInit(ft.class);
      _1846d37df278f08b3899a429f067ffc2();
   }

   private native void aPV(boolean var1);

   private native void aPX();

   private native void aQd(float var1);

   private static native MatchException aQh(MatchException var0);

   private native boolean aPZ(float var1);

   private native oI aQa();

   private static native int aQi(int var0, long var1);

   private static native CallSite aQk(Lookup var0, String var1, MethodType var2);

   private static native int aQj(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native boolean aPY(float var1);

   private native void aQc();

   private native boolean aQb(ItemStack var1);

   private native void aPW();

   private native ItemStack aQf(boolean var1);

   private native void aQe();

   @hG
   public native void aPU(gH$th var1);

   @Override
   public native void YO();
}
