package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_2960;

public record ag$rQ(class_2960 skin, boolean slim) {
   private static Map<String, class_2960> cachedSkins;
   private static long a;
   private static String[] b;
   private static String[] c;
   private static Map d;

   static {
      Loader.doInit(ag$rQ.class);
      _fc2aedec5c4f4301afb5097c041378f4();
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   private static native String a(byte[] var0);

   private static native MatchException a(MatchException var0);

   private static native Object a(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String a(int var0, long var1);

   private static native CallSite a(Lookup var0, String var1, MethodType var2);

   private static native void _fc2aedec5c4f4301afb5097c041378f4();

   public native boolean slim();

   public static native class_2960 getSkin(String var0);

   public static native void downloadSkin(String var0);

   public native class_2960 skin();

   private static native void lambda$downloadSkin$0(String var0, class_2960 var1);
}
