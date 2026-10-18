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

public final class mw
extends Enum<mw> {
    public static /* enum */ mw ZUeMI;
    public static /* enum */ mw oxyHZ;
    public static /* enum */ mw uwYcK;
    public static /* enum */ mw uWTdl;
    public static /* enum */ mw Itsnz;
    public static /* enum */ mw hrPmv;
    private final int IQqdf;
    private static /* synthetic */ mw[] wlEwZ;
    private static long uAFeA;
    private static long[] pBJIn;
    private static Integer[] ANWvd;
    private static Map dlGvS;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native String cmF(byte[] var0);

    private static native CallSite cmI(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ mw[] cmE();

    private static native int cmG(int var0, long var1);

    private static native int cmH(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private mw(int n3) {
        this.IQqdf = n3;
    }

    static {
        Loader.doInit(mw.class);
        mw._6cbe60407787b8c91479d0775ab74599();
    }

    public static native mw[] values();

    public static native mw valueOf(String var0);

    public native int cmD();

    private static native void _6cbe60407787b8c91479d0775ab74599();
}

