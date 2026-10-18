/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.mI$uR;

final class mI$uQ
extends Record {
    private final mI$uR frame;
    private final byte[] bytes;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private mI$uQ(mI$uR mI$uR, byte[] byArray) {
        this.frame = mI$uR;
        this.bytes = byArray;
    }

    static {
        Loader.doInit(mI$uQ.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native byte[] bytes();

    public native mI$uR frame();
}

