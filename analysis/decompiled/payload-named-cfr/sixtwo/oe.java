/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import java.io.IOException;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.time.Duration;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CompletionStage;
import java.util.concurrent.ExecutorService;
import native.Loader;
import net.minecraft.util.Identifier;
import sixtwo.lv;
import sixtwo.oe$ve;

public final class oe {
    public static ExecutorService sLGkx;
    public static ve Fygak;
    private static volatile ve LqiIO;
    private static int TCYLZ;
    private static long fQpLi;
    private static String[] nWjye;
    private static String[] CCkxJ;
    private static Map Dvlnr;
    private static long[] gMKMu;
    private static Integer[] kgsbC;
    private static Map YNCkV;
    private static long[] vOUuo;
    private static Long[] cLlev;
    private static Map Dqsqo;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(oe.class);
        oe._b4e42c681c176245317f2235bc6eb7ef();
    }

    private static native long cCC(int var0, long var1);

    private static native long cCD(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native byte[] cCf(byte[] var0);

    public static native CompletableFuture<byte[]> cCb(String var0, boolean var1);

    public static native byte[] cBY(String var0, Duration var1, boolean var2);

    public static native int cCs();

    private static native String cCv(byte[] var0);

    private static native String cCw(int var0, long var1);

    public static native byte[] cCa(String var0, boolean var1);

    public static native <T> CompletableFuture<HttpResponse<T>> cBW(HttpRequest var0, HttpResponse.BodyHandler<T> var1);

    private static native /* synthetic */ Identifier cCl(Throwable var0);

    private static native byte[] cCe(HttpResponse<byte[]> var0) throws IOException;

    public static CompletableFuture<lv> cCd(String string) {
        long l2 = fQpLi ^ 0x78DF45133028L;
        return ((CompletableFuture)oe.cBZ(string, Duration.ofSeconds((long)oe.cCE("l", (int)7397, (long)(0x278C8D8BD343A3B0L ^ l2))), false).thenCompose(oe::cCj)).exceptionally(oe::cCi);
    }

    public static native ve cCh();

    public static native <T> HttpResponse<T> cBX(HttpRequest var0, HttpResponse.BodyHandler<T> var1) throws IOException, InterruptedException;

    private static native /* synthetic */ CompletionStage cCm(byte[] var0);

    private static native /* synthetic */ lv cCi(Throwable var0);

    private static native /* synthetic */ Identifier cCn(byte[] var0);

    private static native /* synthetic */ byte[] cCp(HttpResponse var0);

    private static native /* synthetic */ lv cCk(byte[] var0);

    public static native HttpRequest cBV(String var0, Duration var1, boolean var2);

    private static native /* synthetic */ CompletionStage cCj(byte[] var0);

    private static native /* synthetic */ void cCq(CompletableFuture var0, HttpResponse var1, Throwable var2);

    public static native void cCr(int var0);

    private static native Exception cCu(Exception var0);

    private static native Object cCx(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite cCy(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int cCz(int var0, long var1);

    public static native CompletableFuture<byte[]> cBZ(String var0, Duration var1, boolean var2);

    private static native CallSite cCE(MethodHandles.Lookup var0, String var1, MethodType var2);

    public static CompletableFuture<Identifier> cCc(String string) {
        long l2 = fQpLi ^ 0x770123C90B47L;
        return ((CompletableFuture)oe.cBZ(string, Duration.ofSeconds((long)oe.cCE("l", (int)7397, (long)(0x278C8255B59998DFL ^ l2))), false).thenCompose(oe::cCm)).exceptionally(oe::cCl);
    }

    public static native void cBU(ve var0);

    private static native byte[] cCg(byte[] var0, String var1);

    private static native /* synthetic */ byte[] cCo(boolean var0, byte[] var1);

    public static native int cCt();

    private static native int cCA(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite cCB(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _b4e42c681c176245317f2235bc6eb7ef();
}

