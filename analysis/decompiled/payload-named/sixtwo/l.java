package sixtwo;

import native.Loader;

public class l extends k {
   private static final float LHwUX = 7.5F;
   private static final float blfFN = 4.0F;
   private lq hylSK = lE.WTzbi.bYM(7.0F);
   private int[] lViNc;

   public l(az var1, int[] var2, boolean var3) {
      super(var1, var3);
      this.lViNc = var2;
   }

   public l(az var1, boolean var2) {
      super(var1, var2);
   }

   public l(az var1) {
      this(var1, false);
   }

   public l(az var1, int[] var2) {
      this(var1, var2, false);
   }

   static {
      Loader.doInit(l.class);
   }

   @Override
   protected native void cd(lC var1, float var2, float var3);

   @Override
   protected native float cb();

   @Override
   protected native float cc();

   public native l cO(int[] var1);

   public native l cP(String var1);

   public native l cR(mG var1);

   public native l cS(mG var1);

   public native l cU(int var1);

   public native l cQ(lq var1);

   public native l cT(ld var1);
}
