/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.buffers.GpuBuffer
 *  com.mojang.blaze3d.buffers.GpuBufferSlice
 *  com.mojang.blaze3d.buffers.Std140Builder
 *  com.mojang.blaze3d.systems.RenderSystem
 *  net.minecraft.class_10366
 *  net.minecraft.class_1041
 *  net.minecraft.class_241
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.lwjgl.system.MemoryStack
 */
package sixtwo;

import com.mojang.blaze3d.buffers.GpuBuffer;
import com.mojang.blaze3d.buffers.GpuBufferSlice;
import com.mojang.blaze3d.buffers.Std140Builder;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10366;
import net.minecraft.class_1041;
import net.minecraft.class_241;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.lwjgl.system.MemoryStack;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.rD;

public class rm {
    public static boolean YaBsy;
    private static double HRPnj;
    private static class_241 fJbvu;
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
        long l = LAGIc ^ 0x60B26FE4D15AL;
        rm.diu(new iS[3]);
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        byte[] byArray3 = cipher.doFinal(",\u0092\u0095+9\u00baK\u00d6G\u00e20D\u0087\u00a7\u00c4\u00ac".getBytes("ISO-8859-1"));
        pxuqz = rm.dix(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l2 = -1771248824631046976L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                DMPeE = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                YaBsy = false;
                HRPnj = 2.0;
                fJbvu = class_241.field_1340;
                LBUTr = new Matrix4f();
                return;
            }
            byArray5 = byArray5;
            byArray5[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public static class_241 dir(double d, double d2, double d3) {
        double d4;
        double d5;
        block13: {
            double d6;
            block11: {
                int n;
                block12: {
                    double d7;
                    iS[] iSArray;
                    block10: {
                        double d8;
                        block8: {
                            int n2;
                            block9: {
                                long l = LAGIc ^ 0x23FF2FB3A6ABL;
                                n2 = (int)(d / d3);
                                iSArray = rm.div();
                                try {
                                    try {
                                        double d9 = d / d3 - (double)n2;
                                        d8 = d9 == 0.0 ? 0 : (d9 > 0.0 ? 1 : -1);
                                        if (iSArray == null) break block8;
                                        if (d8 <= 0) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw rm.diw(matchException);
                                    }
                                    d7 = n2 + 1;
                                    break block10;
                                }
                                catch (MatchException matchException) {
                                    throw rm.diw(matchException);
                                }
                            }
                            d8 = n2;
                        }
                        d7 = d8;
                    }
                    d5 = d7;
                    n = (int)(d2 / d3);
                    try {
                        try {
                            double d10 = d2 / d3 - (double)n;
                            d6 = d10 == 0.0 ? 0 : (d10 > 0.0 ? 1 : -1);
                            if (iSArray == null) break block11;
                            if (d6 <= 0) break block12;
                        }
                        catch (MatchException matchException) {
                            throw rm.diw(matchException);
                        }
                        d4 = n + 1;
                        break block13;
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                }
                d6 = n;
            }
            d4 = d6;
        }
        double d11 = d4;
        return new class_241((float)d5, (float)d11);
    }

    public static class_241 dis() {
        class_241 class_2412 = rm.diq();
        float f = (float)(rD.dlmvG.field_1729.method_1603() * (double)class_2412.field_1343 / (double)rD.dlmvG.method_22683().method_4480());
        float f2 = (float)(rD.dlmvG.field_1729.method_1604() * (double)class_2412.field_1342 / (double)rD.dlmvG.method_22683().method_4507());
        return new class_241(f, f2);
    }

    public static iS[] div() {
        return XFAew;
    }

    public static void dim() {
        Matrix4f matrix4f = new Matrix4f().setOrtho(0.0f, (float)(rD.dlmvG.method_22683().method_4489() / rD.dlmvG.method_22683().method_4495()), (float)(rD.dlmvG.method_22683().method_4506() / rD.dlmvG.method_22683().method_4495()), 0.0f, 1000.0f, 21000.0f);
        rm.dii(matrix4f, class_10366.field_54954);
        YaBsy = false;
        rm.din();
    }

    public static class_241 diq() {
        class_241 class_2412;
        double d;
        double d2;
        block16: {
            double d3;
            block14: {
                int n;
                block15: {
                    double d4;
                    iS[] iSArray;
                    class_1041 class_10412;
                    block13: {
                        double d5;
                        block11: {
                            int n2;
                            block12: {
                                long l = LAGIc ^ 0x1428465AF3BL;
                                class_10412 = rD.dlmvG.method_22683();
                                iSArray = rm.div();
                                n2 = (int)((double)class_10412.method_4489() / HRPnj);
                                try {
                                    try {
                                        double d6 = (double)class_10412.method_4489() / HRPnj - (double)n2;
                                        d5 = d6 == 0.0 ? 0 : (d6 > 0.0 ? 1 : -1);
                                        if (iSArray == null) break block11;
                                        if (d5 <= 0) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw rm.diw(matchException);
                                    }
                                    d4 = n2 + 1;
                                    break block13;
                                }
                                catch (MatchException matchException) {
                                    throw rm.diw(matchException);
                                }
                            }
                            d5 = n2;
                        }
                        d4 = d5;
                    }
                    d2 = d4;
                    n = (int)((double)class_10412.method_4506() / HRPnj);
                    try {
                        try {
                            double d7 = (double)class_10412.method_4506() / HRPnj - (double)n;
                            d3 = d7 == 0.0 ? 0 : (d7 > 0.0 ? 1 : -1);
                            if (iSArray == null) break block14;
                            if (d3 <= 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw rm.diw(matchException);
                        }
                        d = n + 1;
                        break block16;
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                }
                d3 = n;
            }
            d = d3;
        }
        double d8 = d;
        try {
            class_2412 = new class_241((float)d2, (float)d8);
            if (iS.bwL() == null) {
                rm.diu(new iS[5]);
            }
        }
        catch (MatchException matchException) {
            throw rm.diw(matchException);
        }
        return class_2412;
    }

    private static Throwable diw(Throwable throwable) {
        return throwable;
    }

    public static Matrix4f dij() {
        return LBUTr;
    }

    public static void dil(double d) {
        Matrix4f matrix4f = new Matrix4f().setOrtho(0.0f, (float)((double)rD.dlmvG.method_22683().method_4489() / d), (float)((double)rD.dlmvG.method_22683().method_4506() / d), 0.0f, 1000.0f, 21000.0f);
        rm.dii(matrix4f, class_10366.field_54954);
        YaBsy = true;
        HRPnj = d;
        rm.din();
    }

    public static void diu(iS[] iSArray) {
        XFAew = iSArray;
    }

    private static String dix(byte[] byArray) {
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

    private static void dih() {
        block5: {
            GpuBuffer gpuBuffer;
            block4: {
                long l = LAGIc ^ 0x7C77BD8DE9CAL;
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
                        long l = LAGIc ^ 0x4A490EB13CA2L;
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
        double d;
        block9: {
            int n;
            block7: {
                block8: {
                    long l = LAGIc ^ 0x29444E315089L;
                    iS[] iSArray = rm.div();
                    try {
                        if (rD.dlmvG.method_22683() == null) {
                            return 2;
                        }
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                    try {
                        try {
                            n = YaBsy;
                            if (iSArray == null) break block7;
                            if (n == 0) break block8;
                        }
                        catch (MatchException matchException) {
                            throw rm.diw(matchException);
                        }
                        d = HRPnj;
                        break block9;
                    }
                    catch (MatchException matchException) {
                        throw rm.diw(matchException);
                    }
                }
                n = rD.dlmvG.method_22683().method_4495();
            }
            d = n;
        }
        return d;
    }

    public static class_241 dip() {
        return fJbvu;
    }

    /*
     * Unable to fully structure code
     */
    private static void dii(Matrix4f var0, class_10366 var1_1) {
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

            RenderSystem.setProjectionMatrix((GpuBufferSlice)rm.eLWOo, (class_10366)var1_1);
        }
    }

    private static void din() {
        block5: {
            long l = LAGIc ^ 0x30C2A38258F8L;
            iS[] iSArray = rm.div();
            try {
                block4: {
                    try {
                        if (YaBsy) break block4;
                        fJbvu = new class_241((float)rD.dlmvG.method_22683().method_4489(), (float)rD.dlmvG.method_22683().method_4506());
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
