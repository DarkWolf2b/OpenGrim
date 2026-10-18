package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eE extends gg {
   private final cJ iQpCa;
   private final cA OTTMg;
   private static long ooppM;
   private static long[] EWJat;
   private static Integer[] chvgy;
   private static Map iJToP;

   public eE() {
      long var1 = ooppM ^ 52430184874285L;
      super(gf.aZL(52, false, gh.xgeEn));
      int[] var10004 = new int[17];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 108;
      var10004[3] = 121;
      var10004[4] = 32;
      var10004[5] = 73;
      var10004[6] = 102;
      var10004[7] = 32;
      var10004[8] = 87;
      var10004[9] = 32;
      var10004[10] = 80;
      var10004[11] = 114;
      var10004[12] = 101;
      var10004[13] = 115;
      var10004[14] = 115;
      var10004[15] = 101;
      var10004[16] = 100;
      this.iQpCa = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[13];
      var10004[0] = 69;
      var10004[1] = 100;
      var10004[2] = 103;
      var10004[3] = 101;
      var10004[4] = 32;
      var10004[5] = 68;
      var10004[6] = 105;
      var10004[7] = 115;
      var10004[8] = 116;
      var10004[9] = 97;
      var10004[10] = 110;
      var10004[11] = 99;
      var10004[12] = 101;
      this.OTTMg = new cA(this, mr.clS(var10004)).UG(0.001).UE(0.001).UF(0.1).UI(0.001, 0.001);
   }

   static {
      Loader.doInit(eE.class);
      _c35a7cb99f43a6344ba13bf140372f4b();
   }

   private static native void _c35a7cb99f43a6344ba13bf140372f4b();

   private static native int awB(int var0, long var1);

   private static native CallSite awD(Lookup var0, String var1, MethodType var2);

   private static native MatchException awA(MatchException var0);

   public native boolean awz();

   private static native int awC(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
