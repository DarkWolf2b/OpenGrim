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

public final class oB
extends Enum<oB> {
    public static final /* enum */ oB LwHxs;
    public static final /* enum */ oB FXGPX;
    private static final /* synthetic */ oB[] YksYl;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(-327597105848960935L, 7527311841758127059L, MethodHandles.lookup().lookupClass()).a(80886472393102L) ^ 0x4BB23DD67751L;
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
        String string = "(\u00ff\u009f\u00c6\u00e5\u00b8\u0013\u00dd\b0\u007f[^\u001e\u00ef\u00b6\r";
        int n3 = "(\u00ff\u009f\u00c6\u00e5\u00b8\u0013\u00dd\b0\u007f[^\u001e\u00ef\u00b6\r".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = oB.cHO(byArray3).intern();
            if ((n5 += n4) >= n3) {
                LwHxs = new oB();
                FXGPX = new oB();
                YksYl = oB.cHN();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static oB[] values() {
        return (oB[])YksYl.clone();
    }

    public static oB valueOf(String string) {
        return Enum.valueOf(oB.class, string);
    }

    private static /* synthetic */ oB[] cHN() {
        return new oB[]{LwHxs, FXGPX};
    }

    private static String cHO(byte[] byArray) {
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

