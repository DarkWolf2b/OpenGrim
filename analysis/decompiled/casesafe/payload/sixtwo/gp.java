package sixtwo;

import net.minecraft.class_1309;
import net.minecraft.class_4587;
import net.minecraft.class_583;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

public abstract class gp extends hH {
   private class_4587 CgSWX;
   private class_583<?> EGzUR;
   private class_1309 EqBST;
   private float ecyKc;
   private int pCbjK;
   private CallbackInfo zAPsl;

   public gp(class_4587 var1, class_583<?> var2, class_1309 var3, float var4, int var5, CallbackInfo var6) {
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

   public class_1309 bbl() {
      return this.EqBST;
   }

   public CallbackInfo bbo() {
      return this.zAPsl;
   }

   public class_4587 bbj() {
      return this.CgSWX;
   }

   public class_583<?> bbk() {
      return this.EGzUR;
   }

   public float bbm() {
      return this.ecyKc;
   }
}
