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
import native.Loader;
import sixtwo.ad;
import sixtwo.ae$rP;
import sixtwo.az;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public class ae
extends az {
    private static float xUOkU = 12.0f;
    protected final rk qOjgZ;
    private final rk CtXob;
    private final String RcMBn;
    private final az oXzPE;
    private final List<ae$rP> fTIag;
    private final List<ae$rP> fOcNI;
    private final ad HekHN;
    private final int Vfhfy;
    private static long FvIcS;
    private static long[] dPHRz;
    private static Integer[] GEApw;
    private static Map ICUMP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ae(String string, az az2, String string2, List<ae$rP> list) {
        long l2 = FvIcS ^ 0x33386617A5DFL;
        this.qOjgZ = new rk((int)ae.na("f", (int)23141, (long)(0xB2B32A331261E11L ^ l2))).dhs(rj.UPXqT);
        this.CtXob = new rk((int)ae.na("f", (int)1796, (long)(0x36C8F8F4BE5F4373L ^ l2))).dhs(rj.UPXqT);
        this.fTIag = new ArrayList<ae$rP>();
        this.fOcNI = new ArrayList<ae$rP>();
        this.RcMBn = string;
        this.oXzPE = az2;
        this.fTIag.addAll(list);
        this.HekHN = new ad(lE.joxgd.bYM(7.0f));
        this.HekHN.lZ(string2);
        this.HekHN.me((int)ae.na("f", (int)28611, (long)(0x280C40E172A7ABB6L ^ l2)));
        this.HekHN.mg(this::mS);
        this.Vfhfy = (int)ae.na("f", (int)25308, (long)(0x5316AFB73F80A6AAL ^ l2));
        this.mS();
    }

    static {
        Loader.doInit(ae.class);
        ae._ff993d37bc17c03e3f54fc32a318cd99();
    }

    @Override
    public native float dn();

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native CallSite na(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _ff993d37bc17c03e3f54fc32a318cd99();

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean eK(char var1);

    public native String mP();

    private native boolean mQ();

    private native float mT(int var1, float var2);

    private static native /* synthetic */ String mU(ae$rP var0);

    private native void mS();

    private static native /* synthetic */ int mV(String var0, int[] var1, ae$rP var2);

    private native ae$rP mR(String var1);

    private static native /* synthetic */ boolean mW(String var0, ae$rP var1);

    private static native MatchException mX(MatchException var0);

    private static native int mY(int var0, long var1);

    private static native int mZ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native ae mO(String var1);
}

