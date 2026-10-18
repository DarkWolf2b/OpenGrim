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

public final class kv
extends Enum<kv> {
    public static final /* enum */ kv DESOY;
    public static final /* enum */ kv CiCMa;
    public static final /* enum */ kv epRjJ;
    private static final /* synthetic */ kv[] HyZSh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static String bRJ(byte[] byArray) {
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

    private static /* synthetic */ kv[] bRI() {
        return new kv[]{DESOY, CiCMa, epRjJ};
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(2284992057435910908L, -7604609113720459312L, MethodHandles.lookup().lookupClass()).a(270179960562444L) ^ 0x2F903AD3F311L;
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
        String string = "}\u00ce\u00ce\u00fc\u0084\u007f\u00bf\u00d8\u00feOUd\u0093\n\u007f<\b\u009f\u00db\u009e\u00f8\u00dbEmW\u0010\u00d0\u00b58i|p\u0001\u0013\u00b9\u00a50\u009ck,\u00cb+";
        int n3 = "}\u00ce\u00ce\u00fc\u0084\u007f\u00bf\u00d8\u00feOUd\u0093\n\u007f<\b\u009f\u00db\u009e\u00f8\u00dbEmW\u0010\u00d0\u00b58i|p\u0001\u0013\u00b9\u00a50\u009ck,\u00cb+".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = kv.bRJ(byArray3).intern();
            if ((n5 += n4) >= n3) {
                DESOY = new kv();
                CiCMa = new kv();
                epRjJ = new kv();
                HyZSh = kv.bRI();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static kv[] values() {
        return (kv[])HyZSh.clone();
    }

    public static kv valueOf(String string) {
        return Enum.valueOf(kv.class, string);
    }
}

