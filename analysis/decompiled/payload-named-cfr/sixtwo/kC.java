/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.Box
 */
package sixtwo;

import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Box;
import sixtwo.kC$uk;
import sixtwo.mG;

public class kC {
    private MatrixStack tknaZ;
    private Box LiWCJ;
    private mG kBIbs;
    private mG OQuAu;
    private mG tosoI;
    private boolean efFVS;
    private boolean ZSYRw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    kC(MatrixStack matrixStack, Box box, mG mG2, mG mG3, mG mG4, boolean bl2, boolean bl3) {
        this.tknaZ = matrixStack;
        this.LiWCJ = box;
        this.kBIbs = mG2;
        this.OQuAu = mG3;
        this.tosoI = mG4;
        this.efFVS = bl2;
        this.ZSYRw = bl3;
    }

    public static kC$uk bSK(MatrixStack matrixStack, Box box, boolean bl2, boolean bl3) {
        return kC.bSL().dsE(matrixStack).dsF(box).dsJ(bl2).dsK(bl3);
    }

    public static kC$uk bSL() {
        return new kC$uk();
    }

    public mG bSO() {
        return this.kBIbs;
    }

    public MatrixStack bSM() {
        return this.tknaZ;
    }

    public boolean bSS() {
        return this.ZSYRw;
    }

    public mG bSQ() {
        return this.tosoI;
    }

    public mG bSP() {
        return this.OQuAu;
    }

    public boolean bSR() {
        return this.efFVS;
    }

    public Box bSN() {
        return this.LiWCJ;
    }
}

