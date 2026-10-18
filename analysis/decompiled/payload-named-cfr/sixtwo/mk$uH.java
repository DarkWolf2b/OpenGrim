/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.EntityType
 *  net.minecraft.entity.projectile.PersistentProjectileEntity
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import java.util.function.BiConsumer;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.projectile.PersistentProjectileEntity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;

public record mk$uH(Class<? extends Item> itemClass, EntityType<?> entityType, boolean persistent, BiConsumer<ItemStack, PersistentProjectileEntity> setupRoutine) {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public boolean isSame(Item item) {
        return this.itemClass.isInstance(item);
    }
}

