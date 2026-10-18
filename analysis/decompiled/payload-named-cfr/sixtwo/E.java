/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.F;
import sixtwo.gb;
import sixtwo.jk;
import sixtwo.lf;
import sixtwo.rk;

public interface E {
    public static final long nHxCq = gb.aYR(-5676891595741979279L, -7249379697926721278L, MethodHandles.lookup().lookupClass()).a(42824004375287L);
    public static final String yTkpx;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = nHxCq ^ 0x691E6816D3E7L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("\u0081\u00a2\u00b0\u00e1H\u00d5\u0018\u00d6".getBytes("ISO-8859-1"));
                yTkpx = E.a(byArray3).intern();
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    private static MatchException b(MatchException matchException) {
        return matchException;
    }

    private static String a(byte[] byArray) {
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

    default public void delete() {
    }

    public boolean isActive();

    public String displayName();

    public void select();

    public rk hoverAnimation();

    default public List<F> contextActions() {
        long l2 = nHxCq ^ 0x5ABCB04882AEL;
        try {
            if (!this.hasDeleteIcon()) {
                return List.of();
            }
        }
        catch (MatchException matchException) {
            throw E.b(matchException);
        }
        return List.of(new F(yTkpx, lf.JHGge, jk.mPXGi, jk.mPXGi, aj2 -> {
            aj2.oj(false);
            this.delete();
        }));
    }

    public rk activeAnimation();

    public boolean hasDeleteIcon();
}

