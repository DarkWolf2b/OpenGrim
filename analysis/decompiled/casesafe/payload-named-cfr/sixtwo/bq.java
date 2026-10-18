/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.P;
import sixtwo.S;
import sixtwo.ae;
import sixtwo.ae$rP;
import sixtwo.ah;
import sixtwo.aj;
import sixtwo.az;
import sixtwo.cJ;
import sixtwo.cy;
import sixtwo.ig;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.ng;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class bq
extends az {
    private static float PssWv = 12.0f;
    private static float FlVBu = 0.5f;
    private static float mGFYO = 4.0f;
    private static float rsiUA = 12.5f;
    private final List<ng> oosnB;
    private final az gonlP;
    private final rk hfuSd;
    private final rk Izzcw;
    private final rk fViQp;
    private final P LvcHh;
    private final P dATEM;
    private final ah BOvEx;
    private static long eduFT;
    private static String[] WzteC;
    private static String[] UASzT;
    private static Map BepdG;
    private static long[] rMScF;
    private static Integer[] WokSU;
    private static Map rSYQq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bq(List<ng> list, az az2) {
        long l2 = eduFT ^ 0x539C4B614D99L;
        this.hfuSd = new rk((int)bq.Gm("t", (int)10292, (long)(0x68EA343430FD7320L ^ l2))).dhs(rj.UPXqT);
        this.Izzcw = new rk((int)bq.Gm("t", (int)2500, (long)(0x51E03B68728ED2D5L ^ l2))).dhs(rj.NJlxm);
        this.fViQp = new rk((int)bq.Gm("t", (int)2500, (long)(0x51E03B68728ED2D5L ^ l2))).dhs(rj.UPXqT);
        this.BOvEx = new ah();
        this.oosnB = list;
        this.gonlP = az2;
        ig ig2 = rD.dlM().bjG();
        this.LvcHh = ((P)new P(null, (String)((Object)bq.Gj("l", (int)18793, (long)(0x749F4B38429EF6E4L ^ l2))), lf.cuxpa).ja(ig2.biw().bhF())).hO(S.CLgKH);
        this.dATEM = ((P)((P)new P(null, (String)((Object)bq.Gj("l", (int)24111, (long)(0x7ADADE1ECD8FE1AEL ^ l2))), lf.JHGge).ja(jk.mPXGi)).iY(jk.mPXGi)).hO(S.CLgKH);
    }

    static {
        Loader.doInit(bq.class);
        bq._566eb1eeb5f605d6540f908d7417f39d();
    }

    @Override
    public native float dn();

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    private static native void _566eb1eeb5f605d6540f908d7417f39d();

    private native /* synthetic */ void Ge(ae var1, ng var2, cJ var3, cJ var4, cy var5, boolean var6, aj var7);

    private native void FZ(double var1, double var3, ng var5);

    private native /* synthetic */ void Gb(ng var1, P var2);

    private native boolean FW(String var1, ng var2);

    private static native /* synthetic */ String Gd(ae$rP var0);

    private static native int Gl(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native int FX(String var1) throws NumberFormatException;

    private static native String Gg(byte[] var0);

    private native /* synthetic */ void Gc(double var1, double var3, ng var5, P var6);

    private static native int Gk(int var0, long var1);

    private static native List<ae$rP> FY();

    private static native CallSite Gm(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite Gj(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native NumberFormatException Gf(NumberFormatException var0);

    private static native String Gh(int var0, long var1);

    private static native Object Gi(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void FV(double var1, double var3, ng var5);

    private native float Ga();
}

