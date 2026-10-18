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
import sixtwo.ak;
import sixtwo.az;
import sixtwo.bh;
import sixtwo.cJ;
import sixtwo.gg;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.mr;
import sixtwo.rj;
import sixtwo.rk;

public class bk
extends ak<cJ> {
    private final gg cpUzX;
    private bh HjHnW;
    protected final rk FDvbN;
    private static long KbsrP;
    private static long[] ZLDda;
    private static Integer[] HlkAB;
    private static Map pwxhd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bk(gg gg2, az az2) {
        long l2 = KbsrP ^ 0x113C1EBEC7C7L;
        int[] nArray = new int[bk.Eo("c", (int)21192, (long)(0x3B6FEDF90971469DL ^ l2))];
        nArray[0] = (int)bk.Eo("c", (int)21000, (long)(0x6E006B63481FC65CL ^ l2));
        nArray[1] = (int)bk.Eo("c", (int)24133, (long)(0x6EBBA98E3F7A4A13L ^ l2));
        nArray[2] = (int)bk.Eo("c", (int)9192, (long)(0x5B68F787812A37B4L ^ l2));
        nArray[3] = (int)bk.Eo("c", (int)11146, (long)(0x667D9AA533583FD8L ^ l2));
        nArray[4] = (int)bk.Eo("c", (int)12436, (long)(0x920546EAB2CA4C9L ^ l2));
        nArray[5] = (int)bk.Eo("c", (int)29828, (long)(0x72A14DB8197960D5L ^ l2));
        nArray[bk.Eo("c", (int)7453, (long)(0xDE9E924FDD894EL ^ l2))] = (int)bk.Eo("c", (int)12618, (long)(0x1C16F907738A251DL ^ l2));
        super(new cJ(mr.clS(nArray)).WE(true), az2);
        this.FDvbN = new rk((int)bk.Eo("c", (int)2036, (long)(0x709A169B606C93A4L ^ l2))).dhs(rj.MBpuQ);
        this.cpUzX = gg2;
    }

    static {
        Loader.doInit(bk.class);
        bk._ecdbab0718f5e953ae4b668ba3bb566a();
    }

    @Override
    public native float dn();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native void dY();

    private static native void _ecdbab0718f5e953ae4b668ba3bb566a();

    private static native CallSite Eo(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int Em(int var0, long var1);

    private static native int En(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException El(MatchException var0);
}

