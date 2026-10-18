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
import sixtwo.cC;
import sixtwo.fg;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mr;
import sixtwo.rD;

public class fK
extends gg {
    private final cC IRxGK;
    private final cC hDYSX;
    private static final long YOIFW;
    private static final String[] ZSzib;
    private static final String[] ZYcLJ;
    private static final Map NbiLf;
    private static final long[] MBsFK;
    private static final Integer[] JSHgz;
    private static final Map aROsM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fK() {
        long l2 = YOIFW ^ 0x49076E028A03L;
        super(gf.aZL((int)20, false, gh.xwjCw));
        int[] nArray = new int[12];
        nArray[0] = (int)69;
        nArray[1] = (int)110;
        nArray[2] = (int)116;
        nArray[3] = (int)105;
        nArray[4] = (int)116;
        nArray[5] = (int)121;
        nArray[6] = (int)32;
        nArray[7] = (int)86;
        nArray[8] = (int)97;
        nArray[9] = (int)108;
        nArray[10] = (int)117;
        nArray[11] = (int)101;
        this.IRxGK = new cC(this, mr.clS(nArray)).Vy(0.01).Vw(3.0).Vx(6.0).VA(3.0).Vz((String)((Object)" blocks"));
        int[] nArray2 = new int[12];
        nArray2[0] = (int)66;
        nArray2[1] = (int)108;
        nArray2[2] = (int)111;
        nArray2[3] = (int)99;
        nArray2[4] = (int)107;
        nArray2[5] = (int)115;
        nArray2[6] = (int)32;
        nArray2[7] = (int)86;
        nArray2[8] = (int)97;
        nArray2[9] = (int)108;
        nArray2[10] = (int)117;
        nArray2[11] = (int)101;
        this.hDYSX = new cC(this, mr.clS(nArray2)).Vy(0.01).Vw(4.5).Vx(6.0).VA(4.5).Vz((String)((Object)" blocks"));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    fK.YOIFW = gb.aYR(-6406436463589819404L, 8493228117774850738L, MethodHandles.lookup().lookupClass()).a(260733083845978L);
                    fK.NbiLf = new HashMap<K, V>(13);
                    var11 = fK.YOIFW ^ 65665911042212L;
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
                    var17_5 = "\u00db\u00ca]\u00d5\u00c9\u008cl\u0006\"\u008d%],\u009d\u00fe|\u00105\u00fb&\u00c5\u0091I0.\u00b6\u001e)/\u00b0\u00a0 \u00f7";
                    var19_6 = "\u00db\u00ca]\u00d5\u00c9\u008cl\u0006\"\u008d%],\u009d\u00fe|\u00105\u00fb&\u00c5\u0091I0.\u00b6\u001e)/\u00b0\u00a0 \u00f7".length();
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
                        var20_3[var18_4++] = fK.aUY(var21_9).intern();
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
                fK.ZSzib = var20_3;
                fK.ZYcLJ = new String[2];
                fK.aROsM = new HashMap<K, V>(13);
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
                var6_12 = new long[38];
                var3_13 = 0;
                var4_14 = "\u00acG)\u00dd\u001a\u00e3\u009d\u00eb\u000f\u00ff\u00d0\u00f7\b\u0089\u0084b\u00c7\u0005\u00a3\u0005b\u007f\u009b\u009eb\u00a4.\u00cb`\u00b9\u00d0#\u001b(\u0001\u00e3\u001b\u00a9#C\u00ef\u00a83\u00cfCy\u00eb\u00a6\u00a1\u00e5i\u0005\f\u00ca]\u00da\u00bb\u00bcXv\u009d\u00ae\u00a5K\u0018\u00c7\u007f\u009aI\u00b6\u00d5\u00cd\u0084\u0085#&H\u00ba9mz\u0096\u00ce\u0089\tIDr\u00ed\u00ea\u00f1Ch\u00a6X\u008fcB\u0001\u001e\u0080\u00d2\u00e4\u001c\u00fdQ&\u00af\u0000\u00f9fB\u00a6:\u00a0\u00d59\u00d2\u00b1\u00e8\u0080\u000e*\u0016f\u0006t\u00c8\u00b7mk6v\u00d3\u00d3pX\u00c2j\u0016H\u00e8\u0080\u00a0\u00ce\u00dd\u00f3@\u0099E\u00a4\u009a6\u00b4\u00f6\u00b8\u0012\t\n\u0086h\u001d \u001d\u0016\u00a9Hp\n\u00bd\u00dd\u00fd(3\u00ee\u0088\u009bO\u00c8\u00a8\u00c7\u0090\u00a5We\u00a8\u0099\u009f\u00f5\u009cg\u0083\u00ed\u00b5\u00dbN\u00e0\u00f4}\u001a?\u009a\u0089&\u00aaqrT\u00d7\u0018d\u00ed\u009f\u001e\u00db\u00fe\u0080\u00ad-\u008d\u0080\u00efH\u00fb9\u0013\u00b9k\u0083\u0005\u00edA\u00fe5d\u00f7\u00c0\u00c4\u00c0\u00eb\u00cc{e\u00a9\u0006\u00f9\u000by-]Q*\u00cf\u00d1\u00c9\u00de\u008d\u0091\u0016\u00f6\u001ez\u001c\u001b\u00d9\u00efG\u00bf>wPt\u0013\u00b7\u00aaa~6\u00f1\u00c8\u008d\u009a [\u0086\u00de\u0093\u00a7";
                var5_15 = "\u00acG)\u00dd\u001a\u00e3\u009d\u00eb\u000f\u00ff\u00d0\u00f7\b\u0089\u0084b\u00c7\u0005\u00a3\u0005b\u007f\u009b\u009eb\u00a4.\u00cb`\u00b9\u00d0#\u001b(\u0001\u00e3\u001b\u00a9#C\u00ef\u00a83\u00cfCy\u00eb\u00a6\u00a1\u00e5i\u0005\f\u00ca]\u00da\u00bb\u00bcXv\u009d\u00ae\u00a5K\u0018\u00c7\u007f\u009aI\u00b6\u00d5\u00cd\u0084\u0085#&H\u00ba9mz\u0096\u00ce\u0089\tIDr\u00ed\u00ea\u00f1Ch\u00a6X\u008fcB\u0001\u001e\u0080\u00d2\u00e4\u001c\u00fdQ&\u00af\u0000\u00f9fB\u00a6:\u00a0\u00d59\u00d2\u00b1\u00e8\u0080\u000e*\u0016f\u0006t\u00c8\u00b7mk6v\u00d3\u00d3pX\u00c2j\u0016H\u00e8\u0080\u00a0\u00ce\u00dd\u00f3@\u0099E\u00a4\u009a6\u00b4\u00f6\u00b8\u0012\t\n\u0086h\u001d \u001d\u0016\u00a9Hp\n\u00bd\u00dd\u00fd(3\u00ee\u0088\u009bO\u00c8\u00a8\u00c7\u0090\u00a5We\u00a8\u0099\u009f\u00f5\u009cg\u0083\u00ed\u00b5\u00dbN\u00e0\u00f4}\u001a?\u009a\u0089&\u00aaqrT\u00d7\u0018d\u00ed\u009f\u001e\u00db\u00fe\u0080\u00ad-\u008d\u0080\u00efH\u00fb9\u0013\u00b9k\u0083\u0005\u00edA\u00fe5d\u00f7\u00c0\u00c4\u00c0\u00eb\u00cc{e\u00a9\u0006\u00f9\u000by-]Q*\u00cf\u00d1\u00c9\u00de\u008d\u0091\u0016\u00f6\u001ez\u001c\u001b\u00d9\u00efG\u00bf>wPt\u0013\u00b7\u00aaa~6\u00f1\u00c8\u008d\u009a [\u0086\u00de\u0093\u00a7".length();
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
                    var4_14 = "\u0003{i\u000e\u00ae\u00b0\u0096\u00de\u00fb\u00e3\u0082\u0000Og\u00e9\u0097";
                    var5_15 = "\u0003{i\u000e\u00ae\u00b0\u0096\u00de\u00fb\u00e3\u0082\u0000Og\u00e9\u0097".length();
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
        fK.MBsFK = var6_12;
        fK.JSHgz = new Integer[38];
    }

    public double aUW() {
        fK fK2;
        block6: {
            block7: {
                double d2;
                block9: {
                    block8: {
                        long l2 = YOIFW ^ 0x6C6CE7DD850DL;
                        int[] nArray = fg.aIW();
                        try {
                            try {
                                try {
                                    fK2 = this;
                                    if (nArray != null) break block6;
                                    if (fK2.RliRe) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw fK.aUX(matchException);
                                }
                                if (!rD.dlmvG.interactionManager.getCurrentGameMode().isCreative()) break block8;
                            }
                            catch (MatchException matchException) {
                                throw fK.aUX(matchException);
                            }
                            d2 = 5.0;
                            break block9;
                        }
                        catch (MatchException matchException) {
                            throw fK.aUX(matchException);
                        }
                    }
                    d2 = 4.5;
                }
                return d2;
            }
            fK2 = this;
        }
        return fK2.hDYSX.VI();
    }

    public double aUV() {
        fK fK2;
        block4: {
            block5: {
                long l2 = YOIFW ^ 0x3F40E058FD6L;
                int[] nArray = fg.aIW();
                try {
                    try {
                        fK2 = this;
                        if (nArray != null) break block4;
                        if (fK2.RliRe) break block5;
                    }
                    catch (MatchException matchException) {
                        throw fK.aUX(matchException);
                    }
                    return 3.0;
                }
                catch (MatchException matchException) {
                    throw fK.aUX(matchException);
                }
            }
            fK2 = this;
        }
        return fK2.IRxGK.VI();
    }

    private static String aUY(byte[] byArray) {
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

    private static int aVc(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4EEA;
        if (JSHgz[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = MBsFK[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])aROsM.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    aROsM.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fK", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            fK.JSHgz[n3] = n4;
        }
        return JSHgz[n3];
    }

    private static int aVd(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = fK.aVc(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite aVe(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fK" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException aUX(MatchException matchException) {
        return matchException;
    }

    private static Object aVa(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = fK.aUZ(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite aVb(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fK" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String aUZ(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2C48;
        if (ZYcLJ[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])NbiLf.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    NbiLf.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fK", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = ZSzib[n3].getBytes("ISO-8859-1");
            fK.ZYcLJ[n3] = fK.aUY(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return ZYcLJ[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(fK.class, "aVd", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(fK.class, "aVa", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

