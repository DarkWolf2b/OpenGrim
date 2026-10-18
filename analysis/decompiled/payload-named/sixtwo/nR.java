package sixtwo;

import native.Loader;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.screen.ScreenHandler;

public class nR {
   private final mT bfVpM = mT.cpz();
   private boolean jWoqR;
   private int fqxWu;
   private static long PmJqu;

   private static native void _df27f4d65e9fda3180c5e7cf489cf462();

   static {
      Loader.doInit(nR.class);
      _df27f4d65e9fda3180c5e7cf489cf462();
   }

   public native void czb();

   public native void cyX(ScreenHandler var1);

   public native void cyY(HandledScreen<?> var1);

   public native mT czc();

   public native boolean cyZ(long var1);

   public native int cze();

   private static native MatchException czf(MatchException var0);

   public native boolean czd();

   public native void cza();
}
