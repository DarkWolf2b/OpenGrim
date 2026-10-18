package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eR extends gg {
   private final cD woKJb;
   private final cJ aBhOM;
   private final mT OahHn;
   private boolean qdiLm;
   private static long BatsP;
   private static long[] xMZKo;
   private static Integer[] PeQZj;
   private static Map KmTJA;
   private static long MYLev;

   public eR() {
      long var1 = BatsP ^ 71796501269345L;
      super(gf.aZL(119, false, gh.xwjCw));
      int[] var10004 = new int[14];
      var10004[0] = 65;
      var10004[1] = 99;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 118;
      var10004[5] = 97;
      var10004[6] = 116;
      var10004[7] = 105;
      var10004[8] = 111;
      var10004[9] = 110;
      var10004[10] = 32;
      var10004[11] = 75;
      var10004[12] = 101;
      var10004[13] = 121;
      this.woKJb = new cD(this, mr.clS(var10004)).VO(-999);
      var10004 = new int[14];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 108;
      var10004[3] = 121;
      var10004[4] = 32;
      var10004[5] = 79;
      var10004[6] = 110;
      var10004[7] = 32;
      var10004[8] = 71;
      var10004[9] = 114;
      var10004[10] = 111;
      var10004[11] = 117;
      var10004[12] = 110;
      var10004[13] = 100;
      this.aBhOM = new cJ(this, mr.clS(var10004)).WE(true);
      this.OahHn = mT.cpz();
   }

   static {
      Loader.doInit(eR.class);
      _1b1ad07ec9b5fb283d5bab13b747fd08();
   }

   private static native void _1b1ad07ec9b5fb283d5bab13b747fd08();

   @hG
   public native void aCG(gv var1);

   private static native int aCL(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aCM(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aCH(gH$th var1);

   private static native MatchException aCJ(MatchException var0);

   private static native int aCK(int var0, long var1);

   @hG
   public native void aCF(gA var1);

   @Override
   public native void YO();
}
