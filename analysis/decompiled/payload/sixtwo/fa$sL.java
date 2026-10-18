package sixtwo;

import native.Loader;
import net.minecraft.class_2338;
import net.minecraft.class_243;
import net.minecraft.class_3965;

record fa$sL(class_2338 railPos, class_2338 firePos, class_3965 cartHitResult, class_243 shotPoint) {
   static {
      Loader.doInit(fa$sL.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native class_243 shotPoint();

   public native class_2338 railPos();

   public native class_2338 firePos();

   public native class_3965 cartHitResult();
}
