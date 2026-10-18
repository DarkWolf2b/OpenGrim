package sixtwo;

import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.world.World;
import org.joml.Matrix3x2fc;
import org.jspecify.annotations.Nullable;

public final class jv extends jy<jv> {
   private LivingEntity kyBjH;
   private World qOMFo;
   private float ZBHtA;

   public jv(@Nullable Matrix3x2fc var1, @Nullable LivingEntity var2, @Nullable World var3, ItemStack var4, float var5, float var6, float var7) {
      super(var1, var4, var5, var6, ju$tT.yDoOO);
      this.kyBjH = var2;
      this.qOMFo = var3;
      this.ZBHtA = var7;
   }

   public jv bGs(@Nullable LivingEntity var1) {
      this.kyBjH = var1;
      return this;
   }

   public jv bGu(float var1) {
      this.ZBHtA = var1;
      return this;
   }

   public jv bGt(@Nullable World var1) {
      this.qOMFo = var1;
      return this;
   }

   @Override
   public void renderIntoBatch() {
      ju.bFO(this.wvKbm, this.kyBjH, this.qOMFo, this.qeMTM, this.svsZw, this.zXQoo, this.ZBHtA, this.qxFcM);
   }
}
