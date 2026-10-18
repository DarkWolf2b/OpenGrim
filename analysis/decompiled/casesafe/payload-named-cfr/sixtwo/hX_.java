/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import native.Loader;
import sixtwo.hZ;

public final class hX
extends Record {
    private final hZ command;
    private final List<Object> arguments;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public hX(hZ hZ2, List<Object> list) {
        this.command = hZ2;
        this.arguments = list;
    }

    static {
        Loader.doInit(hX.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native List<Object> arguments();

    public native hZ command();
}

