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

public final class mV$va
extends Enum<mV$va> {
    public static final /* enum */ mV$va mIFyi;
    public static final /* enum */ mV$va xvJym;
    public static final /* enum */ mV$va nSVue;
    public static final /* enum */ mV$va ZzPmA;
    private static final mV$va[] tlqtB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static mV$va[] dvX() {
        return new mV$va[]{mIFyi, xvJym, nSVue, ZzPmA};
    }

    private static String dvY(byte[] byArray) {
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
                var9 = gb.aYR(-6363050942209904719L, 7906421645435602670L, MethodHandles.lookup().lookupClass()).a(88850852790273L) ^ 18515571574588L;
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
                var5_5 = "\u00e5\u0093pnm\u00b4\u0084\u0082\u0010\t\u00d6\u00a4|\u0084\u00f6\u0091kt\u00b0\u00bb\u0099w\u008b\u00fc4";
                var7_6 = "\u00e5\u0093pnm\u00b4\u0084\u0082\u0010\t\u00d6\u00a4|\u0084\u00f6\u0091kt\u00b0\u00bb\u0099w\u008b\u00fc4".length();
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
                    var0_3[var6_4++] = mV$va.dvY(var8_9).intern();
                    if ((var3_8 += var4_7) < var7_6) {
                        var4_7 = var5_5.charAt(var3_8);
                        ** continue;
                    }
                    var5_5 = "\t\u00d6\u00a4|\u0084\u00f6\u0091k\u00f2~\u00aa\u00e2\u00c8\u000e\u00cat\u0010\u00ad\u00a3\f\t|\u0095u\u00f1!p\bG\u00dcd\u0014\u00e0";
                    var7_6 = "\t\u00d6\u00a4|\u0084\u00f6\u0091k\u00f2~\u00aa\u00e2\u00c8\u000e\u00cat\u0010\u00ad\u00a3\f\t|\u0095u\u00f1!p\bG\u00dcd\u0014\u00e0".length();
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
                    var0_3[var6_4++] = mV$va.dvY(var8_9).intern();
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
        mV$va.mIFyi = new mV$va();
        mV$va.xvJym = new mV$va();
        mV$va.nSVue = new mV$va();
        mV$va.ZzPmA = new mV$va();
        mV$va.tlqtB = mV$va.dvX();
    }

    public static mV$va[] values() {
        return (mV$va[])tlqtB.clone();
    }

    public static mV$va valueOf(String string) {
        return Enum.valueOf(mV$va.class, string);
    }
}

