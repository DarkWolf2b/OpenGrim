package sixtwo;

import net.minecraft.util.math.Vec2f;
import org.joml.Matrix3x2fStack;

public class jQ {
   private Matrix3x2fStack OnmFi;
   private Vec2f SACMG;
   private Vec2f xZJck;
   private Vec2f hgzSE;
   private Vec2f DILdN;
   private mG dqFYn;
   private float UCEil;
   private float GeRqt;

   jQ(Matrix3x2fStack var1, Vec2f var2, Vec2f var3, Vec2f var4, Vec2f var5, mG var6, float var7, float var8) {
      this.OnmFi = var1;
      this.SACMG = var2;
      this.xZJck = var3;
      this.hgzSE = var4;
      this.DILdN = var5;
      this.dqFYn = var6;
      this.UCEil = var7;
      this.GeRqt = var8;
   }

   public Vec2f bLG() {
      return this.xZJck;
   }

   public Vec2f bLH() {
      return this.hgzSE;
   }

   public Vec2f bLF() {
      return this.SACMG;
   }

   public Matrix3x2fStack bLE() {
      return this.OnmFi;
   }

   public Vec2f bLI() {
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

   public static jQ$ub bLz(Matrix3x2fStack var0, Vec2f var1, Vec2f var2, Vec2f var3, Vec2f var4) {
      return bLD().drm(var0).drn(var1).dro(var2).drp(var3).drq(var4);
   }
}
