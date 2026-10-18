package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fU extends gg {
   private static long bVEnw;
   private static String[] KrrAc;
   private static String[] qvWvL;
   private static Map YJICs;
   private static long pmRzS;

   public fU() {
      long var1 = bVEnw ^ 121205263963770L;
      super(gf.aZL((int)pmRzS, false, gh.KfAlY));
   }

   static {
      Loader.doInit(fU.class);
      _9ca8788c776fc65a0475168085a13724();
   }

   private static native Object aXT(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException aXQ(MatchException var0);

   private static native CallSite aXU(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aXP(gy var1);

   private static native String aXS(int var0, long var1);

   private static native String aXR(byte[] var0);

   private static native void _9ca8788c776fc65a0475168085a13724();
}
