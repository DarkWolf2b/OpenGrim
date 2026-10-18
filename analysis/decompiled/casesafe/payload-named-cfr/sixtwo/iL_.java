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

public final class iL
extends Enum<iL> {
    public static final /* enum */ iL iVyPd;
    public static final /* enum */ iL dPOtD;
    public static final /* enum */ iL GhGqr;
    private static final /* synthetic */ iL[] XwAxA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(-672615594028914587L, -4954367533172719237L, MethodHandles.lookup().lookupClass()).a(148303297828864L) ^ 0x5AE7F2FF2436L;
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
        String string = "\u00b9Sj\u0002\u001fy\u0087\u0099\b0\u00ac\u00c1Ki\u0012\u00c0\u0094\u0010\u00c3\u00db\u00c4\u001f|\u00a2\u0013\u0001\u0093\u00c888T\u008b\u00b6\u00e5";
        int n3 = "\u00b9Sj\u0002\u001fy\u0087\u0099\b0\u00ac\u00c1Ki\u0012\u00c0\u0094\u0010\u00c3\u00db\u00c4\u001f|\u00a2\u0013\u0001\u0093\u00c888T\u008b\u00b6\u00e5".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = iL.btv(byArray3).intern();
            if ((n5 += n4) >= n3) {
                iVyPd = new iL();
                dPOtD = new iL();
                GhGqr = new iL();
                XwAxA = iL.btu();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static iL[] values() {
        return (iL[])XwAxA.clone();
    }

    public static iL valueOf(String string) {
        return Enum.valueOf(iL.class, string);
    }

    private static /* synthetic */ iL[] btu() {
        return new iL[]{iVyPd, dPOtD, GhGqr};
    }

    private static String btv(byte[] byArray) {
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

