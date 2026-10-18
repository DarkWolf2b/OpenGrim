package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CompletionException;
import native.Loader;
import net.minecraft.class_1044;

public class ob {
   static int dznco;
   private final class_1044 cNjfD;
   private static boolean dKHKp;
   private static long GeJUi;
   private static long[] fPjmY;
   private static Integer[] MlLyp;
   private static Map tDKhx;

   private static native void _a5f9f47b34450fa927c3ddf9062d67c8();

   private static native int cBG(int var0, long var1);

   private static native int cBH(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public ob(class_1044 var1) {
      this.cNjfD = var1;
   }

   static {
      Loader.doInit(ob.class);
      _a5f9f47b34450fa927c3ddf9062d67c8();
   }

   private static native CallSite cBI(Lookup var0, String var1, MethodType var2);

   public static native void cBC(boolean var0);

   public static native boolean cBE();

   private static native CompletionException cBF(CompletionException var0);

   public static native boolean cBD();

   public static native CompletableFuture<ob> cBw(String var0);

   private static native CompletableFuture<ob> cBx(String var0, int var1);

   public native class_1044 cBy();

   public static native class_1044 cBv(String var0);
}
