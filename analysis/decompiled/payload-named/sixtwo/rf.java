package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public enum rf {
   BfWtc,
   jojsN,
   wSUrn,
   OzzRG,
   SXABY,
   HfrXE,
   CmnWh,
   ElhZz;

   private final String lJQiS;
   private final rb ZDulw;
   private static long sLAId;
   private static long[] qnSIL;
   private static Integer[] hxbFt;
   private static Map uOhBb;

   private rf(String var3, rb var4) {
      this.lJQiS = var3;
      this.ZDulw = var4;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      Loader.doInit(rf.class);
      _1efc495649140682cc8d6bb31bc652a4();
   }

   private static native void _1efc495649140682cc8d6bb31bc652a4();

   public native rb dfu();

   private static native String dfw(byte[] var0);

   private static native int dfx(int var0, long var1);

   private static native int dfy(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite dfz(Lookup var0, String var1, MethodType var2);

   public native String dft();
}
