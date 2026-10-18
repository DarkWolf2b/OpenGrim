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
import sixtwo.il;
import sixtwo.im;
import sixtwo.in;
import sixtwo.ip;
import sixtwo.ir;
import sixtwo.iu;
import sixtwo.iv;

public class iq {
    private in lsCzm;
    private final ip Logfc;
    private final il dgdgv;
    private final iv RBLhk;
    private final String PDCrp;
    private boolean iYzgC;
    private static boolean xZxfr;
    private static long yDzoy;
    private static String[] unsdy;
    private static String[] MFDwi;
    private static Map Rubgn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public iq(il il2, iv iv2) {
        block4: {
            boolean bl;
            block6: {
                block5: {
                    long l = yDzoy ^ 0x4BACC1AFE17DL;
                    this.lsCzm = in.FBjZE;
                    boolean bl2 = iq.bmv();
                    try {
                        try {
                            this.PDCrp = iq.bmA("o", (int)6878, (long)(0x52ADE20D4A33625EL ^ l));
                            this.iYzgC = false;
                            this.dgdgv = il2;
                            this.RBLhk = iv2;
                            this.Logfc = new ip();
                            iv2.bnI(this::blH);
                            if (iS.bwL() != null) break block4;
                            if (!bl2) break block5;
                        }
                        catch (MatchException matchException) {
                            throw iq.bmw(matchException);
                        }
                        bl = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw iq.bmw(matchException);
                    }
                }
                bl = true;
            }
            iq.bmt(bl);
        }
    }

    static {
        Loader.doInit(iq.class);
        iq._d9ce10a827bf62b322c566465ff2cb7c();
    }

    private native /* synthetic */ void bmf(in var1);

    private static native /* synthetic */ void bmr();

    private native /* synthetic */ List bms(List var1);

    private native /* synthetic */ void bmn(ir var1);

    public native void blX(boolean var1);

    public native in blM(in var1);

    public native String bmb();

    public native il blZ();

    public native CompletableFuture<Boolean> blQ(in var1);

    public native void blK(in var1);

    private native /* synthetic */ ir bmi(ir var1);

    private static native CallSite bmA(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ CompletionStage bmh(String var1, ir var2);

    private native /* synthetic */ void bml(ir var1, in var2);

    public native CompletableFuture<Boolean> blO(in var1);

    private native String blS(String var1);

    private native void blH();

    public native void blW(in var1);

    private native /* synthetic */ Boolean bmg(iu var1);

    private native /* synthetic */ ir bmm(ir var1);

    private static native /* synthetic */ List bmq(Throwable var0);

    public static native boolean bmu();

    public native CompletableFuture<ir> blN(int[] var1);

    private static native String bmy(int var0, long var1);

    private native /* synthetic */ Boolean bme(in var1, iu var2);

    private static native Object bmz(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException bmw(MatchException var0);

    public native boolean blL(in var1);

    private native boolean blT(String var1);

    private static native String bmx(byte[] var0);

    public native CompletableFuture<List<ir>> blG();

    private native void blI(List<ir> var1);

    private native void blJ();

    public native ip blY();

    public native boolean bmc();

    private native im blV(im var1);

    public static native boolean bmv();

    private native in blU(String var1);

    public native iv bma();

    public static native void bmt(boolean var0);

    private native /* synthetic */ void bmj(ir var1);

    public native CompletableFuture<Boolean> blP(String var1);

    private native /* synthetic */ Boolean bmk(ir var1, in var2, iu var3);

    private native /* synthetic */ CompletionStage bmo(ir var1);

    private static native /* synthetic */ ir bmp(ir var0, iu var1);

    private static native void _d9ce10a827bf62b322c566465ff2cb7c();

    public native in bmd();

    public native im blR(float var1);
}
