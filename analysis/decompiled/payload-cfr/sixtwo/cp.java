/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.ap;
import sixtwo.cB;
import sixtwo.cJ;
import sixtwo.cr;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mr;
import sixtwo.rD;

public abstract class cp
extends cr {
    protected final cJ PZQaG;
    protected final cJ mZZzJ;
    private static final long lPXre;
    private static final String[] lyUbR;
    private static final String[] PpKyU;
    private static final Map exTwJ;
    private static final long[] wLRHx;
    private static final Integer[] dgufU;
    private static final Map meWuI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cp(int[] nArray, lf lf2) {
        long l = lPXre ^ 0x37CEACB4C75CL;
        super(nArray, lf2);
        int[] nArray2 = new int[cp.Ri("l", (int)3550, (long)(0xCD397C8F4FCADD7L ^ l))];
        nArray2[0] = (int)cp.Ri("l", (int)32274, (long)(0x4E44DB367CCA5E0EL ^ l));
        nArray2[1] = (int)cp.Ri("l", (int)584, (long)(0x3E18142A88D72259L ^ l));
        nArray2[2] = (int)cp.Ri("l", (int)14203, (long)(0x566852F78F1C9770L ^ l));
        nArray2[3] = (int)cp.Ri("l", (int)22341, (long)(0x111E72344285777EL ^ l));
        nArray2[4] = (int)cp.Ri("l", (int)3771, (long)(0x2F2326295FCCAE85L ^ l));
        nArray2[5] = (int)cp.Ri("l", (int)6211, (long)(0x7A581EA601FC3851L ^ l));
        nArray2[cp.Ri("l", (int)20096, (long)(0x584675DC0900EE88L ^ l))] = (int)cp.Ri("l", (int)25387, (long)(0x1C6E13B6D052C33FL ^ l));
        nArray2[cp.Ri("l", (int)29779, (long)(0x392EAE032A7AD464L ^ l))] = (int)cp.Ri("l", (int)19879, (long)(0x1CC439CEC46CED98L ^ l));
        nArray2[cp.Ri("l", (int)15774, (long)(0x239A87C9CD8E9DA6L ^ l))] = (int)cp.Ri("l", (int)423, (long)(0x503538DD51F3A19DL ^ l));
        nArray2[cp.Ri("l", (int)6749, (long)(0x20A887E7B2383A51L ^ l))] = (int)cp.Ri("l", (int)25783, (long)(0x356DC01982A7C486L ^ l));
        nArray2[cp.Ri("l", (int)21922, (long)(0xD914ADFA103F5B7L ^ l))] = (int)cp.Ri("l", (int)32680, (long)(0x648A00A83CDADFBEL ^ l));
        nArray2[cp.Ri("l", (int)1213, (long)(0x455DA91C74FAA4A6L ^ l))] = (int)cp.Ri("l", (int)18559, (long)(0x29C90CD5B546E868L ^ l));
        nArray2[cp.Ri("l", (int)26323, (long)(0x5C2D80FAF97EC6DEL ^ l))] = (int)cp.Ri("l", (int)28665, (long)(0x20FC920D64B5CFFEL ^ l));
        nArray2[cp.Ri("l", (int)26460, (long)(0x14DFCC5449F5476AL ^ l))] = (int)cp.Ri("l", (int)32293, (long)(0x3007637516545E10L ^ l));
        nArray2[cp.Ri("l", (int)28374, (long)(0x4189DAA06CF24EDCL ^ l))] = (int)cp.Ri("l", (int)1342, (long)(0x346042650B292503L ^ l));
        this.PZQaG = new cJ(this, mr.clS(nArray2)).WE(true);
        iS[] iSArray = cr.SC();
        try {
            int[] nArray3 = new int[cp.Ri("l", (int)16385, (long)(0x214FAAC7BEF601EL ^ l))];
            nArray3[0] = (int)cp.Ri("l", (int)32680, (long)(0x648A00A83CDADFBEL ^ l));
            nArray3[1] = (int)cp.Ri("l", (int)13938, (long)(0x4094682CA7891641L ^ l));
            nArray3[2] = (int)cp.Ri("l", (int)16121, (long)(0x8136670C77B9EF8L ^ l));
            nArray3[3] = (int)cp.Ri("l", (int)18559, (long)(0x29C90CD5B546E868L ^ l));
            nArray3[4] = (int)cp.Ri("l", (int)25783, (long)(0x356DC01982A7C486L ^ l));
            nArray3[5] = (int)cp.Ri("l", (int)3096, (long)(0x7E5974362A2AAC1CL ^ l));
            nArray3[cp.Ri("l", (int)14863, (long)(0x6BDD170A4829A17L ^ l))] = (int)cp.Ri("l", (int)27602, (long)(0x5B146CCA943FCBD2L ^ l));
            nArray3[cp.Ri("l", (int)17242, (long)(0x5E0A67ED97F8E359L ^ l))] = (int)cp.Ri("l", (int)1840, (long)(0x508144152FCE272AL ^ l));
            nArray3[cp.Ri("l", (int)5610, (long)(0x7AD13B51FE93B5ECL ^ l))] = (int)cp.Ri("l", (int)9739, (long)(0x5F628001ECDA8612L ^ l));
            nArray3[cp.Ri("l", (int)18937, (long)(0x323359147277E9E4L ^ l))] = (int)cp.Ri("l", (int)25783, (long)(0x356DC01982A7C486L ^ l));
            nArray3[cp.Ri("l", (int)4260, (long)(0x89FF18E7636B090L ^ l))] = (int)cp.Ri("l", (int)7793, (long)(0x50A2548DA4D93E48L ^ l));
            nArray3[cp.Ri("l", (int)15131, (long)(0x35D184627AE69B30L ^ l))] = (int)cp.Ri("l", (int)25834, (long)(0x2C4BCB4280AF44F9L ^ l));
            nArray3[cp.Ri("l", (int)1920, (long)(0xA375075AC9DA790L ^ l))] = (int)cp.Ri("l", (int)30960, (long)(0x9E4BC7184D2D8FEL ^ l));
            nArray3[cp.Ri("l", (int)26305, (long)(0x11F69A4B5174C6FDL ^ l))] = (int)cp.Ri("l", (int)27602, (long)(0x5B146CCA943FCBD2L ^ l));
            nArray3[cp.Ri("l", (int)19096, (long)(0x38CD0514B91B6A86L ^ l))] = (int)cp.Ri("l", (int)1840, (long)(0x508144152FCE272AL ^ l));
            nArray3[cp.Ri("l", (int)30309, (long)(0x1F48A025493D660L ^ l))] = (int)cp.Ri("l", (int)27602, (long)(0x5B146CCA943FCBD2L ^ l));
            nArray3[cp.Ri("l", (int)8277, (long)(0x5C00B5E8E10E0065L ^ l))] = (int)cp.Ri("l", (int)7467, (long)(0x295AE0620C193D29L ^ l));
            nArray3[cp.Ri("l", (int)5780, (long)(0x309A0506AC27369BL ^ l))] = (int)cp.Ri("l", (int)16121, (long)(0x8136670C77B9EF8L ^ l));
            this.mZZzJ = new cJ(this, mr.clS(nArray3)).WE(true);
            this.WUOUc.Vf(() -> {
                boolean bl;
                block2: {
                    block3: {
                        long l = lPXre ^ 0x638EA88E5806L;
                        iS[] iSArray = cr.SC();
                        try {
                            bl = this.PZQaG.WF();
                            if (iSArray == null) break block2;
                            if (bl) break block3;
                        }
                        catch (MatchException matchException) {
                            throw cp.Rb(matchException);
                        }
                        bl = true;
                        break block2;
                    }
                    bl = false;
                }
                return bl;
            });
            if (iSArray == null) {
                iS.bwK("Z80V6b");
            }
        }
        catch (MatchException matchException) {
            throw cp.Rb(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    cp.lPXre = gb.aYR(6251626579645607516L, 1059593378214187852L, MethodHandles.lookup().lookupClass()).a(249904087944549L);
                    cp.exTwJ = new HashMap<K, V>(13);
                    var11 = cp.lPXre ^ 136900541908350L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var20_3 = new String[3];
                    var18_4 = 0;
                    var17_5 = "t\u0082\u0083\u0085\u00fe ^P\u00a9\u00aa8=\u0095\u009c\u00e8W%\u00ef\u00f8\u0099\u0012\u0011\u00f1\u009b\u00c6\u0083\u000e\u008cyT\u00d4`\u0010\u00a0\u00fb\u0015\u00fe\u00c62\u00e5dA90\u0081\u0001\u00e7\u00bad\u0010\u00c6\u00f7\u00f3\u001b\u00d7\u000b\u0091A\u00ce\u0014\u00a1\t\u00dd\u00dc\u00c6;";
                    var19_6 = "t\u0082\u0083\u0085\u00fe ^P\u00a9\u00aa8=\u0095\u009c\u00e8W%\u00ef\u00f8\u0099\u0012\u0011\u00f1\u009b\u00c6\u0083\u000e\u008cyT\u00d4`\u0010\u00a0\u00fb\u0015\u00fe\u00c62\u00e5dA90\u0081\u0001\u00e7\u00bad\u0010\u00c6\u00f7\u00f3\u001b\u00d7\u000b\u0091A\u00ce\u0014\u00a1\t\u00dd\u00dc\u00c6;".length();
                    var16_7 = 32;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = cp.Rc(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                cp.lyUbR = var20_3;
                cp.PpKyU = new String[3];
                cp.meWuI = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[49];
                var3_13 = 0;
                var4_14 = "A\u00ed:\u0019\u009bZ%>\u000e\u0098\b\u00a1\u008e\u0083N\u00d4T\u0088\u00d5{\u00ab\u0007\u0091\u009b\"j\u00f3^C\bv(\u00b9\u00f7\u00ac\u009c.\u00ea\n\u00f5c\u00dfe\u0019t\u00ae\u00a4R\u00cf\fn\u00e8\u008c\u00d9\u00ea\u00a53X\u0090<gC\u008a\u001c\u00a7\u00a0G\u009e+\u008d\u0012a\u00ed\t\n\u0004\u00e2\u00b2\u0094\u00fe\u00e1J>?\u00a8\u0089zt\u0088\u00a4\u0094\u007f\u00b9{\"\u001d=\u0014\u00bew\u0003<\u00d2d\u00a9f\"\u000b\u0019wwC\u00b8p\u00b9\u00f2i\u00f8|k\u00e0\u0010\u00ab\u00c4\u0084\u008c\u00c8TG\u00de:;\u009e\b#\u00aa\u00c0W_a\u00e2\u009b\u001b\u00ed\u00fbe\u0017\u00bd?M\u0003\u0099\u00a4\u0001\b\u0017T\u00f9\u00c1\u00eb\u0091N\u0088\u00c9\u000f\u00aa\u00f2\u001c\u00d14\u0001\u00f2\u001f\u00c57\u00e5\r\u00eb\u0089\u00a3q\u00ef\u00d3\u0090N\u0095>F\u00bd\u00c0\u00c3om\u0083{<\u00ec\u00ee5\u00fb\u00b8\u0089O\u0095\u00b4_}J\u009c\u008efG\u00c1\u009c\u00b5@<\u00dc-\u0015\u00cc\u00c5\u00c4\u0086n\u007fi\u0089.\u00dc\u00f8\u0010\u0005-\u00b4\u001b\u00fe\u001d\u00cc\u0011\u0006gz^\u0006\u0018\u00e3\u00e5\u00c7\u00cbq\u00a8\u00b7\u00a7rL\u000b\u00caT\n\u0012\u00a8d#&\u00d5Le\u00a6\u00c2\u00b4\u00cd\u00f3\u0085\u00fd i\u009d\u00cb\u0097\u0001?\u00e1\u0017\u00bf\u0081\u00c0G\u0005\u00c7\u0089\u00cc\u00f2l_\u0003\u00e1\u0015xt\u001a\u0089\u009a\u00a9B\u00ccc\u00ec\"[\u00127\u0018K7\u00dc+\u00a2\n\u00cd\u00f2\u009e\u00f2at\u00f7-\u0083\u00c5\u00c7<\u00c4\u0018\u001b\u000b\u00d0\u00a9\u00a5\\\u00cc2AG\u008a\u00fa\u00eb5v\u00b4MTJyc\u0081\u00cf\u00b7b -\u00b3\u001d\u00af[H\u00bc4\f{\u00fd\u00ee\u0096\u00c7\u00a3%b";
                var5_15 = "A\u00ed:\u0019\u009bZ%>\u000e\u0098\b\u00a1\u008e\u0083N\u00d4T\u0088\u00d5{\u00ab\u0007\u0091\u009b\"j\u00f3^C\bv(\u00b9\u00f7\u00ac\u009c.\u00ea\n\u00f5c\u00dfe\u0019t\u00ae\u00a4R\u00cf\fn\u00e8\u008c\u00d9\u00ea\u00a53X\u0090<gC\u008a\u001c\u00a7\u00a0G\u009e+\u008d\u0012a\u00ed\t\n\u0004\u00e2\u00b2\u0094\u00fe\u00e1J>?\u00a8\u0089zt\u0088\u00a4\u0094\u007f\u00b9{\"\u001d=\u0014\u00bew\u0003<\u00d2d\u00a9f\"\u000b\u0019wwC\u00b8p\u00b9\u00f2i\u00f8|k\u00e0\u0010\u00ab\u00c4\u0084\u008c\u00c8TG\u00de:;\u009e\b#\u00aa\u00c0W_a\u00e2\u009b\u001b\u00ed\u00fbe\u0017\u00bd?M\u0003\u0099\u00a4\u0001\b\u0017T\u00f9\u00c1\u00eb\u0091N\u0088\u00c9\u000f\u00aa\u00f2\u001c\u00d14\u0001\u00f2\u001f\u00c57\u00e5\r\u00eb\u0089\u00a3q\u00ef\u00d3\u0090N\u0095>F\u00bd\u00c0\u00c3om\u0083{<\u00ec\u00ee5\u00fb\u00b8\u0089O\u0095\u00b4_}J\u009c\u008efG\u00c1\u009c\u00b5@<\u00dc-\u0015\u00cc\u00c5\u00c4\u0086n\u007fi\u0089.\u00dc\u00f8\u0010\u0005-\u00b4\u001b\u00fe\u001d\u00cc\u0011\u0006gz^\u0006\u0018\u00e3\u00e5\u00c7\u00cbq\u00a8\u00b7\u00a7rL\u000b\u00caT\n\u0012\u00a8d#&\u00d5Le\u00a6\u00c2\u00b4\u00cd\u00f3\u0085\u00fd i\u009d\u00cb\u0097\u0001?\u00e1\u0017\u00bf\u0081\u00c0G\u0005\u00c7\u0089\u00cc\u00f2l_\u0003\u00e1\u0015xt\u001a\u0089\u009a\u00a9B\u00ccc\u00ec\"[\u00127\u0018K7\u00dc+\u00a2\n\u00cd\u00f2\u009e\u00f2at\u00f7-\u0083\u00c5\u00c7<\u00c4\u0018\u001b\u000b\u00d0\u00a9\u00a5\\\u00cc2AG\u008a\u00fa\u00eb5v\u00b4MTJyc\u0081\u00cf\u00b7b -\u00b3\u001d\u00af[H\u00bc4\f{\u00fd\u00ee\u0096\u00c7\u00a3%b".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "3G\u00eaY\u00ef\u00df\u00f9\u00b3=u\u0099\u00c4\u00d0\u00af\u00b2\u0092";
                    var5_15 = "3G\u00eaY\u00ef\u00df\u00f9\u00b3=u\u0099\u00c4\u00d0\u00af\u00b2\u0092".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v10) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl84:
                // 1 sources

                ** continue;
            }
        }
        cp.wLRHx = var6_12;
        cp.dgufU = new Integer[49];
    }

    @Override
    public void LX(lC lC2) {
        super.LX(lC2);
        this.QX();
        this.Ol();
    }

    private static CallSite Ri(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cp" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException Rb(MatchException matchException) {
        return matchException;
    }

    private static String Rc(byte[] byArray) {
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

    private static String Rd(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x3A05;
        if (PpKyU[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])exTwJ.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    exTwJ.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cp", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = lyUbR[n2].getBytes("ISO-8859-1");
            cp.PpKyU[n2] = cp.Rc(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return PpKyU[n2];
    }

    private static Object Re(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = cp.Rd(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int Rh(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cp.Rg(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    protected void QX() {
        block5: {
            cp cp2;
            long l;
            block4: {
                l = lPXre ^ 0x5C5CFC53D031L;
                iS[] iSArray = cr.SC();
                try {
                    try {
                        cp2 = this;
                        if (iSArray == null) break block4;
                        if (!cp2.PZQaG.WF()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cp.Rb(matchException);
                    }
                    cp2 = this;
                }
                catch (MatchException matchException) {
                    throw cp.Rb(matchException);
                }
            }
            cp2.WUOUc.VA(rD.dlmvG.method_22683().method_4495() * cp.Ri("l", (int)29184, (long)(0x54A015ABF4EBC55FL ^ l)));
        }
    }

    private static int Rg(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5E6B;
        if (dgufU[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = wLRHx[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])meWuI.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    meWuI.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cp", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cp.dgufU[n2] = n3;
        }
        return dgufU[n2];
    }

    private static CallSite Rf(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cp" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    protected abstract void Ol();

    @Override
    public boolean onMouseClicked(double d, double d2, mA mA2) {
        boolean bl;
        block21: {
            block22: {
                mA mA3;
                mA mA4;
                iS[] iSArray;
                long l;
                block23: {
                    block24: {
                        l = lPXre ^ 0x60A5936662D0L;
                        boolean bl2 = this.RP(d, d2);
                        iSArray = cr.SC();
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    bl = bl2;
                                                    if (iSArray == null) break block21;
                                                    if (!bl) break block22;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cp.Rb(matchException);
                                                }
                                                bl = this.LkpAS;
                                                if (iSArray == null) break block21;
                                            }
                                            catch (MatchException matchException) {
                                                throw cp.Rb(matchException);
                                            }
                                            if (!bl) break block22;
                                        }
                                        catch (MatchException matchException) {
                                            throw cp.Rb(matchException);
                                        }
                                        mA4 = mA2;
                                        mA3 = mA.sCBUa;
                                        if (iSArray == null) break block23;
                                    }
                                    catch (MatchException matchException) {
                                        throw cp.Rb(matchException);
                                    }
                                    if (mA4 != mA3) break block24;
                                }
                                catch (MatchException matchException) {
                                    throw cp.Rb(matchException);
                                }
                                bl = this.mZZzJ.WF();
                                if (iSArray == null) break block21;
                            }
                            catch (MatchException matchException) {
                                throw cp.Rb(matchException);
                            }
                            if (bl) break block22;
                        }
                        catch (MatchException matchException) {
                            throw cp.Rb(matchException);
                        }
                        this.pAjuu = true;
                        float f2 = this.RT();
                        this.lGacw = (float)(d - (double)this.toIeR) * f2;
                        this.WjFpo = (float)(d2 - (double)this.QWaAn) * f2;
                        this.TSvLw = this.toIeR;
                        this.VngMS = this.QWaAn;
                        return true;
                    }
                    mA4 = mA2;
                    mA3 = mA.frWTZ;
                }
                if (mA4 == mA3) {
                    block25: {
                        CallSite callSite;
                        ap ap2;
                        this.pAjuu = false;
                        this.vCMYc = true;
                        this.AyAnj.dhg();
                        float f3 = this.toIeR + (float)(d - (double)this.toIeR) * this.RT();
                        float f4 = this.QWaAn + (float)(d2 - (double)this.QWaAn) * this.RT();
                        try {
                            ap2 = new ap(f3, f4, 110.0f, 6.0f);
                            callSite = this.oZllQ.isEmpty() ? cp.Rf("x", (int)10182, (long)(0x1D55A4D0C40B463EL ^ l)) : cp.Rf("x", (int)15704, (long)(0x2432788351DDCA1L ^ l));
                        }
                        catch (MatchException matchException) {
                            throw cp.Rb(matchException);
                        }
                        ap ap3 = ap2.pW((String)((Object)callSite)).qq();
                        for (cB cB2 : this.oZllQ) {
                            try {
                                ap3.pU(cB2);
                                if (iSArray != null) {
                                    if (iSArray != null) continue;
                                    break;
                                }
                                break block25;
                            }
                            catch (MatchException matchException) {
                                throw cp.Rb(matchException);
                            }
                        }
                        ap3.qn((String)((Object)cp.Rf("x", (int)28654, (long)(0x698523B3C7D08E15L ^ l))), lf.JHGge, jk.mPXGi, jk.mPXGi, aj2 -> {
                            this.LkpAS = false;
                            aj2.oj(false);
                        }).qo(() -> {
                            this.vCMYc = false;
                        });
                        rD.dlK().Rs(ap3);
                    }
                    return true;
                }
            }
            bl = false;
        }
        return bl;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cp.class, "Rh", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(cp.class, "Re", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
