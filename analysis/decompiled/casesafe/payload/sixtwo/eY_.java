package sixtwo;

import java.util.concurrent.atomic.DoubleAdder;
import native.Loader;
import net.minecraft.class_1511;
import net.minecraft.class_1799;

public class eY extends gg {
   private final DoubleAdder dGDCh;
   private static long BGwTf;
   private static long pLxzJ;

   public eY() {
      long var1 = BGwTf ^ 67397498221082L;
      super(gf.aZL((int)pLxzJ, false, gh.xwjCw));
      this.dGDCh = new DoubleAdder();
   }

   static {
      Loader.doInit(eY.class);
      _ae19a68fccb83e5a6db3e56bb772df6b();
   }

   private static native void _ae19a68fccb83e5a6db3e56bb772df6b();

   private native void aFI(class_1511 var1);

   private static native MatchException aFK(MatchException var0);

   @hG
   public native void aFE(gL$tj var1);

   private native boolean aFF();

   private native double aFG();

   private native double aFH(class_1799 var1);
}
