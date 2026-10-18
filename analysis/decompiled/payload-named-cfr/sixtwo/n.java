/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.ArrayList;
import java.util.List;
import native.Loader;
import sixtwo.az;
import sixtwo.k;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mG;

public class n
extends k {
    private static float lSwBn = 8.0f;
    private static float uXDsi = 6.5f;
    private static float BcwJW = 7.0f;
    private static float hztnT = 5.5f;
    private static float SZWkx = 2.0f;
    private lq Robji = lE.WTzbi.bYM(6.5f);
    private lq rgvHW = lE.WTzbi.bYM(5.5f);
    private int[] gZsWh;
    private final List<int[]> UHScV = new ArrayList<int[]>();
    private mG qvPWt;
    private mG WwPdX;
    private static long XKgcm;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public n(az az2, String string, String ... stringArray) {
        this(az2, false);
        this.cX(string);
        this.cZ(stringArray);
    }

    public n(az az2, boolean bl2) {
        super(az2, bl2);
        this.cSEXm = ld.all(5.0f);
        this.mOGYZ = 4.0f;
        this.dUPLX = 12.0f;
        this.qbars = 56.0f;
    }

    static {
        Loader.doInit(n.class);
        n._84041c19426e6f21a3b32fa860e8f14d();
    }

    @Override
    protected native void cd(lC var1, float var2, float var3);

    @Override
    protected native float cb();

    public native n da(int[] ... var1);

    public native n db(String var1);

    public native n dc(lq var1);

    private static native MatchException di(MatchException var0);

    @Override
    protected native float cc();

    public native n dh(mG var1);

    public native n df(mG var1);

    public native n de(ld var1);

    public native n cZ(String ... var1);

    public native n cY(int[] var1);

    public native n cX(String var1);

    public native n dg(mG var1);

    public native n dd(lq var1);

    private static native void _84041c19426e6f21a3b32fa860e8f14d();
}

