/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1303
 *  net.minecraft.class_1511
 *  net.minecraft.class_1542
 *  net.minecraft.class_1665
 *  net.minecraft.class_2246
 *  net.minecraft.class_2248
 *  net.minecraft.class_2338
 *  net.minecraft.class_2341
 *  net.minecraft.class_2350
 *  net.minecraft.class_2374
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 *  net.minecraft.class_2680
 *  net.minecraft.class_2769
 *  net.minecraft.class_4969
 *  net.minecraft.class_638
 *  net.minecraft.class_746
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Iterator;
import java.util.Set;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1303;
import net.minecraft.class_1511;
import net.minecraft.class_1542;
import net.minecraft.class_1665;
import net.minecraft.class_2246;
import net.minecraft.class_2248;
import net.minecraft.class_2338;
import net.minecraft.class_2341;
import net.minecraft.class_2350;
import net.minecraft.class_2374;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_2680;
import net.minecraft.class_2769;
import net.minecraft.class_4969;
import net.minecraft.class_638;
import net.minecraft.class_746;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.rD;

public class jl {
    private static final Set<class_2248> oVDJL;
    private static final long cuNqa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    public static class_2338 bDO(class_2338 var0, boolean var1_1) {
        block19: {
            block21: {
                block25: {
                    block26: {
                        block22: {
                            block23: {
                                block24: {
                                    block20: {
                                        block18: {
                                            var2_2 = jl.cuNqa ^ 31313747459656L;
                                            var5_3 = rD.dlmvG.field_1724.method_33571().method_1020(var0.method_46558());
                                            var4_4 = jf.bBe();
                                            var6_5 = new class_243(var5_3.field_1352, 0.0, var5_3.field_1350);
                                            try {
                                                cfr_temp_0 = var6_5.method_1027() - 9.999999747378752E-6;
                                                v0 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 > 0.0 ? 1 : -1);
                                                if (var4_4 == null) break block18;
                                                if (v0 <= 0) break block19;
                                            }
                                            catch (MatchException v1) {
                                                throw jl.bDX(v1);
                                            }
                                            v0 = (double)var1_1;
                                        }
                                        try {
                                            if (var4_4 == null) break block20;
                                            if (v0 != false) {
                                            }
                                            ** GOTO lbl29
                                        }
                                        catch (MatchException v2) {
                                            throw jl.bDX(v2);
                                        }
                                        var9_6 = Math.atan2(var6_5.field_1352, var6_5.field_1350);
                                        var11_7 = 0.7853981633974483;
                                        var13_8 = (double)Math.round(var9_6 / var11_7) * var11_7;
                                        var7_9 = (int)Math.round(Math.sin(var13_8));
                                        var8_10 = (int)Math.round(Math.cos(var13_8));
                                        try {
                                            if (var4_4 != null) break block21;
lbl29:
                                            // 2 sources

                                            v0 = (cfr_temp_1 = Math.abs(var6_5.field_1352) - Math.abs(var6_5.field_1350)) == 0.0 ? 0 : (cfr_temp_1 > 0.0 ? 1 : -1);
                                        }
                                        catch (MatchException v3) {
                                            throw jl.bDX(v3);
                                        }
                                    }
                                    try {
                                        try {
                                            try {
                                                if (var4_4 == null) break block22;
                                                if (v0 > 0) {
                                                }
                                                ** GOTO lbl62
                                            }
                                            catch (MatchException v4) {
                                                throw jl.bDX(v4);
                                            }
                                            cfr_temp_2 = var6_5.field_1352 - 0.0;
                                            v5 = cfr_temp_2 == 0.0 ? 0 : (cfr_temp_2 > 0.0 ? 1 : -1);
                                            if (var4_4 == null) break block23;
                                        }
                                        catch (MatchException v6) {
                                            throw jl.bDX(v6);
                                        }
                                        if (v5 <= 0) break block24;
                                    }
                                    catch (MatchException v7) {
                                        throw jl.bDX(v7);
                                    }
                                    v5 = (double)true;
                                    break block23;
                                }
                                v5 = -1;
                            }
                            var7_9 = v5;
                            var8_10 = (double)false;
                            try {
                                if (var4_4 != null) break block21;
lbl62:
                                // 2 sources

                                v0 = (double)false;
                            }
                            catch (MatchException v8) {
                                throw jl.bDX(v8);
                            }
                        }
                        var7_9 = v0;
                        try {
                            cfr_temp_3 = var6_5.field_1350 - 0.0;
                            v9 = cfr_temp_3 == 0.0 ? 0 : (cfr_temp_3 > 0.0 ? 1 : -1);
                            if (var4_4 == null) break block25;
                            if (v9 <= 0) break block26;
                        }
                        catch (MatchException v10) {
                            throw jl.bDX(v10);
                        }
                        v9 = (double)true;
                        break block25;
                    }
                    v9 = -1;
                }
                var8_10 = v9;
            }
            return var0.method_10069((int)var7_9, 0, (int)var8_10);
        }
        return var0.method_10069(1, 0, 0);
    }

    public static class_2338 bDP(class_2338 class_23382) {
        block5: {
            class_2680 class_26802;
            block4: {
                long l = cuNqa ^ 0x157B4FF3D4BL;
                class_2680 class_26803 = rD.dlmvG.field_1687.method_8320(class_23382);
                String[] stringArray = jf.bBe();
                try {
                    try {
                        class_26802 = class_26803;
                        if (stringArray == null) break block4;
                        if (!(class_26802.method_26204() instanceof class_2341)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jl.bDX(matchException);
                    }
                    class_26802 = class_26803;
                }
                catch (MatchException matchException) {
                    throw jl.bDX(matchException);
                }
            }
            class_2350 class_23502 = jl.bDS(class_26802).method_10153();
            return class_23382.method_10093(class_23502);
        }
        return null;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                jl.cuNqa = gb.aYR(2255017921502474544L, 6876587141982224328L, MethodHandles.lookup().lookupClass()).a(261621804693976L);
                var11 = jl.cuNqa ^ 42122472388407L;
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
                var0_3 = new long[53];
                var4_4 = 0;
                var5_5 = "\u009e@hGs\u00d7\u0091\u00c3\u00fb\u00b3\u00cf\b>49#k3$\u00d9\u00f9\u0086k\u00af\u00a7G\u0082\u0002\u00a62\u001c\u0017R\u001a\u0087\u0094\u00bfr+\u00e31\u00b6/B\u00bc~\u008e+\u00d4x\u00bb\u00d8k1eS*B=\u00cc\u00ad\u001c\u00eb\u0015\u00ef\u0010\u00fd\u0097\u00baF\u00b7\u001a\u00a6\u0083\u00ef\u00983>?\u00f7\u00ca\u0016\u00df%\u00a2C\u00df7\u0010QT\u00c7\u00d4wj\u0094\u000e\u00cf |\u000b\u00ff\u00c5x\u00dbL\u00023p)BR\u0098[\u00e3\u00fb@\u008b)\u00ab.\u009d&x\u008aS+g\u0097^\u009e{\u00b2\u008d9\u00e7G\u0087\u00eb\u00e2\u0019n~X>\u00ffg\u00d9\u0096\u009aN\u008dJ\u001e\u00c6\u0007\u00e5\u00cf'\u0081-\u00a5\u000e\u00e37\u00a4@\u00a3^\u001d?\u00e6\u00e3\u00fe\u0003'\u0085\u00ed\u00b4\u00ed=E\u00f3L\u00acr\u00ba\u00c7\u00a9#m\u00cb}\u00a8f\u00adwB\u0082\u001176\u00f6\u00bc\u00fc\u0096\u00dee\u00f5\u0016;\u008f\u00c9\u0090\u00c0\u00aa\t\u00a1\u00b5\u00f7\u00b5G\u009e&l>F\u0011Gk\u00e4hU\u0019\u009c\u009b\u00d3\u00b6OAc\u0091\u00b3=\u00f4\u00ac\"T]p\u0000\u001a\u00a7\u00a6\u0092\u008f\u0003\u0092\u00ab\u00a8\u00bfV\u0018\u00acuH\u00ae.2\u00a9\u0084\u00ba\u0011\u00fe\u0095\u00fbJ \u000f[{\u00a1]\u0092\u009e\u0096\u00b9\u00c2d\u0082\u0088\u00b1\u0088\u00dcfQ\u0095=\f\u00a8\u00f6\u0084L\u00db\u000el\u00d5s\u00b3\u000fuz\u00b8\u00c4\u00f1\u008em\u00b6\u00ea\u0080o\u0081\u007fR\u00b4\u00f1\u00e6\u009d\u0091s\u00f5\u008dx\u0087\u00a8\u009f\u00bd\u00f1\u0019D\u009eYu\u00ed\u00f7\u00f1\u0010\u0083i\u008d\u0001\u00f9\u00ae\u00e7:\u00ba\u009f\u00e3ZB]\u00ba&\u00e8\u00e0\u00ae\u0095N\u00b2\u00dd\u001b\u00e3\u001ep=\u00ba>x\u00cf\u008c^f\u001e\u00b7\u00c4t&Q\u000e\u00aa\u0092\u00b2\u00c6\u0087\u00fb\u00e6<+\u00feW\u00b7\u00a7\\x\u001bA>\u00f5";
                var6_6 = "\u009e@hGs\u00d7\u0091\u00c3\u00fb\u00b3\u00cf\b>49#k3$\u00d9\u00f9\u0086k\u00af\u00a7G\u0082\u0002\u00a62\u001c\u0017R\u001a\u0087\u0094\u00bfr+\u00e31\u00b6/B\u00bc~\u008e+\u00d4x\u00bb\u00d8k1eS*B=\u00cc\u00ad\u001c\u00eb\u0015\u00ef\u0010\u00fd\u0097\u00baF\u00b7\u001a\u00a6\u0083\u00ef\u00983>?\u00f7\u00ca\u0016\u00df%\u00a2C\u00df7\u0010QT\u00c7\u00d4wj\u0094\u000e\u00cf |\u000b\u00ff\u00c5x\u00dbL\u00023p)BR\u0098[\u00e3\u00fb@\u008b)\u00ab.\u009d&x\u008aS+g\u0097^\u009e{\u00b2\u008d9\u00e7G\u0087\u00eb\u00e2\u0019n~X>\u00ffg\u00d9\u0096\u009aN\u008dJ\u001e\u00c6\u0007\u00e5\u00cf'\u0081-\u00a5\u000e\u00e37\u00a4@\u00a3^\u001d?\u00e6\u00e3\u00fe\u0003'\u0085\u00ed\u00b4\u00ed=E\u00f3L\u00acr\u00ba\u00c7\u00a9#m\u00cb}\u00a8f\u00adwB\u0082\u001176\u00f6\u00bc\u00fc\u0096\u00dee\u00f5\u0016;\u008f\u00c9\u0090\u00c0\u00aa\t\u00a1\u00b5\u00f7\u00b5G\u009e&l>F\u0011Gk\u00e4hU\u0019\u009c\u009b\u00d3\u00b6OAc\u0091\u00b3=\u00f4\u00ac\"T]p\u0000\u001a\u00a7\u00a6\u0092\u008f\u0003\u0092\u00ab\u00a8\u00bfV\u0018\u00acuH\u00ae.2\u00a9\u0084\u00ba\u0011\u00fe\u0095\u00fbJ \u000f[{\u00a1]\u0092\u009e\u0096\u00b9\u00c2d\u0082\u0088\u00b1\u0088\u00dcfQ\u0095=\f\u00a8\u00f6\u0084L\u00db\u000el\u00d5s\u00b3\u000fuz\u00b8\u00c4\u00f1\u008em\u00b6\u00ea\u0080o\u0081\u007fR\u00b4\u00f1\u00e6\u009d\u0091s\u00f5\u008dx\u0087\u00a8\u009f\u00bd\u00f1\u0019D\u009eYu\u00ed\u00f7\u00f1\u0010\u0083i\u008d\u0001\u00f9\u00ae\u00e7:\u00ba\u009f\u00e3ZB]\u00ba&\u00e8\u00e0\u00ae\u0095N\u00b2\u00dd\u001b\u00e3\u001ep=\u00ba>x\u00cf\u008c^f\u001e\u00b7\u00c4t&Q\u000e\u00aa\u0092\u00b2\u00c6\u0087\u00fb\u00e6<+\u00feW\u00b7\u00a7\\x\u001bA>\u00f5".length();
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
                    var5_5 = "\u001d^\u00cf\u007f\u00e3U\u0099y\u001e\u0090\u00a9)m\u0003\u00a0\u00eb";
                    var6_6 = "\u001d^\u00cf\u007f\u00e3U\u0099y\u001e\u0090\u00a9)m\u0003\u00a0\u00eb".length();
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
        v8 = new class_2248[(int)var0_3[16]];
        v8[0] = class_2246.field_10443;
        v8[1] = class_2246.field_10034;
        v8[2] = class_2246.field_10380;
        v8[3] = class_2246.field_9980;
        v8[4] = class_2246.field_10486;
        v8[5] = class_2246.field_40285;
        v8[(int)var0_3[11]] = class_2246.field_10246;
        v8[(int)var0_3[4]] = class_2246.field_42740;
        v8[(int)var0_3[52]] = class_2246.field_10535;
        v8[(int)var0_3[7]] = class_2246.field_10333;
        v8[(int)var0_3[49]] = class_2246.field_10312;
        v8[(int)var0_3[8]] = class_2246.field_10228;
        v8[(int)var0_3[25]] = class_2246.field_10200;
        v8[(int)var0_3[33]] = class_2246.field_10608;
        v8[(int)var0_3[22]] = class_2246.field_10485;
        v8[(int)var0_3[46]] = class_2246.field_10199;
        v8[(int)var0_3[29]] = class_2246.field_10407;
        v8[(int)var0_3[18]] = class_2246.field_10063;
        v8[(int)var0_3[24]] = class_2246.field_10203;
        v8[(int)var0_3[32]] = class_2246.field_10600;
        v8[(int)var0_3[1]] = class_2246.field_10275;
        v8[(int)var0_3[30]] = class_2246.field_10051;
        v8[(int)var0_3[41]] = class_2246.field_10140;
        v8[(int)var0_3[48]] = class_2246.field_10532;
        v8[(int)var0_3[31]] = class_2246.field_10268;
        v8[(int)var0_3[19]] = class_2246.field_10605;
        v8[(int)var0_3[21]] = class_2246.field_10373;
        v8[(int)var0_3[13]] = class_2246.field_10055;
        v8[(int)var0_3[37]] = class_2246.field_10068;
        v8[(int)var0_3[36]] = class_2246.field_10371;
        v8[(int)var0_3[12]] = class_2246.field_10105;
        v8[(int)var0_3[20]] = class_2246.field_10414;
        v8[(int)var0_3[0]] = class_2246.field_10278;
        v8[(int)var0_3[38]] = class_2246.field_10417;
        v8[(int)var0_3[10]] = class_2246.field_40286;
        v8[(int)var0_3[43]] = class_2246.field_42743;
        v8[(int)var0_3[28]] = class_2246.field_10493;
        v8[(int)var0_3[26]] = class_2246.field_10553;
        v8[(int)var0_3[23]] = class_2246.field_10057;
        v8[(int)var0_3[50]] = class_2246.field_10066;
        v8[(int)var0_3[9]] = class_2246.field_22100;
        v8[(int)var0_3[39]] = class_2246.field_22101;
        v8[(int)var0_3[40]] = class_2246.field_23864;
        v8[(int)var0_3[44]] = class_2246.field_23863;
        v8[(int)var0_3[15]] = class_2246.field_10397;
        v8[(int)var0_3[47]] = class_2246.field_10592;
        v8[(int)var0_3[27]] = class_2246.field_40284;
        v8[(int)var0_3[51]] = class_2246.field_42737;
        v8[(int)var0_3[17]] = class_2246.field_10470;
        v8[(int)var0_3[45]] = class_2246.field_10026;
        v8[(int)var0_3[5]] = class_2246.field_10484;
        v8[(int)var0_3[2]] = class_2246.field_10332;
        v8[(int)var0_3[3]] = class_2246.field_22130;
        v8[(int)var0_3[6]] = class_2246.field_22131;
        v8[(int)var0_3[42]] = class_2246.field_10224;
        v8[(int)var0_3[35]] = class_2246.field_10582;
        v8[(int)var0_3[14]] = class_2246.field_10494;
        v8[(int)var0_3[34]] = class_2246.field_10158;
        jl.oVDJL = Set.of(v8);
    }

    /*
     * Exception decompiling
     */
    public static class_2350 bDS(class_2680 var0) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doClass(Driver.java:84)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:78)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public static boolean bDI(class_2338 class_23382) {
        boolean bl;
        block9: {
            block10: {
                boolean bl2;
                block11: {
                    block12: {
                        long l = cuNqa ^ 0x9FC4979E834L;
                        String[] stringArray = jf.bBe();
                        try {
                            if (class_23382 == null) {
                                return false;
                            }
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        class_2680 class_26802 = rD.dlmvG.field_1687.method_8320(class_23382);
                        try {
                            try {
                                try {
                                    bl = class_26802.method_27852(class_2246.field_23152);
                                    if (stringArray == null) break block9;
                                    if (!bl) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw jl.bDX(matchException);
                                }
                                bl2 = ((Integer)class_26802.method_11654((class_2769)class_4969.field_23153)).intValue();
                                if (stringArray == null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            if (!bl2) break block12;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        bl2 = true;
                        break block11;
                    }
                    bl2 = false;
                }
                return bl2;
            }
            bl = false;
        }
        return bl;
    }

    private static boolean bDU(class_1297 class_12972) {
        boolean bl;
        block13: {
            block11: {
                String[] stringArray;
                block12: {
                    block10: {
                        long l = cuNqa ^ 0x54E8912C43A9L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                bl = class_12972 instanceof class_1542;
                                if (stringArray == null) break block10;
                                if (bl) break block11;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            bl = class_12972 instanceof class_1303;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block12;
                            if (bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        bl = class_12972 instanceof class_1665;
                    }
                    catch (MatchException matchException) {
                        throw jl.bDX(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block13;
                    if (bl) break block11;
                }
                catch (MatchException matchException) {
                    throw jl.bDX(matchException);
                }
                bl = true;
                break block13;
            }
            bl = false;
        }
        return bl;
    }

    public static class_2248 bDR(double d, double d2, double d3) {
        class_2338 class_23382 = class_2338.method_49638((class_2374)rD.dlmvG.field_1724.method_73189().method_1031(d, d2, d3));
        return rD.dlmvG.field_1687.method_8320(class_23382).method_26204();
    }

    public static class_2350 bDQ(class_2338 class_23382, class_2338 class_23383) {
        long l = cuNqa ^ 0x466E7ADD2CB2L;
        class_2350[] class_2350Array = class_2350.values();
        int n = class_2350Array.length;
        String[] stringArray = jf.bBe();
        int n2 = 0;
        while (n2 < n) {
            block5: {
                block6: {
                    class_2350 class_23502 = class_2350Array[n2];
                    try {
                        try {
                            if (stringArray == null) break block5;
                            if (!class_23382.method_10093(class_23502).equals((Object)class_23383)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        return class_23502;
                    }
                    catch (MatchException matchException) {
                        throw jl.bDX(matchException);
                    }
                }
                ++n2;
            }
            if (stringArray != null) continue;
        }
        return null;
    }

    public static boolean bDT(class_2338 class_23382) {
        boolean bl;
        block2: {
            block3: {
                long l = cuNqa ^ 0x70D5BAA6699BL;
                class_238 class_2382 = new class_238(class_23382);
                String[] stringArray = jf.bBe();
                Iterator iterator = rD.dlmvG.field_1687.method_8333((class_1297)rD.dlmvG.field_1724, class_2382, jl::bDU).iterator();
                try {
                    bl = iterator.hasNext();
                    if (stringArray == null) break block2;
                    if (!bl) break block3;
                }
                catch (MatchException matchException) {
                    throw jl.bDX(matchException);
                }
                class_1297 class_12972 = (class_1297)iterator.next();
                return true;
            }
            bl = false;
        }
        return bl;
    }

    public static boolean bDK(class_2338 class_23382, int n) {
        boolean bl;
        block8: {
            block9: {
                int n2;
                block10: {
                    block11: {
                        long l = cuNqa ^ 0x4C67FAAF4023L;
                        class_2680 class_26802 = rD.dlmvG.field_1687.method_8320(class_23382);
                        String[] stringArray = jf.bBe();
                        class_2248 class_22482 = class_26802.method_26204();
                        try {
                            try {
                                try {
                                    try {
                                        bl = class_22482.equals(class_2246.field_23152);
                                        if (stringArray == null) break block8;
                                        if (!bl) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw jl.bDX(matchException);
                                    }
                                    n2 = (Integer)class_26802.method_11654((class_2769)class_4969.field_23153);
                                    if (stringArray == null) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw jl.bDX(matchException);
                                }
                                if (n2 < n) break block11;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            n2 = 1;
                            break block10;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                    }
                    n2 = 0;
                }
                return n2 != 0;
            }
            bl = false;
        }
        return bl;
    }

    private static MatchException bDX(MatchException matchException) {
        return matchException;
    }

    public static boolean bDJ(class_2338 class_23382) {
        boolean bl;
        block9: {
            block10: {
                boolean bl2;
                block11: {
                    block12: {
                        long l = cuNqa ^ 0x6ADA99D75C12L;
                        String[] stringArray = jf.bBe();
                        try {
                            if (class_23382 == null) {
                                return false;
                            }
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        class_2680 class_26802 = rD.dlmvG.field_1687.method_8320(class_23382);
                        try {
                            try {
                                try {
                                    bl = class_26802.method_27852(class_2246.field_23152);
                                    if (stringArray == null) break block9;
                                    if (!bl) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw jl.bDX(matchException);
                                }
                                bl2 = ((Integer)class_26802.method_11654((class_2769)class_4969.field_23153)).intValue();
                                if (stringArray == null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            if (bl2) break block12;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        bl2 = true;
                        break block11;
                    }
                    bl2 = false;
                }
                return bl2;
            }
            bl = false;
        }
        return bl;
    }

    public static boolean bDL(class_2680 class_26802) {
        return oVDJL.contains(class_26802.method_26204());
    }

    public static boolean bDM(class_2248 class_22482) {
        return oVDJL.contains(class_22482);
    }

    public static boolean bDN(class_2338 class_23382) {
        boolean bl;
        block32: {
            block33: {
                class_2338 class_23383;
                String[] stringArray;
                block34: {
                    boolean bl2;
                    block29: {
                        block30: {
                            class_2248 class_22482;
                            class_2248 class_22483;
                            block31: {
                                block28: {
                                    class_2248 class_22484;
                                    class_2248 class_22485;
                                    block27: {
                                        class_638 class_6382;
                                        block25: {
                                            block26: {
                                                long l = cuNqa ^ 0x3840BCEE0B2AL;
                                                stringArray = jf.bBe();
                                                try {
                                                    try {
                                                        class_6382 = rD.dlmvG.field_1687;
                                                        if (stringArray == null) break block25;
                                                        if (class_6382 != null) break block26;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw jl.bDX(matchException);
                                                    }
                                                    return false;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jl.bDX(matchException);
                                                }
                                            }
                                            class_6382 = rD.dlmvG.field_1687;
                                        }
                                        class_2680 class_26802 = class_6382.method_8320(class_23382);
                                        try {
                                            try {
                                                class_22485 = class_26802.method_26204();
                                                class_22484 = class_2246.field_10540;
                                                if (stringArray == null) break block27;
                                                if (class_22485 == class_22484) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw jl.bDX(matchException);
                                            }
                                            class_22485 = class_26802.method_26204();
                                            class_22484 = class_2246.field_9987;
                                        }
                                        catch (MatchException matchException) {
                                            throw jl.bDX(matchException);
                                        }
                                    }
                                    try {
                                        if (class_22485 != class_22484) {
                                            return false;
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw jl.bDX(matchException);
                                    }
                                }
                                class_23383 = class_23382.method_10084();
                                class_2680 class_26803 = rD.dlmvG.field_1687.method_8320(class_23383);
                                try {
                                    try {
                                        try {
                                            try {
                                                bl2 = rD.dlmvG.field_1687.method_22347(class_23383);
                                                if (stringArray == null) break block29;
                                                if (!bl2) break block30;
                                            }
                                            catch (MatchException matchException) {
                                                throw jl.bDX(matchException);
                                            }
                                            class_22483 = class_26803.method_26204();
                                            class_22482 = class_2246.field_10540;
                                            if (stringArray == null) break block31;
                                        }
                                        catch (MatchException matchException) {
                                            throw jl.bDX(matchException);
                                        }
                                        if (class_22483 == class_22482) break block30;
                                    }
                                    catch (MatchException matchException) {
                                        throw jl.bDX(matchException);
                                    }
                                    class_22483 = class_26803.method_26204();
                                    class_22482 = class_2246.field_9987;
                                }
                                catch (MatchException matchException) {
                                    throw jl.bDX(matchException);
                                }
                            }
                            if (class_22483 != class_22482) break block34;
                        }
                        bl2 = false;
                    }
                    return bl2;
                }
                class_238 class_2382 = new class_238(class_23383).method_989(0.5, 0.0, 0.5).method_1012(0.0, 2.0, 0.0);
                boolean bl3 = rD.dlmvG.field_1687.method_8390(class_1297.class, class_2382, class_12972 -> {
                    boolean bl;
                    block2: {
                        block3: {
                            long l = cuNqa ^ 0x7681BD97F5F3L;
                            String[] stringArray = jf.bBe();
                            try {
                                bl = class_12972 instanceof class_746;
                                if (stringArray == null) break block2;
                                if (bl) break block3;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            bl = true;
                            break block2;
                        }
                        bl = false;
                    }
                    return bl;
                }).stream().anyMatch(class_12972 -> class_12972 instanceof class_1511);
                try {
                    bl = bl3;
                    if (stringArray == null) break block32;
                    if (bl) break block33;
                }
                catch (MatchException matchException) {
                    throw jl.bDX(matchException);
                }
                bl = true;
                break block32;
            }
            bl = false;
        }
        return bl;
    }
}
