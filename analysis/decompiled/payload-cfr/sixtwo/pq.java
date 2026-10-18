/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 *  net.minecraft.class_1799
 *  net.minecraft.class_241
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_1799;
import net.minecraft.class_241;
import sixtwo.cJ;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.lq;
import sixtwo.mr;
import sixtwo.pA;
import sixtwo.pM;
import sixtwo.pq$vw;

public abstract class pq
extends pA {
    private final cv okhpJ;
    private final cw qKiYk;
    private final cw tFmEh;
    private final cJ xMinI;
    private static String NccWs;
    private static final long sNDqe;
    private static final String mFTBG;
    private static final long[] npRVy;
    private static final Integer[] FAvNE;
    private static final Map fPhTB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    protected pq(String string, String string2, pM pM2) {
        long l = sNDqe ^ 0x2F9729740237L;
        super(string, string2);
        int[] nArray = new int[pq.cOR("u", (int)30689, (long)(0x20665864E32BDCD3L ^ l))];
        nArray[0] = (int)pq.cOR("u", (int)326, (long)(0x5CB63372A2CBAA68L ^ l));
        nArray[1] = (int)pq.cOR("u", (int)24077, (long)(0x1BCB20B94C5D753CL ^ l));
        nArray[2] = (int)pq.cOR("u", (int)19746, (long)(0x61B2EC5FAF03E62CL ^ l));
        nArray[3] = (int)pq.cOR("u", (int)26668, (long)(0x31A45363659AC30BL ^ l));
        nArray[4] = (int)pq.cOR("u", (int)10501, (long)(0x3BDB09B230A1022CL ^ l));
        nArray[5] = (int)pq.cOR("u", (int)8307, (long)(0x1723569F00120B4DL ^ l));
        nArray[pq.cOR("u", (int)27355, (long)(0x6280E60AD623C1E4L ^ l))] = (int)pq.cOR("u", (int)19617, (long)(0x319E5A656CE5E78DL ^ l));
        nArray[pq.cOR("u", (int)19574, (long)(0x72150A0CD804E75CL ^ l))] = (int)pq.cOR("u", (int)20489, (long)(0x27C95F70CCE67B3AL ^ l));
        this.okhpJ = new cv(this, mr.clS(nArray)).Tm(1).Tl(true);
        this.qKiYk = new cw(this.okhpJ, mr.clS(new int[]{(int)pq.cOR("u", (int)1579, (long)(0x109EBCCA7453AD1BL ^ l)), (int)pq.cOR("u", (int)16780, (long)(0x522FC64B778E6ABAL ^ l)), (int)pq.cOR("u", (int)12, (long)(0x6EB44BA186172B04L ^ l)), (int)pq.cOR("u", (int)4453, (long)(0x64849E156874BA51L ^ l))})).Tz();
        this.tFmEh = new cw(this.okhpJ, mr.clS(new int[]{(int)pq.cOR("u", (int)15743, (long)(0x44B30D7798769646L ^ l)), (int)pq.cOR("u", (int)1724, (long)(0x13AA7EF224A12D80L ^ l)), (int)pq.cOR("u", (int)32428, (long)(0x543CEC7DB8B75591L ^ l)), (int)pq.cOR("u", (int)10501, (long)(0x3BDB09B230A1022CL ^ l))})).Tz();
        int[] nArray2 = new int[pq.cOR("u", (int)17877, (long)(0x16D248A8474A6EF5L ^ l))];
        nArray2[0] = (int)pq.cOR("u", (int)31168, (long)(0x2DC9A9E47483D2CDL ^ l));
        nArray2[1] = (int)pq.cOR("u", (int)2274, (long)(0x22595CBE1C023EEL ^ l));
        nArray2[2] = (int)pq.cOR("u", (int)21537, (long)(0x3BBF6008E86AFF03L ^ l));
        nArray2[3] = (int)pq.cOR("u", (int)10501, (long)(0x3BDB09B230A1022CL ^ l));
        nArray2[4] = (int)pq.cOR("u", (int)28348, (long)(0x356115BBCBBAC589L ^ l));
        nArray2[5] = (int)pq.cOR("u", (int)27261, (long)(0x12F7F03C140C15BL ^ l));
        nArray2[pq.cOR("u", (int)11189, (long)(0x4EDFB29471918082L ^ l))] = (int)pq.cOR("u", (int)25971, (long)(0x373FB238D577CE7CL ^ l));
        nArray2[pq.cOR("u", (int)23939, (long)(0x2287572597D676B9L ^ l))] = (int)pq.cOR("u", (int)15390, (long)(0x595735AED59A1726L ^ l));
        nArray2[pq.cOR("u", (int)7075, (long)(0x3A706162A2FDB082L ^ l))] = (int)pq.cOR("u", (int)19228, (long)(0x64D5F57D6D8D6027L ^ l));
        nArray2[pq.cOR("u", (int)12566, (long)(0x52A476AF2CFA1A3DL ^ l))] = (int)pq.cOR("u", (int)32428, (long)(0x543CEC7DB8B75591L ^ l));
        nArray2[pq.cOR("u", (int)20702, (long)(0x542E89838371FBF6L ^ l))] = (int)pq.cOR("u", (int)17719, (long)(0x5251B87E1E89EE18L ^ l));
        nArray2[pq.cOR("u", (int)5381, (long)(0x42154E9B7259BE28L ^ l))] = (int)pq.cOR("u", (int)480, (long)(0x105479333594AAC3L ^ l));
        nArray2[pq.cOR("u", (int)13128, (long)(0x5B137C93B799186CL ^ l))] = (int)pq.cOR("u", (int)7421, (long)(0x6464680E245DB7D8L ^ l));
        this.xMinI = new cJ(this, mr.clS(nArray2));
        String string3 = pq.cOM();
        try {
            this.position(pM2);
            if (string3 != null) {
                iS.bwK("rXBnrb");
            }
        }
        catch (MatchException matchException) {
            throw pq.cON(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    pq.sNDqe = gb.aYR(2524453690485969358L, -1159569558750976372L, MethodHandles.lookup().lookupClass()).a(170799594305898L);
                    var11 = pq.sNDqe ^ 35150551477529L;
                    pq.cOL(null);
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl14:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("\u00fd\u0083l\b\u00f4h\u009d\u00d0".getBytes("ISO-8859-1"));
                ** while (true)
                pq.mFTBG = pq.cOO(var15_3).intern();
                pq.fPhTB = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[37];
                var3_7 = 0;
                var4_8 = "T^4\u00c9\u00af\u00a7\u00bf\u009f&=~\u0094\u00e1\u0090\u001d\u0080w\u00e9'\u00abYO\u00bea\r!+\u00c8\u00fb\u00e5\u00e9\u00e2d\u00d2E\u000f$o%c\u00abB\u00b3\u0091 \u0082\u009f\u0007?f\u00c6\u0088\u0082\u00ee\u00dd=5F/X\u0004<\u0091\u0084x*\u0019k\u001c\u001d\u0085\u00da\u00cf\u00c2\u00df&\u00c8\u009f\u008d\"\u00be\u009e\t\u001bH'\u000e\u0012\u0089\u00d7\u00b9\u00d7\u0012\u00ed\u00fc\u0010x\u00bf\u00966Lmdk\u0095\u00fc\u0019\u00f6Xt%\u00ce\u00f0\u00eeX\u0083\u00a1Z\u00e07\u00a3\u009eC\u001c$\u00daiO\u00b9\u008f\u00f6(\u00e4O\u008c\n\u00c5\u008f\u00e8L\u00e0f\u00f2\u00a2\u00ce\u00a8\r\u00a4\u0011~e*\u00ab\u0080\u00aa:8\u0086\u00d7\u00ad\"\f\u00fc.\u00b5\u001c\u00d2r\u00e3\u00d4\u00a3\u0093-\u008f\u001b\u0002u\u00f7f\u00b4-%\u00bd\u00b1\n4\u00d5\u00c2\u00ad4\u00f6\u00d5\u00a7\n\u0092\u00da\u0012\u00cfI\u0011\u0096\u00cb\u008f\u00ee\u009c\u00e7\u0093i!\u001d#\u00bd\u0099\u00ba\u00dd)\u008f\u00cb\u00e4\u0001\u00e9h&e0X\u00a9L\u0006\u008b\u00c47\u00bfqW\u00b5\u0098\u0085\u0084\u00a1u\u00b9%\u007f\u00ea0C\u0096K\u00d4\u0015\u0005KJF\u00bb\u00a3b\u00a0\u00e70G\u00ff5\u0001T\u00b4\u00fc\u00b5\\\u00ab4\u00d1f\u00f3\u00a5>\u007f*Z";
                var5_9 = "T^4\u00c9\u00af\u00a7\u00bf\u009f&=~\u0094\u00e1\u0090\u001d\u0080w\u00e9'\u00abYO\u00bea\r!+\u00c8\u00fb\u00e5\u00e9\u00e2d\u00d2E\u000f$o%c\u00abB\u00b3\u0091 \u0082\u009f\u0007?f\u00c6\u0088\u0082\u00ee\u00dd=5F/X\u0004<\u0091\u0084x*\u0019k\u001c\u001d\u0085\u00da\u00cf\u00c2\u00df&\u00c8\u009f\u008d\"\u00be\u009e\t\u001bH'\u000e\u0012\u0089\u00d7\u00b9\u00d7\u0012\u00ed\u00fc\u0010x\u00bf\u00966Lmdk\u0095\u00fc\u0019\u00f6Xt%\u00ce\u00f0\u00eeX\u0083\u00a1Z\u00e07\u00a3\u009eC\u001c$\u00daiO\u00b9\u008f\u00f6(\u00e4O\u008c\n\u00c5\u008f\u00e8L\u00e0f\u00f2\u00a2\u00ce\u00a8\r\u00a4\u0011~e*\u00ab\u0080\u00aa:8\u0086\u00d7\u00ad\"\f\u00fc.\u00b5\u001c\u00d2r\u00e3\u00d4\u00a3\u0093-\u008f\u001b\u0002u\u00f7f\u00b4-%\u00bd\u00b1\n4\u00d5\u00c2\u00ad4\u00f6\u00d5\u00a7\n\u0092\u00da\u0012\u00cfI\u0011\u0096\u00cb\u008f\u00ee\u009c\u00e7\u0093i!\u001d#\u00bd\u0099\u00ba\u00dd)\u008f\u00cb\u00e4\u0001\u00e9h&e0X\u00a9L\u0006\u008b\u00c47\u00bfqW\u00b5\u0098\u0085\u0084\u00a1u\u00b9%\u007f\u00ea0C\u0096K\u00d4\u0015\u0005KJF\u00bb\u00a3b\u00a0\u00e70G\u00ff5\u0001T\u00b4\u00fc\u00b5\\\u00ab4\u00d1f\u00f3\u00a5>\u007f*Z".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl45:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "jW\u00b2\u00a9\u00f4\u00f1(-\u00ffF\u008f\u00c8\u0006\u00c5,l";
                    var5_9 = "jW\u00b2\u00a9\u00f4\u00f1(-\u00ffF\u008f\u00c8\u0006\u00c5,l".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl71:
                // 1 sources

                ** continue;
            }
        }
        pq.npRVy = var6_6;
        pq.FAvNE = new Integer[37];
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public class_241 measure(lC var1_1, lc var2_2, class_1297 var3_3, boolean var4_4) {
        var5_5 = pq.sNDqe ^ 86163784439001L;
        var8_6 = this.cOI(var2_2, var3_3, var4_4);
        var7_7 = pq.cOM();
        try {
            if (var8_6 == null) {
                return this.cQL();
            }
        }
        catch (MatchException v0) {
            throw pq.cON(v0);
        }
        var9_8 = 0.0f;
        var10_9 = 0.0f;
        var11_10 = 0.0f;
        for (cw var13_12 : this.okhpJ.Ts()) {
            block34: {
                block36: {
                    block37: {
                        block35: {
                            block30: {
                                block32: {
                                    block33: {
                                        block31: {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            v1 = var13_12;
                                                            v2 = this.qKiYk;
                                                            if (var7_7 != null) break block30;
                                                            if (v1 == v2) {
                                                            }
                                                            ** GOTO lbl65
                                                        }
                                                        catch (MatchException v3) {
                                                            throw pq.cON(v3);
                                                        }
                                                        v4 = var8_6;
                                                        if (var7_7 != null) break block31;
                                                    }
                                                    catch (MatchException v5) {
                                                        throw pq.cON(v5);
                                                    }
                                                    if (v4.hasIcon()) {
                                                    }
                                                    ** GOTO lbl65
                                                }
                                                catch (MatchException v6) {
                                                    throw pq.cON(v6);
                                                }
                                                v4 = var8_6;
                                            }
                                            catch (MatchException v7) {
                                                throw pq.cON(v7);
                                            }
                                        }
                                        var14_13 = v4.iconOutput();
                                        try {
                                            try {
                                                v8 = var14_13;
                                                v9 = 0.0f;
                                                if (var7_7 != null) break block32;
                                                if (v8 != v9) break block33;
                                            }
                                            catch (MatchException v10) {
                                                throw pq.cON(v10);
                                            }
                                            if (var7_7 == null) continue;
                                        }
                                        catch (MatchException v11) {
                                            throw pq.cON(v11);
                                        }
                                    }
                                    var9_8 += this.cOK(var8_6.renderScale(), var11_10, var14_13);
                                    var9_8 += var8_6.itemSize() * var14_13;
                                    v8 = var10_9;
                                    v9 = var8_6.itemSize() * var14_13;
                                }
                                var10_9 = Math.max(v8, v9);
                                var11_10 = var14_13;
                                try {
                                    if (var7_7 == null) break block34;
lbl65:
                                    // 3 sources

                                    v1 = var13_12;
                                    v2 = this.tFmEh;
                                }
                                catch (MatchException v12) {
                                    throw pq.cON(v12);
                                }
                            }
                            try {
                                try {
                                    try {
                                        if (v1 != v2) break block34;
                                        v13 = var8_6;
                                        if (var7_7 != null) break block35;
                                    }
                                    catch (MatchException v14) {
                                        throw pq.cON(v14);
                                    }
                                    if (!v13.hasName()) break block34;
                                }
                                catch (MatchException v15) {
                                    throw pq.cON(v15);
                                }
                                v13 = var8_6;
                            }
                            catch (MatchException v16) {
                                throw pq.cON(v16);
                            }
                        }
                        var14_13 = v13.nameOutput();
                        try {
                            try {
                                v17 = var14_13;
                                v18 = 0.0f;
                                if (var7_7 != null) break block36;
                                if (v17 != v18) break block37;
                            }
                            catch (MatchException v19) {
                                throw pq.cON(v19);
                            }
                            if (var7_7 == null) continue;
                        }
                        catch (MatchException v20) {
                            throw pq.cON(v20);
                        }
                    }
                    var9_8 += this.cOK(var8_6.renderScale(), var11_10, var14_13);
                    var9_8 += var8_6.textWidth() * var14_13;
                    v17 = var10_9;
                    v18 = var8_6.textHeight() * var14_13;
                }
                var10_9 = Math.max(v17, v18);
                var11_10 = var14_13;
            }
            if (var7_7 == null) continue;
        }
        return new class_241(var9_8 + var8_6.paddingX() * 2.0f, var10_9 + var8_6.paddingY() * 2.0f);
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void drawBox(lC var1_1, lc var2_2, lc var3_3, class_1297 var4_4, boolean var5_5) {
        block31: {
            block32: {
                var6_6 = pq.sNDqe ^ 87796408245908L;
                var9_7 = this.cOI(var3_3, var4_4, var5_5);
                var8_8 = pq.cOM();
                try {
                    try {
                        if (var8_8 != null) break block31;
                        if (var9_7 != null) break block32;
                    }
                    catch (MatchException v0) {
                        throw pq.cON(v0);
                    }
                    return;
                }
                catch (MatchException v1) {
                    throw pq.cON(v1);
                }
            }
            this.cRI(var1_1, var2_2, var9_7.renderScale(), var9_7.alpha());
        }
        var10_9 = var2_2.bXF() + var9_7.paddingX();
        var11_10 = 0.0f;
        for (cw var13_12 : this.okhpJ.Ts()) {
            block37: {
                block39: {
                    block40: {
                        block38: {
                            block33: {
                                block35: {
                                    block36: {
                                        block34: {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            v2 = var13_12;
                                                            v3 = this.qKiYk;
                                                            if (var8_8 != null) break block33;
                                                            if (v2 == v3) {
                                                            }
                                                            ** GOTO lbl72
                                                        }
                                                        catch (MatchException v4) {
                                                            throw pq.cON(v4);
                                                        }
                                                        v5 = var9_7;
                                                        if (var8_8 != null) break block34;
                                                    }
                                                    catch (MatchException v6) {
                                                        throw pq.cON(v6);
                                                    }
                                                    if (v5.hasIcon()) {
                                                    }
                                                    ** GOTO lbl72
                                                }
                                                catch (MatchException v7) {
                                                    throw pq.cON(v7);
                                                }
                                                v5 = var9_7;
                                            }
                                            catch (MatchException v8) {
                                                throw pq.cON(v8);
                                            }
                                        }
                                        var14_13 = v5.iconOutput();
                                        try {
                                            try {
                                                v9 = var14_13;
                                                v10 = 0.0f;
                                                if (var8_8 != null) break block35;
                                                if (v9 != v10) break block36;
                                            }
                                            catch (MatchException v11) {
                                                throw pq.cON(v11);
                                            }
                                            if (var8_8 == null) continue;
                                        }
                                        catch (MatchException v12) {
                                            throw pq.cON(v12);
                                        }
                                    }
                                    var10_9 += this.cOK(var9_7.renderScale(), var11_10, var14_13);
                                    v9 = var2_2.bXG();
                                    v10 = jf.bAH(var9_7.itemSize(), var2_2.bXI());
                                }
                                var15_14 = v9 + v10;
                                this.cQK(var1_1, var9_7.stack(), var10_9, var15_14, var9_7.itemScale(), var9_7.alpha() * var14_13);
                                var10_9 += var9_7.itemSize() * var14_13;
                                var11_10 = var14_13;
                                try {
                                    if (var8_8 == null) break block37;
lbl72:
                                    // 3 sources

                                    v2 = var13_12;
                                    v3 = this.tFmEh;
                                }
                                catch (MatchException v13) {
                                    throw pq.cON(v13);
                                }
                            }
                            try {
                                try {
                                    try {
                                        if (v2 != v3) break block37;
                                        v14 = var9_7;
                                        if (var8_8 != null) break block38;
                                    }
                                    catch (MatchException v15) {
                                        throw pq.cON(v15);
                                    }
                                    if (!v14.hasName()) break block37;
                                }
                                catch (MatchException v16) {
                                    throw pq.cON(v16);
                                }
                                v14 = var9_7;
                            }
                            catch (MatchException v17) {
                                throw pq.cON(v17);
                            }
                        }
                        var14_13 = v14.nameOutput();
                        try {
                            try {
                                v18 = var14_13;
                                v19 = 0.0f;
                                if (var8_8 != null) break block39;
                                if (v18 != v19) break block40;
                            }
                            catch (MatchException v20) {
                                throw pq.cON(v20);
                            }
                            if (var8_8 == null) continue;
                        }
                        catch (MatchException v21) {
                            throw pq.cON(v21);
                        }
                    }
                    var10_9 += this.cOK(var9_7.renderScale(), var11_10, var14_13);
                    v18 = var2_2.bXG();
                    v19 = jf.bAH(var9_7.textHeight(), var2_2.bXI());
                }
                var15_14 = v18 + v19;
                this.cRG(var1_1, var9_7.font(), var9_7.text(), var10_9, var15_14, var9_7.alpha() * var14_13);
                var10_9 += var9_7.textWidth() * var14_13;
                var11_10 = var14_13;
            }
            if (var8_8 == null) continue;
        }
    }

    public static void cOL(String string) {
        NccWs = string;
    }

    public static String cOM() {
        return NccWs;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    protected String cNC(class_1297 class_12972, boolean bl) {
        class_1799 class_17992;
        class_1799 class_17993;
        block18: {
            block19: {
                class_1297 class_12973;
                String string;
                block17: {
                    boolean bl2;
                    block15: {
                        block16: {
                            long l = sNDqe ^ 0x57A635A8825CL;
                            string = pq.cOM();
                            try {
                                try {
                                    bl2 = bl;
                                    if (string != null) break block15;
                                    if (!bl2) break block16;
                                    return this.cOl();
                                }
                                catch (MatchException matchException) {
                                    throw pq.cON(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw pq.cON(matchException);
                            }
                        }
                        try {
                            class_12973 = class_12972;
                            if (string != null) break block17;
                            bl2 = class_12973 instanceof class_1309;
                        }
                        catch (MatchException matchException) {
                            throw pq.cON(matchException);
                        }
                    }
                    if (!bl2) return null;
                    class_12973 = class_12972;
                }
                class_1309 class_13092 = (class_1309)class_12973;
                try {
                    if (string != null) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw pq.cON(matchException);
                }
                class_17993 = this.cOk(class_13092);
                try {
                    try {
                        try {
                            class_17992 = class_17993;
                            if (string != null) return class_17992.method_7964().getString();
                            if (!class_17992.method_7960()) break block18;
                        }
                        catch (MatchException matchException) {
                            throw pq.cON(matchException);
                        }
                        if (!this.xMinI.WF()) break block19;
                        return null;
                    }
                    catch (MatchException matchException) {
                        throw pq.cON(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw pq.cON(matchException);
                }
            }
            String string = mFTBG;
            return string;
        }
        class_17992 = class_17993;
        return class_17992.method_7964().getString();
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private pq$vw cOI(lc lc2, class_1297 class_12972, boolean bl) {
        float f2;
        float f3;
        float f4;
        boolean bl2;
        boolean bl3;
        String string;
        class_1799 class_17992;
        block30: {
            block31: {
                boolean bl4;
                block32: {
                    String string2;
                    block28: {
                        boolean bl5;
                        block27: {
                            block26: {
                                String string3;
                                block25: {
                                    boolean bl6;
                                    block23: {
                                        block24: {
                                            long l = sNDqe ^ 0x755CAA751FEFL;
                                            class_17992 = this.cOJ(class_12972, bl);
                                            string = this.cRJ(class_12972, bl);
                                            string2 = pq.cOM();
                                            try {
                                                bl6 = class_17992.method_7960();
                                                if (string2 != null) break block23;
                                                if (bl6) break block24;
                                            }
                                            catch (MatchException matchException) {
                                                throw pq.cON(matchException);
                                            }
                                            bl6 = true;
                                            break block23;
                                        }
                                        bl6 = false;
                                    }
                                    bl3 = bl6;
                                    try {
                                        string3 = string;
                                        if (string2 != null) break block25;
                                        if (string3 == null) break block26;
                                    }
                                    catch (MatchException matchException) {
                                        throw pq.cON(matchException);
                                    }
                                    string3 = string;
                                }
                                try {
                                    bl5 = string3.isBlank();
                                    if (string2 != null) break block27;
                                    if (bl5) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw pq.cON(matchException);
                                }
                                bl5 = true;
                                break block27;
                            }
                            bl5 = false;
                        }
                        bl2 = bl5;
                        this.qKiYk.TI().dhc(this.qKiYk.TC());
                        this.tFmEh.TI().dhc(this.tFmEh.TC());
                        f4 = this.qKiYk.TI().dhj();
                        f3 = this.tFmEh.TI().dhj();
                        try {
                            block29: {
                                try {
                                    try {
                                        try {
                                            bl4 = bl3;
                                            if (string2 != null) break block28;
                                            if (!bl4) break block29;
                                        }
                                        catch (MatchException matchException) {
                                            throw pq.cON(matchException);
                                        }
                                        f2 = f4;
                                        if (string2 != null) break block30;
                                    }
                                    catch (MatchException matchException) {
                                        throw pq.cON(matchException);
                                    }
                                    if (f2 != 0.0f) break block31;
                                }
                                catch (MatchException matchException) {
                                    throw pq.cON(matchException);
                                }
                            }
                            bl4 = bl2;
                        }
                        catch (MatchException matchException) {
                            throw pq.cON(matchException);
                        }
                    }
                    try {
                        try {
                            try {
                                if (string2 != null) break block32;
                                if (!bl4) return null;
                            }
                            catch (MatchException matchException) {
                                throw pq.cON(matchException);
                            }
                            f2 = f3;
                            if (string2 != null) break block30;
                        }
                        catch (MatchException matchException) {
                            throw pq.cON(matchException);
                        }
                        float f5 = f2 - 0.0f;
                        bl4 = f5 == 0.0f ? 0 : (f5 > 0.0f ? 1 : -1);
                    }
                    catch (MatchException matchException) {
                        throw pq.cON(matchException);
                    }
                }
                try {
                    if (!bl4) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw pq.cON(matchException);
                }
            }
            f2 = this.cQJ(lc2, bl);
        }
        float f6 = f2;
        lq lq2 = this.cRL(f6);
        float f7 = this.cQI(1.0f, f6);
        float f8 = this.cQI(0.5f, f6);
        return new pq$vw(class_17992, string, lq2, f6, this.cQM(bl), f7, f7, f8, 16.0f * f8, bl3, bl2, f4, f3);
    }

    protected abstract String cOl();

    private static CallSite cOR(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pq" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int cOQ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = pq.cOP(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    protected abstract class_1799 cOk(class_1309 var1);

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private class_1799 cOJ(class_1297 class_12972, boolean bl) {
        class_1297 class_12973;
        String string;
        block10: {
            boolean bl2;
            block8: {
                block9: {
                    long l = sNDqe ^ 0x24EB9B2089D5L;
                    string = pq.cOM();
                    try {
                        try {
                            bl2 = bl;
                            if (string != null) break block8;
                            if (!bl2) break block9;
                            return this.cOm();
                        }
                        catch (MatchException matchException) {
                            throw pq.cON(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw pq.cON(matchException);
                    }
                }
                try {
                    class_12973 = class_12972;
                    if (string != null) break block10;
                    bl2 = class_12973 instanceof class_1309;
                }
                catch (MatchException matchException) {
                    throw pq.cON(matchException);
                }
            }
            if (!bl2) return class_1799.field_8037;
            class_12973 = class_12972;
        }
        class_1309 class_13092 = (class_1309)class_12973;
        try {
            if (string == null) return this.cOk(class_13092);
            return class_1799.field_8037;
        }
        catch (MatchException matchException) {
            throw pq.cON(matchException);
        }
    }

    private static MatchException cON(MatchException matchException) {
        return matchException;
    }

    private static String cOO(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    private float cOK(float f2, float f3, float f4) {
        float f5;
        float f6;
        block4: {
            block5: {
                long l = sNDqe ^ 0x53392600D692L;
                String string = pq.cOM();
                try {
                    try {
                        f6 = f3;
                        f5 = 0.0f;
                        if (string != null) break block4;
                        if (f6 != f5) break block5;
                    }
                    catch (MatchException matchException) {
                        throw pq.cON(matchException);
                    }
                    return 0.0f;
                }
                catch (MatchException matchException) {
                    throw pq.cON(matchException);
                }
            }
            f6 = this.cQI(2.0f, f2);
            f5 = Math.min(f3, f4);
        }
        return f6 * f5;
    }

    private static int cOP(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7DFE;
        if (FAvNE[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = npRVy[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])fPhTB.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    fPhTB.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pq", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            pq.FAvNE[n2] = n3;
        }
        return FAvNE[n2];
    }

    protected abstract class_1799 cOm();

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pq.class, "cOQ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
