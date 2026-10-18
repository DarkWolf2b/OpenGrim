package sixtwo;

import java.util.Map;
import native.Loader;
import net.minecraft.util.math.BlockPos;

public class oU {
   public static Map<BlockPos, Long> Xrdom;
   private static long sTPpe;

   public oU() {
      hF.bdI(this);
   }

   static {
      Loader.doInit(oU.class);
      _2bda7cb231f64d149b404b87ecfe20b1();
   }

   @hG
   public native void cKW(gH$th var1);

   @hG
   public native void cKX(gV var1);

   private static native MatchException cLa(MatchException var0);

   @hG
   public native void cKV(gM var1);

   public native boolean cKY(oT var1);

   private static native void _2bda7cb231f64d149b404b87ecfe20b1();
}
