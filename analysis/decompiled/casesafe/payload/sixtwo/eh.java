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
      super(gf.aZL(asD<"v">(27431, 8050292827782437975L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[asD<"v">(677, 9070088267032704470L ^ var1)];
      var10004[0] = asD<"v">(29476, 4470726312496055388L ^ var1);
      var10004[1] = asD<"v">(11017, 6300867550145387643L ^ var1);
      var10004[2] = asD<"v">(31099, 1982305314057244161L ^ var1);
      var10004[3] = asD<"v">(31782, 3379456868336683866L ^ var1);
      var10004[4] = asD<"v">(32224, 6273914657550944923L ^ var1);
      var10004[5] = asD<"v">(31099, 1982305314057244161L ^ var1);
      var10004[asD<"v">(32625, 2592163709823862799L ^ var1)] = asD<"v">(23856, 8126921324237253199L ^ var1);
      var10004[asD<"v">(5005, 3099627866501293296L ^ var1)] = asD<"v">(24583, 6389868067048019838L ^ var1);
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
