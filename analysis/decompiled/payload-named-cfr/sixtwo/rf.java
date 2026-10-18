/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import sixtwo.rb;

public final class rf
extends Enum<rf> {
    public static /* enum */ rf BfWtc;
    public static /* enum */ rf jojsN;
    public static /* enum */ rf wSUrn;
    public static /* enum */ rf OzzRG;
    public static /* enum */ rf SXABY;
    public static /* enum */ rf HfrXE;
    public static /* enum */ rf CmnWh;
    public static /* enum */ rf ElhZz;
    private final String lJQiS;
    private final rb ZDulw;
    private static /* synthetic */ rf[] zDftb;
    private static long sLAId;
    private static long[] qnSIL;
    private static Integer[] hxbFt;
    private static Map uOhBb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private rf(String string2, rb rb2) {
        this.lJQiS = string2;
        this.ZDulw = rb2;
    }

    static {
        Loader.doInit(rf.class);
        rf._1efc495649140682cc8d6bb31bc652a4();
    }

    public static native rf[] values();

    public static native rf valueOf(String var0);

    private static native void _1efc495649140682cc8d6bb31bc652a4();

    public native rb dfu();

    private static native /* synthetic */ rf[] dfv();

    private static native String dfw(byte[] var0);

    private static native int dfx(int var0, long var1);

    private static native int dfy(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite dfz(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native String dft();
}

