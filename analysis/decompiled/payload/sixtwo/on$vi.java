package sixtwo;

import native.Loader;
import net.minecraft.class_1657;

record on$vi(class_1657 target, int createdTick) {
   static {
      Loader.doInit(on$vi.class);
   }

   @Override
   public final native boolean equals(Object var1);

   public native class_1657 target();

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native int createdTick();
}
