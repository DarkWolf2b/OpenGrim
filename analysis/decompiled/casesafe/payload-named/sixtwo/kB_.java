/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.texture.AbstractTexture
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.RotationAxis
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionfc
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import org.joml.Matrix4fc;
import org.joml.Quaternionfc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jI;
import sixtwo.jL;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.lF;
import sixtwo.lh;
import sixtwo.mG;

public final class kB {
    private static final float zDHsL = 1.5f;
    private static final kS gjoAf;
    private static float ViGYP;
    private static float aRpoV;
    private static float DyNKu;
    private static boolean OoDnB;
    private static iS[] PgIMH;
    private static final long ydRat;
    private static final String[] GnaPL;
    private static final String[] CvKvX;
    private static final Map kJuha;
    private static final long[] AiQKY;
    private static final Integer[] OUraq;
    private static final Map SyQMN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block16: {
            block15: {
                block14: {
                    block13: {
                        kB.ydRat = gb.aYR(-7885859841398095174L, -8548699133457943515L, MethodHandles.lookup().lookupClass()).a(220053362696368L);
                        kB.kJuha = new HashMap<K, V>(13);
                        kB.bSA(new iS[3]);
                        var11 = kB.ydRat ^ 29959417532715L;
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
                        var20_3 = new String[6];
                        var18_4 = 0;
                        var17_5 = "x\u008c\u00f3\f\u008b\u00bf\u00faP\u00f6\u0010\u0086J\u009e\u00d3o\u00e4\b\u00c0\u0004\u000f\u0003t$\u0002\u00eax\u009d\u00a5\u00cfi\u0003\u001f \u0005ykT=Y\u00ca\u009e\u00c5Z\u00aa\u00f2\u00ecp\u0015\u0018%2_M\u00ca\u00cc\\?\u009b\u00f0Ty\u00e3\u00c2\u0085\u009a _\u00b5H\u00f1\u008ej\u00d7(\u0000\u00fa\u00b3~\u00f0F[\u0089\u00c5Kt\u0006\u0095\u0084L\u009a\u0087\u00d3\u00df\u00c6fT\u00e6\u0091\u0010\b\u0093.\u0002\bU\u008bb`@/\u0091\u00a34m4";
                        var19_6 = "x\u008c\u00f3\f\u008b\u00bf\u00faP\u00f6\u0010\u0086J\u009e\u00d3o\u00e4\b\u00c0\u0004\u000f\u0003t$\u0002\u00eax\u009d\u00a5\u00cfi\u0003\u001f \u0005ykT=Y\u00ca\u009e\u00c5Z\u00aa\u00f2\u00ecp\u0015\u0018%2_M\u00ca\u00cc\\?\u009b\u00f0Ty\u00e3\u00c2\u0085\u009a _\u00b5H\u00f1\u008ej\u00d7(\u0000\u00fa\u00b3~\u00f0F[\u0089\u00c5Kt\u0006\u0095\u0084L\u009a\u0087\u00d3\u00df\u00c6fT\u00e6\u0091\u0010\b\u0093.\u0002\bU\u008bb`@/\u0091\u00a34m4".length();
                        var16_7 = 32;
                        var15_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block13;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = kB.bSD(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "b:rf\u00a9\u001a \u00a4\u00da\u0086\u00da\u00e0\u00fdL\u00a2\u00c0&\u008f\u0099\u00f9\u00dc\u00e64\u00f8\u00cb&\"\u00a6)\u0010\f~\u001b\u00ff\u00e0J\u0007\u00fc\u00b53 \u0005tq\u00e2\u0004\u00f4\u00a3\u009c\u00ec\u00ae\u001e\u00a2T0\u00c9\u00ad\u0096\u0090\u009f\u00adtr#R5p+\u0083\u00d7\u001f\u009ez";
                            var19_6 = "b:rf\u00a9\u001a \u00a4\u00da\u0086\u00da\u00e0\u00fdL\u00a2\u00c0&\u008f\u0099\u00f9\u00dc\u00e64\u00f8\u00cb&\"\u00a6)\u0010\f~\u001b\u00ff\u00e0J\u0007\u00fc\u00b53 \u0005tq\u00e2\u0004\u00f4\u00a3\u009c\u00ec\u00ae\u001e\u00a2T0\u00c9\u00ad\u0096\u0090\u009f\u00adtr#R5p+\u0083\u00d7\u001f\u009ez".length();
                            var16_7 = 40;
                            var15_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block13;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = kB.bSD(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block14;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
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
                kB.GnaPL = var20_3;
                kB.CvKvX = new String[6];
                kB.SyQMN = new HashMap<K, V>(13);
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
                var6_12 = new long[2];
                var3_13 = 0;
                var4_14 = "\u00f0\u0097\u00ff\u008a\u00f9d?\u0011\u00bd\u0088\u0014:>!~\u0082";
                var5_15 = "\u00f0\u0097\u00ff\u008a\u00f9d?\u0011\u00bd\u0088\u0014:>!~\u0082".length();
                var2_16 = 0;
                while (true) {
                    break block15;
                    break;
                }
lbl74:
                // 1 sources

                while (true) {
                    var6_12[v10] = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
                    if (var2_16 < var5_15) ** continue;
                    break block16;
                    break;
                }
            }
            var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
            v10 = var3_13++;
            var8_18 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            ** while (true)
        }
        kB.AiQKY = var6_12;
        kB.OUraq = new Integer[2];
        kB.gjoAf = kS.bVE().duk(lh.aApMr).duo(false).dul(false).dun(true).dup();
        kB.ViGYP = 1.0f;
        kB.DyNKu = 1.0f;
    }

    public static void bSw() {
        float f2;
        float f3;
        block15: {
            block16: {
                iS[] iSArray;
                block13: {
                    float f4;
                    block14: {
                        long l2 = ydRat ^ 0x3235024049E2L;
                        aRpoV = ViGYP;
                        ViGYP += DyNKu;
                        iSArray = kB.bSB();
                        try {
                            try {
                                float f5 = DyNKu - 25.0f;
                                f3 = f5 == 0.0f ? 0 : (f5 > 0.0f ? 1 : -1);
                                if (iSArray == null) break block13;
                                if (f3 <= 0) break block14;
                            }
                            catch (MatchException matchException) {
                                throw kB.bSC(matchException);
                            }
                            OoDnB = true;
                        }
                        catch (MatchException matchException) {
                            throw kB.bSC(matchException);
                        }
                    }
                    f3 = (f4 = DyNKu - -25.0f) == 0.0f ? 0 : (f4 < 0.0f ? -1 : 1);
                }
                try {
                    try {
                        if (iSArray == null) break block15;
                        if (f3 >= 0) break block16;
                    }
                    catch (MatchException matchException) {
                        throw kB.bSC(matchException);
                    }
                    OoDnB = false;
                }
                catch (MatchException matchException) {
                    throw kB.bSC(matchException);
                }
            }
            f3 = (float)OoDnB;
        }
        try {
            f2 = f3 != false ? DyNKu - 0.5f : DyNKu + 0.5f;
        }
        catch (MatchException matchException) {
            throw kB.bSC(matchException);
        }
        try {
            DyNKu = f2;
            if (iS.bwL() == null) {
                kB.bSA(new iS[5]);
            }
        }
        catch (MatchException matchException) {
            throw kB.bSC(matchException);
        }
    }

    public static iS[] bSB() {
        return PgIMH;
    }

    private static CallSite bSJ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kB" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static /* synthetic */ void bSz(AbstractTexture abstractTexture, RenderPass renderPass) {
        long l2 = ydRat ^ 0x5BB2DBC11864L;
        try {
            jL.SUknV.bJl();
            jL.SUknV.bJu((String)((Object)kB.bSG("q", (int)27761, (long)(0x7A049AB9311558A1L ^ l2))), jF.bHw());
            if (abstractTexture != null) {
                renderPass.bindTexture((String)((Object)kB.bSG("q", (int)27865, (long)(0x7A3F391E3A8580EL ^ l2))), abstractTexture.getGlTextureView(), abstractTexture.getSampler());
            }
        }
        catch (MatchException matchException) {
            throw kB.bSC(matchException);
        }
    }

    private static String bSD(byte[] byArray) {
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

    private static Throwable bSC(Throwable throwable) {
        return throwable;
    }

    private static int bSH(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3B4;
        if (OUraq[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = AiQKY[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])SyQMN.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    SyQMN.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kB", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            kB.OUraq[n3] = n4;
        }
        return OUraq[n3];
    }

    private static CallSite bSG(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kB" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Exception decompiling
     */
    private static AbstractTexture bSy(int var0) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private static String bSE(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x370;
        if (CvKvX[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])kJuha.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    kJuha.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kB", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = GnaPL[n3].getBytes("ISO-8859-1");
            kB.CvKvX[n3] = kB.bSD(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return CvKvX[n3];
    }

    private static int bSI(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = kB.bSH(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static void bSA(iS[] iSArray) {
        PgIMH = iSArray;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    public static void bSx(MatrixStack var0, Entity var1_1, mG var2_2, float var3_3, int var4_4) {
        block20: {
            var5_5 = kB.ydRat ^ 138533319396081L;
            var7_6 = kB.bSB();
            try {
                var0.push();
                var8_7 = var1_1.getLerpedPos(var3_3).add(0.0, (double)(var1_1.getEyeHeight(var1_1.getPose()) / 2.0f), 0.0);
                jI.bIs(var0, var8_7);
                jI.bIu(var0);
                var0.multiply((Quaternionfc)RotationAxis.POSITIVE_Z.rotationDegrees(MathHelper.lerp((float)var3_3, (float)kB.aRpoV, (float)kB.ViGYP)));
                var0.translate(-0.75f, -0.75f, 0.01f);
                var9_8 = new BufferAllocator(VertexFormats.POSITION_COLOR_TEXTURE_LIGHT.getVertexSize() * 4);
                try {
                    var10_9 = new BufferBuilder(var9_8, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_COLOR_TEXTURE_LIGHT);
                    var11_11 = var0.peek().getPositionMatrix();
                    var10_9.vertex((Matrix4fc)var11_11, 0.0f, 1.5f, 0.0f).color(var2_2.coh()).texture(0.0f, 0.0f).light(0, (int)kB.bSJ("g", (int)24439, (long)(5899735386516666866L ^ var5_5)));
                    var10_9.vertex((Matrix4fc)var11_11, 1.5f, 1.5f, 0.0f).color(var2_2.coh()).texture(1.0f, 0.0f).light(0, (int)kB.bSJ("g", (int)17493, (long)(6517679418648011473L ^ var5_5)));
                    var10_9.vertex((Matrix4fc)var11_11, 1.5f, 0.0f, 0.0f).color(var2_2.coh()).texture(1.0f, 1.0f).light(0, (int)kB.bSJ("g", (int)17493, (long)(6517679418648011473L ^ var5_5)));
                    var10_9.vertex((Matrix4fc)var11_11, 0.0f, 0.0f, 0.0f).color(var2_2.coh()).texture(0.0f, 1.0f).light(0, (int)kB.bSJ("g", (int)17493, (long)(6517679418648011473L ^ var5_5)));
                    var12_13 = var10_9.end();
                    try {
                        var13_14 = kR.Dmmsd.bUZ(kB.gjoAf);
                        var14_16 = kB.bSy(var4_4);
                        lF.cfD(var13_14, var12_13, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bSz(net.minecraft.client.texture.AbstractTexture com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((AbstractTexture)var14_16));
                        if (var7_6 == null) break block20;
                    }
                    catch (Throwable var13_15) {
                        block22: {
                            try {
                                v0 = var12_13;
                                if (var7_6 != null) {
                                    if (v0 == null) break block22;
                                }
                                ** GOTO lbl39
                            }
                            catch (Throwable v1) {
                                throw kB.bSC(v1);
                            }
                            try {
                                v0 = var12_13;
lbl39:
                                // 2 sources

                                v0.close();
                            }
                            catch (Throwable var14_17) {
                                var13_15.addSuppressed(var14_17);
                            }
                        }
                        throw var13_15;
                    }
                    try {
                        if (var12_13 != null) {
                            var12_13.close();
                        }
                    }
                    catch (Throwable v2) {
                        throw kB.bSC(v2);
                    }
                }
                catch (Throwable var10_10) {
                    try {
                        var9_8.close();
                    }
                    catch (Throwable var11_12) {
                        var10_10.addSuppressed(var11_12);
                    }
                    throw var10_10;
                }
                var9_8.close();
            }
            finally {
                var0.pop();
            }
        }
        try {
            if (var7_6 == null) {
                iS.bwK("NNCN2");
            }
        }
        catch (Throwable v3) {
            throw kB.bSC(v3);
        }
    }

    private static Object bSF(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kB.bSE(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kB.class, "bSI", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(kB.class, "bSF", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

