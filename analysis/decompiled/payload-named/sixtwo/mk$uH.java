package sixtwo;

import java.util.function.BiConsumer;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.projectile.PersistentProjectileEntity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;

public record mk$uH(
   Class<? extends Item> itemClass, EntityType<?> entityType, boolean persistent, BiConsumer<ItemStack, PersistentProjectileEntity> setupRoutine
) {
   public boolean isSame(Item var1) {
      return this.itemClass.isInstance(var1);
   }
}
