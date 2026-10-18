package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;

public class dZ extends gg {
   private final cJ Wkwey;
   private final cJ RfFUJ;
   private final cJ whhdh;
   private final cK tfzyX;
   private final cA uafIf;
   private final cJ AKRql;
   private final cJ hSAvy;
   private final cz vmwmS;
   private boolean dxMyh;
   private static long reyBC;
   private static String MCipD;
   private static long[] jJpjG;
   private static Integer[] GXLKq;
   private static Map wJISY;

   private static native void _2f96000a03dc0620ecce8d659f97acb2();

   public dZ() {
      long var1 = reyBC ^ 126376531928876L;
      super(gf.aZL(62, false, gh.qBzlZ));
      int[] var10004 = new int[6];
      var10004[0] = 66;
      var10004[1] = 108;
      var10004[2] = 111;
      var10004[3] = 99;
      var10004[4] = 107;
      var10004[5] = 115;
      this.Wkwey = new cJ(this, mr.clS(var10004)).WE(true);
      this.RfFUJ = new cJ(
            this,
            mr.clS(
               new int[]{
                  73,
                  116,
                  101,
                  109,
                  115
               }
            )
         )
         .WE(false);
      var10004 = new int[21];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 108;
      var10004[3] = 121;
      var10004[4] = 32;
      var10004[5] = 70;
      var10004[6] = 111;
      var10004[7] = 114;
      var10004[8] = 32;
      var10004[9] = 86;
      var10004[10] = 97;
      var10004[11] = 108;
      var10004[12] = 105;
      var10004[13] = 100;
      var10004[14] = 32;
      var10004[15] = 66;
      var10004[16] = 108;
      var10004[17] = 111;
      var10004[18] = 99;
      var10004[19] = 107;
      var10004[20] = 115;
      this.whhdh = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[12];
      var10004[0] = 86;
      var10004[1] = 97;
      var10004[2] = 108;
      var10004[3] = 105;
      var10004[4] = 100;
      var10004[5] = 32;
      var10004[6] = 66;
      var10004[7] = 108;
      var10004[8] = 111;
      var10004[9] = 99;
      var10004[10] = 107;
      var10004[11] = 115;
      this.tfzyX = new cK(this, mr.clS(var10004)).WM(jc.WnbNG);
      var10004 = new int[17];
      var10004[0] = 82;
      var10004[1] = 105;
      var10004[2] = 103;
      var10004[3] = 104;
      var10004[4] = 116;
      var10004[5] = 32;
      var10004[6] = 67;
      var10004[7] = 108;
      var10004[8] = 105;
      var10004[9] = 99;
      var10004[10] = 107;
      var10004[11] = 32;
      var10004[12] = 68;
      var10004[13] = 101;
      var10004[14] = 108;
      var10004[15] = 97;
      var10004[16] = 121;
      this.uafIf = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(4.0).UI(0.0, 0.0).UH(MCipD);
      var10004 = new int[21];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 108;
      var10004[3] = 121;
      var10004[4] = 32;
      var10004[5] = 73;
      var10004[6] = 102;
      var10004[7] = 32;
      var10004[8] = 89;
      var10004[9] = 111;
      var10004[10] = 117;
      var10004[11] = 32;
      var10004[12] = 67;
      var10004[13] = 97;
      var10004[14] = 110;
      var10004[15] = 32;
      var10004[16] = 80;
      var10004[17] = 108;
      var10004[18] = 97;
      var10004[19] = 99;
      var10004[20] = 101;
      this.AKRql = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[14];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 108;
      var10004[3] = 121;
      var10004[4] = 32;
      var10004[5] = 70;
      var10004[6] = 111;
      var10004[7] = 114;
      var10004[8] = 32;
      var10004[9] = 83;
      var10004[10] = 108;
      var10004[11] = 111;
      var10004[12] = 116;
      var10004[13] = 115;
      this.hSAvy = new cJ(this, mr.clS(var10004)).WE(false);
      this.vmwmS = new cz(
         this,
         mr.clS(
            new int[]{
               83,
               108,
               111,
               116,
               115
            }
         )
      );
      this.tfzyX.Vf(this.whhdh::WF);
   }

   static {
      Loader.doInit(dZ.class);
      _2f96000a03dc0620ecce8d659f97acb2();
   }

   private static native int arg(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException ard(MatchException var0);

   private static native String are(byte[] var0);

   @hG
   public native void ara(gO$tl var1);

   private static native int arf(int var0, long var1);

   @hG
   public native void arc(gH$th var1);

   private native boolean arb(Item var1);

   @hG
   public native void aqZ(gO$tm var1);

   private static native CallSite arh(Lookup var0, String var1, MethodType var2);

   @Override
   public native void YO();
}
