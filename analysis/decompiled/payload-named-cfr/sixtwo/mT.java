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
import sixtwo.gb;
import sixtwo.iS;

public class mT {
    private long vJZlo;
    private static iS[] EzOWk;
    private static final long StDmr;
    private static final long fCqJQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static mT cpz() {
        return new mT(true);
    }

    private mT(boolean bl2) {
        long l2 = StDmr ^ 0x6E529CC5466EL;
        if (bl2) {
            this.cpB();
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        StDmr = gb.aYR(1886939362979048446L, 7818008554207186013L, MethodHandles.lookup().lookupClass()).a(58514490112402L);
        long l2 = StDmr ^ 0x676A8E58E963L;
        mT.cpJ(null);
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = -5376001920620031636L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                fCqJQ = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public boolean cpC(long l2) {
        long l3;
        block2: {
            block3: {
                long l4 = StDmr ^ 0x11CA086ADA78L;
                iS[] iSArray = mT.cpK();
                try {
                    long l5 = System.currentTimeMillis() - this.vJZlo - l2;
                    l3 = l5 == 0L ? 0 : (l5 < 0L ? -1 : 1);
                    if (iSArray != null) break block2;
                    if (l3 <= 0) break block3;
                }
                catch (MatchException matchException) {
                    throw mT.cpL(matchException);
                }
                l3 = 1;
                break block2;
            }
            l3 = 0;
        }
        return (boolean)l3;
    }

    public long cpF() {
        return System.currentTimeMillis() - this.vJZlo;
    }

    public static iS[] cpK() {
        return EzOWk;
    }

    public static void cpJ(iS[] iSArray) {
        EzOWk = iSArray;
    }

    public boolean cpH() {
        long l2;
        block2: {
            block3: {
                long l3 = StDmr ^ 0x3DD9E2CA92E9L;
                iS[] iSArray = mT.cpK();
                try {
                    long l4 = this.cpF() - 0L;
                    l2 = l4 == 0L ? 0 : (l4 < 0L ? -1 : 1);
                    if (iSArray != null) break block2;
                    if (l2 > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw mT.cpL(matchException);
                }
                l2 = 1;
                break block2;
            }
            l2 = 0;
        }
        return (boolean)l2;
    }

    public void cpB() {
        this.vJZlo = System.currentTimeMillis();
    }

    private static MatchException cpL(MatchException matchException) {
        return matchException;
    }

    public long cpI() {
        return this.vJZlo;
    }

    public boolean cpD(long l2) {
        long l3;
        block5: {
            block6: {
                long l4 = StDmr ^ 0x61EE2F7D159DL;
                iS[] iSArray = mT.cpK();
                try {
                    long l5 = this.cpF() - l2 * fCqJQ;
                    l3 = l5 == 0L ? 0 : (l5 < 0L ? -1 : 1);
                    if (iSArray != null) break block5;
                    if (l3 <= 0) break block6;
                }
                catch (MatchException matchException) {
                    throw mT.cpL(matchException);
                }
                l3 = 1;
                break block5;
            }
            l3 = 0;
        }
        try {
            if (iS.bwL() == null) {
                mT.cpJ(new iS[5]);
            }
        }
        catch (MatchException matchException) {
            throw mT.cpL(matchException);
        }
        return (boolean)l3;
    }

    public static mT cpA() {
        return new mT(false);
    }

    public boolean cpE(long l2) {
        long l3;
        iS[] iSArray;
        block17: {
            long l4;
            block18: {
                long l5;
                block15: {
                    block16: {
                        block13: {
                            long l6;
                            block14: {
                                long l7 = StDmr ^ 0x782CC52DDAC1L;
                                iSArray = mT.cpK();
                                try {
                                    try {
                                        long l8 = this.cpF() - 0L;
                                        l5 = l8 == 0L ? 0 : (l8 < 0L ? -1 : 1);
                                        if (iSArray != null) break block13;
                                        if (l5 >= 0) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw mT.cpL(matchException);
                                    }
                                    this.cpB();
                                }
                                catch (MatchException matchException) {
                                    throw mT.cpL(matchException);
                                }
                            }
                            l5 = (l6 = this.cpF() - l2) == 0L ? 0 : (l6 < 0L ? -1 : 1);
                        }
                        try {
                            if (iSArray != null) break block15;
                            if (l5 < 0) break block16;
                        }
                        catch (MatchException matchException) {
                            throw mT.cpL(matchException);
                        }
                        l5 = 1;
                        break block15;
                    }
                    l5 = 0;
                }
                l4 = l5;
                try {
                    try {
                        l3 = l4;
                        if (iSArray != null) break block17;
                        if (l3 == false) break block18;
                    }
                    catch (MatchException matchException) {
                        throw mT.cpL(matchException);
                    }
                    this.cpB();
                }
                catch (MatchException matchException) {
                    throw mT.cpL(matchException);
                }
            }
            l3 = l4;
        }
        try {
            if (iSArray != null) {
                iS.bwK("X4F5Eb");
            }
        }
        catch (MatchException matchException) {
            throw mT.cpL(matchException);
        }
        return (boolean)l3;
    }

    public void cpG(long l2) {
        this.vJZlo = l2;
    }
}

