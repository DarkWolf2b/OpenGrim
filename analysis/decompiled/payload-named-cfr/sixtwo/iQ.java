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
import sixtwo.aD;
import sixtwo.bj;
import sixtwo.cB;
import sixtwo.iI;
import sixtwo.iK;
import sixtwo.iL;
import sixtwo.iM;
import sixtwo.iN;
import sixtwo.iO;
import sixtwo.iP;
import sixtwo.iS;
import sixtwo.iu;
import sixtwo.iv;
import sixtwo.ry;

public class iQ {
    private final iN qxcSr;
    private final String CUNHl;
    private final iP twrIE;
    private final iK jcfyd;
    private final iv uWkVQ;
    private boolean nVklG;
    private final CompletableFuture<Void> qcuam;
    private static boolean rNaCY;
    private static long MrvMF;
    private static String[] oACCP;
    private static String[] BiDOI;
    private static Map AEinN;
    private static long[] VAzWW;
    private static Integer[] iqBhb;
    private static Map iFkNo;
    private static long QWoXv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native /* synthetic */ iM bvU(iM var0, iu var1);

    private static native /* synthetic */ iM bvH(iM var0, iu var1);

    private native /* synthetic */ CompletionStage bvM(String var1, iO var2);

    private static native /* synthetic */ List bvY(List var0, Void var1);

    private native /* synthetic */ Boolean bvQ(iu var1);

    private native /* synthetic */ void bvJ(iM var1);

    private native /* synthetic */ void bvP(iM var1);

    private static native /* synthetic */ List bvV(Throwable var0);

    private native /* synthetic */ CompletionStage bvX(List var1);

    public static native void bwb(boolean var0);

    private native /* synthetic */ void bvC(iM var1);

    private native /* synthetic */ CompletionStage bvE(iM var1);

    private native /* synthetic */ iO bvO(iM var1);

    private native /* synthetic */ CompletionStage bvG(iM var1);

    private static native /* synthetic */ void bvW();

    private static native int bwj(int var0, long var1);

    private static native String bwg(int var0, long var1);

    private native /* synthetic */ iO bvN(iO var1, iu var2);

    private native /* synthetic */ iM bvK(iM var1);

    private static native Object bwh(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ Boolean bvB(iM var1, iu var2);

    private native /* synthetic */ iM bvI(iM var1);

    private native /* synthetic */ CompletionStage bvT(iM var1);

    private native /* synthetic */ CompletionStage bvZ(List var1);

    private static native String bwf(byte[] var0);

    public static native boolean bwc();

    private native /* synthetic */ void bvL(iM var1);

    private native /* synthetic */ iM bvR(iM var1);

    private native /* synthetic */ void bwa(List var1, CompletableFuture var2);

    private static native int bwk(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite bwl(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ void bvS(iM var1);

    private native /* synthetic */ CompletionStage bvD(String var1, iu var2);

    private static native /* synthetic */ iM bvF(iM var0, iu var1);

    public iQ(iK iK2, iv iv2) {
        long l2 = MrvMF ^ 0x25D15DE99C42L;
        boolean bl2 = iQ.bwd();
        this.CUNHl = iQ.bwi("c", (int)31667, (long)(0x55C7F0A28B33660DL ^ l2));
        boolean bl3 = bl2;
        try {
            this.nVklG = false;
            this.qcuam = new CompletableFuture();
            this.jcfyd = iK2;
            this.uWkVQ = iv2;
            this.twrIE = new iP();
            this.qxcSr = new iN(iI.bsC(ry.dkB().dkP()));
            iv2.bnI(this::bvk);
            if (!bl3) {
                iS.bwK("DU1jrc");
            }
        }
        catch (MatchException matchException) {
            throw iQ.bwe(matchException);
        }
    }

    static {
        Loader.doInit(iQ.class);
        iQ._51823ea6c52cc2438437060d0f1dc7a6();
    }

    private native /* synthetic */ Boolean bvA(iu var1);

    private native /* synthetic */ void bvz(iM var1, CompletableFuture var2);

    public native iP bvp();

    public native iK bvq();

    public native iv bvr();

    public native boolean bvs();

    public native iN bvn();

    public native void buX(int[] var1, int[] var2, iL var3);

    private static native /* synthetic */ boolean bvu(bj var0, bj var1);

    private static native /* synthetic */ void bvv(aD var0, bj var1);

    private static native CallSite bwi(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ void bvw(List var1, Throwable var2);

    private native /* synthetic */ CompletionStage bvy(iM var1);

    public native void bvm();

    public native String bvo();

    public native CompletableFuture<iM> bvc(String var1);

    public native CompletableFuture<iM> bva(String var1, int[] var2, int[] var3, iL var4, boolean var5);

    public native CompletableFuture<Boolean> bvf(iM var1);

    public static native boolean bwd();

    private native void bvk();

    public native CompletableFuture<iO> buZ(String var1);

    public native CompletableFuture<Boolean> bvg();

    public native CompletableFuture<Boolean> buY(String var1);

    private native void bvi(List<iO> var1);

    public native CompletableFuture<Void> bvt();

    private static native /* synthetic */ Void bvx(Throwable var0);

    public native CompletableFuture<List<iO>> buW();

    public native CompletableFuture<iM> bvd(String var1);

    private native void bvj();

    public native CompletableFuture<Void> buS();

    public native void buT();

    public native boolean buU(cB var1);

    public native boolean buV(iS var1, cB var2);

    private static native MatchException bwe(MatchException var0);

    public native CompletableFuture<iM> bvb(String var1);

    public native CompletableFuture<iM> bve(String var1);

    private native CompletableFuture<Void> bvh();

    private native void bvl(iM var1);

    private static native void _51823ea6c52cc2438437060d0f1dc7a6();
}

