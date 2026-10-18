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

public final class mV$uW
extends Enum<mV$uW> {
    public static final /* enum */ mV$uW CYtXg;
    public static final /* enum */ mV$uW qGicn;
    public static final /* enum */ mV$uW ArrYB;
    public static final /* enum */ mV$uW PLxbX;
    public static final /* enum */ mV$uW IZyor;
    public static final /* enum */ mV$uW lnOVG;
    private static final mV$uW[] zrTgs;
    private static final long wNLpw;
    private static final long zXfnD;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static mV$uW[] dvM() {
        long l2 = wNLpw ^ 0x3C00B5F0D33CL;
        mV$uW[] mV$uWArray = new mV$uW[(int)zXfnD];
        mV$uWArray[0] = CYtXg;
        mV$uWArray[1] = qGicn;
        mV$uWArray[2] = ArrYB;
        mV$uWArray[3] = PLxbX;
        mV$uWArray[4] = IZyor;
        mV$uWArray[5] = lnOVG;
        return mV$uWArray;
    }

    private static String dvN(byte[] byArray) {
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
        block14: {
            block13: {
                block12: {
                    mV$uW.wNLpw = gb.aYR(-3260000387179747194L, -2714361973627559324L, MethodHandles.lookup().lookupClass()).a(188532629667448L);
                    var14 = mV$uW.wNLpw ^ 118026694154762L;
                    var6_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var14 >>> 56);
                    for (var7_2 = 1; var7_2 < 8; ++var7_2) {
                        v2 = v2;
                        v2[var7_2] = (byte)(var14 << var7_2 * 8 >>> 56);
                    }
                    var6_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var5_3 = new String[6];
                    var11_4 = 0;
                    var10_5 = "\b\u00e6\u008c\u00a6\u0002\u00c8\u00fdLb&\u00d0\u00be\u000f\u0000\u0002\u00f6\u0010\u0095\u0091\f'H\u0095G7\u0094\u00f7\u00d4q\u00c61+l\b\u00fa\u00d1\u008e\u00ce\u00899\u0011\u00c2\u0010\u0095\u0091\f'H\u0095G7#\u00b6\u0007r\u00fa\u0089\u0010\u00b9";
                    var12_6 = "\b\u00e6\u008c\u00a6\u0002\u00c8\u00fdLb&\u00d0\u00be\u000f\u0000\u0002\u00f6\u0010\u0095\u0091\f'H\u0095G7\u0094\u00f7\u00d4q\u00c61+l\b\u00fa\u00d1\u008e\u00ce\u00899\u0011\u00c2\u0010\u0095\u0091\f'H\u0095G7#\u00b6\u0007r\u00fa\u0089\u0010\u00b9".length();
                    var9_7 = 16;
                    var8_8 = -1;
lbl19:
                    // 2 sources

                    while (true) {
                        v3 = ++var8_8;
                        v4 = var10_5.substring(v3, v3 + var9_7);
                        v5 = -1;
                        break block12;
                        break;
                    }
lbl24:
                    // 1 sources

                    while (true) {
                        var5_3[var11_4++] = mV$uW.dvN(var13_9).intern();
                        if ((var8_8 += var9_7) < var12_6) {
                            var9_7 = var10_5.charAt(var8_8);
                            ** continue;
                        }
                        var10_5 = "\u00b0\u00e2\u00ed\u008f;\u00dc\tp.Q\u00c7\u00ed\u001dw\u00d7A\bn\u0086\u00ebs\u0081\u00d1\u00b0\u009a";
                        var12_6 = "\u00b0\u00e2\u00ed\u008f;\u00dc\tp.Q\u00c7\u00ed\u001dw\u00d7A\bn\u0086\u00ebs\u0081\u00d1\u00b0\u009a".length();
                        var9_7 = 16;
                        var8_8 = -1;
lbl33:
                        // 2 sources

                        while (true) {
                            v6 = ++var8_8;
                            v4 = var10_5.substring(v6, v6 + var9_7);
                            v5 = 0;
                            break block12;
                            break;
                        }
                        break;
                    }
lbl38:
                    // 1 sources

                    while (true) {
                        var5_3[var11_4++] = mV$uW.dvN(var13_9).intern();
                        if ((var8_8 += var9_7) < var12_6) {
                            var9_7 = var10_5.charAt(var8_8);
                            ** continue;
                        }
                        break block13;
                        break;
                    }
                }
                var13_9 = var6_1.doFinal(v4.getBytes("ISO-8859-1"));
                switch (v5) {
                    default: {
                        ** continue;
                    }
                    ** case 0:
lbl50:
                    // 1 sources

                    ** continue;
                }
            }
            var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
            v7 = SecretKeyFactory.getInstance("DES");
            v8 = new byte[8];
            v9 = v8;
            v8[0] = (byte)(var14 >>> 56);
            for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                v9 = v9;
                v9[var1_11] = (byte)(var14 << var1_11 * 8 >>> 56);
            }
            break block14;
lbl62:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
        var2_12 = 7896330065170531842L;
        var4_13 = var0_10.doFinal(new byte[]{(byte)(var2_12 >>> 56), (byte)(var2_12 >>> 48), (byte)(var2_12 >>> 40), (byte)(var2_12 >>> 32), (byte)(var2_12 >>> 24), (byte)(var2_12 >>> 16), (byte)(var2_12 >>> 8), (byte)var2_12});
        ** while (true)
        mV$uW.zXfnD = ((long)var4_13[0] & 255L) << 56 | ((long)var4_13[1] & 255L) << 48 | ((long)var4_13[2] & 255L) << 40 | ((long)var4_13[3] & 255L) << 32 | ((long)var4_13[4] & 255L) << 24 | ((long)var4_13[5] & 255L) << 16 | ((long)var4_13[6] & 255L) << 8 | (long)var4_13[7] & 255L;
        mV$uW.CYtXg = new mV$uW();
        mV$uW.qGicn = new mV$uW();
        mV$uW.ArrYB = new mV$uW();
        mV$uW.PLxbX = new mV$uW();
        mV$uW.IZyor = new mV$uW();
        mV$uW.lnOVG = new mV$uW();
        mV$uW.zrTgs = mV$uW.dvM();
    }

    public static mV$uW[] values() {
        return (mV$uW[])zrTgs.clone();
    }

    public static mV$uW valueOf(String string) {
        return Enum.valueOf(mV$uW.class, string);
    }
}

