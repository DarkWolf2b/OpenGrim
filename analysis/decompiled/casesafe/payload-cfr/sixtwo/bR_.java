/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.Z;
import sixtwo.bS;
import sixtwo.cv;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;

public class bR
extends bS {
    private String tMmUB = "";
    private String MtpnS = "";
    private int FaxAk = -1;
    private int[] soyDT;
    private boolean sxniw = false;
    private int gCSoD = -1;
    private mG Bewjf;
    protected Z QbCNz;
    private static final long WvFup = gb.aYR(613445611563642980L, -4291922670228144719L, MethodHandles.lookup().lookupClass()).a(227490622051490L);
    private static final long YyRSM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bR(cv cv2, mr mr2) {
        super(cv2, mr2);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = WvFup ^ 0x5799FFE8E40EL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = 1842902776971313975L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                YyRSM = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    @Override
    public boolean MH() {
        boolean bl;
        block4: {
            block5: {
                long l = WvFup ^ 0x1E01C97C4B0EL;
                int n = bS.NS();
                try {
                    try {
                        bl = this.FaxAk;
                        if (n != 0) break block4;
                        if (bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bR.NM(matchException);
                    }
                    bl = true;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw bR.NM(matchException);
                }
            }
            bl = false;
        }
        return bl;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void MG(lC var1_1, ii var2_2) {
        block39: {
            block38: {
                block40: {
                    block37: {
                        block36: {
                            block35: {
                                block34: {
                                    block33: {
                                        block32: {
                                            block31: {
                                                block30: {
                                                    var3_3 = bR.WvFup ^ 18699774226881L;
                                                    var5_4 = bS.NR();
                                                    try {
                                                        try {
                                                            v0 = this;
                                                            if (var5_4 == 0) break block30;
                                                            if (v0.Bewjf != null) {
                                                            }
                                                            ** GOTO lbl19
                                                        }
                                                        catch (MatchException v1) {
                                                            throw bR.NM(v1);
                                                        }
                                                        v0 = this;
                                                    }
                                                    catch (MatchException v2) {
                                                        throw bR.NM(v2);
                                                    }
                                                }
                                                try {
                                                    if (v0.soyDT != null) break block31;
lbl19:
                                                    // 2 sources

                                                    return;
                                                }
                                                catch (MatchException v3) {
                                                    throw bR.NM(v3);
                                                }
                                            }
                                            var6_5 = rD.dlK().RC();
                                            var7_6 = var6_5.RW();
                                            var8_7 = var6_5.RX();
                                            var9_8 = lE.WTzbi.bYM(7.0f);
                                            var10_9 = lE.WTzbi.bYM(6.0f);
                                            try {
                                                try {
                                                    v4 = this;
                                                    if (var5_4 == 0) break block32;
                                                    if (v4.QbCNz != null) break block33;
                                                }
                                                catch (MatchException v5) {
                                                    throw bR.NM(v5);
                                                }
                                                v4 = this;
                                            }
                                            catch (MatchException v6) {
                                                throw bR.NM(v6);
                                            }
                                        }
                                        v4.QbCNz = new Z(var10_9, 5.0f, (int)bR.YyRSM, rj.Zotpp);
                                    }
                                    var11_10 = 255.0f * this.dExGi.dhj();
                                    var12_11 = 20.0f * this.dExGi.dhj();
                                    try {
                                        try {
                                            v7 = this;
                                            if (var5_4 == 0) break block34;
                                            if (!v7.sxniw) break block35;
                                        }
                                        catch (MatchException v8) {
                                            throw bR.NM(v8);
                                        }
                                        this.QbCNz.kS(false, mG.hoGuU.coa(var11_10));
                                        v7 = this;
                                    }
                                    catch (MatchException v9) {
                                        throw bR.NM(v9);
                                    }
                                }
                                v7.QbCNz.kO(this.FaxAk);
                            }
                            var13_12 = var9_8.cap(this.soyDT);
                            var14_13 = var10_9.cao(this.tMmUB);
                            var15_14 = var10_9.cao(this.MtpnS);
                            var16_15 = String.valueOf(this.FaxAk);
                            try {
                                try {
                                    v10 = this;
                                    if (var5_4 == 0) break block36;
                                    if (!v10.sxniw) break block37;
                                }
                                catch (MatchException v11) {
                                    throw bR.NM(v11);
                                }
                                v10 = this;
                            }
                            catch (MatchException v12) {
                                throw bR.NM(v12);
                            }
                        }
                        v13 = v10.QbCNz.kN();
                        break block40;
                    }
                    v13 = var10_9.cao(var16_15);
                }
                var17_16 = v13;
                try {
                    v14 = this.gCSoD > 0 ? var10_9.cao("0".repeat(this.gCSoD)) : var17_16;
                }
                catch (MatchException v15) {
                    throw bR.NM(v15);
                }
                var18_17 = v14;
                var19_18 = var14_13 + var15_14 + var18_17;
                var20_19 = 3.5f;
                var21_20 = var7_6 - 16.0f + var12_11;
                var22_21 = var8_7 + 3.5f;
                var23_22 = 2.0f * var20_19 + var19_18;
                var24_23 = 8.0f;
                this.fGWTH.NU(var23_22 + 8.0f + var13_12 + 5.0f, 15.0f);
                var1_1.cdg(var21_20, var22_21, var23_22, var24_23, ld.all(3.0f), this.Bewjf.coa(var11_10));
                var25_24 = var8_7 + 5.5f;
                var26_25 = var14_13 + var17_16 + var15_14;
                var28_27 = var27_26 = var21_20 + (var23_22 - var26_25) * 0.5f;
                var1_1.cez(var10_9, this.tMmUB, var28_27, var25_24, mG.hoGuU.coa(var11_10));
                var29_28 = var28_27 + var14_13;
                try {
                    try {
                        v16 = this;
                        if (var5_4 == 0) break block38;
                        if (v16.sxniw) {
                        }
                        ** GOTO lbl122
                    }
                    catch (MatchException v17) {
                        throw bR.NM(v17);
                    }
                    this.QbCNz.sW(var29_28, var25_24);
                    v16 = this;
                }
                catch (MatchException v18) {
                    throw bR.NM(v18);
                }
            }
            try {
                v16.QbCNz.su(var1_1);
                if (var5_4 != 0) break block39;
lbl122:
                // 2 sources

                var1_1.cez(var10_9, var16_15, var29_28, var25_24, mG.hoGuU.coa(var11_10));
            }
            catch (MatchException v19) {
                throw bR.NM(v19);
            }
        }
        var30_29 = var29_28 + var17_16;
        var1_1.cez(var10_9, this.MtpnS, var30_29, var25_24, mG.hoGuU.coa(var11_10));
        var31_30 = var2_2.bjb().coa(255.0f * this.dExGi.dhj());
        var32_31 = var7_6 + 25.0f - 10.0f * this.dExGi.dhj() + var19_18;
        var1_1.ceA(var9_8, this.soyDT, var32_31, var8_7 + 5.0f, var31_30);
    }

    public void NL(String string, String string2, int n, int[] nArray, mG mG2, boolean bl, int n2) {
        this.tMmUB = string;
        this.MtpnS = string2;
        this.FaxAk = n;
        this.soyDT = nArray;
        this.Bewjf = mG2;
        this.sxniw = bl;
        this.gCSoD = n2;
    }

    public void NK(String string, int n, int[] nArray, mG mG2, boolean bl) {
        this.NL("", string, n, nArray, mG2, bl, this.gCSoD);
    }

    private static MatchException NM(MatchException matchException) {
        return matchException;
    }

    public void NJ(String string, int n, int[] nArray, mG mG2, boolean bl, int n2) {
        this.NL("", string, n, nArray, mG2, bl, n2);
    }
}
