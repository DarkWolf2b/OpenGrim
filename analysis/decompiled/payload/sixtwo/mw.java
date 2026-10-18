package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public enum mw {
   ZUeMI,
   oxyHZ,
   uwYcK,
   uWTdl,
   Itsnz,
   hrPmv;

   private final int IQqdf;
   private static long uAFeA;
   private static long[] pBJIn;
   private static Integer[] ANWvd;
   private static Map dlGvS;

   private static native String cmF(byte[] var0);

   private static native CallSite cmI(Lookup var0, String var1, MethodType var2);

   private static native int cmG(int var0, long var1);

   private static native int cmH(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private mw(int var3) {
      this.IQqdf = var3;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      Loader.doInit(mw.class);
      _6cbe60407787b8c91479d0775ab74599();
   }

   public native int cmD();

   private static native void _6cbe60407787b8c91479d0775ab74599();
}
