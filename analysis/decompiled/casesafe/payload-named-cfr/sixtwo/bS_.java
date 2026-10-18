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
import sixtwo.bT;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jF;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public abstract class bS
extends cw {
    protected bT fGWTH;
    protected final rk dExGi;
    private static int qlHhv;
    private static final long fLLMv;
    private static final long XOMXi;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bS(cv cv2, mr mr2) {
        long l2 = fLLMv ^ 0x39DC722062BAL;
        super(cv2, mr2);
        this.fGWTH = new bT(48.0f, 15.0f);
        this.dExGi = new rk((int)XOMXi).dhs(rj.NJlxm);
        this.Tz();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        fLLMv = gb.aYR(5886275071503743153L, -451407613624388453L, MethodHandles.lookup().lookupClass()).a(161403895425971L);
        long l2 = fLLMv ^ 0xBEB53A72125L;
        bS.NQ(104);
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = -309442034757594481L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                XOMXi = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public abstract boolean MH();

    public bT NO() {
        return this.fGWTH;
    }

    public rk NP() {
        return this.dExGi;
    }

    public static int NR() {
        return qlHhv;
    }

    public void MG(lC lC2, ii ii2) {
    }

    public mG MI() {
        return rD.dlM().bjd();
    }

    public static int NS() {
        int n2 = bS.NR();
        try {
            if (n2 == 0) {
                return 79;
            }
        }
        catch (MatchException matchException) {
            throw bS.NT(matchException);
        }
        return 0;
    }

    public void NN(lC lC2, ii ii2) {
        jF.bHz(1.0f, 1.0f, 1.0f, this.dExGi.dhj());
        this.MG(lC2, ii2);
        jF.bHz(1.0f, 1.0f, 1.0f, 1.0f);
    }

    public static void NQ(int n2) {
        qlHhv = n2;
    }

    private static MatchException NT(MatchException matchException) {
        return matchException;
    }

    public void Ne(double d2, double d3, mA mA2) {
    }
}

