/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.function.Predicate;
import native.Loader;

public class iU {
    private static ScheduledExecutorService WeddI;
    private static long JzPzX;
    private static long[] ujhbD;
    private static Long[] Vqpvq;
    private static Map yzoyB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(iU.class);
        iU._4029597558a6aac4adf8bc652ea083de();
    }

    public static native void bwR();

    public static native CompletableFuture<Void> bwS(Runnable var0, long var1, long var3, TimeUnit var5);

    public static native <T> CompletableFuture<Void> bwT(Runnable var0, long var1, long var3, int var5, TimeUnit var6, Predicate<T> var7, T var8);

    public static native CompletableFuture<Void> bwU(Runnable var0, long var1, TimeUnit var3);

    public static native CompletableFuture<Void> bwV(Runnable var0);

    private static native long bxc(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native /* synthetic */ void bwX(Runnable var0, CompletableFuture var1);

    private static native Exception bxa(Exception var0);

    private static native /* synthetic */ void bwZ(AtomicInteger var0, int var1, Predicate var2, Object var3, ScheduledFuture[] var4, CompletableFuture var5, Runnable var6);

    public static native void bwW();

    private static native long bxb(int var0, long var1);

    private static native CallSite bxd(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ void bwY(Runnable var0, CompletableFuture var1);

    private static native void _4029597558a6aac4adf8bc652ea083de();
}

