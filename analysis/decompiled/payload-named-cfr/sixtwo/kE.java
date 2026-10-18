/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 */
package sixtwo;

import net.minecraft.client.util.math.MatrixStack;
import sixtwo.kE$um;
import sixtwo.mG;

public class kE {
    private MatrixStack kccAM;
    private float tJewO;
    private float MDRnX;
    private float QfJwz;
    private float dWDvH;
    private mG lLAZi;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    kE(MatrixStack matrixStack, float f2, float f3, float f4, float f5, mG mG2) {
        this.kccAM = matrixStack;
        this.tJewO = f2;
        this.MDRnX = f3;
        this.QfJwz = f4;
        this.dWDvH = f5;
        this.lLAZi = mG2;
    }

    public static kE$um bTg() {
        return new kE$um();
    }

    public static kE$um bTf(MatrixStack matrixStack, double d2, double d3, double d4, float f2) {
        return kE.bTg().dtd(matrixStack).dte((float)d2).dtf((float)d3).dtg((float)d4).dth(f2);
    }

    public float bTk() {
        return this.QfJwz;
    }

    public MatrixStack bTh() {
        return this.kccAM;
    }

    public float bTl() {
        return this.dWDvH;
    }

    public float bTj() {
        return this.MDRnX;
    }

    public mG bTm() {
        return this.lLAZi;
    }

    public float bTi() {
        return this.tJewO;
    }
}

