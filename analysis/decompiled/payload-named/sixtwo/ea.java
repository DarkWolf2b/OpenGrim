package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ea extends gg {
   private final cC rzTvo;
   private static long xPCiw;
   private static String ENAXX;
   private static long[] ADNhJ;
   private static Integer[] CORiV;
   private static Map VZXHC;

   private static native void _9cc2c0b9f3964686b5ba2b38633269d2();

   public ea() {
      long var1 = xPCiw ^ 49148503248488L;
      super(gf.aZL(arn<"n">(30947, 6877757805985104279L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[arn<"n">(8583, 8934117558208616701L ^ var1)];
      var10004[0] = arn<"n">(19650, 2954325797468452271L ^ var1);
      var10004[1] = arn<"n">(12989, 8534271854718471109L ^ var1);
      var10004[2] = arn<"n">(7873, 7194462114081630142L ^ var1);
      var10004[3] = arn<"n">(30511, 3366005449019330143L ^ var1);
      var10004[4] = arn<"n">(12125, 4544177692476823078L ^ var1);
      var10004[5] = arn<"n">(31943, 3443622148546332084L ^ var1);
      var10004[arn<"n">(27143, 5649013245430764398L ^ var1)] = arn<"n">(27362, 7114261740768236447L ^ var1);
      var10004[arn<"n">(26122, 5006836397328572261L ^ var1)] = arn<"n">(29594, 37501757611117293L ^ var1);
      var10004[arn<"n">(25299, 3718262991916899242L ^ var1)] = arn<"n">(1390, 3325791303671741468L ^ var1);
      var10004[arn<"n">(18683, 6200543159231721866L ^ var1)] = arn<"n">(20181, 9165769727966394299L ^ var1);
      var10004[arn<"n">(5224, 7625145696009776414L ^ var1)] = arn<"n">(18304, 1836489168567287548L ^ var1);
      var10004[arn<"n">(4657, 456784529162005327L ^ var1)] = arn<"n">(6715, 8132492243424273235L ^ var1);
      var10004[arn<"n">(31244, 2149593512866907001L ^ var1)] = arn<"n">(24985, 5316362936114714869L ^ var1);
      this.rzTvo = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(10.0).VA(0.0).Vz(ENAXX);
   }

   static {
      Loader.doInit(ea.class);
      _9cc2c0b9f3964686b5ba2b38633269d2();
   }

   private static native int arm(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite arn(Lookup var0, String var1, MethodType var2);

   private static native MatchException arj(MatchException var0);

   private static native int arl(int var0, long var1);

   @hG
   public native void ari(gH$th var1);

   private static native String ark(byte[] var0);
}
