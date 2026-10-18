package sixtwo;

import net.minecraft.class_1309;
import net.minecraft.class_1799;
import net.minecraft.class_1937;
import org.joml.Matrix3x2fc;
import org.jspecify.annotations.Nullable;

public final class jv extends jy<jv> {
   private class_1309 kyBjH;
   private class_1937 qOMFo;
   private float ZBHtA;

   public jv(@Nullable Matrix3x2fc var1, @Nullable class_1309 var2, @Nullable class_1937 var3, class_1799 var4, float var5, float var6, float var7) {
      super(var1, var4, var5, var6, ju$tT.yDoOO);
      this.kyBjH = var2;
      this.qOMFo = var3;
      this.ZBHtA = var7;
   }

   public jv bGs(@Nullable class_1309 var1) {
      this.kyBjH = var1;
      return this;
   }

   public jv bGu(float var1) {
      this.ZBHtA = var1;
      return this;
   }

   public jv bGt(@Nullable class_1937 var1) {
      this.qOMFo = var1;
      return this;
   }

   @Override
   public void renderIntoBatch() {
      ju.bFO(this.wvKbm, this.kyBjH, this.qOMFo, this.qeMTM, this.svsZw, this.zXQoo, this.ZBHtA, this.qxFcM);
   }
}
