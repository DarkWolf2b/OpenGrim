package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket;

public class fC extends gg {
   private final cA oUOJc;
   private final cA hXcoz;
   private final cJ pltDm;
   private static long sLnpv;
   private static String[] LKrNn;
   private static String[] rFUaB;
   private static Map jqBCR;
   private static long[] rcPcu;
   private static Integer[] MZPLF;
   private static Map LCHwy;

   private static native void _fa31f22af70cbdf56e21b1052cda26bc();

   public fC() {
      long var1 = sLnpv ^ 106381621914446L;
      super(gf.aZL(24, false, gh.xwjCw));
      int[] var10004 = new int[10];
      var10004[0] = 72;
      var10004[1] = 111;
      var10004[2] = 114;
      var10004[3] = 105;
      var10004[4] = 122;
      var10004[5] = 111;
      var10004[6] = 110;
      var10004[7] = 116;
      var10004[8] = 97;
      var10004[9] = 108;
      this.oUOJc = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %");
      var10004 = new int[8];
      var10004[0] = 86;
      var10004[1] = 101;
      var10004[2] = 114;
      var10004[3] = 116;
      var10004[4] = 105;
      var10004[5] = 99;
      var10004[6] = 97;
      var10004[7] = 108;
      this.hXcoz = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %");
      var10004 = new int[16];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 97;
      var10004[4] = 98;
      var10004[5] = 108;
      var10004[6] = 101;
      var10004[7] = 32;
      var10004[8] = 73;
      var10004[9] = 110;
      var10004[10] = 32;
      var10004[11] = 70;
      var10004[12] = 108;
      var10004[13] = 117;
      var10004[14] = 105;
      var10004[15] = 100;
      this.pltDm = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(fC.class);
      _fa31f22af70cbdf56e21b1052cda26bc();
   }

   private static native int aSF(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aSG(Lookup var0, String var1, MethodType var2);

   private static native String aSA(byte[] var0);

   private static native String aSB(int var0, long var1);

   private static native CallSite aSD(Lookup var0, String var1, MethodType var2);

   private native double aSx(double var1, double var3, int var5);

   @hG
   public native void aSw(gL$tk var1);

   private static native MatchException aSz(MatchException var0);

   private static native int aSE(int var0, long var1);

   private static native Object aSC(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void aSy(EntityVelocityUpdateS2CPacket var1, double var2, double var4, double var6);
}
