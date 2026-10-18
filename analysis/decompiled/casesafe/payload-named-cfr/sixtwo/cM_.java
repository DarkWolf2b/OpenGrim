/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.mG;

public final class cM
extends Enum<cM> {
    public static /* enum */ cM dzTse;
    public static /* enum */ cM WCwDP;
    public static /* enum */ cM MENWL;
    private final String xFxGY;
    private final mG cbCbj;
    private static /* synthetic */ cM[] NAnkv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private cM(String string2, mG mG2) {
        this.xFxGY = string2;
        this.cbCbj = mG2;
    }

    static {
        Loader.doInit(cM.class);
        cM._4bf5e56081b896906b4db03f7dfadf24();
    }

    public static native cM[] values();

    public static native cM valueOf(String var0);

    private static native void _4bf5e56081b896906b4db03f7dfadf24();

    private static native /* synthetic */ cM[] XD();

    private static native String XE(byte[] var0);

    public native mG XC();

    public native String XB();

    public native cM XA();
}

