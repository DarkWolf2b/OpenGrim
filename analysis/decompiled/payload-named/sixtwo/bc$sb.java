package sixtwo;

import native.Loader;

class bc$sb extends az {
   private final Object bAjVG;
   private final cB ghlhU;
   private final int[] hhZmz;
   private final int[] jLLoD;
   private final int[] whbju;
   final bc fJevp;
   private static long ENaeo;
   private static String LgTly;
   private static long aupXC;

   public bc$sb(bc var1, Object var2, cB var3, int[] var4, int[] var5, int[] var6) {
      this.fJevp = var1;
      this.bAjVG = var2;
      this.ghlhU = var3;
      this.hhZmz = var4;
      this.jLLoD = var5;
      this.whbju = var6;
   }

   static {
      Loader.doInit(bc$sb.class);
      _5ba714509a8f0b92bcd19ff33b74b026();
   }

   @Override
   public native boolean dm(int var1, int var2, int var3);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   private static native void _5ba714509a8f0b92bcd19ff33b74b026();

   private static native MatchException dnh(MatchException var0);

   private native void dng();

   private native boolean dnf();

   private static native String dni(byte[] var0);
}
