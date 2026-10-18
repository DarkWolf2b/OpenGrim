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

public final class lS
extends Enum<lS> {
    public static final /* enum */ lS xiNFW;
    public static final /* enum */ lS BqCZl;
    private static final /* synthetic */ lS[] Iqkba;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(1975895135610406136L, -2198072421256657648L, MethodHandles.lookup().lookupClass()).a(110172664094611L) ^ 0x6E5D23B988DDL;
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
        String string = "b\u00d2\u00a7\u00e98\u00ae\u00d6\u00f6\u009aj\u0015\u00ba\u00ff\u00fb\u00cd\u00d7\bl\u00e7\\9\u0080\u008e\u00d0\u009e";
        int n3 = "b\u00d2\u00a7\u00e98\u00ae\u00d6\u00f6\u009aj\u0015\u00ba\u00ff\u00fb\u00cd\u00d7\bl\u00e7\\9\u0080\u008e\u00d0\u009e".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = lS.ciP(byArray3).intern();
            if ((n5 += n4) >= n3) {
                xiNFW = new lS();
                BqCZl = new lS();
                Iqkba = lS.ciO();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static lS[] values() {
        return (lS[])Iqkba.clone();
    }

    public static lS valueOf(String string) {
        return Enum.valueOf(lS.class, string);
    }

    private static /* synthetic */ lS[] ciO() {
        return new lS[]{xiNFW, BqCZl};
    }

    private static String ciP(byte[] byArray) {
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
}

