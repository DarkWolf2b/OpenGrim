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
import sixtwo.bR;
import sixtwo.cv;
import sixtwo.fp;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;

public class bQ
extends bR {
    private static final long FbZkr;
    private static final String aSVFs;
    private static final long[] WdacV;
    private static final Integer[] DMaSB;
    private static final Map uoHmV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bQ(cv cv2) {
        long l2 = FbZkr ^ 0x4FB6AD2D0E44L;
        int[] nArray = new int[bQ.NI("n", (int)26892, (long)(0x656CE5F7AA854ADAL ^ l2))];
        nArray[0] = (int)bQ.NI("n", (int)16092, (long)(0x4F54666CC00C9D04L ^ l2));
        nArray[1] = (int)bQ.NI("n", (int)12426, (long)(0x1AE92F6E05AB9359L ^ l2));
        nArray[2] = (int)bQ.NI("n", (int)22619, (long)(0x748A3DA0C2E47B95L ^ l2));
        nArray[3] = (int)bQ.NI("n", (int)26752, (long)(0x2E2DDFF62E3CCB41L ^ l2));
        nArray[4] = (int)bQ.NI("n", (int)6464, (long)(0x7C30EBE19102BA97L ^ l2));
        nArray[5] = (int)bQ.NI("n", (int)28144, (long)(0x2E0B487416F3CE2CL ^ l2));
        nArray[bQ.NI("n", (int)17276, (long)(0xC61A6472ED460B0L ^ l2))] = (int)bQ.NI("n", (int)12426, (long)(0x1AE92F6E05AB9359L ^ l2));
        nArray[bQ.NI("n", (int)32581, (long)(0xAA4D2AA5CCF5C9BL ^ l2))] = (int)bQ.NI("n", (int)22619, (long)(0x748A3DA0C2E47B95L ^ l2));
        nArray[bQ.NI("n", (int)10571, (long)(0x51C2A30815020A8CL ^ l2))] = (int)bQ.NI("n", (int)26752, (long)(0x2E2DDFF62E3CCB41L ^ l2));
        nArray[bQ.NI("n", (int)19443, (long)(0x28D11A231CCE6835L ^ l2))] = (int)bQ.NI("n", (int)29066, (long)(0x5059ED5A5269524EL ^ l2));
        nArray[bQ.NI("n", (int)26144, (long)(0x693CCD523953C5F4L ^ l2))] = (int)bQ.NI("n", (int)6318, (long)(0x73BAABEF49FCBB67L ^ l2));
        nArray[bQ.NI("n", (int)859, (long)(0x1A4A20FF0E8F2081L ^ l2))] = (int)bQ.NI("n", (int)6464, (long)(0x7C30EBE19102BA97L ^ l2));
        nArray[bQ.NI("n", (int)706, (long)(0x6CADB547BDC210AL ^ l2))] = (int)bQ.NI("n", (int)12426, (long)(0x1AE92F6E05AB9359L ^ l2));
        nArray[bQ.NI("n", (int)27984, (long)(0x3F3791AD75D94E89L ^ l2))] = (int)bQ.NI("n", (int)6464, (long)(0x7C30EBE19102BA97L ^ l2));
        nArray[bQ.NI("n", (int)3213, (long)(0x487D477FBB9AF4EL ^ l2))] = (int)bQ.NI("n", (int)4849, (long)(0x2591AD4C9C4F312AL ^ l2));
        nArray[bQ.NI("n", (int)25682, (long)(0x53FD97227E71C78DL ^ l2))] = (int)bQ.NI("n", (int)9126, (long)(0x45165E610BAC0076L ^ l2));
        super(cv2, mr.clS(nArray));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    bQ.FbZkr = gb.aYR(-8336207641672936261L, 7816714907251450256L, MethodHandles.lookup().lookupClass()).a(17729333217796L);
                    var11 = bQ.FbZkr ^ 128920977977324L;
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
                var15_3 = var13_1.doFinal("\u0001\u00e9G\u00b42\u00d8\b\u00fb".getBytes("ISO-8859-1"));
                ** while (true)
                bQ.aSVFs = bQ.NF(var15_3).intern();
                bQ.uoHmV = new HashMap<K, V>(13);
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
                var6_6 = new long[31];
                var3_7 = 0;
                var4_8 = "\u00f5G\u00f8T\u00bb,@\u00ee\u00f8\u009f\u000fA\u009c/\u00c8^b\u00cc\u0003\u0002I \u00bc\u00d7\u009c\u00a9\u001f\u0016\u00cbTO\u00e3\u0001\u00e3\u001d\u00ec\u00b6\u008eq\u0091\u00ae\u00c0X\u00e6i%\u00b9\u009em\u009c\u009a\u00d1\u0015<\u00817@\u008bb\u0013oF\u009c\u00b2\u0012Ti\u0011\u00c0<8\u00d0\u00fb6;\u00b61I\u00afe\u00cbV\u0018q\u0089\u0092\u00bf\u0016!\u00b0\u00c4\u00d3\u00fb\u00ff\u0005\u00f6Y}x\u00f8^\u00f9V\u00e3\u00a3\u000b\u00bb1-\u00b1\u0087F\u00a5\u0094K\u00b3\u0019\u00e3\u00c0Z4\u008a=\u00ff\u00a9v\u0018E\u00f9\u00b3<L\u00d6\u0015\u00a8\u00cc)\u00c2g\u00c0\u00907>\u001e\u00de\u00e1LZ\u00d4\u0014\u001f\u00c7\u00ee\u00c0\u000e\u001e\u00c8\u008b}\u00b6\u00e5>\u00b5\u0086\u00c5\u0016H-\u00c1\u00f7\u009dNP\u001b\u00afk\u001a\u00a2\u00a0\u009f\u00d5:\u00e4\u00d5\u00ed\u0015\u0093Yw\u0016\u00e4?\u00d3\u0082\u008e3\u00e6\u0003_{\u001f\u00ecH\u0099\u00e3\u00a4\u00e3\\\u00d8\u00cd:\u0099N\u00c9\u00d5\r\u009b\u0090\u0006\u00a9lX(\u00e9\u00d3\u00fd\u008a.B\u00cfyD";
                var5_9 = "\u00f5G\u00f8T\u00bb,@\u00ee\u00f8\u009f\u000fA\u009c/\u00c8^b\u00cc\u0003\u0002I \u00bc\u00d7\u009c\u00a9\u001f\u0016\u00cbTO\u00e3\u0001\u00e3\u001d\u00ec\u00b6\u008eq\u0091\u00ae\u00c0X\u00e6i%\u00b9\u009em\u009c\u009a\u00d1\u0015<\u00817@\u008bb\u0013oF\u009c\u00b2\u0012Ti\u0011\u00c0<8\u00d0\u00fb6;\u00b61I\u00afe\u00cbV\u0018q\u0089\u0092\u00bf\u0016!\u00b0\u00c4\u00d3\u00fb\u00ff\u0005\u00f6Y}x\u00f8^\u00f9V\u00e3\u00a3\u000b\u00bb1-\u00b1\u0087F\u00a5\u0094K\u00b3\u0019\u00e3\u00c0Z4\u008a=\u00ff\u00a9v\u0018E\u00f9\u00b3<L\u00d6\u0015\u00a8\u00cc)\u00c2g\u00c0\u00907>\u001e\u00de\u00e1LZ\u00d4\u0014\u001f\u00c7\u00ee\u00c0\u000e\u001e\u00c8\u008b}\u00b6\u00e5>\u00b5\u0086\u00c5\u0016H-\u00c1\u00f7\u009dNP\u001b\u00afk\u001a\u00a2\u00a0\u009f\u00d5:\u00e4\u00d5\u00ed\u0015\u0093Yw\u0016\u00e4?\u00d3\u0082\u008e3\u00e6\u0003_{\u001f\u00ecH\u0099\u00e3\u00a4\u00e3\\\u00d8\u00cd:\u0099N\u00c9\u00d5\r\u009b\u0090\u0006\u00a9lX(\u00e9\u00d3\u00fd\u008a.B\u00cfyD".length();
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
                    var4_8 = "j\u009a\u00d5S\u0088\u00a3\"\u00eb\u0095\u009c\u0004\u00ee\u00efZ\u00f4\u00d7";
                    var5_9 = "j\u009a\u00d5S\u0088\u00a3\"\u00eb\u0095\u009c\u0004\u00ee\u00efZ\u00f4\u00d7".length();
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
        bQ.WdacV = var6_6;
        bQ.DMaSB = new Integer[31];
    }

    @Override
    public boolean MH() {
        fp fp2 = rD.dlJ().aZx(fp.class);
        return fp2.aLL();
    }

    @Override
    public void MG(lC lC2, ii ii2) {
        long l2 = FbZkr ^ 0x230EF8BD5B1FL;
        fp fp2 = rD.dlJ().aZx(fp.class);
        int n2 = fp2.aMq();
        int n3 = jf.bBb(n2);
        int[] nArray = new int[bQ.NI("n", (int)7422, (long)(0x7FBD714570A96A60L ^ l2))];
        nArray[0] = (int)bQ.NI("n", (int)31326, (long)(0x16631DECEDE60CCAL ^ l2));
        nArray[1] = (int)bQ.NI("n", (int)26473, (long)(0x77EDBB949D6511F8L ^ l2));
        nArray[2] = (int)bQ.NI("n", (int)15116, (long)(0x1605BCE750544D9CL ^ l2));
        nArray[3] = (int)bQ.NI("n", (int)16266, (long)(0x7199B97D1792490CL ^ l2));
        nArray[4] = (int)bQ.NI("n", (int)13956, (long)(0x5592BE5586FF400EL ^ l2));
        nArray[5] = (int)bQ.NI("n", (int)25848, (long)(0x3466F9ADB9731276L ^ l2));
        nArray[bQ.NI("n", (int)4872, (long)(0x6044729317856593L ^ l2))] = (int)bQ.NI("n", (int)12426, (long)(0x1AE943D6503BC602L ^ l2));
        nArray[bQ.NI("n", (int)6233, (long)(0x528CC155E0B3EEC0L ^ l2))] = (int)bQ.NI("n", (int)22619, (long)(0x748A511897742ECEL ^ l2));
        nArray[bQ.NI("n", (int)23, (long)(0x7A59E9A36914769EL ^ l2))] = (int)bQ.NI("n", (int)26752, (long)(0x2E2DB34E7BAC9E1AL ^ l2));
        this.NJ(aSVFs, n2, nArray, mG.cnP(185.0f, 28.0f, 28.0f), false, n3);
        super.MG(lC2, ii2);
    }

    private static CallSite NI(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bQ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String NF(byte[] byArray) {
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

    private static int NG(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5441;
        if (DMaSB[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = WdacV[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])uoHmV.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uoHmV.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bQ", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bQ.DMaSB[n3] = n4;
        }
        return DMaSB[n3];
    }

    private static int NH(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bQ.NG(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bQ.class, "NH", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

