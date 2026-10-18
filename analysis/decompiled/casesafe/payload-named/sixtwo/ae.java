package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;

public class ae extends az {
   private static float xUOkU;
   protected final rk qOjgZ;
   private final rk CtXob;
   private final String RcMBn;
   private final az oXzPE;
   private final List<ae$rP> fTIag;
   private final List<ae$rP> fOcNI;
   private final ad HekHN;
   private final int Vfhfy;
   private static long FvIcS;
   private static long[] dPHRz;
   private static Integer[] GEApw;
   private static Map ICUMP;

   public ae(String var1, az var2, String var3, List<ae$rP> var4) {
      long var5 = FvIcS ^ 56317324010975L;
      super();
      this.qOjgZ = new rk(na<"f">(23141, 804792634901405201L ^ var5)).dhs(rj.UPXqT);
      this.CtXob = new rk(na<"f">(1796, 3947678803439862643L ^ var5)).dhs(rj.UPXqT);
      this.fTIag = new ArrayList<>();
      this.fOcNI = new ArrayList<>();
      this.RcMBn = var1;
      this.oXzPE = var2;
      this.fTIag.addAll(var4);
      this.HekHN = new ad(lE.joxgd.bYM(7.0F));
      this.HekHN.lZ(var3);
      this.HekHN.me(na<"f">(28611, 2885752798273055670L ^ var5));
      this.HekHN.mg(this::mS);
      this.Vfhfy = na<"f">(25308, 5987165956214924970L ^ var5);
      this.mS();
   }

   static {
      Loader.doInit(ae.class);
      _ff993d37bc17c03e3f54fc32a318cd99();
   }

   @Override
   public native float dn();

   @Override
   public native void dl(double var1, double var3, mA var5);

   @Override
   public native boolean dm(int var1, int var2, int var3);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   private static native CallSite na(Lookup var0, String var1, MethodType var2);

   private static native void _ff993d37bc17c03e3f54fc32a318cd99();

   @Override
   protected native void bV(lC var1);

   @Override
   public native boolean eK(char var1);

   public native String mP();

   private native boolean mQ();

   private native float mT(int var1, float var2);

   private native void mS();

   private native ae$rP mR(String var1);

   private static native MatchException mX(MatchException var0);

   private static native int mY(int var0, long var1);

   private static native int mZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native ae mO(String var1);
}
