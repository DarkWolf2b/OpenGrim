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
import sixtwo.cJ;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mr;

public class ex
extends gg {
    private final cJ pyxZq;
    private static long kPBXI;
    private static long[] jBHTq;
    private static Integer[] OqVLr;
    private static Map xLPDH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _bdc1508d9422d0323ece295e1c5c3830();

    public ex() {
        long l2 = kPBXI ^ 0x37F9611029E6L;
        super(gf.aZL((int)ex.auY("w", (int)27168, (long)(0x7EEF9954557D91F3L ^ l2)), false, gh.xgeEn));
        int[] nArray = new int[ex.auY("w", (int)9083, (long)(0x251030B5C5E058AFL ^ l2))];
        nArray[0] = (int)ex.auY("w", (int)25743, (long)(0x44C4EFA2D98D9F4AL ^ l2));
        nArray[1] = (int)ex.auY("w", (int)20771, (long)(0x65E107514E882AEEL ^ l2));
        nArray[2] = (int)ex.auY("w", (int)3547, (long)(0x6F1CCF46E84B760DL ^ l2));
        nArray[3] = (int)ex.auY("w", (int)15348, (long)(0x699F178A2F7CC02EL ^ l2));
        nArray[4] = (int)ex.auY("w", (int)2874, (long)(0x21BF7640390570F9L ^ l2));
        nArray[5] = (int)ex.auY("w", (int)24760, (long)(0x42BF08758E579B67L ^ l2));
        nArray[ex.auY("w", (int)15887, (long)(0x1A36B24634D2C5D7L ^ l2))] = (int)ex.auY("w", (int)15348, (long)(0x699F178A2F7CC02EL ^ l2));
        nArray[ex.auY("w", (int)20977, (long)(0x50A3DB8EC177AA35L ^ l2))] = (int)ex.auY("w", (int)22509, (long)(0x9D23029C18C2C3FL ^ l2));
        nArray[ex.auY("w", (int)12939, (long)(0x580B0EB3189AC950L ^ l2))] = (int)ex.auY("w", (int)24122, (long)(0x521EAF59D866A5FAL ^ l2));
        nArray[ex.auY("w", (int)8955, (long)(0x33DB4F598CC15937L ^ l2))] = (int)ex.auY("w", (int)4118, (long)(0x28DE3E8D50DC6BDFL ^ l2));
        nArray[ex.auY("w", (int)20351, (long)(0x6AC38207C43FB4B9L ^ l2))] = (int)ex.auY("w", (int)1155, (long)(0x270EA862D930FF49L ^ l2));
        nArray[ex.auY("w", (int)31429, (long)(0x74B049729B1E8110L ^ l2))] = (int)ex.auY("w", (int)2831, (long)(0x7618902B61D370D3L ^ l2));
        nArray[ex.auY("w", (int)24720, (long)(0x608CD42E21171B52L ^ l2))] = (int)ex.auY("w", (int)15040, (long)(0x1CF08A5EC207410FL ^ l2));
        nArray[ex.auY("w", (int)32087, (long)(0x2E027751015C0687L ^ l2))] = (int)ex.auY("w", (int)9933, (long)(0x2BFDDEC7D9AF5D03L ^ l2));
        nArray[ex.auY("w", (int)27036, (long)(0x513BF12CFD7E1242L ^ l2))] = (int)ex.auY("w", (int)17464, (long)(0x11770641B753BFFFL ^ l2));
        nArray[ex.auY("w", (int)31325, (long)(0x1F7E2280A5BB818CL ^ l2))] = (int)ex.auY("w", (int)2009, (long)(0x369244AA04A27C04L ^ l2));
        nArray[ex.auY("w", (int)12133, (long)(0x275A70D0B5F054A4L ^ l2))] = (int)ex.auY("w", (int)25627, (long)(0x5766AD48F40E9FC2L ^ l2));
        nArray[ex.auY("w", (int)28657, (long)(0x2BB8E612F6D29439L ^ l2))] = (int)ex.auY("w", (int)25763, (long)(0xC2537F02FE41F74L ^ l2));
        this.pyxZq = new cJ(this, mr.clS(nArray)).WE(false);
    }

    static {
        Loader.doInit(ex.class);
        ex._bdc1508d9422d0323ece295e1c5c3830();
    }

    private static native int auW(int var0, long var1);

    private static native int auX(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite auY(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native cJ auV();
}

