/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;

final class by$sf
extends Record {
    private final boolean hasVisibleChips;
    private final int lines;
    private final float chipHeight;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private by$sf(boolean bl2, int n2, float f2) {
        this.hasVisibleChips = bl2;
        this.lines = n2;
        this.chipHeight = f2;
    }

    static {
        Loader.doInit(by$sf.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native int lines();

    public native boolean hasVisibleChips();

    public native float chipHeight();
}

