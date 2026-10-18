/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.hZ;

final class ia$tF
extends Record {
    private final hZ command;
    private final int index;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public native int index();

    private ia$tF(hZ hZ2, int n2) {
        this.command = hZ2;
        this.index = n2;
    }

    static {
        Loader.doInit(ia$tF.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native hZ command();
}

