/*
 * Decompiled with CFR 0.152.
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
import sixtwo.bH;
import sixtwo.cn;
import sixtwo.gb;
import sixtwo.jd;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mr;
import sixtwo.rD;

public class bF
extends cn {
    private final bH rMeCH;
    private final bH uTLas;
    private static final long SlbGB;
    private static final String lnImF;
    private static final long[] nuUmx;
    private static final Integer[] Gjkur;
    private static final Map AUlej;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bF() {
        long l2 = SlbGB ^ 0x2A1F6A83025AL;
        int[] nArray = new int[bF.Mg("p", (int)31495, (long)(0x7E149F656E79EAB6L ^ l2))];
        nArray[0] = (int)bF.Mg("p", (int)30538, (long)(0x78F7E3DD796466FDL ^ l2));
        nArray[1] = (int)bF.Mg("p", (int)15720, (long)(0x45B1A9B306072CDBL ^ l2));
        nArray[2] = (int)bF.Mg("p", (int)17883, (long)(0x78CEB315F6475465L ^ l2));
        nArray[3] = (int)bF.Mg("p", (int)18717, (long)(0x45AA7200629958ABL ^ l2));
        nArray[4] = (int)bF.Mg("p", (int)9291, (long)(0x2E2CF7D2752CB5F1L ^ l2));
        nArray[5] = (int)bF.Mg("p", (int)6599, (long)(0x4B68FF82416F8878L ^ l2));
        super(nArray, lf.JliAr);
        int[] nArray2 = new int[bF.Mg("p", (int)12891, (long)(0x1962E32F98AFA3E0L ^ l2))];
        nArray2[0] = (int)bF.Mg("p", (int)23762, (long)(0x30D5B409699CD60L ^ l2));
        nArray2[1] = (int)bF.Mg("p", (int)5136, (long)(0x738D210EE87185A4L ^ l2));
        nArray2[2] = (int)bF.Mg("p", (int)20980, (long)(0x18D8E37499AAC04DL ^ l2));
        nArray2[3] = (int)bF.Mg("p", (int)6599, (long)(0x4B68FF82416F8878L ^ l2));
        nArray2[4] = (int)bF.Mg("p", (int)9291, (long)(0x2E2CF7D2752CB5F1L ^ l2));
        nArray2[5] = (int)bF.Mg("p", (int)26322, (long)(0x582D0E43D3A5776FL ^ l2));
        nArray2[bF.Mg("p", (int)16334, (long)(0x3581AB7E1142E7EL ^ l2))] = (int)bF.Mg("p", (int)20179, (long)(0x13B50B97F7AB5F66L ^ l2));
        this.rMeCH = new bH(this.ZpVra, mr.clS(nArray2));
        this.uTLas = new bH(this.ZpVra, mr.clS(new int[]{(int)bF.Mg("p", (int)4478, (long)(0x71767A9F73A400DDL ^ l2)), (int)bF.Mg("p", (int)6873, (long)(0x7039CF79B550B61L ^ l2)), (int)bF.Mg("p", (int)8245, (long)(0x7274597F6986B189L ^ l2))}), lnImF);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    bF.SlbGB = gb.aYR(7165212067470311943L, -3106068011897424739L, MethodHandles.lookup().lookupClass()).a(1403987934215L);
                    var11 = bF.SlbGB ^ 123093412689874L;
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
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("\u00fa:#\u0092\u00ae\u00ff\u00c1g".getBytes("ISO-8859-1"));
                ** while (true)
                bF.lnImF = bF.Md(var15_3).intern();
                bF.AUlej = new HashMap<K, V>(13);
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
                var6_6 = new long[17];
                var3_7 = 0;
                var4_8 = "R.\u0094\bR\u00bfK\u00c8X\u0014\u00bdG\u00e1\u00a3L\u0086\u00bbW\u0001\u00de\u00d2u\u0092\u0098\u0099\u00cc\u00c1\u0081\u00efV\u00afM\u0081\u00fa\u00be\u00a9\u00e5\u0082.\u009f>\u001b\u00bd\u00db\u00f5\u00cf\u000f\u00dc\u00e8\u00b7\u00f14\u00144\u00a4\u0095L\u00caB\u0095\u0095\u001a?\u0097\u00cb4nS\u00fd7\u0007\u0007u\u0082\u00c2A\u009b\u00f3\u00fb\u00ab\u00fb\u00f2E\u0001\u009b-!\u00ea\u00c0\u00d8[\u00b8\u0019\u0015\u00ca\u00d6\u00e0\u00e0\u00c5\u001db\u00ec4\u008e\u00a2Y\u0096\u00d2\u0004_\u0084Rgy\u00a3{ \u00b6?\u00a1";
                var5_9 = "R.\u0094\bR\u00bfK\u00c8X\u0014\u00bdG\u00e1\u00a3L\u0086\u00bbW\u0001\u00de\u00d2u\u0092\u0098\u0099\u00cc\u00c1\u0081\u00efV\u00afM\u0081\u00fa\u00be\u00a9\u00e5\u0082.\u009f>\u001b\u00bd\u00db\u00f5\u00cf\u000f\u00dc\u00e8\u00b7\u00f14\u00144\u00a4\u0095L\u00caB\u0095\u0095\u001a?\u0097\u00cb4nS\u00fd7\u0007\u0007u\u0082\u00c2A\u009b\u00f3\u00fb\u00ab\u00fb\u00f2E\u0001\u009b-!\u00ea\u00c0\u00d8[\u00b8\u0019\u0015\u00ca\u00d6\u00e0\u00e0\u00c5\u001db\u00ec4\u008e\u00a2Y\u0096\u00d2\u0004_\u0084Rgy\u00a3{ \u00b6?\u00a1".length();
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
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "U\u0091\u0000\u00cb\u00dc\u00dd\u0001\u00ff\u00bb\u00e5\u007f\u0094l\u00ce\u0002\u00a0";
                    var5_9 = "U\u0091\u0000\u00cb\u00dc\u00dd\u0001\u00ff\u00bb\u00e5\u007f\u0094l\u00ce\u0002\u00a0".length();
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
lbl57:
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
lbl70:
                // 1 sources

                ** continue;
            }
        }
        bF.nuUmx = var6_6;
        bF.Gjkur = new Integer[17];
    }

    private static int Me(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2646;
        if (Gjkur[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = nuUmx[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])AUlej.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    AUlej.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bF", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bF.Gjkur[n3] = n4;
        }
        return Gjkur[n3];
    }

    @Override
    public void LX(lC lC2) {
        super.LX(lC2);
        this.rMeCH.Mo(jd.bAl());
        this.uTLas.Mo(jf.bAM(rD.dmf().daM()));
    }

    private static CallSite Mg(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bF" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int Mf(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bF.Me(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String Md(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bF.class, "Mf", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

