/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.function.Consumer;
import native.Loader;
import sixtwo.hL;
import sixtwo.hM;
import sixtwo.hW;
import sixtwo.hZ;

public final class hY {
    private final List<String> huuGZ;
    private String esozW;
    private final List<hM<?>> YGIZc;
    private final List<hZ> yrZSL;
    private boolean bfJkD;
    private hW vFrMb;
    private static String FjqAL;
    private static long nERmS;
    private static String[] RYRfJ;
    private static String[] uJbis;
    private static Map bgxIp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private hY(String string) {
        long l2 = nERmS ^ 0x425CD004E9C2L;
        this.huuGZ = new ArrayList<String>();
        this.esozW = "";
        this.YGIZc = new ArrayList();
        this.yrZSL = new ArrayList<hZ>();
        this.bfJkD = true;
        this.huuGZ.add(Objects.requireNonNull(string, (String)((Object)hY.bgt("n", (int)4008, (long)(0x719FB42A95BC1EC5L ^ l2)))));
    }

    static {
        Loader.doInit(hY.class);
        hY._e7aab09eec9026eec250230f05631b70();
    }

    public static native hY bge(String var0);

    public native hZ bgm();

    public native hY bgj(hZ var1);

    public native hY bgl(hW var1);

    public static native void bgn(String var0);

    public static native String bgo();

    private static native IllegalStateException bgp(IllegalStateException var0);

    private static native String bgr(int var0, long var1);

    private static native String bgq(byte[] var0);

    private static native Object bgs(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite bgt(MethodHandles.Lookup var0, String var1, MethodType var2);

    public static native hY bgf(String var0, Consumer<hY> var1);

    public native hY bgg(String ... var1);

    public native <T> hY bgi(String var1, Consumer<hL<T>> var2);

    public native hY bgh(String var1);

    public native hY bgk();

    private static native void _e7aab09eec9026eec250230f05631b70();
}

