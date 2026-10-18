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

public final class mV$uY
extends Enum<mV$uY> {
    public static final /* enum */ mV$uY cbueF;
    public static final /* enum */ mV$uY shkMN;
    public static final /* enum */ mV$uY RjBTD;
    private static final mV$uY[] yTcfC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static String dvR(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    private static mV$uY[] dvQ() {
        return new mV$uY[]{cbueF, shkMN, RjBTD};
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(-2341574322269048736L, 9031629930245312220L, MethodHandles.lookup().lookupClass()).a(13072599195549L) ^ 0x2CF4829E4565L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[3];
        int n2 = 0;
        String string = "\u00b9\u0097\u0010\u0017\u0019\u00c0\u001eh\u00ae8\u00d3+Y\u0013\u00bf\u00a7\u0096\u00b5\u00d8W\u00f1\u00ff\u0088\u00ac\u0010\u00b9\u0097\u0010\u0017\u0019\u00c0\u001eh\u00d3\u00e1\u000b\u008ei\u00d7\u0011\u001b\u0010\u00fb\u00f68\u00ed=Z\u0090;q\u00d8\u00c0\u001e_\bO@";
        int n3 = "\u00b9\u0097\u0010\u0017\u0019\u00c0\u001eh\u00ae8\u00d3+Y\u0013\u00bf\u00a7\u0096\u00b5\u00d8W\u00f1\u00ff\u0088\u00ac\u0010\u00b9\u0097\u0010\u0017\u0019\u00c0\u001eh\u00d3\u00e1\u000b\u008ei\u00d7\u0011\u001b\u0010\u00fb\u00f68\u00ed=Z\u0090;q\u00d8\u00c0\u001e_\bO@".length();
        int n4 = 24;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = mV$uY.dvR(byArray3).intern();
            if ((n5 += n4) >= n3) {
                cbueF = new mV$uY();
                shkMN = new mV$uY();
                RjBTD = new mV$uY();
                yTcfC = mV$uY.dvQ();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static mV$uY[] values() {
        return (mV$uY[])yTcfC.clone();
    }

    public static mV$uY valueOf(String string) {
        return Enum.valueOf(mV$uY.class, string);
    }
}

