package sixtwo;

import native.Loader;
import net.minecraft.item.ItemStack;

public class nt {
   private final ItemStack fpdvS;
   private final int BbhGG;
   private final long qWmge;
   private final nf IkJfu;

   public nt(ItemStack var1, int var2, long var3, nf var5) {
      this.fpdvS = var1;
      this.BbhGG = var2;
      this.qWmge = var3;
      this.IkJfu = var5;
   }

   static {
      Loader.doInit(nt.class);
   }

   public native ItemStack cvM();

   public native long cvO();

   public native int cvN();

   public native nf cvP();
}
