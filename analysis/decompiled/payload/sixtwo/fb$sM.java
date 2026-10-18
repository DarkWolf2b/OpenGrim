package sixtwo;

import java.util.List;
import native.Loader;
import net.minecraft.class_2338;
import net.minecraft.class_243;
import net.minecraft.class_3965;

record fb$sM(class_2338 railPos, class_3965 cartHitResult, List<class_243> arrowPath) {
   static {
      Loader.doInit(fb$sM.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native List<class_243> arrowPath();

   public native class_2338 railPos();

   public native class_3965 cartHitResult();
}
