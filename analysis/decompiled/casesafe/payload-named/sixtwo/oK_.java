package sixtwo;

import java.util.function.Predicate;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;

public abstract class oK {
   private static iS[] ObEWE;
   private static long EZxio;

   static {
      Loader.doInit(oK.class);
      _0f870e4f092a205f980e9c312e246d7b();
   }

   public native boolean cIT();

   public abstract ItemStack cIu();

   public static native iS[] cJa();

   public static native void cIZ(iS[] var0);

   public native void cIY();

   private static native MatchException cJb(MatchException var0);

   public native boolean cIV(Predicate<ItemStack> var1);

   public native boolean cIU(Item var1);

   public abstract int cIv();

   public native void cIW(oK var1);

   public native int cIR();

   public native Item cIS();

   public native void cIX();

   private static native void _0f870e4f092a205f980e9c312e246d7b();
}
