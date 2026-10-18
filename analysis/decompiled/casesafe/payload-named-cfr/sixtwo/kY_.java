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

public final class kY
extends Enum<kY> {
    public static final /* enum */ kY DsgDa;
    public static final /* enum */ kY YYiVQ;
    private final int RpkTL;
    private final boolean nyRgJ;
    private static final /* synthetic */ kY[] slxba;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private kY(int n3, boolean bl2) {
        this.RpkTL = n3;
        this.nyRgJ = bl2;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(-4835773653455488233L, 4752228430730453527L, MethodHandles.lookup().lookupClass()).a(245841564494153L) ^ 0x1584AB0B5C87L;
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
        String string = "\u00cd\u00ef\u00bc\u009dijEp\u0010\u008f\u008c\u00a0\u00ea=\u00c8Si\t\u00a33\u0094\u00b8\u00ad\u0003 ";
        int n3 = "\u00cd\u00ef\u00bc\u009dijEp\u0010\u008f\u008c\u00a0\u00ea=\u00c8Si\t\u00a33\u0094\u00b8\u00ad\u0003 ".length();
        int n4 = 8;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = kY.bWz(byArray3).intern();
            if ((n5 += n4) >= n3) {
                DsgDa = new kY(0, false);
                YYiVQ = new kY(1, true);
                slxba = kY.bWy();
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static kY[] values() {
        return (kY[])slxba.clone();
    }

    public static kY valueOf(String string) {
        return Enum.valueOf(kY.class, string);
    }

    public int bWw() {
        return this.RpkTL;
    }

    private static /* synthetic */ kY[] bWy() {
        return new kY[]{DsgDa, YYiVQ};
    }

    private static String bWz(byte[] byArray) {
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

    public boolean bWx() {
        return this.nyRgJ;
    }
}

