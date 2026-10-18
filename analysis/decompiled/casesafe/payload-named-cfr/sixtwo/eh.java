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
import sixtwo.cA;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mr;

public class eh
extends gg {
    private final cA GYRzq;
    private final mT XWHiC;
    private static long GhdJL;
    private static String QZqXr;
    private static long[] aNeIU;
    private static Integer[] edZTg;
    private static Map XmJDu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _37a1913627cf415695d1ec468fdbedf4();

    public eh() {
        long l2 = GhdJL ^ 0x67C6C4BB7B2CL;
        super(gf.aZL((int)eh.asD("v", (int)27431, (long)(0x6FB862ACB1D8DC57L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[eh.asD("v", (int)677, (long)(0x7DDF6D3935EC35D6L ^ l2))];
        nArray[0] = (int)eh.asD("v", (int)29476, (long)(0x3E0B35E4F051C45CL ^ l2));
        nArray[1] = (int)eh.asD("v", (int)11017, (long)(0x57712DA747339C7BL ^ l2));
        nArray[2] = (int)eh.asD("v", (int)31099, (long)(0x1B82902E30C04E01L ^ l2));
        nArray[3] = (int)eh.asD("v", (int)31782, (long)(0x2EE63E1DDAF64B5AL ^ l2));
        nArray[4] = (int)eh.asD("v", (int)32224, (long)(0x57116C23F270CA9BL ^ l2));
        nArray[5] = (int)eh.asD("v", (int)31099, (long)(0x1B82902E30C04E01L ^ l2));
        nArray[eh.asD("v", (int)32625, (long)(0x23F9372903B5C80FL ^ l2))] = (int)eh.asD("v", (int)23856, (long)(0x70C89FE2D8B56A4FL ^ l2));
        nArray[eh.asD("v", (int)5005, (long)(0x2B04171F3EB624F0L ^ l2))] = (int)eh.asD("v", (int)24583, (long)(0x58AD5F26EA02577EL ^ l2));
        this.GYRzq = new cA(this, mr.clS(nArray)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(QZqXr);
        this.XWHiC = mT.cpz();
    }

    static {
        Loader.doInit(eh.class);
        eh._37a1913627cf415695d1ec468fdbedf4();
    }

    private static native CallSite asD(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int asB(int var0, long var1);

    private static native int asC(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String asA(byte[] var0);

    @hG
    public native void asy(gH.th var1);

    private static native MatchException asz(MatchException var0);
}

