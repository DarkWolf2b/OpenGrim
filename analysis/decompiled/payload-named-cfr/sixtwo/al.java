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
import sixtwo.Y;
import sixtwo.az;
import sixtwo.bl;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public class al
extends az {
    private final rk YwcCr;
    private final rk bVDav;
    private final Y AAiYe;
    private static long fZIcG;
    private static long[] KtGNT;
    private static Integer[] dqbdU;
    private static Map cEnnF;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public al() {
        long l2 = fZIcG ^ 0x3D0CA657FBA2L;
        this.YwcCr = new rk((int)al.oW("z", (int)2131, (long)(0x6C9D9396F94374F4L ^ l2))).dhs(rj.UPXqT);
        this.bVDav = new rk((int)al.oW("z", (int)20498, (long)(0x58E7B0BCD9352CB4L ^ l2))).dhs(rj.UPXqT);
        this.AAiYe = new Y().kf(lE.WTzbi.bYM(8.0f)).kg(bl.Ex().EB().wp().vD()).ki(5.0f).kj((int)al.oW("z", (int)20498, (long)(0x58E7B0BCD9352CB4L ^ l2))).kk(rj.UPXqT);
    }

    static {
        Loader.doInit(al.class);
        al._bf34f1a8893d163f659ad88c81e89d47();
    }

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    private static native void _bf34f1a8893d163f659ad88c81e89d47();

    public native rk oQ();

    public native rk oR();

    public native Y oS();

    private static native CallSite oW(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException oT(MatchException var0);

    private static native int oU(int var0, long var1);

    private static native int oV(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

