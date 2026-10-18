package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.slot.Slot;

public class dJ extends gg {
   private final cJ hRuUo;
   private final cJ Twcyd;
   private final cJ AkIWJ;
   private final cJ kshzP;
   private final ct MjLVq;
   private final cu GndWc;
   private final cu lULpb;
   private final ct XujOg;
   private final cu BEFfA;
   private final cu FkJRf;
   private final cu RCVzG;
   private final cu iUlIH;
   private final ct cnoHj;
   private final cu YdPTn;
   private final cu QgNbo;
   private Screen bGfmG;
   private Slot wZqCT;
   private double AoTLF;
   private boolean MfpDd;
   private boolean UGWve;
   private boolean aLgGR;
   private static long BBSYk;
   private static long[] CXTPO;
   private static Integer[] IsjYj;
   private static Map crFLs;

   private static native void _f6f055b5122afffdaca62a3a3058ae70();

   public dJ() {
      long var1 = BBSYk ^ 64969696602626L;
      super(gf.aZL(157, false, gh.qBzlZ));
      int[] var10004 = new int[9];
      var10004[0] = 82;
      var10004[1] = 77;
      var10004[2] = 66;
      var10004[3] = 32;
      var10004[4] = 84;
      var10004[5] = 119;
      var10004[6] = 101;
      var10004[7] = 97;
      var10004[8] = 107;
      this.hRuUo = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[19];
      var10004[0] = 76;
      var10004[1] = 77;
      var10004[2] = 66;
      var10004[3] = 32;
      var10004[4] = 84;
      var10004[5] = 119;
      var10004[6] = 101;
      var10004[7] = 97;
      var10004[8] = 107;
      var10004[9] = 32;
      var10004[10] = 87;
      var10004[11] = 105;
      var10004[12] = 116;
      var10004[13] = 104;
      var10004[14] = 32;
      var10004[15] = 73;
      var10004[16] = 116;
      var10004[17] = 101;
      var10004[18] = 109;
      this.Twcyd = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[22];
      var10004[0] = 76;
      var10004[1] = 77;
      var10004[2] = 66;
      var10004[3] = 32;
      var10004[4] = 84;
      var10004[5] = 119;
      var10004[6] = 101;
      var10004[7] = 97;
      var10004[8] = 107;
      var10004[9] = 32;
      var10004[10] = 87;
      var10004[11] = 105;
      var10004[12] = 116;
      var10004[13] = 104;
      var10004[14] = 111;
      var10004[15] = 117;
      var10004[16] = 116;
      var10004[17] = 32;
      var10004[18] = 73;
      var10004[19] = 116;
      var10004[20] = 101;
      var10004[21] = 109;
      this.AkIWJ = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[11];
      var10004[0] = 87;
      var10004[1] = 104;
      var10004[2] = 101;
      var10004[3] = 101;
      var10004[4] = 108;
      var10004[5] = 32;
      var10004[6] = 84;
      var10004[7] = 119;
      var10004[8] = 101;
      var10004[9] = 97;
      var10004[10] = 107;
      this.kshzP = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[18];
      var10004[0] = 87;
      var10004[1] = 104;
      var10004[2] = 101;
      var10004[3] = 101;
      var10004[4] = 108;
      var10004[5] = 32;
      var10004[6] = 83;
      var10004[7] = 101;
      var10004[8] = 97;
      var10004[9] = 114;
      var10004[10] = 99;
      var10004[11] = 104;
      var10004[12] = 32;
      var10004[13] = 79;
      var10004[14] = 114;
      var10004[15] = 100;
      var10004[16] = 101;
      var10004[17] = 114;
      this.MjLVq = new ct(this, mr.clS(var10004));
      ct var10003 = this.MjLVq;
      var10004 = new int[13];
      var10004[0] = 70;
      var10004[1] = 105;
      var10004[2] = 114;
      var10004[3] = 115;
      var10004[4] = 116;
      var10004[5] = 32;
      var10004[6] = 84;
      var10004[7] = 111;
      var10004[8] = 32;
      var10004[9] = 76;
      var10004[10] = 97;
      var10004[11] = 115;
      var10004[12] = 116;
      this.GndWc = new cu(var10003, mr.clS(var10004));
      var10003 = this.MjLVq;
      var10004 = new int[13];
      var10004[0] = 76;
      var10004[1] = 97;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 32;
      var10004[5] = 84;
      var10004[6] = 111;
      var10004[7] = 32;
      var10004[8] = 70;
      var10004[9] = 105;
      var10004[10] = 114;
      var10004[11] = 115;
      var10004[12] = 116;
      this.lULpb = new cu(var10003, mr.clS(var10004)).SY();
      var10004 = new int[22];
      var10004[0] = 87;
      var10004[1] = 104;
      var10004[2] = 101;
      var10004[3] = 101;
      var10004[4] = 108;
      var10004[5] = 32;
      var10004[6] = 83;
      var10004[7] = 99;
      var10004[8] = 114;
      var10004[9] = 111;
      var10004[10] = 108;
      var10004[11] = 108;
      var10004[12] = 32;
      var10004[13] = 68;
      var10004[14] = 105;
      var10004[15] = 114;
      var10004[16] = 101;
      var10004[17] = 99;
      var10004[18] = 116;
      var10004[19] = 105;
      var10004[20] = 111;
      var10004[21] = 110;
      this.XujOg = new ct(this, mr.clS(var10004));
      var10003 = this.XujOg;
      var10004 = new int[6];
      var10004[0] = 78;
      var10004[1] = 111;
      var10004[2] = 114;
      var10004[3] = 109;
      var10004[4] = 97;
      var10004[5] = 108;
      this.BEFfA = new cu(var10003, mr.clS(var10004)).SY();
      var10003 = this.XujOg;
      var10004 = new int[8];
      var10004[0] = 73;
      var10004[1] = 110;
      var10004[2] = 118;
      var10004[3] = 101;
      var10004[4] = 114;
      var10004[5] = 116;
      var10004[6] = 101;
      var10004[7] = 100;
      this.FkJRf = new cu(var10003, mr.clS(var10004));
      var10003 = this.XujOg;
      var10004 = new int[14];
      var10004[0] = 80;
      var10004[1] = 111;
      var10004[2] = 115;
      var10004[3] = 105;
      var10004[4] = 116;
      var10004[5] = 105;
      var10004[6] = 111;
      var10004[7] = 110;
      var10004[8] = 32;
      var10004[9] = 65;
      var10004[10] = 119;
      var10004[11] = 97;
      var10004[12] = 114;
      var10004[13] = 101;
      this.RCVzG = new cu(var10003, mr.clS(var10004));
      var10003 = this.XujOg;
      var10004 = new int[23];
      var10004[0] = 80;
      var10004[1] = 111;
      var10004[2] = 115;
      var10004[3] = 105;
      var10004[4] = 116;
      var10004[5] = 105;
      var10004[6] = 111;
      var10004[7] = 110;
      var10004[8] = 32;
      var10004[9] = 65;
      var10004[10] = 119;
      var10004[11] = 97;
      var10004[12] = 114;
      var10004[13] = 101;
      var10004[14] = 32;
      var10004[15] = 73;
      var10004[16] = 110;
      var10004[17] = 118;
      var10004[18] = 101;
      var10004[19] = 114;
      var10004[20] = 116;
      var10004[21] = 101;
      var10004[22] = 100;
      this.iUlIH = new cu(var10003, mr.clS(var10004));
      var10004 = new int[19];
      var10004[0] = 83;
      var10004[1] = 99;
      var10004[2] = 114;
      var10004[3] = 111;
      var10004[4] = 108;
      var10004[5] = 108;
      var10004[6] = 32;
      var10004[7] = 73;
      var10004[8] = 116;
      var10004[9] = 101;
      var10004[10] = 109;
      var10004[11] = 32;
      var10004[12] = 83;
      var10004[13] = 99;
      var10004[14] = 97;
      var10004[15] = 108;
      var10004[16] = 105;
      var10004[17] = 110;
      var10004[18] = 103;
      this.cnoHj = new ct(this, mr.clS(var10004));
      var10003 = this.cnoHj;
      var10004 = new int[12];
      var10004[0] = 80;
      var10004[1] = 114;
      var10004[2] = 111;
      var10004[3] = 112;
      var10004[4] = 111;
      var10004[5] = 114;
      var10004[6] = 116;
      var10004[7] = 105;
      var10004[8] = 111;
      var10004[9] = 110;
      var10004[10] = 97;
      var10004[11] = 108;
      this.YdPTn = new cu(var10003, mr.clS(var10004)).SY();
      var10003 = this.cnoHj;
      var10004 = new int[10];
      var10004[0] = 65;
      var10004[1] = 108;
      var10004[2] = 119;
      var10004[3] = 97;
      var10004[4] = 121;
      var10004[5] = 115;
      var10004[6] = 32;
      var10004[7] = 79;
      var10004[8] = 110;
      var10004[9] = 101;
      this.QgNbo = new cu(var10003, mr.clS(var10004));
   }

   static {
      Loader.doInit(dJ.class);
      _f6f055b5122afffdaca62a3a3058ae70();
   }

   public native void amy(HandledScreen<?> var1, double var2, double var4, int var6);

   public native void amz(HandledScreen<?> var1, double var2, double var4, int var6);

   public native boolean amA(HandledScreen<?> var1, double var2, double var4, double var6);

   public native void amx(HandledScreen<?> var1, double var2, double var4, int var6);

   private native boolean amG(HandledScreen<?> var1);

   private native boolean amN(Slot var1);

   private native boolean amO(Slot var1, HandledScreen<?> var2);

   private native Slot amK(HandledScreen<?> var1, double var2, double var4);

   private native boolean amP(ItemStack var1, ItemStack var2);

   private native Slot amQ(List<Slot> var1, Slot var2);

   private native double amT(double var1);

   private native void amJ();

   private native void amF(HandledScreen<?> var1, Slot var2, ItemStack var3);

   private static native int amY(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void amD(HandledScreen<?> var1, Slot var2, ItemStack var3, ItemStack var4, List<Slot> var5, int var6);

   private native boolean amH(int var1);

   private native boolean amS(Slot var1, List<Slot> var2);

   private static native int amX(int var0, long var1);

   private native boolean amV();

   private native void amB(HandledScreen<?> var1, Slot var2, ItemStack var3);

   private native void amI(Screen var1);

   private native void amM(HandledScreen<?> var1);

   private static native CallSite amZ(Lookup var0, String var1, MethodType var2);

   private native List<Slot> amR(List<Slot> var1, Slot var2, int var3, boolean var4);

   private native boolean amU();

   private native void amL(HandledScreen<?> var1, Slot var2, int var3, boolean var4);

   private native void amE(HandledScreen<?> var1, Slot var2, ItemStack var3, ItemStack var4, List<Slot> var5, int var6);

   private static native MatchException amW(MatchException var0);

   private native void amC(HandledScreen<?> var1, Slot var2, ItemStack var3, ItemStack var4, List<Slot> var5, int var6, boolean var7);

   @Override
   public native void YO();
}
