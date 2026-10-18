package sixtwo;

import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Arm;
import net.minecraft.util.Hand;

public class gl extends hH {
   private Hand vymrZ;
   private Arm EAANp;
   private float NcQJW;
   private ItemStack AhPGQ;
   private float xnMqJ;
   private MatrixStack WigNW;

   public gl(Hand var1, Arm var2, float var3, ItemStack var4, float var5, MatrixStack var6) {
      this.vymrZ = var1;
      this.EAANp = var2;
      this.NcQJW = var3;
      this.AhPGQ = var4;
      this.xnMqJ = var5;
      this.WigNW = var6;
   }

   public Hand baU() {
      return this.vymrZ;
   }

   public float baW() {
      return this.NcQJW;
   }

   public ItemStack baX() {
      return this.AhPGQ;
   }

   public float baY() {
      return this.xnMqJ;
   }

   public Arm baV() {
      return this.EAANp;
   }

   public MatrixStack baZ() {
      return this.WigNW;
   }
}
