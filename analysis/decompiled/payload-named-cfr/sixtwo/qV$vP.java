/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;

final class qV$vP
extends Record {
    private final double top;
    private final double mean;
    private final double standardDeviation;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private qV$vP(double d2, double d3, double d4) {
        this.top = d2;
        this.mean = d3;
        this.standardDeviation = d4;
    }

    static {
        Loader.doInit(qV$vP.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native double top();

    public native double mean();

    public native double standardDeviation();
}

