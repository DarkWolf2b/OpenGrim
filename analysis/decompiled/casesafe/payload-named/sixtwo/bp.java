package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import native.Loader;

public class bp extends az {
   private static float AMFXd;
   private static float WJzgl;
   private static float vNQUo;
   private static float lSqcN;
   private final List<nd> sKQDB;
   private final az IYJTL;
   private final rk LTCPm;
   private final rk kSenW;
   private final rk NMQry;
   private final P sIfhE;
   private final P hgCRo;
   private final ah keiTB;
   private final Map<nd, rk> DZPiP;
   private static long fGoeO;
   private static String[] FQbHd;
   private static String[] jzZEi;
   private static Map qDzlt;
   private static long[] eNOwA;
   private static Integer[] QiEfT;
   private static Map TrcZL;

   private native void FF(double var1, double var3, nd var5);

   public bp(List<nd> var1, az var2) {
      long var3 = fGoeO ^ 109423195859150L;
      super();
      this.LTCPm = new rk(FU<"n">(190, 1546217134053145516L ^ var3)).dhs(rj.UPXqT);
      this.kSenW = new rk(FU<"n">(190, 1546217134053145516L ^ var3)).dhs(rj.NJlxm);
      this.NMQry = new rk(FU<"n">(190, 1546217134053145516L ^ var3)).dhs(rj.UPXqT);
      this.keiTB = new ah();
      this.DZPiP = new IdentityHashMap<>();
      this.sKQDB = var1;
      this.IYJTL = var2;
      ig var5 = rD.dlM().bjG();
      this.sIfhE = new P(null, FR<"d">(29479, 2619833718468325737L ^ var3), lf.cuxpa).ja(var5.biw().bhF()).hO(S.CLgKH);
      this.hgCRo = new P(null, FR<"d">(19586, 350295240784481993L ^ var3), lf.JHGge).ja(jk.mPXGi).iY(jk.mPXGi).hO(S.CLgKH);
   }

   static {
      Loader.doInit(bp.class);
      _7dcd2c33d80d702490ca9fdc4ce2514e();
   }

   @Override
   public native float dn();

   private static native int FS(int var0, long var1);

   @Override
   public native boolean dm(int var1, int var2, int var3);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   private static native CallSite FR(Lookup var0, String var1, MethodType var2);

   @Override
   protected native void bV(lC var1);

   @Override
   public native boolean fC(double var1, double var3, double var5);

   private static native void _7dcd2c33d80d702490ca9fdc4ce2514e();

   private native boolean FG(String var1, boolean var2, nd var3);

   private native rk FH(nd var1);

   private static native String FO(byte[] var0);

   private static native int FT(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native Object FQ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException FN(MatchException var0);

   private static native String FP(int var0, long var1);

   private static native CallSite FU(Lookup var0, String var1, MethodType var2);

   private native void FI(double var1, double var3, nd var5);

   private native float FJ();
}
