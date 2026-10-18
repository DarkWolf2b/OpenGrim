/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.MathHelper
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
import net.minecraft.util.math.MathHelper;
import sixtwo.bR;
import sixtwo.cv;
import sixtwo.ff;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;

public class bO
extends bR {
    private static final long LgPVz;
    private static final String BgLMg;
    private static final long[] KfhLo;
    private static final Integer[] LpqIJ;
    private static final Map ApbQa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bO(cv cv2) {
        long l2 = LgPVz ^ 0x2EF784207599L;
        int[] nArray = new int[bO.NA("a", (int)7431, (long)(0x4C9A806AF024DD99L ^ l2))];
        nArray[0] = (int)bO.NA("a", (int)16490, (long)(0x114F6729137700E6L ^ l2));
        nArray[1] = (int)bO.NA("a", (int)9978, (long)(0x2112F1AB875667EL ^ l2));
        nArray[2] = (int)bO.NA("a", (int)17997, (long)(0x7BF0E26A242D86C6L ^ l2));
        nArray[3] = (int)bO.NA("a", (int)32347, (long)(0x5084EFB96BC3ECBL ^ l2));
        nArray[4] = (int)bO.NA("a", (int)29767, (long)(0x56EB3BA0D9D8B4C4L ^ l2));
        nArray[5] = (int)bO.NA("a", (int)26334, (long)(0x7C71DFC3570BA65BL ^ l2));
        nArray[bO.NA("a", (int)20898, (long)(0x7ADDA14962ED912FL ^ l2))] = (int)bO.NA("a", (int)9978, (long)(0x2112F1AB875667EL ^ l2));
        nArray[bO.NA("a", (int)15207, (long)(0x4CE70B2DD1247BEFL ^ l2))] = (int)bO.NA("a", (int)21977, (long)(0x549991AAE2399557L ^ l2));
        nArray[bO.NA("a", (int)32664, (long)(0x6036C07AD3E0BF1FL ^ l2))] = (int)bO.NA("a", (int)29767, (long)(0x56EB3BA0D9D8B4C4L ^ l2));
        nArray[bO.NA("a", (int)11596, (long)(0x58F75F9331EDC6L ^ l2))] = (int)bO.NA("a", (int)29152, (long)(0x2E84BDACB4433171L ^ l2));
        nArray[bO.NA("a", (int)6956, (long)(0x1A90BFD3B0A45BB6L ^ l2))] = (int)bO.NA("a", (int)3438, (long)(0x3315DA5D935CCDE1L ^ l2));
        nArray[bO.NA("a", (int)7261, (long)(0x1317387AC821DCC0L ^ l2))] = (int)bO.NA("a", (int)9978, (long)(0x2112F1AB875667EL ^ l2));
        nArray[bO.NA("a", (int)15460, (long)(0x96CA2FDD6E87CFFL ^ l2))] = (int)bO.NA("a", (int)18029, (long)(0x162108D29D9886EBL ^ l2));
        nArray[bO.NA("a", (int)19800, (long)(0x289A6826261C0DCDL ^ l2))] = (int)bO.NA("a", (int)24001, (long)(0x6F6565EFE2391D5EL ^ l2));
        nArray[bO.NA("a", (int)11414, (long)(0x1A30ACE8E3CB6C02L ^ l2))] = (int)bO.NA("a", (int)7465, (long)(0x38AF1DC7B8A0DDB5L ^ l2));
        super(cv2, mr.clS(nArray));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    bO.LgPVz = gb.aYR(7691661973948649615L, -4839454869264544168L, MethodHandles.lookup().lookupClass()).a(256711264222585L);
                    var11 = bO.LgPVz ^ 70820342341631L;
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
                var15_3 = var13_1.doFinal("a\u001bt\u00cdo\u0002G\u0015".getBytes("ISO-8859-1"));
                ** while (true)
                bO.BgLMg = bO.Nx(var15_3).intern();
                bO.ApbQa = new HashMap<K, V>(13);
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
                var6_6 = new long[32];
                var3_7 = 0;
                var4_8 = "\u007f\u00da\u00e9\u00a0\u00edUo9\u0002\u00aa\u000b\u0080A\u00a0\u00f4|(\u00d170\u00e2\u00a5(\u00a4\u001ci2;\u0004v\u00bd\u00dcf\u00f9\u000f\u001f+\u0003g\u000b[\u00be\u00d0\u00d9\u00f6F\b\u00af\u00dc\u00bf8\u0004\u0098\u001b<K\u00b2l!>KQ\u0019\u00a5\u00a1\u00d8?K\u00e2\u0097n\u0018-\u00b8L1\u00d9\u0099i\u0088\u0089\u00f6\u0089x\u00b6njD\u008b\u000b\u0088_\u00ff_I\u00e1\u00b6\u00d8\u0016\u0001\u00fe\u0010]ikj\u00e6\u00ba\u0096\u009aD{=6\u0016\u00b2\u00d4\u00b9\u00f1\u00f9;\u0098\u00de^\u00cb\u00fb\u000bTq\u00bbH\u00c9\u00e0\u00e0\u00c7W\u00e3\u0082\u00e8B\u008e HD\u008c\u00ba\u00c0\u00b4O\u001c\u0017\u00c7J\u0086S\u00a7GK3\u00ca\u0085\u00c9\u00d4\u0084\u007fSd~`1\u00cb(F\u00c3\u00cb&RN.\u0004\u00b1\u0098|\u0094\u0095\u0095\u00946\u00a1\u00d1n\u00bb\u001c\ru0\u00dd\u0010>\u00b2\u008d\u00deKd\u0096\u00d6\u0092#\u00beN(\u008dc\u00eb\u0014\u00b3g\u00d7\u00d14XL\u00d4s\u0019\u0082\u00c1Y\u008a\u001bv\u009b\u0015\u00bc7\u0005>}b\u00fb";
                var5_9 = "\u007f\u00da\u00e9\u00a0\u00edUo9\u0002\u00aa\u000b\u0080A\u00a0\u00f4|(\u00d170\u00e2\u00a5(\u00a4\u001ci2;\u0004v\u00bd\u00dcf\u00f9\u000f\u001f+\u0003g\u000b[\u00be\u00d0\u00d9\u00f6F\b\u00af\u00dc\u00bf8\u0004\u0098\u001b<K\u00b2l!>KQ\u0019\u00a5\u00a1\u00d8?K\u00e2\u0097n\u0018-\u00b8L1\u00d9\u0099i\u0088\u0089\u00f6\u0089x\u00b6njD\u008b\u000b\u0088_\u00ff_I\u00e1\u00b6\u00d8\u0016\u0001\u00fe\u0010]ikj\u00e6\u00ba\u0096\u009aD{=6\u0016\u00b2\u00d4\u00b9\u00f1\u00f9;\u0098\u00de^\u00cb\u00fb\u000bTq\u00bbH\u00c9\u00e0\u00e0\u00c7W\u00e3\u0082\u00e8B\u008e HD\u008c\u00ba\u00c0\u00b4O\u001c\u0017\u00c7J\u0086S\u00a7GK3\u00ca\u0085\u00c9\u00d4\u0084\u007fSd~`1\u00cb(F\u00c3\u00cb&RN.\u0004\u00b1\u0098|\u0094\u0095\u0095\u00946\u00a1\u00d1n\u00bb\u001c\ru0\u00dd\u0010>\u00b2\u008d\u00deKd\u0096\u00d6\u0092#\u00beN(\u008dc\u00eb\u0014\u00b3g\u00d7\u00d14XL\u00d4s\u0019\u0082\u00c1Y\u008a\u001bv\u009b\u0015\u00bc7\u0005>}b\u00fb".length();
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
                    var4_8 = "\u00f5\n+rm\u0011\u00d4\u00c3\u00de:C\u00a3\u00ce\u00a7\u00e0^";
                    var5_9 = "\u00f5\n+rm\u0011\u00d4\u00c3\u00de:C\u00a3\u00ce\u00a7\u00e0^".length();
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
        bO.KfhLo = var6_6;
        bO.LpqIJ = new Integer[32];
    }

    @Override
    public boolean MH() {
        ff ff2 = rD.dlJ().aZx(ff.class);
        return ff2.bag();
    }

    private static CallSite NA(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bO" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @Override
    public void MG(lC lC2, ii ii2) {
        long l2 = LgPVz ^ 0x18CCBDB96F00L;
        ff ff2 = rD.dlJ().aZx(ff.class);
        long l3 = ff2.aIE().cpF();
        int n2 = (int)MathHelper.clamp((long)((long)ff2.aIH() - l3), (long)0L, (long)ff2.aIH());
        int n3 = jf.bBb(Math.max(ff2.aIH(), jf.bBb(ff2.aIw().UU())));
        int[] nArray = new int[bO.NA("a", (int)28552, (long)(0x61DE824C86653582L ^ l2))];
        nArray[0] = (int)bO.NA("a", (int)8372, (long)(0x24E6034587CD7AAFL ^ l2));
        nArray[1] = (int)bO.NA("a", (int)26837, (long)(0x70764B08B9E1B2DEL ^ l2));
        nArray[2] = (int)bO.NA("a", (int)4347, (long)(0x14F467F696CAE3L ^ l2));
        nArray[3] = (int)bO.NA("a", (int)21703, (long)(0x3F8CBA92E89B0EC7L ^ l2));
        nArray[4] = (int)bO.NA("a", (int)32552, (long)(0x29008BFDE2392527L ^ l2));
        nArray[5] = (int)bO.NA("a", (int)13069, (long)(0x6244383C2925E90CL ^ l2));
        nArray[bO.NA("a", (int)23016, (long)(0x314DB7F63B7C03E6L ^ l2))] = (int)bO.NA("a", (int)9978, (long)(0x211192181EC7CE7L ^ l2));
        nArray[bO.NA("a", (int)26906, (long)(0x399ECD74186B30AL ^ l2))] = (int)bO.NA("a", (int)26609, (long)(0x3A4071438E283DE8L ^ l2));
        this.NJ(BgLMg, n2, nArray, mG.cnP(185.0f, 28.0f, 28.0f), false, n3);
        super.MG(lC2, ii2);
    }

    private static String Nx(byte[] byArray) {
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

    private static int Nz(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bO.Ny(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int Ny(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x78D3;
        if (LpqIJ[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = KfhLo[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])ApbQa.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ApbQa.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bO", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bO.LpqIJ[n3] = n4;
        }
        return LpqIJ[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bO.class, "Nz", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

