package sixtwo;

import native.Loader;
import net.minecraft.entity.Entity;

public class ou {
   public static ou kxNyl;
   private final os WsJcz;
   private final float otxSd = 2.0F;
   private final int ZyFmJ;
   private final boolean ZTJBz;
   private final ow fTnvQ;
   private final boolean ZADMU;
   private static long WASOI;

   public ou(os var1) {
      this(var1, true, false, false, 3, false);
   }

   public ou(os var1, boolean var2, ow var3, int var4, boolean var5) {
      this.WsJcz = var1;
      this.ZTJBz = var2;
      this.fTnvQ = var3;
      this.ZyFmJ = var4;
      this.ZADMU = var5;
   }

   public ou(os var1, boolean var2, ow var3, boolean var4) {
      this(var1, var2, var3, 3, var4);
   }

   public ou(os var1, boolean var2, boolean var3, boolean var4, int var5, boolean var6) {
      this(var1, var2, cGt(var3, var4), var5, var6);
   }

   public ou(os var1, boolean var2, boolean var3, boolean var4, boolean var5) {
      this(var1, var2, cGt(var3, var4), 3, var5);
   }

   static {
      Loader.doInit(ou.class);
      _490c6820228eb538237f83714be8090c();
   }

   private static native void _490c6820228eb538237f83714be8090c();

   private static native ow cGt(boolean var0, boolean var1);

   private static native MatchException cGu(MatchException var0);

   public native ot cGr(ov var1, Entity var2, boolean var3, boolean var4, boolean var5, boolean var6);

   public native ot cGs(ov var1, Entity var2, boolean var3, ow var4, boolean var5);

   public native ot cGp(ov var1, Entity var2);

   public native ot cGq(ov var1);
}
