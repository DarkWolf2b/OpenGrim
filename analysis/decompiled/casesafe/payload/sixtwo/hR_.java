package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1657;

public class hR {
   private static long zKJZR;
   private static String[] VRROQ;
   private static String[] pefzz;
   private static Map HPyEP;

   static {
      Loader.doInit(hR.class);
      _cb450bd1a56b1f3ac2916942b09679fa();
   }

   private static native void _cb450bd1a56b1f3ac2916942b09679fa();

   public native hZ beN();

   private static native String beU(int var0, long var1);

   private static native Object beV(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void beP(class_1657 var1);

   private native class_1657 beO(String var1);

   private static native MatchException beS(MatchException var0);

   private static native String beT(byte[] var0);

   private static native CallSite beW(Lookup var0, String var1, MethodType var2);
}
