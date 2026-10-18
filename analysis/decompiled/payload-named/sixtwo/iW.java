/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.VertexConsumer
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.texture.NativeImage
 *  net.minecraft.client.texture.NativeImage$Format
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.Identifier
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import java.awt.image.BufferedImage;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jf;
import sixtwo.kR;
import sixtwo.lF;
import sixtwo.mG;
import sixtwo.rD;

public class iW {
    public static final int PDWiH;
    public static final Identifier HaVqD;
    private static final long LVQnS;
    private static final long[] whWMv;
    private static final Integer[] VMVMH;
    private static final Map njwRb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    iW.LVQnS = gb.aYR(2284949245207991303L, 43599466955523576L, MethodHandles.lookup().lookupClass()).a(85259852255064L);
                    var15 = iW.LVQnS ^ 9595942733839L;
                    var12_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var15 >>> 56);
                    for (var13_2 = 1; var13_2 < 8; ++var13_2) {
                        v2 = v2;
                        v2[var13_2] = (byte)(var15 << var13_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var12_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var14_4 = var12_1.doFinal("\f\u00fa\u00e2\u00f2V\u0092\u0014@".getBytes("ISO-8859-1"));
                ** while (true)
                var11_3 = iW.bxy(var14_4).intern();
                iW.njwRb = new HashMap<K, V>(13);
                var0_5 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var15 >>> 56);
                for (var1_6 = 1; var1_6 < 8; ++var1_6) {
                    v5 = v5;
                    v5[var1_6] = (byte)(var15 << var1_6 * 8 >>> 56);
                }
                var0_5.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_7 = new long[10];
                var3_8 = 0;
                var4_9 = "qG\u00a4i\u009a\u008bH\u0082'\u00aa\u00d8\u008f4\u00d8\u0014\u009f3\u00f4\u00d9t\u00d8$\u0095\u00b2\u00be\u00dafG\u00f7Fj\u00ac\u00a3\u0013\r\u00ba\u00a9\u00f1\u00fa+\u00b1\u0087H- rE\u001eZ\u00c4\u0096\u00fa\u00fbo\u00e9\u0093\u00e3\u00b3\u00de}\u0004\u00ed)\u00dc";
                var5_10 = "qG\u00a4i\u009a\u008bH\u0082'\u00aa\u00d8\u008f4\u00d8\u0014\u009f3\u00f4\u00d9t\u00d8$\u0095\u00b2\u00be\u00dafG\u00f7Fj\u00ac\u00a3\u0013\r\u00ba\u00a9\u00f1\u00fa+\u00b1\u0087H- rE\u001eZ\u00c4\u0096\u00fa\u00fbo\u00e9\u0093\u00e3\u00b3\u00de}\u0004\u00ed)\u00dc".length();
                var2_11 = 0;
                while (true) {
                    var7_12 = var4_9.substring(var2_11, var2_11 += 8).getBytes("ISO-8859-1");
                    v6 = var6_7;
                    v7 = var3_8++;
                    v8 = ((long)var7_12[0] & 255L) << 56 | ((long)var7_12[1] & 255L) << 48 | ((long)var7_12[2] & 255L) << 40 | ((long)var7_12[3] & 255L) << 32 | ((long)var7_12[4] & 255L) << 24 | ((long)var7_12[5] & 255L) << 16 | ((long)var7_12[6] & 255L) << 8 | (long)var7_12[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_11 < var5_10) ** continue;
                    var4_9 = "\u00d0\u00e7k\u0016\bM!P\u00cd\u0095\u00ce$\u00a0\u0091 \u0085";
                    var5_10 = "\u00d0\u00e7k\u0016\bM!P\u00cd\u0095\u00ce$\u00a0\u0091 \u0085".length();
                    var2_11 = 0;
                    while (true) {
                        var7_12 = var4_9.substring(var2_11, var2_11 += 8).getBytes("ISO-8859-1");
                        v6 = var6_7;
                        v7 = var3_8++;
                        v8 = ((long)var7_12[0] & 255L) << 56 | ((long)var7_12[1] & 255L) << 48 | ((long)var7_12[2] & 255L) << 40 | ((long)var7_12[3] & 255L) << 32 | ((long)var7_12[4] & 255L) << 24 | ((long)var7_12[5] & 255L) << 16 | ((long)var7_12[6] & 255L) << 8 | (long)var7_12[7] & 255L;
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
                    if (var2_11 < var5_10) ** continue;
                    break block11;
                    break;
                }
            }
            var8_13 = v8;
            var10_14 = var0_5.doFinal(new byte[]{(byte)(var8_13 >>> 56), (byte)(var8_13 >>> 48), (byte)(var8_13 >>> 40), (byte)(var8_13 >>> 32), (byte)(var8_13 >>> 24), (byte)(var8_13 >>> 16), (byte)(var8_13 >>> 8), (byte)var8_13});
            v10 = ((long)var10_14[0] & 255L) << 56 | ((long)var10_14[1] & 255L) << 48 | ((long)var10_14[2] & 255L) << 40 | ((long)var10_14[3] & 255L) << 32 | ((long)var10_14[4] & 255L) << 24 | ((long)var10_14[5] & 255L) << 16 | ((long)var10_14[6] & 255L) << 8 | (long)var10_14[7] & 255L;
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
        iW.whWMv = var6_7;
        iW.VMVMH = new Integer[10];
        iW.PDWiH = (int)iW.bxB("o", (int)15365, (long)(var15 ^ 6144512136898043017L));
        iW.HaVqD = Identifier.ofVanilla((String)var11_3);
    }

    private static String bxy(byte[] byArray) {
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

    public static void bxq(MatrixStack matrixStack, BlockPos blockPos, mG mG2) {
        iW.bxs(matrixStack, new Box(blockPos), mG2, mG2, false);
    }

    private static int bxz(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x237F;
        if (VMVMH[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = whWMv[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])njwRb.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    njwRb.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/iW", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            iW.VMVMH[n3] = n4;
        }
        return VMVMH[n3];
    }

    private static int bxA(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = iW.bxz(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite bxB(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/iW" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static NativeImage bxu(BufferedImage bufferedImage) {
        long l2 = LVQnS ^ 0x3289A75F6EB8L;
        int n2 = bufferedImage.getWidth();
        String[] stringArray = jf.bBe();
        int n3 = bufferedImage.getHeight();
        NativeImage nativeImage = new NativeImage(NativeImage.Format.RGBA, n2, n3, true);
        int n4 = 0;
        while (n4 < n3) {
            block5: {
                for (int i2 = 0; i2 < n2; ++i2) {
                    int n5 = bufferedImage.getRGB(i2, n4);
                    int n6 = n5 >> iW.bxB("o", (int)18295, (long)(0x2448BFBC72B44146L ^ l2)) & iW.bxB("o", (int)27083, (long)(0x1925FE5F683A6FFBL ^ l2));
                    int n7 = n5 >> iW.bxB("o", (int)10085, (long)(0x6920D3A67DAE215CL ^ l2)) & iW.bxB("o", (int)18538, (long)(0x236B9B87C549CE50L ^ l2));
                    int n8 = n5 >> iW.bxB("o", (int)13589, (long)(0xA2F9BFB3810332AL ^ l2)) & iW.bxB("o", (int)18538, (long)(0x236B9B87C549CE50L ^ l2));
                    int n9 = n5 & iW.bxB("o", (int)18538, (long)(0x236B9B87C549CE50L ^ l2));
                    int n10 = n6 << iW.bxB("o", (int)31072, (long)(0xB8A827675367F58L ^ l2)) | n9 << iW.bxB("o", (int)6810, (long)(0xF93EF767B489CA7L ^ l2)) | n8 << iW.bxB("o", (int)8684, (long)(0x4CEDA37766F1A7D2L ^ l2)) | n7;
                    try {
                        nativeImage.setColorArgb(i2, n4, n10);
                        if (stringArray != null) {
                            if (stringArray != null) continue;
                            break;
                        }
                        break block5;
                    }
                    catch (MatchException matchException) {
                        throw iW.bxx(matchException);
                    }
                }
                ++n4;
            }
            if (stringArray != null) continue;
        }
        return nativeImage;
    }

    public static void bxw(MatrixStack matrixStack, VertexConsumer vertexConsumer, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11) {
        long l2 = LVQnS ^ 0x694E58D905AL;
        Matrix4f matrix4f = matrixStack.peek().getPositionMatrix();
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f3, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f3, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f3, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f3, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f6, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f6, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f6, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f3, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f6, f7).color(f8, f9, f10, f11);
        String[] stringArray = jf.bBe();
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f3, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f3, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f3, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f6, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f6, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f6, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f3, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f6, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f3, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f3, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f3, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f3, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f3, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f3, f7).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f6, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f6, f4).color(f8, f9, f10, f11);
        vertexConsumer.vertex((Matrix4fc)matrix4f, f2, f6, f7).color(f8, f9, f10, f11);
        String[] stringArray2 = stringArray;
        try {
            vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f6, f4).color(f8, f9, f10, f11);
            vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f6, f7).color(f8, f9, f10, f11);
            vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f6, f7).color(f8, f9, f10, f11);
            vertexConsumer.vertex((Matrix4fc)matrix4f, f5, f6, f7).color(f8, f9, f10, f11);
            if (iS.bwL() == null) {
                jf.bBd(new String[2]);
            }
        }
        catch (MatchException matchException) {
            throw iW.bxx(matchException);
        }
    }

    public static void bxp(MatrixStack matrixStack, BlockPos blockPos, mG mG2, mG mG3, boolean bl2) {
        iW.bxs(matrixStack, new Box(blockPos), mG2, mG3, bl2);
    }

    /*
     * Unable to fully structure code
     */
    public static void bxs(MatrixStack var0, Box var1_1, mG var2_2, mG var3_3, boolean var4_4) {
        block37: {
            block33: {
                block34: {
                    var5_5 = iW.LVQnS ^ 86620200070575L;
                    var8_6 = var1_1.offset(rD.dlmvG.gameRenderer.getCamera().getCameraPos().negate());
                    var9_7 = var0.peek().getPositionMatrix();
                    var7_8 = jf.bBe();
                    try {
                        v0 = var4_4;
                        if (var7_8 == null) break block33;
                        if (v0 == 0) break block34;
                    }
                    catch (Throwable v1) {
                        throw iW.bxx(v1);
                    }
                    var10_9 = var3_3.con();
                    var11_11 = new BufferAllocator(VertexFormats.POSITION_COLOR.getVertexSize() * iW.bxB("o", (int)20910, (long)(5876849983144350853L ^ var5_5)));
                    try {
                        var12_12 = new BufferBuilder(var11_11, VertexFormat.DrawMode.TRIANGLE_STRIP, VertexFormats.POSITION_COLOR);
                        iW.bxv(var0, (VertexConsumer)var12_12, var8_6.minX, var8_6.minY, var8_6.minZ, var8_6.maxX, var8_6.maxY, var8_6.maxZ, var10_9[0], var10_9[1], var10_9[2], var10_9[3] / 2.0f);
                        var13_15 = var12_12.end();
                        try {
                            lF.cfW(kR.ShkJj, var13_15);
                            if (var7_8 == null) break block34;
                        }
                        catch (Throwable var14_18) {
                            block36: {
                                try {
                                    v2 = var13_15;
                                    if (var7_8 != null) {
                                        if (v2 == null) break block36;
                                    }
                                    ** GOTO lbl32
                                }
                                catch (Throwable v3) {
                                    throw iW.bxx(v3);
                                }
                                try {
                                    v2 = var13_15;
lbl32:
                                    // 2 sources

                                    v2.close();
                                }
                                catch (Throwable var15_20) {
                                    var14_18.addSuppressed(var15_20);
                                }
                            }
                            throw var14_18;
                        }
                        try {
                            if (var13_15 != null) {
                                var13_15.close();
                            }
                        }
                        catch (Throwable v4) {
                            throw iW.bxx(v4);
                        }
                    }
                    catch (Throwable var12_13) {
                        try {
                            var11_11.close();
                        }
                        catch (Throwable var13_16) {
                            var12_13.addSuppressed(var13_16);
                        }
                        throw var12_13;
                    }
                    var11_11.close();
                }
                v0 = var2_2.coh();
            }
            var10_10 = v0;
            var11_11 = new BufferAllocator(VertexFormats.POSITION_COLOR.getVertexSize() * iW.bxB("o", (int)31072, (long)(831756597744663631L ^ var5_5)));
            try {
                var12_12 = new BufferBuilder(var11_11, VertexFormat.DrawMode.DEBUG_LINES, VertexFormats.POSITION_COLOR);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.minY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.minY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.minY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.minY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.minY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.minY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.minY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.minY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.minY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.maxY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.minY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.maxY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.minY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.maxY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.minY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.maxY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.maxY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.maxY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.maxY, (float)var8_6.minZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.maxY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.maxX, (float)var8_6.maxY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.maxY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.maxY, (float)var8_6.maxZ).color(var10_10);
                var12_12.vertex((Matrix4fc)var9_7, (float)var8_6.minX, (float)var8_6.maxY, (float)var8_6.minZ).color(var10_10);
                var13_15 = var12_12.end();
                try {
                    lF.cfW(kR.YTwxL, var13_15);
                    if (var7_8 == null) break block37;
                }
                catch (Throwable var14_19) {
                    block39: {
                        try {
                            v5 = var13_15;
                            if (var7_8 != null) {
                                if (v5 == null) break block39;
                            }
                            ** GOTO lbl124
                        }
                        catch (Throwable v6) {
                            throw iW.bxx(v6);
                        }
                        try {
                            v5 = var13_15;
lbl124:
                            // 2 sources

                            v5.close();
                        }
                        catch (Throwable var15_21) {
                            var14_19.addSuppressed(var15_21);
                        }
                    }
                    throw var14_19;
                }
                try {
                    if (var13_15 != null) {
                        var13_15.close();
                    }
                }
                catch (Throwable v7) {
                    throw iW.bxx(v7);
                }
            }
            catch (Throwable var12_14) {
                try {
                    var11_11.close();
                }
                catch (Throwable var13_17) {
                    var12_14.addSuppressed(var13_17);
                }
                throw var12_14;
            }
            var11_11.close();
        }
        try {
            if (var7_8 == null) {
                iS.bwK("phDL2b");
            }
        }
        catch (Throwable v8) {
            throw iW.bxx(v8);
        }
    }

    private static Throwable bxx(Throwable throwable) {
        return throwable;
    }

    public static void bxv(MatrixStack matrixStack, VertexConsumer vertexConsumer, double d2, double d3, double d4, double d5, double d6, double d7, float f2, float f3, float f4, float f5) {
        iW.bxw(matrixStack, vertexConsumer, (float)d2, (float)d3, (float)d4, (float)d5, (float)d6, (float)d7, f2, f3, f4, f5);
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    public static void bxt(MatrixStack var0, Iterable<Vec3d> var1_1, mG var2_2) {
        block30: {
            var3_3 = iW.LVQnS ^ 90968232533751L;
            var6_4 = new ArrayList<Vec3d>();
            var7_5 = var1_1.iterator();
            var5_6 = jf.bBe();
            while (var7_5.hasNext()) {
                var8_7 = var7_5.next();
                try {
                    var6_4.add(var8_7);
                    if (var5_6 != null) {
                        if (var5_6 != null) continue;
                        break;
                    }
                    ** GOTO lbl25
                }
                catch (Throwable v0) {
                    throw iW.bxx(v0);
                }
            }
            try {
                if (var6_4.isEmpty()) {
                    return;
                }
            }
            catch (Throwable v1) {
                throw iW.bxx(v1);
            }
            var0.push();
            try {
                jI.bIr(var0);
lbl25:
                // 2 sources

                var7_5 = new BufferAllocator(VertexFormats.POSITION_COLOR.getVertexSize() * var6_4.size());
                try {
                    block29: {
                        var8_7 = new BufferBuilder(var7_5, VertexFormat.DrawMode.DEBUG_LINE_STRIP, VertexFormats.POSITION_COLOR);
                        var9_9 = var0.peek().getPositionMatrix();
                        for (Vec3d var11_12 : var6_4) {
                            try {
                                v2 = var8_7;
                                if (var5_6 != null) {
                                    v2.vertex((Matrix4fc)var9_9, (float)var11_12.x, (float)var11_12.y, (float)var11_12.z).color(var2_2.coh());
                                    if (var5_6 != null) continue;
                                    break;
                                }
                                break block29;
                            }
                            catch (Throwable v3) {
                                throw iW.bxx(v3);
                            }
                        }
                        v2 = var8_7;
                    }
                    var10_11 = v2.end();
                    try {
                        lF.cfW(kR.jLECJ, var10_11);
                        if (var5_6 == null) break block30;
                    }
                    catch (Throwable var11_13) {
                        block31: {
                            try {
                                v4 = var10_11;
                                if (var5_6 != null) {
                                    if (v4 == null) break block31;
                                }
                                ** GOTO lbl57
                            }
                            catch (Throwable v5) {
                                throw iW.bxx(v5);
                            }
                            try {
                                v4 = var10_11;
lbl57:
                                // 2 sources

                                v4.close();
                            }
                            catch (Throwable var12_14) {
                                var11_13.addSuppressed(var12_14);
                            }
                        }
                        throw var11_13;
                    }
                    try {
                        if (var10_11 != null) {
                            var10_11.close();
                        }
                    }
                    catch (Throwable v6) {
                        throw iW.bxx(v6);
                    }
                }
                finally {
                    var7_5.close();
                }
            }
            finally {
                var0.pop();
            }
        }
    }

    public static void bxr(MatrixStack matrixStack, Box box, mG mG2) {
        iW.bxs(matrixStack, box, mG2, mG2, false);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(iW.class, "bxA", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

