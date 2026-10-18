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
import sixtwo.hK;
import sixtwo.hU;

class hU$tC
implements hK {
    private static long cXzpU;
    private static long[] REDLI;
    private static Integer[] ZHKIS;
    private static Map qGwMH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    hU$tC(hU hU2) {
    }

    static {
        Loader.doInit(hU$tC.class);
        hU$tC._8c75cfed8ea0d5570a74098af434d2ba();
    }

    @Override
    public native hJ validate(String var1);

    @Override
    public native List<String> suggestions(String var1);

    private static native MatchException dpC(MatchException var0);

    private static native int dpD(int var0, long var1);

    private static native CallSite dpF(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int dpE(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _8c75cfed8ea0d5570a74098af434d2ba();
}

