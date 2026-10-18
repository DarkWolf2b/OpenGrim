/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderSystem
 *  com.mojang.blaze3d.textures.TextureFormat
 *  net.minecraft.class_276
 *  net.minecraft.class_6367
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.TextureFormat;
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
import net.minecraft.class_276;
import net.minecraft.class_6367;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lt;
import sixtwo.mU;
import sixtwo.rD;

public class ls
extends class_6367 {
    private static final int GQfle;
    private final boolean ClHck;
    private static final long PmtPt;
    private static final String[] cyUMW;
    private static final String[] iEJId;
    private static final Map rvbpg;
    private static final long[] hIIsj;
    private static final Integer[] UJsAs;
    private static final Map xzudJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static CallSite caS(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ls" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite caV(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ls" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     */
    public void caM() {
        block14: {
            block15: {
                block13: {
                    var1_1 = ls.PmtPt ^ 111240305405651L;
                    var3_2 = lt.cbc();
                    try {
                        try {
                            v0 = this;
                            if (var3_2 != null) break block13;
                            if (v0.method_30277() == null) break block14;
                        }
                        catch (IllegalArgumentException v1) {
                            throw ls.caO(v1);
                        }
                        v0 = this;
                    }
                    catch (IllegalArgumentException v2) {
                        throw ls.caO(v2);
                    }
                }
                try {
                    try {
                        if (var3_2 != null) break block15;
                        if (v0.field_1478) {
                        }
                        ** GOTO lbl37
                    }
                    catch (IllegalArgumentException v3) {
                        throw ls.caO(v3);
                    }
                    v0 = this;
                }
                catch (IllegalArgumentException v4) {
                    throw ls.caO(v4);
                }
            }
            try {
                block16: {
                    try {
                        if (v0.method_30278() == null) break block16;
                        RenderSystem.getDevice().createCommandEncoder().clearColorAndDepthTextures(this.method_30277(), 0, this.method_30278(), 1.0);
                        if (var3_2 == null) break block14;
                    }
                    catch (IllegalArgumentException v5) {
                        throw ls.caO(v5);
                    }
                }
                RenderSystem.getDevice().createCommandEncoder().clearColorTexture(this.method_30277(), 0);
            }
            catch (IllegalArgumentException v6) {
                throw ls.caO(v6);
            }
        }
    }

    public void caK() {
        block10: {
            ls ls2;
            int n;
            int n2;
            block8: {
                long l = PmtPt ^ 0x5C37E1B799B6L;
                class_276 class_2762 = rD.dlmvG.method_1522();
                n2 = class_2762.field_1482;
                n = class_2762.field_1481;
                iS[] iSArray = lt.cbc();
                try {
                    block9: {
                        try {
                            try {
                                try {
                                    ls2 = this;
                                    if (iSArray != null) break block8;
                                    if (ls2.field_1482 != n2) break block9;
                                }
                                catch (IllegalArgumentException illegalArgumentException) {
                                    throw ls.caO(illegalArgumentException);
                                }
                                ls2 = this;
                                if (iSArray != null) break block8;
                            }
                            catch (IllegalArgumentException illegalArgumentException) {
                                throw ls.caO(illegalArgumentException);
                            }
                            if (ls2.field_1481 == n) break block10;
                        }
                        catch (IllegalArgumentException illegalArgumentException) {
                            throw ls.caO(illegalArgumentException);
                        }
                    }
                    ls2 = this;
                }
                catch (IllegalArgumentException illegalArgumentException) {
                    throw ls.caO(illegalArgumentException);
                }
            }
            ls2.method_1234(n2, n);
        }
    }

    private static int caT(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1B86;
        if (UJsAs[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = hIIsj[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])xzudJ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    xzudJ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ls", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ls.UJsAs[n2] = n3;
        }
        return UJsAs[n2];
    }

    private static String caP(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    public void caL(class_276 class_2762) {
        block10: {
            ls ls2;
            int n;
            int n2;
            block8: {
                long l = PmtPt ^ 0x5ACEA8490BB1L;
                n2 = class_2762.field_1482;
                n = class_2762.field_1481;
                iS[] iSArray = lt.cbc();
                try {
                    block9: {
                        try {
                            try {
                                try {
                                    ls2 = this;
                                    if (iSArray != null) break block8;
                                    if (ls2.field_1482 != n2) break block9;
                                }
                                catch (IllegalArgumentException illegalArgumentException) {
                                    throw ls.caO(illegalArgumentException);
                                }
                                ls2 = this;
                                if (iSArray != null) break block8;
                            }
                            catch (IllegalArgumentException illegalArgumentException) {
                                throw ls.caO(illegalArgumentException);
                            }
                            if (ls2.field_1481 == n) break block10;
                        }
                        catch (IllegalArgumentException illegalArgumentException) {
                            throw ls.caO(illegalArgumentException);
                        }
                    }
                    ls2 = this;
                }
                catch (IllegalArgumentException illegalArgumentException) {
                    throw ls.caO(illegalArgumentException);
                }
            }
            ls2.method_1234(n2, n);
        }
    }

    private static int caN(int n, int n2) {
        int n3;
        block5: {
            long l = PmtPt ^ 0x3E8099C06A24L;
            int n4 = 1;
            iS[] iSArray = lt.cbc();
            for (int i = Math.min(n, n2); i > 1; i >>= 1) {
                try {
                    try {
                        n3 = n4++;
                        if (iSArray != null || iSArray != null) break block5;
                    }
                    catch (IllegalArgumentException illegalArgumentException) {
                        throw ls.caO(illegalArgumentException);
                    }
                    if (n3 >= ls.caV("b", (int)32733, (long)(0x2BEB23F5B3452296L ^ l))) break;
                    continue;
                }
                catch (IllegalArgumentException illegalArgumentException) {
                    throw ls.caO(illegalArgumentException);
                }
            }
            n3 = n4;
        }
        return n3;
    }

    private static int caU(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ls.caT(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static String caQ(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0xEB8;
        if (iEJId[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])rvbpg.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    rvbpg.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ls", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = cyUMW[n2].getBytes("ISO-8859-1");
            ls.iEJId[n2] = ls.caP(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return iEJId[n2];
    }

    private static Object caR(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ls.caQ(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static IllegalArgumentException caO(IllegalArgumentException illegalArgumentException) {
        return illegalArgumentException;
    }

    public ls(boolean bl) {
        long l = PmtPt ^ 0x757B2FC9CEFEL;
        super(mU.cpM((int)ls.caV("b", (int)295, (long)(0x705E49AC4BD8F8B5L ^ l))), rD.dlmvG.method_22683().method_4489(), rD.dlmvG.method_22683().method_4506(), true);
        this.ClHck = bl;
        if (bl) {
            this.method_1234(this.field_1482, this.field_1481);
        }
    }

    public ls() {
        this(false);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        ls.PmtPt = gb.aYR(-6135898123433329992L, 7388474228343281349L, MethodHandles.lookup().lookupClass()).a(53017075674439L);
                        ls.rvbpg = new HashMap<K, V>(13);
                        var11 = ls.PmtPt ^ 40175481128179L;
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
                        var20_3 = new String[4];
                        var18_4 = 0;
                        var17_5 = "\u00dc-)\u00c5&\u0089!\u00e6\u0087\u00abNY\u00d4D3\u008b\u00e0D\u00f3.\u00f8\u009aU\u00ee\u00cfN@\u0005\u0099\u00d6\u0014\u001d@\u00b1C\u00bc\u0003\u00aa\u00bdDG\u0080\u0090R\u00f5\u00b4\u0098}\u00b4\u00bd\u00c4uh\u00bf\u00af1f\u00dcA\u0089\rZ\u00cd\u0089\u00c6\u00bco\u00dd\r\u0002{\u008c>\u0019\u00ea`\u00d4N\u0090\u0007\u0081\u0016\u00fdV\u009a'\u00ffc\u009a\u00aa\u009f\u00b0\u009fm@\u00f3\u00b4";
                        var19_6 = "\u00dc-)\u00c5&\u0089!\u00e6\u0087\u00abNY\u00d4D3\u008b\u00e0D\u00f3.\u00f8\u009aU\u00ee\u00cfN@\u0005\u0099\u00d6\u0014\u001d@\u00b1C\u00bc\u0003\u00aa\u00bdDG\u0080\u0090R\u00f5\u00b4\u0098}\u00b4\u00bd\u00c4uh\u00bf\u00af1f\u00dcA\u0089\rZ\u00cd\u0089\u00c6\u00bco\u00dd\r\u0002{\u008c>\u0019\u00ea`\u00d4N\u0090\u0007\u0081\u0016\u00fdV\u009a'\u00ffc\u009a\u00aa\u009f\u00b0\u009fm@\u00f3\u00b4".length();
                        var16_7 = 32;
                        var15_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl25:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = ls.caP(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u0091\u0088\u00a8\u00ffn'*r\u00a9\u00c9\u008f\u00ce\u00e6\u008c\u0091\u00b9 \u001c\u0080\u0013\u008e{Fvk\u00abu\u00d9,j\u00d3\u0000\u0087\u00ads\u0087\u000b\u0095\u00a9C\u0081\u0005T\ricD\\\u00f3";
                            var19_6 = "\u0091\u0088\u00a8\u00ffn'*r\u00a9\u00c9\u008f\u00ce\u00e6\u008c\u0091\u00b9 \u001c\u0080\u0013\u008e{Fvk\u00abu\u00d9,j\u00d3\u0000\u0087\u00ads\u0087\u000b\u0095\u00a9C\u0081\u0005T\ricD\\\u00f3".length();
                            var16_7 = 16;
                            var15_8 = -1;
lbl34:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl39:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = ls.caP(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
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
                ls.cyUMW = var20_3;
                ls.iEJId = new String[4];
                ls.xzudJ = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[5];
                var3_13 = 0;
                var4_14 = "\u0082\"p:\u00ca\u009ex \u00db*[\u008b\u0088\u009f\u00e7\u009b\u00ca\u00ffVV\u00a5.\u0093<";
                var5_15 = "\u0082\"p:\u00ca\u009ex \u00db*[\u008b\u0088\u009f\u00e7\u009b\u00ca\u00ffVV\u00a5.\u0093<".length();
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
                    var4_14 = "`N\u00f3\u001a\u00d7\u00f5\u008f\u0086kZU\"\u00e7\u00f0uO";
                    var5_15 = "`N\u00f3\u001a\u00d7\u00f5\u008f\u0086kZU\"\u00e7\u00f0uO".length();
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
        ls.hIIsj = var6_12;
        ls.UJsAs = new Integer[5];
        ls.GQfle = (int)ls.caV("b", (int)13614, (long)(var11 ^ 8280240620009785008L));
    }

    public void method_1231(int n, int n2) {
        block27: {
            ls ls2;
            int n3;
            long l;
            block25: {
                iS[] iSArray;
                block26: {
                    int n4;
                    block22: {
                        block24: {
                            block23: {
                                block21: {
                                    int n5;
                                    block19: {
                                        block20: {
                                            l = PmtPt ^ 0xEED7C769251L;
                                            iSArray = lt.cbc();
                                            try {
                                                try {
                                                    n5 = this.ClHck;
                                                    if (iSArray != null) break block19;
                                                    if (n5 != 0) break block20;
                                                }
                                                catch (IllegalArgumentException illegalArgumentException) {
                                                    throw ls.caO(illegalArgumentException);
                                                }
                                                super.method_1231(n, n2);
                                                return;
                                            }
                                            catch (IllegalArgumentException illegalArgumentException) {
                                                throw ls.caO(illegalArgumentException);
                                            }
                                        }
                                        RenderSystem.assertOnRenderThread();
                                        n5 = RenderSystem.getDevice().getMaxTextureSize();
                                    }
                                    n4 = n5;
                                    try {
                                        n3 = n;
                                        if (iSArray != null) break block21;
                                        if (n3 <= 0) break block22;
                                    }
                                    catch (IllegalArgumentException illegalArgumentException) {
                                        throw ls.caO(illegalArgumentException);
                                    }
                                    n3 = n;
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block23;
                                        if (n3 > n4) break block22;
                                    }
                                    catch (IllegalArgumentException illegalArgumentException) {
                                        throw ls.caO(illegalArgumentException);
                                    }
                                    n3 = n2;
                                }
                                catch (IllegalArgumentException illegalArgumentException) {
                                    throw ls.caO(illegalArgumentException);
                                }
                            }
                            try {
                                if (iSArray != null) break block24;
                                if (n3 <= 0) break block22;
                            }
                            catch (IllegalArgumentException illegalArgumentException) {
                                throw ls.caO(illegalArgumentException);
                            }
                            n3 = n2;
                        }
                        try {
                            if (iSArray != null) break block25;
                            if (n3 <= n4) break block26;
                        }
                        catch (IllegalArgumentException illegalArgumentException) {
                            throw ls.caO(illegalArgumentException);
                        }
                    }
                    int n6 = n4;
                    int n7 = n2;
                    int n8 = n;
                    throw new IllegalArgumentException((String)((Object)ls.caS("j", (int)12057, (long)(0x6A066328E5EB1F1BL ^ l))) + n8 + "x" + n7 + (String)((Object)ls.caS("j", (int)2472, (long)(0x2788E673AA8C39A9L ^ l))) + n6 + ")");
                }
                try {
                    this.field_1482 = n;
                    this.field_1481 = n2;
                    ls2 = this;
                    if (iSArray != null) break block27;
                    n3 = ls2.field_1478 ? 1 : 0;
                }
                catch (IllegalArgumentException illegalArgumentException) {
                    throw ls.caO(illegalArgumentException);
                }
            }
            try {
                if (n3 != 0) {
                    this.field_56739 = RenderSystem.getDevice().createTexture(this.field_56738 + (String)((Object)ls.caS("j", (int)30517, (long)(0x43749C3AAB4EC736L ^ l))), (int)ls.caV("b", (int)15875, (long)(0x5BDAFB21F8949B39L ^ l)), TextureFormat.DEPTH32, n, n2, 1, 1);
                    this.field_60568 = RenderSystem.getDevice().createTextureView(this.field_56739);
                }
            }
            catch (IllegalArgumentException illegalArgumentException) {
                throw ls.caO(illegalArgumentException);
            }
            this.field_1475 = RenderSystem.getDevice().createTexture(this.field_56738 + (String)((Object)ls.caS("j", (int)9586, (long)(0x69DD454C71409572L ^ l))), (int)ls.caV("b", (int)375, (long)(0x7A723BA793992448L ^ l)), TextureFormat.RGBA8, n, n2, 1, ls.caN(n, n2));
            ls2 = this;
        }
        ls2.field_60567 = RenderSystem.getDevice().createTextureView(this.field_1475);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ls.class, "caR", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(ls.class, "caU", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
