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

public final class mV$uV
extends Enum<mV$uV> {
    public static final /* enum */ mV$uV hVoxf;
    public static final /* enum */ mV$uV vfaoW;
    public static final /* enum */ mV$uV VWHqI;
    private static final mV$uV[] Aochh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static mV$uV[] dvK() {
        return new mV$uV[]{hVoxf, vfaoW, VWHqI};
    }

    private static String dvL(byte[] byArray) {
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
        long l2 = gb.aYR(-2862313747925975829L, 7044231567466996325L, MethodHandles.lookup().lookupClass()).a(220509075736385L) ^ 0xCAFD7055C53L;
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
        String string = "\u0099\u00c77\u0007\u001e\u009e\u00e2*\u00178\u001c\"Yc\u0094`\bZN\u00b5\u0013Q\u00a0v2\u0010\u0099\u00c77\u0007\u001e\u009e\u00e2**\u00d2\u00f1\u0013(v\u00e4\u0092";
        int n3 = "\u0099\u00c77\u0007\u001e\u009e\u00e2*\u00178\u001c\"Yc\u0094`\bZN\u00b5\u0013Q\u00a0v2\u0010\u0099\u00c77\u0007\u001e\u009e\u00e2**\u00d2\u00f1\u0013(v\u00e4\u0092".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = mV$uV.dvL(byArray3).intern();
            if ((n5 += n4) >= n3) {
                hVoxf = new mV$uV();
                vfaoW = new mV$uV();
                VWHqI = new mV$uV();
                Aochh = mV$uV.dvK();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static mV$uV[] values() {
        return (mV$uV[])Aochh.clone();
    }

    public static mV$uV valueOf(String string) {
        return Enum.valueOf(mV$uV.class, string);
    }
}

