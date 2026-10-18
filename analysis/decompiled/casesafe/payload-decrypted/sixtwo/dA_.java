package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.LivingEntity;

public class dA extends gg {
   private final cC RaxVQ;
   private final ct woeNK;
   private final cu sGPoP;
   private final cu thWij;
   private final cu QVTVw;
   private final cC mFDgP;
   private final cD pWbaz;
   private final cJ srWas;
   private final cJ MQFiv;
   private final cC qWvkv;
   private final mT akfwU;
   private boolean NevtZ;
   private static long wsPfp;
   private static String[] WJnaE;
   private static String[] dhjwW;
   private static Map UYfhE;
   private static long[] aBJpx;
   private static Integer[] ZujIH;
   private static Map oahUV;

   private static native void _b817883ed9e0e146850884010237390b();

   private static native MatchException aki(MatchException var0);

   public dA() {
      long var1 = wsPfp ^ 65854684705015L;
      super(gf.aZL(59, false, gh.qBzlZ));
      int[] var10004 = new int[15];
      var10004[0] = 70;
      var10004[1] = 111;
      var10004[2] = 108;
      var10004[3] = 108;
      var10004[4] = 111;
      var10004[5] = 119;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 105;
      var10004[9] = 115;
      var10004[10] = 116;
      var10004[11] = 97;
      var10004[12] = 110;
      var10004[13] = 99;
      var10004[14] = 101;
      this.RaxVQ = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(100.0).VA(10.0).Vz(" blocks");
      var10004 = new int[17];
      var10004[0] = 70;
      var10004[1] = 105;
      var10004[2] = 114;
      var10004[3] = 101;
      var10004[4] = 119;
      var10004[5] = 111;
      var10004[6] = 114;
      var10004[7] = 107;
      var10004[8] = 32;
      var10004[9] = 85;
      var10004[10] = 115;
      var10004[11] = 101;
      var10004[12] = 32;
      var10004[13] = 77;
      var10004[14] = 111;
      var10004[15] = 100;
      var10004[16] = 101;
      this.woeNK = new ct(this, mr.clS(var10004));
      this.sGPoP = new cu(
         this.woeNK,
         mr.clS(
            new int[]{
               78,
               111,
               110,
               101
            }
         )
      );
      ct var10003 = this.woeNK;
      var10004 = new int[7];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 32;
      var10004[3] = 66;
      var10004[4] = 105;
      var10004[5] = 110;
      var10004[6] = 100;
      this.thWij = new cu(var10003, mr.clS(var10004));
      this.QVTVw = new cu(
            this.woeNK,
            mr.clS(
               new int[]{
                  65,
                  117,
                  116,
                  111
               }
            )
         )
         .SY();
      var10004 = new int[17];
      var10004[0] = 70;
      var10004[1] = 105;
      var10004[2] = 114;
      var10004[3] = 101;
      var10004[4] = 119;
      var10004[5] = 111;
      var10004[6] = 114;
      var10004[7] = 107;
      var10004[8] = 32;
      var10004[9] = 67;
      var10004[10] = 111;
      var10004[11] = 111;
      var10004[12] = 108;
      var10004[13] = 100;
      var10004[14] = 111;
      var10004[15] = 119;
      var10004[16] = 110;
      this.mFDgP = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(60.0).VA(2.0).Vz(" ticks");
      var10004 = new int[12];
      var10004[0] = 70;
      var10004[1] = 105;
      var10004[2] = 114;
      var10004[3] = 101;
      var10004[4] = 119;
      var10004[5] = 111;
      var10004[6] = 114;
      var10004[7] = 107;
      var10004[8] = 32;
      var10004[9] = 75;
      var10004[10] = 101;
      var10004[11] = 121;
      this.pWbaz = new cD(this, mr.clS(var10004)).VO(-999);
      var10004 = new int[13];
      var10004[0] = 69;
      var10004[1] = 108;
      var10004[2] = 121;
      var10004[3] = 116;
      var10004[4] = 114;
      var10004[5] = 97;
      var10004[6] = 32;
      var10004[7] = 66;
      var10004[8] = 111;
      var10004[9] = 117;
      var10004[10] = 110;
      var10004[11] = 99;
      var10004[12] = 101;
      this.srWas = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[9];
      var10004[0] = 79;
      var10004[1] = 118;
      var10004[2] = 101;
      var10004[3] = 114;
      var10004[4] = 115;
      var10004[5] = 104;
      var10004[6] = 111;
      var10004[7] = 111;
      var10004[8] = 116;
      this.MQFiv = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[15];
      var10004[0] = 79;
      var10004[1] = 118;
      var10004[2] = 101;
      var10004[3] = 114;
      var10004[4] = 115;
      var10004[5] = 104;
      var10004[6] = 111;
      var10004[7] = 111;
      var10004[8] = 116;
      var10004[9] = 32;
      var10004[10] = 86;
      var10004[11] = 97;
      var10004[12] = 108;
      var10004[13] = 117;
      var10004[14] = 101;
      this.qWvkv = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(0.0).Vx(5.0).VA(3.0).Vz(" ticks");
      this.akfwU = mT.cpz();
      this.pWbaz.Vf(this.thWij::SZ);
      this.mFDgP.Vf(this.QVTVw::SZ);
   }

   static {
      Loader.doInit(dA.class);
      _b817883ed9e0e146850884010237390b();
   }

   public native cu aka();

   private static native CallSite akp(Lookup var0, String var1, MethodType var2);

   public native mT akg();

   public native ct ajX();

   private static native CallSite akm(Lookup var0, String var1, MethodType var2);

   public native boolean akh();

   private static native String akk(int var0, long var1);

   public native cC ajW();

   private static native String akj(byte[] var0);

   private static native Object akl(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native cJ ake();

   private static native int ako(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native cu ajY();

   public native cC akb();

   public native boolean ajV(LivingEntity var1);

   @hG
   public native void ajT(gH$th var1);

   public native cu ajZ();

   @hG
   public native void ajU(gA var1);

   public native cC akf();

   private static native int akn(int var0, long var1);

   public native cD akc();

   public native cJ akd();

   @Override
   public native void YO();
}
