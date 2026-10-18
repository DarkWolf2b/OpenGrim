package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.Items;

public class eW extends gg {
   private final cA oYVcq;
   private final cA mwZKu;
   private final cJ QUOiu;
   private final cD VBJFM;
   private final cK vhDcM;
   private final cJ NbNqt;
   private final ct wjYZb;
   private final cu IMMQw;
   private final cu IAuqT;
   private final cu ABaQX;
   private final cJ AYUNa;
   private final mT qcmQt;
   private final mT cCsEl;
   private final ol LSGzZ;
   private boolean gdpqr;
   private boolean salDh;
   private boolean sXTCM;
   private int eresX;
   private static long hkKrh;
   private static String[] viwpz;
   private static String[] sdKFC;
   private static Map sbnXU;
   private static long[] macbe;
   private static Integer[] UnlEh;
   private static Map CdQxi;

   public eW() {
      long var1 = hkKrh ^ 135693419378867L;
      super(gf.aZL(29, false, gh.xwjCw));
      int[] var10004 = new int[11];
      var10004[0] = 80;
      var10004[1] = 108;
      var10004[2] = 97;
      var10004[3] = 99;
      var10004[4] = 101;
      var10004[5] = 32;
      var10004[6] = 68;
      var10004[7] = 101;
      var10004[8] = 108;
      var10004[9] = 97;
      var10004[10] = 121;
      this.oYVcq = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(20.0).UI(0.0, 0.0).UH(" ticks");
      var10004 = new int[12];
      var10004[0] = 83;
      var10004[1] = 119;
      var10004[2] = 105;
      var10004[3] = 116;
      var10004[4] = 99;
      var10004[5] = 104;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 101;
      var10004[9] = 108;
      var10004[10] = 97;
      var10004[11] = 121;
      this.mwZKu = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(20.0).UI(0.0, 0.0).UH(" ticks");
      var10004 = new int[9];
      var10004[0] = 83;
      var10004[1] = 112;
      var10004[2] = 111;
      var10004[3] = 111;
      var10004[4] = 102;
      var10004[5] = 32;
      var10004[6] = 67;
      var10004[7] = 80;
      var10004[8] = 83;
      this.QUOiu = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[14];
      var10004[0] = 65;
      var10004[1] = 99;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 118;
      var10004[5] = 97;
      var10004[6] = 116;
      var10004[7] = 105;
      var10004[8] = 111;
      var10004[9] = 110;
      var10004[10] = 32;
      var10004[11] = 75;
      var10004[12] = 101;
      var10004[13] = 121;
      this.VBJFM = new cD(this, mr.clS(var10004)).VO(1);
      var10004 = new int[15];
      var10004[0] = 87;
      var10004[1] = 111;
      var10004[2] = 114;
      var10004[3] = 107;
      var10004[4] = 32;
      var10004[5] = 87;
      var10004[6] = 105;
      var10004[7] = 116;
      var10004[8] = 104;
      var10004[9] = 32;
      var10004[10] = 73;
      var10004[11] = 116;
      var10004[12] = 101;
      var10004[13] = 109;
      var10004[14] = 115;
      cK var10001 = new cK(this, mr.clS(var10004)).WM(jc.WnbNG);
      Item[] var10002 = new Item[6];
      var10002[0] = Items.NETHERITE_SWORD;
      var10002[1] = Items.DIAMOND_SWORD;
      var10002[2] = Items.IRON_SWORD;
      var10002[3] = Items.STONE_SWORD;
      var10002[4] = Items.GOLDEN_SWORD;
      var10002[5] = Items.WOODEN_SWORD;
      this.vhDcM = var10001.WN(var10002);
      var10004 = new int[19];
      var10004[0] = 83;
      var10004[1] = 119;
      var10004[2] = 105;
      var10004[3] = 116;
      var10004[4] = 99;
      var10004[5] = 104;
      var10004[6] = 32;
      var10004[7] = 66;
      var10004[8] = 97;
      var10004[9] = 99;
      var10004[10] = 107;
      var10004[11] = 32;
      var10004[12] = 84;
      var10004[13] = 111;
      var10004[14] = 32;
      var10004[15] = 83;
      var10004[16] = 108;
      var10004[17] = 111;
      var10004[18] = 116;
      this.NbNqt = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[13];
      var10004[0] = 76;
      var10004[1] = 105;
      var10004[2] = 109;
      var10004[3] = 105;
      var10004[4] = 116;
      var10004[5] = 32;
      var10004[6] = 67;
      var10004[7] = 114;
      var10004[8] = 121;
      var10004[9] = 115;
      var10004[10] = 116;
      var10004[11] = 97;
      var10004[12] = 108;
      this.wjYZb = new ct(this, mr.clS(var10004)).SO(2);
      ct var10003 = this.wjYZb;
      var10004 = new int[6];
      var10004[0] = 83;
      var10004[1] = 105;
      var10004[2] = 110;
      var10004[3] = 103;
      var10004[4] = 108;
      var10004[5] = 101;
      this.IMMQw = new cu(var10003, mr.clS(var10004));
      var10003 = this.wjYZb;
      var10004 = new int[6];
      var10004[0] = 68;
      var10004[1] = 111;
      var10004[2] = 117;
      var10004[3] = 98;
      var10004[4] = 108;
      var10004[5] = 101;
      this.IAuqT = new cu(var10003, mr.clS(var10004));
      var10003 = this.wjYZb;
      var10004 = new int[8];
      var10004[0] = 73;
      var10004[1] = 110;
      var10004[2] = 102;
      var10004[3] = 105;
      var10004[4] = 110;
      var10004[5] = 105;
      var10004[6] = 116;
      var10004[7] = 101;
      this.ABaQX = new cu(var10003, mr.clS(var10004));
      var10004 = new int[13];
      var10004[0] = 67;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 99;
      var10004[4] = 101;
      var10004[5] = 108;
      var10004[6] = 32;
      var10004[7] = 79;
      var10004[8] = 110;
      var10004[9] = 32;
      var10004[10] = 85;
      var10004[11] = 115;
      var10004[12] = 101;
      this.AYUNa = new cJ(this, mr.clS(var10004)).WE(true);
      this.qcmQt = mT.cpA();
      this.cCsEl = mT.cpA();
      this.LSGzZ = new ol(this);
   }

   static {
      Loader.doInit(eW.class);
      _5fb21971896da5bd6ff915283c37e890();
   }

   @Override
   public native void aaj();

   private static native void _5fb21971896da5bd6ff915283c37e890();

   private static native MatchException aEE(MatchException var0);

   private static native String aEF(byte[] var0);

   private static native CallSite aEL(Lookup var0, String var1, MethodType var2);

   private static native int aEJ(int var0, long var1);

   @hG
   public native void aEA(gO$tm var1);

   private native void aED();

   private static native Object aEH(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void aEz(gH$th var1);

   private static native CallSite aEI(Lookup var0, String var1, MethodType var2);

   public native boolean aEB();

   public native void aEC();

   private static native int aEK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aEG(int var0, long var1);
}
