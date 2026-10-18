/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.cl;
import sixtwo.iS;

public class ck {
    private final cl izVDT;
    private final float TbtxI;
    private boolean glfpL;
    private static iS[] UQvdU;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ck(cl cl2, float f2) {
        this.izVDT = cl2;
        this.TbtxI = f2;
    }

    static {
        if (ck.QK() != null) {
            ck.QJ(new iS[5]);
        }
    }

    public static void QJ(iS[] iSArray) {
        UQvdU = iSArray;
    }

    public cl QF() {
        return this.izVDT;
    }

    public boolean QH() {
        return this.glfpL;
    }

    public float QG() {
        return this.TbtxI;
    }

    public ck QI(boolean bl2) {
        this.glfpL = bl2;
        return this;
    }

    public static iS[] QK() {
        return UQvdU;
    }
}

