/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.util.BufferAllocator
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.util.BufferAllocator;
import sixtwo.gb;
import sixtwo.jL;
import sixtwo.jO;
import sixtwo.jT;
import sixtwo.kR;
import sixtwo.ke;
import sixtwo.kh;
import sixtwo.kk;
import sixtwo.lF;
import sixtwo.lt;
import sixtwo.rD;
import sixtwo.rm;

public class jX
implements kh<jO> {
    private static final long kRcjs = gb.aYR(-6360556769871776842L, -1933544579734279765L, MethodHandles.lookup().lookupClass()).a(169418617892138L);
    private static final String cvxBK;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = kRcjs ^ 0x383A9BF6A3B4L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("\u0093\u0019\u0012\u0097uI\u00ac\u00cd\u00de\u0086\u000e\u00e3\u00cb@?\u00b0".getBytes("ISO-8859-1"));
                cvxBK = jX.bNC(byArray3).intern();
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    /*
     * Unable to fully structure code
     */
    public void bNz(jO var1_1) {
        block18: {
            var2_2 = jX.kRcjs ^ 51959087305734L;
            var5_3 = var1_1.bKi();
            var4_4 = jT.bMR();
            try {
                if (var5_3.cnW()) {
                    return;
                }
            }
            catch (Throwable v0) {
                throw jX.bNB(v0);
            }
            var6_5 = rm.dip();
            var7_6 = var1_1.bKb();
            var8_7 = var1_1.bKc();
            var9_8 = var1_1.bKd();
            var10_9 = var1_1.bKe();
            var11_10 = var7_6 / var6_5.x;
            var12_11 = (var7_6 + var9_8) / var6_5.x;
            var13_12 = 1.0f - var8_7 / var6_5.y;
            var14_13 = 1.0f - (var8_7 + var10_9) / var6_5.y;
            var15_14 = new BufferAllocator(VertexFormats.POSITION_TEXTURE_COLOR.getVertexSize() * 4);
            try {
                var16_15 = new BufferBuilder(var15_14, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_TEXTURE_COLOR);
                jX.FroVm.uv_quad_region_color(var16_15, var1_1.bKa(), var7_6, var8_7, var9_8, var10_9, var11_10, var13_12, var12_11, var14_13, var1_1.bKi());
                var17_17 = var16_15.end();
                try {
                    lF.cfB(kR.alRAH, var17_17, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bNA(sixtwo.jO com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((jO)var1_1));
                    if (var4_4) break block18;
                }
                catch (Throwable var18_19) {
                    block19: {
                        try {
                            v1 = var17_17;
                            if (!var4_4) {
                                if (v1 == null) break block19;
                            }
                            ** GOTO lbl38
                        }
                        catch (Throwable v2) {
                            throw jX.bNB(v2);
                        }
                        try {
                            v1 = var17_17;
lbl38:
                            // 2 sources

                            v1.close();
                        }
                        catch (Throwable var19_20) {
                            var18_19.addSuppressed(var19_20);
                        }
                    }
                    throw var18_19;
                }
                try {
                    if (var17_17 != null) {
                        var17_17.close();
                    }
                }
                catch (Throwable v3) {
                    throw jX.bNB(v3);
                }
            }
            finally {
                var15_14.close();
            }
        }
    }

    private static Throwable bNB(Throwable throwable) {
        return throwable;
    }

    private static /* synthetic */ void bNA(jO jO2, RenderPass renderPass) {
        long l2 = kRcjs ^ 0x778DCBECA3E1L;
        renderPass.bindTexture(cvxBK, kk.bPN().getColorAttachmentView(), lt.caX());
        ke.bOj(jL.VBAOv, jO2, rD.dlmvG.getWindow().getFramebufferWidth(), rD.dlmvG.getWindow().getFramebufferHeight());
    }

    private static String bNC(byte[] byArray) {
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
}

