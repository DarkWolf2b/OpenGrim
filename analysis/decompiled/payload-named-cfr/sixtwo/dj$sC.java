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

final class dj$sC
extends Enum<dj$sC> {
    public static final /* enum */ dj$sC iiJny;
    public static final /* enum */ dj$sC XksfN;
    public static final /* enum */ dj$sC vzSwM;
    public static final /* enum */ dj$sC WdDaI;
    private static final dj$sC[] nRxbT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                var9 = gb.aYR(651909763914831484L, 803236130106764977L, MethodHandles.lookup().lookupClass()).a(216211222552836L) ^ 67702014275273L;
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
                var5_5 = "\u00104\u0019\u00f9 \u00d0PS\b\u0018\u008f\u00b8\u00dcM\"\u00f5\u00f0";
                var7_6 = "\u00104\u0019\u00f9 \u00d0PS\b\u0018\u008f\u00b8\u00dcM\"\u00f5\u00f0".length();
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
                    var0_3[var6_4++] = dj$sC.doG(var8_9).intern();
                    if ((var3_8 += var4_7) < var7_6) {
                        var4_7 = var5_5.charAt(var3_8);
                        ** continue;
                    }
                    var5_5 = "`\f\f\u00d5\u00a2\\\u00b8+\u00da\u001am_\u0007\u000bju\b\u000f\u00c9\u00f5i\u0082\u00bf\u0018\"";
                    var7_6 = "`\f\f\u00d5\u00a2\\\u00b8+\u00da\u001am_\u0007\u000bju\b\u000f\u00c9\u00f5i\u0082\u00bf\u0018\"".length();
                    var4_7 = 16;
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
                    var0_3[var6_4++] = dj$sC.doG(var8_9).intern();
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
        dj$sC.iiJny = new dj$sC();
        dj$sC.XksfN = new dj$sC();
        dj$sC.vzSwM = new dj$sC();
        dj$sC.WdDaI = new dj$sC();
        dj$sC.nRxbT = dj$sC.doF();
    }

    public static dj$sC[] values() {
        return (dj$sC[])nRxbT.clone();
    }

    public static dj$sC valueOf(String string) {
        return Enum.valueOf(dj$sC.class, string);
    }

    private static dj$sC[] doF() {
        return new dj$sC[]{iiJny, XksfN, vzSwM, WdDaI};
    }

    private static String doG(byte[] byArray) {
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
}

