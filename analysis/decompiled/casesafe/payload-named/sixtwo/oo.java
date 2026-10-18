package sixtwo;

import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec3d;

public class oo extends os {
   private static boolean uyKKu;
   private static long vTvCf;

   static {
      Loader.doInit(oo.class);
      _6479d9c26b63e45d05d673bc7b3e0f0c();
   }

   private static native void _6479d9c26b63e45d05d673bc7b3e0f0c();

   public static native boolean cFW();

   public static native boolean cFX();

   public static native void cFV(boolean var0);

   @Override
   public native Vec3d cFU();

   private static native MatchException cFY(MatchException var0);

   @Override
   public native ov cFT(ov var1, ov var2, Entity var3);
}
