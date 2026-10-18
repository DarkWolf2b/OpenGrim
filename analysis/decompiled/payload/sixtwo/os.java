package sixtwo;

import native.Loader;
import net.minecraft.class_1297;
import net.minecraft.class_243;

public abstract class os {
   private static String qscLl;

   static {
      Loader.doInit(os.class);
      _144dfa08eb37d6a8cfa6537c9d8665c5();
   }

   private static native void _144dfa08eb37d6a8cfa6537c9d8665c5();

   public native ov cGa(ov var1, ov var2);

   public static native void cGb(String var0);

   public abstract class_243 cFU();

   public abstract ov cFT(ov var1, ov var2, class_1297 var3);

   public static native String cGc();
}
