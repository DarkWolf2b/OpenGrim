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

public final class cX$ss
extends Enum<cX$ss> {
    public static final /* enum */ cX$ss uksqJ;
    public static final /* enum */ cX$ss RymlV;
    public static final /* enum */ cX$ss vNDXP;
    private static final cX$ss[] usYdY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(5597449029412440980L, -2635443635666165560L, MethodHandles.lookup().lookupClass()).a(143267300656769L) ^ 0x3A7B50E5F85BL;
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
        String string = "\u00a1\u00ab\u00bd\u00e3\u0099\u00d5\u00db:\bR\u00ecw\u0001\u00daPM\u00bd\bBoap\u0002v\u00eb\u009d";
        int n3 = "\u00a1\u00ab\u00bd\u00e3\u0099\u00d5\u00db:\bR\u00ecw\u0001\u00daPM\u00bd\bBoap\u0002v\u00eb\u009d".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = cX$ss.dnT(byArray3).intern();
            if ((n5 += n4) >= n3) {
                uksqJ = new cX$ss();
                RymlV = new cX$ss();
                vNDXP = new cX$ss();
                usYdY = cX$ss.dnS();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static cX$ss[] values() {
        return (cX$ss[])usYdY.clone();
    }

    public static cX$ss valueOf(String string) {
        return Enum.valueOf(cX$ss.class, string);
    }

    private static cX$ss[] dnS() {
        return new cX$ss[]{uksqJ, RymlV, vNDXP};
    }

    private static String dnT(byte[] byArray) {
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

