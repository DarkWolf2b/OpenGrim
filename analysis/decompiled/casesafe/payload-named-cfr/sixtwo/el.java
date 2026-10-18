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
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;

public class el
extends gg {
    private static long zseOG;
    private static long[] XPejI;
    private static Integer[] fDoMv;
    private static Map ItRIN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public el() {
        long l2 = zseOG ^ 0x97397442CF0L;
        super(gf.aZL((int)el.ath("f", (int)29397, (long)(0x70A67BAA05CAEB24L ^ l2)), false, gh.xgeEn));
    }

    static {
        Loader.doInit(el.class);
        el._e46056dffe9d6e6edddd85a8c13dc18b();
    }

    private native void atc();

    private static native void _e46056dffe9d6e6edddd85a8c13dc18b();

    @hG
    public native void atb(gH.th var1);

    private static native MatchException ate(MatchException var0);

    private static native int atg(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int atf(int var0, long var1);

    private native void atd();

    private static native CallSite ath(MethodHandles.Lookup var0, String var1, MethodType var2);
}

