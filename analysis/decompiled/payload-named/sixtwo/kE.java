package sixtwo;

import net.minecraft.client.util.math.MatrixStack;

public class kE {
   private MatrixStack kccAM;
   private float tJewO;
   private float MDRnX;
   private float QfJwz;
   private float dWDvH;
   private mG lLAZi;

   kE(MatrixStack var1, float var2, float var3, float var4, float var5, mG var6) {
      this.kccAM = var1;
      this.tJewO = var2;
      this.MDRnX = var3;
      this.QfJwz = var4;
      this.dWDvH = var5;
      this.lLAZi = var6;
   }

   public static kE$um bTg() {
      return new kE$um();
   }

   public static kE$um bTf(MatrixStack var0, double var1, double var3, double var5, float var7) {
      return bTg().dtd(var0).dte((float)var1).dtf((float)var3).dtg((float)var5).dth(var7);
   }

   public float bTk() {
      return this.QfJwz;
   }

   public MatrixStack bTh() {
      return this.kccAM;
   }

   public float bTl() {
      return this.dWDvH;
   }

   public float bTj() {
      return this.MDRnX;
   }

   public mG bTm() {
      return this.lLAZi;
   }

   public float bTi() {
      return this.tJewO;
   }
}
