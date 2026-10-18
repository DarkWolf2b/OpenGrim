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
import sixtwo.bS;
import sixtwo.bU;
import sixtwo.cv;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class bW
extends bS {
    private float ukVVb;
    private int[] hTEif;
    private mG VoZgJ;
    private final rk leDSE;
    private static final long xRlZx = gb.aYR(704933532158531826L, -7429875036314705378L, MethodHandles.lookup().lookupClass()).a(212489494341447L);
    private static final long qkDkP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bW(cv cv2, mr mr2) {
        long l2 = xRlZx ^ 0x2FE1C88604DFL;
        super(cv2, mr2);
        this.ukVVb = Float.NaN;
        this.leDSE = new rk((int)qkDkP).dhs(rj.NJlxm);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = xRlZx ^ 0x1C86D7F4A2A2L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = -562286198288578174L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                qkDkP = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    @Override
    public boolean MH() {
        boolean bl2;
        block2: {
            block3: {
                long l2 = xRlZx ^ 0x70C25544E1BAL;
                int n2 = bS.NS();
                try {
                    bl2 = Float.isNaN(this.ukVVb);
                    if (n2 != 0) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw bW.Ok(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    public void MG(lC lC2, ii ii2) {
        bW bW2;
        block7: {
            long l2 = xRlZx ^ 0x7FC27D5EDB75L;
            int n2 = bS.NS();
            try {
                try {
                    bW2 = this;
                    if (n2 != 0) break block7;
                    if (bW2.VoZgJ == null) return;
                }
                catch (MatchException matchException) {
                    throw bW.Ok(matchException);
                }
                bW2 = this;
            }
            catch (MatchException matchException) {
                throw bW.Ok(matchException);
            }
        }
        try {
            if (bW2.hTEif == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bW.Ok(matchException);
        }
        bU bU2 = rD.dlK().RC();
        float f2 = bU2.RW();
        float f3 = bU2.RX();
        lq lq2 = lE.WTzbi.bYM(7.0f);
        float f4 = 255.0f * this.dExGi.dhj();
        float f5 = 20.0f * this.dExGi.dhj();
        float f6 = lq2.cap(this.hTEif);
        float f7 = 3.5f;
        float f8 = f2 - 16.0f + f5;
        float f9 = f3 + 3.5f;
        float f10 = 2.0f * f7 + 6.0f;
        float f11 = 8.0f;
        this.fGWTH.NU(f10 + 8.0f + f6 + 5.0f, 15.0f);
        lC2.cdg(f8, f9, f10, f11, ld.all(3.0f), this.VoZgJ.coa(f4));
        float f12 = 6.0f;
        float f13 = f8 + f10 * 0.5f;
        float f14 = f9 + f11 * 0.5f;
        lC2.ceV();
        lC2.cfb(f13, f14, this.leDSE.dhj());
        lC2.cem(lf.hzyQG, f13 - f12 * 0.5f, f14 - f12 * 0.5f, f12, mG.hoGuU.coa(f4));
        lC2.ceW();
        mG mG2 = ii2.bjb().coa(255.0f * this.dExGi.dhj());
        float f15 = f2 + 31.0f - 10.0f * this.dExGi.dhj();
        lC2.ceA(lq2, this.hTEif, f15, f3 + 5.0f, mG2);
    }

    public void Oj(float f2, int[] nArray, mG mG2) {
        block8: {
            float f3;
            block6: {
                long l2 = xRlZx ^ 0x18E051F61592L;
                int n2 = bS.NS();
                try {
                    block7: {
                        try {
                            try {
                                f3 = this.ukVVb;
                                if (n2 != 0) break block6;
                                if (!Float.isNaN(f3)) break block7;
                            }
                            catch (MatchException matchException) {
                                throw bW.Ok(matchException);
                            }
                            this.leDSE.dhf(f2);
                            if (n2 == 0) break block8;
                        }
                        catch (MatchException matchException) {
                            throw bW.Ok(matchException);
                        }
                    }
                    f3 = this.leDSE.dhj();
                }
                catch (MatchException matchException) {
                    throw bW.Ok(matchException);
                }
            }
            float f4 = f3;
            float f5 = ((f2 - f4) % 360.0f + 540.0f) % 360.0f - 180.0f;
            this.leDSE.dhd(f4 + f5);
        }
        this.ukVVb = f2;
        this.hTEif = nArray;
        this.VoZgJ = mG2;
    }

    private static MatchException Ok(MatchException matchException) {
        return matchException;
    }
}

