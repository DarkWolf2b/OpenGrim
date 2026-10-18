/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.Hand
 */
package sixtwo;

import native.Loader;
import net.minecraft.util.Hand;

final class fl$sP
extends Record {
    private final int hotbarSlot;
    private final Hand hand;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private fl$sP(int n2, Hand hand) {
        this.hotbarSlot = n2;
        this.hand = hand;
    }

    static {
        Loader.doInit(fl$sP.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native int hotbarSlot();

    public native Hand hand();
}

