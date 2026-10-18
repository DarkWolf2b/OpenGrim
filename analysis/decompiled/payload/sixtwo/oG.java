package sixtwo;

import native.Loader;
import net.minecraft.class_1309;
import net.minecraft.class_1799;

public class oG extends oK {
   private final class_1309 QyMWj;
   private static long uNzNr;
   private static long dQDPC;

   public oG() {
      this(null);
   }

   public oG(class_1309 var1) {
      this.QyMWj = var1;
   }

   static {
      Loader.doInit(oG.class);
      _64f84ed7ae5974478316d18e59d479fd();
   }

   @Override
   public native class_1799 cIu();

   private static native MatchException cIw(MatchException var0);

   @Override
   public native int cIv();

   private static native void _64f84ed7ae5974478316d18e59d479fd();
}
