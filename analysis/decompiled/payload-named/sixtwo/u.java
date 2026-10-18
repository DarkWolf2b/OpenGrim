package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class u extends ak<cx> {
   private static float JRfwq;
   private static float WWzqj;
   private static float qfiMB;
   private static float SqTZx;
   private static float IvdWr;
   private static float ZMUmJ;
   protected M iXBoo;
   private final rk OaOzh;
   private final rk KZHEU;
   private final ri LSdxq;
   private static String[] TVFTE;
   private static long YkUzi;
   private static long[] pJsjz;
   private static Integer[] xMYqg;
   private static Map tBsRS;

   public u(cx var1, az var2) {
      long var3 = YkUzi ^ 110898380759400L;
      super(var1, var2);
      this.OaOzh = new rk(eF<"q">(6058, 5431623662760289154L ^ var3)).dhs(rj.XzDkv);
      this.KZHEU = new rk(eF<"q">(21179, 678308027733157522L ^ var3)).dhs(rj.XzDkv);
      ig var5 = rD.dlM().bjG();
      this.LSdxq = new ri(eF<"q">(21179, 678308027733157522L ^ var3), var5.bir()).dfW(rj.UPXqT);
   }

   static {
      Loader.doInit(u.class);
      _d36965ea9a8c2162459a6f556658d0f0();
   }

   protected native void ex(double var1, double var3);

   @Override
   public native float dn();

   protected native void ev(lC var1, float var2, float var3, float var4);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   @Override
   public native void dY();

   private static native CallSite eF(Lookup var0, String var1, MethodType var2);

   private static native int eE(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException eC(MatchException var0);

   private static native int eD(int var0, long var1);

   public static native String[] eB();

   public static native void eA(String[] var0);

   protected native void eu();

   private native void ew(lC var1, float var2, float var3, boolean var4);

   private native boolean ey(double var1, double var3);

   private native boolean ez(double var1, double var3);

   private static native void _d36965ea9a8c2162459a6f556658d0f0();
}
