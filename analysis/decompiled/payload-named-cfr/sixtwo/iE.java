/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.Gson
 */
package sixtwo;

import com.google.gson.Gson;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.net.http.HttpClient;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CompletionStage;
import native.Loader;
import sixtwo.ry;

public abstract class iE {
    protected final HttpClient AoXCq = ry.dkB().dkQ();
    protected final Gson PByQO = ry.dkB().dkP();
    private static String EWLpw;
    private static long imAbH;
    private static String[] rJgod;
    private static String[] dMzng;
    private static Map GoQJy;
    private static long[] eqxRy;
    private static Integer[] PRwlO;
    private static Map zYnVO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(iE.class);
        iE._880013c9702f1b0787c8ffe4b5cee10f();
    }

    protected native CompletableFuture<Integer> brN(HttpRequest var1);

    protected native <T> CompletableFuture<T> brL(HttpRequest var1, Class<T> var2);

    protected native HttpRequest.Builder brO(String var1);

    protected native String brP(Object var1);

    protected native <T> CompletableFuture<List<T>> brM(HttpRequest var1, Class<T> var2);

    private native /* synthetic */ CompletionStage brV(Class var1, HttpResponse var2);

    private static native Exception brY(Exception var0);

    private static native Object bsb(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native <T> T brR(String var1, Class<T> var2);

    private static native CallSite bsf(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native <T> List<T> brS(String var1, Class<T> var2);

    public static native String brX();

    private static native String bsa(int var0, long var1);

    protected native void brQ(Throwable var1);

    private static native String brZ(byte[] var0);

    private native <T> T brT(Class<T> var1);

    public static native void brW(String var0);

    private static native CallSite bsc(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int bsd(int var0, long var1);

    private native /* synthetic */ List brU(Class var1, HttpResponse var2);

    private static native int bse(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _880013c9702f1b0787c8ffe4b5cee10f();
}

