package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;

public class aR extends az {
   private static float hzbfp;
   private static float Mmoww;
   private static float SKUcd;
   private final rk Dtfzy;
   private final mu<aj> ApoXb;
   private final aP xhIWB;
   private final az znWUp;
   private final aV LlOkR;
   private final aK IctAz;
   private ap BWexP;
   private pF cPSPd;
   private float CHJJM;
   private boolean AnANT;
   private boolean wpCQg;
   private float LqCSm;
   private float XpSnM;
   private boolean GxspQ;
   private static boolean pSyCD;
   private static long qFOrL;
   private static String FssQU;
   private static long[] nJxdY;
   private static Integer[] oOUFn;
   private static Map lLSaC;

   public aR(float var1, float var2) {
      long var3 = qFOrL ^ 30629022895388L;
      super();
      this.Dtfzy = new rk(yL<"a">(5865, 4997726763008955030L ^ var3)).dhs(rj.NJlxm);
      this.ApoXb = new mu<>();
      this.cPSPd = pF.JMCCO;
      this.BcpIo = 175.0F;
      this.WjISQ = var2;
      this.CHJJM = var1;
      this.xhIWB = new aP();
      this.znWUp = new aR$rY(this).sP(yL<"a">(30249, 1640529890866229847L ^ var3)).sS(true).sQ(false);
      this.LlOkR = new aV().zc(this::yb);
      this.IctAz = new aK(this::yj, this::yn, this::yl, this::yk, this::ym, this::ya);
      this.xhIWB.xt(this.cPSPd);
      this.xhIWB.dY();
      this.AnANT = true;
   }

   static {
      Loader.doInit(aR.class);
      _b932e47186be4624228d4ae33ae42086();
   }

   @Override
   public native void dl(double var1, double var3, mA var5);

   private native boolean yl();

   private native void yh();

   @Override
   public native boolean dm(int var1, int var2, int var3);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   private native List<py> yi();

   @Override
   protected native void bV(lC var1);

   @Override
   public native boolean fC(double var1, double var3, double var5);

   public native aV ys();

   public native boolean yx();

   public native float yz();

   public native float yy();

   public native boolean yw();

   @Override
   public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

   private native void yb(py var1, double var2, double var4);

   @Override
   public native boolean eK(char var1);

   @Override
   public native boolean oi();

   @Override
   protected native boolean nZ();

   private static native void _b932e47186be4624228d4ae33ae42086();

   private native void xV(lC var1, Runnable var2, Runnable var3);

   private native void xZ(double var1, double var3);

   private native void ye(aj var1);

   public native aR yg(boolean var1);

   public native aP yq();

   private native pF yj();

   private native void ya(double var1, double var3);

   private native boolean xY(double var1, double var3);

   private native float xW();

   private native boolean yf();

   private native boolean yk();

   private native float xX();

   private static native void yd(aR var0, lc var1);

   public native rk yo();

   public native mu<aj> yp();

   private native void ym(boolean var1);

   public native az yr();

   public native aK yt();

   public native ap yu();

   private static native CallSite yL(Lookup var0, String var1, MethodType var2);

   public native float yv();

   public static native void yc();

   private native void yn(pF var1);

   private static native MatchException yH(MatchException var0);

   public native boolean yA();

   public static native boolean yF();

   public static native boolean yG();

   private static native String yI(byte[] var0);

   private static native int yJ(int var0, long var1);

   private static native int yK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native void yE(boolean var0);
}
