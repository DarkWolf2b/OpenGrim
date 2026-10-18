package sixtwo;

import net.minecraft.client.render.entity.model.EntityModel;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.LivingEntity;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

public abstract class gp extends hH {
   private MatrixStack CgSWX;
   private EntityModel<?> EGzUR;
   private LivingEntity EqBST;
   private float ecyKc;
   private int pCbjK;
   private CallbackInfo zAPsl;

   public gp(MatrixStack var1, EntityModel<?> var2, LivingEntity var3, float var4, int var5, CallbackInfo var6) {
      this.CgSWX = var1;
      this.EGzUR = var2;
      this.EqBST = var3;
      this.ecyKc = var4;
      this.pCbjK = var5;
      this.zAPsl = var6;
   }

   public int bbn() {
      return this.pCbjK;
   }

   public LivingEntity bbl() {
      return this.EqBST;
   }

   public CallbackInfo bbo() {
      return this.zAPsl;
   }

   public MatrixStack bbj() {
      return this.CgSWX;
   }

   public EntityModel<?> bbk() {
      return this.EGzUR;
   }

   public float bbm() {
      return this.ecyKc;
   }
}
