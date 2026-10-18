/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  oshi.util.Memoizer
 *  oshi.util.tuples.Quartet
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.function.Supplier;
import native.Loader;
import oshi.util.Memoizer;
import oshi.util.tuples.Quartet;

public class rt$wg {
    private final Supplier<Quartet<String, String, String, String>> fkdNi = Memoizer.memoize(rt$wg::dza);
    private static long HqUUh;
    private static String[] VTdoY;
    private static String[] UIEqO;
    private static Map hPvEC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(rt$wg.class);
        rt$wg._2b4450963d0cb8d5aa4079a3e08687ad();
    }

    public native String dze(boolean var1);

    private static native String dzg(byte[] var0);

    public native String dzd();

    private static native String dzh(int var0, long var1);

    public native String dzc();

    private static native Object dzi(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite dzj(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native Quartet<String, String, String, String> dza();

    private static native MatchException dzf(MatchException var0);

    public native String dzb();

    private static native void _2b4450963d0cb8d5aa4079a3e08687ad();
}

