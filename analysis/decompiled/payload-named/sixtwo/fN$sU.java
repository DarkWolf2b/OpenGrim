package sixtwo;

import native.Loader;
import net.minecraft.entity.player.PlayerSkinType;
import net.minecraft.util.AssetInfo.TextureAsset;

record fN$sU(int[] name, TextureAsset texture, PlayerSkinType model) {
   static {
      Loader.doInit(fN$sU.class);
   }

   public native int[] name();

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native PlayerSkinType model();

   public native TextureAsset texture();
}
