package sixtwo;

import native.Loader;

public class eM extends gg {
   boolean XOnBS;
   mT Zrjec;
   private static long oIeWA;
   private static long Nsfxs;

   public eM() {
      long var1 = oIeWA ^ 123810452278406L;
      super(gf.aZL((int)Nsfxs, false, gh.xwjCw));
      this.Zrjec = mT.cpz();
   }

   static {
      Loader.doInit(eM.class);
      _00a84fada65ad00e7d3bea41bbe99f6a();
   }

   private static native void _00a84fada65ad00e7d3bea41bbe99f6a();

   @hG(
      priority = mw.HIGH
   )
   public native void aAY(hw$tv var1);

   @hG
   public native void aAZ(gH$th var1);

   private static native MatchException aBa(MatchException var0);
}
