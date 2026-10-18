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
import sixtwo.cF;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.jg$tJ;
import sixtwo.mr;

public class dY
extends gg {
    private final cF vJyXR;
    private static final long bUNLU;
    private static final long[] dXRUT;
    private static final Integer[] UAgHi;
    private static final Map qbJue;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dY() {
        long l2 = bUNLU ^ 0x24ADEC7765ACL;
        super(gf.aZL((int)dY.aqY("m", (int)6538, (long)(0x2AB6F5D738724C3L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dY.aqY("m", (int)12791, (long)(0x223A1047B2EB0CBDL ^ l2))];
        nArray[0] = (int)dY.aqY("m", (int)1221, (long)(0x587E5D4E501C398BL ^ l2));
        nArray[1] = (int)dY.aqY("m", (int)29510, (long)(0x33DFC653AF98CE06L ^ l2));
        nArray[2] = (int)dY.aqY("m", (int)14273, (long)(0x492A657AE8048A82L ^ l2));
        nArray[3] = (int)dY.aqY("m", (int)31247, (long)(0x5666000D12A474EL ^ l2));
        nArray[4] = (int)dY.aqY("m", (int)4555, (long)(0x7FF722CC7581AC84L ^ l2));
        nArray[5] = (int)dY.aqY("m", (int)12174, (long)(0x76D1E5867FF12C3L ^ l2));
        nArray[dY.aqY("m", (int)3058, (long)(0x2112974B19AE36BEL ^ l2))] = (int)dY.aqY("m", (int)14408, (long)(0x3706A3F28D200500L ^ l2));
        nArray[dY.aqY("m", (int)20100, (long)(0x7BA538ADC74273CFL ^ l2))] = (int)dY.aqY("m", (int)22978, (long)(0x47E660398AFEE480L ^ l2));
        this.vJyXR = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                dY.bUNLU = gb.aYR(-8274142678140933289L, 625689276679862641L, MethodHandles.lookup().lookupClass()).a(230252945837289L);
                dY.qbJue = new HashMap<K, V>(13);
                var0 = dY.bUNLU ^ 128577705982296L;
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
                var8_3 = new long[12];
                var5_4 = 0;
                var6_5 = "O\bNp<(w\u00e9\u00e8\u0001T&e\n\u00ac\u00fb\u00a7\u0083\u0016\u0089p\u001f\u00a0|\u001fQ\u00f5q\u00cc\u0006\u00a1\u0090H\u00af\u00c3+.\u00daR||\u007f\u009b9,\u00f8\u0086\u00bdc\u00c9\u00ab\u00de\u00cc{\u0007\u00af\u00f9j\u000e\u00bfL\u00ea\u00da_%\u00fc\u00a7\u00cbA#\u00e6\u00a6g\u00e8\u00fewT\u00f5\u007f\u0012";
                var7_6 = "O\bNp<(w\u00e9\u00e8\u0001T&e\n\u00ac\u00fb\u00a7\u0083\u0016\u0089p\u001f\u00a0|\u001fQ\u00f5q\u00cc\u0006\u00a1\u0090H\u00af\u00c3+.\u00daR||\u007f\u009b9,\u00f8\u0086\u00bdc\u00c9\u00ab\u00de\u00cc{\u0007\u00af\u00f9j\u000e\u00bfL\u00ea\u00da_%\u00fc\u00a7\u00cbA#\u00e6\u00a6g\u00e8\u00fewT\u00f5\u007f\u0012".length();
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
                    var6_5 = "\u0015\u00db-\u0013UY\u00e3\u0007\u00b2G\u00a6\u00f7M\u00ea\u00a52";
                    var7_6 = "\u0015\u00db-\u0013UY\u00e3\u0007\u00b2G\u00a6\u00f7M\u00ea\u00a52".length();
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
        dY.dXRUT = var8_3;
        dY.UAgHi = new Integer[12];
    }

    private static CallSite aqY(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dY" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int aqX(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dY.aqW(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int aqW(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2B7A;
        if (UAgHi[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = dXRUT[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])qbJue.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    qbJue.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dY", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dY.UAgHi[n3] = n4;
        }
        return UAgHi[n3];
    }

    public cF aqV() {
        return this.vJyXR;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dY.class, "aqX", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

