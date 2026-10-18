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

final class kg$ue
extends Enum<kg$ue> {
    public static final /* enum */ kg$ue ubqbG;
    public static final /* enum */ kg$ue risei;
    public static final /* enum */ kg$ue KXgXu;
    private static final kg$ue[] KnqDP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static String dsv(byte[] byArray) {
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

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(-4143980138689717270L, 8557271582994429577L, MethodHandles.lookup().lookupClass()).a(246127802278549L) ^ 0x2B9ADF4753BFL;
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
        String string = "\u000f\u000f\u00f1\u0019\u00d8|a\u009b\b8\u0094\u001a\u00ba\u00cb\u00e5\u0016n\b\u00c1\u00a2\u00f1\u00eb\u00c0Xs\u0095";
        int n3 = "\u000f\u000f\u00f1\u0019\u00d8|a\u009b\b8\u0094\u001a\u00ba\u00cb\u00e5\u0016n\b\u00c1\u00a2\u00f1\u00eb\u00c0Xs\u0095".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = kg$ue.dsv(byArray3).intern();
            if ((n5 += n4) >= n3) {
                ubqbG = new kg$ue();
                risei = new kg$ue();
                KXgXu = new kg$ue();
                KnqDP = kg$ue.dsu();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static kg$ue[] values() {
        return (kg$ue[])KnqDP.clone();
    }

    public static kg$ue valueOf(String string) {
        return Enum.valueOf(kg$ue.class, string);
    }

    private static kg$ue[] dsu() {
        return new kg$ue[]{ubqbG, risei, KXgXu};
    }
}

