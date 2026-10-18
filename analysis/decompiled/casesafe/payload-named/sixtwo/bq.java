package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;

public class bq extends az {
   private static float PssWv;
   private static float FlVBu;
   private static float mGFYO;
   private static float rsiUA;
   private final List<ng> oosnB;
   private final az gonlP;
   private final rk hfuSd;
   private final rk Izzcw;
   private final rk fViQp;
   private final P LvcHh;
   private final P dATEM;
   private final ah BOvEx;
   private static long eduFT;
   private static String[] WzteC;
   private static String[] UASzT;
   private static Map BepdG;
   private static long[] rMScF;
   private static Integer[] WokSU;
   private static Map rSYQq;

   public bq(List<ng> var1, az var2) {
      long var3 = eduFT ^ 91930744671641L;
      super();
      this.hfuSd = new rk(Gm<"t">(10292, 7559912323259659040L ^ var3)).dhs(rj.UPXqT);
      this.Izzcw = new rk(Gm<"t">(2500, 5899780831639950037L ^ var3)).dhs(rj.NJlxm);
      this.fViQp = new rk(Gm<"t">(2500, 5899780831639950037L ^ var3)).dhs(rj.UPXqT);
      this.BOvEx = new ah();
      this.oosnB = var1;
      this.gonlP = var2;
      ig var5 = rD.dlM().bjG();
      this.LvcHh = new P(null, Gj<"l">(18793, 8403518134704600804L ^ var3), lf.cuxpa).ja(var5.biw().bhF()).hO(S.CLgKH);
      this.dATEM = new P(null, Gj<"l">(24111, 8852632241429275054L ^ var3), lf.JHGge).ja(jk.mPXGi).iY(jk.mPXGi).hO(S.CLgKH);
   }

   static {
      Loader.doInit(bq.class);
      _566eb1eeb5f605d6540f908d7417f39d();
   }

   @Override
   public native float dn();

   @Override
   public native boolean dm(int var1, int var2, int var3);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   @Override
   public native boolean fC(double var1, double var3, double var5);

   private static native void _566eb1eeb5f605d6540f908d7417f39d();

   private native void FZ(double var1, double var3, ng var5);

   private native boolean FW(String var1, ng var2);

   private static native int Gl(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native int FX(String var1) throws NumberFormatException;

   private static native String Gg(byte[] var0);

   private static native int Gk(int var0, long var1);

   private static native List<ae$rP> FY();

   private static native CallSite Gm(Lookup var0, String var1, MethodType var2);

   private static native CallSite Gj(Lookup var0, String var1, MethodType var2);

   private static native NumberFormatException Gf(NumberFormatException var0);

   private static native String Gh(int var0, long var1);

   private static native Object Gi(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void FV(double var1, double var3, ng var5);

   private native float Ga();
}
