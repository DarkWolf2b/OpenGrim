/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_10017
 *  net.minecraft.class_10055
 *  net.minecraft.class_11890
 *  net.minecraft.class_742
 *  net.minecraft.class_746
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10017;
import net.minecraft.class_10055;
import net.minecraft.class_11890;
import net.minecraft.class_742;
import net.minecraft.class_746;
import sixtwo.bB;
import sixtwo.bC$si;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mS;
import sixtwo.mZ;
import sixtwo.pX;
import sixtwo.pY;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class bC {
    private final pY imthM;
    private final String neETJ;
    private final pX VRAiw;
    private pX ouKLq;
    private final rk XclRQ;
    private static final long ZpdFS = gb.aYR(-3195232151852259922L, 3105695006094609560L, MethodHandles.lookup().lookupClass()).a(190578593781542L);
    private static final long LMIZW;
    private static final long FEhqQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bC(pY pY2) {
        long l = ZpdFS ^ 0x54C86D9152E2L;
        this.XclRQ = new rk((int)LMIZW).dhs(rj.XzDkv);
        this.imthM = pY2;
        this.neETJ = pY2.label();
        this.VRAiw = new bC$si(pY2);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = ZpdFS ^ 0x7A21A187C06AL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long l2 = 1611812430527484127L;
        byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
        LMIZW = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l3 = -7248963263439970520L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                FEhqQ = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void Lu(lC lC2, float f, float f2, boolean bl, float f3) {
        class_746 class_7462;
        int[] nArray;
        class_746 class_7463;
        block7: {
            long l = ZpdFS ^ 0x72E15F44FD3FL;
            class_7463 = rD.dlmvG.field_1724;
            nArray = bB.b();
            try {
                try {
                    class_7462 = class_7463;
                    if (nArray != null) break block7;
                    if (!(class_7462 instanceof class_742)) return;
                }
                catch (MatchException matchException) {
                    throw bC.LC(matchException);
                }
                class_7462 = class_7463;
            }
            catch (MatchException matchException) {
                throw bC.LC(matchException);
            }
        }
        class_746 class_7464 = class_7462;
        try {
            if (nArray != null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bC.LC(matchException);
        }
        class_7463 = rD.dlmvG.method_1561().method_74405((class_742)class_7464);
        class_10055 class_100552 = new class_10055();
        class_7463.method_62604((class_11890)class_7464, class_100552, lC2.cfh());
        this.Lw(class_100552, bl);
        ((mS)class_100552).setEmoteInstance(this.Lr(bl));
        float f4 = this.Lv(f3);
        float f5 = mZ.csl(14.5, 16.5, f3);
        lC2.ced((class_10017)class_100552, f - f4 * 0.5f, f2 - f4 * 0.5f, f4, f4).bFH(f5).bFJ(0.0f, 0.45f, 0.0f).bFM();
    }

    private float Lt(bB bB2) {
        float f;
        float f2;
        block12: {
            float f3;
            float f4;
            block10: {
                float f5;
                block11: {
                    float f6;
                    float f7;
                    int[] nArray;
                    float f8;
                    float f9;
                    block8: {
                        float f10;
                        block9: {
                            long l = ZpdFS ^ 0x12B09B26E5FDL;
                            f9 = bB2.innerRadius();
                            f8 = bB2.outerRadius();
                            f10 = Math.abs((float)Math.toRadians(bB2.segmentEnd() - bB2.segmentStart()));
                            nArray = bB.b();
                            try {
                                try {
                                    f7 = f10;
                                    f6 = 6.282185f;
                                    if (nArray != null) break block8;
                                    if (!(f7 >= f6)) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw bC.LC(matchException);
                                }
                                return (f9 + f8) * 0.5f;
                            }
                            catch (MatchException matchException) {
                                throw bC.LC(matchException);
                            }
                        }
                        f7 = f10;
                        f6 = 0.5f;
                    }
                    f5 = f7 * f6;
                    f2 = 0.6666667f * (f8 * f8 * f8 - f9 * f9 * f9) / (f8 * f8 - f9 * f9);
                    try {
                        try {
                            f4 = f5;
                            f3 = 0.0f;
                            if (nArray != null) break block10;
                            if (f4 != f3) break block11;
                        }
                        catch (MatchException matchException) {
                            throw bC.LC(matchException);
                        }
                        f = 1.0f;
                        break block12;
                    }
                    catch (MatchException matchException) {
                        throw bC.LC(matchException);
                    }
                }
                f4 = (float)Math.sin(f5);
                f3 = f5;
            }
            f = f4 / f3;
        }
        float f11 = f;
        return f2 * f11;
    }

    private static MatchException LC(MatchException matchException) {
        return matchException;
    }

    public pX LA() {
        return this.ouKLq;
    }

    public rk LB() {
        return this.XclRQ;
    }

    public String Ly() {
        return this.neETJ;
    }

    public pY Lx() {
        return this.imthM;
    }

    public void Ls() {
        this.ouKLq = null;
    }

    public void Lq(lC lC2, bB bB2) {
        rj rj2;
        rk rk2;
        long l = ZpdFS ^ 0x30ECC3E61F1FL;
        int[] nArray = bB.b();
        try {
            rk2 = this.XclRQ;
            rj2 = bB2.selected() ? rj.XzDkv : rj.UPXqT;
        }
        catch (MatchException matchException) {
            throw bC.LC(matchException);
        }
        rk2.dhs(rj2);
        this.XclRQ.dhc(bB2.selected());
        ii ii2 = rD.dlM();
        float f = this.XclRQ.dhj();
        float f2 = (float)Math.toRadians(bB2.segmentMiddleAngle());
        float f3 = this.Lt(bB2) + 3.0f * f;
        float f4 = bB2.centerX() + (float)Math.cos(f2) * f3;
        float f5 = bB2.centerY() + (float)Math.sin(f2) * f3;
        mG mG2 = ii2.bjb().cob(0.5f).coc(ii2.bjb(), f);
        lq lq2 = lE.WTzbi.bYM(mZ.csl(5.5, 6.0, f));
        float f6 = this.Lv(f);
        float f7 = f5 - (f6 + lq2.cat()) * 0.5f;
        float f8 = f7 + f6 * 0.5f + 3.0f;
        float f9 = f7 + f6;
        this.Lu(lC2, f4, f8, bB2.selected(), f);
        float f10 = f4 - lq2.cao(this.neETJ) * 0.5f;
        try {
            lC2.cez(lq2, this.neETJ, f10, f9, mG2);
            if (nArray != null) {
                iS.bwK("Kujvoc");
            }
        }
        catch (MatchException matchException) {
            throw bC.LC(matchException);
        }
    }

    private float Lv(float f) {
        return mZ.csl(30.0, 34.0, f);
    }

    public pX Lz() {
        return this.VRAiw;
    }

    public pX Lr(boolean bl) {
        pX pX2;
        block17: {
            block18: {
                pX pX3;
                block21: {
                    pY pY2;
                    block19: {
                        block20: {
                            int[] nArray;
                            block15: {
                                long l = ZpdFS ^ 0x556EE4604B4L;
                                nArray = bB.b();
                                try {
                                    if (!bl) {
                                        return this.VRAiw;
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw bC.LC(matchException);
                                }
                                try {
                                    bC bC2;
                                    block16: {
                                        try {
                                            try {
                                                try {
                                                    bC2 = this;
                                                    if (nArray != null) break block15;
                                                    if (bC2.ouKLq == null) break block16;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bC.LC(matchException);
                                                }
                                                pX2 = this.ouKLq;
                                                if (nArray != null) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw bC.LC(matchException);
                                            }
                                            if (!pX2.finished()) break block18;
                                        }
                                        catch (MatchException matchException) {
                                            throw bC.LC(matchException);
                                        }
                                    }
                                    bC2 = this;
                                }
                                catch (MatchException matchException) {
                                    throw bC.LC(matchException);
                                }
                            }
                            try {
                                try {
                                    pY2 = this.imthM;
                                    if (nArray != null) break block19;
                                    if (pY2 != null) break block20;
                                }
                                catch (MatchException matchException) {
                                    throw bC.LC(matchException);
                                }
                                pX3 = this.VRAiw;
                                break block21;
                            }
                            catch (MatchException matchException) {
                                throw bC.LC(matchException);
                            }
                        }
                        pY2 = this.imthM;
                    }
                    pX3 = pY2.createInstance();
                }
                bC2.ouKLq = pX3;
            }
            pX2 = this.ouKLq;
        }
        return pX2;
    }

    private void Lw(class_10055 class_100552, boolean bl) {
        float f;
        block4: {
            block5: {
                long l = ZpdFS ^ 0x5A61B18CB559L;
                class_100552.field_53337 = null;
                class_100552.field_53446 = 180.0f;
                class_100552.field_53447 = 0.0f;
                class_100552.field_53448 = 0.0f;
                class_100552.field_53451 = 0.0f;
                int[] nArray = bB.b();
                try {
                    try {
                        class_100552.field_53450 = 0.0f;
                        class_100552.field_53403 = 0.0f;
                        class_100552.field_53410 = false;
                        class_100552.field_53411 = false;
                        class_100552.field_53412 = false;
                        class_100552.field_53413 = false;
                        class_100552.field_53534 = 0.0f;
                        class_100552.field_53535 = false;
                        class_10055 class_100553 = class_100552;
                        f = 0.0f;
                        if (nArray != null) break block4;
                        class_100553.field_53521 = f;
                        class_100552.field_53455 = false;
                        class_100553 = class_100552;
                        if (!bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bC.LC(matchException);
                    }
                    f = (float)(System.currentTimeMillis() % FEhqQ) / 50.0f;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw bC.LC(matchException);
                }
            }
            f = 0.0f;
        }
        class_100553.field_53328 = f;
    }
}
