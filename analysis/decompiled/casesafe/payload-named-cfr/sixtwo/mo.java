/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
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
import net.minecraft.client.texture.AbstractTexture;
import sixtwo.gb;
import sixtwo.ob;

public final class mo
extends Enum<mo> {
    public static final /* enum */ mo TcnVB;
    public static final /* enum */ mo bkxjV;
    public static final /* enum */ mo KePbo;
    public static final /* enum */ mo Vflfx;
    public static final /* enum */ mo kbKRO;
    public static final /* enum */ mo mDCeI;
    public static final /* enum */ mo KyziQ;
    public static final /* enum */ mo KyHOi;
    private final AbstractTexture uPTbG;
    private static final /* synthetic */ mo[] qfFEQ;
    private static final long VYvTj;
    private static final long[] oQTNI;
    private static final Integer[] EUbgl;
    private static final Map FknrL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private mo(AbstractTexture abstractTexture) {
        this.uPTbG = abstractTexture;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        mo.VYvTj = gb.aYR(-4166142091497886144L, 2212998416938231883L, MethodHandles.lookup().lookupClass()).a(87490315881986L);
                        var20 = mo.VYvTj ^ 97356119203854L;
                        var12_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var20 >>> 56);
                        for (var13_2 = 1; var13_2 < 8; ++var13_2) {
                            v2 = v2;
                            v2[var13_2] = (byte)(var20 << var13_2 * 8 >>> 56);
                        }
                        var12_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var11_3 = new String[16];
                        var17_4 = 0;
                        var16_5 = "p\u00d6a\u00d1\u00bf\u0018\u00d91'\u001c\u00d0\u0018\u00c0\u00e7*\u00d7\bO\u00f8\u0006\u0016\u00e0E\u00f29\b:\u00fcxw\u00df\u00db\u00d0\u00e0\b\u00f1\u0086\u00e0\u0091\u00d7\u0004\u00bf\u00ed\bF\u0011\u00b0a\u00fc\u0092\u00df#\b\u00fd\u00a9\u00f3\u00c9\u0097B\b\u00d0\u0010\u007f\u00009\u0093}o\u00c4\u00fc, ^u\u00e0\u00bay\u00bb\b\u00d1\"z\u0017^V\u00e8j\b\u00d5\u00f2\u007f\u00d4_\u00fb\u00c2\u00f9\b\t,\\\u00afh\u00c0][\b\u00e0\u00a3G\u00b5\u00c3\u0000!C\b\u00bd\u00c4Z._\u00f2\\\u00c3\b\u00ed\u00d2\u00b49'*\u000f\u00e4\b#\u0099\u0082\u00fd|\u0084\u00e6\u00b2";
                        var18_6 = "p\u00d6a\u00d1\u00bf\u0018\u00d91'\u001c\u00d0\u0018\u00c0\u00e7*\u00d7\bO\u00f8\u0006\u0016\u00e0E\u00f29\b:\u00fcxw\u00df\u00db\u00d0\u00e0\b\u00f1\u0086\u00e0\u0091\u00d7\u0004\u00bf\u00ed\bF\u0011\u00b0a\u00fc\u0092\u00df#\b\u00fd\u00a9\u00f3\u00c9\u0097B\b\u00d0\u0010\u007f\u00009\u0093}o\u00c4\u00fc, ^u\u00e0\u00bay\u00bb\b\u00d1\"z\u0017^V\u00e8j\b\u00d5\u00f2\u007f\u00d4_\u00fb\u00c2\u00f9\b\t,\\\u00afh\u00c0][\b\u00e0\u00a3G\u00b5\u00c3\u0000!C\b\u00bd\u00c4Z._\u00f2\\\u00c3\b\u00ed\u00d2\u00b49'*\u000f\u00e4\b#\u0099\u0082\u00fd|\u0084\u00e6\u00b2".length();
                        var15_7 = 16;
                        var14_8 = -1;
lbl19:
                        // 2 sources

                        while (true) {
                            v3 = ++var14_8;
                            v4 = var16_5.substring(v3, v3 + var15_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl24:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = mo.clF(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            var16_5 = "\u0081\u001a\u0094+\u0083\u00b4&n\b\u00c77\u0095<\u00e5\u00ed\u0019\u0091";
                            var18_6 = "\u0081\u001a\u0094+\u0083\u00b4&n\b\u00c77\u0095<\u00e5\u00ed\u0019\u0091".length();
                            var15_7 = 8;
                            var14_8 = -1;
lbl33:
                            // 2 sources

                            while (true) {
                                v6 = ++var14_8;
                                v4 = var16_5.substring(v6, v6 + var15_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl38:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = mo.clF(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var19_9 = var12_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl50:
                        // 1 sources

                        ** continue;
                    }
                }
                mo.FknrL = new HashMap<K, V>(13);
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
                var4_14 = "\u0015\u00d1f\u001cR\b\u00b0\u00b5l\u00e3b\u00daL\u001bj\u00b4\u0089\u001aq|\u0005\u00de\u0088\u00f8";
                var5_15 = "\u0015\u00d1f\u001cR\b\u00b0\u00b5l\u00e3b\u00daL\u001bj\u00b4\u0089\u001aq|\u0005\u00de\u0088\u00f8".length();
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
lbl75:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "J\u009dj\u00aa\u009fF\u00e9\u00f7#\u00f0\u008c\t'\u0006\u00ab\u001c";
                    var5_15 = "J\u009dj\u00aa\u009fF\u00e9\u00f7#\u00f0\u008c\t'\u0006\u00ab\u001c".length();
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
lbl88:
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
lbl101:
                // 1 sources

                ** continue;
            }
        }
        mo.oQTNI = var6_12;
        mo.EUbgl = new Integer[5];
        mo.TcnVB = new mo(ob.cBv(var11_3[3]));
        mo.bkxjV = new mo(ob.cBv(var11_3[2]));
        mo.KePbo = new mo(ob.cBv(var11_3[6]));
        mo.Vflfx = new mo(ob.cBv(var11_3[12]));
        mo.kbKRO = new mo(ob.cBv(var11_3[9]));
        mo.mDCeI = new mo(ob.cBv(var11_3[1]));
        mo.KyziQ = new mo(ob.cBv(var11_3[14]));
        mo.KyHOi = new mo(ob.cBv(var11_3[8]));
        mo.qfFEQ = mo.clE();
    }

    public static mo[] values() {
        return (mo[])qfFEQ.clone();
    }

    public static mo valueOf(String string) {
        return Enum.valueOf(mo.class, string);
    }

    public AbstractTexture clD() {
        return this.uPTbG;
    }

    private static int clH(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = mo.clG(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int clG(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x73FE;
        if (EUbgl[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = oQTNI[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])FknrL.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    FknrL.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mo", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mo.EUbgl[n3] = n4;
        }
        return EUbgl[n3];
    }

    private static CallSite clI(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mo" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static /* synthetic */ mo[] clE() {
        long l2 = VYvTj ^ 0x40C79F1E969EL;
        mo[] moArray = new mo[mo.clI("x", (int)19148, (long)(0x48D398CF3D018957L ^ l2))];
        moArray[0] = TcnVB;
        moArray[1] = bkxjV;
        moArray[2] = KePbo;
        moArray[3] = Vflfx;
        moArray[4] = kbKRO;
        moArray[5] = mDCeI;
        moArray[mo.clI("x", (int)7141, (long)(0x214026D8A4B1D87CL ^ l2))] = KyziQ;
        moArray[mo.clI("x", (int)21351, (long)(0x67C40BAD232B10FFL ^ l2))] = KyHOi;
        return moArray;
    }

    private static String clF(byte[] byArray) {
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
            return MethodHandles.lookup().findStatic(mo.class, "clH", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

