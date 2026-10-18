/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  oshi.PlatformEnum
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import native.Loader;
import oshi.PlatformEnum;
import sixtwo.rt$wf;
import sixtwo.rt$wg;
import sixtwo.rt$wh;

public class rt {
    static rt$wf RefaB;
    static rt$wh irYDx;
    static rt$wg BxWNl;
    private static long doBLx;
    private static String[] lsDrS;
    private static String[] ZQLib;
    private static Map pWqsf;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(rt.class);
        rt._f4bb39b5bf2a33da5cfc3be794738bcc();
    }

    public static native boolean djx();

    public static native List<String> djz();

    private static native Exception djA(Exception var0);

    public static native boolean djy();

    public static native byte[] djw();

    public static native String djv();

    private static native String djB(byte[] var0);

    public static native PlatformEnum dju();

    private static native Object djD(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String djC(int var0, long var1);

    private static native CallSite djE(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _f4bb39b5bf2a33da5cfc3be794738bcc();
}

