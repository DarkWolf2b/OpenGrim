package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class J extends aj {
   private final ri WfQYT;
   private final ri BVWWc;
   private final ri wLrDR;
   private final rk DJXfP;
   private final rk ynopW;
   private final rk ePBBz;
   private final gg GLrDe;
   private int nbZRc;
   private static int[] ijbRx;
   private static long oGMgf;
   private static String[] FlSmk;
   private static String[] FalZQ;
   private static Map NLFhJ;
   private static long[] sNGZe;
   private static Integer[] XsKuU;
   private static Map IgGRb;

   public J(float var1, float var2, float var3, gg var4) {
      long var5 = oGMgf ^ 109886673482640L;
      super(var1, var2, 130.0F, 75.0F);
      this.IzFhM = var3;
      int[] var10000 = gu();
      this.GLrDe = var4;
      int[] var7 = var10000;
      ig var8 = rD.dlM().bjG();

      label45: {
         try {
            if (var4.baf().aZg() == gd.zlSAY) {
               var14 = true;
               break label45;
            }
         } catch (MatchException var13) {
            throw gv(var13);
         }

         var14 = false;
      }

      boolean var9 = var14;
      mG var10 = var8.bio().cob(0.9F);
      mG var11 = var8.bio().cob(0.7F);

      rk var10001;
      rk var10002;
      int var10003;
      float var10004;
      label37: {
         try {
            var15 = this;
            var10001 = new rk;
            var10002 = var10001;
            var10003 = gC<"s">(24601, 7555294905526689917L ^ var5);
            if (var9) {
               var10004 = 1.0F;
               break label37;
            }
         } catch (MatchException var12) {
            throw gv(var12);
         }

         var10004 = 0.0F;
      }

      var10002./* $VF: Unable to resugar constructor */<init>(var10003, var10004);
      var15.ePBBz = var10001.dhs(rj.UPXqT);
      this.DJXfP = new rk(gC<"s">(14281, 5086256661579200430L ^ var5)).dhs(rj.UPXqT);
      this.ynopW = new rk(gC<"s">(26935, 1662749354342263121L ^ var5), 1.0F).dhs(rj.UPXqT);
      this.WfQYT = new ri(gC<"s">(26935, 1662749354342263121L ^ var5), var8.bio().cob(0.5F)).dfW(rj.UPXqT);
      this.BVWWc = new ri(gC<"s">(26935, 1662749354342263121L ^ var5), var9 ? var11 : var10).dfW(rj.UPXqT);
      this.wLrDR = new ri(gC<"s">(26935, 1662749354342263121L ^ var5), var9 ? var10 : var11).dfW(rj.UPXqT);
      this.FHbTC = true;
      if (var7 != null) {
         iS.bwK("DeBmPb");
      }
   }

   static {
      Loader.doInit(J.class);
      _1a6f26e3e4126fbd19826f02aaf7c123();
   }

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   public native ri gk();

   public native gg gp();

   public native rk gm();

   public native rk gn();

   public static native void gt(int[] var0);

   public native rk go();

   @Override
   protected native void bV(lC var1);

   public static native int[] gu();

   public native ri gl();

   private static native void _1a6f26e3e4126fbd19826f02aaf7c123();

   private static native CallSite gC(Lookup var0, String var1, MethodType var2);

   private static native MatchException gv(MatchException var0);

   public native ri gj();

   public native J gr(int var1);

   public native int gq();

   private static native String gx(int var0, long var1);

   private static native Object gy(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int gB(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite gz(Lookup var0, String var1, MethodType var2);

   private static native String gw(byte[] var0);

   private static native int gA(int var0, long var1);
}
