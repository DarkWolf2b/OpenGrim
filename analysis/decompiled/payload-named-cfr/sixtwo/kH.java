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
import sixtwo.kH$up;
import sixtwo.mG;

public class kH {
    private MatrixStack ZNdTt;
    private Box nrbSq;
    private mG UJMOR;
    private mG BTmWY;
    private mG lBaQI;
    private boolean NwNNG;
    private boolean FGWJo;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    kH(MatrixStack matrixStack, Box box, mG mG2, mG mG3, mG mG4, boolean bl2, boolean bl3) {
        this.ZNdTt = matrixStack;
        this.nrbSq = box;
        this.UJMOR = mG2;
        this.BTmWY = mG3;
        this.lBaQI = mG4;
        this.NwNNG = bl2;
        this.FGWJo = bl3;
    }

    public static kH$up bTJ(MatrixStack matrixStack, Box box, boolean bl2, boolean bl3) {
        return kH.bTK().dtL(matrixStack).dtM(box).dtQ(bl2).dtR(bl3);
    }

    public static kH$up bTK() {
        return new kH$up();
    }

    public mG bTP() {
        return this.lBaQI;
    }

    public mG bTO() {
        return this.BTmWY;
    }

    public MatrixStack bTL() {
        return this.ZNdTt;
    }

    public boolean bTR() {
        return this.FGWJo;
    }

    public Box bTM() {
        return this.nrbSq;
    }

    public boolean bTQ() {
        return this.NwNNG;
    }

    public mG bTN() {
        return this.UJMOR;
    }
}

