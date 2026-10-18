/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.hJ;
import sixtwo.hL;
import sixtwo.hX;
import sixtwo.hZ;

public class hV {
    private static long CjUfr;
    private static String[] ItxYX;
    private static String[] tMXNc;
    private static Map LnNrY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(hV.class);
        hV._9aa1e13785ce9e8c408be64da5d6938f();
    }

    public native hZ bfU();

    private static native /* synthetic */ void bfW(hX var0);

    private static native /* synthetic */ void bfX(hL var0);

    private static native Object bgc(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native List<String> bfV();

    private static native /* synthetic */ hJ bfY(String var0);

    private static native CallSite bgd(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String bga(byte[] var0);

    private static native String bgb(int var0, long var1);

    private static native MatchException bfZ(MatchException var0);

    private static native void _9aa1e13785ce9e8c408be64da5d6938f();
}

