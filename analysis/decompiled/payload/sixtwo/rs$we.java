package sixtwo;

import native.Loader;
import net.minecraft.class_11890;
import net.minecraft.class_2960;

public enum rs$we {
   vefaf,
   BeeKi,
   AqXBm,
   hTsSe,
   SATwu,
   WGTLq;

   private final class_2960 hZpEN;
   private final class_2960 etCph;
   private final class_2960 GEKwL;
   private final class_2960 zrJSu;
   private static rs$we[] PRMBh;
   private static long OKbNr;
   private static long kaYIY;

   private rs$we(class_2960 var3, class_2960 var4, class_2960 var5, class_2960 var6) {
      this.hZpEN = var3;
      this.etCph = var4;
      this.GEKwL = var5;
      this.zrJSu = var6;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      Loader.doInit(rs$we.class);
      _171f123bc2ea189f3b1c71284e711efe();
   }

   private static native void _171f123bc2ea189f3b1c71284e711efe();

   private static native MatchException dyM(MatchException var0);

   private static native String dyN(byte[] var0);

   private static native rs$we[] dyL();

   public static native rs$we dyK(class_11890 var0);

   public native class_2960 dyJ(boolean var1, boolean var2);
}
