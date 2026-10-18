/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Item
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import sixtwo.az;
import sixtwo.jc;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.nf;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class bo
extends az {
    private final nf jZEcd;
    private final az zxOMV;
    private final ri jFosN;
    private final rk lAJLi;
    private final rk UCmRU;
    private static long ejgBq;
    private static String[] WTtGn;
    private static String[] XTYeh;
    private static Map Nufut;
    private static long[] OXgHV;
    private static Integer[] XLRYu;
    private static Map uTsCw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native int FC(int var0, long var1);

    public bo(nf nf2, az az2) {
        long l2 = ejgBq ^ 0x3B07243AFC01L;
        this.lAJLi = new rk((int)bo.FE("u", (int)21461, (long)(0x6FDB819D9CBA8DAL ^ l2))).dhs(rj.XzDkv);
        this.UCmRU = new rk((int)bo.FE("u", (int)15753, (long)(0x76B4BA64EEBB4687L ^ l2))).dhs(rj.UPXqT);
        this.jZEcd = nf2;
        this.zxOMV = az2;
        Item item = jc.bzz(nf2.ctT());
        mG mG2 = jc.bzB(item);
        this.jFosN = new ri((int)bo.FE("u", (int)15753, (long)(0x76B4BA64EEBB4687L ^ l2)), mG2);
    }

    static {
        Loader.doInit(bo.class);
        bo._59e141878ced10e285ef05299aa3d0d3();
    }

    @Override
    public native float dn();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native void dY();

    private static native void _59e141878ced10e285ef05299aa3d0d3();

    private static native CallSite FE(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException Fx(MatchException var0);

    private native void Fw(double var1, double var3);

    private static native Object FA(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String Fz(int var0, long var1);

    private static native CallSite FB(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int FD(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String Fy(byte[] var0);
}

