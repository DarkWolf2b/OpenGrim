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

public final class f$rF
extends Enum<f$rF> {
    public static final /* enum */ f$rF feLzE;
    public static final /* enum */ f$rF aMhng;
    public static final /* enum */ f$rF TvRJf;
    public static final /* enum */ f$rF dHaRm;
    public static final /* enum */ f$rF CjcqV;
    private static final f$rF[] CoxOk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static f$rF[] dmz() {
        return new f$rF[]{feLzE, aMhng, TvRJf, dHaRm, CjcqV};
    }

    private static String dmA(byte[] byArray) {
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
                var9 = gb.aYR(8655956642286907199L, -4501477493932508548L, MethodHandles.lookup().lookupClass()).a(194376674244792L) ^ 108711930025378L;
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
                var0_3 = new String[5];
                var6_4 = 0;
                var5_5 = "\u00a2\u00f2\u00ef:f\u009a\u00808|`5\u00a2~T\u0018\u0081\u0010\u00d6\u00fcx\u00ad\u00b3\u001c\u0000\u00f2\u00f4\u00bf\u00d7\u00eb\u00bbg1\u00f5\u0010\u0085M\u00eb0\u00dc\u00fd\u00cd\u00bd\u00f7iW\u00cd\u0081\u00da\u00d8\u00c4";
                var7_6 = "\u00a2\u00f2\u00ef:f\u009a\u00808|`5\u00a2~T\u0018\u0081\u0010\u00d6\u00fcx\u00ad\u00b3\u001c\u0000\u00f2\u00f4\u00bf\u00d7\u00eb\u00bbg1\u00f5\u0010\u0085M\u00eb0\u00dc\u00fd\u00cd\u00bd\u00f7iW\u00cd\u0081\u00da\u00d8\u00c4".length();
                var4_7 = 16;
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
                    var0_3[var6_4++] = f$rF.dmA(var8_9).intern();
                    if ((var3_8 += var4_7) < var7_6) {
                        var4_7 = var5_5.charAt(var3_8);
                        ** continue;
                    }
                    var5_5 = "\u00b3\u00ef\u00fe\u00f0\u009at\u00bf\u0001\u00deG\u0086\u00af\u00cbi\u0004_\u0010\u00ccIq\t\u00ef\u00c1\u0093\b\u009dHX\u0094\u00c0\u00e9\u00c0\u009f";
                    var7_6 = "\u00b3\u00ef\u00fe\u00f0\u009at\u00bf\u0001\u00deG\u0086\u00af\u00cbi\u0004_\u0010\u00ccIq\t\u00ef\u00c1\u0093\b\u009dHX\u0094\u00c0\u00e9\u00c0\u009f".length();
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
                    var0_3[var6_4++] = f$rF.dmA(var8_9).intern();
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
        f$rF.feLzE = new f$rF();
        f$rF.aMhng = new f$rF();
        f$rF.TvRJf = new f$rF();
        f$rF.dHaRm = new f$rF();
        f$rF.CjcqV = new f$rF();
        f$rF.CoxOk = f$rF.dmz();
    }

    public static f$rF[] values() {
        return (f$rF[])CoxOk.clone();
    }

    public static f$rF valueOf(String string) {
        return Enum.valueOf(f$rF.class, string);
    }
}

