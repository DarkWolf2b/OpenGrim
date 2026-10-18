package sixtwo;

import native.Loader;
import net.minecraft.class_1297;

public record pN(py element, lc bounds) {
   private static long a;

   static {
      Loader.doInit(pN.class);
      _c3d0c7548ca20ca5ff6d4fa4d2720fba();
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   private static native MatchException a(MatchException var0);

   public native lc bounds();

   public native py element();

   public native void render(lC var1, lc var2, lc var3, class_1297 var4, boolean var5);

   public native void render(lC var1, lc var2, class_1297 var3, boolean var4);

   private static native void _c3d0c7548ca20ca5ff6d4fa4d2720fba();
}
