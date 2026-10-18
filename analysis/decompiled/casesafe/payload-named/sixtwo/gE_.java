package sixtwo;

import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.world.World;

public class gE extends hH {
   private final ItemStack LZFXO;
   private final World hXHRe;
   private final PlayerEntity dDyGN;
   private final int boXDo;
   private final int pUfOw;
   private final float LPbwe;

   public gE(ItemStack var1, World var2, PlayerEntity var3, int var4, int var5, float var6) {
      this.LZFXO = var1;
      this.hXHRe = var2;
      this.dDyGN = var3;
      this.boXDo = var4;
      this.pUfOw = var5;
      this.LPbwe = var6;
   }

   public int bbZ() {
      return this.boXDo;
   }

   public ItemStack bbW() {
      return this.LZFXO;
   }

   public World bbX() {
      return this.hXHRe;
   }

   public PlayerEntity bbY() {
      return this.dDyGN;
   }

   public int bca() {
      return this.pUfOw;
   }

   public float bcb() {
      return this.LPbwe;
   }
}
