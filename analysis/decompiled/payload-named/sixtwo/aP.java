package sixtwo;

import java.util.ArrayList;
import java.util.List;
import native.Loader;

public class aP extends az {
   private static float Ytddt;
   private static float EOrgK;
   private final ag bEgXx;
   private final aT fbWFG;
   private final aL OOHfm = new aL();
   private final lc NVkGu = new lc(0.0F, 0.0F, 0.0F, 0.0F);
   private final lc OcfDY = new lc(0.0F, 0.0F, 0.0F, 0.0F);
   private final List<pN> gUcHl = new ArrayList<>();
   private pF bliCO = pF.JMCCO;
   private boolean DyAoO;
   private float uKwAx;
   private py pNlKr;
   private pN OiKGb;
   private pM llMcT;
   private py bWBCm;
   private boolean EBWOa;
   private boolean tjQNE;
   private static long TCrzP;

   public aP() {
      this.bEgXx = new ag(rD.dlmvG.player.getGameProfile().name(), ag$rR.cyZLf).nk(0.0F, 0.0F);
      this.bEgXx.sX(45.0F, 135.0F);
      this.fbWFG = new aT();
   }

   static {
      Loader.doInit(aP.class);
      _fd1d2f9425d675076556ea60ae371a18();
   }

   @Override
   public native void dl(double var1, double var3, mA var5);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   public native aP xs(boolean var1, float var2);

   private native pN xx(lC var1, pi var2);

   public native void xz(lC var1);

   private native void xy(py var1);

   private native pi xw(lC var1, lc var2);

   @Override
   protected native void bV(lC var1);

   @Override
   public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

   @Override
   public native void dY();

   @Override
   public native boolean fC(double var1, double var3, double var5);

   public native aP xt(pF var1);

   private static native void _fd1d2f9425d675076556ea60ae371a18();

   public native void xB(py var1, double var2, double var4);

   public native void xA(pF var1);

   private native void xI();

   public native aP xL(boolean var1);

   private native void xH();

   private native void xD(double var1, double var3);

   private native void xv(lC var1, float var2);

   public native aT xM();

   private native void xG(double var1, double var3, lc var5);

   private static native MatchException xN(MatchException var0);

   private native void xK(py var1, double var2, double var4);

   private native void xF(double var1, double var3);

   private native void xJ(py var1);

   private native void xC(py var1, double var2);

   private native lc xu(lC var1);

   private native void xE(boolean var1);
}
