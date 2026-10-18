/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CopyOnWriteArrayList;
import native.Loader;
import sixtwo.iS;
import sixtwo.it;
import sixtwo.iu;

public class iv {
    private final it QSnra;
    private volatile iu iMNtZ;
    private final CopyOnWriteArrayList<Runnable> YBBgC;
    private static String FjYKk;
    private static long bvKIY;
    private static String lrwfu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public iv(it it2) {
        long l2 = bvKIY ^ 0x5E2190696D9CL;
        String string = iv.bnQ();
        String string2 = string;
        try {
            this.YBBgC = new CopyOnWriteArrayList();
            this.QSnra = it2;
            if (string2 == null) {
                iS.bwK("IwRUt");
            }
        }
        catch (MatchException matchException) {
            throw iv.bnR(matchException);
        }
    }

    static {
        Loader.doInit(iv.class);
        iv._1c48381a34d1c5da094b65381060527d();
    }

    public static native void bnP(String var0);

    public static native String bnQ();

    private static native /* synthetic */ iu bnN(Throwable var0);

    private native void bnJ();

    private static native MatchException bnR(MatchException var0);

    public native void bnI(Runnable var1);

    private native /* synthetic */ iu bnO(iu var1);

    public native void bnK(iu var1);

    public native CompletableFuture<iu> bnL();

    private static native String bnS(byte[] var0);

    public native iu bnM();

    private static native void _1c48381a34d1c5da094b65381060527d();
}

