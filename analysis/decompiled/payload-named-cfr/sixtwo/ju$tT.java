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

final class ju$tT
extends Enum<ju$tT> {
    public static final /* enum */ ju$tT yDoOO;
    public static final /* enum */ ju$tT IHKNQ;
    private static final ju$tT[] COXpQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(6285034763905464312L, 3006126702871903171L, MethodHandles.lookup().lookupClass()).a(26321797801578L) ^ 0x527A25180A74L;
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
        String[] stringArray = new String[2];
        int n2 = 0;
        String string = "\u00aa\u00adp(I\u00d65\u000e\b\u00e6g\u00ae\u00da\u00cc\u00afg\u0012";
        int n3 = "\u00aa\u00adp(I\u00d65\u000e\b\u00e6g\u00ae\u00da\u00cc\u00afg\u0012".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = ju$tT.dpX(byArray3).intern();
            if ((n5 += n4) >= n3) {
                yDoOO = new ju$tT();
                IHKNQ = new ju$tT();
                COXpQ = ju$tT.dpW();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static ju$tT[] values() {
        return (ju$tT[])COXpQ.clone();
    }

    public static ju$tT valueOf(String string) {
        return Enum.valueOf(ju$tT.class, string);
    }

    private static String dpX(byte[] byArray) {
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

    private static ju$tT[] dpW() {
        return new ju$tT[]{yDoOO, IHKNQ};
    }
}

