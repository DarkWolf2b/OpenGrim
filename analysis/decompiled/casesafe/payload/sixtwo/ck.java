package sixtwo;

public class ck {
   private final cl izVDT;
   private final float TbtxI;
   private boolean glfpL;
   private static iS[] UQvdU;

   public ck(cl var1, float var2) {
      this.izVDT = var1;
      this.TbtxI = var2;
   }

   static {
      if (QK() != null) {
         QJ(new iS[5]);
      }
   }

   public static void QJ(iS[] var0) {
      UQvdU = var0;
   }

   public cl QF() {
      return this.izVDT;
   }

   public boolean QH() {
      return this.glfpL;
   }

   public float QG() {
      return this.TbtxI;
   }

   public ck QI(boolean var1) {
      this.glfpL = var1;
      return this;
   }

   public static iS[] QK() {
      return UQvdU;
   }
}
