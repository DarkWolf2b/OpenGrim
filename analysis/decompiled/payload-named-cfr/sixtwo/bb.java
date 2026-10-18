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
import sixtwo.az;
import sixtwo.ba;
import sixtwo.ig;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public class bb<T extends ig>
extends az {
    private final T Hzehq;
    private boolean wdYkr;
    private ba yPGPg;
    private ba mVfOV;
    private final rk ENBAX;
    private final rk TExFB;
    private final rk SBrVn;
    private static long bEhCo;
    private static long[] qBphK;
    private static Integer[] EUMNl;
    private static Map vsPex;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bb(T t) {
        long l2 = bEhCo ^ 0x45A82AC0E3A4L;
        this.wdYkr = true;
        this.ENBAX = new rk((int)bb.Bq("v", (int)30884, (long)(0x336DB35E67287748L ^ l2))).dhs(rj.UPXqT);
        this.TExFB = new rk((int)bb.Bq("v", (int)25046, (long)(0x37A7EB18B569EE39L ^ l2))).dhs(rj.UPXqT);
        this.SBrVn = new rk((int)bb.Bq("v", (int)14887, (long)(0x2FB715D6D0CF35C9L ^ l2))).dhs(rj.MBpuQ);
        this.Hzehq = t;
        this.BcpIo = 9.0f;
        this.WjISQ = 9.0f;
    }

    static {
        Loader.doInit(bb.class);
        bb._82fbfebd99153c333724c02ed202703f();
    }

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    private static native int Bo(int var0, long var1);

    public native bb<T> Be(ba var1);

    public native bb<T> Bf(ba var1);

    public native boolean Bh();

    public native bb<T> Bd(boolean var1);

    public native ba Bi();

    public native ba Bj();

    public native rk Bm();

    public native T Bg();

    private static native MatchException Bn(MatchException var0);

    private static native int Bp(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native rk Bk();

    private static native CallSite Bq(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native rk Bl();

    private static native void _82fbfebd99153c333724c02ed202703f();
}

