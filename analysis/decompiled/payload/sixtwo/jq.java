package sixtwo;

import net.minecraft.class_2960;
import net.minecraft.class_591;
import org.joml.Matrix3x2f;
import org.joml.Matrix3x2fc;

public final class jq implements lJ<jq> {
   private final Matrix3x2fc TxWCH;
   private final class_591 WFZJz;
   private final class_2960 VuTGU;
   private final float JIkfK;
   private final float PvVIE;
   private final float DWdzr;
   private final float bDAmU;
   private float KjnZj = 1.0F;
   private float bZFHi;
   private float lgJDS;

   @Override
   public lN batchKey() {
      return lN.immediate();
   }

   public jq(Matrix3x2fc var1, class_591 var2, class_2960 var3, float var4, float var5, float var6, float var7) {
      this.TxWCH = new Matrix3x2f(var1);
      this.WFZJz = var2;
      this.VuTGU = var3;
      this.JIkfK = var4;
      this.PvVIE = var5;
      this.DWdzr = var6;
      this.bDAmU = var7;
   }

   @Override
   public void execute() {
      jr.bFt(this.TxWCH, this.WFZJz, this.VuTGU, this.KjnZj, this.bZFHi, this.lgJDS, this.JIkfK, this.PvVIE, this.DWdzr, this.bDAmU);
   }

   public jq bFq(float var1) {
      this.bZFHi = var1;
      return this;
   }

   public jq bFr(float var1) {
      this.lgJDS = var1;
      return this;
   }

   public jq bFp(float var1, float var2) {
      this.bZFHi = var1;
      this.lgJDS = var2;
      return this;
   }

   public jq bFs() {
      lF.cfA(this);
      return this;
   }

   public jq bFo(float var1) {
      this.KjnZj = var1;
      return this;
   }
}
