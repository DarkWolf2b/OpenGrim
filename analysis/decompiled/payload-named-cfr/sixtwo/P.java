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
import sixtwo.S;
import sixtwo.X;
import sixtwo.aj;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mZ;
import sixtwo.rj;
import sixtwo.rk;

/*
 * Illegal identifiers - consider using --renameillegalidents true
 */
public class P
extends X<P> {
    private aj ePwbr;
    private int[] IgwyG;
    private lf LFXJA;
    private S NZNcZ;
    private rk NlsJa;
    private static String[] AQKht;
    private static long jfbMe;
    private static String[] QLckI;
    private static String[] GFXwi;
    private static Map TUTeC;
    private static long[] tyvjM;
    private static Integer[] OxIYt;
    private static Map JpUGM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public P(aj aj2, int[] nArray, lf lf2) {
        long l2 = jfbMe ^ 0x6F648B7C8A5CL;
        this.NZNcZ = S.DcYIP;
        this.NlsJa = new rk((int)P.ig("z", (int)11112, (long)(0x2732F838DB863C6DL ^ l2))).dhs(rj.UPXqT);
        this.ePwbr = aj2;
        this.IgwyG = nArray;
        this.LFXJA = lf2;
        this.WjISQ = 19.0f;
    }

    public P(aj aj2, String string, lf lf2) {
        long l2 = jfbMe ^ 0x634403BB76F2L;
        this.NZNcZ = S.DcYIP;
        this.NlsJa = new rk((int)P.ig("z", (int)21871, (long)(0x4126A7049E073EC5L ^ l2))).dhs(rj.UPXqT);
        this.ePwbr = aj2;
        this.IgwyG = mZ.csh(string);
        this.LFXJA = lf2;
        this.WjISQ = 19.0f;
    }

    static {
        Loader.doInit(P.class);
        P._0af9684411da2d3aa88fade5d86056d6();
    }

    private static native CallSite id(MethodHandles.Lookup var0, String var1, MethodType var2);

    @Override
    public native float dn();

    private static native int ie(int var0, long var1);

    private static native String ia(byte[] var0);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native int if(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native Object ic(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    protected native void bV(lC var1);

    private static native String ib(int var0, long var1);

    public static native void hX(String[] var0);

    public static native String[] hY();

    public native P hO(S var1);

    private static native void _0af9684411da2d3aa88fade5d86056d6();

    private static native CallSite ig(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException hZ(MatchException var0);

    public native S hS();

    public native P hN(aj var1);

    public native aj hP();

    public native P hW(rk var1);

    public native int[] hQ();

    public native P hU(int[] var1);

    public native P hV(lf var1);

    public native rk hT();

    public native lf hR();
}

