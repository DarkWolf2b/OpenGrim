package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class y extends ak<cD> {
   private final ri JtQii;
   private final rk BGcCS;
   private rk jtBbb;
   private int bBkRV;
   private static long FIUJu;
   private static long[] gwmJQ;
   private static Integer[] FsLFL;
   private static Map rdASZ;

   public y(cD var1, az var2) {
      long var3 = FIUJu ^ 82743533842422L;
      super(var1, var2);
      this.BGcCS = new rk(eX<"i">(11942, 3461603467079948084L ^ var3)).dhs(rj.UPXqT);
      this.jtBbb = new rk(eX<"i">(30026, 9040424311304703194L ^ var3), 1.0F).dhs(rj.UPXqT);
      ig var5 = rD.dlM().bjG();
      this.JtQii = new ri(eX<"i">(16966, 4200208729437240279L ^ var3), var5.bio().cob(0.75F)).dfW(rj.UPXqT);
   }

   static {
      Loader.doInit(y.class);
      _0eea007e4caf408f20df803bce2cdfc4();
   }

   @Override
   public native float dn();

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   public native rk eQ();

   public native y eS(rk var1);

   public native y eT(int var1);

   private static native int eV(int var0, long var1);

   public native int eR();

   public native ri eO();

   private static native MatchException eU(MatchException var0);

   private static native int eW(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite eX(Lookup var0, String var1, MethodType var2);

   private native void eN(lC var1);

   public native rk eP();

   private static native void _0eea007e4caf408f20df803bce2cdfc4();
}
