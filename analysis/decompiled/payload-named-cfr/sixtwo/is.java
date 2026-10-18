/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.concurrent.CompletableFuture;
import native.Loader;
import sixtwo.iE;
import sixtwo.it;
import sixtwo.iu;

public class is
extends iE
implements it {
    private static String[] ykGsx;
    private static long XJwCK;
    private static String yHmZL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(is.class);
        is._8334f049a30c12a06eb2511895198da0();
    }

    public static native String[] bmK();

    private static native MatchException bmL(MatchException var0);

    private static native String bmM(byte[] var0);

    public static native void bmJ(String[] var0);

    private static native void _8334f049a30c12a06eb2511895198da0();

    @Override
    public native CompletableFuture<iu> fetchProfile();
}

