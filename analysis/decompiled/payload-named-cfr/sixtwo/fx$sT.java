/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.oH;

final class fx$sT
extends Record {
    private final oH slot;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public native oH slot();

    private fx$sT(oH oH2) {
        this.slot = oH2;
    }

    static {
        Loader.doInit(fx$sT.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    private native int interactionSlot();
}

