/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.hJ;

public final class hJ$tx<T>
extends Record
implements hJ {
    private final T value;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public hJ$tx(T t) {
        this.value = t;
    }

    static {
        Loader.doInit(hJ$tx.class);
    }

    public native T value();

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();
}

