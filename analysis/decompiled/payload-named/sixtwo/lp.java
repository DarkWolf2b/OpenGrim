package sixtwo;

import java.util.Map;
import native.Loader;

public final class lp {
   private final byte[] JaLEf;
   private final li wvwxF;
   private final Map<Integer, ll> Weixs;
   private final Map<Integer, Map<Integer, Float>> walbu;
   private static long jtBoX;

   public lp(byte[] var1, li var2, Map<Integer, ll> var3, Map<Integer, Map<Integer, Float>> var4) {
      long var5 = jtBoX ^ 4482861090108L;
      int var10000 = lq.cay();
      super();
      int var7 = var10000;

      try {
         this.JaLEf = var1;
         this.wvwxF = var2;
         this.Weixs = var3;
         this.walbu = var4;
         if (var7 != 0) {
            iS.bwK("USpwWb");
         }
      } catch (MatchException var8) {
         throw can(var8);
      }
   }

   static {
      Loader.doInit(lp.class);
      _305a70d79064b1237a33bfc3ecb3e346();
   }

   public native Map<Integer, ll> cal();

   public native li cak();

   public native byte[] caj();

   public native Map<Integer, Map<Integer, Float>> cam();

   private static native MatchException can(MatchException var0);

   private static native void _305a70d79064b1237a33bfc3ecb3e346();
}
