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
import sixtwo.mG;
import sixtwo.rj;
import sixtwo.rk;

class ca$sl {
    private final String EVJUd;
    private final String sliuY;
    private final mG iIDDI;
    private final String BwIFl;
    private final rk VoBja;
    private static final long sJUal = gb.aYR(-8831232379099909450L, 2847733807376665301L, MethodHandles.lookup().lookupClass()).a(11043279932678L);
    private static final long dmABj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ca$sl(String string, String string2, mG mG2, String string3) {
        long l2 = sJUal ^ 0x446DFE72D426L;
        this.VoBja = new rk((int)dmABj).dhs(rj.UPXqT);
        this.EVJUd = string;
        this.sliuY = string2;
        this.iIDDI = mG2;
        this.BwIFl = string3;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = sJUal ^ 0x1E5C2FE06B8EL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 2521043688639798750L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                dmABj = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }
}

