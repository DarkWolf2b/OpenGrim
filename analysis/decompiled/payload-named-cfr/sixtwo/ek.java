/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.option.KeyBinding
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.client.option.KeyBinding;
import sixtwo.cJ;
import sixtwo.gB;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;

public class ek
extends gg {
    private final cJ FjUNy;
    private static long LqclE;
    private static long[] BJUBR;
    private static Integer[] Drksd;
    private static Map DaQXB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _9c9b6f0fd399ea825680701554b84b00();

    public ek() {
        long l2 = LqclE ^ 0x4B664255E083L;
        super(gf.aZL((int)ek.ata("e", (int)9512, (long)(0x23754DEF64434C46L ^ l2)), false, gh.xgeEn));
        int[] nArray = new int[ek.ata("e", (int)11408, (long)(0x753DEA5F189D45F5L ^ l2))];
        nArray[0] = (int)ek.ata("e", (int)7212, (long)(0x64F72E1CE9107540L ^ l2));
        nArray[1] = (int)ek.ata("e", (int)24846, (long)(0x1DC8D9033098086AL ^ l2));
        nArray[2] = (int)ek.ata("e", (int)10895, (long)(0x27790DB4CE2DC3EFL ^ l2));
        nArray[3] = (int)ek.ata("e", (int)26064, (long)(0x4D3D3918B0D00CB7L ^ l2));
        nArray[4] = (int)ek.ata("e", (int)25756, (long)(0x3ECD4D5F9BAD0DF6L ^ l2));
        nArray[5] = (int)ek.ata("e", (int)17087, (long)(0x3317776DAE512BD9L ^ l2));
        nArray[ek.ata("e", (int)11997, (long)(0x69F4CCC09EF847BFL ^ l2))] = (int)ek.ata("e", (int)13697, (long)(0x1F37FE0352885CE0L ^ l2));
        nArray[ek.ata("e", (int)23483, (long)(0x7F8DD5BFB6C7B2D0L ^ l2))] = (int)ek.ata("e", (int)20276, (long)(0x6EBAF0E66ECBA64AL ^ l2));
        nArray[ek.ata("e", (int)26596, (long)(0x6B5AA73FA7D88E8DL ^ l2))] = (int)ek.ata("e", (int)18181, (long)(0x304E0C9E3639AE7FL ^ l2));
        nArray[ek.ata("e", (int)7653, (long)(0x73053B551D26F486L ^ l2))] = (int)ek.ata("e", (int)2580, (long)(0x2B7419EE2A95E369L ^ l2));
        nArray[ek.ata("e", (int)3527, (long)(0x409FB6E348EDE4A8L ^ l2))] = (int)ek.ata("e", (int)12409, (long)(0x5AB853764394D914L ^ l2));
        nArray[ek.ata("e", (int)32336, (long)(0x132F30CEF6D9972CL ^ l2))] = (int)ek.ata("e", (int)4385, (long)(0x2B2763C62518F85EL ^ l2));
        this.FjUNy = new cJ(this, mr.clS(nArray)).WE(false);
    }

    static {
        Loader.doInit(ek.class);
        ek._9c9b6f0fd399ea825680701554b84b00();
    }

    @hG
    public native void asT(gH.th var1);

    @hG
    public native void asU(gB var1);

    private static native int asZ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int asY(int var0, long var1);

    private static native MatchException asX(MatchException var0);

    private static native /* synthetic */ void asW(KeyBinding var0);

    private static native CallSite ata(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native boolean asV();
}

