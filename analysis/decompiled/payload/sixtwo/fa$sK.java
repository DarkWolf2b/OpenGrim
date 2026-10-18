package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

enum fa$sK {
   YbJTa,
   RWBsV,
   MAgEy,
   oBiuY,
   dzJyB,
   hECYg,
   tKIGa,
   wglWG;

   private static fa$sK[] ZqHfE;
   private static long EfXWt;
   private static long[] QLPlX;
   private static Integer[] EVSCw;
   private static Map GudSQ;

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      Loader.doInit(fa$sK.class);
      _eea8ed86ca395c650722f611c54003db();
   }

   private static native void _eea8ed86ca395c650722f611c54003db();

   private static native int doT(int var0, long var1);

   private static native CallSite doV(Lookup var0, String var1, MethodType var2);

   private static native fa$sK[] doR();

   private static native String doS(byte[] var0);

   private static native int doU(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
