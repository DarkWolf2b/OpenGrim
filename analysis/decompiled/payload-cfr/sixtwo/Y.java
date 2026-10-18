/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Arrays;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.Z;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mZ;
import sixtwo.rj;
import sixtwo.rk;

public class Y
extends az {
    private lq OawPZ;
    private mG jMzEc;
    private float MEMoC;
    private int NSsRm;
    private rj FWYUc;
    private rk BzHpb;
    private int[] iLekN;
    private int[] TdnAc;
    private boolean AraoH;
    private boolean Eesjh;
    private float vAPzH;
    private float BRUln;
    private float fLmaN;
    private static final long cpTwv = gb.aYR(4271288058253778518L, -3304817961004227428L, MethodHandles.lookup().lookupClass()).a(36615433833147L);
    private static final long jYVjA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public Y kf(lq lq2) {
        this.OawPZ = lq2;
        return this;
    }

    public Y() {
        long l = cpTwv ^ 0x72A4AF47176AL;
        this.OawPZ = lE.joxgd.bYM(7.0f);
        this.jMzEc = mG.hoGuU;
        this.MEMoC = 5.0f;
        this.NSsRm = (int)jYVjA;
        this.FWYUc = rj.UPXqT;
        this.iLekN = new int[0];
        this.TdnAc = new int[0];
        this.vAPzH = 0.8f;
        this.BRUln = 1.0f;
        this.fLmaN = Float.MAX_VALUE;
        this.ke();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = cpTwv ^ 0x44363D4EDA43L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = 4530242266499119944L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                jYVjA = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public Y ks(float f2) {
        this.fLmaN = f2;
        return this;
    }

    public Y km() {
        this.AraoH = true;
        return this;
    }

    public Y ko(mG mG2) {
        this.jMzEc = mG2;
        return this;
    }

    @Override
    public void bV(lC lC2) {
        Y y;
        float f2;
        block19: {
            block20: {
                float f3;
                float f4;
                float f5;
                int[] nArray;
                block22: {
                    block18: {
                        Y y2;
                        block17: {
                            float f6;
                            float f7;
                            block21: {
                                block16: {
                                    Y y3;
                                    block15: {
                                        long l = cpTwv ^ 0x2C666B3BEB3AL;
                                        int[] nArray2 = Z.kU();
                                        this.BzHpb.dhd(1.0f);
                                        nArray = nArray2;
                                        try {
                                            try {
                                                f7 = this.MCnYt;
                                                y3 = this;
                                                if (nArray == null) break block15;
                                                if (!y3.AraoH) break block16;
                                            }
                                            catch (MatchException matchException) {
                                                throw Y.kH(matchException);
                                            }
                                            y3 = this;
                                        }
                                        catch (MatchException matchException) {
                                            throw Y.kH(matchException);
                                        }
                                    }
                                    f6 = y3.OawPZ.cap(this.iLekN) / 2.0f;
                                    break block21;
                                }
                                f6 = 0.0f;
                            }
                            f5 = f7 - f6;
                            try {
                                try {
                                    f4 = this.MCnYt;
                                    y2 = this;
                                    if (nArray == null) break block17;
                                    if (!y2.AraoH) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw Y.kH(matchException);
                                }
                                y2 = this;
                            }
                            catch (MatchException matchException) {
                                throw Y.kH(matchException);
                            }
                        }
                        f3 = y2.OawPZ.cap(this.TdnAc) / 2.0f;
                        break block22;
                    }
                    f3 = 0.0f;
                }
                f2 = f4 - f3;
                try {
                    try {
                        y = this;
                        if (nArray == null) break block19;
                        if (y.iLekN.length == 0) break block20;
                    }
                    catch (MatchException matchException) {
                        throw Y.kH(matchException);
                    }
                    this.kl(lC2, this.iLekN, f5, this.pNyTQ + this.MEMoC * this.BzHpb.dhj(), this.jMzEc.cob(1.0f - this.BzHpb.dhj()));
                }
                catch (MatchException matchException) {
                    throw Y.kH(matchException);
                }
            }
            y = this;
        }
        try {
            y.kl(lC2, this.TdnAc, f2, this.pNyTQ - this.MEMoC + this.MEMoC * this.BzHpb.dhj(), this.jMzEc.cob(this.BzHpb.dhj()));
            if (iS.bwL() == null) {
                Z.kT(new int[2]);
            }
        }
        catch (MatchException matchException) {
            throw Y.kH(matchException);
        }
    }

    public Y ki(float f2) {
        this.MEMoC = f2;
        return this;
    }

    private void ke() {
        this.BzHpb = new rk(this.NSsRm).dhs(this.FWYUc);
    }

    public lq kv() {
        return this.OawPZ;
    }

    public Y kr() {
        this.Eesjh = false;
        return this;
    }

    public Y kp(float f2, float f3) {
        this.Eesjh = true;
        this.vAPzH = f2;
        this.BRUln = f3;
        return this;
    }

    public Y kg(int[] nArray) {
        this.TdnAc = nArray;
        return this;
    }

    public Y kk(rj rj2) {
        this.FWYUc = rj2;
        this.ke();
        return this;
    }

    public void kt(String string) {
        this.ku(mZ.csh(string));
    }

    public Y kn() {
        this.AraoH = false;
        return this;
    }

    public int ky() {
        return this.NSsRm;
    }

    public void ku(int[] nArray) {
        Y y;
        block4: {
            block5: {
                long l = cpTwv ^ 0x31C7F94EE285L;
                int[] nArray2 = Z.kU();
                try {
                    try {
                        y = this;
                        if (nArray2 == null) break block4;
                        if (!Arrays.equals(y.TdnAc, nArray)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw Y.kH(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw Y.kH(matchException);
                }
            }
            this.iLekN = this.TdnAc;
            this.TdnAc = nArray;
            y = this;
        }
        y.BzHpb.dhg();
    }

    public Y kq(float f2, float f3, float f4) {
        return this.kp(f2, f3).ks(f4);
    }

    public Y kh(String string) {
        this.TdnAc = mZ.csh(string);
        return this;
    }

    private static MatchException kH(MatchException matchException) {
        return matchException;
    }

    public int[] kB() {
        return this.iLekN;
    }

    public int[] kC() {
        return this.TdnAc;
    }

    public rk kA() {
        return this.BzHpb;
    }

    public mG kw() {
        return this.jMzEc;
    }

    public float kx() {
        return this.MEMoC;
    }

    public float kG() {
        return this.fLmaN;
    }

    public float kE() {
        return this.vAPzH;
    }

    public rj kz() {
        return this.FWYUc;
    }

    private void kl(lC lC2, int[] nArray, float f2, float f3, mG mG2) {
        block4: {
            block5: {
                long l = cpTwv ^ 0x7FD6EDF138E5L;
                int[] nArray2 = Z.kU();
                try {
                    try {
                        if (nArray2 == null) break block4;
                        if (!this.Eesjh) break block5;
                    }
                    catch (MatchException matchException) {
                        throw Y.kH(matchException);
                    }
                    lC2.ceI(this.OawPZ, nArray, f2, f3, mG2, this.vAPzH, this.BRUln, this.fLmaN);
                    return;
                }
                catch (MatchException matchException) {
                    throw Y.kH(matchException);
                }
            }
            lC2.ceA(this.OawPZ, nArray, f2, f3, mG2);
        }
    }

    public boolean kD() {
        return this.Eesjh;
    }

    public float kF() {
        return this.BRUln;
    }

    public Y kj(int n) {
        this.NSsRm = n;
        this.ke();
        return this;
    }
}
