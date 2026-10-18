package sixtwo;

import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Box;

public class kC {
   private MatrixStack tknaZ;
   private Box LiWCJ;
   private mG kBIbs;
   private mG OQuAu;
   private mG tosoI;
   private boolean efFVS;
   private boolean ZSYRw;

   kC(MatrixStack var1, Box var2, mG var3, mG var4, mG var5, boolean var6, boolean var7) {
      this.tknaZ = var1;
      this.LiWCJ = var2;
      this.kBIbs = var3;
      this.OQuAu = var4;
      this.tosoI = var5;
      this.efFVS = var6;
      this.ZSYRw = var7;
   }

   public static kC$uk bSK(MatrixStack var0, Box var1, boolean var2, boolean var3) {
      return bSL().dsE(var0).dsF(var1).dsJ(var2).dsK(var3);
   }

   public static kC$uk bSL() {
      return new kC$uk();
   }

   public mG bSO() {
      return this.kBIbs;
   }

   public MatrixStack bSM() {
      return this.tknaZ;
   }

   public boolean bSS() {
      return this.ZSYRw;
   }

   public mG bSQ() {
      return this.tosoI;
   }

   public mG bSP() {
      return this.OQuAu;
   }

   public boolean bSR() {
      return this.efFVS;
   }

   public Box bSN() {
      return this.LiWCJ;
   }
}
