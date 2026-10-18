/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.VertexConsumer
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.text.Text
 *  org.joml.Matrix4f
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
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.text.Text;
import org.joml.Matrix4f;
import sixtwo.gb;
import sixtwo.jF;
import sixtwo.jL;
import sixtwo.jN;
import sixtwo.kR;
import sixtwo.lF;
import sixtwo.lj;
import sixtwo.lm;
import sixtwo.lm$uy;
import sixtwo.mG;
import sixtwo.mZ;

public class ln {
    private static final float psnxY = 0.05f;
    private static final float nYila = 0.5f;
    private static final float lDCRr = 0.0f;
    private static final long vWuVy;
    private static final String[] gIkYz;
    private static final String[] WqWqa;
    private static final Map MnEpw;
    private static final long tjXri;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    private static void bZO(lj var0, Matrix4f var1_1, float var2_2, float var3_3, boolean var4_4, float var5_5, float var6_6, float var7_7, float var8_8, Consumer<BufferBuilder> var9_9) {
        block21: {
            var10_10 = ln.vWuVy ^ 60298998370335L;
            var13_11 = (float)Math.sqrt(var1_1.m00() * var1_1.m00() + var1_1.m01() * var1_1.m01() + var1_1.m02() * var1_1.m02());
            var14_12 = var7_7 * var13_11;
            var15_13 = var1_1.m00() * var8_8 + var1_1.m10() * var2_2 + var1_1.m20() * var3_3 + var1_1.m30();
            var16_14 = new BufferAllocator(VertexFormats.POSITION_TEXTURE_COLOR.getVertexSize() * (int)ln.tjXri);
            var12_15 = lj.bYV();
            try {
                block20: {
                    block18: {
                        var17_16 = new BufferBuilder(var16_14, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_TEXTURE_COLOR);
                        var9_9.accept(var17_16);
                        var18_18 = var17_16.endNullable();
                        try {
                            block19: {
                                v0 = var18_18;
                                if (var12_15 == null) break block18;
                                try {
                                    block23: {
                                        if (v0 == null) break block19;
                                        break block23;
                                        catch (Throwable v1) {
                                            throw ln.bZS(v1);
                                        }
                                    }
                                    lF.cfP(kR.mQUZT, var18_18, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bZP(sixtwo.lj boolean float float float float com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((lj)var0, (boolean)var4_4, (float)var5_5, (float)var6_6, (float)var14_12, (float)var15_13));
                                }
                                catch (Throwable v2) {
                                    throw ln.bZS(v2);
                                }
                            }
                            v0 = var18_18;
                        }
                        catch (Throwable var19_20) {
                            block22: {
                                try {
                                    v3 = var18_18;
                                    if (var12_15 != null) {
                                        if (v3 == null) break block22;
                                    }
                                    ** GOTO lbl38
                                }
                                catch (Throwable v4) {
                                    throw ln.bZS(v4);
                                }
                                try {
                                    v3 = var18_18;
lbl38:
                                    // 2 sources

                                    v3.close();
                                }
                                catch (Throwable var20_21) {
                                    var19_20.addSuppressed(var20_21);
                                }
                            }
                            throw var19_20;
                        }
                    }
                    try {
                        if (var12_15 == null) break block20;
                        if (v0 == null) break block21;
                    }
                    catch (Throwable v5) {
                        throw ln.bZS(v5);
                    }
                    v0 = var18_18;
                }
                v0.close();
            }
            finally {
                var16_14.close();
            }
        }
    }

    public static void bZM(lj lj2, Text text, float f2, Matrix4f matrix4f, float f3, float f4, float f5, boolean bl2, float f6, float f7, float f8, float f9) {
        ln.bZN(lj2, text, mG.hoGuU, f2, matrix4f, f3, f4, f5, bl2, f6, f7, f8, f9);
    }

    private static Throwable bZS(Throwable throwable) {
        return throwable;
    }

    private static /* synthetic */ void bZP(lj lj2, boolean bl2, float f2, float f3, float f4, float f5, RenderPass renderPass) {
        int n2;
        CallSite callSite;
        jN jN2;
        long l2;
        block2: {
            block3: {
                l2 = vWuVy ^ 0x2E5384345ADDL;
                renderPass.bindTexture((String)((Object)ln.bZW("t", (int)1069, (long)(0x4F5A1533BC53CF34L ^ l2))), lj2.bYN().getGlTextureView(), lj2.bYN().getSampler());
                jL.xOjEv.bJl();
                jL.xOjEv.bJq((String)((Object)ln.bZW("t", (int)3503, (long)(0x566D31DF5F1146B3L ^ l2))), lj2.bYO().dvj());
                jL.xOjEv.bJq((String)((Object)ln.bZW("t", (int)10698, (long)(0x19CEFDCC25F962DDL ^ l2))), 0.05f);
                jL.xOjEv.bJq((String)((Object)ln.bZW("t", (int)26003, (long)(0x1224EB71F9672E8DL ^ l2))), 0.5f);
                String string = lj.bYV();
                jL.xOjEv.bJx((String)((Object)ln.bZW("t", (int)8410, (long)(0x575BF1D8033CEBC0L ^ l2))), 0);
                String string2 = string;
                try {
                    jL.xOjEv.bJq((String)((Object)ln.bZW("t", (int)11585, (long)(0x2827EB335336E65CL ^ l2))), 0.0f);
                    jL.xOjEv.bJt((String)((Object)ln.bZW("t", (int)29625, (long)(0x60894A876C25B8A1L ^ l2))), 0.0f, 0.0f, 0.0f, 0.0f);
                    jL.xOjEv.bJu((String)((Object)ln.bZW("t", (int)2246, (long)(0x414D2C28B23343D6L ^ l2))), jF.bHw());
                    jN2 = jL.xOjEv;
                    callSite = ln.bZW("t", (int)21129, (long)(0x54F577A09A1A9992L ^ l2));
                    n2 = bl2;
                    if (string2 == null) break block2;
                    if (n2 == 0) break block3;
                }
                catch (MatchException matchException) {
                    throw ln.bZS(matchException);
                }
                n2 = 1;
                break block2;
            }
            n2 = 0;
        }
        jN2.bJx((String)((Object)callSite), n2);
        jL.xOjEv.bJq((String)((Object)ln.bZW("t", (int)4426, (long)(0x72847D1AE086DA58L ^ l2))), f2);
        jL.xOjEv.bJq((String)((Object)ln.bZW("t", (int)4319, (long)(0x4F069A23A6285BCEL ^ l2))), f3);
        jL.xOjEv.bJq((String)((Object)ln.bZW("t", (int)17046, (long)(0x5FBBA6E71D2C0985L ^ l2))), f4);
        jL.xOjEv.bJq((String)((Object)ln.bZW("t", (int)24116, (long)(0x2230FDF6ED34952BL ^ l2))), f5);
    }

    private static CallSite bZW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ln" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bZT(byte[] byArray) {
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

    public static void bZI(lj lj2, String string, float f2, mG mG2, Matrix4f matrix4f, float f3, float f4, float f5, boolean bl2, float f6, float f7) {
        float f8 = lj2.bYC(string, f2) * 2.0f;
        ln.bZK(lj2, mZ.csh(string), f2, mG2, matrix4f, f3, f4, f5, bl2, f6, f7, f8);
    }

    public static void bZL(lj lj2, int[] nArray, float f2, mG mG2, Matrix4f matrix4f, float f3, float f4, float f5, boolean bl2, float f6, float f7, float f8, float f9) {
        ln.bZO(lj2, matrix4f, f4, f5, bl2, f6, f7, f8, f9, bufferBuilder -> lj2.bYt(matrix4f, (VertexConsumer)bufferBuilder, nArray, f2, 0.025f * f2, 0.0f, f3, f4 + lj2.bYG(f2), f5, mG2.coh()));
    }

    private static Object bZV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = ln.bZU(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String bZU(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5854;
        if (WqWqa[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])MnEpw.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    MnEpw.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ln", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = gIkYz[n3].getBytes("ISO-8859-1");
            ln.WqWqa[n3] = ln.bZT(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return WqWqa[n3];
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    ln.vWuVy = gb.aYR(4435843156865770935L, 1835440659246342495L, MethodHandles.lookup().lookupClass()).a(279522941554775L);
                    ln.MnEpw = new HashMap<K, V>(13);
                    var5 = ln.vWuVy ^ 63479895216266L;
                    var7_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var5 >>> 56);
                    for (var8_2 = 1; var8_2 < 8; ++var8_2) {
                        v2 = v2;
                        v2[var8_2] = (byte)(var5 << var8_2 * 8 >>> 56);
                    }
                    var7_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var14_3 = new String[13];
                    var12_4 = 0;
                    var11_5 = "\u001d\u0014\u0086\u00ef\u00f3~\u00d0\u00b9\u00a9\u00df<>i1<\u00e7\u0010\u00e5\u00b0\u0082\u0082\u00f0M\u001bx\u008f\u00f9\u00c9c\u0001\f\u00bb\u008d\u0018j\u0098/5\"\u00ccs]\u00b8\u00caI\u00f5\u00aa[I\u00eb\u00b1\u00be\u0018\u00cc\u00b7\u000e\u001f\u000e\u0018*\u00c9e\u00fa\u00ddw\u00e61K\u0015\u008c\u0080|\u009b\u00de\u0097\u00ff:5\u00ad\u00fd-<;\u0018u_J\u00c9\u00c3\u00c22\u0007\u00a1\u00b6\u0006\u00a1(3\u000e\u00d1\u00bb\u00adR\u0094\u00c0:\u00c1\u000f V\u00a6o6\u009b\u0013}\u00b9\u0082\u00ff:\u0015jVd?g\u001f_Bn}\u00b5km|\u00a1\u001f\u001d\u00bd\u009c\u00e5(I\u009a\u008b\u001b\u0084q\u0016\u00a6\u00b3\"u\u00ad\u00ef\u00ec\u00ba^?\u0011\u0087\u00cb\u00e81B\u00e9\u008b1}h@T)\u00c2\u0089\u0006a\u00dd\u00b6\u00ef\u00e8\u00bc\u0010\u00e5\u00c8\u00b7?\u0083+\u001eb\u0010\u00afa\b\u009asf? \u00041\u00e1k\b\u0017\u00b1D\u009bv$>\u0011\u00f0)<\u0001\u00d7/\u0019[\u00e6_$\u00d8\u00a8\u00ec&\u00beD\u00a6,\u0018e\u00b6\u00ae\u00f4\u00c1\u0018R\u00cd\b\u0095w\u0087\u00a3\u00ea\u0092\u00c7\u00bd\u00e4\r\u0015WB\u00ad\u00be\u0018\u000f\u0090\u00bc\"a\u0089\\\u00cb\u00de\u00dbj\u00ff\u00e7F\u0091\u008c\u0098\u0002B\u0098\u00be\"./";
                    var13_6 = "\u001d\u0014\u0086\u00ef\u00f3~\u00d0\u00b9\u00a9\u00df<>i1<\u00e7\u0010\u00e5\u00b0\u0082\u0082\u00f0M\u001bx\u008f\u00f9\u00c9c\u0001\f\u00bb\u008d\u0018j\u0098/5\"\u00ccs]\u00b8\u00caI\u00f5\u00aa[I\u00eb\u00b1\u00be\u0018\u00cc\u00b7\u000e\u001f\u000e\u0018*\u00c9e\u00fa\u00ddw\u00e61K\u0015\u008c\u0080|\u009b\u00de\u0097\u00ff:5\u00ad\u00fd-<;\u0018u_J\u00c9\u00c3\u00c22\u0007\u00a1\u00b6\u0006\u00a1(3\u000e\u00d1\u00bb\u00adR\u0094\u00c0:\u00c1\u000f V\u00a6o6\u009b\u0013}\u00b9\u0082\u00ff:\u0015jVd?g\u001f_Bn}\u00b5km|\u00a1\u001f\u001d\u00bd\u009c\u00e5(I\u009a\u008b\u001b\u0084q\u0016\u00a6\u00b3\"u\u00ad\u00ef\u00ec\u00ba^?\u0011\u0087\u00cb\u00e81B\u00e9\u008b1}h@T)\u00c2\u0089\u0006a\u00dd\u00b6\u00ef\u00e8\u00bc\u0010\u00e5\u00c8\u00b7?\u0083+\u001eb\u0010\u00afa\b\u009asf? \u00041\u00e1k\b\u0017\u00b1D\u009bv$>\u0011\u00f0)<\u0001\u00d7/\u0019[\u00e6_$\u00d8\u00a8\u00ec&\u00beD\u00a6,\u0018e\u00b6\u00ae\u00f4\u00c1\u0018R\u00cd\b\u0095w\u0087\u00a3\u00ea\u0092\u00c7\u00bd\u00e4\r\u0015WB\u00ad\u00be\u0018\u000f\u0090\u00bc\"a\u0089\\\u00cb\u00de\u00dbj\u00ff\u00e7F\u0091\u008c\u0098\u0002B\u0098\u00be\"./".length();
                    var10_7 = 16;
                    var9_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        v3 = ++var9_8;
                        v4 = var11_5.substring(v3, v3 + var10_7);
                        v5 = -1;
                        break block12;
                        break;
                    }
lbl25:
                    // 1 sources

                    while (true) {
                        var14_3[var12_4++] = ln.bZT(var15_9).intern();
                        if ((var9_8 += var10_7) < var13_6) {
                            var10_7 = var11_5.charAt(var9_8);
                            ** continue;
                        }
                        var11_5 = "\u00c7\u00bb\u008a\u00e0\u0004h\u00a0\u00f3_\u0098~\u00b0\u00eae\u00d9:X\u00a4\u00d3\u00a4\u0005\u009a\u0094\u00f9 |\u00c3\u0003\u0082%=X\u00dd\u00dd\u0015\u00b8\u0092\u0015\u000191\u00f5C#V\u00cd\u00a6]\f\u00fa\u00bc\u00a2a\u0086\u00d0f\u007f";
                        var13_6 = "\u00c7\u00bb\u008a\u00e0\u0004h\u00a0\u00f3_\u0098~\u00b0\u00eae\u00d9:X\u00a4\u00d3\u00a4\u0005\u009a\u0094\u00f9 |\u00c3\u0003\u0082%=X\u00dd\u00dd\u0015\u00b8\u0092\u0015\u000191\u00f5C#V\u00cd\u00a6]\f\u00fa\u00bc\u00a2a\u0086\u00d0f\u007f".length();
                        var10_7 = 24;
                        var9_8 = -1;
lbl34:
                        // 2 sources

                        while (true) {
                            v6 = ++var9_8;
                            v4 = var11_5.substring(v6, v6 + var10_7);
                            v5 = 0;
                            break block12;
                            break;
                        }
                        break;
                    }
lbl39:
                    // 1 sources

                    while (true) {
                        var14_3[var12_4++] = ln.bZT(var15_9).intern();
                        if ((var9_8 += var10_7) < var13_6) {
                            var10_7 = var11_5.charAt(var9_8);
                            ** continue;
                        }
                        break block13;
                        break;
                    }
                }
                var15_9 = var7_1.doFinal(v4.getBytes("ISO-8859-1"));
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
            ln.gIkYz = var14_3;
            ln.WqWqa = new String[13];
            var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
            v7 = SecretKeyFactory.getInstance("DES");
            v8 = new byte[8];
            v9 = v8;
            v8[0] = (byte)(var5 >>> 56);
            for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                v9 = v9;
                v9[var1_11] = (byte)(var5 << var1_11 * 8 >>> 56);
            }
            break block14;
lbl65:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
        var2_12 = -4536067894754635093L;
        var4_13 = var0_10.doFinal(new byte[]{(byte)(var2_12 >>> 56), (byte)(var2_12 >>> 48), (byte)(var2_12 >>> 40), (byte)(var2_12 >>> 32), (byte)(var2_12 >>> 24), (byte)(var2_12 >>> 16), (byte)(var2_12 >>> 8), (byte)var2_12});
        ** while (true)
        ln.tjXri = ((long)var4_13[0] & 255L) << 56 | ((long)var4_13[1] & 255L) << 48 | ((long)var4_13[2] & 255L) << 40 | ((long)var4_13[3] & 255L) << 32 | ((long)var4_13[4] & 255L) << 24 | ((long)var4_13[5] & 255L) << 16 | ((long)var4_13[6] & 255L) << 8 | (long)var4_13[7] & 255L;
    }

    public static void bZN(lj lj2, Text text, mG mG2, float f2, Matrix4f matrix4f, float f3, float f4, float f5, boolean bl2, float f6, float f7, float f8, float f9) {
        List<lm$uy> list = lm.bZw(text, mG2);
        ln.bZO(lj2, matrix4f, f4, f5, bl2, f6, f7, f8, f9, bufferBuilder -> {
            long l2 = vWuVy ^ 0x1AE7F39D667FL;
            float f6 = f3;
            Iterator iterator = list.iterator();
            String string = lj.bYV();
            while (iterator.hasNext()) {
                lm$uy lm$uy = (lm$uy)iterator.next();
                lj2.bYt(matrix4f, (VertexConsumer)bufferBuilder, mZ.csh(lm$uy.text()), f2, 0.025f * f2, -0.3f, f6 - 0.75f, f4 + f2 * 0.7f, f5, lm$uy.color());
                f6 += lj2.bYC(lm$uy.text(), f2);
                if (string != null) continue;
            }
        });
    }

    public static void bZK(lj lj2, int[] nArray, float f2, mG mG2, Matrix4f matrix4f, float f3, float f4, float f5, boolean bl2, float f6, float f7, float f8) {
        ln.bZL(lj2, nArray, f2, mG2, matrix4f, f3, f4, f5, bl2, f6, f7, f8, f3);
    }

    public static void bZJ(lj lj2, int[] nArray, float f2, mG mG2, Matrix4f matrix4f, float f3, float f4, float f5) {
        ln.bZK(lj2, nArray, f2, mG2, matrix4f, f3, f4, f5, false, 0.0f, 1.0f, 0.0f);
    }

    public static void bZG(lj lj2, String string, float f2, mG mG2, Matrix4f matrix4f, float f3, float f4, float f5) {
        ln.bZK(lj2, mZ.csh(string), f2, mG2, matrix4f, f3, f4, f5, false, 0.0f, 1.0f, 0.0f);
    }

    public static void bZH(lj lj2, String string, float f2, mG mG2, Matrix4f matrix4f, float f3, float f4, float f5, boolean bl2, float f6, float f7, float f8) {
        ln.bZK(lj2, mZ.csh(string), f2, mG2, matrix4f, f3, f4, f5, bl2, f6, f7, f8);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ln.class, "bZV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

