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
import sixtwo.cC;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mr;

public class ep
extends gg {
    private final cC QHFqR;
    private static long SdMAu;
    private static long[] uwsLE;
    private static Integer[] JzJxD;
    private static Map IUUCe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ep() {
        long l2 = SdMAu ^ 0x5D2683C4BDE8L;
        super(gf.aZL((int)ep.aua("l", (int)6861, (long)(0x210129A190F67729L ^ l2)), false, gh.xgeEn));
        int[] nArray = new int[ep.aua("l", (int)19100, (long)(0x5EBE75B80B9DA77AL ^ l2))];
        nArray[0] = (int)ep.aua("l", (int)15527, (long)(0x61B4348DC50AD147L ^ l2));
        nArray[1] = (int)ep.aua("l", (int)13817, (long)(0x7AA05182E4915810L ^ l2));
        nArray[2] = (int)ep.aua("l", (int)6421, (long)(0x5886F6F32313F4FDL ^ l2));
        nArray[3] = (int)ep.aua("l", (int)26330, (long)(0x2A7D2001D47F0B3DL ^ l2));
        nArray[4] = (int)ep.aua("l", (int)22868, (long)(0x438BE2B12705B4BAL ^ l2));
        nArray[5] = (int)ep.aua("l", (int)1084, (long)(0x20A2D3CE800469C1L ^ l2));
        nArray[ep.aua("l", (int)7221, (long)(0x4C9AE7274821F1DEL ^ l2))] = (int)ep.aua("l", (int)4879, (long)(0x34A955857851FEE2L ^ l2));
        nArray[ep.aua("l", (int)24992, (long)(0x517500E556EE0C45L ^ l2))] = (int)ep.aua("l", (int)17364, (long)(0x5239FC5D25D42E36L ^ l2));
        nArray[ep.aua("l", (int)19028, (long)(0x505EF9CCD283A7B8L ^ l2))] = (int)ep.aua("l", (int)24774, (long)(0x441AC73B68668D2CL ^ l2));
        nArray[ep.aua("l", (int)15300, (long)(0x369BD540DE175627L ^ l2))] = (int)ep.aua("l", (int)7499, (long)(0xDFD177AD043F0B7L ^ l2));
        nArray[ep.aua("l", (int)29598, (long)(0x592CF180F75C1E7FL ^ l2))] = (int)ep.aua("l", (int)13251, (long)(0x1D593BA7AB4E5E2CL ^ l2));
        this.QHFqR = new cC(this, mr.clS(nArray)).Vy(0.01).Vw(1.5).Vx(3.0).VA(1.5);
    }

    static {
        Loader.doInit(ep.class);
        ep._a30b6b505e7cd15c6b5a9e05f022e45f();
    }

    public native cC atX();

    private static native CallSite aua(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int atY(int var0, long var1);

    private static native int atZ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _a30b6b505e7cd15c6b5a9e05f022e45f();
}

