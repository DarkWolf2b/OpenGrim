package sixtwo;

import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;

public class cN {
   public static Queue<cO> YyPjC = new ConcurrentLinkedQueue<>();
   private static int LtlqA;

   static {
      XR(0);
   }

   public static void XI(String var0) {
      YyPjC.add(new cO(mZ.csh(var0), cM.WCwDP));
   }

   public static void XF(int[] var0) {
      YyPjC.add(new cO(var0, cM.MENWL));
   }

   public static void XK(int[] var0) {
      YyPjC.add(new cO(var0, cM.dzTse));
   }

   public static void XH(int[] var0) {
      YyPjC.add(new cO(var0, cM.WCwDP));
   }

   public static void XM(String var0, String var1) {
      YyPjC.add(new cO(mZ.csh(var0), mZ.csh(var1), cM.MENWL));
   }

   public static void XN(int[] var0, int[] var1) {
      YyPjC.add(new cO(var0, var1, cM.WCwDP));
   }

   public static void XO(String var0, String var1) {
      YyPjC.add(new cO(mZ.csh(var0), mZ.csh(var1), cM.WCwDP));
   }

   public static void XL(int[] var0, int[] var1) {
      YyPjC.add(new cO(var0, var1, cM.MENWL));
   }

   public static void XP(int[] var0, int[] var1) {
      YyPjC.add(new cO(var0, var1, cM.dzTse));
   }

   private static MatchException XU(MatchException var0) {
      return var0;
   }

   public static void XQ(String var0, String var1) {
      YyPjC.add(new cO(mZ.csh(var0), mZ.csh(var1), cM.dzTse));
   }

   public static void XJ(String var0) {
      YyPjC.add(new cO(mZ.csh(var0), cM.dzTse));
   }

   public static void XG(String var0) {
      YyPjC.add(new cO(mZ.csh(var0), cM.MENWL));
   }

   public static void XR(int var0) {
      LtlqA = var0;
   }

   public static int XS() {
      return LtlqA;
   }

   public static int XT() {
      int var0 = XS();

      try {
         return var0 == 0 ? 67 : 0;
      } catch (MatchException var1) {
         throw XU(var1);
      }
   }
}
