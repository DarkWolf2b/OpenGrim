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
import sixtwo.iX;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class bG
extends cn {
    private final bH jEFqT;
    private final bH KRQEY;
    private final rk pePjV;
    private final rk aaKXr;
    private static final long xeDNj;
    private static final String[] EWhLc;
    private static final String[] SLNuF;
    private static final Map RGkOd;
    private static final long[] dmiyD;
    private static final Integer[] jIRWP;
    private static final Map XDQAr;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bG() {
        long l2 = xeDNj ^ 0x2E4E17ECA9C5L;
        int[] nArray = new int[bG.Mn("k", (int)14490, (long)(0x48E2E3E41B7D9F8AL ^ l2))];
        nArray[0] = (int)bG.Mn("k", (int)16264, (long)(0x4BF76EE6733A1899L ^ l2));
        nArray[1] = (int)bG.Mn("k", (int)11171, (long)(0x217B95EC630F8CB8L ^ l2));
        nArray[2] = (int)bG.Mn("k", (int)20011, (long)(0x17609526D145693CL ^ l2));
        nArray[3] = (int)bG.Mn("k", (int)4243, (long)(0x42C887E21818378FL ^ l2));
        nArray[4] = (int)bG.Mn("k", (int)1048, (long)(0x7B0D431301232301L ^ l2));
        nArray[5] = (int)bG.Mn("k", (int)30326, (long)(0x1B28759051F8D16EL ^ l2));
        super(nArray, lf.PWkZi);
        this.jEFqT = new bH(this.ZpVra, mr.clS(new int[]{(int)bG.Mn("k", (int)21247, (long)(0x281CE154D3FF5E9L ^ l2)), (int)bG.Mn("k", (int)32670, (long)(0x435D6E6AD67C588CL ^ l2)), (int)bG.Mn("k", (int)8553, (long)(0x1FAF6B7039E5067AL ^ l2))}), (String)((Object)bG.Mk("y", (int)31360, (long)(0x5EFED64F205746A6L ^ l2))));
        this.KRQEY = new bH(this.ZpVra, mr.clS(new int[]{(int)bG.Mn("k", (int)2769, (long)(0x1F31EBC1A522DC4L ^ l2)), (int)bG.Mn("k", (int)32670, (long)(0x435D6E6AD67C588CL ^ l2)), (int)bG.Mn("k", (int)5810, (long)(0x41D9CBADCB6B1A8L ^ l2))}), (String)((Object)bG.Mk("y", (int)1652, (long)(0x26D81610734BA53L ^ l2))));
        this.pePjV = new rk((int)bG.Mn("k", (int)4066, (long)(0x3E47EA18F40FA8F6L ^ l2))).dhs(rj.UPXqT);
        this.aaKXr = new rk((int)bG.Mn("k", (int)5544, (long)(0x409BB1D60247B2B5L ^ l2))).dhs(rj.UPXqT);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    bG.xeDNj = gb.aYR(-8832293978279949331L, -8353497630788713414L, MethodHandles.lookup().lookupClass()).a(159406309179691L);
                    bG.RGkOd = new HashMap<K, V>(13);
                    var11 = bG.xeDNj ^ 103388287698353L;
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
                    var17_5 = "\u00a3\u00dc\u00c7\r\u0094P*\u00d0\u008a\u0011\u00d9U\u001c\u00abWO\u0010#;\u0094\u00e4Z`_$\u001b\u00ff\u00den\u007f\u00f1\u00cb\u0086";
                    var19_6 = "\u00a3\u00dc\u00c7\r\u0094P*\u00d0\u008a\u0011\u00d9U\u001c\u00abWO\u0010#;\u0094\u00e4Z`_$\u001b\u00ff\u00den\u007f\u00f1\u00cb\u0086".length();
                    var16_7 = 16;
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
                        var20_3[var18_4++] = bG.Mh(var21_9).intern();
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
                bG.EWhLc = var20_3;
                bG.SLNuF = new String[2];
                bG.XDQAr = new HashMap<K, V>(13);
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
                var6_12 = new long[14];
                var3_13 = 0;
                var4_14 = "\u00f0{1U\u0013S\u0092\u0089\u0093ki\u009d\u00d1\"\u00f36)\u00e2i\u00c4\u00ec\u00fc<U\u000e\u00f9~k\u00a6\"\u0085\u00fd\u001f\u00f4\u00d7`r\t\u00f5\f\u0081\u000eK\u00acx\u0084pq\u00d6\b\u0007\u0085X\u00c7\u00e2ge\u00e9\u001e\u0080\u001b\u00d3s\u00e8\u0081\u00b3h\u001f\u000b\u00b5K\u0099\u0096\u00c6\u0004\u00ba\u00e1Kci\u00c0\u00f3`\u007f9\u00cb\u00aa\u0006&\u0086\u00ddx\u00c6\u00c2\u00ad\u0007";
                var5_15 = "\u00f0{1U\u0013S\u0092\u0089\u0093ki\u009d\u00d1\"\u00f36)\u00e2i\u00c4\u00ec\u00fc<U\u000e\u00f9~k\u00a6\"\u0085\u00fd\u001f\u00f4\u00d7`r\t\u00f5\f\u0081\u000eK\u00acx\u0084pq\u00d6\b\u0007\u0085X\u00c7\u00e2ge\u00e9\u001e\u0080\u001b\u00d3s\u00e8\u0081\u00b3h\u001f\u000b\u00b5K\u0099\u0096\u00c6\u0004\u00ba\u00e1Kci\u00c0\u00f3`\u007f9\u00cb\u00aa\u0006&\u0086\u00ddx\u00c6\u00c2\u00ad\u0007".length();
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
                    var4_14 = "\u0090\u00b7\u008cz\u00c3\u009c%;\u0099\u00c2\u0096#AS\u00b3\u00a5";
                    var5_15 = "\u0090\u00b7\u008cz\u00c3\u009c%;\u0099\u00c2\u0096#AS\u00b3\u00a5".length();
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
        bG.dmiyD = var6_12;
        bG.jIRWP = new Integer[14];
    }

    private static CallSite Mn(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bG" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @Override
    public void LX(lC lC2) {
        super.LX(lC2);
        this.pePjV.dhd(rD.dlmvG.getCurrentFps());
        this.aaKXr.dhd(iX.bxS());
        this.jEFqT.Mo(String.valueOf((int)this.pePjV.dhj()));
        this.KRQEY.Mo(jf.bAM(this.aaKXr.dhj()));
    }

    private static Object Mj(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = bG.Mi(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String Mh(byte[] byArray) {
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

    private static int Ml(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6C67;
        if (jIRWP[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = dmiyD[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])XDQAr.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    XDQAr.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bG", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bG.jIRWP[n3] = n4;
        }
        return jIRWP[n3];
    }

    private static CallSite Mk(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bG" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int Mm(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bG.Ml(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String Mi(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7750;
        if (SLNuF[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])RGkOd.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    RGkOd.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bG", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = EWhLc[n3].getBytes("ISO-8859-1");
            bG.SLNuF[n3] = bG.Mh(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return SLNuF[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bG.class, "Mm", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(bG.class, "Mj", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

