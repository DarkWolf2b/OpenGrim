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

public final class rd {
    private float msbOo;
    private float WOtQD;
    private float mzZkj;
    private static long rxXqy;
    private static String[] trglW;
    private static String[] VynXP;
    private static Map YEHht;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public rd() {
        this(1.0f, 1.0f);
    }

    public rd(float f2, float f3) {
        this.deE(f2, f3);
        this.deD();
    }

    static {
        Loader.doInit(rd.class);
        rd._01d7b445bfb71fed2f754b69eed94d86();
    }

    private static native void _01d7b445bfb71fed2f754b69eed94d86();

    public native float deH();

    public native boolean deA();

    private static native IllegalArgumentException deI(IllegalArgumentException var0);

    private static native CallSite deM(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native Object deL(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String deJ(byte[] var0);

    private static native String deK(int var0, long var1);

    public native float deC(int var1);

    public native boolean deB(int var1);

    public native float deF();

    public native void deE(float var1, float var2);

    public native void deD();

    public native float deG();
}

