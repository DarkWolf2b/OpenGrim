package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class B extends ak<cH> {
   private boolean ysrqV;
   private ap DhMoP;
   private final rk gcCYq;
   private static long tjVao;
   private static String[] QiwoD;
   private static String[] gWNPB;
   private static Map kqufA;
   private static long GlDJF;

   private static native String fl(int var0, long var1);

   public B(cH var1, az var2) {
      long var3 = tjVao ^ 83908158277946L;
      super(var1, var2);
      this.gcCYq = new rk((int)GlDJF).dhs(rj.UPXqT);
   }

   static {
      Loader.doInit(B.class);
      _584b1d00d1b697f771c40bf5c46eca61();
   }

   @Override
   public native float dn();

   private static native String fk(byte[] var0);

   private static native CallSite fn(Lookup var0, String var1, MethodType var2);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   private static native Object fm(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   public native void dY();

   private static native MatchException fj(MatchException var0);

   private static native void _584b1d00d1b697f771c40bf5c46eca61();
}
