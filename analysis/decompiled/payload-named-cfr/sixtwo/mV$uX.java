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

public final class mV$uX
extends Enum<mV$uX> {
    public static final /* enum */ mV$uX wOGIN;
    public static final /* enum */ mV$uX AjjgB;
    public static final /* enum */ mV$uX asLHQ;
    public static final /* enum */ mV$uX nfVnU;
    public static final /* enum */ mV$uX eftrc;
    public static final /* enum */ mV$uX OtKmW;
    private static final mV$uX[] xLDqY;
    private static final long HelJP;
    private static final long wgkJX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static String dvP(byte[] byArray) {
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

    private static mV$uX[] dvO() {
        long l2 = HelJP ^ 0x19B9323706E0L;
        mV$uX[] mV$uXArray = new mV$uX[(int)wgkJX];
        mV$uXArray[0] = wOGIN;
        mV$uXArray[1] = AjjgB;
        mV$uXArray[2] = asLHQ;
        mV$uXArray[3] = nfVnU;
        mV$uXArray[4] = eftrc;
        mV$uXArray[5] = OtKmW;
        return mV$uXArray;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    mV$uX.HelJP = gb.aYR(2923437865573120047L, 5686785761603359240L, MethodHandles.lookup().lookupClass()).a(12467814852578L);
                    var14 = mV$uX.HelJP ^ 73760045902015L;
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
                    var10_5 = "\u00c8\u00db\u00fc\u00c1/\u000fyq\u00181\u000e%\u001b\u00a4\u00ef\u00ceg\u009b\u00cbN~\u001dq\u00f1\u00cb\u00cdd\u00ae\u00afV\u0014\u0000\u00ca\bW\u00e7fLK)b\u00a5\b+\u00f7T\u00e3\u00bd\u0019\u0004K";
                    var12_6 = "\u00c8\u00db\u00fc\u00c1/\u000fyq\u00181\u000e%\u001b\u00a4\u00ef\u00ceg\u009b\u00cbN~\u001dq\u00f1\u00cb\u00cdd\u00ae\u00afV\u0014\u0000\u00ca\bW\u00e7fLK)b\u00a5\b+\u00f7T\u00e3\u00bd\u0019\u0004K".length();
                    var9_7 = 8;
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
                        var5_3[var11_4++] = mV$uX.dvP(var13_9).intern();
                        if ((var8_8 += var9_7) < var12_6) {
                            var9_7 = var10_5.charAt(var8_8);
                            ** continue;
                        }
                        var10_5 = "\u00be8 \u00cd\u00f1M\b\u00f2\u00e5m\u00a3Z|T\u00be\u00b3\u00181\u000e%\u001b\u00a4\u00ef\u00cegt\u001c%\u00f0\u0007\u0082\u00b6\u001b\"]M;\u0004\u0090co";
                        var12_6 = "\u00be8 \u00cd\u00f1M\b\u00f2\u00e5m\u00a3Z|T\u00be\u00b3\u00181\u000e%\u001b\u00a4\u00ef\u00cegt\u001c%\u00f0\u0007\u0082\u00b6\u001b\"]M;\u0004\u0090co".length();
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
                        var5_3[var11_4++] = mV$uX.dvP(var13_9).intern();
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
        var2_12 = -6489846176819415375L;
        var4_13 = var0_10.doFinal(new byte[]{(byte)(var2_12 >>> 56), (byte)(var2_12 >>> 48), (byte)(var2_12 >>> 40), (byte)(var2_12 >>> 32), (byte)(var2_12 >>> 24), (byte)(var2_12 >>> 16), (byte)(var2_12 >>> 8), (byte)var2_12});
        ** while (true)
        mV$uX.wgkJX = ((long)var4_13[0] & 255L) << 56 | ((long)var4_13[1] & 255L) << 48 | ((long)var4_13[2] & 255L) << 40 | ((long)var4_13[3] & 255L) << 32 | ((long)var4_13[4] & 255L) << 24 | ((long)var4_13[5] & 255L) << 16 | ((long)var4_13[6] & 255L) << 8 | (long)var4_13[7] & 255L;
        mV$uX.wOGIN = new mV$uX();
        mV$uX.AjjgB = new mV$uX();
        mV$uX.asLHQ = new mV$uX();
        mV$uX.nfVnU = new mV$uX();
        mV$uX.eftrc = new mV$uX();
        mV$uX.OtKmW = new mV$uX();
        mV$uX.xLDqY = mV$uX.dvO();
    }

    public static mV$uX[] values() {
        return (mV$uX[])xLDqY.clone();
    }

    public static mV$uX valueOf(String string) {
        return Enum.valueOf(mV$uX.class, string);
    }
}

