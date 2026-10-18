package sixtwo;

import native.Loader;
import net.minecraft.class_2338;
import net.minecraft.class_3965;

record fd$sO(class_2338 dripstonePos, class_2338 trapdoorPos, class_3965 placeHitResult, boolean secondaryUse) {
   static {
      Loader.doInit(fd$sO.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native class_2338 dripstonePos();

   public native class_2338 trapdoorPos();

   public native boolean secondaryUse();

   public native class_3965 placeHitResult();
}
