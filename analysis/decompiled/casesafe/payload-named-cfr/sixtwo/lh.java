/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.BlendFunction
 *  com.mojang.blaze3d.platform.DestFactor
 *  com.mojang.blaze3d.platform.SourceFactor
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.BlendFunction;
import com.mojang.blaze3d.platform.DestFactor;
import com.mojang.blaze3d.platform.SourceFactor;
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
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ld;

public final class lh
extends Enum<lh> {
    public static final /* enum */ lh RpYeK;
    public static final /* enum */ lh YrFUh;
    public static final /* enum */ lh GpGUc;
    public static final /* enum */ lh aApMr;
    public static final /* enum */ lh GJHNe;
    public static final /* enum */ lh qrVCo;
    public static final /* enum */ lh SsPSB;
    public static final /* enum */ lh QvPcW;
    private final boolean hLJxo;
    private final SourceFactor SaFdy;
    private final DestFactor SzmHl;
    private final SourceFactor WPxlF;
    private final DestFactor CTaMX;
    private static final /* synthetic */ lh[] CVltj;
    private static final long YqonM;
    private static final String[] FYdCZ;
    private static final String[] zABRf;
    private static final Map CpfpG;
    private static final long[] PogKY;
    private static final Integer[] xHPbz;
    private static final Map ZHvSP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private lh(boolean bl2, SourceFactor sourceFactor, DestFactor destFactor, SourceFactor sourceFactor2, DestFactor destFactor2) {
        this.hLJxo = bl2;
        this.SaFdy = sourceFactor;
        this.SzmHl = destFactor;
        this.WPxlF = sourceFactor2;
        this.CTaMX = destFactor2;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        lh.YqonM = gb.aYR(3718153968914290918L, 7870687450461312330L, MethodHandles.lookup().lookupClass()).a(79120449975906L);
                        var20 = lh.YqonM ^ 54475278622461L;
                        lh.CpfpG = new HashMap<K, V>(13);
                        var11_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var20 >>> 56);
                        for (var12_2 = 1; var12_2 < 8; ++var12_2) {
                            v2 = v2;
                            v2[var12_2] = (byte)(var20 << var12_2 * 8 >>> 56);
                        }
                        var11_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var18_3 = new String[9];
                        var16_4 = 0;
                        var15_5 = "\u00ec\u0096_\u00f8y*+\u0093\u00d2\u009f\u009c\u0002\u00e8,\u00f3\u0004\u00d8<\u00ce\u0011@.\u00f9\u0002 L\u00ddE^#]&{:\u0084\u0017\u00e4*\u008eSw\u00f7;W\r\u001c_\u00cc\u00b5qh\u00fc\u00b1\u00a2\u00a2\u00de\u0087(\u00cc\u0006\u00ac4\u00b7\u008a\u0004\u00d3\u00d4I}\u00b9\u00c5^\u00cf\u0010\u00f5{\u00a3c\u0087\u00e4+\u008c\u00e6\u00a2\u008c\u0004\u009a\u00efJ\u001bl\u0081f\rb\u00b4\u00bbS\u0010<\u0097\u00ad>\u00c0\u009d\u009bY\u00c2F\u0080*\u00da4\u0014m\u0010<\u0016=0W7\u00c7\t\u0092py\u00ebYD\u00cf\u0087\u0010\u009au\u00d9I`\n\"\u00e3\u00b7d\u00ceI\u007f\u009d\u00fbMP\u0096\u00ab^X\u0088\u009ap\u009c\u008d.\u00d6\u00fd\u0096o\u0000*Z2\u00c8\u00181\u0006\f\u00fc\u00f2\u0004\u0096\u00b4\u001d\u0088i\u00fc\u00e7S\u00c5G\u0088\u0094\u00c1\u00b2\u00bfk\u00c5\u009b\u00e9L\u00fb\u00e7\u0084m\u0080,\u009fI\u00bc85\u0005\u00f2\u00f6\u00d6\u00eb\u00c5\n\u00b5NI\u00f13tMT@U^\u008fek\u001dm";
                        var17_6 = "\u00ec\u0096_\u00f8y*+\u0093\u00d2\u009f\u009c\u0002\u00e8,\u00f3\u0004\u00d8<\u00ce\u0011@.\u00f9\u0002 L\u00ddE^#]&{:\u0084\u0017\u00e4*\u008eSw\u00f7;W\r\u001c_\u00cc\u00b5qh\u00fc\u00b1\u00a2\u00a2\u00de\u0087(\u00cc\u0006\u00ac4\u00b7\u008a\u0004\u00d3\u00d4I}\u00b9\u00c5^\u00cf\u0010\u00f5{\u00a3c\u0087\u00e4+\u008c\u00e6\u00a2\u008c\u0004\u009a\u00efJ\u001bl\u0081f\rb\u00b4\u00bbS\u0010<\u0097\u00ad>\u00c0\u009d\u009bY\u00c2F\u0080*\u00da4\u0014m\u0010<\u0016=0W7\u00c7\t\u0092py\u00ebYD\u00cf\u0087\u0010\u009au\u00d9I`\n\"\u00e3\u00b7d\u00ceI\u007f\u009d\u00fbMP\u0096\u00ab^X\u0088\u009ap\u009c\u008d.\u00d6\u00fd\u0096o\u0000*Z2\u00c8\u00181\u0006\f\u00fc\u00f2\u0004\u0096\u00b4\u001d\u0088i\u00fc\u00e7S\u00c5G\u0088\u0094\u00c1\u00b2\u00bfk\u00c5\u009b\u00e9L\u00fb\u00e7\u0084m\u0080,\u009fI\u00bc85\u0005\u00f2\u00f6\u00d6\u00eb\u00c5\n\u00b5NI\u00f13tMT@U^\u008fek\u001dm".length();
                        var14_7 = 24;
                        var13_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            v3 = ++var13_8;
                            v4 = var15_5.substring(v3, v3 + var14_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl25:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = lh.bYd(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            var15_5 = "C\u00c9;\u00cb\u00a4\u00e1\u00f8\u00db?\u00d9\u00e1\u00dcxj0\u0007\u00d5\u00aa\u00ee\u008aTYH\u00fb\u00ea\u00e5\"\u00a9\u0086\u00e00\u00bc \u00a0K\u00a1\tp\u00b2\u0083\u0013\u0087\u0098\u000b\u00eb<\u0096y\u00183e\u00a5S\u0012\u00e1P\u00e16\u00ed#\td\u007f)Z";
                            var17_6 = "C\u00c9;\u00cb\u00a4\u00e1\u00f8\u00db?\u00d9\u00e1\u00dcxj0\u0007\u00d5\u00aa\u00ee\u008aTYH\u00fb\u00ea\u00e5\"\u00a9\u0086\u00e00\u00bc \u00a0K\u00a1\tp\u00b2\u0083\u0013\u0087\u0098\u000b\u00eb<\u0096y\u00183e\u00a5S\u0012\u00e1P\u00e16\u00ed#\td\u007f)Z".length();
                            var14_7 = 32;
                            var13_8 = -1;
lbl34:
                            // 2 sources

                            while (true) {
                                v6 = ++var13_8;
                                v4 = var15_5.substring(v6, v6 + var14_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl39:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = lh.bYd(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var19_9 = var11_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl51:
                        // 1 sources

                        ** continue;
                    }
                }
                lh.FYdCZ = var18_3;
                lh.zABRf = new String[9];
                lh.ZHvSP = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var20 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var20 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[5];
                var3_13 = 0;
                var4_14 = "\u0019\u00db\u00f5\u00e0\u001bO\u0000X\u0090Y\u0086\u00cd0\u007f\u00f7C(\u00b9.\u00e2C\u009b\u00d7\u00ad";
                var5_15 = "\u0019\u00db\u00f5\u00e0\u001bO\u0000X\u0090Y\u0086\u00cd0\u007f\u00f7C(\u00b9.\u00e2C\u009b\u00d7\u00ad".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block20;
                    break;
                }
lbl78:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "_\u00cc\u0081y\u00c5.Qv\u00de\u00e5Q\u00b1\u00d4\u0097\u0091\u0096";
                    var5_15 = "_\u00cc\u0081y\u00c5.Qv\u00de\u00e5Q\u00b1\u00d4\u0097\u0091\u0096".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block20;
                        break;
                    }
                    break;
                }
lbl91:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block21;
                    break;
                }
            }
            var8_18 = v12;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v14 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v13) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl104:
                // 1 sources

                ** continue;
            }
        }
        lh.PogKY = var6_12;
        lh.xHPbz = new Integer[5];
        lh.RpYeK = new lh(false, SourceFactor.ONE, DestFactor.ZERO, SourceFactor.ONE, DestFactor.ZERO);
        lh.YrFUh = new lh(true, SourceFactor.SRC_ALPHA, DestFactor.ONE_MINUS_SRC_ALPHA, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA);
        lh.GpGUc = new lh(true, SourceFactor.SRC_ALPHA, DestFactor.ONE_MINUS_SRC_ALPHA, SourceFactor.ONE, DestFactor.ZERO);
        lh.aApMr = new lh(true, SourceFactor.SRC_ALPHA, DestFactor.ONE, SourceFactor.ONE, DestFactor.ONE);
        lh.GJHNe = new lh(true, SourceFactor.ONE, DestFactor.ONE, SourceFactor.ONE, DestFactor.ONE);
        lh.qrVCo = new lh(true, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA);
        lh.SsPSB = new lh(true, SourceFactor.DST_COLOR, DestFactor.ZERO, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA);
        lh.QvPcW = new lh(true, SourceFactor.ONE_MINUS_DST_COLOR, DestFactor.ONE, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA);
        lh.CVltj = lh.bYb();
    }

    public static lh[] values() {
        return (lh[])CVltj.clone();
    }

    public static lh valueOf(String string) {
        return Enum.valueOf(lh.class, string);
    }

    private static IllegalStateException bYc(IllegalStateException illegalStateException) {
        return illegalStateException;
    }

    public boolean bYa() {
        return this.hLJxo;
    }

    private static /* synthetic */ lh[] bYb() {
        long l2 = YqonM ^ 0x412063F01F10L;
        lh[] lhArray = new lh[lh.bYj("q", (int)30806, (long)(0x73335929A5FDAE20L ^ l2))];
        lhArray[0] = RpYeK;
        lhArray[1] = YrFUh;
        lhArray[2] = GpGUc;
        lhArray[3] = aApMr;
        lhArray[4] = GJHNe;
        lhArray[5] = qrVCo;
        lhArray[lh.bYj("q", (int)16041, (long)(0x845DA8AAD67E8DCL ^ l2))] = SsPSB;
        lhArray[lh.bYj("q", (int)5543, (long)(0x7711FFE8B2AFC3D3L ^ l2))] = QvPcW;
        return lhArray;
    }

    private static CallSite bYj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lh" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bYd(byte[] byArray) {
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

    private static String bYe(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x573E;
        if (zABRf[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])CpfpG.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    CpfpG.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lh", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = FYdCZ[n3].getBytes("ISO-8859-1");
            lh.zABRf[n3] = lh.bYd(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return zABRf[n3];
    }

    private static Object bYf(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = lh.bYe(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int bYh(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x372F;
        if (xHPbz[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = PogKY[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])ZHvSP.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ZHvSP.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lh", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            lh.xHPbz[n3] = n4;
        }
        return xHPbz[n3];
    }

    private static int bYi(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = lh.bYh(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public BlendFunction bXZ() {
        BlendFunction blendFunction;
        long l2 = YqonM ^ 0x268CDF538DE9L;
        String string = ld.b();
        try {
            if (this == RpYeK) {
                throw new IllegalStateException((String)((Object)lh.bYg("n", (int)264, (long)(0x72AE7B7357F9A590L ^ l2))));
            }
        }
        catch (IllegalStateException illegalStateException) {
            throw lh.bYc(illegalStateException);
        }
        try {
            blendFunction = new BlendFunction(SourceFactor.valueOf((String)this.SaFdy.name()), DestFactor.valueOf((String)this.SzmHl.name()), SourceFactor.valueOf((String)this.WPxlF.name()), DestFactor.valueOf((String)this.CTaMX.name()));
            if (iS.bwL() == null) {
                ld.b("Yc9kZb");
            }
        }
        catch (IllegalStateException illegalStateException) {
            throw lh.bYc(illegalStateException);
        }
        return blendFunction;
    }

    private static CallSite bYg(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lh" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lh.class, "bYi", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(lh.class, "bYf", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

