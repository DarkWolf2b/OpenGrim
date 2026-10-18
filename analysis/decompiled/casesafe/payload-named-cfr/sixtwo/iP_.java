/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import native.Loader;
import sixtwo.bj;
import sixtwo.iM;
import sixtwo.iO;

public class iP {
    private final Map<String, iO> kHIxx = new ConcurrentHashMap<String, iO>();
    private final Map<String, int[]> POcAW = new ConcurrentHashMap<String, int[]>();
    private static long vJphY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public native void buJ(iO var1);

    public native iO buK(String var1);

    public native boolean buL(String var1);

    public native void buM(String var1);

    public native void buI(iM var1);

    private static native /* synthetic */ boolean buQ(iO var0, bj var1);

    private static native MatchException buR(MatchException var0);

    private static native /* synthetic */ boolean buP(iO var0, bj var1);

    public native Map<String, iO> buN();

    public native Map<String, int[]> buO();

    static {
        Loader.doInit(iP.class);
        iP._f128db71b91b598847d95e7f5457b384();
    }

    private static native void _f128db71b91b598847d95e7f5457b384();
}

