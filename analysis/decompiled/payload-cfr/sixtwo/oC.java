/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1922
 *  net.minecraft.class_2248
 *  net.minecraft.class_2338
 *  net.minecraft.class_2350
 *  net.minecraft.class_2358
 *  net.minecraft.class_2374
 *  net.minecraft.class_2382
 *  net.minecraft.class_239$class_240
 *  net.minecraft.class_243
 *  net.minecraft.class_2488
 *  net.minecraft.class_2526
 *  net.minecraft.class_2541
 *  net.minecraft.class_265
 *  net.minecraft.class_2680
 *  net.minecraft.class_3610
 *  net.minecraft.class_3959
 *  net.minecraft.class_3959$class_242
 *  net.minecraft.class_3959$class_3960
 *  net.minecraft.class_3965
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ThreadLocalRandom;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1922;
import net.minecraft.class_2248;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_2358;
import net.minecraft.class_2374;
import net.minecraft.class_2382;
import net.minecraft.class_239;
import net.minecraft.class_243;
import net.minecraft.class_2488;
import net.minecraft.class_2526;
import net.minecraft.class_2541;
import net.minecraft.class_265;
import net.minecraft.class_2680;
import net.minecraft.class_3610;
import net.minecraft.class_3959;
import net.minecraft.class_3965;
import sixtwo.gb;
import sixtwo.ja;
import sixtwo.jg;
import sixtwo.jl;
import sixtwo.oB;
import sixtwo.oD;
import sixtwo.oE;
import sixtwo.oF;
import sixtwo.oU;
import sixtwo.ov;
import sixtwo.ox;
import sixtwo.oy;
import sixtwo.oz;
import sixtwo.rD;

public class oC {
    private static final int NNvjo;
    private static final double OFezW = 0.15;
    private static final double EoHES = 0.85;
    private static final class_2382[] YuMVe;
    public static final Predicate<class_2680> djrGf;
    private static final long baTmf;
    private static final long[] dJuiY;
    private static final Integer[] cjEmj;
    private static final Map kGycZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                oC.baTmf = gb.aYR(-3941548029273195598L, -7304090693425401748L, MethodHandles.lookup().lookupClass()).a(150658425836150L);
                var11 = oC.baTmf ^ 81886890889163L;
                oC.kGycZ = new HashMap<K, V>(13);
                var0_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var11 >>> 56);
                for (var1_2 = 1; var1_2 < 8; ++var1_2) {
                    v2 = v2;
                    v2[var1_2] = (byte)(var11 << var1_2 * 8 >>> 56);
                }
                var0_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var6_3 = new long[4];
                var3_4 = 0;
                var4_5 = "\u00d3\u00b2\u0096\u00dc\u0095\u009bet\u00c4z\u0083\u0092X\u0083\u00d4\u00d6";
                var5_6 = "\u00d3\u00b2\u0096\u00dc\u0095\u009bet\u00c4z\u0083\u0092X\u0083\u00d4\u00d6".length();
                var2_7 = 0;
                while (true) {
                    var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                    v3 = var6_3;
                    v4 = var3_4++;
                    v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    var4_5 = "\u00ac\u0087\u0012c\u00a5\u00c7|>\u00b2r\u008cx\u00d0\u0097\u00df\u009f";
                    var5_6 = "\u00ac\u0087\u0012c\u00a5\u00c7|>\u00b2r\u008cx\u00d0\u0097\u00df\u009f".length();
                    var2_7 = 0;
                    while (true) {
                        var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                        v3 = var6_3;
                        v4 = var3_4++;
                        v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    break block9;
                    break;
                }
            }
            var8_9 = v5;
            var10_10 = var0_1.doFinal(new byte[]{(byte)(var8_9 >>> 56), (byte)(var8_9 >>> 48), (byte)(var8_9 >>> 40), (byte)(var8_9 >>> 32), (byte)(var8_9 >>> 24), (byte)(var8_9 >>> 16), (byte)(var8_9 >>> 8), (byte)var8_9});
            v7 = ((long)var10_10[0] & 255L) << 56 | ((long)var10_10[1] & 255L) << 48 | ((long)var10_10[2] & 255L) << 40 | ((long)var10_10[3] & 255L) << 32 | ((long)var10_10[4] & 255L) << 24 | ((long)var10_10[5] & 255L) << 16 | ((long)var10_10[6] & 255L) << 8 | (long)var10_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        oC.dJuiY = var6_3;
        oC.cjEmj = new Integer[4];
        oC.NNvjo = (int)oC.cIl("j", (int)16917, (long)(var11 ^ 1500631190412593863L));
        v8 = new class_2382[oC.cIl("j", (int)10251, (long)(3852772743206723803L ^ var11))];
        v8[0] = new class_2382(0, -1, 0);
        v8[1] = new class_2382(0, 1, 0);
        v8[2] = new class_2382(-1, 0, 0);
        v8[3] = new class_2382(1, 0, 0);
        v8[4] = new class_2382(0, 0, 1);
        v8[5] = new class_2382(0, 0, -1);
        oC.YuMVe = v8;
        oC.djrGf = (Predicate<class_2680>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, cHP(net.minecraft.class_2680 ), (Lnet/minecraft/class_2680;)Z)();
    }

    public oz cHT(class_2338 class_23382, oD oD2, oB oB2, boolean bl, Predicate<class_2680> predicate, List<oy> list, oz oz2) {
        oz oz3;
        block65: {
            ArrayList<oz> arrayList;
            block66: {
                boolean bl2;
                ArrayList<oz> arrayList2;
                block59: {
                    ArrayList<oz> arrayList3;
                    double d;
                    class_243 class_2432;
                    class_243 class_2433;
                    String[] stringArray;
                    block58: {
                        oz oz4;
                        block57: {
                            boolean bl3;
                            block55: {
                                block56: {
                                    boolean bl4;
                                    block53: {
                                        block54: {
                                            boolean bl5;
                                            block52: {
                                                block51: {
                                                    block50: {
                                                        long l = baTmf ^ 0x431CECAFA409L;
                                                        stringArray = oz.b();
                                                        try {
                                                            try {
                                                                bl5 = bl;
                                                                if (stringArray != null) break block50;
                                                                if (bl5) break block51;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw oC.cIi(matchException);
                                                            }
                                                            bl5 = jl.bDT(class_23382);
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw oC.cIi(matchException);
                                                        }
                                                    }
                                                    try {
                                                        if (stringArray != null) break block52;
                                                        if (!bl5) break block51;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw oC.cIi(matchException);
                                                    }
                                                    bl5 = true;
                                                    break block52;
                                                }
                                                bl5 = false;
                                            }
                                            boolean bl6 = bl5;
                                            try {
                                                try {
                                                    bl4 = bl6;
                                                    if (stringArray != null) break block53;
                                                    if (!bl4) break block54;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oC.cIi(matchException);
                                                }
                                                return null;
                                            }
                                            catch (MatchException matchException) {
                                                throw oC.cIi(matchException);
                                            }
                                        }
                                        bl4 = oU.Xrdom.containsKey(class_23382);
                                    }
                                    boolean bl7 = bl4;
                                    try {
                                        if (bl7) {
                                            return null;
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    class_2680 class_26802 = rD.dlmvG.field_1687.method_8320(class_23382);
                                    try {
                                        bl3 = predicate.test(class_26802);
                                        if (stringArray != null) break block55;
                                        if (bl3) break block56;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    bl3 = true;
                                    break block55;
                                }
                                bl3 = false;
                            }
                            boolean bl8 = bl3;
                            try {
                                if (bl8) {
                                    return null;
                                }
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            if (oD2 == oD.xBObQ) {
                                class_3965 class_39652 = ox.cHc(new class_3959(rD.dlmvG.field_1724.method_33571(), class_23382.method_46558(), class_3959.class_3960.field_17558, class_3959.class_242.field_1348, (class_1297)rD.dlmvG.field_1724), class_23382);
                                return new oz(class_23382, class_39652);
                            }
                            class_2433 = rD.dlmvG.field_1724.method_33571();
                            ov ov2 = rD.dlX().dbC();
                            class_2432 = ov2.cGH();
                            d = rD.dlmvG.field_1724.method_55754();
                            oz oz5 = this.cHU(class_23382, oz2, list, oD2, d, class_2433);
                            try {
                                oz4 = oz5;
                                if (stringArray != null) break block57;
                                if (oz4 == null) break block58;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            oz4 = oz5;
                        }
                        return oz4;
                    }
                    try {
                        arrayList3 = oB2 == oB.FXGPX ? new ArrayList<oz>() : null;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                    arrayList2 = arrayList3;
                    oz3 = null;
                    double d2 = Double.MAX_VALUE;
                    List<oF> list2 = this.cIe(class_23382);
                    for (oF oF2 : list2) {
                        block64: {
                            double d3;
                            class_243 class_2434;
                            block63: {
                                boolean bl9;
                                class_2350 class_23502;
                                class_2338 class_23383;
                                class_243 class_2435;
                                oC oC2;
                                class_243 class_2436;
                                block61: {
                                    class_243 class_2437;
                                    block62: {
                                        block60: {
                                            try {
                                                try {
                                                    bl2 = this.cIb(oF2.blockPos(), oF2.direction(), class_2433);
                                                    if (stringArray != null) break block59;
                                                    if (!bl2) break block60;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oC.cIi(matchException);
                                                }
                                                if (stringArray == null) continue;
                                            }
                                            catch (MatchException matchException) {
                                                throw oC.cIi(matchException);
                                            }
                                        }
                                        try {
                                            if (oB2 == oB.FXGPX) {
                                                this.cHW(class_23382, oF2, oD2, class_2433, d, list, arrayList2);
                                                if (stringArray == null) continue;
                                            }
                                        }
                                        catch (MatchException matchException) {
                                            throw oC.cIi(matchException);
                                        }
                                        class_2437 = this.cHV(oF2, oD2, class_2433, class_2432, d);
                                        try {
                                            try {
                                                class_2436 = class_2437;
                                                if (stringArray != null) break block61;
                                                if (class_2436 != null) break block62;
                                            }
                                            catch (MatchException matchException) {
                                                throw oC.cIi(matchException);
                                            }
                                            if (stringArray == null) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw oC.cIi(matchException);
                                        }
                                    }
                                    class_2436 = this.cHX(class_2437, oF2.blockPos(), oF2.direction(), list);
                                }
                                class_2434 = class_2436;
                                try {
                                    oC2 = this;
                                    class_2435 = class_2434;
                                    class_23383 = oF2.blockPos();
                                    class_23502 = oF2.direction();
                                    bl9 = oD2 == oD.pxPhl;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                try {
                                    if (oC2.cHY(class_2435, class_23383, class_23502, bl9, d) && stringArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                double d4 = this.cIa(class_2434, class_2433, class_2432);
                                try {
                                    try {
                                        d3 = d4;
                                        if (stringArray != null) break block63;
                                        if (!(d3 < d2)) break block64;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    d3 = d4;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                            }
                            d2 = d3;
                            oz3 = new oz(class_23382, new class_3965(class_2434, oF2.direction(), oF2.blockPos(), false));
                        }
                        if (stringArray == null) continue;
                    }
                    try {
                        try {
                            if (oB2 != oB.FXGPX) break block65;
                            arrayList = arrayList2;
                            if (stringArray != null) break block66;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        bl2 = arrayList.isEmpty();
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                try {
                    if (bl2) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
                arrayList = arrayList2.get(ThreadLocalRandom.current().nextInt(arrayList2.size()));
            }
            return (oz)((Object)arrayList);
        }
        return oz3;
    }

    private double cIa(class_243 class_2432, class_243 class_2433, class_243 class_2434) {
        double d;
        double d2;
        block4: {
            class_243 class_2435;
            block5: {
                long l = baTmf ^ 0x111BCDFBAEF1L;
                class_2435 = class_2432.method_1020(class_2433);
                d2 = class_2435.method_1027();
                String[] stringArray = oz.b();
                try {
                    try {
                        d = d2;
                        if (stringArray != null) break block4;
                        if (!(d <= 1.0E-12)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                    return 0.0;
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
            }
            d = class_2435.method_1026(class_2434);
        }
        double d3 = d;
        return d2 - d3 * d3;
    }

    /*
     * Exception decompiling
     */
    private boolean cIc(class_243 var1_1, class_2338 var2_2, class_2350 var3_3) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 13[SWITCH]
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

    private boolean cId(double d) {
        double d2;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l = baTmf ^ 0x2909E621F4DDL;
                    stringArray = oz.b();
                    try {
                        try {
                            double d3 = d - 0.15;
                            d2 = d3 == 0.0 ? 0 : (d3 > 0.0 ? 1 : -1);
                            if (stringArray != null) break block6;
                            if (d2 < 0) break block7;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        double d4 = d - 0.85;
                        d2 = d4 == 0.0 ? 0 : (d4 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                try {
                    if (stringArray != null) break block8;
                    if (d2 > 0) break block7;
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
                d2 = 1.0;
                break block8;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    private boolean cIf(class_2338 class_23382) {
        boolean bl;
        block6: {
            block8: {
                block7: {
                    long l = baTmf ^ 0x9312023E7A8L;
                    String[] stringArray = oz.b();
                    try {
                        try {
                            try {
                                bl = rD.dlmvG.field_1687.method_8320(class_23382).method_51367();
                                if (stringArray != null) break block6;
                                if (bl) break block7;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            bl = oU.Xrdom.containsKey(class_23382);
                            if (stringArray != null) break block6;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        if (!bl) break block8;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                bl = true;
                break block6;
            }
            bl = false;
        }
        return bl;
    }

    private static CallSite cIl(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/oC" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private class_3965 cHZ(class_3959 class_39593) {
        return (class_3965)class_1922.method_17744((class_243)class_39593.method_17750(), (class_243)class_39593.method_17747(), (Object)class_39593, (class_39592, class_23382) -> {
            class_3965 class_39652;
            double d;
            double d2;
            long l = baTmf ^ 0x792EED95C164L;
            class_2680 class_26802 = rD.dlmvG.field_1687.method_8320(class_23382);
            try {
                if (oC.cHP(class_26802)) {
                    return null;
                }
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            class_3610 class_36102 = rD.dlmvG.field_1687.method_8316(class_23382);
            class_243 class_2432 = class_39592.method_17750();
            class_243 class_2433 = class_39592.method_17747();
            class_265 class_2652 = class_39592.method_17748(class_26802, (class_1922)rD.dlmvG.field_1687, class_23382);
            class_3965 class_39653 = rD.dlmvG.field_1687.method_17745(class_2432, class_2433, class_23382, class_2652, class_26802);
            class_265 class_2653 = class_39592.method_17749(class_36102, (class_1922)rD.dlmvG.field_1687, class_23382);
            class_3965 class_39654 = class_2653.method_1092(class_2432, class_2433, class_23382);
            try {
                d2 = class_39653 == null ? Double.MAX_VALUE : class_2432.method_1025(class_39653.method_17784());
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            double d3 = d2;
            try {
                d = class_39654 == null ? Double.MAX_VALUE : class_2432.method_1025(class_39654.method_17784());
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            double d4 = d;
            try {
                class_39652 = d3 <= d4 ? class_39653 : class_39654;
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            return class_39652;
        }, class_39592 -> {
            class_243 class_2432 = class_39592.method_17750().method_1020(class_39592.method_17747());
            return class_3965.method_17778((class_243)class_39592.method_17747(), (class_2350)class_2350.method_10142((double)class_2432.field_1352, (double)class_2432.field_1351, (double)class_2432.field_1350), (class_2338)class_2338.method_49638((class_2374)class_39592.method_17747()));
        });
    }

    private static int cIj(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x50;
        if (cjEmj[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = dJuiY[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])kGycZ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    kGycZ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/oC", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            oC.cjEmj[n2] = n3;
        }
        return cjEmj[n2];
    }

    private static int cIk(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = oC.cIj(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static boolean cHP(class_2680 class_26802) {
        boolean bl;
        block23: {
            block25: {
                block24: {
                    boolean bl2;
                    String[] stringArray;
                    block20: {
                        block22: {
                            block21: {
                                long l = baTmf ^ 0x353D08D145D4L;
                                class_2248 class_22482 = class_26802.method_26204();
                                stringArray = oz.b();
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            bl2 = class_22482 instanceof class_2358;
                                                            if (stringArray != null) break block20;
                                                            if (bl2) break block21;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw oC.cIi(matchException);
                                                        }
                                                        bl2 = class_22482 instanceof class_2526;
                                                        if (stringArray != null) break block20;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw oC.cIi(matchException);
                                                    }
                                                    if (bl2) break block21;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oC.cIi(matchException);
                                                }
                                                bl2 = class_22482 instanceof class_2488;
                                                if (stringArray != null) break block20;
                                            }
                                            catch (MatchException matchException) {
                                                throw oC.cIi(matchException);
                                            }
                                            if (bl2) break block21;
                                        }
                                        catch (MatchException matchException) {
                                            throw oC.cIi(matchException);
                                        }
                                        bl2 = class_22482 instanceof class_2541;
                                        if (stringArray != null) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    if (!bl2) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                            }
                            bl2 = true;
                            break block20;
                        }
                        bl2 = false;
                    }
                    boolean bl3 = bl2;
                    try {
                        try {
                            try {
                                bl = class_26802.method_45474();
                                if (stringArray != null) break block23;
                                if (bl) break block24;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            bl = bl3;
                            if (stringArray != null) break block23;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        if (!bl) break block25;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                bl = true;
                break block23;
            }
            bl = false;
        }
        return bl;
    }

    private static MatchException cIi(MatchException matchException) {
        return matchException;
    }

    public oz cHQ(class_2338 class_23382, oD oD2, boolean bl, Predicate<class_2680> predicate) {
        return this.cHT(class_23382, oD2, oB.LwHxs, bl, predicate, Collections.emptyList(), null);
    }

    public oz cHR(class_2338 class_23382, oD oD2, boolean bl, Predicate<class_2680> predicate, List<oy> list) {
        return this.cHT(class_23382, oD2, oB.LwHxs, bl, predicate, list, null);
    }

    public oz cHS(class_2338 class_23382, oD oD2, boolean bl, Predicate<class_2680> predicate, List<oy> list, oz oz2) {
        return this.cHT(class_23382, oD2, oB.LwHxs, bl, predicate, list, oz2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private oz cHU(class_2338 class_23382, oz oz2, List<oy> list, oD oD2, double d, class_243 class_2432) {
        boolean bl;
        class_2350 class_23502;
        class_2338 class_23383;
        class_243 class_2433;
        oC oC2;
        oC oC3;
        class_2350 class_23503;
        class_2338 class_23384;
        class_3965 class_39652;
        block24: {
            boolean bl2;
            block22: {
                String[] stringArray;
                block23: {
                    oz oz3;
                    block20: {
                        block21: {
                            block19: {
                                long l = baTmf ^ 0x336B9A97CC79L;
                                stringArray = oz.b();
                                try {
                                    oz3 = oz2;
                                    if (stringArray != null) break block19;
                                    if (oz3 == null) return null;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                oz3 = oz2;
                            }
                            try {
                                try {
                                    if (stringArray != null) break block20;
                                    if (oz3.blockPos().equals((Object)class_23382)) break block21;
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                        }
                        oz3 = oz2;
                    }
                    class_39652 = oz3.blockHitResult();
                    class_23384 = class_39652.method_17777();
                    class_23503 = class_39652.method_17780();
                    try {
                        try {
                            bl2 = this.cIe(class_23382).contains(new oF(class_23384, class_23503));
                            if (stringArray != null) break block22;
                            if (bl2) break block23;
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                try {
                    oC3 = this;
                    if (stringArray != null) break block24;
                    bl2 = oC3.cIb(class_23384, class_23503, class_2432);
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
            }
            try {
                if (bl2) {
                    return null;
                }
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            oC3 = this;
        }
        class_243 class_2434 = oC3.cHX(class_39652.method_17784(), class_23384, class_23503, list);
        try {
            oC2 = this;
            class_2433 = class_2434;
            class_23383 = class_23384;
            class_23502 = class_23503;
            bl = oD2 == oD.pxPhl;
        }
        catch (MatchException matchException) {
            throw oC.cIi(matchException);
        }
        try {
            if (!oC2.cHY(class_2433, class_23383, class_23502, bl, d)) return new oz(class_23382, new class_3965(class_2434, class_23503, class_23384, false));
            return null;
        }
        catch (MatchException matchException) {
            throw oC.cIi(matchException);
        }
    }

    private List<oF> cIe(class_2338 class_23382) {
        long l = baTmf ^ 0x7D894AFCDEC3L;
        ArrayList<oF> arrayList = new ArrayList<oF>();
        int n = 0;
        String[] stringArray = oz.b();
        while (n < YuMVe.length) {
            block5: {
                block6: {
                    class_2338 class_23383 = class_23382.method_10081(YuMVe[n]);
                    try {
                        try {
                            if (stringArray != null) break block5;
                            if (!this.cIf(class_23383)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        arrayList.add(new oF(class_23383, ja.toQLU[n]));
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                ++n;
            }
            if (stringArray == null) continue;
        }
        return arrayList;
    }

    /*
     * Exception decompiling
     */
    private boolean cIb(class_2338 var1_1, class_2350 var2_2, class_243 var3_3) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 2[SWITCH]
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

    private void cHW(class_2338 class_23382, oF oF2, oD oD2, class_243 class_2432, double d, List<oy> list, List<oz> list2) {
        long l = baTmf ^ 0x300FCFC92D63L;
        Iterator<class_243> iterator = oE.cIq(oF2.blockPos(), oF2.direction(), (int)oC.cIl("j", (int)6501, (long)(0x53EEBC8E2F86F31EL ^ l))).iterator();
        String[] stringArray = oz.b();
        while (iterator.hasNext()) {
            block13: {
                boolean bl;
                class_243 class_2433;
                block14: {
                    boolean bl2;
                    class_2350 class_23502;
                    class_2338 class_23383;
                    class_243 class_2434;
                    oC oC2;
                    class_2350 class_23503;
                    class_2338 class_23384;
                    class_243 class_2435;
                    oC oC3;
                    block11: {
                        class_243 class_2436;
                        block12: {
                            class_2436 = iterator.next();
                            try {
                                try {
                                    oC3 = this;
                                    class_2435 = class_2436;
                                    class_23384 = oF2.blockPos();
                                    class_23503 = oF2.direction();
                                    if (stringArray != null) break block11;
                                    if (oC3.cIc(class_2435, class_23384, class_23503)) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                if (stringArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                        }
                        oC3 = this;
                        class_2435 = class_2436;
                        class_23384 = oF2.blockPos();
                        class_23503 = oF2.direction();
                    }
                    class_2433 = oC3.cHX(class_2435, class_23384, class_23503, list);
                    try {
                        oC2 = this;
                        class_2434 = class_2433;
                        class_23383 = oF2.blockPos();
                        class_23502 = oF2.direction();
                        bl2 = oD2 == oD.pxPhl;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                    try {
                        try {
                            bl = oC2.cHY(class_2434, class_23383, class_23502, bl2, d);
                            if (stringArray != null) break block13;
                            if (!bl) break block14;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        if (stringArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                bl = list2.add(new oz(class_23382, new class_3965(class_2433, oF2.direction(), oF2.blockPos(), false)));
            }
            if (stringArray == null) continue;
        }
    }

    private class_243 cHV(oF oF2, oD oD2, class_243 class_2432, class_243 class_2433, double d) {
        class_243 class_2434;
        block13: {
            long l = baTmf ^ 0x130353448961L;
            class_243 class_2435 = null;
            double d2 = Double.MAX_VALUE;
            Iterator<class_243> iterator = oE.cIq(oF2.blockPos(), oF2.direction(), (int)oC.cIl("j", (int)30560, (long)(0x48AF86E24AC9391BL ^ l))).iterator();
            String[] stringArray = oz.b();
            while (iterator.hasNext()) {
                block17: {
                    double d3;
                    class_243 class_2436;
                    block16: {
                        boolean bl;
                        class_2350 class_23502;
                        class_2338 class_23382;
                        class_243 class_2437;
                        oC oC2;
                        block14: {
                            block15: {
                                class_2434 = iterator.next();
                                if (stringArray != null) break block13;
                                class_2436 = class_2434;
                                try {
                                    try {
                                        oC2 = this;
                                        class_2437 = class_2436;
                                        class_23382 = oF2.blockPos();
                                        class_23502 = oF2.direction();
                                        if (stringArray != null) break block14;
                                        if (oC2.cIc(class_2437, class_23382, class_23502)) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    if (stringArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                            }
                            oC2 = this;
                            class_2437 = class_2436;
                            class_23382 = oF2.blockPos();
                            class_23502 = oF2.direction();
                        }
                        try {
                            bl = oD2 == oD.pxPhl;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        try {
                            if (oC2.cHY(class_2437, class_23382, class_23502, bl, d) && stringArray == null) continue;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        double d4 = this.cIa(class_2436, class_2432, class_2433);
                        try {
                            try {
                                d3 = d4;
                                if (stringArray != null) break block16;
                                if (!(d3 < d2)) break block17;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            d3 = d4;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                    }
                    d2 = d3;
                    class_2435 = class_2436;
                }
                if (stringArray == null) continue;
            }
            class_2434 = class_2435;
        }
        return class_2434;
    }

    private class_243 cHX(class_243 class_2432, class_2338 class_23382, class_2350 class_23502, List<oy> list) {
        class_243 class_2433;
        block2: {
            long l = baTmf ^ 0x1681E8D36BL;
            class_243 class_2434 = class_2432;
            Iterator<oy> iterator = list.iterator();
            String[] stringArray = oz.b();
            while (iterator.hasNext()) {
                oy oy2 = iterator.next();
                class_2433 = oy2.process(class_2434, class_23382, class_23502);
                if (stringArray == null) {
                    class_2434 = class_2433;
                    if (stringArray == null) continue;
                }
                break block2;
            }
            class_2433 = class_2434;
        }
        return class_2433;
    }

    private boolean cHY(class_243 class_2432, class_2338 class_23382, class_2350 class_23502, boolean bl, double d) {
        boolean bl2;
        block17: {
            block18: {
                String[] stringArray;
                block16: {
                    block15: {
                        class_3965 class_39652;
                        block14: {
                            block13: {
                                double d2;
                                block12: {
                                    long l = baTmf ^ 0x617D3CA293DCL;
                                    double d3 = jg.bBH(rD.dlmvG.field_1724.method_33571(), class_2432);
                                    stringArray = oz.b();
                                    try {
                                        d2 = d3 == d ? 0 : (d3 > d ? 1 : -1);
                                        if (stringArray != null) break block12;
                                        if (d2 <= 0) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    d2 = 1.0;
                                }
                                return (boolean)d2;
                            }
                            class_243 class_2433 = class_2432.method_1023((double)class_23502.method_10148() * 0.001, (double)class_23502.method_10164() * 0.001, (double)class_23502.method_10165() * 0.001);
                            class_3959 class_39592 = new class_3959(rD.dlmvG.field_1724.method_33571(), class_2433, class_3959.class_3960.field_17559, class_3959.class_242.field_1348, (class_1297)rD.dlmvG.field_1724);
                            class_3965 class_39653 = this.cHZ(class_39592);
                            try {
                                try {
                                    class_39652 = class_39653;
                                    if (stringArray != null) break block14;
                                    if (class_39652.method_17783() != class_239.class_240.field_1332) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                class_39652 = class_39653;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                        }
                        try {
                            try {
                                bl2 = class_39652.method_17777().equals((Object)class_23382);
                                if (stringArray != null) break block16;
                                if (!bl2) break block15;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                    }
                    bl2 = bl;
                }
                try {
                    if (stringArray != null) break block17;
                    if (bl2) break block18;
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
                bl2 = true;
                break block17;
            }
            bl2 = false;
        }
        return bl2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(oC.class, "cIk", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
