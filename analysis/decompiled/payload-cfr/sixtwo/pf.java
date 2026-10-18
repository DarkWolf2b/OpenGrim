/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.ArrayList;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_238;
import net.minecraft.class_243;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.pf$vt;
import sixtwo.ph;

public final class pf {
    private static final long AQdMn = gb.aYR(-2866706717294193310L, -2177333281957051479L, MethodHandles.lookup().lookupClass()).a(228981521064160L);
    private static final long nGLOr;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = AQdMn ^ 0x69286E6937DAL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = 7196469634155587222L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                nGLOr = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public static List<class_243> cNi(class_243 class_2432, class_238 class_2382, int n) {
        ArrayList<class_243> arrayList;
        double d;
        double d2;
        double d3;
        double d4;
        double d5;
        int n2;
        boolean bl;
        ArrayList<class_243> arrayList2;
        block86: {
            double d6;
            block87: {
                block84: {
                    double d7;
                    block85: {
                        double d8;
                        double d9;
                        block82: {
                            double d10;
                            block83: {
                                block80: {
                                    double d11;
                                    block81: {
                                        block78: {
                                            double d12;
                                            block79: {
                                                double d13;
                                                double d14;
                                                block76: {
                                                    int n3;
                                                    block77: {
                                                        block74: {
                                                            block75: {
                                                                block72: {
                                                                    block73: {
                                                                        block70: {
                                                                            block71: {
                                                                                block68: {
                                                                                    block69: {
                                                                                        block66: {
                                                                                            block67: {
                                                                                                block64: {
                                                                                                    block65: {
                                                                                                        double d15;
                                                                                                        block62: {
                                                                                                            block63: {
                                                                                                                double d16;
                                                                                                                block60: {
                                                                                                                    block61: {
                                                                                                                        double d17;
                                                                                                                        block58: {
                                                                                                                            block59: {
                                                                                                                                double d18;
                                                                                                                                block56: {
                                                                                                                                    block57: {
                                                                                                                                        double d19;
                                                                                                                                        block54: {
                                                                                                                                            block55: {
                                                                                                                                                double d20;
                                                                                                                                                block52: {
                                                                                                                                                    block53: {
                                                                                                                                                        long l = AQdMn ^ 0x270AF5460851L;
                                                                                                                                                        arrayList2 = new ArrayList<class_243>();
                                                                                                                                                        bl = ph.cNp();
                                                                                                                                                        try {
                                                                                                                                                            double d21 = class_2432.field_1352 - class_2382.field_1323;
                                                                                                                                                            d20 = d21 == 0.0 ? 0 : (d21 < 0.0 ? -1 : 1);
                                                                                                                                                            if (!bl) break block52;
                                                                                                                                                            if (d20 >= 0) break block53;
                                                                                                                                                        }
                                                                                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                                                                                            throw pf.cNk(illegalStateException);
                                                                                                                                                        }
                                                                                                                                                        d20 = 1.0;
                                                                                                                                                        break block52;
                                                                                                                                                    }
                                                                                                                                                    d20 = 0.0;
                                                                                                                                                }
                                                                                                                                                d14 = d20;
                                                                                                                                                try {
                                                                                                                                                    double d22 = class_2432.field_1352 - class_2382.field_1320;
                                                                                                                                                    d19 = d22 == 0.0 ? 0 : (d22 > 0.0 ? 1 : -1);
                                                                                                                                                    if (!bl) break block54;
                                                                                                                                                    if (d19 <= 0) break block55;
                                                                                                                                                }
                                                                                                                                                catch (IllegalStateException illegalStateException) {
                                                                                                                                                    throw pf.cNk(illegalStateException);
                                                                                                                                                }
                                                                                                                                                d19 = 1.0;
                                                                                                                                                break block54;
                                                                                                                                            }
                                                                                                                                            d19 = 0.0;
                                                                                                                                        }
                                                                                                                                        d12 = d19;
                                                                                                                                        try {
                                                                                                                                            double d23 = class_2432.field_1351 - class_2382.field_1322;
                                                                                                                                            d18 = d23 == 0.0 ? 0 : (d23 < 0.0 ? -1 : 1);
                                                                                                                                            if (!bl) break block56;
                                                                                                                                            if (d18 >= 0) break block57;
                                                                                                                                        }
                                                                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                                                                            throw pf.cNk(illegalStateException);
                                                                                                                                        }
                                                                                                                                        d18 = 1.0;
                                                                                                                                        break block56;
                                                                                                                                    }
                                                                                                                                    d18 = 0.0;
                                                                                                                                }
                                                                                                                                d11 = d18;
                                                                                                                                try {
                                                                                                                                    double d24 = class_2432.field_1351 - class_2382.field_1325;
                                                                                                                                    d17 = d24 == 0.0 ? 0 : (d24 > 0.0 ? 1 : -1);
                                                                                                                                    if (!bl) break block58;
                                                                                                                                    if (d17 <= 0) break block59;
                                                                                                                                }
                                                                                                                                catch (IllegalStateException illegalStateException) {
                                                                                                                                    throw pf.cNk(illegalStateException);
                                                                                                                                }
                                                                                                                                d17 = 1.0;
                                                                                                                                break block58;
                                                                                                                            }
                                                                                                                            d17 = 0.0;
                                                                                                                        }
                                                                                                                        d10 = d17;
                                                                                                                        try {
                                                                                                                            double d25 = class_2432.field_1350 - class_2382.field_1321;
                                                                                                                            d16 = d25 == 0.0 ? 0 : (d25 < 0.0 ? -1 : 1);
                                                                                                                            if (!bl) break block60;
                                                                                                                            if (d16 >= 0) break block61;
                                                                                                                        }
                                                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                                                            throw pf.cNk(illegalStateException);
                                                                                                                        }
                                                                                                                        d16 = 1.0;
                                                                                                                        break block60;
                                                                                                                    }
                                                                                                                    d16 = 0.0;
                                                                                                                }
                                                                                                                d7 = d16;
                                                                                                                try {
                                                                                                                    double d26 = class_2432.field_1350 - class_2382.field_1324;
                                                                                                                    d15 = d26 == 0.0 ? 0 : (d26 > 0.0 ? 1 : -1);
                                                                                                                    if (!bl) break block62;
                                                                                                                    if (d15 <= 0) break block63;
                                                                                                                }
                                                                                                                catch (IllegalStateException illegalStateException) {
                                                                                                                    throw pf.cNk(illegalStateException);
                                                                                                                }
                                                                                                                d15 = 1.0;
                                                                                                                break block62;
                                                                                                            }
                                                                                                            d15 = 0.0;
                                                                                                        }
                                                                                                        d6 = d15;
                                                                                                        n3 = 0;
                                                                                                        try {
                                                                                                            d13 = d14;
                                                                                                            if (!bl) break block64;
                                                                                                            if (d13 == false) break block65;
                                                                                                        }
                                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                                            throw pf.cNk(illegalStateException);
                                                                                                        }
                                                                                                        ++n3;
                                                                                                    }
                                                                                                    d13 = d12;
                                                                                                }
                                                                                                try {
                                                                                                    if (!bl) break block66;
                                                                                                    if (d13 == false) break block67;
                                                                                                }
                                                                                                catch (IllegalStateException illegalStateException) {
                                                                                                    throw pf.cNk(illegalStateException);
                                                                                                }
                                                                                                ++n3;
                                                                                            }
                                                                                            d13 = d11;
                                                                                        }
                                                                                        try {
                                                                                            if (!bl) break block68;
                                                                                            if (d13 == false) break block69;
                                                                                        }
                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                            throw pf.cNk(illegalStateException);
                                                                                        }
                                                                                        ++n3;
                                                                                    }
                                                                                    d13 = d10;
                                                                                }
                                                                                try {
                                                                                    if (!bl) break block70;
                                                                                    if (d13 == false) break block71;
                                                                                }
                                                                                catch (IllegalStateException illegalStateException) {
                                                                                    throw pf.cNk(illegalStateException);
                                                                                }
                                                                                ++n3;
                                                                            }
                                                                            d13 = d7;
                                                                        }
                                                                        try {
                                                                            if (!bl) break block72;
                                                                            if (d13 == false) break block73;
                                                                        }
                                                                        catch (IllegalStateException illegalStateException) {
                                                                            throw pf.cNk(illegalStateException);
                                                                        }
                                                                        ++n3;
                                                                    }
                                                                    d13 = d6;
                                                                }
                                                                try {
                                                                    if (!bl) break block74;
                                                                    if (d13 == false) break block75;
                                                                }
                                                                catch (IllegalStateException illegalStateException) {
                                                                    throw pf.cNk(illegalStateException);
                                                                }
                                                                ++n3;
                                                            }
                                                            d13 = n3;
                                                        }
                                                        try {
                                                            if (!bl) break block76;
                                                            if (d13 != false) break block77;
                                                        }
                                                        catch (IllegalStateException illegalStateException) {
                                                            throw pf.cNk(illegalStateException);
                                                        }
                                                        n3 = (int)nGLOr;
                                                        d6 = 1.0;
                                                        d7 = 1.0;
                                                        d10 = 1.0;
                                                        d11 = 1.0;
                                                        d12 = 1.0;
                                                        d14 = 1.0;
                                                    }
                                                    d13 = Math.max(4, n / n3);
                                                }
                                                double d27 = d13;
                                                n2 = (int)Math.ceil(Math.sqrt(d27));
                                                double d28 = 0.01;
                                                d5 = class_2382.field_1323 + d28;
                                                d4 = class_2382.field_1320 - d28;
                                                d3 = class_2382.field_1322 + d28;
                                                d2 = class_2382.field_1325 - d28;
                                                d9 = class_2382.field_1321 + d28;
                                                d8 = class_2382.field_1324 - d28;
                                                try {
                                                    try {
                                                        d = d14;
                                                        if (!bl) break block78;
                                                        if (d == false) break block79;
                                                    }
                                                    catch (IllegalStateException illegalStateException) {
                                                        throw pf.cNk(illegalStateException);
                                                    }
                                                    pf.cNj(arrayList2, n2, class_2382.field_1323, class_2382.field_1323, d3, d2, d9, d8, pf$vt.LTsnB);
                                                }
                                                catch (IllegalStateException illegalStateException) {
                                                    throw pf.cNk(illegalStateException);
                                                }
                                            }
                                            d = d12;
                                        }
                                        try {
                                            try {
                                                if (!bl) break block80;
                                                if (d == false) break block81;
                                            }
                                            catch (IllegalStateException illegalStateException) {
                                                throw pf.cNk(illegalStateException);
                                            }
                                            pf.cNj(arrayList2, n2, class_2382.field_1320, class_2382.field_1320, d3, d2, d9, d8, pf$vt.LTsnB);
                                        }
                                        catch (IllegalStateException illegalStateException) {
                                            throw pf.cNk(illegalStateException);
                                        }
                                    }
                                    d = d11;
                                }
                                try {
                                    try {
                                        if (!bl) break block82;
                                        if (d == false) break block83;
                                    }
                                    catch (IllegalStateException illegalStateException) {
                                        throw pf.cNk(illegalStateException);
                                    }
                                    pf.cNj(arrayList2, n2, d5, d4, class_2382.field_1322, class_2382.field_1322, d9, d8, pf$vt.ApZth);
                                }
                                catch (IllegalStateException illegalStateException) {
                                    throw pf.cNk(illegalStateException);
                                }
                            }
                            d = d10;
                        }
                        try {
                            try {
                                if (!bl) break block84;
                                if (d == false) break block85;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw pf.cNk(illegalStateException);
                            }
                            pf.cNj(arrayList2, n2, d5, d4, class_2382.field_1325, class_2382.field_1325, d9, d8, pf$vt.ApZth);
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw pf.cNk(illegalStateException);
                        }
                    }
                    d = d7;
                }
                try {
                    try {
                        if (!bl) break block86;
                        if (d == false) break block87;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw pf.cNk(illegalStateException);
                    }
                    pf.cNj(arrayList2, n2, d5, d4, d3, d2, class_2382.field_1321, class_2382.field_1321, pf$vt.cZCQb);
                }
                catch (IllegalStateException illegalStateException) {
                    throw pf.cNk(illegalStateException);
                }
            }
            d = d6;
        }
        try {
            if (d != false) {
                pf.cNj(arrayList2, n2, d5, d4, d3, d2, class_2382.field_1324, class_2382.field_1324, pf$vt.cZCQb);
            }
        }
        catch (IllegalStateException illegalStateException) {
            throw pf.cNk(illegalStateException);
        }
        try {
            arrayList = arrayList2;
            if (!bl) {
                iS.bwK("eIYnj");
            }
        }
        catch (IllegalStateException illegalStateException) {
            throw pf.cNk(illegalStateException);
        }
        return arrayList;
    }

    private static IllegalStateException cNk(IllegalStateException illegalStateException) {
        return illegalStateException;
    }

    /*
     * Exception decompiling
     */
    private static void cNj(List<class_243> var0, int var1_1, double var2_2, double var4_3, double var6_4, double var8_5, double var10_6, double var12_7, pf$vt var14_8) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [4[CASE]], but top level block is 0[TRYBLOCK]
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
}
