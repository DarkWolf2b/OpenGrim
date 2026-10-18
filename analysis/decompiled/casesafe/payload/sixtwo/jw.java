package sixtwo;

import net.minecraft.class_1799;
import org.joml.Matrix3x2fc;
import org.jspecify.annotations.Nullable;

public final class jw extends jy<jw> {
   private String zujhu;

   public jw(@Nullable Matrix3x2fc var1, class_1799 var2, float var3, float var4) {
      super(var1, var2, var3, var4, ju$tT.yDoOO);
   }

   public jw bGz(@Nullable String var1) {
      this.zujhu = var1;
      return this;
   }

   @Override
   public void renderIntoBatch() {
      ju.bFT(this.wvKbm, this.qeMTM, this.svsZw, this.zXQoo, this.zujhu, this.qxFcM);
   }
}
