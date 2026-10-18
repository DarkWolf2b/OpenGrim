package sixtwo;

import net.minecraft.class_10017;
import net.minecraft.class_243;
import org.joml.Matrix3x2f;
import org.joml.Matrix3x2fc;
import org.joml.Quaternionf;

public final class jt implements lJ<jt> {
   private final Matrix3x2fc TvcWs;
   private final class_10017 fgeSN;
   private final float frbJF;
   private final float KeAxW;
   private final float khKKF;
   private final float uTgLo;
   private float QomKU = 1.0F;
   private class_243 hXKLQ = class_243.field_1353;
   private Quaternionf xZTHX = new Quaternionf();
   private Quaternionf pZyIu;

   @Override
   public lN batchKey() {
      return lN.immediate();
   }

   public jt(Matrix3x2fc var1, class_10017 var2, float var3, float var4, float var5, float var6) {
      this.TvcWs = new Matrix3x2f(var1);
      this.fgeSN = var2;
      this.frbJF = var3;
      this.KeAxW = var4;
      this.khKKF = var5;
      this.uTgLo = var6;
   }

   @Override
   public void execute() {
      jr.bFu(this.TvcWs, this.fgeSN, this.QomKU, this.hXKLQ, this.xZTHX, this.pZyIu, this.frbJF, this.KeAxW, this.khKKF, this.uTgLo);
   }

   public jt bFH(float var1) {
      this.QomKU = var1;
      return this;
   }

   public jt bFI(class_243 var1) {
      this.hXKLQ = var1;
      return this;
   }

   public jt bFL(Quaternionf var1) {
      this.pZyIu = new Quaternionf(var1);
      return this;
   }

   public jt bFK(Quaternionf var1) {
      this.xZTHX = new Quaternionf(var1);
      return this;
   }

   public jt bFJ(float var1, float var2, float var3) {
      this.hXKLQ = new class_243(var1, var2, var3);
      return this;
   }

   public jt bFM() {
      lF.cfA(this);
      return this;
   }
}
