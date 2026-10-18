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

public final class h$rH
extends Enum<h$rH> {
    public static final /* enum */ h$rH bktbd;
    public static final /* enum */ h$rH GxiIK;
    private static final h$rH[] rhyQj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static h$rH[] dmB() {
        return new h$rH[]{bktbd, GxiIK};
    }

    private static String dmC(byte[] byArray) {
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
        long l2 = gb.aYR(4006739308957434599L, -8543177723033228369L, MethodHandles.lookup().lookupClass()).a(22456261100548L) ^ 0x58D646ABD68BL;
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
        String string = "\u00b6\u00d9\u0084\u000e\u00e2'\u00b5\u00a0\u00128'+\u0003\u00b8&\u000b\u0010\u00ac\u00ac\u00d3l$0o\u00bd.0\u0007\u0016I\u00fbP\u00ed";
        int n3 = "\u00b6\u00d9\u0084\u000e\u00e2'\u00b5\u00a0\u00128'+\u0003\u00b8&\u000b\u0010\u00ac\u00ac\u00d3l$0o\u00bd.0\u0007\u0016I\u00fbP\u00ed".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = h$rH.dmC(byArray3).intern();
            if ((n5 += n4) >= n3) {
                bktbd = new h$rH();
                GxiIK = new h$rH();
                rhyQj = h$rH.dmB();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static h$rH[] values() {
        return (h$rH[])rhyQj.clone();
    }

    public static h$rH valueOf(String string) {
        return Enum.valueOf(h$rH.class, string);
    }
}

