package sixtwo;

import native.Loader;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;

public class oG extends oK {
   private final LivingEntity QyMWj;
   private static long uNzNr;
   private static long dQDPC;

   public oG() {
      this(null);
   }

   public oG(LivingEntity var1) {
      this.QyMWj = var1;
   }

   static {
      Loader.doInit(oG.class);
      _64f84ed7ae5974478316d18e59d479fd();
   }

   @Override
   public native ItemStack cIu();

   private static native MatchException cIw(MatchException var0);

   @Override
   public native int cIv();

   private static native void _64f84ed7ae5974478316d18e59d479fd();
}
