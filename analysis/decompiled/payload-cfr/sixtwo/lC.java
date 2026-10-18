/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.textures.GpuTextureView
 *  net.minecraft.class_10017
 *  net.minecraft.class_1044
 *  net.minecraft.class_1309
 *  net.minecraft.class_1792
 *  net.minecraft.class_1799
 *  net.minecraft.class_1937
 *  net.minecraft.class_241
 *  net.minecraft.class_2561
 *  net.minecraft.class_2960
 *  net.minecraft.class_332
 *  net.minecraft.class_591
 *  net.minecraft.class_742
 *  org.joml.Matrix3x2f
 *  org.joml.Matrix3x2fStack
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 */
package sixtwo;

import com.mojang.blaze3d.textures.GpuTextureView;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Iterator;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10017;
import net.minecraft.class_1044;
import net.minecraft.class_1309;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_1937;
import net.minecraft.class_241;
import net.minecraft.class_2561;
import net.minecraft.class_2960;
import net.minecraft.class_332;
import net.minecraft.class_591;
import net.minecraft.class_742;
import org.joml.Matrix3x2f;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import sixtwo.fX;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jI;
import sixtwo.jO;
import sixtwo.jQ;
import sixtwo.jR;
import sixtwo.jS;
import sixtwo.jf;
import sixtwo.jq;
import sixtwo.jt;
import sixtwo.jv;
import sixtwo.jw;
import sixtwo.kD;
import sixtwo.kJ;
import sixtwo.kd;
import sixtwo.kg;
import sixtwo.kk;
import sixtwo.lA;
import sixtwo.lE;
import sixtwo.lG;
import sixtwo.lH;
import sixtwo.lI;
import sixtwo.la;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lk;
import sixtwo.lm;
import sixtwo.lm$uy;
import sixtwo.ln;
import sixtwo.lq;
import sixtwo.lt;
import sixtwo.mG;
import sixtwo.mZ;
import sixtwo.ob;
import sixtwo.rD;

public class lC
implements lA {
    private static final float[] QrdDz;
    private static final float[] UboFN;
    private static final mG[] FdGpR;
    private final class_332 gkqYk;
    private final double nNqYD;
    private final double zfODx;
    private final float ULemC;
    private final lH jfMHu = new lH();
    private static String[] HTqbJ;
    private static final long XYAuN;
    private static final String yqAUB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public void ceI(lq lq2, int[] nArray, float f, float f2, mG mG2, float f3, float f4, float f5) {
        ln.bZK(lq2.cav(), nArray, lq2.caw(), mG2, this.cfd(), f, f2, 0.0f, true, f3, f4, f5);
    }

    public double cff() {
        return this.nNqYD;
    }

    private lC(class_332 class_3322, double d, double d2, float f) {
        this.gkqYk = class_3322;
        this.nNqYD = d;
        this.zfODx = d2;
        this.ULemC = f;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block12: {
            block11: {
                block13: {
                    lC.XYAuN = gb.aYR(9174257704294028186L, -8694921797359866973L, MethodHandles.lookup().lookupClass()).a(130204071138436L);
                    var14 = lC.XYAuN ^ 72447704044021L;
                    if (lC.cfk() != null) {
                        lC.cfj(new String[2]);
                    }
                    var11_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var14 >>> 56);
                    for (var12_2 = 1; var12_2 < 8; ++var12_2) {
                        v2 = v2;
                        v2[var12_2] = (byte)(var14 << var12_2 * 8 >>> 56);
                    }
                    break block13;
lbl15:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var11_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var13_3 = var11_1.doFinal("k\u00f9VC`\u0098\u0002>".getBytes("ISO-8859-1"));
                ** while (true)
                lC.yqAUB = lC.cfm(var13_3).intern();
                var1_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var14 >>> 56);
                for (var2_5 = 1; var2_5 < 8; ++var2_5) {
                    v5 = v5;
                    v5[var2_5] = (byte)(var14 << var2_5 * 8 >>> 56);
                }
                var1_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var0_6 = new long[4];
                var4_7 = 0;
                var5_8 = "0\u00ae\u0015\u001dK\u00bb\u0082o\u00eay`\u00a8\u0089\u008b\u00fd\u00f4";
                var6_9 = "0\u00ae\u0015\u001dK\u00bb\u0082o\u00eay`\u00a8\u0089\u008b\u00fd\u00f4".length();
                var3_10 = 0;
                while (true) {
                    var7_11 = var5_8.substring(var3_10, var3_10 += 8).getBytes("ISO-8859-1");
                    v6 = var0_6;
                    v7 = var4_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block11;
                    break;
                }
lbl45:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var3_10 < var6_9) ** continue;
                    var5_8 = "\u00c3\u00fa\u00b3O\u0084D\u0087$\u000b\u00b7\u00cc\u001e3\u0010\u0017\u0083";
                    var6_9 = "\u00c3\u00fa\u00b3O\u0084D\u0087$\u000b\u00b7\u00cc\u001e3\u0010\u0017\u0083".length();
                    var3_10 = 0;
                    while (true) {
                        var7_11 = var5_8.substring(var3_10, var3_10 += 8).getBytes("ISO-8859-1");
                        v6 = var0_6;
                        v7 = var4_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block11;
                        break;
                    }
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var3_10 < var6_9) ** continue;
                    break block12;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var1_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl71:
                // 1 sources

                ** continue;
            }
        }
        v11 = new float[(int)var0_6[2]];
        v11[0] = 0.0f;
        v11[1] = 0.16666667f;
        v11[2] = 0.33333334f;
        v11[3] = 0.5f;
        v11[4] = 0.6666667f;
        v11[5] = 0.8333333f;
        v11[(int)var0_6[0]] = 1.0f;
        lC.QrdDz = v11;
        lC.UboFN = new float[]{0.0f, 1.0f};
        v12 = new mG[(int)var0_6[3]];
        v12[0] = mG.cnP(255.0f, 0.0f, 0.0f);
        v12[1] = mG.cnP(255.0f, 255.0f, 0.0f);
        v12[2] = mG.cnP(0.0f, 255.0f, 0.0f);
        v12[3] = mG.cnP(0.0f, 255.0f, 255.0f);
        v12[4] = mG.cnP(0.0f, 0.0f, 255.0f);
        v12[5] = mG.cnP(255.0f, 0.0f, 255.0f);
        v12[(int)var0_6[1]] = mG.cnP(255.0f, 0.0f, 0.0f);
        lC.FdGpR = v12;
    }

    public void cee(class_1044 class_10442, float f, float f2, float f3, float f4, ld ld2) {
        this.cef(class_10442, f, f2, f3, f4, ld2, mG.hoGuU);
    }

    public class_332 cfe() {
        return this.gkqYk;
    }

    public void cdt(class_241 class_2412, class_241 class_2413, class_241 class_2414, class_241 class_2415, float f, mG mG2) {
        dcFcr.bND(jQ.bLz(this.gkqYk.method_51448(), class_2412, class_2413, class_2414, class_2415).drs(f).drr(mG2).dru());
    }

    public double cfg() {
        return this.zfODx;
    }

    public void cen(lf lf2, float f, float f2, float f3, float f4, mG mG2) {
        this.ceo(lf2, f, f2, f3, f3, f4, mG2);
    }

    public static lC ccP(class_332 class_3322, double d, double d2, float f) {
        return new lC(class_3322, d, d2, f);
    }

    public void ccR() {
        this.jfMHu.cgp();
    }

    public kg ccT(kd kd2, lc lc2) {
        return new kg(this, kd2, lc2);
    }

    public static String[] cfk() {
        return HTqbJ;
    }

    public void cdb(float f, float f2, float f3, ld ld2, mG mG2) {
        long l = XYAuN ^ 0x2711DF1A5325L;
        this.cef(ob.cBv(yqAUB), f, f2, f3, f3, ld2, mG2);
    }

    public void ccZ(class_742 class_7422, float f, float f2, float f3, ld ld2, mG mG2) {
        this.cda(class_7422.method_52814().comp_1626().comp_3627(), f, f2, f3, ld2, mG2);
    }

    public void cdm(float f, float f2, float f3, float f4, float f5, ld ld2, mG mG2) {
        this.cdk(kd.sQVlR, f, f2, f3, f4, ld2, f5, mG2);
    }

    public void cej(float f, float f2, float f3, float f4, float f5, ld ld2, float f6) {
        this.cek(kd.sQVlR, f, f2, f3, f4, f5, ld2, f6);
    }

    public void ceV() {
        this.gkqYk.method_51448().pushMatrix();
    }

    public void cfb(float f, float f2, float f3) {
        this.gkqYk.method_51448().rotateAbout((float)Math.toRadians(f3), f, f2);
    }

    public void ceW() {
        this.gkqYk.method_51448().popMatrix();
    }

    public float cfh() {
        return this.ULemC;
    }

    public void cdg(float f, float f2, float f3, float f4, ld ld2, mG mG2) {
        this.ccS(kd.AhlXN, f, f2, f3, f4).bOu(ld2).bOv(mG2).bOX();
    }

    public void ccW(float f, float f2, float f3, float f4, float f5, float f6, ld ld2, float f7) {
        block9: {
            mG mG2;
            ii ii2;
            block8: {
                boolean bl;
                String[] stringArray;
                block6: {
                    block7: {
                        long l = XYAuN ^ 0x2E2D6C2DA3BAL;
                        ii2 = rD.dlM();
                        stringArray = lC.cfk();
                        try {
                            try {
                                bl = fX.aYf();
                                if (stringArray != null) break block6;
                                if (!bl) break block7;
                            }
                            catch (MatchException matchException) {
                                throw lC.cfl(matchException);
                            }
                            this.ccS(kd.sQVlR, f, f2, f3, f4).bOu(ld2).bOE(f7).bOv(mG.hoGuU.cob(f5)).bPb();
                        }
                        catch (MatchException matchException) {
                            throw lC.cfl(matchException);
                        }
                    }
                    bl = fX.aYe();
                }
                if (!bl) break block8;
                mG2 = ii2.bjn();
                mG mG3 = ii2.bjp();
                float f8 = ii2.bji();
                float f9 = ii2.bjj();
                float f10 = ii2.bjk();
                float f11 = ii2.bjl();
                float f12 = ii2.bjm();
                float f13 = ii2.bjo() * (1.0f - f6 * 0.5f);
                this.ccS(kd.sQVlR, f, f2, f3, f4).bOu(ld2.inflate(f13)).bOE(f7).bOO(f8).bOP(f9).bOQ(f10).bOR(f11).bON(f12).bOW(mG2).bOU(f13).bOV(mG3).bOv(mG.hoGuU.cob(f5)).bPc();
                if (stringArray == null) break block9;
            }
            mG2 = ii2.bjd().cob(fX.aYh() * f5);
            this.ccS(kd.sQVlR, f, f2, f3, f4).bOu(ld2).bOE(f7).bOv(mG2).bOX();
        }
    }

    public void ceP(lq lq2, String string, float f, float f2, mG mG2) {
        this.cez(lq2, string, f - lq2.cav().bYC(string, lq2.caw()), f2, mG2);
    }

    public void cez(lq lq2, String string, float f, float f2, mG mG2) {
        ln.bZG(lq2.cav(), string, lq2.caw(), mG2, this.cfd(), f, f2, 0.0f);
    }

    public void cem(lf lf2, float f, float f2, float f3, mG mG2) {
        this.ceo(lf2, f, f2, f3, f3, f3, mG2);
    }

    public void cdw(float f, float f2, float f3, float f4, float f5, float f6, mG mG2, float f7) {
        this.cdz(f, f2, f3, f3, f4, (float)Math.toRadians(f5), (float)Math.toRadians(f6), f7, mG2);
    }

    public void ceA(lq lq2, int[] nArray, float f, float f2, mG mG2) {
        ln.bZJ(lq2.cav(), nArray, lq2.caw(), mG2, this.cfd(), f, f2, 0.0f);
    }

    public void cdd(float f, float f2, float f3, mG mG2) {
        this.cdg(f, f2, f3, f3, ld.all(f3 / 2.0f), mG2);
    }

    public void cdj(lc lc2, mG mG2) {
        this.ccT(kd.AhlXN, lc2).bOv(mG2).bOX();
    }

    public void cdk(kd kd2, float f, float f2, float f3, float f4, ld ld2, float f5, mG mG2) {
        this.ccS(kd2, f, f2, f3, f4).bOu(ld2).bOE(f5).bOv(mG2).bOX();
    }

    public void ccX(float f, float f2, float f3, float f4, float f5, ld ld2, float f6) {
        ii ii2 = rD.dlM();
        this.ccS(kd.sQVlR, f, f2, f3, f4).bOu(ld2).bOE(f6).bOv(mG.hoGuU.cob(f5)).bPb();
        mG mG2 = ii2.bjd().cob(f5 * fX.aYi());
        this.ccS(kd.sQVlR, f, f2, f3, f4).bOu(ld2).bOE(f6).bOv(mG2).bOX();
    }

    public void cdP(float f, float f2, float f3, float f4, ld ld2, la la2, float f5) {
        this.ccS(kd.AhlXN, f, f2, f3, f4).bOu(ld2).bOw(la2).bOC(f5).bOX();
    }

    public void cde(float f, float f2, float f3, la la2) {
        this.cdO(f, f2, f3, f3, ld.all(f3 / 2.0f), la2);
    }

    public void ceH(lq lq2, String string, float f, float f2, mG mG2, float f3, float f4, float f5) {
        ln.bZH(lq2.cav(), string, lq2.caw(), mG2, this.cfd(), f, f2, 0.0f, true, f3, f4, f5);
    }

    public kg ccS(kd kd2, float f, float f2, float f3, float f4) {
        return new kg(this, kd2, f, f2, f3, f4);
    }

    private static MatchException cfl(MatchException matchException) {
        return matchException;
    }

    public void cda(class_2960 class_29602, float f, float f2, float f3, ld ld2, mG mG2) {
        long l = XYAuN ^ 0x578C1634372L;
        float f4 = 0.125f;
        String[] stringArray = lC.cfk();
        float f5 = 0.125f;
        float f6 = 0.25f;
        float f7 = 0.25f;
        class_1044 class_10442 = rD.dlmvG.method_1531().method_4619(class_29602);
        ntCFX.bMM(jO.bJI(this.gkqYk.method_51448(), f, f2, f3, f3).dqh(kd.AhlXN).dqm(class_10442).dqv(f4).dqw(f5).dqx(f6).dqy(f7).dqj(ld2).dqk(mG2).dqz());
        f4 = 0.625f;
        f6 = 0.75f;
        try {
            ntCFX.bMM(jO.bJI(this.gkqYk.method_51448(), f, f2, f3, f3).dqh(kd.AhlXN).dqm(class_10442).dqv(f4).dqw(f5).dqx(f6).dqy(f7).dqj(ld2).dqk(mG2).dqz());
            if (stringArray != null) {
                iS.bwK("JUd8F");
            }
        }
        catch (MatchException matchException) {
            throw lC.cfl(matchException);
        }
    }

    public void cef(class_1044 class_10442, float f, float f2, float f3, float f4, ld ld2, mG mG2) {
        this.ccS(kd.AhlXN, f, f2, f3, f4).bOx(class_10442).bOu(ld2).bOv(mG2).bOX();
    }

    public void cdO(float f, float f2, float f3, float f4, ld ld2, la la2) {
        this.cdS(kd.AhlXN, f, f2, f3, f4, 7.0f, ld2, la2);
    }

    public void cdf(lc lc2, ld ld2, mG mG2) {
        this.ccT(kd.AhlXN, lc2).bOu(ld2).bOv(mG2).bOX();
    }

    public void ceq(lf lf2, lc lc2, mG mG2) {
        this.ceo(lf2, lc2.bXF(), lc2.bXG(), lc2.bXH(), lc2.bXI(), lc2.bXH(), mG2);
    }

    public lC ccQ(lI lI2) {
        this.jfMHu.cgm(lI2);
        return this;
    }

    public void ccV(lc lc2, float f, float f2) {
        this.ccW(lc2.bXF(), lc2.bXG(), lc2.bXH(), lc2.bXI(), f, f2, ld.all(7.0f), 7.0f);
    }

    public void cdl(kd kd2, float f, float f2, float f3, float f4, float f5, ld ld2, float f6, mG mG2) {
        this.ccS(kd2, f, f2, f3, f4).bOu(ld2).bOE(f6).bOv(mG2).bOA(f5).bOX();
    }

    public void cdD(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        ekAdT.bNR(jS.bMc(this.gkqYk.method_51448(), f, f2, f3, f4).drW(f5).drX(f6).drY(f7).drZ(f8).dsh(true).dse(mG2).dso());
    }

    public static void cfj(String[] stringArray) {
        HTqbJ = stringArray;
    }

    public void cdB(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, mG mG2) {
        ekAdT.bNR(jS.bMc(this.gkqYk.method_51448(), f, f2, f3, f4).drW(f5).drX(f6).drY(f7).drZ(f8).dsf(f9).dse(mG2).dso());
    }

    public void cdN(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, float f10) {
        this.cdL(f, f2, f3, f4, f5, f6, (float)Math.toRadians(f7), (float)Math.toRadians(f8), f9, f10);
    }

    public void cdJ(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        GpuTextureView gpuTextureView = kk.bPN().method_71639();
        ekAdT.bNR(jS.bMc(this.gkqYk.method_51448(), f, f2, f3, f4).drW(f5).drX(f6).drY(f7).drZ(f8).dsc(gpuTextureView).dsd(lt.caX()).dsg(true).dsi(rD.dlmvG.method_22683().method_4489()).dsj(rD.dlmvG.method_22683().method_4506()).dse(mG2).dso());
    }

    public void cdE(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        this.cdD(f, f2, f3, f4, f5, f6, (float)Math.toRadians(f7), (float)Math.toRadians(f8), mG2);
    }

    public void cdI(class_1044 class_10442, float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        this.cdH(class_10442, f, f2, f3, f4, f5, f6, (float)Math.toRadians(f7), (float)Math.toRadians(f8), mG2);
    }

    public void ceg(kd kd2, class_1044 class_10442, float f, float f2, float f3, float f4, float f5, ld ld2, mG mG2) {
        this.ccS(kd2, f, f2, f3, f4).bOx(class_10442).bOu(ld2).bOE(f5).bOv(mG2).bOX();
    }

    public void cdr(float f, float f2, float f3, float f4, float f5, ld ld2, mG mG2) {
        this.cdl(kd.AhlXN, f, f2, f3, f4, f5, ld2, 7.0f, mG2);
    }

    public void cdA(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        this.cdB(f, f2, f3, f4, f5, f6, f7, f8, 0.75f, mG2);
    }

    public void cdn(lc lc2, float f, ld ld2, mG mG2) {
        this.cdk(kd.sQVlR, lc2.bXF(), lc2.bXG(), lc2.bXH(), lc2.bXI(), ld2, f, mG2);
    }

    public void cdz(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        KFXjg.bNK(jR.bLM(this.gkqYk.method_51448(), f, f2, f3, f4).drG(f5).drH(f6).drI(f7).drK(f8).drJ(mG2).drL());
    }

    public void cdC(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        this.cdA(f, f2, f3, f4, f5, f6, (float)Math.toRadians(f7), (float)Math.toRadians(f8), mG2);
    }

    public void cds(kd kd2, float f, float f2, float f3, float f4, float f5, ld ld2, float f6, mG mG2) {
        this.cdl(kd2, f, f2, f3, f4, f5, ld2, f6, mG2);
    }

    public void cdq(class_1044 class_10442, float f, float f2, float f3, float f4, float f5, ld ld2, mG mG2) {
        this.ceg(kd.sQVlR, class_10442, f, f2, f3, f4, f5, ld2, mG2);
    }

    public void cdH(class_1044 class_10442, float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        ekAdT.bNR(jS.bMc(this.gkqYk.method_51448(), f, f2, f3, f4).drW(f5).drX(f6).drY(f7).drZ(f8).dsb(class_10442).dse(mG2).dso());
    }

    public void cdv(float f, float f2, float f3, float f4, float f5, float f6, mG mG2) {
        this.cdx(f, f2, f3, f4, (float)Math.toRadians(f5), (float)Math.toRadians(f6), mG2);
    }

    public void cdx(float f, float f2, float f3, float f4, float f5, float f6, mG mG2) {
        this.cdz(f, f2, f3, f3, f4, f5, f6, 0.75f, mG2);
    }

    public void cdF(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, la la2) {
        ekAdT.bNR(jS.bMc(this.gkqYk.method_51448(), f, f2, f3, f4).drW(f5).drX(f6).drY(f7).drZ(f8).dsa(la2).dse(mG.hoGuU).dso());
    }

    public void cdo(float f, float f2, float f3, float f4, float f5, ld ld2, la la2) {
        this.cdS(kd.sQVlR, f, f2, f3, f4, f5, ld2, la2);
    }

    public void cdG(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, la la2) {
        this.cdF(f, f2, f3, f4, f5, f6, (float)Math.toRadians(f7), (float)Math.toRadians(f8), la2);
    }

    public void cdL(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, float f10) {
        boolean bl;
        ii ii2;
        block7: {
            block8: {
                long l = XYAuN ^ 0x27804691E60CL;
                ii2 = rD.dlM();
                String[] stringArray = lC.cfk();
                try {
                    try {
                        bl = fX.aYe();
                        if (stringArray != null) break block7;
                        if (!bl) break block8;
                    }
                    catch (MatchException matchException) {
                        throw lC.cfl(matchException);
                    }
                    this.cdM(f, f2, f3, f4, f5, f6, f7, f8, f9, f10);
                    return;
                }
                catch (MatchException matchException) {
                    throw lC.cfl(matchException);
                }
            }
            bl = fX.aYf();
        }
        try {
            if (bl) {
                this.cdJ(f, f2, f3, f4, f5, f6, f7, f8, mG.hoGuU.cob(f9));
            }
        }
        catch (MatchException matchException) {
            throw lC.cfl(matchException);
        }
        mG mG2 = ii2.bjd().cob(fX.aYh() * f9);
        this.cdA(f, f2, f3, f4, f5, f6, f7, f8, mG2);
    }

    public void cdM(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, float f10) {
        long l = XYAuN ^ 0x367FD46F9C5FL;
        ii ii2 = rD.dlM();
        float f11 = ii2.bjo() * (1.0f - f10 * 0.5f);
        String[] stringArray = lC.cfk();
        this.ccS(kd.IbNTv, f, f2, f3, f4).bOF(f5).bOG(f6).bOH(f7).bOI(f8).bOO(ii2.bji()).bOP(ii2.bjj()).bOQ(ii2.bjk()).bOR(ii2.bjl()).bON(ii2.bjm()).bOW(ii2.bjn()).bOU(f11).bOV(ii2.bjp()).bOv(mG.hoGuU.cob(f9)).bPc();
        String[] stringArray2 = stringArray;
        try {
            if (iS.bwL() == null) {
                lC.cfj(new String[3]);
            }
        }
        catch (MatchException matchException) {
            throw lC.cfl(matchException);
        }
    }

    public void cdp(class_1044 class_10442, float f, float f2, float f3, float f4, float f5, ld ld2) {
        this.cdq(class_10442, f, f2, f3, f4, f5, ld2, mG.hoGuU);
    }

    public void cdu(class_241 class_2412, class_241 class_2413, class_241 class_2414, class_241 class_2415, float f, float f2, mG mG2) {
        dcFcr.bND(jQ.bLz(this.gkqYk.method_51448(), class_2412, class_2413, class_2414, class_2415).drs(f).drt(f2).drr(mG2).dru());
    }

    public void cdy(lc lc2, float f, float f2, float f3, mG mG2) {
        this.cdz(lc2.bXF(), lc2.bXG(), lc2.bXH(), lc2.bXI(), f, f2, f3, 0.75f, mG2);
    }

    public void cdK(float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        this.cdJ(f, f2, f3, f4, f5, f6, (float)Math.toRadians(f7), (float)Math.toRadians(f8), mG2);
    }

    public void cdS(kd kd2, float f, float f2, float f3, float f4, float f5, ld ld2, la la2) {
        this.ccS(kd2, f, f2, f3, f4).bOu(ld2).bOE(f5).bOw(la2).bOX();
    }

    public void ceT(lq lq2, String string, float f, float f2) {
        this.ceR(lq2, string, f, f2, mG.hoGuU);
    }

    public void ceG(lq lq2, String string, float f, float f2, mG mG2) {
        this.ceD(lq2, lm.bZy(string, mG2), f, f2, mG2);
    }

    public void ceQ(lq lq2, int[] nArray, float f, float f2, mG mG2) {
        this.ceA(lq2, nArray, f - lq2.cav().bYD(nArray, lq2.caw()), f2, mG2);
    }

    public void ceU(lq lq2, int[] nArray, float f, float f2) {
        this.ceS(lq2, nArray, f, f2, mG.hoGuU);
    }

    public void cel(lf lf2, float f, float f2, float f3) {
        this.ceo(lf2, f, f2, f3, f3, f3, mG.hoGuU);
    }

    public void ceZ(float f) {
        this.gkqYk.method_51448().rotate(f);
    }

    public void cfa(Matrix3x2f matrix3x2f) {
        this.gkqYk.method_51448().mul((Matrix3x2fc)matrix3x2f);
    }

    public void cdY(class_2960 class_29602, float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        this.cdX(rD.dlmvG.method_1531().method_4619(class_29602), f, f2, f3, f4, f5, f6, f7, f8, mG2);
    }

    public void cdV(class_1044 class_10442, float f, float f2, float f3, float f4) {
        this.cdW(class_10442, f, f2, f3, f4, mG.hoGuU);
    }

    public void cep(lf lf2, lc lc2) {
        this.ceo(lf2, lc2.bXF(), lc2.bXG(), lc2.bXH(), lc2.bXI(), lc2.bXH(), mG.hoGuU);
    }

    public void cdQ(float f, float f2, float f3, float f4, ld ld2) {
        ueLic.bNn(jO.bJI(this.gkqYk.method_51448(), f, f2, f3, f4).dqh(kd.AhlXN).dqj(ld2).dqo(0.75f).dql(la.bWH(FdGpR, QrdDz)).dqz());
    }

    public void cdU(class_1044 class_10442, lc lc2, mG mG2) {
        this.cdW(class_10442, lc2.bXF(), lc2.bXG(), lc2.bXH(), lc2.bXI(), mG2);
    }

    public Matrix4f cfd() {
        return jI.bIl((Matrix3x2fc)this.gkqYk.method_51448());
    }

    public jq cec(class_591 class_5912, class_2960 class_29602, float f, float f2, float f3, float f4) {
        return new jq((Matrix3x2fc)this.gkqYk.method_51448(), class_5912, class_29602, f, f2, f3, f4);
    }

    public void cey(kJ kJ2, lq lq2, int[] nArray, float f, float f2, mG mG2) {
        this.ceu(kJ2, lq2, nArray, f - lq2.cav().bYD(nArray, lq2.caw()), f2, mG2);
    }

    public void ceD(lq lq2, class_2561 class_25612, float f, float f2, mG mG2) {
        block4: {
            long l = XYAuN ^ 0x5DDC83B562AFL;
            float f3 = 0.0f;
            Iterator<lm$uy> iterator = lm.bZw(class_25612, mG2).iterator();
            String[] stringArray = lC.cfk();
            while (iterator.hasNext()) {
                lm$uy lm$uy = iterator.next();
                f3 += lq2.cav().bYC(lm$uy.text(), lq2.caw());
                try {
                    if (stringArray == null) {
                        if (stringArray == null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw lC.cfl(matchException);
                }
            }
            ln.bZN(lq2.cav(), class_25612, mG2, lq2.caw(), this.cfd(), f, f2, 0.0f, false, 0.0f, 1.0f, f3 * 2.0f, f);
        }
    }

    public void cdX(class_1044 class_10442, float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, mG mG2) {
        this.ccS(kd.AhlXN, f, f2, f3, f4).bOx(class_10442).bOy(f5, f6, f7, f8).bOv(mG2).bOX();
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void ceu(kJ kJ2, lq lq2, int[] nArray, float f, float f2, mG mG2) {
        int[] nArray2;
        block5: {
            long l = XYAuN ^ 0x13B5536BA73DL;
            String[] stringArray = lC.cfk();
            try {
                nArray2 = nArray;
                if (stringArray != null) break block5;
                if (nArray2 == null) return;
            }
            catch (MatchException matchException) {
                throw lC.cfl(matchException);
            }
            nArray2 = nArray;
        }
        try {
            if (nArray2.length == 0) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw lC.cfl(matchException);
        }
        kJ2.bUc(lq2);
        kJ2.bUd(kD.bST(this.gkqYk.method_51448(), f, f2, 0.0, lq2.caw(), nArray).dsX(mG2).dsY());
    }

    public void cew(lq lq2, int[] nArray, float f, float f2, mG mG2) {
        this.ces(lq2, nArray, f - lq2.cav().bYD(nArray, lq2.caw()), f2, mG2);
    }

    public void ceC(lq lq2, int[] nArray, float f, float f2, mG mG2) {
        this.ceD(lq2, lm.bZz(nArray, mG2), f, f2, mG2);
    }

    public void ceE(lq lq2, int[] nArray, float f, float f2) {
        this.ceC(lq2, nArray, f, f2, mG.hoGuU);
    }

    public void ceo(lf lf2, float f, float f2, float f3, float f4, float f5, mG mG2) {
        lq lq2 = lE.WxpHL.bYM(f5);
        float f6 = lq2.caq(lf2.bXR());
        float f7 = lq2.cau(lf2.bXR());
        float f8 = f + jf.bAH(f6, f3);
        float f9 = f2 + jf.bAH(f7, f4);
        lk.bZd(lq2.cav(), lf2.bXR(), lq2.caw(), mG2.coh(), this.cfd(), f8, f9, 0.0f);
    }

    public void ceL(lq lq2, int[] nArray, float f, float f2, mG mG2, float f3, float f4, float f5) {
        this.ceK(lq2, lm.bZz(nArray, mG2), f, f2, mG2, f3, f4, f5);
    }

    public void ceN(lq lq2, int[] nArray, float f, float f2, float f3, float f4, float f5) {
        this.ceL(lq2, nArray, f, f2, mG.hoGuU, f3, f4, f5);
    }

    public void ceO(lq lq2, class_2561 class_25612, float f, float f2, float f3, float f4, float f5) {
        this.ceK(lq2, class_25612, f, f2, mG.hoGuU, f3, f4, f5);
    }

    public void cek(kd kd2, float f, float f2, float f3, float f4, float f5, ld ld2, float f6) {
        this.ccS(kd2, f, f2, f3, f4).bOu(ld2).bOE(f5).bOv(mG.hoGuU.cob(f6)).bPb();
    }

    public void cex(kJ kJ2, lq lq2, String string, float f, float f2, mG mG2) {
        this.cet(kJ2, lq2, string, f - lq2.cav().bYC(string, lq2.caw()), f2, mG2);
    }

    public void cdW(class_1044 class_10442, float f, float f2, float f3, float f4, mG mG2) {
        this.ccS(kd.AhlXN, f, f2, f3, f4).bOx(class_10442).bOv(mG2).bOX();
    }

    public void cei(kd kd2, float f, float f2, float f3, float f4, mG mG2, float f5, float f6, ld ld2) {
        this.ccS(kd2, f, f2, f3, f4).bOv(mG2).bOE(f6).bOu(ld2).bOK(f5).bOX();
    }

    public void ceK(lq lq2, class_2561 class_25612, float f, float f2, mG mG2, float f3, float f4, float f5) {
        ln.bZN(lq2.cav(), class_25612, mG2, lq2.caw(), this.cfd(), f, f2, 0.0f, true, f3, f4, f5, f);
    }

    public void cev(lq lq2, String string, float f, float f2, mG mG2) {
        this.cer(lq2, string, f - lq2.cav().bYC(string, lq2.caw()), f2, mG2);
    }

    public void ceB(lq lq2, String string, float f, float f2) {
        this.ceG(lq2, string, f, f2, mG.hoGuU);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void cet(kJ kJ2, lq lq2, String string, float f, float f2, mG mG2) {
        String string2;
        block5: {
            long l = XYAuN ^ 0x653802387AC9L;
            String[] stringArray = lC.cfk();
            try {
                string2 = string;
                if (stringArray != null) break block5;
                if (string2 == null) return;
            }
            catch (MatchException matchException) {
                throw lC.cfl(matchException);
            }
            string2 = string;
        }
        try {
            if (string2.isBlank()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw lC.cfl(matchException);
        }
        this.ceu(kJ2, lq2, mZ.csh(string), f, f2, mG2);
    }

    public void ceF(lq lq2, class_2561 class_25612, float f, float f2) {
        this.ceD(lq2, class_25612, f, f2, mG.hoGuU);
    }

    public jt ced(class_10017 class_100172, float f, float f2, float f3, float f4) {
        return new jt((Matrix3x2fc)this.gkqYk.method_51448(), class_100172, f, f2, f3, f4);
    }

    public void cdT(class_1044 class_10442, lc lc2) {
        this.cdW(class_10442, lc2.bXF(), lc2.bXG(), lc2.bXH(), lc2.bXI(), mG.hoGuU);
    }

    public jv cdZ(class_1792 class_17922, float f, float f2, float f3) {
        return this.cea(class_17922.method_7854(), f, f2, f3);
    }

    public void cdR(float f, float f2, float f3, float f4, ld ld2, mG mG2) {
        ueLic.bNn(jO.bJI(this.gkqYk.method_51448(), f, f2, f3, f4).dqh(kd.AhlXN).dqj(ld2).dqo(0.75f).dql(la.bWH(new mG[]{mG2.coa(0.0f), mG2.coa(255.0f)}, UboFN)).dqz());
    }

    public void ceJ(lq lq2, String string, float f, float f2, mG mG2, float f3, float f4, float f5) {
        this.ceK(lq2, lm.bZy(string, mG2), f, f2, mG2, f3, f4, f5);
    }

    public void ceM(lq lq2, String string, float f, float f2, float f3, float f4, float f5) {
        this.ceJ(lq2, string, f, f2, mG.hoGuU, f3, f4, f5);
    }

    public void ceR(lq lq2, String string, float f, float f2, mG mG2) {
        this.ceG(lq2, string, f - lq2.cav().bYC(string, lq2.caw()), f2, mG2);
    }

    public void ceS(lq lq2, int[] nArray, float f, float f2, mG mG2) {
        this.ceC(lq2, nArray, f - lq2.cav().bYD(nArray, lq2.caw()), f2, mG2);
    }

    public lH cfi() {
        return this.jfMHu;
    }

    private static String cfm(byte[] byArray) {
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

    public jv cea(class_1799 class_17992, float f, float f2, float f3) {
        Matrix3x2f matrix3x2f = new Matrix3x2f((Matrix3x2fc)this.gkqYk.method_51448());
        matrix3x2f.translate(f, f2);
        matrix3x2f.scale(f3, f3);
        return new jv((Matrix3x2fc)matrix3x2f, (class_1309)rD.dlmvG.field_1724, (class_1937)rD.dlmvG.field_1687, class_17992, 0.0f, 0.0f, 16.0f);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void cer(lq lq2, String string, float f, float f2, mG mG2) {
        String string2;
        block5: {
            long l = XYAuN ^ 0x20E8CCC5D49FL;
            String[] stringArray = lC.cfk();
            try {
                string2 = string;
                if (stringArray != null) break block5;
                if (string2 == null) return;
            }
            catch (MatchException matchException) {
                throw lC.cfl(matchException);
            }
            string2 = string;
        }
        try {
            if (string2.isBlank()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw lC.cfl(matchException);
        }
        this.ceu(lG.zXCXX, lq2, mZ.csh(string), f, f2, mG2);
    }

    public void ceX(float f, float f2) {
        this.gkqYk.method_51448().translate(f, f2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void ces(lq lq2, int[] nArray, float f, float f2, mG mG2) {
        int[] nArray2;
        block5: {
            long l = XYAuN ^ 0x21AC45F38B8EL;
            String[] stringArray = lC.cfk();
            try {
                nArray2 = nArray;
                if (stringArray != null) break block5;
                if (nArray2 == null) return;
            }
            catch (MatchException matchException) {
                throw lC.cfl(matchException);
            }
            nArray2 = nArray;
        }
        try {
            if (nArray2.length == 0) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw lC.cfl(matchException);
        }
        lG.zXCXX.bUc(lq2);
        lG.zXCXX.bUd(kD.bST(this.gkqYk.method_51448(), f, f2, 0.0, lq2.caw(), nArray).dsX(mG2).dsY());
    }

    public jw ceb(class_1799 class_17992, float f, float f2, float f3) {
        Matrix3x2f matrix3x2f = new Matrix3x2f((Matrix3x2fc)this.gkqYk.method_51448());
        matrix3x2f.translate(f, f2);
        matrix3x2f.scale(f3, f3);
        return new jw((Matrix3x2fc)matrix3x2f, class_17992, 0.0f, 0.0f);
    }

    public void cdh(float f, float f2, float f3, float f4, ld ld2, mG mG2, float f5) {
        this.ccS(kd.AhlXN, f, f2, f3, f4).bOu(ld2).bOv(mG2).bOC(f5).bOX();
    }

    public void ceh(float f, float f2, float f3, float f4, mG mG2, float f5, float f6, ld ld2) {
        this.cei(kd.sQVlR, f, f2, f3, f4, mG2, f5, f6, ld2);
    }

    public void cdi(float f, float f2, float f3, float f4, mG mG2) {
        this.ccS(kd.AhlXN, f, f2, f3, f4).bOv(mG2).bOX();
    }

    public Matrix3x2fStack cfc() {
        return this.gkqYk.method_51448();
    }

    public void ccU(float f, float f2, float f3, float f4, float f5, float f6) {
        this.ccW(f, f2, f3, f4, f5, f6, ld.all(7.0f), 7.0f);
    }

    public void ccY(float f, float f2, float f3, float f4, float f5, ld ld2, mG mG2) {
        XMUEi.bMX(jO.bJI(this.gkqYk.method_51448(), f, f2, f3, f4).dqk(mG2).dqo(f5).dqj(ld2).dqz());
    }

    public void ceY(float f, float f2) {
        this.gkqYk.method_51448().scale(f, f2);
    }

    public void cdc(float f, float f2, mG mG2) {
        this.cdh(f, f2, 2.0f, 2.0f, ld.all(1.0f), mG2, 0.5f);
    }
}
