/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.az;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lq;
import sixtwo.rj;
import sixtwo.rk;

public class aq
extends az {
    private final String novSO;
    private final String hqfHJ;
    private lq ertCr;
    private lq LlHzp;
    private float YzKwy;
    private final rk nAFOY;
    private static long JIlVW;
    private static long KYKwJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aq(String string, String string2) {
        long l2 = JIlVW ^ 0x19A00CD3D8B6L;
        this.ertCr = lE.WTzbi.bYM(11.0f);
        this.LlHzp = lE.joxgd.bYM(8.0f);
        this.YzKwy = 15.0f;
        this.nAFOY = new rk((int)KYKwJ).dhs(rj.UPXqT);
        this.novSO = string;
        this.hqfHJ = string2;
    }

    static {
        Loader.doInit(aq.class);
        aq._767d8839a68e2c6e03076628098ed797();
    }

    @Override
    protected native void bV(lC var1);

    public native void qB();

    private static native void _767d8839a68e2c6e03076628098ed797();

    public native aq qE(float var1);

    public native aq qD(lq var1);

    public native aq qC(lq var1);
}

