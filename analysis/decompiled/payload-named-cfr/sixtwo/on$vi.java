/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.player.PlayerEntity;

final class on$vi
extends Record {
    private final PlayerEntity target;
    private final int createdTick;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private on$vi(PlayerEntity playerEntity, int n2) {
        this.target = playerEntity;
        this.createdTick = n2;
    }

    static {
        Loader.doInit(on$vi.class);
    }

    @Override
    public final native boolean equals(Object var1);

    public native PlayerEntity target();

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native int createdTick();
}

