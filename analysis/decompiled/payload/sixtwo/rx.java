package sixtwo;

import com.mojang.authlib.GameProfile;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_2596;
import net.minecraft.class_634;
import net.minecraft.class_7699;
import sun.misc.Unsafe;

public final class rx extends class_634 {
   private static Unsafe cLtlW;
   private static long wMMGt;
   private static String[] IoVeH;
   private static String[] zQYLl;
   private static Map vUbeC;

   private rx() {
      super(null, null, null);
   }

   static {
      Loader.doInit(rx.class);
      _65250f19b3ee5dd41d7b8907c6a1f483();
   }

   public static native rx dkv();

   private static native void _65250f19b3ee5dd41d7b8907c6a1f483();

   public native void method_52787(class_2596<?> var1);

   public native class_7699 method_45735();

   public native GameProfile method_2879();

   private static native Object dkz(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native RuntimeException dkw(RuntimeException var0);

   private static native CallSite dkA(Lookup var0, String var1, MethodType var2);

   private static native String dkx(byte[] var0);

   private static native String dky(int var0, long var1);
}
