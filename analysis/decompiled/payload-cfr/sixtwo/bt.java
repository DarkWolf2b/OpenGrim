/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;
import native.Loader;
import sixtwo.O;
import sixtwo.ah;
import sixtwo.aj;
import sixtwo.az;
import sixtwo.bs;
import sixtwo.bz;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.cy;
import sixtwo.iS;
import sixtwo.ig;
import sixtwo.iy;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.mA;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class bt
extends aj {
    private static Pattern xTVZM;
    private final rk bFTNj;
    private final List<az> UlztO;
    private final ah uyARm;
    private final iy FmXmt;
    private final O KKEPY;
    private static cy AaYbn;
    private static cy NcLix;
    private static cC mJDgD;
    private static cC yMNoI;
    private static cy XbZzs;
    private static cy gCJzz;
    private static cJ wdJaU;
    private static cJ HGeKS;
    private static cJ xewZE;
    private static cC jAdum;
    private static cJ XLbVI;
    private static cJ UuLNK;
    private static cy JNSMX;
    private static cC BdyXl;
    private static cC EQmot;
    private static cC zeYXW;
    private static cC STxMh;
    private float gURWm;
    private static long QedcP;
    private static String[] snfIh;
    private static String[] MFsQY;
    private static Map oeiZn;
    private static long[] KBLUT;
    private static Integer[] MMCfZ;
    private static Map pkphh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _5290428a703cbcba4987191105fc62ce();

    public bt(iy iy2) {
        long l = QedcP ^ 0x25DCECC705FAL;
        this.bFTNj = new rk((int)bt.HZ("v", (int)28603, (long)(0x39F8B8FC6A39D487L ^ l))).dhs(rj.MBpuQ);
        this.UlztO = new ArrayList<az>();
        bz bz2 = bz.KH();
        lc lc2 = bz2.KI();
        this.FmXmt = iy2;
        this.uyARm = new ah();
        this.gURWm = lc2.bXz() + 10.0f;
        this.MCnYt = this.gURWm + 24.0f;
        this.pNyTQ = lc2.bXG();
        this.BcpIo = 140.0f;
        this.WjISQ = lc2.bXI() + 10.0f + bz2.KJ().bXI();
        this.bFTNj.dhe(this.MCnYt);
        this.IzFhM = 2.0f;
        this.HH();
        ig ig2 = rD.dlM().bjG();
        this.KKEPY = O.hE((String)((Object)bt.HW("f", (int)995, (long)(0x7883D0B2C3EC8B7BL ^ l)))).je(true).jf(ld.M).jk(ig2.bio().coe(0.9f)).jq(ig2.bis()).jr(ig2.bis().cog(0.85f)).jb(this::HR);
        this.FHbTC = true;
    }

    public bt() {
        long l = QedcP ^ 0x1D85CAE47DE7L;
        this.bFTNj = new rk((int)bt.HZ("v", (int)5503, (long)(0x5C24461A5922561EL ^ l))).dhs(rj.MBpuQ);
        this.UlztO = new ArrayList<az>();
        bz bz2 = bz.KH();
        lc lc2 = bz2.KI();
        this.FmXmt = null;
        this.uyARm = new ah();
        this.gURWm = lc2.bXz() + 10.0f;
        int[] nArray = bs.Hv();
        this.MCnYt = this.gURWm + 24.0f;
        this.pNyTQ = lc2.bXG();
        this.BcpIo = 140.0f;
        this.WjISQ = lc2.bXI() + 10.0f + bz2.KJ().bXI();
        this.bFTNj.dhe(this.MCnYt);
        this.IzFhM = 2.0f;
        this.HH();
        ig ig2 = rD.dlM().bjG();
        try {
            this.KKEPY = O.hE((String)((Object)bt.HW("f", (int)17283, (long)(0x553A948DE4E9B312L ^ l)))).je(true).jf(ld.M).jk(ig2.bio().coe(0.9f)).jq(ig2.bis()).jr(ig2.bis().cog(0.85f)).jb(this::HQ);
            this.FHbTC = true;
            if (iS.bwL() == null) {
                bs.Hu(new int[5]);
            }
        }
        catch (MatchException matchException) {
            throw bt.HS(matchException);
        }
    }

    static {
        Loader.doInit(bt.class);
        bt._5290428a703cbcba4987191105fc62ce();
    }

    @Override
    public native void dl(double var1, double var3, mA var5);

    private native void HK();

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native void HH();

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    @Override
    protected native float gb();

    private static native CallSite HZ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String HT(byte[] var0);

    @Override
    public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

    @Override
    public native boolean eK(char var1);

    @Override
    protected native boolean od();

    public native void HB(float var1, float var2, float var3);

    private native void HG(float var1);

    private static native MatchException HS(MatchException var0);

    private native float HC();

    private native /* synthetic */ void HL(iy var1);

    private native /* synthetic */ void HO(lC var1);

    private native /* synthetic */ void HP(lC var1);

    private static native int HX(int var0, long var1);

    private static native int HY(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void HM(iy var1);

    private native /* synthetic */ void HN(iy var1);

    private static native Object HV(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native float HD();

    private native float HF();

    private native float HE();

    private native void HI();

    private static native String HU(int var0, long var1);

    private static native CallSite HW(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ void HR(O var1);

    private native /* synthetic */ void HQ(O var1);

    private native void HJ();
}
