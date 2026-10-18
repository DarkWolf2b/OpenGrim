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

public final class jz$tU
extends Enum<jz$tU> {
    public static final /* enum */ jz$tU GgXAb;
    public static final /* enum */ jz$tU iSvaF;
    private static final jz$tU[] BWJoM;
    private static String[] RtxbG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(-6988668092185728012L, -6829450144089137423L, MethodHandles.lookup().lookupClass()).a(58555418188503L) ^ 0x5E06C3DA7F67L;
        if (jz$tU.dqa() != null) {
            jz$tU.dpZ(new String[4]);
        }
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
        String string = "\"\u00b7\u0084T\u0084,nK\b\u001d\u00baZH\tt}J";
        int n3 = "\"\u00b7\u0084T\u0084,nK\b\u001d\u00baZH\tt}J".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = jz$tU.dqb(byArray3).intern();
            if ((n5 += n4) >= n3) {
                GgXAb = new jz$tU();
                iSvaF = new jz$tU();
                BWJoM = jz$tU.dpY();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static jz$tU[] values() {
        return (jz$tU[])BWJoM.clone();
    }

    public static jz$tU valueOf(String string) {
        return Enum.valueOf(jz$tU.class, string);
    }

    private static String dqb(byte[] byArray) {
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

    private static jz$tU[] dpY() {
        return new jz$tU[]{GgXAb, iSvaF};
    }

    public static void dpZ(String[] stringArray) {
        RtxbG = stringArray;
    }

    public static String[] dqa() {
        return RtxbG;
    }
}

