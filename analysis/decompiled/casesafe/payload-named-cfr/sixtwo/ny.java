/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 *  net.minecraft.screen.slot.Slot
 */
package sixtwo;

import native.Loader;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.slot.Slot;
import sixtwo.nx;

public class ny
extends nx {
    private final long mhxFk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ny(ItemStack itemStack, Slot slot, long l2) {
        super(itemStack, slot);
        this.mhxFk = l2;
    }

    static {
        Loader.doInit(ny.class);
    }

    public native long cwl();
}

