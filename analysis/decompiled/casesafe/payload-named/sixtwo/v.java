package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class v extends ak<cJ> {
   private final rk nJwUL;
   private final rk qUvbd;
   private final ri PJdEn;
   private static long GNbqf;
   private static long[] jHfmI;
   private static Integer[] sTOPP;
   private static Map mIorq;

   public v(cJ var1, az var2) {
      long var3 = GNbqf ^ 36744255066902L;
      super(var1, var2);
      this.nJwUL = new rk(eJ<"x">(25122, 2297268586542811697L ^ var3)).dhs(rj.XzDkv);
      this.qUvbd = new rk(eJ<"x">(11831, 1180207579945666085L ^ var3)).dhs(rj.XzDkv);
      ig var5 = rD.dlM().bjG();
      this.PJdEn = new ri(eJ<"x">(11831, 1180207579945666085L ^ var3), var5.bir()).dfW(rj.UPXqT);
   }

   static {
      Loader.doInit(v.class);
      _61adedb93467316401c89223941063a6();
   }

   @Override
   public native float dn();

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   @Override
   public native void dY();

   private static native int eI(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int eH(int var0, long var1);

   private static native CallSite eJ(Lookup var0, String var1, MethodType var2);

   private static native MatchException eG(MatchException var0);

   private static native void _61adedb93467316401c89223941063a6();
}
