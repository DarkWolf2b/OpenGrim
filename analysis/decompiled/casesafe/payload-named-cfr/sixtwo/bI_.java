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
import sixtwo.iS;
import sixtwo.jg;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mr;
import sixtwo.rD;

public class bI
extends cn {
    private final bH EOqRP;
    private final bH dqBnO;
    private static final long cNgNw;
    private static final String[] QFEJf;
    private static final String[] iySMc;
    private static final Map Xlfqe;
    private static final long[] PqrSJ;
    private static final Integer[] TyQEX;
    private static final Map jhHvO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bI() {
        long l2 = cNgNw ^ 0x72ED3C8C8889L;
        int[] nArray = new int[bI.MF("w", (int)1702, (long)(0x7644CA88F5D490DL ^ l2))];
        nArray[0] = (int)bI.MF("w", (int)17698, (long)(0x1A76EEECEA8E0A90L ^ l2));
        nArray[1] = (int)bI.MF("w", (int)24356, (long)(0x2046C3708FCC109FL ^ l2));
        nArray[2] = (int)bI.MF("w", (int)31336, (long)(0x53319968B55BB5C4L ^ l2));
        nArray[3] = (int)bI.MF("w", (int)29124, (long)(0x23FDD3284B81BE64L ^ l2));
        nArray[4] = (int)bI.MF("w", (int)15197, (long)(0x4E7B67151FFE74FBL ^ l2));
        nArray[5] = (int)bI.MF("w", (int)2377, (long)(0x271219C14564C6F0L ^ l2));
        nArray[bI.MF("w", (int)26742, (long)(0x3E3E8238B3B427C1L ^ l2))] = (int)bI.MF("w", (int)32120, (long)(0x36910D648C08B2C0L ^ l2));
        nArray[bI.MF("w", (int)14679, (long)(0x2DC98CC472BF76E1L ^ l2))] = (int)bI.MF("w", (int)12503, (long)(0x69B51C4DACA3FF63L ^ l2));
        nArray[bI.MF("w", (int)27043, (long)(0x5C8A6661B38C260DL ^ l2))] = (int)bI.MF("w", (int)15691, (long)(0x7137A4CEF64872EEL ^ l2));
        nArray[bI.MF("w", (int)23892, (long)(0x5B46EBD796B712F9L ^ l2))] = (int)bI.MF("w", (int)19854, (long)(0xEA78DE3F4E88224L ^ l2));
        nArray[bI.MF("w", (int)27310, (long)(0x22EBDC782A81250CL ^ l2))] = (int)bI.MF("w", (int)9602, (long)(0x74045BB97A746A23L ^ l2));
        super(nArray, lf.GHxLj);
        int[] nArray2 = new int[bI.MF("w", (int)20877, (long)(0x102DA6A2B5B61E38L ^ l2))];
        nArray2[0] = (int)bI.MF("w", (int)18002, (long)(0x4B9D1B14367609FDL ^ l2));
        nArray2[1] = (int)bI.MF("w", (int)31336, (long)(0x53319968B55BB5C4L ^ l2));
        nArray2[2] = (int)bI.MF("w", (int)31336, (long)(0x53319968B55BB5C4L ^ l2));
        nArray2[3] = (int)bI.MF("w", (int)24319, (long)(0x3D53CDB87BC2115BL ^ l2));
        nArray2[4] = (int)bI.MF("w", (int)23758, (long)(0xA251D0504B11374L ^ l2));
        nArray2[5] = (int)bI.MF("w", (int)3581, (long)(0x128AB6568486424DL ^ l2));
        this.EOqRP = new bH(this.ZpVra, mr.clS(nArray2), (String)((Object)bI.MC("j", (int)10156, (long)(0x602E1B0C37D72664L ^ l2))));
        String[] stringArray = bH.Mt();
        try {
            int[] nArray3 = new int[bI.MF("w", (int)20877, (long)(0x102DA6A2B5B61E38L ^ l2))];
            nArray3[0] = (int)bI.MF("w", (int)21360, (long)(0x75195F8A23A01CD3L ^ l2));
            nArray3[1] = (int)bI.MF("w", (int)8679, (long)(0xB4FC69CCC76E4EL ^ l2));
            nArray3[2] = (int)bI.MF("w", (int)2914, (long)(0x630CAA08D9A4C4D3L ^ l2));
            nArray3[3] = (int)bI.MF("w", (int)18296, (long)(0x6B7FBFE71E3F88CBL ^ l2));
            nArray3[4] = (int)bI.MF("w", (int)2395, (long)(0x3C0F6C0A6EE9C6FCL ^ l2));
            nArray3[5] = (int)bI.MF("w", (int)15888, (long)(0x63A2CA4D521F71B8L ^ l2));
            this.dqBnO = new bH(this.ZpVra, mr.clS(nArray3), (String)((Object)bI.MC("j", (int)809, (long)(0x2ABABB9B9D2D82E0L ^ l2))));
            if (iS.bwL() == null) {
                bH.Ms(new String[2]);
            }
        }
        catch (MatchException matchException) {
            throw bI.My(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    bI.cNgNw = gb.aYR(7391329729738366473L, -6258484634165681461L, MethodHandles.lookup().lookupClass()).a(61652026067547L);
                    bI.Xlfqe = new HashMap<K, V>(13);
                    var11 = bI.cNgNw ^ 115757924585657L;
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
                    var17_5 = ".YI\u00d9W\u009d\u0017\u00cbo\u00abE\u00adS\u00fe\u001c\u00c6\u0010\u00f5\u00aey\u00b7\u00fc,\u00af\u0016\u0095\u00d8\u00d9\u00d4\u00cbg%9";
                    var19_6 = ".YI\u00d9W\u009d\u0017\u00cbo\u00abE\u00adS\u00fe\u001c\u00c6\u0010\u00f5\u00aey\u00b7\u00fc,\u00af\u0016\u0095\u00d8\u00d9\u00d4\u00cbg%9".length();
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
                        var20_3[var18_4++] = bI.Mz(var21_9).intern();
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
                bI.QFEJf = var20_3;
                bI.iySMc = new String[2];
                bI.jhHvO = new HashMap<K, V>(13);
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
                var6_12 = new long[28];
                var3_13 = 0;
                var4_14 = "\u000eV<\u00c9c\u00de\u00c9q3\u00b0K\u00c3\u00b1\u00a1|\u0001\u009e!\u000b\u0089E8\u00c1\u007fK\u0082\u009d\u00fe\u0084\u00ad\u00cf@B\u00e2\u0003\u0005\u009b\u0000v'\u0085j\u00f1\u00e3\u00a3\u00d6S\u00ec\u00a5\u000fH\u0019\u008f\u00f6\u001d\u0004^\u009dK\u009d(\u00d6\u00b7\u00b8x\u00a8\t\u0012u\u00b1\u00e1\u008a\u00001\u0016\u00a8=\u00b0\u0094\u00de\u009dG\u00c39\u00b2t\u00d0\u00b9M\u0084L\u00cb\u00d7\u009c\u00edtH\u0007X\u00a7\u00a8\u00a6Y%Vw}eu\u00ed\u00dd4\u0011Q\u0006\u00d4I\u00f20?G\u00ac\u00b0\u0091\u00a0\u00d7\u00fe_\u00e0lJj\u00f0c/\u00045\u0017\u0003\u00eb\u00fe\"\u00e9\u00bb\u001dl\u00e1^l<\u0095\u00bc>F\u00e3\u00abOEI\u0084q+=\u00ca\u00f0\u0088\u00eb\u0001.n6\u00bfH\u0086\f\u00ca\u00cd\u00d0\u00d2\u00964\rp\u0094\u001dA\u00b4J\u0081'\u001d\n~b\u00aa\u00af\u00cfTq\u00a1y\u00b3Q\u00cc\u00e7\u00e3t\u00a9";
                var5_15 = "\u000eV<\u00c9c\u00de\u00c9q3\u00b0K\u00c3\u00b1\u00a1|\u0001\u009e!\u000b\u0089E8\u00c1\u007fK\u0082\u009d\u00fe\u0084\u00ad\u00cf@B\u00e2\u0003\u0005\u009b\u0000v'\u0085j\u00f1\u00e3\u00a3\u00d6S\u00ec\u00a5\u000fH\u0019\u008f\u00f6\u001d\u0004^\u009dK\u009d(\u00d6\u00b7\u00b8x\u00a8\t\u0012u\u00b1\u00e1\u008a\u00001\u0016\u00a8=\u00b0\u0094\u00de\u009dG\u00c39\u00b2t\u00d0\u00b9M\u0084L\u00cb\u00d7\u009c\u00edtH\u0007X\u00a7\u00a8\u00a6Y%Vw}eu\u00ed\u00dd4\u0011Q\u0006\u00d4I\u00f20?G\u00ac\u00b0\u0091\u00a0\u00d7\u00fe_\u00e0lJj\u00f0c/\u00045\u0017\u0003\u00eb\u00fe\"\u00e9\u00bb\u001dl\u00e1^l<\u0095\u00bc>F\u00e3\u00abOEI\u0084q+=\u00ca\u00f0\u0088\u00eb\u0001.n6\u00bfH\u0086\f\u00ca\u00cd\u00d0\u00d2\u00964\rp\u0094\u001dA\u00b4J\u0081'\u001d\n~b\u00aa\u00af\u00cfTq\u00a1y\u00b3Q\u00cc\u00e7\u00e3t\u00a9".length();
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
                    var4_14 = "\u0084\u00aa\u00e5w8\u009c\u008d\u0017\u00f0\u0016_\u0004!\u008eI\u00a7";
                    var5_15 = "\u0084\u00aa\u00e5w8\u009c\u008d\u0017\u00f0\u0016_\u0004!\u008eI\u00a7".length();
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
        bI.PqrSJ = var6_12;
        bI.TyQEX = new Integer[28];
    }

    private static Object MB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = bI.MA(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    @Override
    public void LX(lC lC2) {
        super.LX(lC2);
        this.EOqRP.Mo(Math.round(rD.dlmvG.player.getX()) + " " + Math.round(rD.dlmvG.player.getY()) + " " + Math.round(rD.dlmvG.player.getZ()));
        this.dqBnO.Mo(jg.bBO(rD.dlmvG.player.getYaw()));
    }

    private static CallSite MF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bI" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite MC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bI" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException My(MatchException matchException) {
        return matchException;
    }

    private static int ME(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bI.MD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String Mz(byte[] byArray) {
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

    private static String MA(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1058;
        if (iySMc[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])Xlfqe.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Xlfqe.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bI", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = QFEJf[n3].getBytes("ISO-8859-1");
            bI.iySMc[n3] = bI.Mz(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return iySMc[n3];
    }

    private static int MD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5E30;
        if (TyQEX[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = PqrSJ[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])jhHvO.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    jhHvO.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bI", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bI.TyQEX[n3] = n4;
        }
        return TyQEX[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bI.class, "ME", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(bI.class, "MB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

