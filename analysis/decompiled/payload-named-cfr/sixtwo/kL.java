/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Vector3f
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
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Vector3f;
import sixtwo.gb;
import sixtwo.jF;
import sixtwo.jI;
import sixtwo.jL;
import sixtwo.kF;
import sixtwo.kJ;
import sixtwo.kQ;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.lF;
import sixtwo.lh;
import sixtwo.rD;

public class kL
extends kQ<kF> {
    private static final kS KtzKR;
    private kS BqxhS;
    private static final long kQaAU;
    private static final String[] aMlMg;
    private static final String[] xcFLb;
    private static final Map DpEGO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        kQaAU = gb.aYR(-2390169667897376212L, -1954908186537105610L, MethodHandles.lookup().lookupClass()).a(147860847569689L);
        DpEGO = new HashMap(13);
        long l2 = kQaAU ^ 0x25360EC15376L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[2];
        int n2 = 0;
        String string = "\"hR\u00dd^\u0091E\t\u00be{k\u00012;\nF\u00c2\u0015c\u0004M\u001au`n\u008e\u00e3\u0095\u00ab\u00b2:W p\u00bd?m[\u0010\u00d3\u0092\u0014e\u00f1@\u00e2=\u007f\u00a7`\u009d\u00a0\u00c9\u00f6\u00caP\u00c9\u0094;\u00c4\u00dd\u00e9\u0006\u00d8\u00ff";
        int n3 = "\"hR\u00dd^\u0091E\t\u00be{k\u00012;\nF\u00c2\u0015c\u0004M\u001au`n\u008e\u00e3\u0095\u00ab\u00b2:W p\u00bd?m[\u0010\u00d3\u0092\u0014e\u00f1@\u00e2=\u007f\u00a7`\u009d\u00a0\u00c9\u00f6\u00caP\u00c9\u0094;\u00c4\u00dd\u00e9\u0006\u00d8\u00ff".length();
        int n4 = 32;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = kL.bUC(byArray3).intern();
            if ((n5 += n4) >= n3) {
                aMlMg = stringArray;
                xcFLb = new String[2];
                KtzKR = kS.bVE().duk(lh.GpGUc).duo(false).dul(false).dun(true).dup();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void flush() {
        block14: {
            block13: {
                block11: {
                    var1_1 = kL.kQaAU ^ 44307588403171L;
                    v0 = kJ.bUi();
                    this.bVj();
                    var4_2 = this.WfBOj.endNullable();
                    var3_3 = v0;
                    try {
                        block12: {
                            try {
                                v1 = var4_2;
                                if (var3_3) break block11;
                                if (v1 == null) break block12;
                            }
                            catch (Throwable v2) {
                                throw kL.bUB(v2);
                            }
                            var5_4 = kR.hvBSz.bUZ(this.BqxhS);
                            lF.cfQ(var5_4, var4_2, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bUA(com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((kL)this));
                        }
                        v1 = var4_2;
                    }
                    catch (Throwable var5_5) {
                        block15: {
                            try {
                                v3 = var4_2;
                                if (!var3_3) {
                                    if (v3 == null) break block15;
                                }
                                ** GOTO lbl29
                            }
                            catch (Throwable v4) {
                                throw kL.bUB(v4);
                            }
                            try {
                                v3 = var4_2;
lbl29:
                                // 2 sources

                                v3.close();
                            }
                            catch (Throwable var6_6) {
                                var5_5.addSuppressed(var6_6);
                            }
                        }
                        throw var5_5;
                    }
                }
                try {
                    if (var3_3) break block13;
                    if (v1 == null) break block14;
                }
                catch (Throwable v5) {
                    throw kL.bUB(v5);
                }
                v1 = var4_2;
            }
            v1.close();
        }
        this.bVi(VertexFormat.DrawMode.LINES, VertexFormats.POSITION_COLOR_NORMAL_LINE_WIDTH);
    }

    @Override
    public kS defaultState() {
        return KtzKR;
    }

    @Override
    public void startBatch(kS kS2) {
        this.BqxhS = kS2;
        this.bVi(VertexFormat.DrawMode.LINES, VertexFormats.POSITION_COLOR_NORMAL_LINE_WIDTH);
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void endBatch() {
        block14: {
            block13: {
                block11: {
                    var1_1 = kL.kQaAU ^ 27522784980062L;
                    v0 = kJ.bUj();
                    this.bVj();
                    var3_2 = v0;
                    var4_3 = this.WfBOj.endNullable();
                    try {
                        block12: {
                            try {
                                v1 = var4_3;
                                if (!var3_2) break block11;
                                if (v1 == null) break block12;
                            }
                            catch (Throwable v2) {
                                throw kL.bUB(v2);
                            }
                            var5_4 = kR.hvBSz.bUZ(this.BqxhS);
                            lF.cfQ(var5_4, var4_3, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bUz(com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((kL)this));
                        }
                        v1 = var4_3;
                    }
                    catch (Throwable var5_5) {
                        block15: {
                            try {
                                v3 = var4_3;
                                if (var3_2) {
                                    if (v3 == null) break block15;
                                }
                                ** GOTO lbl29
                            }
                            catch (Throwable v4) {
                                throw kL.bUB(v4);
                            }
                            try {
                                v3 = var4_3;
lbl29:
                                // 2 sources

                                v3.close();
                            }
                            catch (Throwable var6_6) {
                                var5_5.addSuppressed(var6_6);
                            }
                        }
                        throw var5_5;
                    }
                }
                try {
                    if (!var3_2) break block13;
                    if (v1 == null) break block14;
                }
                catch (Throwable v5) {
                    throw kL.bUB(v5);
                }
                v1 = var4_3;
            }
            v1.close();
        }
        this.bVl();
    }

    private static String bUD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x797D;
        if (xcFLb[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])DpEGO.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    DpEGO.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kL", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = aMlMg[n3].getBytes("ISO-8859-1");
            kL.xcFLb[n3] = kL.bUC(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return xcFLb[n3];
    }

    private static String bUC(byte[] byArray) {
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

    private static Throwable bUB(Throwable throwable) {
        return throwable;
    }

    private void bUy() {
        long l2 = kQaAU ^ 0x6DA7BF0695C1L;
        jL.ARZDF.bJl();
        jL.ARZDF.bJr((String)((Object)kL.bUF("w", (int)9909, (long)(0x53BF1CA3FA8BEC9CL ^ l2))), rD.dlmvG.getFramebuffer().textureWidth, rD.dlmvG.getFramebuffer().textureHeight);
        jL.ARZDF.bJu((String)((Object)kL.bUF("w", (int)21379, (long)(0x48BB98F0F9F499ABL ^ l2))), jF.bHw());
    }

    private void bUw(MatrixStack matrixStack, float f2, float f3, float f4, float f5, float f6, float f7, int n2, float f8) {
        Matrix4f matrix4f = matrixStack.peek().getPositionMatrix();
        Vector3f vector3f = this.bUx(f2, f3, f4, f5, f6, f7);
        this.WfBOj.vertex((Matrix4fc)matrix4f, f2, f3, f4).color(n2).normal(matrixStack.peek(), vector3f.x(), vector3f.y(), vector3f.z()).lineWidth(f8);
        this.WfBOj.vertex((Matrix4fc)matrix4f, f5, f6, f7).color(n2).normal(matrixStack.peek(), vector3f.x(), vector3f.y(), vector3f.z()).lineWidth(f8);
    }

    private static CallSite bUF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kL" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private /* synthetic */ void bUz(RenderPass renderPass) {
        this.bUy();
    }

    private /* synthetic */ void bUA(RenderPass renderPass) {
        this.bUy();
    }

    private Vector3f bUx(float f2, float f3, float f4, float f5, float f6, float f7) {
        float f8 = f5 - f2;
        float f9 = f6 - f3;
        float f10 = f7 - f4;
        float f11 = MathHelper.sqrt((float)(f8 * f8 + f9 * f9 + f10 * f10));
        return new Vector3f(f8 / f11, f9 / f11, f10 / f11);
    }

    private static Object bUE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kL.bUD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public void bUv(kF kF2) {
        this.bVj();
        Vec3d vec3d = kF2.bTr();
        Vec3d vec3d2 = kF2.bTs();
        MatrixStack matrixStack = jI.bIo(vec3d);
        int n2 = kF2.bTt().coh();
        float f2 = kF2.bTu();
        Vec3d vec3d3 = vec3d2.subtract(vec3d);
        this.bUw(matrixStack, 0.0f, 0.0f, 0.0f, (float)vec3d3.x, (float)vec3d3.y, (float)vec3d3.z, n2, f2);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kL.class, "bUE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

