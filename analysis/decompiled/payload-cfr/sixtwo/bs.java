/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1792
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.function.Consumer;
import native.Loader;
import net.minecraft.class_1792;
import sixtwo.ad;
import sixtwo.ah;
import sixtwo.aj;
import sixtwo.bs$se;
import sixtwo.ii;
import sixtwo.jc;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.mA;
import sixtwo.rk;

public class bs
extends aj {
    private static float qIoed = 14.0f;
    private final String ekbnl;
    private final ah ivYEe;
    private final ad XyJZH;
    private final Consumer<String> UCEUh;
    private String BHqWK;
    private final List<bs$se> IICQJ;
    private final List<bs$se> modjX;
    private static int[] Pzbyp;
    private static long YTFUn;
    private static String fvhcP;
    private static long[] dyfjK;
    private static Integer[] AXOWA;
    private static Map fscps;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bs(float f2, float f3, float f4, String string, String string2, Consumer<String> consumer) {
        long l = YTFUn ^ 0x55937544C424L;
        super(f2, f3, 110.0f, 160.0f);
        this.IICQJ = new ArrayList<bs$se>();
        this.modjX = new ArrayList<bs$se>();
        this.IzFhM = f4;
        this.ekbnl = string2;
        this.UCEUh = consumer;
        this.BHqWK = string;
        this.IICQJ.addAll(jc.WnbNG.stream().sorted(Comparator.comparing(jc::bzF, String.CASE_INSENSITIVE_ORDER)).map(this::Hr).toList());
        this.ivYEe = new ah();
        this.XyJZH = new ad(lE.joxgd.bYM(7.0f));
        this.XyJZH.lZ(fvhcP);
        this.XyJZH.me((int)bs.HA("s", (int)18806, (long)(0x7B006A7557A2A7C0L ^ l)));
        this.XyJZH.mg(this::Hm);
        this.Hm();
        this.FHbTC = true;
    }

    static {
        Loader.doInit(bs.class);
        bs._590a1d3aeb4d47eb50934e3a42634ec3();
    }

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native void Hm();

    private static native int Hz(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    @Override
    public native boolean eK(char var1);

    public static native int[] Hv();

    public static native void Hu(int[] var0);

    private static native void _590a1d3aeb4d47eb50934e3a42634ec3();

    private native boolean Ho(class_1792 var1);

    private native /* synthetic */ boolean Hp(bs$se var1);

    private native /* synthetic */ void Hq(ii var1, lC var2);

    private static native MatchException Hw(MatchException var0);

    private static native int Hy(int var0, long var1);

    static native /* synthetic */ float Hs(bs var0);

    static native /* synthetic */ rk Ht(bs var0);

    private native void Hn(bs$se var1);

    private static native String Hx(byte[] var0);

    private native /* synthetic */ bs$se Hr(class_1792 var1);

    private static native CallSite HA(MethodHandles.Lookup var0, String var1, MethodType var2);
}
