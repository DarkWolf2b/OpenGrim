/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.concurrent.CompletableFuture;
import native.Loader;

public class oc {
    private final byte[] JfvPh;
    private static long ZGgIX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oc(byte[] byArray) {
        this.JfvPh = byArray;
    }

    static {
        Loader.doInit(oc.class);
        oc._1d46882e67edd745344f721f66ee78a9();
    }

    public static native CompletableFuture<oc> cBK(String var0);

    public static native oc cBJ(String var0);

    public static native CompletableFuture<oc> cBL(String var0);

    public native void cBM();

    public native byte[] cBN();

    private static native MatchException cBO(MatchException var0);

    private static native void _1d46882e67edd745344f721f66ee78a9();
}

