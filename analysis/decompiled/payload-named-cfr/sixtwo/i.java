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

public final class i
extends Enum<i> {
    public static final /* enum */ i YdJtr;
    public static final /* enum */ i nKqnf;
    public static final /* enum */ i pEktq;
    private static final /* synthetic */ i[] VbUZk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(3519216035421042107L, 1378465119140037046L, MethodHandles.lookup().lookupClass()).a(246949947571654L) ^ 0x4DD4BC22E834L;
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
        String string = "\u00a3.\fJ\f\u008c\u00d5\u008c\b)\u0084\u00d9\u00e6\u009b\u00ea\u0007\u0006\bPV\u00d9\u00ea\u00ea=\u00da/";
        int n3 = "\u00a3.\fJ\f\u008c\u00d5\u008c\b)\u0084\u00d9\u00e6\u009b\u00ea\u0007\u0006\bPV\u00d9\u00ea\u00ea=\u00da/".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = i.bS(byArray3).intern();
            if ((n5 += n4) >= n3) {
                YdJtr = new i();
                nKqnf = new i();
                pEktq = new i();
                VbUZk = i.bR();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static i[] values() {
        return (i[])VbUZk.clone();
    }

    public static i valueOf(String string) {
        return Enum.valueOf(i.class, string);
    }

    private static /* synthetic */ i[] bR() {
        return new i[]{YdJtr, nKqnf, pEktq};
    }

    private static String bS(byte[] byArray) {
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

