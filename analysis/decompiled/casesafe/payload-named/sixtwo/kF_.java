package sixtwo;

import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Vec3d;

public class kF {
   private MatrixStack gvSDk;
   private Vec3d imnbU;
   private Vec3d EnbiM;
   private mG ZCDlZ;
   private float KVJFP;

   kF(MatrixStack var1, Vec3d var2, Vec3d var3, mG var4, float var5) {
      this.gvSDk = var1;
      this.imnbU = var2;
      this.EnbiM = var3;
      this.ZCDlZ = var4;
      this.KVJFP = var5;
   }

   public static kF$un bTp() {
      return new kF$un();
   }

   private static float bTo() {
      return 1.0F;
   }

   public MatrixStack bTq() {
      return this.gvSDk;
   }

   public static kF$un bTn(MatrixStack var0, Vec3d var1, Vec3d var2, mG var3) {
      return bTp().dto(var0).dtp(var1).dtq(var2).dtr(var3);
   }

   public Vec3d bTs() {
      return this.EnbiM;
   }

   public float bTu() {
      return this.KVJFP;
   }

   public Vec3d bTr() {
      return this.imnbU;
   }

   public mG bTt() {
      return this.ZCDlZ;
   }
}
