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
import sixtwo.lC;
import sixtwo.ld;
import sixtwo.mG;

public final class le {
    private static final int[] xtASQ;
    private static final int htTCa;
    private static final float GLjms = 2.0f;
    private static final float PSymY = 2.7f;
    private static final float UNxQA = 3.0f;
    private static final float adjwS = 1.0f;
    private static final long hrkhD;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                le.hrkhD = gb.aYR(1124504309614787235L, 5053722010824664136L, MethodHandles.lookup().lookupClass()).a(124166132722104L);
                var11 = le.hrkhD ^ 86954150140937L;
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
                var5_5 = "\u00a9\u00dc\u009b\u00afjcD\u00a1\u00fc\u00db\u0090Ym\f\u0086\u00e8<\u001f#X\u0018\u00e2f\u00a2";
                var6_6 = "\u00a9\u00dc\u009b\u00afjcD\u00a1\u00fc\u00db\u0090Ym\f\u0086\u00e8<\u001f#X\u0018\u00e2f\u00a2".length();
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
                    var5_5 = "\u00ef\u00ba=\u00ce8\u0006\u00bb\u00b96/\u0093)]\u00c6\u00ea;";
                    var6_6 = "\u00ef\u00ba=\u00ce8\u0006\u00bb\u00b96/\u0093)]\u00c6\u00ea;".length();
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
        le.htTCa = (int)var0_3[3];
        le.xtASQ = new int[]{(int)var0_3[0], (int)var0_3[4], (int)var0_3[1], (int)var0_3[2]};
    }

    public static void bXO(lC lC2, float f, float f2, float f3, int n, mG mG2) {
        int n2;
        String string;
        block17: {
            mG mG3;
            block15: {
                block16: {
                    long l = hrkhD ^ 0x58A6CDFFCBB3L;
                    string = ld.b();
                    try {
                        try {
                            mG3 = mG2;
                            if (string == null) break block15;
                            if (!mG3.cnW()) break block16;
                        }
                        catch (MatchException matchException) {
                            throw le.bXQ(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw le.bXQ(matchException);
                    }
                }
                mG3 = mG2.coa(mG2.cou() * 0.2f);
            }
            mG mG4 = mG3;
            for (n2 = 0; n2 < 4; ++n2) {
                try {
                    le.bXP(lC2, f, f2, f3, n2, mG4);
                    if (string != null) {
                        if (string != null) continue;
                        break;
                    }
                    break block17;
                }
                catch (MatchException matchException) {
                    throw le.bXQ(matchException);
                }
            }
            n2 = 0;
        }
        do {
            block19: {
                try {
                    block18: {
                        try {
                            try {
                                if (n2 >= 4) break;
                                if (n < xtASQ[n2]) break block18;
                            }
                            catch (MatchException matchException) {
                                throw le.bXQ(matchException);
                            }
                            if (string != null) break block19;
                        }
                        catch (MatchException matchException) {
                            throw le.bXQ(matchException);
                        }
                    }
                    le.bXP(lC2, f, f2, f3, n2, mG2);
                }
                catch (MatchException matchException) {
                    throw le.bXQ(matchException);
                }
            }
            ++n2;
        } while (string != null);
    }

    public static float bXM(float f) {
        return 10.1f * f;
    }

    private static void bXP(lC lC2, float f, float f2, float f3, int n, mG mG2) {
        float f4 = le.bXN(f3);
        float f5 = (3.0f + 1.0f * (float)n) * f3;
        float f6 = f + (float)n * 2.7f * f3;
        float f7 = f2 + f4 - f5;
        lC2.cdg(f6, f7, 2.0f * f3, f5, ld.all(0.1f * f3), mG2);
    }

    private static MatchException bXQ(MatchException matchException) {
        return matchException;
    }

    public static float bXN(float f) {
        return 6.0f * f;
    }
}
