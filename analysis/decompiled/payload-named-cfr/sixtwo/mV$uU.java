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

final class mV$uU
extends Enum<mV$uU> {
    public static final /* enum */ mV$uU VGnHc;
    public static final /* enum */ mV$uU aXLVs;
    public static final /* enum */ mV$uU opfPK;
    public static final /* enum */ mV$uU SUSLX;
    private static final mV$uU[] ZUYbt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static mV$uU[] dvI() {
        return new mV$uU[]{VGnHc, aXLVs, opfPK, SUSLX};
    }

    private static String dvJ(byte[] byArray) {
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
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                var9 = gb.aYR(-4195135263034143066L, 555678338320728502L, MethodHandles.lookup().lookupClass()).a(66639046673345L) ^ 103935283381450L;
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
                var5_5 = "'j\u00a0\u00e7N\u00e1W\u0003\u00bb[\u00de\u00aa\u0011s\u00afJ\u00b8\u00a7 \u0085r|\u008aF\u0010\u001b\u0001a\u00fb\u000bu\u00e4\u0086\u00ee\u00cf\u0086\u001d%\u00eb\u00ce/";
                var7_6 = "'j\u00a0\u00e7N\u00e1W\u0003\u00bb[\u00de\u00aa\u0011s\u00afJ\u00b8\u00a7 \u0085r|\u008aF\u0010\u001b\u0001a\u00fb\u000bu\u00e4\u0086\u00ee\u00cf\u0086\u001d%\u00eb\u00ce/".length();
                var4_7 = 24;
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
                    var0_3[var6_4++] = mV$uU.dvJ(var8_9).intern();
                    if ((var3_8 += var4_7) < var7_6) {
                        var4_7 = var5_5.charAt(var3_8);
                        ** continue;
                    }
                    var5_5 = "\u001b\u0001a\u00fb\u000bu\u00e4\u0086U\u0001m\u00bf\u00b24=q\b\u0001\u00b5\u009b\u00fc\u00d2\u00cfK\u0019";
                    var7_6 = "\u001b\u0001a\u00fb\u000bu\u00e4\u0086U\u0001m\u00bf\u00b24=q\b\u0001\u00b5\u009b\u00fc\u00d2\u00cfK\u0019".length();
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
                    var0_3[var6_4++] = mV$uU.dvJ(var8_9).intern();
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
        mV$uU.VGnHc = new mV$uU();
        mV$uU.aXLVs = new mV$uU();
        mV$uU.opfPK = new mV$uU();
        mV$uU.SUSLX = new mV$uU();
        mV$uU.ZUYbt = mV$uU.dvI();
    }

    public static mV$uU[] values() {
        return (mV$uU[])ZUYbt.clone();
    }

    public static mV$uU valueOf(String string) {
        return Enum.valueOf(mV$uU.class, string);
    }
}

