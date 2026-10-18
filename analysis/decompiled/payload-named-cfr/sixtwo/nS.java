/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;

public final class nS
extends RuntimeException {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public nS(Throwable throwable) {
        super(throwable);
    }

    static {
        Loader.doInit(nS.class);
    }

    @Override
    public synchronized native Throwable fillInStackTrace();
}

