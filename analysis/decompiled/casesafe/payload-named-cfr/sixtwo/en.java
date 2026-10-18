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
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mT;

public class en
extends gg {
    private final mT cPtuD;
    private static long XGcHI;
    private static long[] VqNdz;
    private static Integer[] BCAKr;
    private static Map pFvmE;
    private static long kpGmO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _d1779fc2e4e3d22bd315c72dfeecf1c8();

    public en() {
        long l2 = XGcHI ^ 0x7EF8098508B0L;
        super(gf.aZL((int)en.att("b", (int)23382, (long)(0x75C9EF8091EB9015L ^ l2)), false, gh.xgeEn));
        this.cPtuD = mT.cpA();
    }

    static {
        Loader.doInit(en.class);
        en._d1779fc2e4e3d22bd315c72dfeecf1c8();
    }

    private static native CallSite att(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int ats(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    public native void aaj();

    private native void atp();

    private static native MatchException atq(MatchException var0);

    private static native int atr(int var0, long var1);
}

