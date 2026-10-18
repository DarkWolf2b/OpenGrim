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

public final class mp
extends Enum<mp> {
    public static final /* enum */ mp vWdBW;
    public static final /* enum */ mp YeaJV;
    public static final /* enum */ mp czXTa;
    public static final /* enum */ mp qIoJG;
    private static final /* synthetic */ mp[] vVuBH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                var9 = gb.aYR(-3280790354265818811L, 6109741555824014967L, MethodHandles.lookup().lookupClass()).a(160994773604868L) ^ 9364951037441L;
                var1_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var9 >>> 56);
                for (var2_2 = 1; var2_2 < 8; ++var2_2) {
                    v2 = v2;
                    v2[var2_2] = (byte)(var9 << var2_2 * 8 >>> 56);
                }
                var1_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var0_3 = new String[4];
                var6_4 = 0;
                var5_5 = "\u00ea\u0010\u001f\u00f0;`j\u00f9\b H\u00e8\u00a4\u00ac\u0007\u001f\u0090";
                var7_6 = "\u00ea\u0010\u001f\u00f0;`j\u00f9\b H\u00e8\u00a4\u00ac\u0007\u001f\u0090".length();
                var4_7 = 8;
                var3_8 = -1;
lbl18:
                // 2 sources

                while (true) {
                    v3 = ++var3_8;
                    v4 = var5_5.substring(v3, v3 + var4_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl23:
                // 1 sources

                while (true) {
                    var0_3[var6_4++] = mp.clK(var8_9).intern();
                    if ((var3_8 += var4_7) < var7_6) {
                        var4_7 = var5_5.charAt(var3_8);
                        ** continue;
                    }
                    var5_5 = "\b\u000f\u00fb\u00e2\u00ce\u00f6\u00f5\u00f8\b\u00fd\u0084\u00c8_\u0096\u00d4:\u000e";
                    var7_6 = "\b\u000f\u00fb\u00e2\u00ce\u00f6\u00f5\u00f8\b\u00fd\u0084\u00c8_\u0096\u00d4:\u000e".length();
                    var4_7 = 8;
                    var3_8 = -1;
lbl32:
                    // 2 sources

                    while (true) {
                        v6 = ++var3_8;
                        v4 = var5_5.substring(v6, v6 + var4_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl37:
                // 1 sources

                while (true) {
                    var0_3[var6_4++] = mp.clK(var8_9).intern();
                    if ((var3_8 += var4_7) < var7_6) {
                        var4_7 = var5_5.charAt(var3_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var8_9 = var1_1.doFinal(v4.getBytes("ISO-8859-1"));
            switch (v5) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl49:
                // 1 sources

                ** continue;
            }
        }
        mp.vWdBW = new mp();
        mp.YeaJV = new mp();
        mp.czXTa = new mp();
        mp.qIoJG = new mp();
        mp.vVuBH = mp.clJ();
    }

    public static mp[] values() {
        return (mp[])vVuBH.clone();
    }

    public static mp valueOf(String string) {
        return Enum.valueOf(mp.class, string);
    }

    private static String clK(byte[] byArray) {
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

    private static /* synthetic */ mp[] clJ() {
        return new mp[]{vWdBW, YeaJV, czXTa, qIoJG};
    }
}

