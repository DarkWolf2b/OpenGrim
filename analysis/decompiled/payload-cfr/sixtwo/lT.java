/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lR;
import sixtwo.lU;

public final class lT {
    private static lU culIj;
    private static String ZneZb;
    private static final long hlwZs;
    private static final String gEVAN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        hlwZs = gb.aYR(663859223829404065L, -7448599454218923718L, MethodHandles.lookup().lookupClass()).a(156987970387666L);
        long l = hlwZs ^ 0x60DABE440BE8L;
        lT.ciT(null);
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("\u0081\u0006<\u0083?x\u0005\u00d7".getBytes("ISO-8859-1"));
                gEVAN = lT.ciW(byArray3).intern();
                culIj = new lR();
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public static lU ciQ() {
        return culIj;
    }

    public static lR ciS() {
        lR lR2;
        String string;
        block9: {
            block8: {
                lR lR3;
                lU lU2;
                block7: {
                    long l = hlwZs ^ 0x6BE127D210C0L;
                    lU lU3 = culIj;
                    string = lT.ciU();
                    try {
                        try {
                            lU2 = lU3;
                            if (string != null) break block7;
                            if (!(lU2 instanceof lR)) break block8;
                        }
                        catch (MatchException matchException) {
                            throw lT.ciV(matchException);
                        }
                        lU2 = lU3;
                    }
                    catch (MatchException matchException) {
                        throw lT.ciV(matchException);
                    }
                }
                lR2 = lR3 = (lR)lU2;
                break block9;
            }
            lR2 = null;
        }
        try {
            if (string != null) {
                iS.bwK("g3W7M");
            }
        }
        catch (MatchException matchException) {
            throw lT.ciV(matchException);
        }
        return lR2;
    }

    public static void ciT(String string) {
        ZneZb = string;
    }

    private static String ciW(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    public static void ciR(lU lU2) {
        long l = hlwZs ^ 0x53233047BBL;
        culIj = Objects.requireNonNull(lU2, gEVAN);
    }

    public static String ciU() {
        return ZneZb;
    }

    private static MatchException ciV(MatchException matchException) {
        return matchException;
    }
}
