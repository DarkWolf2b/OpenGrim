package sixtwo;

import native.Loader;
import net.minecraft.entity.PlayerLikeEntity;
import net.minecraft.util.Identifier;

public enum rs$we {
   vefaf,
   BeeKi,
   AqXBm,
   hTsSe,
   SATwu,
   WGTLq;

   private final Identifier hZpEN;
   private final Identifier etCph;
   private final Identifier GEKwL;
   private final Identifier zrJSu;
   private static rs$we[] PRMBh;
   private static long OKbNr;
   private static long kaYIY;

   private rs$we(Identifier var3, Identifier var4, Identifier var5, Identifier var6) {
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

   public static native rs$we dyK(PlayerLikeEntity var0);

   public native Identifier dyJ(boolean var1, boolean var2);
}
