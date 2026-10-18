/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.ac$rM;
import sixtwo.az;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mZ;

public class ac
extends az {
    private final int[] RETKy;
    private lq QihaT = lE.SVnNc.bYM(8.0f);
    private int[] OpPmd;
    private lq dEwPE = lE.ePKsc.bYM(6.0f);
    private ac$rM rHoip = ac$rM.WpzHJ;
    private lf PdJLB;
    private float BkqcE = 6.0f;
    private mG rutmI = null;
    private mG WITgX = null;
    private static long NmAXG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ac(int[] nArray) {
        this.RETKy = nArray;
    }

    public ac(String string) {
        this.RETKy = mZ.csh(string);
    }

    static {
        Loader.doInit(ac.class);
        ac._02bd1d3bd637361662bfc18f5ab75acb();
    }

    public native ac lr(ac$rM var1);

    @Override
    public native float dn();

    public native ac lo(String var1);

    public native ac lt(lq var1);

    public native ac ls(lq var1);

    @Override
    protected native void bV(lC var1);

    public native ac lp(lf var1);

    public native ac lv(mG var1);

    private static native void _02bd1d3bd637361662bfc18f5ab75acb();

    public native ac lq(float var1);

    private static native MatchException lw(MatchException var0);

    public native ac lu(mG var1);
}

