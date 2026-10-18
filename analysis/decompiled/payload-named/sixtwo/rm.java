/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.buffers.GpuBuffer
 *  com.mojang.blaze3d.buffers.GpuBufferSlice
 *  com.mojang.blaze3d.buffers.Std140Builder
 *  com.mojang.blaze3d.systems.ProjectionType
 *  com.mojang.blaze3d.systems.RenderSystem
 *  net.minecraft.client.util.Window
 *  net.minecraft.util.math.Vec2f
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.lwjgl.system.MemoryStack
 */
package sixtwo;

import com.mojang.blaze3d.buffers.GpuBuffer;
import com.mojang.blaze3d.buffers.GpuBufferSlice;
import com.mojang.blaze3d.buffers.Std140Builder;
import com.mojang.blaze3d.systems.ProjectionType;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.util.Window;
import net.minecraft.util.math.Vec2f;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.lwjgl.system.MemoryStack;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.rD;

public class rm {
    public static boolean YaBsy;
    private static double HRPnj;
    private static Vec2f fJbvu;
    private static final Matrix4f LBUTr;
    private static GpuBuffer iBPYr;
    private static GpuBufferSlice eLWOo;
    private static iS[] XFAew;
    private static final long LAGIc;
    private static final String pxuqz;
    private static final long DMPeE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        LAGIc = gb.aYR(3384494939162841150L, 8667744679039511672L, MethodHandles.lookup().lookupClass()).a(192452429815908L);
        long l2 = LAGIc ^ 0x60B26FE4D15AL;
        rm.diu(new iS[3]);
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
        byte[] byArray3 = cipher.doFinal(",\u0092\u0095+9\u00baK\u00d6G\u00e20D\u0087\u00a7\u00c4\u00ac".getBytes("ISO-8859-1"));
        pxuqz = rm.dix(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l3 = -1771248824631046976L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                DMPeE = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                YaBsy = false;
                HRPnj = 2.0;
                fJbvu = Vec2f.ZERO;
                LBUTr = new Matrix4f();
                return;
            }
            byArray5 = byArray5;
            byArray5[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public static Vec2f dir(double d2, double d3, double d4) {
        double d5;
        double d6;
        block13: {
            double d7;
            block11: {
                int n2;
                block12: {
                    double d8;
                    iS[] iSArray;
                    block10: {
                        double d9;
                        block8: {
                            int n3;
                            block9: {
                                long l2 = LAGIc ^ 0x23FF2FB3A6ABL;
                                n3 = (int)(d2 / d4);
                                iSArray = rm.div();
                                try {
                                    try {
                                        double d10 = d2 / d4 - (double)n3;
                                        d9 = d10 == 0.0 ? 0 : (d10 > 0.0 ? 1 : -1);
                                        if (iSArray == null) break block8;
                                        if (d9 <= 0) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw rm.diw(matchException);
                                    }
                                    d8 = n3 + 1;
                                    break block10;
                                }
                                catch (MatchException matchException) {
                                    throw rm.diw(matchException);
                                }
                            }
                            d9 = n3;
                        }
                        d8 = d9;
                    }
                    d6 = d8;
                    n2 = (int)(d3 / d4);
                    try {
                        try {
                            double d11 = d3 / d4 - (double)n2;
                            d7 = d11 == 0.0 ? 0 : (d11 > 0.0 ? 1 : -1);
                            if (iSArray == null) break block11;
                            if (d7 <= 0) break block12;
                        }
                        catch (MatchException matchException) {
                            throw rm.diw(matchException);
                        }
                        d5 = n2 + 1;
                        break block13;
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                }
                d7 = n2;
            }
            d5 = d7;
        }
        double d12 = d5;
        return new Vec2f((float)d6, (float)d12);
    }

    public static Vec2f dis() {
        Vec2f vec2f = rm.diq();
        float f2 = (float)(rD.dlmvG.mouse.getX() * (double)vec2f.x / (double)rD.dlmvG.getWindow().getWidth());
        float f3 = (float)(rD.dlmvG.mouse.getY() * (double)vec2f.y / (double)rD.dlmvG.getWindow().getHeight());
        return new Vec2f(f2, f3);
    }

    public static iS[] div() {
        return XFAew;
    }

    public static void dim() {
        Matrix4f matrix4f = new Matrix4f().setOrtho(0.0f, (float)(rD.dlmvG.getWindow().getFramebufferWidth() / rD.dlmvG.getWindow().getScaleFactor()), (float)(rD.dlmvG.getWindow().getFramebufferHeight() / rD.dlmvG.getWindow().getScaleFactor()), 0.0f, 1000.0f, 21000.0f);
        rm.dii(matrix4f, ProjectionType.ORTHOGRAPHIC);
        YaBsy = false;
        rm.din();
    }

    public static Vec2f diq() {
        Vec2f vec2f;
        double d2;
        double d3;
        block16: {
            double d4;
            block14: {
                int n2;
                block15: {
                    double d5;
                    iS[] iSArray;
                    Window window;
                    block13: {
                        double d6;
                        block11: {
                            int n3;
                            block12: {
                                long l2 = LAGIc ^ 0x1428465AF3BL;
                                window = rD.dlmvG.getWindow();
                                iSArray = rm.div();
                                n3 = (int)((double)window.getFramebufferWidth() / HRPnj);
                                try {
                                    try {
                                        double d7 = (double)window.getFramebufferWidth() / HRPnj - (double)n3;
                                        d6 = d7 == 0.0 ? 0 : (d7 > 0.0 ? 1 : -1);
                                        if (iSArray == null) break block11;
                                        if (d6 <= 0) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw rm.diw(matchException);
                                    }
                                    d5 = n3 + 1;
                                    break block13;
                                }
                                catch (MatchException matchException) {
                                    throw rm.diw(matchException);
                                }
                            }
                            d6 = n3;
                        }
                        d5 = d6;
                    }
                    d3 = d5;
                    n2 = (int)((double)window.getFramebufferHeight() / HRPnj);
                    try {
                        try {
                            double d8 = (double)window.getFramebufferHeight() / HRPnj - (double)n2;
                            d4 = d8 == 0.0 ? 0 : (d8 > 0.0 ? 1 : -1);
                            if (iSArray == null) break block14;
                            if (d4 <= 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw rm.diw(matchException);
                        }
                        d2 = n2 + 1;
                        break block16;
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                }
                d4 = n2;
            }
            d2 = d4;
        }
        double d9 = d2;
        try {
            vec2f = new Vec2f((float)d3, (float)d9);
            if (iS.bwL() == null) {
                rm.diu(new iS[5]);
            }
        }
        catch (MatchException matchException) {
            throw rm.diw(matchException);
        }
        return vec2f;
    }

    private static Throwable diw(Throwable throwable) {
        return throwable;
    }

    public static Matrix4f dij() {
        return LBUTr;
    }

    public static void dil(double d2) {
        Matrix4f matrix4f = new Matrix4f().setOrtho(0.0f, (float)((double)rD.dlmvG.getWindow().getFramebufferWidth() / d2), (float)((double)rD.dlmvG.getWindow().getFramebufferHeight() / d2), 0.0f, 1000.0f, 21000.0f);
        rm.dii(matrix4f, ProjectionType.ORTHOGRAPHIC);
        YaBsy = true;
        HRPnj = d2;
        rm.din();
    }

    public static void diu(iS[] iSArray) {
        XFAew = iSArray;
    }

    private static String dix(byte[] byArray) {
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

    private static void dih() {
        block5: {
            GpuBuffer gpuBuffer;
            block4: {
                long l2 = LAGIc ^ 0x7C77BD8DE9CAL;
                iS[] iSArray = rm.div();
                try {
                    try {
                        gpuBuffer = iBPYr;
                        if (iSArray == null) break block4;
                        if (gpuBuffer != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                    gpuBuffer = iBPYr = RenderSystem.getDevice().createBuffer(() -> {
                        long l2 = LAGIc ^ 0x4A490EB13CA2L;
                        return pxuqz;
                    }, (int)DMPeE, (long)RenderSystem.PROJECTION_MATRIX_UBO_SIZE);
                }
                catch (MatchException matchException) {
                    throw rm.diw(matchException);
                }
            }
            eLWOo = gpuBuffer.slice(0L, (long)RenderSystem.PROJECTION_MATRIX_UBO_SIZE);
        }
    }

    public static Number dio() {
        double d2;
        block9: {
            int n2;
            block7: {
                block8: {
                    long l2 = LAGIc ^ 0x29444E315089L;
                    iS[] iSArray = rm.div();
                    try {
                        if (rD.dlmvG.getWindow() == null) {
                            return 2;
                        }
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                    try {
                        try {
                            n2 = YaBsy;
                            if (iSArray == null) break block7;
                            if (n2 == 0) break block8;
                        }
                        catch (MatchException matchException) {
                            throw rm.diw(matchException);
                        }
                        d2 = HRPnj;
                        break block9;
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                }
                n2 = rD.dlmvG.getWindow().getScaleFactor();
            }
            d2 = n2;
        }
        return d2;
    }

    public static Vec2f dip() {
        return fJbvu;
    }

    /*
     * Unable to fully structure code
     */
    private static void dii(Matrix4f var0, ProjectionType var1_1) {
        block9: {
            var2_2 = rm.LAGIc ^ 8833120912066L;
            v0 = rm.div();
            rm.dih();
            var4_3 = v0;
            rm.LBUTr.set((Matrix4fc)var0);
            var5_4 = MemoryStack.stackPush();
            try {
                var6_5 = Std140Builder.onStack((MemoryStack)var5_4, (int)RenderSystem.PROJECTION_MATRIX_UBO_SIZE).putMat4f((Matrix4fc)var0).get();
                RenderSystem.getDevice().createCommandEncoder().writeToBuffer(rm.iBPYr.slice(), var6_5);
                if (var4_3 == null) break block9;
            }
            catch (Throwable var6_6) {
                block10: {
                    try {
                        v1 = var5_4;
                        if (var4_3 != null) {
                            if (v1 == null) break block10;
                        }
                        ** GOTO lbl23
                    }
                    catch (Throwable v2) {
                        throw rm.diw(v2);
                    }
                    try {
                        v1 = var5_4;
lbl23:
                        // 2 sources

                        v1.close();
                    }
                    catch (Throwable var7_7) {
                        var6_6.addSuppressed(var7_7);
                    }
                }
                throw var6_6;
            }
            try {
                if (var5_4 == null) ** GOTO lbl35
                var5_4.close();
            }
            catch (Throwable v3) {
                throw rm.diw(v3);
            }
lbl35:
            // 2 sources

            RenderSystem.setProjectionMatrix((GpuBufferSlice)rm.eLWOo, (ProjectionType)var1_1);
        }
    }

    private static void din() {
        block5: {
            long l2 = LAGIc ^ 0x30C2A38258F8L;
            iS[] iSArray = rm.div();
            try {
                block4: {
                    try {
                        if (YaBsy) break block4;
                        fJbvu = new Vec2f((float)rD.dlmvG.getWindow().getFramebufferWidth(), (float)rD.dlmvG.getWindow().getFramebufferHeight());
                        if (iSArray != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                }
                fJbvu = rm.diq();
            }
            catch (MatchException matchException) {
                throw rm.diw(matchException);
            }
        }
    }

    public static void dik() {
        rm.dil(2.0);
    }
}

