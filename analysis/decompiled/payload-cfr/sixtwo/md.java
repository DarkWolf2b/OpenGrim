/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1792
 *  net.minecraft.class_1802
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1792;
import net.minecraft.class_1802;
import sixtwo.gb;
import sixtwo.mj;
import sixtwo.mk;

public final class md {
    public static final mj HIkeq;
    public static final mj WDZLh;
    public static final mj Mtwfi;
    public static final mj xxUvC;
    public static final mj TdXrD;
    public static final mj OaWjn;
    public static final mj Edrkg;
    public static final mj MucuO;
    public static final mj QotIs;
    public static final mj YXgsM;
    private static final Map<class_1792, mj> KgRvB;
    private static final long XPMxy;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                md.XPMxy = gb.aYR(-6628615357458597046L, -1629562632567245569L, MethodHandles.lookup().lookupClass()).a(129995601743170L);
                var11 = md.XPMxy ^ 69653011674495L;
                var1_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var11 >>> 56);
                for (var2_2 = 1; var2_2 < 8; ++var2_2) {
                    v2 = v2;
                    v2[var2_2] = (byte)(var11 << var2_2 * 8 >>> 56);
                }
                var1_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var0_3 = new long[5];
                var4_4 = 0;
                var5_5 = "L\u001a\rZn\u00ed\u0005\u0006\ta\u00bf}S\u001f\\_\u008c\u00ffy\u008bJ\u0089\u009c'";
                var6_6 = "L\u001a\rZn\u00ed\u0005\u0006\ta\u00bf}S\u001f\\_\u008c\u00ffy\u008bJ\u0089\u009c'".length();
                var3_7 = 0;
                while (true) {
                    var7_8 = var5_5.substring(var3_7, var3_7 += 8).getBytes("ISO-8859-1");
                    v3 = var0_3;
                    v4 = var4_4++;
                    v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var3_7 < var6_6) ** continue;
                    var5_5 = "\\m-\u00988/\u0007\u00eaGc\u00c7\u00f2\u0015L\u0007(";
                    var6_6 = "\\m-\u00988/\u0007\u00eaGc\u00c7\u00f2\u0015L\u0007(".length();
                    var3_7 = 0;
                    while (true) {
                        var7_8 = var5_5.substring(var3_7, var3_7 += 8).getBytes("ISO-8859-1");
                        v3 = var0_3;
                        v4 = var4_4++;
                        v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl38:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var3_7 < var6_6) ** continue;
                    break block9;
                    break;
                }
            }
            var8_9 = v5;
            var10_10 = var1_1.doFinal(new byte[]{(byte)(var8_9 >>> 56), (byte)(var8_9 >>> 48), (byte)(var8_9 >>> 40), (byte)(var8_9 >>> 32), (byte)(var8_9 >>> 24), (byte)(var8_9 >>> 16), (byte)(var8_9 >>> 8), (byte)var8_9});
            v7 = ((long)var10_10[0] & 255L) << 56 | ((long)var10_10[1] & 255L) << 48 | ((long)var10_10[2] & 255L) << 40 | ((long)var10_10[3] & 255L) << 32 | ((long)var10_10[4] & 255L) << 24 | ((long)var10_10[5] & 255L) << 16 | ((long)var10_10[6] & 255L) << 8 | (long)var10_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl51:
                // 1 sources

                ** continue;
            }
        }
        md.WDZLh = md.HIkeq = new mj(1.5, 0.03, 0.99, 0.8, false, false, 0.0, 0.1000000014901161, 0.0);
        md.Mtwfi = md.HIkeq;
        md.TdXrD = md.xxUvC = new mj(0.5, 0.05, 0.99, 0.8, false, false, 0.0, 0.1000000014901161, 20.0);
        md.OaWjn = new mj(0.7, 0.07, 0.99, 0.8, false, false, 0.0, 0.1000000014901161, 20.0);
        md.Edrkg = new mj(2.5, 0.05, 0.99, 0.99, false, true, 0.0, 0.1000000014901161, 0.0);
        md.MucuO = new mj(3.0, 0.05, 0.99, 0.6, false, true, 0.0, 0.1000000014901161, 0.0);
        md.QotIs = new mj(3.15, 0.05, 0.99, 0.6, false, true, 0.0, 0.1000000014901161, 0.0);
        md.YXgsM = new mj(1.5, 0.0, 1.0, 1.0, false, false, 0.0, 0.0, 0.0);
        v8 = new Map.Entry[(int)var0_3[0]];
        v8[0] = Map.entry(class_1802.field_8634, md.HIkeq);
        v8[1] = Map.entry(class_1802.field_8543, md.WDZLh);
        v8[2] = Map.entry(class_1802.field_8803, md.Mtwfi);
        v8[3] = Map.entry(class_1802.field_8436, md.xxUvC);
        v8[4] = Map.entry(class_1802.field_8150, md.TdXrD);
        v8[5] = Map.entry(class_1802.field_8287, md.OaWjn);
        v8[(int)var0_3[3]] = Map.entry(class_1802.field_8547, md.Edrkg);
        v8[(int)var0_3[4]] = Map.entry(class_1802.field_8102, md.MucuO);
        v8[(int)var0_3[1]] = Map.entry(class_1802.field_8399, md.QotIs);
        v8[(int)var0_3[2]] = Map.entry(class_1802.field_49098, md.YXgsM);
        md.KgRvB = Map.ofEntries(v8);
    }

    public static mj cjX(class_1792 class_17922) {
        Object object;
        block4: {
            block5: {
                long l = XPMxy ^ 0x3E4B79F5F470L;
                int[] nArray = mk.cle();
                try {
                    try {
                        object = class_17922;
                        if (nArray != null) break block4;
                        if (object != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw md.cjY(matchException);
                    }
                    return HIkeq;
                }
                catch (MatchException matchException) {
                    throw md.cjY(matchException);
                }
            }
            object = KgRvB.getOrDefault(class_17922, HIkeq);
        }
        return (mj)object;
    }

    private static MatchException cjY(MatchException matchException) {
        return matchException;
    }
}
