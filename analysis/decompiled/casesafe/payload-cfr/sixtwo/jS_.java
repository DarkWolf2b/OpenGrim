/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.textures.GpuTextureView
 *  net.minecraft.class_1044
 *  net.minecraft.class_12137
 *  org.joml.Matrix3x2fStack
 */
package sixtwo;

import com.mojang.blaze3d.textures.GpuTextureView;
import java.lang.invoke.MethodHandles;
import net.minecraft.class_1044;
import net.minecraft.class_12137;
import org.joml.Matrix3x2fStack;
import sixtwo.gb;
import sixtwo.jO;
import sixtwo.jS$ud;
import sixtwo.la;
import sixtwo.mG;

public class jS {
    private Matrix3x2fStack qdEgK;
    private float fJLAQ;
    private float qcPHr;
    private float oICdU;
    private float vcHFg;
    private float RAeDt;
    private float cJAVH;
    private float wNynT;
    private float qSyFE;
    private la AteDY;
    private class_1044 hidqE;
    private GpuTextureView DVfPi;
    private class_12137 Ececs;
    private mG HNbHD;
    private float XBDjq;
    private boolean dkkca;
    private boolean FVUmG;
    private float pXLNU;
    private float mlmTL;
    private float TUKKT;
    private float mUMdD;
    private float MYjCe;
    private float XubWX;
    private static final long wYBnW = gb.aYR(8614683303637920897L, 900304589961710054L, MethodHandles.lookup().lookupClass()).a(266415103904527L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    jS(Matrix3x2fStack matrix3x2fStack, float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, la la2, class_1044 class_10442, GpuTextureView gpuTextureView, class_12137 class_121372, mG mG2, float f9, boolean bl, boolean bl2, float f10, float f11, float f12, float f13, float f14, float f15) {
        this.qdEgK = matrix3x2fStack;
        this.fJLAQ = f;
        this.qcPHr = f2;
        this.oICdU = f3;
        this.vcHFg = f4;
        this.RAeDt = f5;
        this.cJAVH = f6;
        this.wNynT = f7;
        this.qSyFE = f8;
        this.AteDY = la2;
        this.hidqE = class_10442;
        this.DVfPi = gpuTextureView;
        this.Ececs = class_121372;
        this.HNbHD = mG2;
        this.XBDjq = f9;
        this.dkkca = bl;
        this.FVUmG = bl2;
        this.pXLNU = f10;
        this.mlmTL = f11;
        this.TUKKT = f12;
        this.mUMdD = f13;
        this.MYjCe = f14;
        this.XubWX = f15;
    }

    public boolean bME() {
        return this.FVUmG;
    }

    public float bMp() {
        return this.fJLAQ;
    }

    public float bMr() {
        return this.oICdU;
    }

    public Matrix3x2fStack bMo() {
        return this.qdEgK;
    }

    public float bMI() {
        return this.mUMdD;
    }

    public float bMK() {
        return this.XubWX;
    }

    public float bMq() {
        return this.qcPHr;
    }

    public float bMJ() {
        return this.MYjCe;
    }

    public float bMw() {
        return this.qSyFE;
    }

    public float bMH() {
        return this.TUKKT;
    }

    public la bMx() {
        return this.AteDY;
    }

    public float bMG() {
        return this.mlmTL;
    }

    public class_1044 bMy() {
        return this.hidqE;
    }

    public GpuTextureView bMz() {
        return this.DVfPi;
    }

    public float bMs() {
        return this.vcHFg;
    }

    public mG bMB() {
        return this.HNbHD;
    }

    public float bMC() {
        return this.XBDjq;
    }

    public class_12137 bMA() {
        return this.Ececs;
    }

    public float bMu() {
        return this.cJAVH;
    }

    public float bMv() {
        return this.wNynT;
    }

    public boolean bMD() {
        return this.dkkca;
    }

    public float bMF() {
        return this.pXLNU;
    }

    public float bMt() {
        return this.RAeDt;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean bMb() {
        jS jS2;
        block6: {
            long l = wYBnW ^ 0x27B539FBA403L;
            String string = jO.bKy();
            try {
                try {
                    jS2 = this;
                    if (string == null) break block6;
                    if (jS2.hidqE != null) return true;
                }
                catch (MatchException matchException) {
                    throw jS.bML(matchException);
                }
                jS2 = this;
            }
            catch (MatchException matchException) {
                throw jS.bML(matchException);
            }
        }
        try {
            if (jS2.DVfPi == null) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw jS.bML(matchException);
        }
    }

    private static float bMm() {
        return 1.0f;
    }

    private static boolean bMf() {
        return false;
    }

    private static float bMe() {
        return 0.75f;
    }

    private static boolean bMg() {
        return false;
    }

    private static float bMk() {
        return 0.0f;
    }

    private static float bMi() {
        return 0.0f;
    }

    private static float bMh() {
        return 0.0f;
    }

    private static float bMj() {
        return 0.0f;
    }

    private static float bMl() {
        return 1.0f;
    }

    private static mG bMd() {
        return mG.hoGuU;
    }

    private static MatchException bML(MatchException matchException) {
        return matchException;
    }

    public static jS$ud bMn() {
        return new jS$ud();
    }

    public static jS$ud bMc(Matrix3x2fStack matrix3x2fStack, double d, double d2, double d3, double d4) {
        return jS.bMn().drR(matrix3x2fStack).drS((float)d).drT((float)d2).drU((float)d3).drV((float)d4);
    }
}
