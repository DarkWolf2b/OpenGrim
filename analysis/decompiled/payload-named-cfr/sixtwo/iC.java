/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import native.Loader;
import sixtwo.iz;

public class iC {
    private volatile iz oGlJN;
    private final Set<String> ZfUZZ = ConcurrentHashMap.newKeySet();
    private final List<iz> gHFYR = new ArrayList<iz>();
    private static long pCyOc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(iC.class);
        iC._edcaa3034d725d5fb4641f753cf52629();
    }

    public native boolean bqL(String var1);

    public native iz bqM();

    public native iz bqJ(String var1);

    public native void bqP(iz var1);

    public native Set<String> bqN();

    private static native /* synthetic */ boolean bqQ(String var0, iz var1);

    private static native MatchException bqR(MatchException var0);

    public native List<iz> bqO();

    private static native void _edcaa3034d725d5fb4641f753cf52629();

    public native boolean bqK(String var1);

    public native iz bqI(String var1);
}

