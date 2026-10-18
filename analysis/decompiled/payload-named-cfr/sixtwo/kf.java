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

public final class kf
extends Enum<kf> {
    public static final /* enum */ kf viqyh;
    public static final /* enum */ kf nvgmg;
    private final int vsKnl;
    private static final /* synthetic */ kf[] jjfJk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private kf(int n3) {
        this.vsKnl = n3;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(-8085889407779633277L, -8427837932458597743L, MethodHandles.lookup().lookupClass()).a(79293739322069L) ^ 0x25C298E76827L;
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
        String string = "\u0096\u00ffHbx~\u008d\u0010\b\u0088\u00f5\u00f1\u00e6\u00af\u00d4\u0089,";
        int n3 = "\u0096\u00ffHbx~\u008d\u0010\b\u0088\u00f5\u00f1\u00e6\u00af\u00d4\u0089,".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = kf.bOt(byArray3).intern();
            if ((n5 += n4) >= n3) {
                viqyh = new kf(0);
                nvgmg = new kf(1);
                jjfJk = kf.bOs();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static kf[] values() {
        return (kf[])jjfJk.clone();
    }

    public static kf valueOf(String string) {
        return Enum.valueOf(kf.class, string);
    }

    private static String bOt(byte[] byArray) {
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

    private static /* synthetic */ kf[] bOs() {
        return new kf[]{viqyh, nvgmg};
    }

    public int bOr() {
        return this.vsKnl;
    }
}

