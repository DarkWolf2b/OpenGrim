package sixtwo;

import native.Loader;
import net.minecraft.class_7920;
import net.minecraft.class_12079.class_12081;

record fN$sU(int[] name, class_12081 texture, class_7920 model) {
   static {
      Loader.doInit(fN$sU.class);
   }

   public native int[] name();

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native class_7920 model();

   public native class_12081 texture();
}
