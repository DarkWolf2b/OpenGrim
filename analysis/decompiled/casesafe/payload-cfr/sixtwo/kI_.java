/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_238
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_4587
 *  net.minecraft.class_9799
 *  org.joml.Matrix4f
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
import net.minecraft.class_238;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_4587;
import net.minecraft.class_9799;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import sixtwo.gb;
import sixtwo.kC;
import sixtwo.kJ;
import sixtwo.kQ;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.lF;
import sixtwo.lT;
import sixtwo.lh;
import sixtwo.mG;

public class kI
extends kQ<kC> {
    private static final kS ycoVK;
    private final class_9799 lhPSr;
    private class_287 kRoQN;
    private boolean oiwQk;
    private kS ndzku;
    private static final long LucMv;
    private static final long cFNAk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public kI() {
        long l = LucMv ^ 0x6B1AB6BB2FF2L;
        this.lhPSr = new class_9799((int)cFNAk);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        LucMv = gb.aYR(74625261366909609L, -8283339496095112206L, MethodHandles.lookup().lookupClass()).a(7746435210437L);
        long l = LucMv ^ 0x5C6DAA652290L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = -2376035461498767251L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                cFNAk = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                ycoVK = kS.bVE().duk(lh.aApMr).duo(false).dul(true).dun(false).dup();
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    @Override
    public void flush() {
        this.bVj();
        this.bTT();
        this.bVi(VertexFormat.class_5596.field_29344, class_290.field_1576);
        this.bTU();
    }

    @Override
    public kS defaultState() {
        return ycoVK;
    }

    public void bTS(kC kC2) {
        block9: {
            int n;
            int n2;
            class_238 class_2382;
            class_4587 class_45872;
            block8: {
                boolean bl;
                block6: {
                    block7: {
                        long l = LucMv ^ 0x26A013D6220BL;
                        this.bVj();
                        class_45872 = kC2.bSM();
                        bl = kJ.bUi();
                        int n3 = kC2.bSO().coh();
                        class_2382 = kC2.bSN();
                        try {
                            this.bTV(class_45872, class_2382, n3);
                            n2 = kC2.bSR();
                            if (bl) break block6;
                            if (n2 == 0) break block7;
                        }
                        catch (MatchException matchException) {
                            throw kI.bTZ(matchException);
                        }
                        n = kC2.bSP().coh();
                        this.bTW(class_45872, class_2382, n);
                    }
                    n2 = kC2.bSS();
                }
                try {
                    try {
                        if (bl) break block8;
                        if (n2 == 0) break block9;
                    }
                    catch (MatchException matchException) {
                        throw kI.bTZ(matchException);
                    }
                    n2 = kC2.bSQ().coh();
                }
                catch (MatchException matchException) {
                    throw kI.bTZ(matchException);
                }
            }
            n = n2;
            this.bTX(class_45872, class_2382, n);
        }
    }

    @Override
    public void startBatch(kS kS2) {
        this.ndzku = kS2;
        lT.ciQ().setLineSmoothing(true);
        this.bVi(VertexFormat.class_5596.field_29344, class_290.field_1576);
    }

    @Override
    public void endBatch() {
        this.bVj();
        this.bTT();
        this.bTU();
        lT.ciQ().setLineSmoothing(false);
        this.bVl();
    }

    private static Throwable bTZ(Throwable throwable) {
        return throwable;
    }

    private void bTV(class_4587 class_45872, class_238 class_2382, int n) {
        float f = (float)class_2382.field_1323;
        float f2 = (float)class_2382.field_1322;
        float f3 = (float)class_2382.field_1321;
        float f4 = (float)class_2382.field_1320;
        float f5 = (float)class_2382.field_1325;
        float f6 = (float)class_2382.field_1324;
        float f7 = (f + f4) * 0.5f;
        float f8 = (f3 + f6) * 0.5f;
        Matrix4f matrix4f = class_45872.method_23760().method_23761();
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f7, f5, f8).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f7, f5, f8).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f7, f5, f8).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f7, f5, f8).method_39415(n);
    }

    private void bTX(class_4587 class_45872, class_238 class_2382, int n) {
        float f = (float)class_2382.field_1323;
        float f2 = (float)class_2382.field_1322;
        float f3 = (float)class_2382.field_1321;
        float f4 = (float)class_2382.field_1320;
        float f5 = (float)class_2382.field_1325;
        float f6 = (float)class_2382.field_1324;
        float f7 = (f + f4) * 0.5f;
        float f8 = (f3 + f6) * 0.5f;
        Matrix4f matrix4f = class_45872.method_23760().method_23761();
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f7, f2, f8).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f7, f5, f8).method_39415(n);
    }

    /*
     * Unable to fully structure code
     */
    private void bTT() {
        block14: {
            block13: {
                block11: {
                    var1_1 = kI.LucMv ^ 9133064678466L;
                    var4_2 = this.WfBOj.method_60794();
                    var3_3 = kJ.bUj();
                    try {
                        block12: {
                            try {
                                v0 = var4_2;
                                if (!var3_3) break block11;
                                if (v0 == null) break block12;
                            }
                            catch (Throwable v1) {
                                throw kI.bTZ(v1);
                            }
                            var5_4 = kR.MTMwE.bUZ(this.ndzku);
                            lF.cfW(var5_4, var4_2);
                        }
                        v0 = var4_2;
                    }
                    catch (Throwable var5_5) {
                        block15: {
                            try {
                                v2 = var4_2;
                                if (var3_3) {
                                    if (v2 == null) break block15;
                                }
                                ** GOTO lbl27
                            }
                            catch (Throwable v3) {
                                throw kI.bTZ(v3);
                            }
                            try {
                                v2 = var4_2;
lbl27:
                                // 2 sources

                                v2.close();
                            }
                            catch (Throwable var6_6) {
                                var5_5.addSuppressed(var6_6);
                            }
                        }
                        throw var5_5;
                    }
                }
                try {
                    if (!var3_3) break block13;
                    if (v0 == null) break block14;
                }
                catch (Throwable v4) {
                    throw kI.bTZ(v4);
                }
                v0 = var4_2;
            }
            v0.close();
        }
    }

    /*
     * Unable to fully structure code
     */
    private void bTU() {
        block16: {
            block20: {
                block19: {
                    block17: {
                        block15: {
                            var1_1 = kI.LucMv ^ 42963436514698L;
                            var3_2 = kJ.bUj();
                            v0 = this;
                            if (!var3_2) break block15;
                            try {
                                block22: {
                                    if (!v0.oiwQk) break block16;
                                    break block22;
                                    catch (Throwable v1) {
                                        throw kI.bTZ(v1);
                                    }
                                }
                                v0 = this;
                            }
                            catch (Throwable v2) {
                                throw kI.bTZ(v2);
                            }
                        }
                        var4_3 = v0.kRoQN.method_60794();
                        try {
                            block18: {
                                try {
                                    v3 = var4_3;
                                    if (!var3_2) break block17;
                                    if (v3 == null) break block18;
                                }
                                catch (Throwable v4) {
                                    throw kI.bTZ(v4);
                                }
                                var5_4 = kR.meLIO.bUZ(this.ndzku);
                                lF.cfW(var5_4, var4_3);
                            }
                            v3 = var4_3;
                        }
                        catch (Throwable var5_5) {
                            block21: {
                                try {
                                    v5 = var4_3;
                                    if (var3_2) {
                                        if (v5 == null) break block21;
                                    }
                                    ** GOTO lbl41
                                }
                                catch (Throwable v6) {
                                    throw kI.bTZ(v6);
                                }
                                try {
                                    v5 = var4_3;
lbl41:
                                    // 2 sources

                                    v5.close();
                                }
                                catch (Throwable var6_6) {
                                    var5_5.addSuppressed(var6_6);
                                }
                            }
                            throw var5_5;
                        }
                    }
                    try {
                        if (!var3_2) break block19;
                        if (v3 == null) break block20;
                    }
                    catch (Throwable v7) {
                        throw kI.bTZ(v7);
                    }
                    v3 = var4_3;
                }
                v3.close();
            }
            this.oiwQk = false;
        }
    }

    private void bTY(Matrix4f matrix4f, float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, int n) {
        this.kRoQN.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n);
        this.kRoQN.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n);
        this.kRoQN.method_22918((Matrix4fc)matrix4f, f7, f8, f9).method_39415(n);
    }

    private void bTW(class_4587 class_45872, class_238 class_2382, int n) {
        int n2;
        block4: {
            block5: {
                long l = LucMv ^ 0x68D7E7E37803L;
                boolean bl = kJ.bUi();
                try {
                    try {
                        n2 = this.oiwQk;
                        if (bl) break block4;
                        if (n2 != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kI.bTZ(matchException);
                    }
                    this.kRoQN = new class_287(this.lhPSr, VertexFormat.class_5596.field_27380, class_290.field_1576);
                    this.oiwQk = true;
                }
                catch (MatchException matchException) {
                    throw kI.bTZ(matchException);
                }
            }
            n2 = mG.cnQ(n).cob(0.5f).coh();
        }
        int n3 = n2;
        float f = (float)class_2382.field_1323;
        float f2 = (float)class_2382.field_1322;
        float f3 = (float)class_2382.field_1321;
        float f4 = (float)class_2382.field_1320;
        float f5 = (float)class_2382.field_1325;
        float f6 = (float)class_2382.field_1324;
        float f7 = (f + f4) * 0.5f;
        float f8 = (f3 + f6) * 0.5f;
        Matrix4f matrix4f = class_45872.method_23760().method_23761();
        this.bTY(matrix4f, f, f2, f3, f4, f2, f3, f4, f2, f6, n3);
        this.bTY(matrix4f, f, f2, f3, f4, f2, f6, f, f2, f6, n3);
        this.bTY(matrix4f, f, f2, f3, f4, f2, f3, f7, f5, f8, n3);
        this.bTY(matrix4f, f4, f2, f3, f4, f2, f6, f7, f5, f8, n3);
        this.bTY(matrix4f, f4, f2, f6, f, f2, f6, f7, f5, f8, n3);
        this.bTY(matrix4f, f, f2, f6, f, f2, f3, f7, f5, f8, n3);
    }
}
