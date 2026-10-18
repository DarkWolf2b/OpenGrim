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
import java.util.Objects;
import native.Loader;
import sixtwo.hJ;
import sixtwo.hK;
import sixtwo.hM;

public final class hL<T> {
    private final String qazLg;
    private boolean iCMch;
    private boolean PtCKH;
    private hK wLPMv;
    private List<String> fsmyb;
    public static hK KCXra;
    public static hK WMgOG;
    private static hK fiJbd;
    private static int[] XwmXO;
    private static long YYaWA;
    private static String[] rOgRG;
    private static String[] AoYxu;
    private static Map HSlMb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private hL(String string) {
        long l2 = YYaWA ^ 0x6D6EAB447E1EL;
        this.iCMch = true;
        this.PtCKH = false;
        this.fsmyb = List.of();
        this.qazLg = Objects.requireNonNull(string, (String)((Object)hL.beq("s", (int)21457, (long)(0x65E0C037A2339661L ^ l2))));
    }

    static {
        Loader.doInit(hL.class);
        hL._8cd2f5958a7f605309eaf108c86600d6();
    }

    private static native String beg(String var0);

    public native hL<T> beb(hK var1);

    private static native CallSite beq(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ String beh(String var0);

    public static native int[] bel();

    public native hL<T> bdZ();

    private static native /* synthetic */ hJ bej(String var0);

    private static native String ben(byte[] var0);

    public native hM<T> bef();

    private static native NumberFormatException bem(NumberFormatException var0);

    private static native Object bep(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public static native <T> hL<T> bdY(String var0);

    private static native String beo(int var0, long var1);

    private static native /* synthetic */ hJ bei(String var0);

    public native hL<T> bec(String ... var1);

    public native hL<T> bea();

    public static native void bek(int[] var0);

    public native hL<T> bed(List<String> var1);

    public native hL<T> bee(String ... var1);

    private static native void _8cd2f5958a7f605309eaf108c86600d6();
}

