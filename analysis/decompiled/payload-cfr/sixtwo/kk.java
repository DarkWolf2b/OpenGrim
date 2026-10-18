/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  com.mojang.blaze3d.textures.GpuTexture
 *  net.minecraft.class_276
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.textures.GpuTexture;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.nio.FloatBuffer;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_276;
import sixtwo.gb;
import sixtwo.jL;
import sixtwo.jo;
import sixtwo.kR;
import sixtwo.kk$uf;
import sixtwo.kn;
import sixtwo.ls;
import sixtwo.lt;
import sixtwo.lu;
import sixtwo.rD;

public final class kk {
    private static final ls jvICx;
    private static final ls VfaRL;
    private static final ls zBYfN;
    private static final ls Nuddf;
    private static final kk$uf xOjZJ;
    private static final kk$uf KRReU;
    private static String RgAjr;
    private static final long mwola;
    private static final String[] hFFWl;
    private static final String[] sIrhS;
    private static final Map ZwhFz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static void bPM(class_276 class_2762, ls ls2, float f, float f2, kk$uf kk$uf) {
        FloatBuffer floatBuffer = kk$uf.dsw(f);
        jvICx.caL(class_2762);
        kn.bQq(kR.jnQZa, (class_276)jvICx, renderPass -> {
            long l = mwola ^ 0x1EFF68459469L;
            renderPass.bindTexture((String)((Object)kk.bPZ("j", (int)23670, (long)(0xA30172678DC6022L ^ l))), class_2762.method_71639(), lt.caX());
            jL.rPrcM.bJl();
            jL.rPrcM.bJr((String)((Object)kk.bPZ("j", (int)29754, (long)(0x536683E86DD486CL ^ l))), 1.0f / (float)class_2762.field_1482, 1.0f / (float)class_2762.field_1481);
            jL.rPrcM.bJq((String)((Object)kk.bPZ("j", (int)12799, (long)(0x3BA87E53B4F8DAEL ^ l))), f);
            jL.rPrcM.bJr((String)((Object)kk.bPZ("j", (int)15464, (long)(0x725D0A2E8AFE0035L ^ l))), f2, 0.0f);
            jL.rPrcM.bJy((String)((Object)kk.bPZ("j", (int)16951, (long)(0x71F067F79C497E62L ^ l))), floatBuffer);
        });
        ls2.caL(class_2762);
        kn.bQq(kR.jnQZa, (class_276)ls2, renderPass -> {
            long l = mwola ^ 0x10E082A9A98EL;
            renderPass.bindTexture((String)((Object)kk.bPZ("j", (int)12458, (long)(0x1084828A3578B11AL ^ l))), jvICx.method_71639(), lt.caX());
            jL.rPrcM.bJl();
            jL.rPrcM.bJr((String)((Object)kk.bPZ("j", (int)7191, (long)(0x22DC1A23DFA1DA2L ^ l))), 1.0f / (float)class_2762.field_1482, 1.0f / (float)class_2762.field_1481);
            jL.rPrcM.bJq((String)((Object)kk.bPZ("j", (int)3307, (long)(0x4C368D2DA7760D5CL ^ l))), f);
            jL.rPrcM.bJr((String)((Object)kk.bPZ("j", (int)10735, (long)(0x3B8A3E3CAB3BA854L ^ l))), 0.0f, f2);
            jL.rPrcM.bJy((String)((Object)kk.bPZ("j", (int)4067, (long)(0x601837502CEA0E57L ^ l))), floatBuffer);
        });
    }

    private static MatchException bPV(MatchException matchException) {
        return matchException;
    }

    private static class_276 bPI(class_276 class_2762) {
        class_276 class_2763;
        block20: {
            block21: {
                class_276 class_2764;
                String string;
                block18: {
                    block19: {
                        class_276 class_2765;
                        block16: {
                            long l = mwola ^ 0x5CD85786C533L;
                            class_276 class_2766 = jo.bEi();
                            string = kk.bPU();
                            class_276 class_2767 = jo.bEj();
                            try {
                                block17: {
                                    try {
                                        try {
                                            try {
                                                class_2765 = class_2766;
                                                if (string == null) break block16;
                                                if (class_2765 != null) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw kk.bPV(matchException);
                                            }
                                            class_2764 = class_2767;
                                            if (string == null) break block18;
                                        }
                                        catch (MatchException matchException) {
                                            throw kk.bPV(matchException);
                                        }
                                        if (class_2764 == null) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw kk.bPV(matchException);
                                    }
                                }
                                class_2765 = kk.bPJ(class_2762, class_2766, class_2767);
                            }
                            catch (MatchException matchException) {
                                throw kk.bPV(matchException);
                            }
                        }
                        return class_2765;
                    }
                    class_2764 = jo.bEl();
                }
                class_276 class_2768 = class_2764;
                try {
                    try {
                        try {
                            try {
                                class_2763 = class_2768;
                                if (string == null) break block20;
                                if (class_2763 == null) break block21;
                            }
                            catch (MatchException matchException) {
                                throw kk.bPV(matchException);
                            }
                            class_2763 = class_2768;
                            if (string == null) break block20;
                        }
                        catch (MatchException matchException) {
                            throw kk.bPV(matchException);
                        }
                        if (class_2763.method_30277() == null) break block21;
                    }
                    catch (MatchException matchException) {
                        throw kk.bPV(matchException);
                    }
                    return class_2768;
                }
                catch (MatchException matchException) {
                    throw kk.bPV(matchException);
                }
            }
            class_2763 = kk.bPJ(class_2762, jo.bEk(), null);
        }
        return class_2763;
    }

    public static class_276 bPO() {
        return zBYfN;
    }

    public static void bPT(String string) {
        RgAjr = string;
    }

    private static void bPL(class_276 class_2762, float f, float f2) {
        kk.bPM(class_2762, zBYfN, f, f2, KRReU);
    }

    private static float bPP(float f, float f2) {
        double d = 1.0 / Math.sqrt(Math.PI * 2 * (double)(f2 * f2));
        return (float)(d * Math.exp((double)(-(f * f)) / (2.0 * (double)(f2 * f2))));
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private static void bPK(RenderPipeline renderPipeline, class_276 class_2762) {
        class_276 class_2763;
        block7: {
            long l = mwola ^ 0x7D0B8D0BFBEL;
            String string = kk.bPU();
            try {
                try {
                    if (renderPipeline == null) return;
                    class_2763 = class_2762;
                    if (string == null) break block7;
                }
                catch (MatchException matchException) {
                    throw kk.bPV(matchException);
                }
                if (class_2763 == null) return;
            }
            catch (MatchException matchException) {
                throw kk.bPV(matchException);
            }
            class_2763 = class_2762;
        }
        try {
            if (class_2763.method_30277() == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw kk.bPV(matchException);
        }
        kn.bQq(renderPipeline, (class_276)Nuddf, renderPass -> {
            long l = mwola ^ 0x7BC7AF0813B4L;
            renderPass.bindTexture((String)((Object)kk.bPZ("j", (int)12458, (long)(0x1084E9AD18D90B20L ^ l))), class_2762.method_71639(), lt.caX());
            jL.TruIk.bJl();
        });
    }

    private static String bPX(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x235D;
        if (sIrhS[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])ZwhFz.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ZwhFz.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kk", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = hFFWl[n2].getBytes("ISO-8859-1");
            kk.sIrhS[n2] = kk.bPW(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return sIrhS[n2];
    }

    private static Object bPY(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = kk.bPX(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite bPZ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kk" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static class_276 bPJ(class_276 class_2762, class_276 class_2763, class_276 class_2764) {
        GpuTexture gpuTexture;
        block30: {
            block31: {
                String string;
                block26: {
                    block27: {
                        class_276 class_2765;
                        block28: {
                            block29: {
                                block24: {
                                    block25: {
                                        long l = mwola ^ 0x2524E3B97E18L;
                                        string = kk.bPU();
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            class_2765 = class_2763;
                                                            if (string == null) break block24;
                                                            if (class_2765 == null) break block25;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw kk.bPV(matchException);
                                                        }
                                                        class_2765 = class_2763;
                                                        if (string == null) break block24;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw kk.bPV(matchException);
                                                    }
                                                    if (class_2765 == class_2762) break block25;
                                                }
                                                catch (MatchException matchException) {
                                                    throw kk.bPV(matchException);
                                                }
                                                gpuTexture = class_2763.method_30277();
                                                if (string == null) break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw kk.bPV(matchException);
                                            }
                                            if (gpuTexture != null) break block27;
                                        }
                                        catch (MatchException matchException) {
                                            throw kk.bPV(matchException);
                                        }
                                    }
                                    class_2765 = class_2764;
                                }
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    if (string == null) break block28;
                                                    if (class_2765 == null) break block29;
                                                }
                                                catch (MatchException matchException) {
                                                    throw kk.bPV(matchException);
                                                }
                                                class_2765 = class_2764;
                                                if (string == null) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw kk.bPV(matchException);
                                            }
                                            if (class_2765 == class_2762) break block29;
                                        }
                                        catch (MatchException matchException) {
                                            throw kk.bPV(matchException);
                                        }
                                        gpuTexture = class_2764.method_30277();
                                        if (string == null) break block26;
                                    }
                                    catch (MatchException matchException) {
                                        throw kk.bPV(matchException);
                                    }
                                    if (gpuTexture != null) break block27;
                                }
                                catch (MatchException matchException) {
                                    throw kk.bPV(matchException);
                                }
                            }
                            class_2765 = class_2762;
                        }
                        return class_2765;
                    }
                    Nuddf.caL(class_2762);
                    gpuTexture = Nuddf.method_30277();
                }
                try {
                    try {
                        if (string == null) break block30;
                        if (gpuTexture != null) break block31;
                    }
                    catch (MatchException matchException) {
                        throw kk.bPV(matchException);
                    }
                    return class_2762;
                }
                catch (MatchException matchException) {
                    throw kk.bPV(matchException);
                }
            }
            gpuTexture = class_2762.method_30277();
        }
        lu.cbf(gpuTexture, Nuddf.method_30277(), 0, 0, 0, 0, 0, class_2762.field_1482, class_2762.field_1481);
        kk.bPK(kR.cSPla, class_2763);
        kk.bPK(kR.VkokZ, class_2764);
        return Nuddf;
    }

    private static String bPW(byte[] byArray) {
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

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kk.mwola = gb.aYR(8821854909566432664L, -1788264787193477957L, MethodHandles.lookup().lookupClass()).a(156986702028158L);
                kk.ZwhFz = new HashMap<K, V>(13);
                kk.bPT("TtXFt");
                var0 = kk.mwola ^ 58735732727662L;
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
                var9_3 = new String[10];
                var7_4 = 0;
                var6_5 = "@\u0001!\u001f-\u00cd\u00c9K\u0084W\u00dc\u008f\u00fa\u00d6\u0091\u00f5\u0018\u0005[Z\u00aa\t\u000e\u00d2\u00b4\u00cb\u00eb\u00d8\n\u0091\u009fu|\u00f0\u00f7'\u00e79R\u00f3z J\u00cc;`\u00d3k]\u0085\u0013\u0082\t\u0098\u00fa\u007f\u00b7d\u00aelk\u00a7Y\u001b$\u00a2\u00c2\u00b89\u001e\u00d6\u00d0\u0093S \u00f0\u001f\u00c33\u00ac\u00a6\u00e5AZ^04\u00af\u00c4\u00e9i\u0010\u0000\u00e2\u008e%\u00deU\u0089\u00bb\u00dc\u00f0\u00bf2\u00c6Vb\u0010\u0094gi2\u00b7H\u00dd\u00aeve\u00ce\u00d5OL\u00028\u0010\u009e\u00e0\u00dbj\u008c\u00d8x\u00f2\u00a4|!\u00fd\u0095&'\u00c9\u0010\u00a9\u00a5\u0080\u000b\u0085\u00f7\u00df\u00cc\u00b5d\u00138\u00d6\u00df\u00e5v \u0095s\u0099\u00c7\u00d7#\u00ea0\u00a7\u00f9\u00e9\u00b5]\u00db\u00b7\u00ce-\u00a9\u00cc~#\u00ac2\u008d>\u00d8*\u00e5G\u00d6\u00db\u00ac";
                var8_6 = "@\u0001!\u001f-\u00cd\u00c9K\u0084W\u00dc\u008f\u00fa\u00d6\u0091\u00f5\u0018\u0005[Z\u00aa\t\u000e\u00d2\u00b4\u00cb\u00eb\u00d8\n\u0091\u009fu|\u00f0\u00f7'\u00e79R\u00f3z J\u00cc;`\u00d3k]\u0085\u0013\u0082\t\u0098\u00fa\u007f\u00b7d\u00aelk\u00a7Y\u001b$\u00a2\u00c2\u00b89\u001e\u00d6\u00d0\u0093S \u00f0\u001f\u00c33\u00ac\u00a6\u00e5AZ^04\u00af\u00c4\u00e9i\u0010\u0000\u00e2\u008e%\u00deU\u0089\u00bb\u00dc\u00f0\u00bf2\u00c6Vb\u0010\u0094gi2\u00b7H\u00dd\u00aeve\u00ce\u00d5OL\u00028\u0010\u009e\u00e0\u00dbj\u008c\u00d8x\u00f2\u00a4|!\u00fd\u0095&'\u00c9\u0010\u00a9\u00a5\u0080\u000b\u0085\u00f7\u00df\u00cc\u00b5d\u00138\u00d6\u00df\u00e5v \u0095s\u0099\u00c7\u00d7#\u00ea0\u00a7\u00f9\u00e9\u00b5]\u00db\u00b7\u00ce-\u00a9\u00cc~#\u00ac2\u008d>\u00d8*\u00e5G\u00d6\u00db\u00ac".length();
                var5_7 = 16;
                var4_8 = -1;
lbl21:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kk.bPW(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u007f\u00b9\u001fI\u007ftJi\u00b8\u00b8>\u00e7\u00ecs\u00a2\n\u001a\u00a5\u00c1\u00bd|\"\u00c3wCjh\u00bf\u00ba\u00e0f\u00d5 \u0087\u001b\u0086\u0019\u0096\u00d5\u00a1'8\u00a4Qn\u00c9*\u0019M\u00e3\u00e89\u0015sq\f\u00b0\u00cfdBb\u007f+\u00f18";
                    var8_6 = "\u007f\u00b9\u001fI\u007ftJi\u00b8\u00b8>\u00e7\u00ecs\u00a2\n\u001a\u00a5\u00c1\u00bd|\"\u00c3wCjh\u00bf\u00ba\u00e0f\u00d5 \u0087\u001b\u0086\u0019\u0096\u00d5\u00a1'8\u00a4Qn\u00c9*\u0019M\u00e3\u00e89\u0015sq\f\u00b0\u00cfdBb\u007f+\u00f18".length();
                    var5_7 = 32;
                    var4_8 = -1;
lbl35:
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
lbl40:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kk.bPW(var10_9).intern();
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
lbl52:
                // 1 sources

                ** continue;
            }
        }
        kk.hFFWl = var9_3;
        kk.sIrhS = new String[10];
        kk.jvICx = new ls();
        kk.VfaRL = new ls();
        kk.zBYfN = new ls();
        kk.Nuddf = new ls();
        kk.xOjZJ = new kk$uf();
        kk.KRReU = new kk$uf();
    }

    /*
     * Unable to fully structure code
     */
    public static void bPH() {
        block29: {
            block27: {
                block28: {
                    block25: {
                        block26: {
                            block24: {
                                block22: {
                                    block23: {
                                        var0 = kk.mwola ^ 2148706168810L;
                                        var3_1 = rD.dlM();
                                        var2_2 = kk.bPU();
                                        var4_3 = var3_1.bjh();
                                        var5_4 = jo.bEh();
                                        try {
                                            try {
                                                v0 = var5_4;
                                                if (var2_2 == null) break block22;
                                                if (v0.method_30277() != null) break block23;
                                            }
                                            catch (MatchException v1) {
                                                throw kk.bPV(v1);
                                            }
                                            return;
                                        }
                                        catch (MatchException v2) {
                                            throw kk.bPV(v2);
                                        }
                                    }
                                    v0 = kk.bPI(var5_4);
                                }
                                var6_5 = v0;
                                try {
                                    v3 = var6_5;
                                    if (var2_2 == null) break block24;
                                    if (v3 != null) {
                                    }
                                    ** GOTO lbl38
                                }
                                catch (MatchException v4) {
                                    throw kk.bPV(v4);
                                }
                                v3 = var6_5;
                            }
                            try {
                                try {
                                    if (var2_2 == null) break block25;
                                    if (v3.method_30277() != null) break block26;
                                }
                                catch (MatchException v5) {
                                    throw kk.bPV(v5);
                                }
lbl38:
                                // 2 sources

                                return;
                            }
                            catch (MatchException v6) {
                                throw kk.bPV(v6);
                            }
                        }
                        v3 = var6_5;
                    }
                    try {
                        try {
                            try {
                                try {
                                    kk.bPM(v3, kk.VfaRL, var3_1.bjg(), var4_3, kk.xOjZJ);
                                    v7 = var3_1.bjm();
                                    v8 = 0.0f;
                                    if (var2_2 == null) break block27;
                                    if (v7 == v8) {
                                    }
                                    ** GOTO lbl75
                                }
                                catch (MatchException v9) {
                                    throw kk.bPV(v9);
                                }
                                kk.zBYfN.caL(var6_5);
                                v10 = kk.zBYfN.method_30277();
                                if (var2_2 == null) break block28;
                            }
                            catch (MatchException v11) {
                                throw kk.bPV(v11);
                            }
                            if (v10 == null) break block29;
                        }
                        catch (MatchException v12) {
                            throw kk.bPV(v12);
                        }
                        v10 = var6_5.method_30277();
                    }
                    catch (MatchException v13) {
                        throw kk.bPV(v13);
                    }
                }
                try {
                    lu.cbf(v10, kk.zBYfN.method_30277(), 0, 0, 0, 0, 0, var6_5.field_1482, var6_5.field_1481);
                    if (var2_2 != null) break block29;
lbl75:
                    // 2 sources

                    v7 = 32.0f;
                    v8 = (float)Math.pow(var3_1.bjm() / 100.0f, 0.4300000071525574);
                }
                catch (MatchException v14) {
                    throw kk.bPV(v14);
                }
            }
            var7_6 = v7 * v8;
            kk.bPL(var6_5, var7_6, var4_3);
        }
    }

    public static String bPU() {
        return RgAjr;
    }

    public static class_276 bPN() {
        return VfaRL;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kk.class, "bPY", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
