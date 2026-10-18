package sixtwo;

import native.Loader;
import net.minecraft.item.BlockItem;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.util.hit.BlockHitResult;

public class fi extends gg {
   ol nMxfO;
   boolean JNPbj;
   private static long mrGdR;
   private static long PeXkt;

   public fi() {
      long var1 = mrGdR ^ 55341903519611L;
      super(gf.aZL((int)PeXkt, false, gh.xwjCw));
      this.nMxfO = new ol(this);
   }

   static {
      Loader.doInit(fi.class);
      _55a4974bb450ef2fd2bd306cedaa38f9();
   }

   private static native void _55a4974bb450ef2fd2bd306cedaa38f9();

   @hG
   public native void aJm(gM var1);

   @hG
   public native void aJn(gH$th var1);

   private native boolean aJs(ItemStack var1);

   private native boolean aJt(ItemStack var1, Item var2);

   private native boolean aJv(ItemStack var1, Item var2);

   private static native MatchException aJx(MatchException var0);

   private native boolean aJu(ItemStack var1, BlockItem var2, BlockHitResult var3);

   private native void aJw();

   private native boolean aJr(ItemStack var1);

   private native boolean aJq();

   private native void aJp();

   private native void aJo();

   @Override
   public native void YO();
}
