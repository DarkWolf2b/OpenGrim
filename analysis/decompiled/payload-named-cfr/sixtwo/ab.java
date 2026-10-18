/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import sixtwo.aa;
import sixtwo.az;
import sixtwo.ig;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class ab
extends az {
    private final rk fIMlO;
    private final rk IMZfY;
    private mG ffdLg;
    private mG BiXTn;
    private final ri hEOCR;
    private aa xkYOr;
    private boolean GgyNW;
    private static long CZTRF;
    private static long[] UPBXc;
    private static Integer[] OtpWj;
    private static Map uQDgA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ab(boolean bl2) {
        mG mG2;
        CallSite callSite;
        ri ri2;
        ri ri3;
        long l2 = CZTRF ^ 0x384C44EC619CL;
        this.fIMlO = new rk((int)ab.ln("g", (int)3284, (long)(0x33F0F06FC27CF97EL ^ l2))).dhs(rj.UPXqT);
        this.IMZfY = new rk((int)ab.ln("g", (int)19452, (long)(0x6AE7B3645AF3E57L ^ l2))).dhs(rj.XzDkv);
        this.GgyNW = bl2;
        this.BcpIo = 15.0f;
        this.WjISQ = 8.0f;
        ig ig2 = rD.dlM().bjG();
        try {
            ri ri4;
            this.ffdLg = ig2.bir();
            this.BiXTn = ig2.bis();
            ab ab2 = this;
            ri3 = ri4;
            ri2 = ri4;
            callSite = ab.ln("g", (int)19452, (long)(0x6AE7B3645AF3E57L ^ l2));
            mG2 = bl2 ? this.BiXTn : this.ffdLg;
        }
        catch (MatchException matchException) {
            throw ab.lk(matchException);
        }
        ri3((int)callSite, mG2);
        ab2.hEOCR = ri2.dfW(rj.UPXqT);
    }

    static {
        Loader.doInit(ab.class);
        ab._b631bee9f62e8bc7f2a74f5399522219();
    }

    public native ri ld();

    public native boolean lf();

    @Override
    public native float dn();

    public native aa le();

    private static native CallSite ln(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native mG lc();

    public native ab li(aa var1);

    private static native MatchException lk(MatchException var0);

    public native mG lb();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    public native ab lg(mG var1);

    public native rk la();

    public native ab lh(mG var1);

    private static native int lm(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    public native float kN();

    @Override
    protected native void bV(lC var1);

    private static native int ll(int var0, long var1);

    private static native void _b631bee9f62e8bc7f2a74f5399522219();

    public native rk kZ();

    public native ab lj(boolean var1);
}

