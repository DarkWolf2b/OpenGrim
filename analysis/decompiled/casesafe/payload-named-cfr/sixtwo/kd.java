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
import sixtwo.iS;

public final class kd
extends Enum<kd> {
    public static final /* enum */ kd AhlXN;
    public static final /* enum */ kd sQVlR;
    public static final /* enum */ kd IbNTv;
    private final int hYhDr;
    private static final /* synthetic */ kd[] VeRTR;
    private static iS[] qESfC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private kd(int n3) {
        this.hYhDr = n3;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(-3065632304402411693L, -4551052499802911118L, MethodHandles.lookup().lookupClass()).a(7103219834343L) ^ 0x6AC63355FE12L;
        if (kd.bOg() == null) {
            kd.bOf(new iS[3]);
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
        String[] stringArray = new String[3];
        int n2 = 0;
        String string = "A\u00bc\u00d4\n\u00e9\u0012\u008c,\u0019\u009b\u00f4\u00c2\u0084I\u0089\u00eb\u0010\u00e6\u0013\u009e*#\u00d5\u00b9\u009a}\u00cc\u0002\u00f2\u009a\u0080\u00cc\u001c\u00108\u00ca\u000f\u00f3\u00e1Z\u0011\u00c9\u00ef\u00ca\u00f4/c\u0081h\u0019";
        int n3 = "A\u00bc\u00d4\n\u00e9\u0012\u008c,\u0019\u009b\u00f4\u00c2\u0084I\u0089\u00eb\u0010\u00e6\u0013\u009e*#\u00d5\u00b9\u009a}\u00cc\u0002\u00f2\u009a\u0080\u00cc\u001c\u00108\u00ca\u000f\u00f3\u00e1Z\u0011\u00c9\u00ef\u00ca\u00f4/c\u0081h\u0019".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = kd.bOh(byArray3).intern();
            if ((n5 += n4) >= n3) {
                AhlXN = new kd(0);
                sQVlR = new kd(1);
                IbNTv = new kd(2);
                VeRTR = kd.bOe();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static kd[] values() {
        return (kd[])VeRTR.clone();
    }

    public static kd valueOf(String string) {
        return Enum.valueOf(kd.class, string);
    }

    private static /* synthetic */ kd[] bOe() {
        return new kd[]{AhlXN, sQVlR, IbNTv};
    }

    public static iS[] bOg() {
        return qESfC;
    }

    public static void bOf(iS[] iSArray) {
        qESfC = iSArray;
    }

    private static String bOh(byte[] byArray) {
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

    public int bOd() {
        return this.hYhDr;
    }
}

