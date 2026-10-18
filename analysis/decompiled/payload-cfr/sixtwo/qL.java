/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1309
 *  net.minecraft.class_1657
 *  net.minecraft.class_241
 *  net.minecraft.class_243
 */
package sixtwo;

import native.Loader;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_241;
import net.minecraft.class_243;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gg;
import sixtwo.gv;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.hb;
import sixtwo.mt;
import sixtwo.mw;
import sixtwo.ot;
import sixtwo.ou;
import sixtwo.ov;
import sixtwo.rD;

public class qL {
    private final mt<ot> elfkz = new mt(true);
    private ot JYBGF;
    private ov qkMAI;
    private ov gufEg;
    private ov adYOd = ov.cGv(0.0f, 0.0f);
    private static boolean sHqVn;
    private static long sVGUv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qL() {
        hF.bdI(this);
    }

    static {
        Loader.doInit(qL.class);
        qL._b26acc6d65d5669e1307483cf7b7d82d();
    }

    public native ot dbF();

    public native ov dbY();

    public static native boolean dcc();

    public static native boolean dcb();

    public native void dbD(ov var1);

    public native void dbK();

    @hG(priority=mw.CRITICAL)
    public void dbN(gH.th th2) {
        gv gv2 = new gv();
        gv2.bdV();
        this.dbK();
    }

    private static native MatchException dcd(MatchException var0);

    public native void dbH(ov var1, ou var2, mw var3, gg var4);

    public native void dbJ(ot var1, mw var2, gg var3);

    public native double dbR(ov var1, ov var2);

    public native float dbS(float var1, float var2);

    public native void dbG(ov var1, class_1309 var2, ou var3, mw var4, gg var5);

    private native void dbL(class_1657 var1, ov var2);

    public native ot dbW();

    public static native void dca(boolean var0);

    @hG
    public native void dbM(hb var1);

    @hG
    public native void dbO(gL.tj var1);

    private native class_243 dbQ(class_243 var1, class_243 var2, float var3);

    public native void dbU();

    @hG
    public native void dbP(gL.tk var1);

    public native mt<ot> dbV();

    private static native void _b26acc6d65d5669e1307483cf7b7d82d();

    public native boolean dbT();

    public ov dbX() {
        return this.qkMAI;
    }

    public ot dbE() {
        ot ot2;
        block6: {
            qL qL2;
            block4: {
                block5: {
                    long l = sVGUv ^ 0x34CEB62ACA69L;
                    boolean bl = qL.dcb();
                    try {
                        try {
                            qL2 = this;
                            if (!bl) break block4;
                            if (qL2.elfkz.cmd() == null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw qL.dcd(matchException);
                        }
                        ot2 = this.elfkz.cmd();
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw qL.dcd(matchException);
                    }
                }
                qL2 = this;
            }
            ot2 = qL2.JYBGF;
        }
        return ot2;
    }

    public native ov dbZ();

    public native void dbI(class_243 var1, ou var2, mw var3, gg var4);

    public ov dbC() {
        ov ov2;
        block4: {
            class_241 class_2412;
            block5: {
                long l = sVGUv ^ 0x21B04C4C456BL;
                class_2412 = rD.dlmvG.field_1724.method_5802();
                boolean bl = qL.dcb();
                try {
                    try {
                        ov2 = this.qkMAI;
                        if (!bl) break block4;
                        if (ov2 == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw qL.dcd(matchException);
                    }
                    ov2 = this.qkMAI;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw qL.dcd(matchException);
                }
            }
            ov2 = ov.cGw(class_2412);
        }
        return ov2;
    }
}
