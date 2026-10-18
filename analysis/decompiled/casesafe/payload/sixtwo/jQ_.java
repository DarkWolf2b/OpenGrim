package sixtwo;

import net.minecraft.class_241;
import org.joml.Matrix3x2fStack;

public class jQ {
   private Matrix3x2fStack OnmFi;
   private class_241 SACMG;
   private class_241 xZJck;
   private class_241 hgzSE;
   private class_241 DILdN;
   private mG dqFYn;
   private float UCEil;
   private float GeRqt;

   jQ(Matrix3x2fStack var1, class_241 var2, class_241 var3, class_241 var4, class_241 var5, mG var6, float var7, float var8) {
      this.OnmFi = var1;
      this.SACMG = var2;
      this.xZJck = var3;
      this.hgzSE = var4;
      this.DILdN = var5;
      this.dqFYn = var6;
      this.UCEil = var7;
      this.GeRqt = var8;
   }

   public class_241 bLG() {
      return this.xZJck;
   }

   public class_241 bLH() {
      return this.hgzSE;
   }

   public class_241 bLF() {
      return this.SACMG;
   }

   public Matrix3x2fStack bLE() {
      return this.OnmFi;
   }

   public class_241 bLI() {
      return this.DILdN;
   }

   public float bLK() {
      return this.UCEil;
   }

   public float bLL() {
      return this.GeRqt;
   }

   public mG bLJ() {
      return this.dqFYn;
   }

   public static jQ$ub bLD() {
      return new jQ$ub();
   }

   private static float bLC() {
      return 0.75F;
   }

   private static mG bLA() {
      return mG.hoGuU;
   }

   private static float bLB() {
      return 1.0F;
   }

   public static jQ$ub bLz(Matrix3x2fStack var0, class_241 var1, class_241 var2, class_241 var3, class_241 var4) {
      return bLD().drm(var0).drn(var1).dro(var2).drp(var3).drq(var4);
   }
}
