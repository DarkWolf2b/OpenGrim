package sixtwo;

import native.Loader;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;

public class oT {
   public static oT UgZrs;
   public static oT DpyXs;
   private Hand cVhsi;
   private oS NGsJb;
   private BlockHitResult zrqTl;
   private oz EJHXC;
   private boolean WGosN;
   private static String[] VeyqH;
   private static long PDnjd;

   oT(Hand var1, oS var2, BlockHitResult var3, oz var4, boolean var5) {
      this.cVhsi = var1;
      this.NGsJb = var2;
      this.zrqTl = var3;
      this.EJHXC = var4;
      this.WGosN = var5;
   }

   static {
      Loader.doInit(oT.class);
      _61524ab86f33acf14ea59b92a413544a();
   }

   private static native MatchException cKU(MatchException var0);

   public native oz cKN();

   public native void cKP(Hand var1);

   public static native oT$vo cKC();

   public native void cKG(oz var1);

   private static native oz cKJ();

   public static native String[] cKT();

   public static native void cKS(String[] var0);

   public static native oT$vo cKB(Hand var0);

   private static native boolean cKK();

   public native void cKQ(oS var1);

   public native boolean cKO();

   public native void cKF(BlockHitResult var1);

   public native void cKR(boolean var1);

   public native Hand cKL();

   public native BlockPos cKE();

   private static native BlockHitResult cKI();

   public native BlockHitResult cKD();

   private static native oS cKH();

   public native oS cKM();

   private static native void _61524ab86f33acf14ea59b92a413544a();
}
