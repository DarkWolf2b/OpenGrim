/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Item
 */
package sixtwo;

import net.minecraft.item.Item;

record pv$vx(Item item, long createdAt, long durationMillis) {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private long remainingMillis() {
        return this.durationMillis - (System.currentTimeMillis() - this.createdAt);
    }
}

