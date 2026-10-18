package sixtwo;

import native.Loader;
import net.minecraft.class_1297;

public class ot {
   private final ov YsbSE;
   private final class_1297 sHYgS;
   private final os sdyTw;
   private final int CXvBl;
   private final float LcRty;
   private final boolean YBFXu;
   private final boolean VqVzU;
   private final ow DYYof;
   private static long MQGNA;

   public ot(ov var1, class_1297 var2, os var3, int var4, float var5, boolean var6, ow var7, boolean var8) {
      long var9 = MQGNA ^ 48658864548419L;
      ov.cGN();
      super();
      this.YsbSE = var1;
      this.sHYgS = var2;
      this.sdyTw = var3;

      try {
         this.CXvBl = var4;
         this.LcRty = var5;
         this.YBFXu = var6;
         this.DYYof = var7;
         this.VqVzU = var8;
         if (iS.bwL() == null) {
            ov.cGM(new iS[3]);
         }
      } catch (MatchException var12) {
         throw cGo(var12);
      }
   }

   static {
      Loader.doInit(ot.class);
      _c28d24d0d0ca6e63f7ddd4b6f01c3d6d();
   }

   public native boolean cGg();

   public native boolean cGm();

   private static native MatchException cGo(MatchException var0);

   public native ov cGh();

   public native class_1297 cGi();

   public native int cGk();

   public native boolean cGf();

   public native ov cGd(ov var1, boolean var2);

   public native os cGj();

   public native ow cGn();

   public native float cGl();

   private static native void _c28d24d0d0ca6e63f7ddd4b6f01c3d6d();

   public native boolean cGe();
}
