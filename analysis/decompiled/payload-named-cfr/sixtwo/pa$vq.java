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

public final class pa$vq
extends Enum<pa$vq> {
    public static final /* enum */ pa$vq Raifz;
    public static final /* enum */ pa$vq iylUM;
    public static final /* enum */ pa$vq Zmtfw;
    private static final pa$vq[] vwubf;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(7690214890428182750L, 2321336520346612050L, MethodHandles.lookup().lookupClass()).a(46244192228789L) ^ 0x6B47EA5D418EL;
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
        String string = "\u00e2\f\u00ear\"\u0089%j\u0010\u0087\u00f3\u00f1\u0018\u0004\u00f9:\u0017I= \u00c7>2\u0001\u0095\b\u0086\u00cb\u0090R\u0017\u00be\u000f\u00e6";
        int n3 = "\u00e2\f\u00ear\"\u0089%j\u0010\u0087\u00f3\u00f1\u0018\u0004\u00f9:\u0017I= \u00c7>2\u0001\u0095\b\u0086\u00cb\u0090R\u0017\u00be\u000f\u00e6".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = pa$vq.dxr(byArray3).intern();
            if ((n5 += n4) >= n3) {
                Raifz = new pa$vq();
                iylUM = new pa$vq();
                Zmtfw = new pa$vq();
                vwubf = pa$vq.dxq();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static pa$vq[] values() {
        return (pa$vq[])vwubf.clone();
    }

    public static pa$vq valueOf(String string) {
        return Enum.valueOf(pa$vq.class, string);
    }

    private static String dxr(byte[] byArray) {
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

    private static pa$vq[] dxq() {
        return new pa$vq[]{Raifz, iylUM, Zmtfw};
    }
}

