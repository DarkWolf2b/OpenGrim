/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.az;
import sixtwo.h$rH;
import sixtwo.i;

public class h {
    private final h$rH ZbGue;
    private final int DBVzo;
    private final int DGQOz;
    private final int dTqVH;
    private final char xQWfQ;
    private i jsZzv;
    private az fxVCg;
    private az pHPuk;
    private boolean TMeSA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private h(h$rH rH2, int n2, int n3, int n4, char c2) {
        this.ZbGue = rH2;
        this.DBVzo = n2;
        this.DGQOz = n3;
        this.dTqVH = n4;
        this.xQWfQ = c2;
    }

    public h$rH bF() {
        return this.ZbGue;
    }

    public void bE() {
        this.TMeSA = true;
    }

    public boolean bN() {
        return this.TMeSA;
    }

    public static h bC(int n2, int n3, int n4) {
        return new h(h$rH.bktbd, n2, n3, n4, '\u0000');
    }

    public char bJ() {
        return this.xQWfQ;
    }

    public static h bD(char c2) {
        return new h(h$rH.GxiIK, 0, 0, 0, c2);
    }

    public int bG() {
        return this.DBVzo;
    }

    public h bO(i i2) {
        this.jsZzv = i2;
        return this;
    }

    public az bM() {
        return this.pHPuk;
    }

    public h bQ(az az2) {
        this.pHPuk = az2;
        return this;
    }

    public int bH() {
        return this.DGQOz;
    }

    public int bI() {
        return this.dTqVH;
    }

    public i bK() {
        return this.jsZzv;
    }

    public az bL() {
        return this.fxVCg;
    }

    public h bP(az az2) {
        this.fxVCg = az2;
        return this;
    }
}

