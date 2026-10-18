package sixtwo;

import java.util.ArrayList;
import java.util.List;
import native.Loader;

public class iS {
   protected List<cB> oZllQ;
   private static String GYeud;
   private static long kFZrs;

   public iS() {
      long var1 = kFZrs ^ 17043659891845L;
      String var10000 = gf.aZY();
      super();
      String var3 = var10000;

      try {
         this.oZllQ = new ArrayList<>();
         if (var3 != null) {
            bwK("qLIdWc");
         }
      } catch (MatchException var4) {
         throw bwM(var4);
      }
   }

   static {
      Loader.doInit(iS.class);
      _3e90acdd50c76b988d525cf192640a11();
   }

   public static native String bwL();

   private static native MatchException bwM(MatchException var0);

   public native <T extends cB> T bwH(T var1);

   public native List<cB> bwI();

   public static native void bwK(String var0);

   public native iS bwJ(List<cB> var1);

   private static native void _3e90acdd50c76b988d525cf192640a11();
}
