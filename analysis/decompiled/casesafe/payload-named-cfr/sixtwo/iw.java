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
import java.util.concurrent.CompletableFuture;
import native.Loader;
import sixtwo.iD;
import sixtwo.iE;
import sixtwo.iu;
import sixtwo.ix;
import sixtwo.iy;
import sixtwo.iz;

public class iw
extends iE
implements ix {
    private static boolean LhKUM;
    private static long xOjin;
    private static String[] hpuQi;
    private static String[] KQSlf;
    private static Map UMEjF;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(iw.class);
        iw._cae88d6de7415b60c56646d26e06ceb6();
    }

    private static native String bof(int var0, long var1);

    @Override
    public native CompletableFuture<iz> fetchKeyPreset(String var1);

    @Override
    public native CompletableFuture<iy> updateProfile(String var1, iD var2);

    @Override
    public native CompletableFuture<iy> createProfile(iD var1);

    @Override
    public native CompletableFuture<iu> deleteProfile(String var1);

    @Override
    public native CompletableFuture<iu> importProfile(String var1);

    @Override
    public native CompletableFuture<List<iy>> fetchProfiles();

    private static native /* synthetic */ iz bnZ(Throwable var0);

    private static native CallSite boh(MethodHandles.Lookup var0, String var1, MethodType var2);

    public static native void boa(boolean var0);

    private static native MatchException bod(MatchException var0);

    private static native Object bog(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public static native boolean boc();

    private native /* synthetic */ iy bnV(Throwable var1);

    private native /* synthetic */ iu bnW(Throwable var1);

    private static native String boe(byte[] var0);

    public static native boolean bob();

    private native /* synthetic */ iu bnU(Throwable var1);

    private native /* synthetic */ iy bnX(Throwable var1);

    private native /* synthetic */ iu bnT(Throwable var1);

    private native /* synthetic */ iy bnY(Throwable var1);

    @Override
    public native CompletableFuture<iu> loadProfile(iy var1);

    private static native void _cae88d6de7415b60c56646d26e06ceb6();

    @Override
    public native CompletableFuture<iy> fetchProfile(String var1);
}

