/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.hK;

public final class hM<T>
extends Record {
    private final String name;
    private final boolean required;
    private final boolean vararg;
    private final hK validator;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public hM(String string, boolean bl2, boolean bl3, hK hK2) {
        this.name = string;
        this.required = bl2;
        this.vararg = bl3;
        this.validator = hK2;
    }

    static {
        Loader.doInit(hM.class);
    }

    public native String name();

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native boolean required();

    public native hK validator();

    public native boolean vararg();
}

