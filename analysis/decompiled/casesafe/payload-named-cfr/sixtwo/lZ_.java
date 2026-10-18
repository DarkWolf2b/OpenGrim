/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.reflect.Field;
import java.util.Map;
import native.Loader;

public class lZ {
    private static long IKVXS;
    private static String yEBZo;
    private static long[] Bdlmi;
    private static Integer[] fFDja;
    private static Map dcLrs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(lZ.class);
        lZ._79b7d5c12970b68433b46e9c3bbea341();
    }

    private static native int cjr(int var0, long var1);

    private static native boolean cjo(Field var0);

    private static native MatchException cjp(MatchException var0);

    private static native String cjq(byte[] var0);

    private static native int cjs(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite cjt(MethodHandles.Lookup var0, String var1, MethodType var2);

    public static native void cjn(Class<?> ... var0);

    private static native void _79b7d5c12970b68433b46e9c3bbea341();
}

