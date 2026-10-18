/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  org.joml.Matrix3x2fStack
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
import net.minecraft.client.util.math.MatrixStack;
import org.joml.Matrix3x2fStack;
import sixtwo.gb;
import sixtwo.kG;
import sixtwo.mG;

public class kG$uo {
    private MatrixStack qJGym;
    private Matrix3x2fStack xLjKC;
    private float jNWXI;
    private float bxwjq;
    private float AmqHG;
    private float IhFas;
    private float JdXmY;
    private mG yaziN;
    private static final long rIkYq;
    private static final String[] HUAzB;
    private static final String[] cKQLl;
    private static final Map BEGkq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    kG$uo() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kG$uo.rIkYq = gb.aYR(1977612314443308192L, 6970347517959504935L, MethodHandles.lookup().lookupClass()).a(60093033629451L);
                kG$uo.BEGkq = new HashMap<K, V>(13);
                var0 = kG$uo.rIkYq ^ 22992440162547L;
                var2_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var9_3 = new String[8];
                var7_4 = 0;
                var6_5 = "k)\u00cd\u00c9\u00e9\t\u00af\u008c\u0085\u00ea\u00f99\u000b<\u0080m ?\u0010N\u00c24`\\\u00ff\u00c9\u00a3\u00cb0H |\u00e7jJ*\u0014\u0093\u00a2s\u00d5\u0002\u00be\u00e0\u00b49\u00edF\u001a\u0010\u0080\r\u00f5_\u00ca\u00e6\u00cc\u00d0\u00ed`\u000b_\u00a3\u00a3\u00b1\u00f3p\u0019\u00dc\u00ed\u0005\u00db\u001bY6V[\u00b8\u00b5\u001a3\u00daj\u001c\u00ber~\u00ae7.\u00fa\u00d7\u0095\u00f2\u00ca\u00c0\u00b6\u00dc/\u001e\u0097\u00de\u00daj2\u00a1S\u00b0\u00f1!\u00f0^\u0093\u00ee\u00a2w\u00b9\u0087\u00f1\u00ab\u009bse\u00eb&A+\u00c2\u00af\u00b9N\u00b5\u00e6\u0084\u00e6c\u000f\u00fd\u0097w6\u00895\u00ab\u00fb\u00c4\u0080\u00b2Q\u0001\u00bf\u00f5$\bH\u009a]\u0097\u00cbZ\u00ab(f\u00f7\u00c6,\u00ac\u000b\u00df\u00d0\u00a1\u008f\u00a7r\u00007x,\u0098 \u008c\u00e9\u0097\u007f\u0001y\u000e\u00d1zJ\u00aa\u00fd\u00b2m\u00aa\u00a1!\u00c7\u0013v\u00b0\u00ac\u008f\u00b7R7\u00ca\u0083\u00df*.0\u0010\u00f3\u00b3\u00b8\u001b\u00a9(\u008d\u0011\u0001\u0083\u00dc\u000e\u0080\u00a7\u00e60";
                var8_6 = "k)\u00cd\u00c9\u00e9\t\u00af\u008c\u0085\u00ea\u00f99\u000b<\u0080m ?\u0010N\u00c24`\\\u00ff\u00c9\u00a3\u00cb0H |\u00e7jJ*\u0014\u0093\u00a2s\u00d5\u0002\u00be\u00e0\u00b49\u00edF\u001a\u0010\u0080\r\u00f5_\u00ca\u00e6\u00cc\u00d0\u00ed`\u000b_\u00a3\u00a3\u00b1\u00f3p\u0019\u00dc\u00ed\u0005\u00db\u001bY6V[\u00b8\u00b5\u001a3\u00daj\u001c\u00ber~\u00ae7.\u00fa\u00d7\u0095\u00f2\u00ca\u00c0\u00b6\u00dc/\u001e\u0097\u00de\u00daj2\u00a1S\u00b0\u00f1!\u00f0^\u0093\u00ee\u00a2w\u00b9\u0087\u00f1\u00ab\u009bse\u00eb&A+\u00c2\u00af\u00b9N\u00b5\u00e6\u0084\u00e6c\u000f\u00fd\u0097w6\u00895\u00ab\u00fb\u00c4\u0080\u00b2Q\u0001\u00bf\u00f5$\bH\u009a]\u0097\u00cbZ\u00ab(f\u00f7\u00c6,\u00ac\u000b\u00df\u00d0\u00a1\u008f\u00a7r\u00007x,\u0098 \u008c\u00e9\u0097\u007f\u0001y\u000e\u00d1zJ\u00aa\u00fd\u00b2m\u00aa\u00a1!\u00c7\u0013v\u00b0\u00ac\u008f\u00b7R7\u00ca\u0083\u00df*.0\u0010\u00f3\u00b3\u00b8\u001b\u00a9(\u008d\u0011\u0001\u0083\u00dc\u000e\u0080\u00a7\u00e60".length();
                var5_7 = 16;
                var4_8 = -1;
lbl20:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kG$uo.dtH(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "?\u008ag\u00a1)\t\u0012\u0096\u00ce\u00abUg\u00fe \u00a6\u0014\u008d\u00f9\u0016\u00f1\u0006\u0099\u0000\u00b42\u00bdo.\u00ad\u0080\u00d7\u0015 \u0098\nS\u00eca\u0085\u00f8G\u0002\u0083\u001b\u009f\u00e1\u00a9\u008c\u001ag\u00ec\u000eOc\u00b3f\u00b9\u00a4\u0011\u0091#.\u00bb\u00d7\u008b";
                    var8_6 = "?\u008ag\u00a1)\t\u0012\u0096\u00ce\u00abUg\u00fe \u00a6\u0014\u008d\u00f9\u0016\u00f1\u0006\u0099\u0000\u00b42\u00bdo.\u00ad\u0080\u00d7\u0015 \u0098\nS\u00eca\u0085\u00f8G\u0002\u0083\u001b\u009f\u00e1\u00a9\u008c\u001ag\u00ec\u000eOc\u00b3f\u00b9\u00a4\u0011\u0091#.\u00bb\u00d7\u008b".length();
                    var5_7 = 32;
                    var4_8 = -1;
lbl34:
                    // 2 sources

                    while (true) {
                        v6 = ++var4_8;
                        v4 = var6_5.substring(v6, v6 + var5_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kG$uo.dtH(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var10_9 = var2_1.doFinal(v4.getBytes("ISO-8859-1"));
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
        kG$uo.HUAzB = var9_3;
        kG$uo.cKQLl = new String[8];
    }

    public String toString() {
        long l2 = rIkYq ^ 0x32E9FE467FB3L;
        String string = String.valueOf(this.yaziN);
        float f2 = this.JdXmY;
        float f3 = this.IhFas;
        float f4 = this.AmqHG;
        float f5 = this.bxwjq;
        float f6 = this.jNWXI;
        String string2 = String.valueOf(this.xLjKC);
        String string3 = String.valueOf(this.qJGym);
        return (String)((Object)kG$uo.dtK("k", (int)7241, (long)(0x3EE5DC9458DA9502L ^ l2))) + string3 + (String)((Object)kG$uo.dtK("k", (int)16824, (long)(0x9801424DB9748F4L ^ l2))) + string2 + (String)((Object)kG$uo.dtK("k", (int)11976, (long)(0x1D76D69D58D72785L ^ l2))) + f6 + (String)((Object)kG$uo.dtK("k", (int)12782, (long)(0x714A880551BC38A4L ^ l2))) + f5 + (String)((Object)kG$uo.dtK("k", (int)29100, (long)(0x4DDDBCEC51F078E4L ^ l2))) + f4 + (String)((Object)kG$uo.dtK("k", (int)11552, (long)(0x50ACD390C8F3A46FL ^ l2))) + f3 + (String)((Object)kG$uo.dtK("k", (int)31604, (long)(0x4A38F3E881EF23AL ^ l2))) + f2 + (String)((Object)kG$uo.dtK("k", (int)24358, (long)(0x1BD756354E49D66FL ^ l2))) + string + ")";
    }

    private static String dtH(byte[] byArray) {
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

    private static String dtI(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x12B2;
        if (cKQLl[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])BEGkq.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    BEGkq.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kG$uo", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = HUAzB[n3].getBytes("ISO-8859-1");
            kG$uo.cKQLl[n3] = kG$uo.dtH(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return cKQLl[n3];
    }

    private static Object dtJ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kG$uo.dtI(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite dtK(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kG$uo" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public kG$uo dty(MatrixStack matrixStack) {
        this.qJGym = matrixStack;
        return this;
    }

    public kG$uo dtE(float f2) {
        this.JdXmY = f2;
        return this;
    }

    public kG$uo dtA(float f2) {
        this.jNWXI = f2;
        return this;
    }

    public kG$uo dtC(float f2) {
        this.AmqHG = f2;
        return this;
    }

    public kG$uo dtz(Matrix3x2fStack matrix3x2fStack) {
        this.xLjKC = matrix3x2fStack;
        return this;
    }

    public kG$uo dtB(float f2) {
        this.bxwjq = f2;
        return this;
    }

    public kG$uo dtD(float f2) {
        this.IhFas = f2;
        return this;
    }

    public kG$uo dtF(mG mG2) {
        this.yaziN = mG2;
        return this;
    }

    public kG dtG() {
        return new kG(this.qJGym, this.xLjKC, this.jNWXI, this.bxwjq, this.AmqHG, this.IhFas, this.JdXmY, this.yaziN);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kG$uo.class, "dtJ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

