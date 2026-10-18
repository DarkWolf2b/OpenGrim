package sixtwo;

import native.Loader;
import net.minecraft.class_1703;
import net.minecraft.class_1735;
import net.minecraft.class_1799;

public class nx {
   private final class_1799 ztQJa;
   private final class_1735 kczfr;
   private static boolean CXbgM;

   public nx(class_1799 var1, class_1735 var2) {
      this.ztQJa = var1;
      this.kczfr = var2;
   }

   static {
      Loader.doInit(nx.class);
      _ce40ab237cd53083838624c7660999c5();
   }

   public native class_1735 cwg();

   public static native boolean cwi();

   public static native void cwh(boolean var0);

   public static native boolean cwj();

   private static native MatchException cwk(MatchException var0);

   public native void cwe(class_1703 var1);

   public native class_1799 cwf();

   private static native void _ce40ab237cd53083838624c7660999c5();
}
