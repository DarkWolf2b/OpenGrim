/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_10055
 *  net.minecraft.class_1007
 *  net.minecraft.class_11890
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 *  net.minecraft.class_1657
 *  net.minecraft.class_238
 *  net.minecraft.class_241
 *  net.minecraft.class_243
 *  net.minecraft.class_3532
 *  net.minecraft.class_4587
 *  net.minecraft.class_5602
 *  net.minecraft.class_591
 *  net.minecraft.class_630$class_628
 *  net.minecraft.class_742
 *  net.minecraft.class_7833
 *  net.minecraft.class_7920
 *  org.joml.Matrix4f
 *  org.joml.Quaternionfc
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10055;
import net.minecraft.class_1007;
import net.minecraft.class_11890;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_238;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_5602;
import net.minecraft.class_591;
import net.minecraft.class_630;
import net.minecraft.class_742;
import net.minecraft.class_7833;
import net.minecraft.class_7920;
import org.joml.Matrix4f;
import org.joml.Quaternionfc;
import sixtwo.aR;
import sixtwo.cE;
import sixtwo.cI;
import sixtwo.dh;
import sixtwo.di$sA;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gN;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gi;
import sixtwo.gk;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jg;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.mr;
import sixtwo.pF;
import sixtwo.pj;
import sixtwo.pl;
import sixtwo.po;
import sixtwo.pv;
import sixtwo.py;
import sixtwo.rD;

public class di
extends gg {
    cI TLppV;
    cE ewpSI;
    private class_591 VPirC;
    private class_591 pwusN;
    private static final long GXYJi;
    private static final long[] NvTrW;
    private static final Integer[] AuasL;
    private static final Map xMVly;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public di() {
        long l = GXYJi ^ 0x217E89B12AA8L;
        super(gf.aZL((int)di.afQ("m", (int)26253, (long)(0x5DE07091BA87C5A4L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[di.afQ("m", (int)13471, (long)(0x2EFD6663E71597B5L ^ l))];
        nArray[0] = (int)di.afQ("m", (int)9929, (long)(0x12FA9219F72985ECL ^ l));
        nArray[1] = (int)di.afQ("m", (int)30766, (long)(0x65546989E75EDB1DL ^ l));
        nArray[2] = (int)di.afQ("m", (int)18033, (long)(0x75C18B4F8C1EE54CL ^ l));
        nArray[3] = (int)di.afQ("m", (int)14766, (long)(0x679422BC1289A91L ^ l));
        nArray[4] = (int)di.afQ("m", (int)1742, (long)(0x34A6C442006925FAL ^ l));
        nArray[5] = (int)di.afQ("m", (int)9173, (long)(0x153E56AD74D780FAL ^ l));
        nArray[di.afQ("m", (int)10346, (long)(0x139879AADBF00B48L ^ l))] = (int)di.afQ("m", (int)16823, (long)(0x569878DA07BA6299L ^ l));
        nArray[di.afQ("m", (int)17524, (long)(0x5E97F95E7E24675FL ^ l))] = (int)di.afQ("m", (int)29690, (long)(0x4A8B197F6C72D0DCL ^ l));
        this.TLppV = new cI(this, mr.clS(nArray)).Wx(aR::yc);
        int[] nArray2 = new int[di.afQ("m", (int)4388, (long)(0x7CB7B173D6693200L ^ l))];
        nArray2[0] = (int)di.afQ("m", (int)9173, (long)(0x153E56AD74D780FAL ^ l));
        nArray2[1] = (int)di.afQ("m", (int)7727, (long)(0x3CC8E498604BD1EL ^ l));
        nArray2[2] = (int)di.afQ("m", (int)20579, (long)(0x52B7EC466F17F354L ^ l));
        nArray2[3] = (int)di.afQ("m", (int)21968, (long)(0x631FD798C59CF6FCL ^ l));
        nArray2[4] = (int)di.afQ("m", (int)20579, (long)(0x52B7EC466F17F354L ^ l));
        nArray2[5] = (int)di.afQ("m", (int)22339, (long)(0xE73B06D445F747FL ^ l));
        nArray2[di.afQ("m", (int)10346, (long)(0x139879AADBF00B48L ^ l))] = (int)di.afQ("m", (int)16893, (long)(0x75343EEDDD3662C6L ^ l));
        nArray2[di.afQ("m", (int)17524, (long)(0x5E97F95E7E24675FL ^ l))] = (int)di.afQ("m", (int)27670, (long)(0x28BAA66E04644F3EL ^ l));
        nArray2[di.afQ("m", (int)13471, (long)(0x2EFD6663E71597B5L ^ l))] = (int)di.afQ("m", (int)13802, (long)(0xA20444CDEDC16D8L ^ l));
        nArray2[di.afQ("m", (int)3009, (long)(0x334579D755DAA8F8L ^ l))] = (int)di.afQ("m", (int)25727, (long)(0x3ADFDE3AA9A64747L ^ l));
        nArray2[di.afQ("m", (int)16169, (long)(0x4A4F27CB18709C1FL ^ l))] = (int)di.afQ("m", (int)11399, (long)(0x7E6724CAE2770FAAL ^ l));
        nArray2[di.afQ("m", (int)18751, (long)(0xB6A46B19EAEA0FL ^ l))] = (int)di.afQ("m", (int)29525, (long)(0x6DAC671B00C0506BL ^ l));
        this.ewpSI = (cE)new cE(this, mr.clS(nArray2)).Vf(() -> false);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                di.GXYJi = gb.aYR(-5591434420050671696L, 5569277507217008856L, MethodHandles.lookup().lookupClass()).a(117880245901184L);
                di.xMVly = new HashMap<K, V>(13);
                var0 = di.GXYJi ^ 98725604236388L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[29];
                var5_4 = 0;
                var6_5 = "\u000e\u00d3D\u00ddB\u00d0u\u009eH\u00c1\u000bh\"y\u0082\u0010\u00e5\u00ecq\u00e7>v\u00b3_\u0013\u00f07t\u00b0>\u00b8 \u009c\u00ba\u008d\u001a\u00d0s\u0086l\u00dd\u0018\u00fd\u0094\b\u00ef\u00de\u0091\u00d6\u00f8\\\u00cf\u0092 \u008e\u001d\u00a3Ev\u00af\u0086\u00b7\u00f7\u00b9\u00aa\u0088g\u0095\u00c2\u00c0\u00fc\u0002Xu\u00dae\u0002#%\n\u000b\u009e\u00f2Y\u009d\u00c8Q\u00cb\u00e536F\u009e\u00a0$\u00d6\u0000\u009e\u00ca.p \u00ee\u00c2\u00bc\u00b1@\u00c6\u00e2f\u001fpi\u0090\u00ddO\u00c9!\u0087\u00c6qS\u00b08t\u008dC\u00ffq\u0093\u007f\u00e8 \u0013B\u0017o\u00e8\n\u00b8\u00a6y\u00f5\u00cehkI\u00bc\u0006}n\u00a5\u00b0\u001b\u0080\u0013\u00c1\u0015Gc\u00e3u\u00a6\u00e7eE$\u00bb\u00a2%\u00b9\u0081\u0099W\u00c0,C\u00c2,\u00d1`\u00ac_\u0095\u00fa\u000f\u008c(#\u00b3\u0090\u00d5\u00f8\u00b0\u009e\u00a7q\u0098\u00c6\u0098|+\u00c8s\u00ee\u00ef4!\u001f\u00f2,\u0087Ai_\u00e4";
                var7_6 = "\u000e\u00d3D\u00ddB\u00d0u\u009eH\u00c1\u000bh\"y\u0082\u0010\u00e5\u00ecq\u00e7>v\u00b3_\u0013\u00f07t\u00b0>\u00b8 \u009c\u00ba\u008d\u001a\u00d0s\u0086l\u00dd\u0018\u00fd\u0094\b\u00ef\u00de\u0091\u00d6\u00f8\\\u00cf\u0092 \u008e\u001d\u00a3Ev\u00af\u0086\u00b7\u00f7\u00b9\u00aa\u0088g\u0095\u00c2\u00c0\u00fc\u0002Xu\u00dae\u0002#%\n\u000b\u009e\u00f2Y\u009d\u00c8Q\u00cb\u00e536F\u009e\u00a0$\u00d6\u0000\u009e\u00ca.p \u00ee\u00c2\u00bc\u00b1@\u00c6\u00e2f\u001fpi\u0090\u00ddO\u00c9!\u0087\u00c6qS\u00b08t\u008dC\u00ffq\u0093\u007f\u00e8 \u0013B\u0017o\u00e8\n\u00b8\u00a6y\u00f5\u00cehkI\u00bc\u0006}n\u00a5\u00b0\u001b\u0080\u0013\u00c1\u0015Gc\u00e3u\u00a6\u00e7eE$\u00bb\u00a2%\u00b9\u0081\u0099W\u00c0,C\u00c2,\u00d1`\u00ac_\u0095\u00fa\u000f\u008c(#\u00b3\u0090\u00d5\u00f8\u00b0\u009e\u00a7q\u0098\u00c6\u0098|+\u00c8s\u00ee\u00ef4!\u001f\u00f2,\u0087Ai_\u00e4".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\u0010\u00bc\u008ct\u00d6\u00c4q\u00c9w\u00b3\r\u00ae\u00b4=f\n";
                    var7_6 = "\u0010\u00bc\u008ct\u00d6\u00c4q\u00c9w\u00b3\r\u00ae\u00b4=f\n".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        di.NvTrW = var8_3;
        di.AuasL = new Integer[29];
    }

    @hG
    public void afx(gL.tk tk2) {
        block5: {
            block4: {
                long l = GXYJi ^ 0x92F4C06E597L;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        if (iSArray != null) break block4;
                        if (!this.bab()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    pv.cPH(tk2);
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            pl.cNJ(tk2);
        }
    }

    @hG
    public void afy(gM gM2) {
        pv.cPJ();
        pl.cNN();
    }

    @hG
    public void afz(gN gN2) {
        pv.cPJ();
        pl.cNN();
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @hG
    public void afA(gi gi2) {
        boolean bl;
        block15: {
            class_1657 class_16572;
            block16: {
                class_1297 class_12972;
                iS[] iSArray;
                block14: {
                    long l = GXYJi ^ 0x1B87C9C05374L;
                    iSArray = dh.afl();
                    try {
                        if (!this.bab()) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    class_1297 class_12973 = gi2.baL();
                    try {
                        try {
                            class_12972 = class_12973;
                            if (iSArray != null) break block14;
                            if (!(class_12972 instanceof class_1657)) return;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        class_12972 = class_12973;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                }
                class_16572 = (class_1657)class_12972;
                try {
                    if (class_16572 == rD.dlmvG.field_1724) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
                try {
                    bl = rD.dml().aLp(class_16572);
                    if (iSArray != null) break block15;
                    if (!bl) break block16;
                    return;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            bl = this.afK(class_16572);
        }
        try {
            if (!bl) return;
            gi2.bdX(true);
            return;
        }
        catch (MatchException matchException) {
            throw di.afN(matchException);
        }
    }

    @hG
    public void afB(gk gk2) {
        iS[] iSArray;
        block19: {
            block20: {
                long l = GXYJi ^ 0x5C8F21FC31C5L;
                iSArray = dh.afl();
                try {
                    try {
                        if (iSArray != null) break block19;
                        if (this.bab()) break block20;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            pv.cPI();
        }
        lC lC2 = gk2.baT();
        float f2 = lC2.cfh();
        for (class_1297 class_12972 : rD.dlmvG.field_1687.method_18112()) {
            pF pF2;
            boolean bl;
            class_1657 class_16572;
            block22: {
                block23: {
                    class_1297 class_12973;
                    block21: {
                        try {
                            class_12973 = class_12972;
                            if (iSArray != null) break block21;
                            if (!(class_12973 instanceof class_1657)) continue;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        class_12973 = class_12972;
                    }
                    class_16572 = (class_1657)class_12973;
                    try {
                        if (class_16572 == rD.dlmvG.field_1724 && iSArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    try {
                        try {
                            bl = rD.dml().aLp(class_16572);
                            if (iSArray != null) break block22;
                            if (!bl) break block23;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        if (iSArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                }
                bl = pl.cNK(class_16572);
            }
            try {
                if (bl && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
            lc lc2 = this.afC(class_16572, f2);
            try {
                if (lc2 == null && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
            try {
                pF2 = rD.dmc().ddy(class_16572) ? pF.bnwqC : pF.JMCCO;
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
            pF pF3 = pF2;
            List<py> list = rD.dlS().cSP(pF3);
            pj.cNs(lC2, lc2, (class_1297)class_16572, list, false);
            if (iSArray == null) continue;
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private lc afJ(class_1657 class_16572, float f2) {
        float f3;
        float f4;
        float f5;
        float f6;
        float f7;
        block13: {
            long l = GXYJi ^ 0x4E8888FF40D2L;
            class_243 class_2432 = class_16572.method_30950(f2);
            class_238 class_2382 = jg.bBB((class_1297)class_16572, class_2432);
            class_243[] class_243Array = new class_243[di.afQ("m", (int)15959, (long)(0x1D3884150EE4F717L ^ l))];
            class_243Array[0] = new class_243(class_2382.field_1323, class_2382.field_1322, class_2382.field_1321);
            class_243Array[1] = new class_243(class_2382.field_1323, class_2382.field_1325, class_2382.field_1321);
            class_243Array[2] = new class_243(class_2382.field_1320, class_2382.field_1322, class_2382.field_1321);
            class_243Array[3] = new class_243(class_2382.field_1320, class_2382.field_1325, class_2382.field_1321);
            class_243Array[4] = new class_243(class_2382.field_1323, class_2382.field_1322, class_2382.field_1324);
            class_243Array[5] = new class_243(class_2382.field_1323, class_2382.field_1325, class_2382.field_1324);
            class_243Array[di.afQ("m", (int)14051, (long)(0x2117D588261CFFBEL ^ l))] = new class_243(class_2382.field_1320, class_2382.field_1322, class_2382.field_1324);
            class_243Array[di.afQ("m", (int)24380, (long)(0x162BB32796869673L ^ l))] = new class_243(class_2382.field_1320, class_2382.field_1325, class_2382.field_1324);
            class_243[] class_243Array2 = class_243Array;
            f7 = Float.POSITIVE_INFINITY;
            f6 = Float.POSITIVE_INFINITY;
            float f8 = Float.NEGATIVE_INFINITY;
            float f9 = Float.NEGATIVE_INFINITY;
            class_243[] class_243Array3 = class_243Array2;
            iS[] iSArray = dh.afl();
            int n = class_243Array3.length;
            int n2 = 0;
            while (n2 < n) {
                block11: {
                    class_241 class_2412;
                    block12: {
                        class_243 class_2433 = class_243Array3[n2];
                        class_2412 = jI.bIw(class_2433);
                        try {
                            try {
                                if (iSArray != null) break block11;
                                if (class_2412 != null) break block12;
                                return null;
                            }
                            catch (MatchException matchException) {
                                throw di.afN(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                    }
                    f7 = Math.min(f7, class_2412.field_1343);
                    f6 = Math.min(f6, class_2412.field_1342);
                    f8 = Math.max(f8, class_2412.field_1343);
                    f9 = Math.max(f9, class_2412.field_1342);
                    ++n2;
                }
                if (iSArray == null) continue;
            }
            f5 = f8 - f7;
            f4 = f9 - f6;
            try {
                try {
                    float f10 = f5 - 1.0f;
                    f3 = f10 == 0.0f ? 0 : (f10 < 0.0f ? -1 : 1);
                    if (iSArray != null) break block13;
                    if (f3 <= 0) return null;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
                float f11 = f4 - 1.0f;
                f3 = f11 == 0.0f ? 0 : (f11 < 0.0f ? -1 : 1);
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
        }
        try {
            if (f3 > 0) return new lc(f7, f6, f5, f4);
            return null;
        }
        catch (MatchException matchException) {
            throw di.afN(matchException);
        }
    }

    private lc afF(class_591 class_5912, class_10055 class_100552, class_1309 class_13092, float f2, class_243 class_2432) {
        class_5912.method_63514();
        class_4587 class_45872 = new class_4587();
        class_243 class_2433 = class_13092.method_30950(f2).method_1019(class_2432);
        float f3 = class_100552.field_53446;
        class_45872.method_22904(class_2433.field_1352, class_2433.field_1351, class_2433.field_1350);
        class_45872.method_22905(class_100552.field_53453, class_100552.field_53453, class_100552.field_53453);
        this.afG(class_45872, class_100552, f3);
        class_45872.method_22905(-1.0f, -1.0f, 1.0f);
        class_45872.method_22905(0.9375f, 0.9375f, 0.9375f);
        class_45872.method_46416(0.0f, -1.501f, 0.0f);
        di$sA di$sA = new di$sA();
        class_5912.method_63512().method_35745(class_45872, (class_46652, string, n, class_6282) -> this.afH(di$sA, class_46652.method_23761(), class_6282));
        return di$sA.doD();
    }

    private void afG(class_4587 class_45872, class_10055 class_100552, float f2) {
        block26: {
            class_4587 class_45873;
            block25: {
                float f3;
                int n;
                iS[] iSArray;
                block23: {
                    block24: {
                        block19: {
                            block20: {
                                boolean bl;
                                block21: {
                                    block22: {
                                        long l = GXYJi ^ 0x2B40F11B7E07L;
                                        iS[] iSArray2 = dh.afl();
                                        class_45872.method_22907((Quaternionfc)class_7833.field_40716.rotationDegrees(180.0f - f2));
                                        iSArray = iSArray2;
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        n = class_100552.field_53411;
                                                        if (iSArray != null) break block19;
                                                        if (n == 0) break block20;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw di.afN(matchException);
                                                    }
                                                    bl = class_100552.field_53459;
                                                    if (iSArray != null) break block21;
                                                }
                                                catch (MatchException matchException) {
                                                    throw di.afN(matchException);
                                                }
                                                if (bl) break block22;
                                            }
                                            catch (MatchException matchException) {
                                                throw di.afN(matchException);
                                            }
                                            class_45872.method_22907((Quaternionfc)class_7833.field_40714.rotationDegrees(class_100552.method_64259() * (-90.0f - class_100552.field_53448)));
                                        }
                                        catch (MatchException matchException) {
                                            throw di.afN(matchException);
                                        }
                                    }
                                    bl = class_100552.field_53535;
                                }
                                try {
                                    if (bl) {
                                        class_45872.method_22907((Quaternionfc)class_7833.field_40716.rotation(class_100552.field_53521));
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw di.afN(matchException);
                                }
                                return;
                            }
                            float f4 = class_100552.field_53403 - 0.0f;
                            n = f4 == 0.0f ? 0 : (f4 < 0.0f ? -1 : 1);
                        }
                        try {
                            if (iSArray != null) break block23;
                            if (n > 0) break block24;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        return;
                    }
                    n = class_100552.field_53458 ? 1 : 0;
                }
                try {
                    f3 = n != 0 ? -90.0f - class_100552.field_53448 : -90.0f;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
                float f5 = f3;
                try {
                    try {
                        class_45873 = class_45872;
                        if (iSArray != null) break block25;
                        class_45873.method_22907((Quaternionfc)class_7833.field_40714.rotationDegrees(class_3532.method_16439((float)class_100552.field_53403, (float)0.0f, (float)f5)));
                        if (!class_100552.field_53412) break block26;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    class_45873 = class_45872;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            class_45873.method_46416(0.0f, -1.0f, 0.3f);
        }
    }

    private boolean afK(class_1657 class_16572) {
        boolean bl;
        block14: {
            pF pF2;
            long l = GXYJi ^ 0x32252CBC806BL;
            iS[] iSArray = dh.afl();
            try {
                pF2 = rD.dmc().ddy(class_16572) ? pF.bnwqC : pF.JMCCO;
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
            pF pF3 = pF2;
            for (py py2 : rD.dlS().cSP(pF3)) {
                block15: {
                    boolean bl2;
                    block18: {
                        block17: {
                            block16: {
                                py py3;
                                block13: {
                                    try {
                                        try {
                                            py3 = py2;
                                            if (iSArray != null) break block13;
                                            bl = py3 instanceof po;
                                            if (iSArray != null) break block14;
                                        }
                                        catch (MatchException matchException) {
                                            throw di.afN(matchException);
                                        }
                                        if (!bl) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw di.afN(matchException);
                                    }
                                    py3 = py2;
                                }
                                po po2 = (po)py3;
                                try {
                                    try {
                                        bl2 = po2.active();
                                        if (iSArray != null) break block16;
                                        if (!bl2) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw di.afN(matchException);
                                    }
                                    bl2 = po2.cOt();
                                }
                                catch (MatchException matchException) {
                                    throw di.afN(matchException);
                                }
                            }
                            try {
                                if (iSArray != null) break block18;
                                if (!bl2) break block17;
                            }
                            catch (MatchException matchException) {
                                throw di.afN(matchException);
                            }
                            bl2 = true;
                            break block18;
                        }
                        bl2 = false;
                    }
                    return bl2;
                }
                if (iSArray == null) continue;
            }
            bl = false;
        }
        return bl;
    }

    private void afH(di$sA di$sA, Matrix4f matrix4f, class_630.class_628 class_6282) {
        this.afI(di$sA, matrix4f, class_6282.field_3645, class_6282.field_3644, class_6282.field_3643);
        this.afI(di$sA, matrix4f, class_6282.field_3645, class_6282.field_3644, class_6282.field_3646);
        this.afI(di$sA, matrix4f, class_6282.field_3645, class_6282.field_3647, class_6282.field_3643);
        this.afI(di$sA, matrix4f, class_6282.field_3645, class_6282.field_3647, class_6282.field_3646);
        this.afI(di$sA, matrix4f, class_6282.field_3648, class_6282.field_3644, class_6282.field_3643);
        this.afI(di$sA, matrix4f, class_6282.field_3648, class_6282.field_3644, class_6282.field_3646);
        this.afI(di$sA, matrix4f, class_6282.field_3648, class_6282.field_3647, class_6282.field_3643);
        this.afI(di$sA, matrix4f, class_6282.field_3648, class_6282.field_3647, class_6282.field_3646);
    }

    private void afI(di$sA di$sA, Matrix4f matrix4f, float f2, float f3, float f4) {
        long l = GXYJi ^ 0x712D18634309L;
        float f5 = f2 / 16.0f;
        float f6 = f3 / 16.0f;
        float f7 = f4 / 16.0f;
        class_241 class_2412 = jI.bIw(new class_243((double)(matrix4f.m30() + matrix4f.m00() * f5 + matrix4f.m10() * f6 + matrix4f.m20() * f7), (double)(matrix4f.m31() + matrix4f.m01() * f5 + matrix4f.m11() * f6 + matrix4f.m21() * f7), (double)(matrix4f.m32() + matrix4f.m02() * f5 + matrix4f.m12() * f6 + matrix4f.m22() * f7)));
        try {
            if (class_2412 != null) {
                di$sA.doC(class_2412);
            }
        }
        catch (MatchException matchException) {
            throw di.afN(matchException);
        }
    }

    private class_591 afE(class_742 class_7422) {
        class_591 class_5912;
        block15: {
            block16: {
                iS[] iSArray;
                block12: {
                    class_591 class_5913;
                    block13: {
                        block14: {
                            boolean bl;
                            long l = GXYJi ^ 0x58839B11813AL;
                            class_7920 class_79202 = class_7422.method_52814().comp_1629();
                            iSArray = dh.afl();
                            try {
                                bl = class_79202 == class_7920.field_41122;
                            }
                            catch (MatchException matchException) {
                                throw di.afN(matchException);
                            }
                            boolean bl2 = bl;
                            try {
                                try {
                                    try {
                                        if (!bl2) break block12;
                                        class_5913 = this.pwusN;
                                        if (iSArray != null) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw di.afN(matchException);
                                    }
                                    if (class_5913 != null) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw di.afN(matchException);
                                }
                                this.pwusN = new class_591(rD.dlmvG.method_31974().method_32072(class_5602.field_27581), true);
                            }
                            catch (MatchException matchException) {
                                throw di.afN(matchException);
                            }
                        }
                        class_5913 = this.pwusN;
                    }
                    return class_5913;
                }
                try {
                    try {
                        class_5912 = this.VPirC;
                        if (iSArray != null) break block15;
                        if (class_5912 != null) break block16;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    this.VPirC = new class_591(rD.dlmvG.method_31974().method_32072(class_5602.field_27577), false);
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            class_5912 = this.VPirC;
        }
        return class_5912;
    }

    private lc afC(class_1657 class_16572, float f2) {
        lc lc2;
        block10: {
            block9: {
                class_1657 class_16573;
                iS[] iSArray;
                block8: {
                    long l = GXYJi ^ 0x533367DD7F18L;
                    iSArray = dh.afl();
                    try {
                        try {
                            class_16573 = class_16572;
                            if (iSArray != null) break block8;
                            if (!(class_16573 instanceof class_742)) break block9;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        class_16573 = class_16572;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                }
                class_742 class_7422 = (class_742)class_16573;
                lc lc3 = this.afD(class_7422, f2);
                try {
                    try {
                        lc2 = lc3;
                        if (iSArray != null) break block10;
                        if (lc2 == null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    return lc3;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            lc2 = this.afJ(class_16572, f2);
        }
        return lc2;
    }

    private lc afD(class_742 class_7422, float f2) {
        long l = GXYJi ^ 0x739CDADAA31AL;
        class_1007 class_10072 = rD.dlmvG.method_1561().method_74405(class_7422);
        class_591 class_5912 = this.afE(class_7422);
        try {
            if (class_5912 == null) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw di.afN(matchException);
        }
        class_10055 class_100552 = new class_10055();
        class_10072.method_62604((class_11890)class_7422, class_100552, f2);
        return this.afF(class_5912, class_100552, (class_1309)class_7422, f2, class_10072.method_23206(class_100552));
    }

    private static MatchException afN(MatchException matchException) {
        return matchException;
    }

    private static CallSite afQ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/di" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int afO(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x69B3;
        if (AuasL[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = NvTrW[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])xMVly.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    xMVly.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/di", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            di.AuasL[n2] = n3;
        }
        return AuasL[n2];
    }

    private static int afP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = di.afO(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(di.class, "afP", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
