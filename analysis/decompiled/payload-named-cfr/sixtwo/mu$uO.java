/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.Iterator;
import java.util.List;
import java.util.NoSuchElementException;
import native.Loader;
import sixtwo.mu;

class mu$uO
implements Iterator<T> {
    int QUqEO;
    final List sQWtz;
    private static long QSZHT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    mu$uO(mu mu2, List list) {
        this.sQWtz = list;
        this.QUqEO = this.sQWtz.size() - 1;
    }

    static {
        Loader.doInit(mu$uO.class);
        mu$uO._e37fb7c09a41424ba7338f7948cdf6b0();
    }

    @Override
    public native boolean hasNext();

    @Override
    public native T next();

    private static native NoSuchElementException dvw(NoSuchElementException var0);

    private static native void _e37fb7c09a41424ba7338f7948cdf6b0();
}

