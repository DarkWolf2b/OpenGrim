/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.az;
import sixtwo.k;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mG;

public class l
extends k {
    private static final float LHwUX = 7.5f;
    private static final float blfFN = 4.0f;
    private lq hylSK = lE.WTzbi.bYM(7.0f);
    private int[] lViNc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public l(az az2, int[] nArray, boolean bl2) {
        super(az2, bl2);
        this.lViNc = nArray;
    }

    public l(az az2, boolean bl2) {
        super(az2, bl2);
    }

    public l(az az2) {
        this(az2, false);
    }

    public l(az az2, int[] nArray) {
        this(az2, nArray, false);
    }

    static {
        Loader.doInit(l.class);
    }

    @Override
    protected native void cd(lC var1, float var2, float var3);

    @Override
    protected native float cb();

    @Override
    protected native float cc();

    public native l cO(int[] var1);

    public native l cP(String var1);

    public native l cR(mG var1);

    public native l cS(mG var1);

    public native l cU(int var1);

    public native l cQ(lq var1);

    public native l cT(ld var1);
}

