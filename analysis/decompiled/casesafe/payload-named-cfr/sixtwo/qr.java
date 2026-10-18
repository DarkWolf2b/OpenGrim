/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  oshi.PlatformEnum
 */
package sixtwo;

import java.io.File;
import java.io.IOException;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.nio.file.Path;
import java.util.Map;
import native.Loader;
import oshi.PlatformEnum;
import sixtwo.qu;
import sixtwo.qv;

public class qr
implements qv {
    private static long MAOvD;
    private static String[] ZmcoY;
    private static String[] mrmxu;
    private static Map xUNUe;
    private static long[] JXspm;
    private static Integer[] PomKV;
    private static Map TSHaF;
    private static long[] qyixu;
    private static Long[] BqQgE;
    private static Map yBewi;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(qr.class);
        qr._cea15a4a12fdf39cddd713e432e1352b();
    }

    @Override
    public native int execute(qu var1);

    private static native void _cea15a4a12fdf39cddd713e432e1352b();

    @Override
    public native boolean supportedOnOS(PlatformEnum var1);

    private static native long cYm(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite cYn(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void cXZ(String var1, File var2) throws IOException;

    private static native String cYe(byte[] var0);

    private native boolean cXV(Path var1, byte[] var2) throws IOException;

    private native void cXW(Path var1) throws IOException;

    private static native String cYf(int var0, long var1);

    private static native int cYj(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite cYk(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native long cYl(int var0, long var1);

    private native void cYb(byte[] var1);

    private native int cXX(qu var1, Path var2) throws IOException, InterruptedException;

    private native void cYa(File var1) throws IOException;

    private native void cYc(byte[] var1);

    private static native Object cYg(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native Throwable cYd(Throwable var0);

    private static native CallSite cYh(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int cYi(int var0, long var1);

    public native void cXY(byte[] var1, byte[] var2, boolean var3, String var4, boolean var5, boolean var6);
}

