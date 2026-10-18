package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public abstract class aY extends aj {
   int[] RigKG;
   iM SpjTW;
   am FaAqV;
   af BZqcU;
   af Uzust;
   af RCCrz;
   private static String[] KHdFB;
   private static long jbWwp;
   private static String[] dfpPk;
   private static String[] mcgFu;
   private static Map ZKveJ;

   public aY(float var1, int[] var2, iM var3) {
      long var4 = jbWwp ^ 135308295799546L;
      super();
      this.BcpIo = 290.0F;
      this.WjISQ = 165.0F;
      lc var6 = bl.Ex().Ey();
      float var7 = var6.bXF() + jf.bAH(this.BcpIo, var6.bXH());
      float var8 = var6.bXG() + jf.bAH(this.WjISQ, var6.bXI());
      this.MCnYt = var7;
      this.pNyTQ = var8;
      this.IzFhM = var1;
      this.FHbTC = true;
      this.RigKG = var2;
      this.SpjTW = var3;
      this.FaAqV = (am)new am(var3.btw()).sX(65.0F, 110.0F);
      ig var9 = rD.dlM().bjG();
      mG var10 = var9.biq().cob(0.3F);
      this.BZqcU = (af)new af().nj(ld.all(3.0F)).nb(String.valueOf(var3.buh())).nd(Ag<"m">(20158, 5607897376601520540L ^ var4)).ni(var10).sX(65.0F, 40.0F);
      this.Uzust = (af)new af().nj(ld.all(3.0F)).nb(jf.bAT(var3.bul())).nd(Ag<"m">(25030, 6304048335304791781L ^ var4)).ni(var10).sX(65.0F, 40.0F);
      this.RCCrz = (af)new af().nj(ld.all(3.0F)).nb(String.valueOf(var3.buj())).nd(Ag<"m">(27983, 2298822654797552238L ^ var4)).ni(var10).sX(65.0F, 40.0F);
   }

   static {
      Loader.doInit(aY.class);
      _4b4858161f15e00bdcc164d6c97f7d0d();
   }

   @Override
   protected abstract void sv(lC var1);

   @Override
   protected native void bV(lC var1);

   @Override
   public native boolean fC(double var1, double var3, double var5);

   private static native String Ae(int var0, long var1);

   public native iM zU();

   public native int[] zT();

   public native am zV();

   public native af zW();

   private static native CallSite Ag(Lookup var0, String var1, MethodType var2);

   public native af zX();

   public native af zY();

   public static native void Aa(String[] var0);

   public static native String[] Ab();

   private static native MatchException Ac(MatchException var0);

   private static native String Ad(byte[] var0);

   private static native Object Af(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _4b4858161f15e00bdcc164d6c97f7d0d();
}
