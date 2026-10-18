package fivefive;

import java.lang.invoke.MethodHandle;
import natives.Loader;

public final class l {
   private static MethodHandle XKGXv;
   private static C[] rePBz;

   public l() {
   }

   static {
      Loader.doInit(l.class);
      _c3d69c34aefc7185218ad0e34ae05926();
   }

   public static native MethodHandle bi(Object[] var0);

   private static native void _c3d69c34aefc7185218ad0e34ae05926();

   public static native void bj(C[] var0);

   public static native C[] bk();

   private static native String bm(byte[] var0);

   private static native RuntimeException bl(RuntimeException var0);
}
