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

final class dj$sD
extends Enum<dj$sD> {
    public static final /* enum */ dj$sD zrNsv;
    public static final /* enum */ dj$sD WBAxv;
    public static final /* enum */ dj$sD XoavU;
    public static final /* enum */ dj$sD btXid;
    private static final dj$sD[] KvDCE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                var9 = gb.aYR(-2441115255596974848L, 2426708390590760851L, MethodHandles.lookup().lookupClass()).a(40586858923298L) ^ 63169491643275L;
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
                var5_5 = "\u0014\u00fdJsN\u0005!\u00bb\bU`\u0094$2\f\u00e7<";
                var7_6 = "\u0014\u00fdJsN\u0005!\u00bb\bU`\u0094$2\f\u00e7<".length();
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
                    var0_3[var6_4++] = dj$sD.doI(var8_9).intern();
                    if ((var3_8 += var4_7) < var7_6) {
                        var4_7 = var5_5.charAt(var3_8);
                        ** continue;
                    }
                    var5_5 = "\u00e8|\u00b5\u0005\u00adyQj\u00c3;~\u00d5\u008b'\u00a8\u00f5\u0018\u00e8|\u00b5\u0005\u00adyQje\u001a\u00d5\u00dcbv3oJ\u0014\u0083L\u00df{FO";
                    var7_6 = "\u00e8|\u00b5\u0005\u00adyQj\u00c3;~\u00d5\u008b'\u00a8\u00f5\u0018\u00e8|\u00b5\u0005\u00adyQje\u001a\u00d5\u00dcbv3oJ\u0014\u0083L\u00df{FO".length();
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
                    var0_3[var6_4++] = dj$sD.doI(var8_9).intern();
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
        dj$sD.zrNsv = new dj$sD();
        dj$sD.WBAxv = new dj$sD();
        dj$sD.XoavU = new dj$sD();
        dj$sD.btXid = new dj$sD();
        dj$sD.KvDCE = dj$sD.doH();
    }

    public static dj$sD[] values() {
        return (dj$sD[])KvDCE.clone();
    }

    public static dj$sD valueOf(String string) {
        return Enum.valueOf(dj$sD.class, string);
    }

    private static dj$sD[] doH() {
        return new dj$sD[]{zrNsv, WBAxv, XoavU, btXid};
    }

    private static String doI(byte[] byArray) {
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

