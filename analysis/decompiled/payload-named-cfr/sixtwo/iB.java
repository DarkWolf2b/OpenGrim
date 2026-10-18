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
import java.util.concurrent.CompletionStage;
import native.Loader;
import sixtwo.iA;
import sixtwo.iC;
import sixtwo.iD;
import sixtwo.iS;
import sixtwo.iu;
import sixtwo.iv;
import sixtwo.ix;
import sixtwo.iy;
import sixtwo.iz;
import sixtwo.nf;

public class iB {
    private final iA NeyGX;
    private final ix CJxKq;
    private final iv sTdzs;
    private final iC WtxwN;
    private final String gQoVO;
    private boolean skPbg;
    private static iS[] mKwrj;
    private static long SaDmh;
    private static String[] qKAOd;
    private static String[] hlrVF;
    private static Map cUKLP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public iB(ix ix2, iv iv2) {
        long l2 = SaDmh ^ 0x6881C03FDD30L;
        this.gQoVO = iB.bqH("m", (int)3863, (long)(0x787591C11C7C4D1FL ^ l2));
        this.skPbg = false;
        this.CJxKq = ix2;
        iS[] iSArray = iB.bqC();
        try {
            this.sTdzs = iv2;
            this.NeyGX = new iA();
            this.WtxwN = new iC();
            iv2.bnI(this::bqd);
            if (iS.bwL() == null) {
                iB.bqB(new iS[1]);
            }
        }
        catch (MatchException matchException) {
            throw iB.bqD(matchException);
        }
    }

    static {
        Loader.doInit(iB.class);
        iB._492103ed719575fed4a2d58088d5c153();
    }

    public static native iS[] bqC();

    private static native MatchException bqD(MatchException var0);

    public static native void bqB(iS[] var0);

    private static native CallSite bqH(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void bqd();

    private native void bpU();

    private native void bpV();

    private native /* synthetic */ CompletionStage bqo(String var1, iy var2);

    private static native /* synthetic */ void bqy();

    public native CompletableFuture<Boolean> bpY(String var1);

    private native /* synthetic */ void bqA(List var1);

    public native CompletableFuture<iy> bpX(iD var1);

    private native /* synthetic */ void bqs(String var1);

    private static native /* synthetic */ Void bqx(Throwable var0);

    private native /* synthetic */ Boolean bqn(iu var1);

    public native String bqi();

    private native /* synthetic */ void bqu(iy var1);

    private native /* synthetic */ void bqw(iz var1);

    private static native Object bqG(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ iy bqt(iy var1);

    private static native String bqE(byte[] var0);

    public native iv bqg();

    private native /* synthetic */ void bqv(String var1, iz var2, Throwable var3);

    private native /* synthetic */ iy bqp(iy var1);

    private native /* synthetic */ void bqq(iy var1);

    public native CompletableFuture<Boolean> bpZ(String var1);

    private native /* synthetic */ iy bql(iy var1);

    public native ix bqf();

    private native /* synthetic */ void bqm(iy var1);

    public native iA bqe();

    private native /* synthetic */ void bqz(List var1);

    public native boolean bqj();

    private native /* synthetic */ Boolean bqr(String var1, iu var2);

    private native /* synthetic */ Boolean bqk(iy var1, iu var2);

    private static native String bqF(int var0, long var1);

    private static native void _492103ed719575fed4a2d58088d5c153();

    public native iC bqh();

    public native void bpW();

    public native CompletableFuture<iy> bqb(iy var1, List<nf> var2);

    public native CompletableFuture<Boolean> bqc(iy var1);

    public native CompletableFuture<iy> bqa(String var1, iD var2);
}

