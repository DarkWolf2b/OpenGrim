/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.io.Closeable;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;
import sixtwo.lS;
import sixtwo.lT;
import sixtwo.lV;

public class jM
implements Closeable {
    private final lV zfUkH;
    private boolean fVywk;
    private static long pnBkR;
    private static String[] fCAKE;
    private static String[] ZkwRT;
    private static Map nmqtl;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public jM(byte[] byArray, lS lS2) {
        this.zfUkH = lT.ciQ().createShader(byArray, lS2);
    }

    static {
        Loader.doInit(jM.class);
        jM._18ff504f06d16f9d4ce773f137598732();
    }

    @Override
    public native void close();

    private static native String bJg(byte[] var0);

    private static native /* synthetic */ void bJe(CompletableFuture var0, byte[] var1);

    private static native /* synthetic */ Void bJc(CompletableFuture var0, Throwable var1);

    public native lV bJb();

    private static native /* synthetic */ void bJd(CompletableFuture var0, byte[] var1);

    private static native Throwable bJf(Throwable var0);

    private static native String bJh(int var0, long var1);

    public static native CompletableFuture<byte[]> bJa(String var0);

    private static native Object bJi(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite bJj(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _18ff504f06d16f9d4ce773f137598732();
}

