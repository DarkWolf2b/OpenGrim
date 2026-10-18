package sixtwo;

import java.util.List;
import native.Loader;

class hL$tA implements hK {
   final List PfxnI;
   final String nlvqT;
   private static long fLZhy;
   private static String vIVbz;

   hL$tA(hL var1, List var2, String var3) {
      this.PfxnI = var2;
      this.nlvqT = var3;
   }

   static {
      Loader.doInit(hL$tA.class);
      _b7f2afaf3d867f5f84c292d44cd543bc();
   }

   @Override
   public native hJ validate(String var1);

   @Override
   public native List<String> suggestions(String var1);

   private static native void _b7f2afaf3d867f5f84c292d44cd543bc();

   private static native String dpx(byte[] var0);

   private static native boolean dpv(String var0, String var1);

   private static native MatchException dpw(MatchException var0);
}
