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
import sixtwo.kH;
import sixtwo.kJ;
import sixtwo.kQ;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.lF;
import sixtwo.lT;
import sixtwo.lh;
import sixtwo.mG;

public class kN
extends kQ<kH> {
    private static final kS WtlYB;
    private final class_9799 SEJzU;
    private class_287 yzZWb;
    private boolean ZoEfi;
    private kS BMkDs;
    private static final long yQFgm;
    private static final long xpgEf;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public kN() {
        long l = yQFgm ^ 0x7B24B4C25517L;
        this.SEJzU = new class_9799((int)xpgEf);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        yQFgm = gb.aYR(-4104447264869764605L, 6651616731393957419L, MethodHandles.lookup().lookupClass()).a(262061921378630L);
        long l = yQFgm ^ 0x49F0AD667392L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = 7252057620193234991L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                xpgEf = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                WtlYB = kS.bVE().duk(lh.aApMr).duo(false).dul(false).dun(true).dup();
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
        this.bUT();
        this.bVi(VertexFormat.class_5596.field_29344, class_290.field_1576);
        this.bUU();
    }

    @Override
    public kS defaultState() {
        return WtlYB;
    }

    public void bUS(kH kH2) {
        block9: {
            int n;
            int n2;
            class_238 class_2382;
            class_4587 class_45872;
            block8: {
                boolean bl;
                block6: {
                    block7: {
                        long l = yQFgm ^ 0x334180EB5EDEL;
                        boolean bl2 = kJ.bUj();
                        this.bVj();
                        bl = bl2;
                        class_45872 = kH2.bTL();
                        int n3 = kH2.bTN().coh();
                        class_2382 = kH2.bTM();
                        try {
                            this.bUV(class_45872, class_2382, n3);
                            n2 = kH2.bTQ();
                            if (!bl) break block6;
                            if (n2 == 0) break block7;
                        }
                        catch (MatchException matchException) {
                            throw kN.bUY(matchException);
                        }
                        n = kH2.bTO().coh();
                        this.bUW(class_45872, class_2382, n);
                    }
                    n2 = kH2.bTR();
                }
                try {
                    try {
                        if (!bl) break block8;
                        if (n2 == 0) break block9;
                    }
                    catch (MatchException matchException) {
                        throw kN.bUY(matchException);
                    }
                    n2 = kH2.bTP().coh();
                }
                catch (MatchException matchException) {
                    throw kN.bUY(matchException);
                }
            }
            n = n2;
            this.bUX(class_45872, class_2382, n);
        }
    }

    @Override
    public void startBatch(kS kS2) {
        this.BMkDs = kS2;
        lT.ciQ().setLineSmoothing(true);
        this.bVi(VertexFormat.class_5596.field_29344, class_290.field_1576);
    }

    @Override
    public void endBatch() {
        this.bVj();
        this.bUT();
        this.bUU();
        lT.ciQ().setLineSmoothing(false);
        this.bVl();
    }

    private static Throwable bUY(Throwable throwable) {
        return throwable;
    }

    private void bUX(class_4587 class_45872, class_238 class_2382, int n) {
        float f = (float)class_2382.field_1323;
        float f2 = (float)class_2382.field_1322;
        float f3 = (float)class_2382.field_1321;
        float f4 = (float)class_2382.field_1320;
        float f5 = (float)class_2382.field_1325;
        float f6 = (float)class_2382.field_1324;
        Matrix4f matrix4f = class_45872.method_23760().method_23761();
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_39415(n);
    }

    private void bUV(class_4587 class_45872, class_238 class_2382, int n) {
        float f = (float)class_2382.field_1323;
        float f2 = (float)class_2382.field_1322;
        float f3 = (float)class_2382.field_1321;
        float f4 = (float)class_2382.field_1320;
        float f5 = (float)class_2382.field_1325;
        float f6 = (float)class_2382.field_1324;
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
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_39415(n);
        this.WfBOj.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_39415(n);
    }

    private void bUW(class_4587 class_45872, class_238 class_2382, int n) {
        int n2;
        block4: {
            block5: {
                long l = yQFgm ^ 0x4D8CCD530F2EL;
                boolean bl = kJ.bUj();
                try {
                    try {
                        n2 = this.ZoEfi;
                        if (!bl) break block4;
                        if (n2 != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kN.bUY(matchException);
                    }
                    this.yzZWb = new class_287(this.SEJzU, VertexFormat.class_5596.field_27380, class_290.field_1576);
                    this.ZoEfi = true;
                }
                catch (MatchException matchException) {
                    throw kN.bUY(matchException);
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
        Matrix4f matrix4f = class_45872.method_23760().method_23761();
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n3);
        this.yzZWb.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n3);
    }

    /*
     * Unable to fully structure code
     */
    private void bUT() {
        block14: {
            block13: {
                block11: {
                    var1_1 = kN.yQFgm ^ 74048797244501L;
                    var4_2 = this.WfBOj.method_60794();
                    var3_3 = kJ.bUi();
                    try {
                        block12: {
                            try {
                                v0 = var4_2;
                                if (var3_3) break block11;
                                if (v0 == null) break block12;
                            }
                            catch (Throwable v1) {
                                throw kN.bUY(v1);
                            }
                            var5_4 = kR.DFLLz.bUZ(this.BMkDs);
                            lF.cfW(var5_4, var4_2);
                        }
                        v0 = var4_2;
                    }
                    catch (Throwable var5_5) {
                        block15: {
                            try {
                                v2 = var4_2;
                                if (!var3_3) {
                                    if (v2 == null) break block15;
                                }
                                ** GOTO lbl27
                            }
                            catch (Throwable v3) {
                                throw kN.bUY(v3);
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
                    if (var3_3) break block13;
                    if (v0 == null) break block14;
                }
                catch (Throwable v4) {
                    throw kN.bUY(v4);
                }
                v0 = var4_2;
            }
            v0.close();
        }
    }

    /*
     * Unable to fully structure code
     */
    private void bUU() {
        block16: {
            block20: {
                block19: {
                    block17: {
                        block15: {
                            var1_1 = kN.yQFgm ^ 127182362562703L;
                            var3_2 = kJ.bUi();
                            v0 = this;
                            if (var3_2) break block15;
                            try {
                                block22: {
                                    if (!v0.ZoEfi) break block16;
                                    break block22;
                                    catch (Throwable v1) {
                                        throw kN.bUY(v1);
                                    }
                                }
                                v0 = this;
                            }
                            catch (Throwable v2) {
                                throw kN.bUY(v2);
                            }
                        }
                        var4_3 = v0.yzZWb.method_60794();
                        try {
                            block18: {
                                try {
                                    v3 = var4_3;
                                    if (var3_2) break block17;
                                    if (v3 == null) break block18;
                                }
                                catch (Throwable v4) {
                                    throw kN.bUY(v4);
                                }
                                var5_4 = kR.EIAsr.bUZ(this.BMkDs);
                                lF.cfW(var5_4, var4_3);
                            }
                            v3 = var4_3;
                        }
                        catch (Throwable var5_5) {
                            block21: {
                                try {
                                    v5 = var4_3;
                                    if (!var3_2) {
                                        if (v5 == null) break block21;
                                    }
                                    ** GOTO lbl41
                                }
                                catch (Throwable v6) {
                                    throw kN.bUY(v6);
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
                        if (var3_2) break block19;
                        if (v3 == null) break block20;
                    }
                    catch (Throwable v7) {
                        throw kN.bUY(v7);
                    }
                    v3 = var4_3;
                }
                v3.close();
            }
            this.ZoEfi = false;
        }
    }
}
