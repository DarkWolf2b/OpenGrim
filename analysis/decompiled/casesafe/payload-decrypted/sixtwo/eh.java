package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eh extends gg {
   private final cA GYRzq;
   private final mT XWHiC;
   private static long GhdJL;
   private static String QZqXr;
   private static long[] aNeIU;
   private static Integer[] edZTg;
   private static Map XmJDu;

   private static native void _37a1913627cf415695d1ec468fdbedf4();

   public eh() {
      long var1 = GhdJL ^ 114103401806636L;
      super(gf.aZL(25, false, gh.qBzlZ));
      int[] var10004 = new int[8];
      var10004[0] = 67;
      var10004[1] = 111;
      var10004[2] = 111;
      var10004[3] = 108;
      var10004[4] = 100;
      var10004[5] = 111;
      var10004[6] = 119;
      var10004[7] = 110;
      this.GYRzq = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(QZqXr);
      this.XWHiC = mT.cpz();
   }

   static {
      Loader.doInit(eh.class);
      _37a1913627cf415695d1ec468fdbedf4();
   }

   private static native CallSite asD(Lookup var0, String var1, MethodType var2);

   private static native int asB(int var0, long var1);

   private static native int asC(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String asA(byte[] var0);

   @hG
   public native void asy(gH$th var1);

   private static native MatchException asz(MatchException var0);
}
