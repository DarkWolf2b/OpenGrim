package sixtwo;

import native.Loader;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.ScreenHandler;
import net.minecraft.screen.slot.Slot;

public class nx {
   private final ItemStack ztQJa;
   private final Slot kczfr;
   private static boolean CXbgM;

   public nx(ItemStack var1, Slot var2) {
      this.ztQJa = var1;
      this.kczfr = var2;
   }

   static {
      Loader.doInit(nx.class);
      _ce40ab237cd53083838624c7660999c5();
   }

   public native Slot cwg();

   public static native boolean cwi();

   public static native void cwh(boolean var0);

   public static native boolean cwj();

   private static native MatchException cwk(MatchException var0);

   public native void cwe(ScreenHandler var1);

   public native ItemStack cwf();

   private static native void _ce40ab237cd53083838624c7660999c5();
}
