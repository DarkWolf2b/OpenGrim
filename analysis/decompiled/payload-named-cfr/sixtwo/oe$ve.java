/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;

public final class oe$ve
extends Record {
    private final int maxAttempts;
    private final long initialBackoffMs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oe$ve(int n2, long l2) {
        this.maxAttempts = n2;
        this.initialBackoffMs = l2;
    }

    static {
        Loader.doInit(oe$ve.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native int maxAttempts();

    public native long initialBackoffMs();
}

