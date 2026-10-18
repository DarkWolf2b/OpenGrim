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
import sixtwo.iS;
import sixtwo.ic;
import sixtwo.ig;
import sixtwo.ih;
import sixtwo.ij;
import sixtwo.iu;
import sixtwo.iv;
import sixtwo.mG;
import sixtwo.ri;
import sixtwo.rk;

public class ii {
    private ig RsLBo;
    private final ih nYBiY;
    private final ic PtZvg;
    private final iv xYnIj;
    private final String jdaOd;
    private boolean ITejf;
    private final rk lezXT;
    private final rk RqSHC;
    private final ri mifaU;
    private final ri JzsKI;
    private final ri FgUUQ;
    private final ri OByKM;
    private final ri xgjUc;
    private final ri NmeWq;
    private final ri HTMIp;
    private static boolean kEnHW;
    private static long AyPUv;
    private static String[] tbVJs;
    private static String[] Ykuvx;
    private static Map wRhAr;
    private static long[] JvxNu;
    private static Integer[] IzKCU;
    private static Map thTcJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mG bjb() {
        return this.mifaU.dfT(this.RsLBo.bio());
    }

    public ii(ic ic2, iv iv2) {
        long l2 = AyPUv ^ 0x549B66AA2FD9L;
        this.RsLBo = ig.PtFoz;
        this.jdaOd = ii.bjZ("w", (int)6487, (long)(0x7DC82F167070D110L ^ l2));
        this.ITejf = false;
        this.lezXT = new rk((int)ii.bkc("e", (int)12150, (long)(0x2BA6FE3F9537B804L ^ l2)), this.RsLBo.bix().bib());
        this.RqSHC = new rk((int)ii.bkc("e", (int)29753, (long)(0x6ABF5BDC261BE34AL ^ l2)), this.RsLBo.bix().bic());
        this.mifaU = new ri((int)ii.bkc("e", (int)2103, (long)(0x51A7CC3614BF1F47L ^ l2)), this.RsLBo.bio());
        this.JzsKI = new ri((int)ii.bkc("e", (int)31157, (long)(0xECC26E358166EC0L ^ l2)), this.RsLBo.bip());
        boolean bl2 = ii.bjT();
        try {
            this.FgUUQ = new ri((int)ii.bkc("e", (int)31157, (long)(0xECC26E358166EC0L ^ l2)), this.RsLBo.biq());
            this.OByKM = new ri((int)ii.bkc("e", (int)31157, (long)(0xECC26E358166EC0L ^ l2)), this.RsLBo.bir());
            this.xgjUc = new ri((int)ii.bkc("e", (int)31157, (long)(0xECC26E358166EC0L ^ l2)), this.RsLBo.bis());
            this.NmeWq = new ri((int)ii.bkc("e", (int)31157, (long)(0xECC26E358166EC0L ^ l2)), this.RsLBo.biy().bhe());
            this.HTMIp = new ri((int)ii.bkc("e", (int)31157, (long)(0xECC26E358166EC0L ^ l2)), this.RsLBo.biy().bhf());
            this.PtZvg = ic2;
            this.xYnIj = iv2;
            this.nYBiY = new ih();
            iv2.bnI(this::bja);
            if (!bl2) {
                iS.bwK("noa3nc");
            }
        }
        catch (MatchException matchException) {
            throw ii.bjV(matchException);
        }
    }

    static {
        Loader.doInit(ii.class);
        ii._5923f05a2a1794b3930e99fd0310167f();
    }

    public mG bjp() {
        return this.HTMIp.dfT(this.RsLBo.biy().bhf());
    }

    public mG bjd() {
        return this.FgUUQ.dfT(this.RsLBo.biq());
    }

    public native void bjq(ig var1);

    private static native int bkb(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native ig bjG();

    public native CompletableFuture<Boolean> biV(String var1);

    public native CompletableFuture<Boolean> biW(ig var1);

    private native void biX(List<ij> var1);

    private native void biY();

    private static native MatchException bjV(MatchException var0);

    public static native boolean bjT();

    private static native CallSite bjZ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite bkc(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void bja();

    public native CompletableFuture<List<ij>> biS();

    public native void biT(ig var1);

    public native CompletableFuture<Boolean> biU(String var1);

    private native void biZ();

    public float bjm() {
        return this.RsLBo.biy().bhk();
    }

    public float bjk() {
        return this.RsLBo.biy().bhi();
    }

    public mG bjf() {
        return this.xgjUc.dfT(this.RsLBo.bis());
    }

    public mG bjn() {
        return this.NmeWq.dfT(this.RsLBo.biy().bhe());
    }

    public native void bjr(boolean var1);

    public native boolean bjw();

    public native rk bjx();

    private native /* synthetic */ Boolean bjM(String var1, iu var2);

    public float bjj() {
        return this.RsLBo.biy().bhh();
    }

    private native /* synthetic */ CompletionStage bjN(ij var1);

    public float bjg() {
        return this.lezXT.dhd(this.RsLBo.bix().bib());
    }

    public native iv bju();

    private static native /* synthetic */ ij bjO(ij var0, iu var1);

    public native ic bjt();

    public native ri bjF();

    private static native /* synthetic */ List bjP(Throwable var0);

    public float bjl() {
        return this.RsLBo.biy().bhj();
    }

    public native ri bjA();

    private native /* synthetic */ void bjL(ij var1);

    public float bjo() {
        return this.RsLBo.biy().bhl();
    }

    public native ri bjC();

    public native rk bjy();

    private native /* synthetic */ Boolean bjI(iu var1);

    private static native /* synthetic */ void bjQ();

    private native /* synthetic */ List bjR(List var1);

    public static native void bjS(boolean var0);

    public native String bjv();

    public static native boolean bjU();

    public float bjh() {
        return this.RqSHC.dhd(this.RsLBo.bix().bic());
    }

    private static native String bjW(byte[] var0);

    private static native String bjX(int var0, long var1);

    private static native Object bjY(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public mG bjc() {
        return this.JzsKI.dfT(this.RsLBo.bip());
    }

    public float bji() {
        return this.RsLBo.biy().bhg();
    }

    public native ri bjD();

    public native ri bjB();

    public native ri bjz();

    public mG bje() {
        return this.OByKM.dfT(this.RsLBo.bir());
    }

    public native ih bjs();

    private native /* synthetic */ Boolean bjH(ig var1, iu var2);

    private native /* synthetic */ ij bjK(ij var1);

    public native ri bjE();

    private native /* synthetic */ CompletionStage bjJ(String var1, ij var2);

    private static native int bka(int var0, long var1);

    private static native void _5923f05a2a1794b3930e99fd0310167f();
}

