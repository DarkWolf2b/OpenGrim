/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1657
 *  net.minecraft.class_241
 *  net.minecraft.class_742
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
import net.minecraft.class_1657;
import net.minecraft.class_241;
import net.minecraft.class_742;
import sixtwo.cJ;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.pA;
import sixtwo.pA$vy;
import sixtwo.pM;
import sixtwo.pq;
import sixtwo.rD;

public class po
extends pA {
    private final cJ HPiNo;
    private final cJ wToji;
    private static final long fOoPJ;
    private static final String[] mPffK;
    private static final String[] JpLoo;
    private static final Map UUABk;
    private static final long[] nngoF;
    private static final Integer[] kBdmD;
    private static final Map tvwWu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public po() {
        long l = fOoPJ ^ 0x3A8D36A4476DL;
        String string = pq.cOM();
        super((String)((Object)po.cOA("u", (int)923, (long)(0x1DE18A1B7708F50FL ^ l))), (String)((Object)po.cOA("u", (int)31571, (long)(0x20CBD4A631F48DC6L ^ l))));
        int[] nArray = new int[po.cOD("a", (int)25412, (long)(0x29C12A04660B31C9L ^ l))];
        nArray[0] = (int)po.cOD("a", (int)5669, (long)(0x4818B3785D9144B9L ^ l));
        nArray[1] = (int)po.cOD("a", (int)12908, (long)(0x6FD28501C996E0EDL ^ l));
        nArray[2] = (int)po.cOD("a", (int)20045, (long)(0xDC615BD15CC9CD4L ^ l));
        nArray[3] = (int)po.cOD("a", (int)19861, (long)(0x7831EF3FFB311F01L ^ l));
        nArray[4] = (int)po.cOD("a", (int)15542, (long)(0x569451CA0332EE31L ^ l));
        nArray[5] = (int)po.cOD("a", (int)162, (long)(0x4F1A2D17EC11D222L ^ l));
        nArray[po.cOD("a", (int)3770, (long)(0x3A3B1B765663DC08L ^ l))] = (int)po.cOD("a", (int)24446, (long)(0x5FF5B44AE9268DF6L ^ l));
        nArray[po.cOD("a", (int)6851, (long)(0x1E2693E7D560C84FL ^ l))] = (int)po.cOD("a", (int)32431, (long)(0x1FDD80C13736AC3EL ^ l));
        nArray[po.cOD("a", (int)113, (long)(0x63986B937AC952C1L ^ l))] = (int)po.cOD("a", (int)8444, (long)(0x76C6B384BDCF262L ^ l));
        nArray[po.cOD("a", (int)15877, (long)(0x2B0DCC3C3CFD6C97L ^ l))] = (int)po.cOD("a", (int)32431, (long)(0x1FDD80C13736AC3EL ^ l));
        nArray[po.cOD("a", (int)1371, (long)(0x108786331B6557CDL ^ l))] = (int)po.cOD("a", (int)6511, (long)(0x2B8719EEB2C14BF2L ^ l));
        this.HPiNo = new cJ(this, mr.clS(nArray));
        int[] nArray2 = new int[po.cOD("a", (int)14604, (long)(0x30D9089FD232EB88L ^ l))];
        nArray2[0] = (int)po.cOD("a", (int)148, (long)(0xAECC1A58CC85201L ^ l));
        nArray2[1] = (int)po.cOD("a", (int)9622, (long)(0x5E5A52FC83FBF701L ^ l));
        nArray2[2] = (int)po.cOD("a", (int)2888, (long)(0xBD5B3FF104A59D2L ^ l));
        nArray2[3] = (int)po.cOD("a", (int)1436, (long)(0x7D1F1CD2F4FE5728L ^ l));
        nArray2[4] = (int)po.cOD("a", (int)8137, (long)(0x3C64DF4AF5F94D43L ^ l));
        nArray2[5] = (int)po.cOD("a", (int)29224, (long)(0x787ACDE680C120ADL ^ l));
        nArray2[po.cOD("a", (int)2946, (long)(0x369D594B1055937L ^ l))] = (int)po.cOD("a", (int)6511, (long)(0x2B8719EEB2C14BF2L ^ l));
        nArray2[po.cOD("a", (int)21493, (long)(0x28771FDB22A017EL ^ l))] = (int)po.cOD("a", (int)73, (long)(0x81713C4563CD2C0L ^ l));
        nArray2[po.cOD("a", (int)19463, (long)(0x981B718D8749E85L ^ l))] = (int)po.cOD("a", (int)15258, (long)(0x685D787163D3E914L ^ l));
        nArray2[po.cOD("a", (int)1144, (long)(0x32662C7D4C46D6EBL ^ l))] = (int)po.cOD("a", (int)73, (long)(0x81713C4563CD2C0L ^ l));
        nArray2[po.cOD("a", (int)25904, (long)(0x470F023E3FA737B3L ^ l))] = (int)po.cOD("a", (int)20472, (long)(0x4FECAD58C88C9D63L ^ l));
        nArray2[po.cOD("a", (int)19790, (long)(0x77E3E73E7B7A9FFDL ^ l))] = (int)po.cOD("a", (int)32431, (long)(0x1FDD80C13736AC3EL ^ l));
        nArray2[po.cOD("a", (int)6010, (long)(0x7ACDAE3E41FA45E5L ^ l))] = (int)po.cOD("a", (int)28260, (long)(0xB95D092619BCEBL ^ l));
        this.wToji = new cJ(this, mr.clS(nArray2));
        String string2 = string;
        try {
            this.position(pM.oFEYk);
            if (iS.bwL() == null) {
                pq.cOL("pzrVhb");
            }
        }
        catch (MatchException matchException) {
            throw po.cOw(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    po.fOoPJ = gb.aYR(-124399486084661757L, -5482780568688628892L, MethodHandles.lookup().lookupClass()).a(169349507375206L);
                    po.UUABk = new HashMap<K, V>(13);
                    var11 = po.fOoPJ ^ 98542086147337L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "\u008a\u00e7\u0006\u00b3\u0010\u00ae.\u0011J+\u009bm\u0091\u00c8\u0088\u0081\u00a8g\u00b9\u00e7\u00b8sI\u00e0\u00d8\u00c32\u00c3\u00cb\u0086\u000f\u00f0\u00186\u00ae\"\u00ab\u00d5dG2\u00dac\u0082\u00ae\u00b4\u008cJq\u0004\u00a9\u0016\u00d7\u00b2\u001d/\u001f";
                    var19_6 = "\u008a\u00e7\u0006\u00b3\u0010\u00ae.\u0011J+\u009bm\u0091\u00c8\u0088\u0081\u00a8g\u00b9\u00e7\u00b8sI\u00e0\u00d8\u00c32\u00c3\u00cb\u0086\u000f\u00f0\u00186\u00ae\"\u00ab\u00d5dG2\u00dac\u0082\u00ae\u00b4\u008cJq\u0004\u00a9\u0016\u00d7\u00b2\u001d/\u001f".length();
                    var16_7 = 32;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = po.cOx(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                po.mPffK = var20_3;
                po.JpLoo = new String[2];
                po.tvwWu = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[41];
                var3_13 = 0;
                var4_14 = "s\u008d\u00f0\u00b2Jn\u0014\u00d8m\u00df\u00fa~\u00b6\u00f3\u00f3 \u0010*\u00cd\u00cc\u00b0\u008d\u0082\u00f8\u00de\t\u00eb\u00de\u00ab\u00c6\u008b\u00b4\u0010\u00eb^\u00f9$\u001b\u0012\u000e\u00eaVG\u00e5\u000b\u00ea>\u00ed\u0002X\u00f0'\u0098B?$\u0002\u00b4Uo\u000bR\u0014\u00eb\u0014\u00ac*l\u00c8z}\u001fG\u00c3KE\u0087z \u00f0\u0088h\u00017\u0090\u00cap\u00a00N\u0086}\u00b8n\u0002\u0001q\u00cf\u0094\u008czR\u0017\u008dH\u00eb\u001f\u00e9$\u008c\u00f1\u00e7@\u000b]\u00de\\%\u0011\u00e6Dc\u00e5\u00d1\u00bb,\u00b4\u009d\u008d\u00c6AI\u00c6\u0091\u00dfz\u00c2\u0081\u008b\u00f2\u0002\u008a\"\u00e1\u008b\u009b\u0090\u0002\u00f3\u0005T\u00e6\u0017b\u009d\"\u00f9\u00b1y\u00cfZ\u00f0\u00cc\u00de\u00ff\u0095\u001e\rB\u008a o$\u00c1\u00d7\u001b\u0007\u00d0\u00fe\u009c\u00eb|\u00b3\u00f9K\u00e6\u009a\u000f>+\u0010\u00c51\\\u00fc&-\u00146\u009b,\f\u00a4\u00ffp\u00c2\u0092\u00bf\u00a5\u00f0h\u00f9\u00a3\u00c2\u0016^\u00ce.K\u001b~\u001arI\u00f8]b\u0082\u00ef\u00cd\u00a5\u00d5F1\u00fb\u00c3l\u0095#l\u00d9T\u007f\u00f0\u0087U\u00e7\u00cc\u00d2\u00c7L\u001a=\u00d6\u00fc\u00b6\u008e\u0007\u00cd3@\u0010XP\u0097J\tZ\u00cb\u0000\u00bd\u00f4N\u00e5\u0086\u00fd\u00a0s5\u0013\u00f9!\u0010\u0010\u00c3G\u00fa\u00b7U\u00bd\u00172\u00e0u\u00ec\u0014\u00c0W?(\u009a\u00c9\u009a\u00a6\u00bf]\u0084\r\u009ea\u008e\u00eb";
                var5_15 = "s\u008d\u00f0\u00b2Jn\u0014\u00d8m\u00df\u00fa~\u00b6\u00f3\u00f3 \u0010*\u00cd\u00cc\u00b0\u008d\u0082\u00f8\u00de\t\u00eb\u00de\u00ab\u00c6\u008b\u00b4\u0010\u00eb^\u00f9$\u001b\u0012\u000e\u00eaVG\u00e5\u000b\u00ea>\u00ed\u0002X\u00f0'\u0098B?$\u0002\u00b4Uo\u000bR\u0014\u00eb\u0014\u00ac*l\u00c8z}\u001fG\u00c3KE\u0087z \u00f0\u0088h\u00017\u0090\u00cap\u00a00N\u0086}\u00b8n\u0002\u0001q\u00cf\u0094\u008czR\u0017\u008dH\u00eb\u001f\u00e9$\u008c\u00f1\u00e7@\u000b]\u00de\\%\u0011\u00e6Dc\u00e5\u00d1\u00bb,\u00b4\u009d\u008d\u00c6AI\u00c6\u0091\u00dfz\u00c2\u0081\u008b\u00f2\u0002\u008a\"\u00e1\u008b\u009b\u0090\u0002\u00f3\u0005T\u00e6\u0017b\u009d\"\u00f9\u00b1y\u00cfZ\u00f0\u00cc\u00de\u00ff\u0095\u001e\rB\u008a o$\u00c1\u00d7\u001b\u0007\u00d0\u00fe\u009c\u00eb|\u00b3\u00f9K\u00e6\u009a\u000f>+\u0010\u00c51\\\u00fc&-\u00146\u009b,\f\u00a4\u00ffp\u00c2\u0092\u00bf\u00a5\u00f0h\u00f9\u00a3\u00c2\u0016^\u00ce.K\u001b~\u001arI\u00f8]b\u0082\u00ef\u00cd\u00a5\u00d5F1\u00fb\u00c3l\u0095#l\u00d9T\u007f\u00f0\u0087U\u00e7\u00cc\u00d2\u00c7L\u001a=\u00d6\u00fc\u00b6\u008e\u0007\u00cd3@\u0010XP\u0097J\tZ\u00cb\u0000\u00bd\u00f4N\u00e5\u0086\u00fd\u00a0s5\u0013\u00f9!\u0010\u0010\u00c3G\u00fa\u00b7U\u00bd\u00172\u00e0u\u00ec\u0014\u00c0W?(\u009a\u00c9\u009a\u00a6\u00bf]\u0084\r\u009ea\u008e\u00eb".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "J\u00d8\u00a6\\\u0097\u00b9\u00cd\u001c\u0084\u00ee\u00ebjb'\u0004\u0084";
                    var5_15 = "J\u00d8\u00a6\\\u0097\u00b9\u00cd\u001c\u0084\u00ee\u00ebjb'\u0004\u0084".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v10) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl84:
                // 1 sources

                ** continue;
            }
        }
        po.nngoF = var6_12;
        po.kBdmD = new Integer[41];
    }

    private static int cOB(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x299B;
        if (kBdmD[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = nngoF[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])tvwWu.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    tvwWu.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/po", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            po.kBdmD[n2] = n3;
        }
        return kBdmD[n2];
    }

    private static String cOx(byte[] byArray) {
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

    private float cOv(pA$vy pA$vy) {
        return this.cQI(1.0f, pA$vy.renderScale());
    }

    /*
     * Unable to fully structure code
     */
    private void cOu(lC var1_1, class_1297 var2_2, boolean var3_3, float var4_4, float var5_5, float var6_6, float var7_7) {
        block12: {
            block11: {
                var8_8 = po.fOoPJ ^ 128581626319307L;
                var11_9 = mG.hoGuU.coa(255.0f * var7_7);
                var10_10 = pq.cOM();
                var12_11 = ld.all(var6_6 / 5.0f);
                try {
                    v0 = var2_2 instanceof class_742;
                    if (var10_10 != null) break block11;
                    if (v0) {
                    }
                    ** GOTO lbl17
                }
                catch (MatchException v1) {
                    throw po.cOw(v1);
                }
                var13_12 = (class_742)var2_2;
                try {
                    var1_1.ccZ(var13_12, var4_4, var5_5, var6_6, var12_11, var11_9);
                    if (var10_10 == null) break block12;
lbl17:
                    // 2 sources

                    v0 = var3_3;
                }
                catch (MatchException v2) {
                    throw po.cOw(v2);
                }
            }
            try {
                block13: {
                    try {
                        try {
                            if (!v0 || rD.dlmvG.field_1724 == null) break block13;
                        }
                        catch (MatchException v3) {
                            throw po.cOw(v3);
                        }
                        var1_1.ccZ((class_742)rD.dlmvG.field_1724, var4_4, var5_5, var6_6, var12_11, var11_9);
                        if (var10_10 == null) break block12;
                    }
                    catch (MatchException v4) {
                        throw po.cOw(v4);
                    }
                }
                var1_1.cdb(var4_4, var5_5, var6_6, var12_11, var11_9);
            }
            catch (MatchException v5) {
                throw po.cOw(v5);
            }
        }
    }

    private static Object cOz(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = po.cOy(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    @Override
    protected void cOs(lC lC2, lc lc2, pA$vy pA$vy) {
        float f2;
        float f3;
        float f4;
        block5: {
            po po2;
            block4: {
                long l = fOoPJ ^ 0x445BA3251BA8L;
                f4 = lc2.bXF() + pA$vy.paddingX();
                String string = pq.cOM();
                f3 = lc2.bXI() - this.cOv(pA$vy);
                try {
                    try {
                        po2 = this;
                        if (string != null) break block4;
                        if (!po2.HPiNo.WF()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw po.cOw(matchException);
                    }
                    po2 = this;
                }
                catch (MatchException matchException) {
                    throw po.cOw(matchException);
                }
            }
            f2 = po2.cQI(5.0f, pA$vy.renderScale());
            float f5 = lc2.bXG() + jf.bAH(f2, f3);
            this.cOu(lC2, pA$vy.entity(), pA$vy.preview(), f4, f5, f2, pA$vy.alpha());
            f4 += f2 + this.cQI(2.0f, pA$vy.renderScale());
        }
        f2 = lc2.bXG() + jf.bAH(pA$vy.textHeight(), f3);
        this.cRG(lC2, pA$vy.font(), pA$vy.text(), f4, f2, pA$vy.alpha());
    }

    private static CallSite cOA(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/po" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException cOw(MatchException matchException) {
        return matchException;
    }

    @Override
    protected String cNC(class_1297 class_12972, boolean bl) {
        String string;
        block16: {
            class_1297 class_12973;
            block14: {
                block15: {
                    String string2;
                    block13: {
                        boolean bl2;
                        block11: {
                            block12: {
                                long l = fOoPJ ^ 0x6A746428EADBL;
                                string2 = pq.cOM();
                                try {
                                    try {
                                        bl2 = bl;
                                        if (string2 != null) break block11;
                                        if (!bl2) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw po.cOw(matchException);
                                    }
                                    int[] nArray = new int[po.cOD("a", (int)19790, (long)(0x77E3B7C729F6324BL ^ l))];
                                    nArray[0] = (int)po.cOD("a", (int)18207, (long)(0xBCC9C94FFD1381FL ^ l));
                                    nArray[1] = (int)po.cOD("a", (int)6511, (long)(0x2B874917E04DE644L ^ l));
                                    nArray[2] = (int)po.cOD("a", (int)73, (long)(0x817433D04B07F76L ^ l));
                                    nArray[3] = (int)po.cOD("a", (int)14246, (long)(0x2978EC23CDB74888L ^ l));
                                    nArray[4] = (int)po.cOD("a", (int)8137, (long)(0x3C648FB3A775E0F5L ^ l));
                                    nArray[5] = (int)po.cOD("a", (int)32325, (long)(0x57C40E1F9E868142L ^ l));
                                    nArray[po.cOD("a", (int)2946, (long)(0x369856DE389F481L ^ l))] = (int)po.cOD("a", (int)29189, (long)(0x22C4A67A8458D0FL ^ l));
                                    nArray[po.cOD("a", (int)21493, (long)(0x2872104E0A6ACC8L ^ l))] = (int)po.cOD("a", (int)73, (long)(0x817433D04B07F76L ^ l));
                                    nArray[po.cOD("a", (int)19463, (long)(0x981E7E18AF83333L ^ l))] = (int)po.cOD("a", (int)21031, (long)(0x634CE7F0609F2D17L ^ l));
                                    nArray[po.cOD("a", (int)1144, (long)(0x32667C841ECA7B5DL ^ l))] = (int)po.cOD("a", (int)22448, (long)(0x67897E00FF602896L ^ l));
                                    nArray[po.cOD("a", (int)25904, (long)(0x470F52C76D2B9A05L ^ l))] = (int)po.cOD("a", (int)19217, (long)(0x1C49F0448EFDB410L ^ l));
                                    return mr.clS(nArray).toString();
                                }
                                catch (MatchException matchException) {
                                    throw po.cOw(matchException);
                                }
                            }
                            try {
                                class_12973 = class_12972;
                                if (string2 != null) break block13;
                                bl2 = class_12973 instanceof class_1657;
                            }
                            catch (MatchException matchException) {
                                throw po.cOw(matchException);
                            }
                        }
                        if (bl2) {
                            class_1657 class_16572 = (class_1657)class_12972;
                            return class_16572.method_7334().name();
                        }
                        class_12973 = class_12972;
                    }
                    try {
                        try {
                            if (string2 != null) break block14;
                            if (class_12973 != null) break block15;
                        }
                        catch (MatchException matchException) {
                            throw po.cOw(matchException);
                        }
                        string = null;
                        break block16;
                    }
                    catch (MatchException matchException) {
                        throw po.cOw(matchException);
                    }
                }
                class_12973 = class_12972;
            }
            string = class_12973.method_5477().getString();
        }
        return string;
    }

    private static String cOy(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0xD9B;
        if (JpLoo[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])UUABk.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    UUABk.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/po", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = mPffK[n2].getBytes("ISO-8859-1");
            po.JpLoo[n2] = po.cOx(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return JpLoo[n2];
    }

    private static CallSite cOD(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/po" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int cOC(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = po.cOB(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    @Override
    protected class_241 cOr(pA$vy pA$vy) {
        float f2;
        float f3;
        block5: {
            po po2;
            float f4;
            block4: {
                long l = fOoPJ ^ 0x36562D596C1CL;
                f3 = pA$vy.textWidth() + pA$vy.paddingX() * 2.0f;
                String string = pq.cOM();
                f4 = this.cOv(pA$vy);
                f2 = pA$vy.textHeight() + pA$vy.paddingY() * 2.0f + f4;
                try {
                    try {
                        po2 = this;
                        if (string != null) break block4;
                        if (!po2.HPiNo.WF()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw po.cOw(matchException);
                    }
                    po2 = this;
                }
                catch (MatchException matchException) {
                    throw po.cOw(matchException);
                }
            }
            float f5 = po2.cQI(5.0f, pA$vy.renderScale());
            f3 += f5 + this.cQI(2.0f, pA$vy.renderScale());
            f2 = Math.max(f2, f5 + pA$vy.paddingY() * 2.0f + f4);
        }
        return new class_241(f3, f2);
    }

    public boolean cOt() {
        return this.wToji.WF();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(po.class, "cOz", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(po.class, "cOC", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
