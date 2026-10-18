package sixtwo;

import net.minecraft.entity.MovementType;

public class hi extends hH {
   private MovementType ioDCS;
   private double TtyvP;
   private double HJOdl;
   private double xjPbi;

   public void bcF(double var1) {
      this.TtyvP = var1;
   }

   public void bcG(double var1) {
      this.HJOdl = var1;
   }

   public hi(MovementType var1, double var2, double var4, double var6) {
      this.ioDCS = var1;
      this.TtyvP = var2;
      this.HJOdl = var4;
      this.xjPbi = var6;
   }

   public double bcD() {
      return this.HJOdl;
   }

   public MovementType bcB() {
      return this.ioDCS;
   }

   public double bcC() {
      return this.TtyvP;
   }

   public double bcE() {
      return this.xjPbi;
   }

   public void bcH(double var1) {
      this.xjPbi = var1;
   }
}
