/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_3532
 *  net.minecraft.class_4587
 *  net.minecraft.class_742
 *  net.minecraft.class_9799
 *  org.joml.Matrix4fc
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_742;
import net.minecraft.class_9799;
import org.joml.Matrix4fc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jk;
import sixtwo.kR;
import sixtwo.lF;
import sixtwo.lT;
import sixtwo.mG;

public class ky {
    private static iS[] sZugG;
    private static final long IIrsF;
    private static final long nUFUt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        IIrsF = gb.aYR(5063248569340969831L, -5038562141169279977L, MethodHandles.lookup().lookupClass()).a(64925766217404L);
        long l = IIrsF ^ 0x172752733E7L;
        ky.bSe(null);
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = -5533034104330567558L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                nUFUt = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public static iS[] bSf() {
        return sZugG;
    }

    private static Throwable bSg(Throwable throwable) {
        return throwable;
    }

    public static void bSe(iS[] iSArray) {
        sZugG = iSArray;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public static void bSd(class_4587 var0, class_742 var1_1, mG var2_2, int var3_3) {
        block58: {
            block52: {
                var4_4 = ky.IIrsF ^ 6821386178283L;
                v0 = ky.bSf();
                lT.ciQ().setLineSmoothing(true);
                var6_5 = v0;
                var7_6 = var0.method_23760().method_23761();
                var8_7 = var1_1.method_17681();
                var9_8 = (int)ky.nUFUt;
                var10_9 /* !! */  = new class_9799(class_290.field_1576.getVertexSize() * (var9_8 + 1 + var9_8 + 1));
                try {
                    block51: {
                        block49: {
                            block48: {
                                block47: {
                                    var11_10 = new class_287(var10_9 /* !! */ , VertexFormat.class_5596.field_27381, class_290.field_1576);
                                    for (var12_12 = 0; var12_12 <= var9_8; ++var12_12) {
                                        var13_16 = jk.bDm(var12_12, var2_2, var3_3).con();
                                        try {
                                            var11_10.method_22918((Matrix4fc)var7_6, 0.0f, 0.3f, 0.0f).method_22915(var13_16[0], var13_16[1], var13_16[2], 40.0f);
                                            if (var6_5 != null) break block47;
                                            if (var6_5 == null) continue;
                                        }
                                        catch (Throwable v1) {
                                            throw ky.bSg(v1);
                                        }
                                        iS.bwK("LI3gec");
                                        break;
                                    }
                                    var12_12 = 0;
                                }
                                while (var12_12 <= var9_8) {
                                    var13_16 = jk.bDm(var12_12, var2_2, var3_3).con();
                                    try {
                                        v2 = var11_10;
                                        if (var6_5 == null) {
                                            v2.method_22918((Matrix4fc)var7_6, -class_3532.method_15374((double)((float)var12_12 * 6.2831855f / (float)var9_8)) * var8_7, 0.0f, class_3532.method_15362((double)((float)var12_12 * 6.2831855f / (float)var9_8)) * var8_7).method_22915(var13_16[0], var13_16[1], var13_16[2], 40.0f);
                                            ++var12_12;
                                            if (var6_5 == null) continue;
                                            break;
                                        }
                                        break block48;
                                    }
                                    catch (Throwable v3) {
                                        throw ky.bSg(v3);
                                    }
                                }
                                v2 = var11_10;
                            }
                            var12_13 = v2.method_60794();
                            try {
                                block50: {
                                    v4 = var12_13;
                                    if (var6_5 != null) break block49;
                                    try {
                                        block60: {
                                            if (v4 == null) break block50;
                                            break block60;
                                            catch (Throwable v5) {
                                                throw ky.bSg(v5);
                                            }
                                        }
                                        lF.cfX(kR.CDFBk, var12_13);
                                    }
                                    catch (Throwable v6) {
                                        throw ky.bSg(v6);
                                    }
                                }
                                v4 = var12_13;
                            }
                            catch (Throwable var13_17) {
                                block53: {
                                    try {
                                        v7 = var12_13;
                                        if (var6_5 == null) {
                                            if (v7 == null) break block53;
                                        }
                                        ** GOTO lbl68
                                    }
                                    catch (Throwable v8) {
                                        throw ky.bSg(v8);
                                    }
                                    try {
                                        v7 = var12_13;
lbl68:
                                        // 2 sources

                                        v7.close();
                                    }
                                    catch (Throwable var14_21) {
                                        var13_17.addSuppressed(var14_21);
                                    }
                                }
                                throw var13_17;
                            }
                        }
                        try {
                            if (var6_5 != null) break block51;
                            if (v4 == null) break block52;
                        }
                        catch (Throwable v9) {
                            throw ky.bSg(v9);
                        }
                        v4 = var12_13;
                    }
                    v4.close();
                }
                finally {
                    var10_9 /* !! */ .close();
                }
            }
            var10_9 /* !! */  = (class_9799)jk.bDm(var9_8, var2_2, var3_3).con();
            var11_10 = new class_9799(class_290.field_1576.getVertexSize() * (var9_8 + 2));
            try {
                block57: {
                    block55: {
                        block54: {
                            var12_13 = new class_287((class_9799)var11_10, VertexFormat.class_5596.field_29345, class_290.field_1576);
                            for (var13_18 = 0; var13_18 <= var9_8; ++var13_18) {
                                var14_22 = jk.bDm(var13_18, var2_2, var3_3).con();
                                var12_13.method_22918((Matrix4fc)var7_6, -class_3532.method_15374((double)((float)var13_18 * 6.2831855f / (float)var9_8)) * var8_7, 0.0f, class_3532.method_15362((double)((float)var13_18 * 6.2831855f / (float)var9_8)) * var8_7).method_22915(var14_22[0], var14_22[1], var14_22[2], 40.0f);
                                var10_9 /* !! */  = (class_9799)var14_22;
                                try {
                                    if (var6_5 == null) {
                                        if (var6_5 == null) continue;
                                        break;
                                    }
                                    break block54;
                                }
                                catch (Throwable v10) {
                                    throw ky.bSg(v10);
                                }
                            }
                            var12_13.method_22918((Matrix4fc)var7_6, -class_3532.method_15374((double)0.0) * var8_7, 0.0f, class_3532.method_15362((double)0.0) * var8_7).method_22915((float)var10_9 /* !! */ [0], (float)var10_9 /* !! */ [1], (float)var10_9 /* !! */ [2], 40.0f);
                        }
                        var13_19 = var12_13.method_60794();
                        try {
                            block56: {
                                v11 = var13_19;
                                if (var6_5 != null) break block55;
                                try {
                                    block61: {
                                        if (v11 == null) break block56;
                                        break block61;
                                        catch (Throwable v12) {
                                            throw ky.bSg(v12);
                                        }
                                    }
                                    lF.cfX(kR.Uzcne, var13_19);
                                }
                                catch (Throwable v13) {
                                    throw ky.bSg(v13);
                                }
                            }
                            v11 = var13_19;
                        }
                        catch (Throwable var14_23) {
                            block59: {
                                try {
                                    v14 = var13_19;
                                    if (var6_5 == null) {
                                        if (v14 == null) break block59;
                                    }
                                    ** GOTO lbl136
                                }
                                catch (Throwable v15) {
                                    throw ky.bSg(v15);
                                }
                                try {
                                    v14 = var13_19;
lbl136:
                                    // 2 sources

                                    v14.close();
                                }
                                catch (Throwable var15_24) {
                                    var14_23.addSuppressed(var15_24);
                                }
                            }
                            throw var14_23;
                        }
                    }
                    try {
                        if (var6_5 != null) break block57;
                        if (v11 == null) break block58;
                    }
                    catch (Throwable v16) {
                        throw ky.bSg(v16);
                    }
                    v11 = var13_19;
                }
                v11.close();
            }
            finally {
                var11_10.close();
            }
        }
        lT.ciQ().setLineSmoothing(false);
    }
}
