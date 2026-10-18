package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.util.math.MatrixUtil;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.joml.Vector3f;

public class lc {
   protected float NFMZK;
   protected float NeqZE;
   protected float uTJKW;
   protected float FQVVW;
   private static iS[] iJorm;
   private static final long aMWvL = gb.aYR(2221297848610050427L, -7362294069567225307L, MethodHandles.lookup().lookupClass()).a(273555081488487L);

   public float bXz() {
      return this.NFMZK + this.uTJKW;
   }

   public float bXF() {
      return this.NFMZK;
   }

   public float bXG() {
      return this.NeqZE;
   }

   public float bXA() {
      return this.NeqZE + this.FQVVW;
   }

   public float bXH() {
      return this.uTJKW;
   }

   public boolean bXD(double var1, double var3) {
      return jf.bAE(var1, var3, this.NFMZK, this.NeqZE, this.uTJKW, this.FQVVW);
   }

   public float bXI() {
      return this.FQVVW;
   }

   public lc(float var1, float var2, float var3, float var4) {
      this.NFMZK = var1;
      this.NeqZE = var2;
      this.uTJKW = var3;
      this.FQVVW = var4;
   }

   static {
      if (bXK() == null) {
         bXJ(new iS[1]);
      }
   }

   public boolean bXE(lC var1) {
      return jf.bAG(var1, this.NFMZK, this.NeqZE, this.uTJKW, this.FQVVW);
   }

   public void bXr(float var1, float var2, float var3, float var4) {
      this.NFMZK = var1;
      this.NeqZE = var2;
      this.uTJKW = var3;
      this.FQVVW = var4;
   }

   public static void bXJ(iS[] var0) {
      iJorm = var0;
   }

   public lc bXC(Matrix3x2fc var1) {
      long var2 = aMWvL ^ 118364758403847L;
      float var5 = var1.m00() * this.NFMZK + var1.m10() * this.NeqZE + var1.m20();
      float var6 = var1.m01() * this.NFMZK + var1.m11() * this.NeqZE + var1.m21();
      String var10000 = ld.b();
      float var7 = var1.m00() * (this.NFMZK + this.uTJKW) + var1.m10() * (this.NeqZE + this.FQVVW) + var1.m20();
      String var4 = var10000;
      float var8 = var1.m01() * (this.NFMZK + this.uTJKW) + var1.m11() * (this.NeqZE + this.FQVVW) + var1.m21();

      try {
         lc var10 = new lc(var5, var6, var7 - var5, var8 - var6);
         if (var4 == null) {
            iS.bwK("jJvweb");
         }

         return var10;
      } catch (MatchException var9) {
         throw bXL(var9);
      }
   }

   public lc bXy(float var1) {
      return new lc(this.NFMZK, this.NeqZE, this.uTJKW, var1);
   }

   public lc bXw(float var1) {
      return new lc(this.NFMZK, var1, this.uTJKW, this.FQVVW);
   }

   public lc bXx(float var1) {
      return new lc(this.NFMZK, this.NeqZE, var1, this.FQVVW);
   }

   public static iS[] bXK() {
      return iJorm;
   }

   public void bXs(lc var1) {
      this.NFMZK = var1.NFMZK;
      this.NeqZE = var1.NeqZE;
      this.uTJKW = var1.uTJKW;
      this.FQVVW = var1.FQVVW;
   }

   public void bXu(float var1, float var2) {
      this.uTJKW = var1;
      this.FQVVW = var2;
   }

   public lc bXv(float var1) {
      return new lc(var1, this.NeqZE, this.uTJKW, this.FQVVW);
   }

   private static MatchException bXL(MatchException var0) {
      return var0;
   }

   public lc bXB(Matrix4f var1) {
      long var2 = aMWvL ^ 6588229597446L;

      try {
         if (MatrixUtil.isIdentity(var1)) {
            return new lc(this.NFMZK, this.NeqZE, this.uTJKW, this.FQVVW);
         }
      } catch (MatchException var6) {
         throw bXL(var6);
      }

      Vector3f var4 = new Vector3f(this.NFMZK, this.NeqZE, 0.0F);
      Vector3f var5 = new Vector3f(this.NFMZK + this.uTJKW, this.NeqZE + this.FQVVW, 0.0F);
      var1.transformPosition(var4);
      var1.transformPosition(var5);
      return new lc(var4.x, var4.y, var5.x - var4.x, var5.y - var4.y);
   }

   public void bXt(float var1, float var2) {
      this.NFMZK = var1;
      this.NeqZE = var2;
   }
}
