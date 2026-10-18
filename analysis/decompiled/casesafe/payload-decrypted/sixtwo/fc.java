package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fc extends gg {
   cA wkPDa;
   cJ NtoNy;
   cJ TSAtI;
   cz MgsdP;
   mT ISxRu;
   private static long ytwiz;
   private static String XcqMh;
   private static long[] wpZUF;
   private static Integer[] yFBwQ;
   private static Map YBQZr;

   public fc() {
      long var1 = ytwiz ^ 90503625650404L;
      super(gf.aZL(165, false, gh.xwjCw));
      this.wkPDa = new cA(
            this,
            mr.clS(
               new int[]{
                  68,
                  101,
                  108,
                  97,
                  121
               }
            )
         )
         .UG(5.0)
         .UE(0.0)
         .UF(1000.0)
         .UI(0.0, 50.0)
         .UH(XcqMh);
      this.NtoNy = new cJ(
            this,
            mr.clS(
               new int[]{
                  72,
                  111,
                  118,
                  101,
                  114
               }
            )
         )
         .WE(false);
      fa.aGV();
      int[] var10005 = new int[15];
      var10005[0] = 82;
      var10005[1] = 97;
      var10005[2] = 110;
      var10005[3] = 100;
      var10005[4] = 111;
      var10005[5] = 109;
      var10005[6] = 105;
      var10005[7] = 122;
      var10005[8] = 101;
      var10005[9] = 32;
      var10005[10] = 83;
      var10005[11] = 108;
      var10005[12] = 111;
      var10005[13] = 116;
      var10005[14] = 115;
      this.TSAtI = new cJ(this, mr.clS(var10005)).WE(false);
      var10005 = new int[15];
      var10005[0] = 83;
      var10005[1] = 108;
      var10005[2] = 111;
      var10005[3] = 116;
      var10005[4] = 115;
      var10005[5] = 32;
      var10005[6] = 84;
      var10005[7] = 111;
      var10005[8] = 32;
      var10005[9] = 82;
      var10005[10] = 101;
      var10005[11] = 102;
      var10005[12] = 105;
      var10005[13] = 108;
      var10005[14] = 108;
      cz var10002 = new cz(this, mr.clS(var10005));
      int[] var10003 = new int[9];
      var10003[0] = 0;
      var10003[1] = 1;
      var10003[2] = 2;
      var10003[3] = 3;
      var10003[4] = 4;
      var10003[5] = 5;
      var10003[6] = 6;
      var10003[7] = 7;
      var10003[8] = 8;
      this.MgsdP = var10002.Uw(var10003);

      try {
         this.ISxRu = mT.cpz();
         if (iS.bwL() == null) {
            fa.aGU(new String[3]);
         }
      } catch (MatchException var4) {
         throw aHP(var4);
      }
   }

   static {
      Loader.doInit(fc.class);
      _728d964e491b8d841b10e24b5de0af47();
   }

   private static native void _728d964e491b8d841b10e24b5de0af47();

   private static native CallSite aHT(Lookup var0, String var1, MethodType var2);

   private static native int aHS(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException aHP(MatchException var0);

   @hG
   public native void aHO(gH$th var1);

   private static native String aHQ(byte[] var0);

   private static native int aHR(int var0, long var1);
}
