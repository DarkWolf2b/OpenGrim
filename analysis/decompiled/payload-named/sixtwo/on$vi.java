package sixtwo;

import native.Loader;
import net.minecraft.entity.player.PlayerEntity;

record on$vi(PlayerEntity target, int createdTick) {
   static {
      Loader.doInit(on$vi.class);
   }

   @Override
   public final native boolean equals(Object var1);

   public native PlayerEntity target();

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native int createdTick();
}
