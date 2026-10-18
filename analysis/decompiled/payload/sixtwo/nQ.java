package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1703;
import net.minecraft.class_1799;

public class nQ {
   private static long zOGCM;
   private static long[] GuGMu;
   private static Integer[] mczgE;
   private static Map NGIpB;

   static {
      Loader.doInit(nQ.class);
      _18d6c76cceb0d493993e7ca850fba2fe();
   }

   private static native void _18d6c76cceb0d493993e7ca850fba2fe();

   public static native int cyR();

   public static native int cyS(class_1799 var0);

   private static native MatchException cyT(MatchException var0);

   public static native int cyQ(class_1703 var0);

   private static native int cyU(int var0, long var1);

   private static native int cyV(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite cyW(Lookup var0, String var1, MethodType var2);
}
