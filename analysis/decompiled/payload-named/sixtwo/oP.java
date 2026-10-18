package sixtwo;

import native.Loader;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;

public class oP {
   public static native oQ<oI> cJm();

   static {
      Loader.doInit(oP.class);
   }

   public static native oQ<oJ> cJq();

   public static native oQ<oJ> cJr(LivingEntity var0);

   public static native oQ<oH> cJp(PlayerEntity var0);

   public static native oQ<oH> cJo();

   public static native oQ<oI> cJn(PlayerEntity var0);

   public static native oQ<oG> cJt(LivingEntity var0);

   public static native oQ<oG> cJs();
}
