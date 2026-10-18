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
import sixtwo.U;
import sixtwo.X;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lq;
import sixtwo.mA;

public class O
extends X<O> {
    private String qMWaw = "";
    private lq FsqIl = lE.WTzbi.bYM(7.0f);
    private static long xjBVw;
    private static String[] xhnib;
    private static String[] hHuXm;
    private static Map taeQR;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(O.class);
        O._16491c2ff306fd0edde8e1f9c010936f();
    }

    @Override
    public native float dn();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    public native O hD(U var1);

    public native lq hH();

    private static native CallSite hM(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native O hC(String var1);

    private static native MatchException hI(MatchException var0);

    private static native Object hL(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String hK(int var0, long var1);

    public native String hG();

    public native O hF(lq var1);

    private static native String hJ(byte[] var0);

    private static native void _16491c2ff306fd0edde8e1f9c010936f();

    public static native O hE(String var0);
}

