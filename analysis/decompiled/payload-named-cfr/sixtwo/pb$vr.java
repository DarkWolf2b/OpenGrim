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

public final class pb$vr
extends Enum<pb$vr> {
    public static final /* enum */ pb$vr udGjG;
    public static final /* enum */ pb$vr OnkRL;
    private static final pb$vr[] zDcEX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(7857383337078218586L, 6896392573543873205L, MethodHandles.lookup().lookupClass()).a(58776712474414L) ^ 0x5A36FFE6D03L;
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
        String string = "'\u00c4C\u00fc\u0088\u00b6\u0099\u00f7y\u00c8\u00e1\u009f\u00fb:oO\bI\u00d6\u00e82\u0096\u001e\u00f9X";
        int n3 = "'\u00c4C\u00fc\u0088\u00b6\u0099\u00f7y\u00c8\u00e1\u009f\u00fb:oO\bI\u00d6\u00e82\u0096\u001e\u00f9X".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = pb$vr.dxt(byArray3).intern();
            if ((n5 += n4) >= n3) {
                udGjG = new pb$vr();
                OnkRL = new pb$vr();
                zDcEX = pb$vr.dxs();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static pb$vr[] values() {
        return (pb$vr[])zDcEX.clone();
    }

    public static pb$vr valueOf(String string) {
        return Enum.valueOf(pb$vr.class, string);
    }

    private static String dxt(byte[] byArray) {
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

    private static pb$vr[] dxs() {
        return new pb$vr[]{udGjG, OnkRL};
    }
}

