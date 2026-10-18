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
import sixtwo.hX;
import sixtwo.hZ;

public class hP {
    private static long kLlEH;
    private static String[] rcZSe;
    private static String[] jHaUf;
    private static Map rfCXf;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(hP.class);
        hP._e0f3161248b7711ce6ad0a0ff262febd();
    }

    private static native void _e0f3161248b7711ce6ad0a0ff262febd();

    public native hZ beC();

    private static native /* synthetic */ void beE(Boolean var0);

    private static native String beG(byte[] var0);

    private static native MatchException beF(MatchException var0);

    private static native Object beI(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native /* synthetic */ void beD(hX var0);

    private static native CallSite beJ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String beH(int var0, long var1);
}

