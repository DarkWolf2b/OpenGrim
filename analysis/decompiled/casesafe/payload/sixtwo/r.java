package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class r extends ak<cv> {
   private static float piMCO;
   private static float MjAVk;
   private static float CUApF;
   private static float IQDsG;
   private static float mscaa;
   private cw FSRiQ;
   private final mT MkBfE;
   private final Z Chffk;
   private static long ILzZt;
   private static String[] HgqCA;
   private static String[] RMPNV;
   private static Map arSSg;
   private static long YFYaN;
   private static long YOaMg;

   private native void dQ(boolean var1);

   public r(cv var1, az var2) {
      long var3 = ILzZt ^ 1305059187989L;
      super(var1, var2);
      this.MkBfE = mT.cpz();
      this.Chffk = new Z().kJ(lE.SVnNc.bYM(7.0F)).kK(5.0F).kL((int)YFYaN).kM(rj.XzDkv);
   }

   static {
      Loader.doInit(r.class);
      _52d2aac29e8b59f18d95bc9ab41f5ff7();
   }

   @Override
   public native float dn();

   @Override
   public native void dl(double var1, double var3, mA var5);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   private static native String dU(byte[] var0);

   private static native Object dW(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite dX(Lookup var0, String var1, MethodType var2);

   private static native String dV(int var0, long var1);

   private static native MatchException dT(MatchException var0);

   private native int dR();

   private static native void _52d2aac29e8b59f18d95bc9ab41f5ff7();
}
