/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
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
        long l2 = AQdMn ^ 0x69286E6937DAL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 7196469634155587222L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                nGLOr = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public static List<Vec3d> cNi(Vec3d vec3d, Box box, int n2) {
        ArrayList<Vec3d> arrayList;
        double d2;
        double d3;
        double d4;
        double d5;
        double d6;
        int n3;
        boolean bl2;
        ArrayList<Vec3d> arrayList2;
        block86: {
            double d7;
            block87: {
                block84: {
                    double d8;
                    block85: {
                        double d9;
                        double d10;
                        block82: {
                            double d11;
                            block83: {
                                block80: {
                                    double d12;
                                    block81: {
                                        block78: {
                                            double d13;
                                            block79: {
                                                double d14;
                                                double d15;
                                                block76: {
                                                    int n4;
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
                                                                                                        double d16;
                                                                                                        block62: {
                                                                                                            block63: {
                                                                                                                double d17;
                                                                                                                block60: {
                                                                                                                    block61: {
                                                                                                                        double d18;
                                                                                                                        block58: {
                                                                                                                            block59: {
                                                                                                                                double d19;
                                                                                                                                block56: {
                                                                                                                                    block57: {
                                                                                                                                        double d20;
                                                                                                                                        block54: {
                                                                                                                                            block55: {
                                                                                                                                                double d21;
                                                                                                                                                block52: {
                                                                                                                                                    block53: {
                                                                                                                                                        long l2 = AQdMn ^ 0x270AF5460851L;
                                                                                                                                                        arrayList2 = new ArrayList<Vec3d>();
                                                                                                                                                        bl2 = ph.cNp();
                                                                                                                                                        try {
                                                                                                                                                            double d22 = vec3d.x - box.minX;
                                                                                                                                                            d21 = d22 == 0.0 ? 0 : (d22 < 0.0 ? -1 : 1);
                                                                                                                                                            if (!bl2) break block52;
                                                                                                                                                            if (d21 >= 0) break block53;
                                                                                                                                                        }
                                                                                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                                                                                            throw pf.cNk(illegalStateException);
                                                                                                                                                        }
                                                                                                                                                        d21 = 1.0;
                                                                                                                                                        break block52;
                                                                                                                                                    }
                                                                                                                                                    d21 = 0.0;
                                                                                                                                                }
                                                                                                                                                d15 = d21;
                                                                                                                                                try {
                                                                                                                                                    double d23 = vec3d.x - box.maxX;
                                                                                                                                                    d20 = d23 == 0.0 ? 0 : (d23 > 0.0 ? 1 : -1);
                                                                                                                                                    if (!bl2) break block54;
                                                                                                                                                    if (d20 <= 0) break block55;
                                                                                                                                                }
                                                                                                                                                catch (IllegalStateException illegalStateException) {
                                                                                                                                                    throw pf.cNk(illegalStateException);
                                                                                                                                                }
                                                                                                                                                d20 = 1.0;
                                                                                                                                                break block54;
                                                                                                                                            }
                                                                                                                                            d20 = 0.0;
                                                                                                                                        }
                                                                                                                                        d13 = d20;
                                                                                                                                        try {
                                                                                                                                            double d24 = vec3d.y - box.minY;
                                                                                                                                            d19 = d24 == 0.0 ? 0 : (d24 < 0.0 ? -1 : 1);
                                                                                                                                            if (!bl2) break block56;
                                                                                                                                            if (d19 >= 0) break block57;
                                                                                                                                        }
                                                                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                                                                            throw pf.cNk(illegalStateException);
                                                                                                                                        }
                                                                                                                                        d19 = 1.0;
                                                                                                                                        break block56;
                                                                                                                                    }
                                                                                                                                    d19 = 0.0;
                                                                                                                                }
                                                                                                                                d12 = d19;
                                                                                                                                try {
                                                                                                                                    double d25 = vec3d.y - box.maxY;
                                                                                                                                    d18 = d25 == 0.0 ? 0 : (d25 > 0.0 ? 1 : -1);
                                                                                                                                    if (!bl2) break block58;
                                                                                                                                    if (d18 <= 0) break block59;
                                                                                                                                }
                                                                                                                                catch (IllegalStateException illegalStateException) {
                                                                                                                                    throw pf.cNk(illegalStateException);
                                                                                                                                }
                                                                                                                                d18 = 1.0;
                                                                                                                                break block58;
                                                                                                                            }
                                                                                                                            d18 = 0.0;
                                                                                                                        }
                                                                                                                        d11 = d18;
                                                                                                                        try {
                                                                                                                            double d26 = vec3d.z - box.minZ;
                                                                                                                            d17 = d26 == 0.0 ? 0 : (d26 < 0.0 ? -1 : 1);
                                                                                                                            if (!bl2) break block60;
                                                                                                                            if (d17 >= 0) break block61;
                                                                                                                        }
                                                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                                                            throw pf.cNk(illegalStateException);
                                                                                                                        }
                                                                                                                        d17 = 1.0;
                                                                                                                        break block60;
                                                                                                                    }
                                                                                                                    d17 = 0.0;
                                                                                                                }
                                                                                                                d8 = d17;
                                                                                                                try {
                                                                                                                    double d27 = vec3d.z - box.maxZ;
                                                                                                                    d16 = d27 == 0.0 ? 0 : (d27 > 0.0 ? 1 : -1);
                                                                                                                    if (!bl2) break block62;
                                                                                                                    if (d16 <= 0) break block63;
                                                                                                                }
                                                                                                                catch (IllegalStateException illegalStateException) {
                                                                                                                    throw pf.cNk(illegalStateException);
                                                                                                                }
                                                                                                                d16 = 1.0;
                                                                                                                break block62;
                                                                                                            }
                                                                                                            d16 = 0.0;
                                                                                                        }
                                                                                                        d7 = d16;
                                                                                                        n4 = 0;
                                                                                                        try {
                                                                                                            d14 = d15;
                                                                                                            if (!bl2) break block64;
                                                                                                            if (d14 == false) break block65;
                                                                                                        }
                                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                                            throw pf.cNk(illegalStateException);
                                                                                                        }
                                                                                                        ++n4;
                                                                                                    }
                                                                                                    d14 = d13;
                                                                                                }
                                                                                                try {
                                                                                                    if (!bl2) break block66;
                                                                                                    if (d14 == false) break block67;
                                                                                                }
                                                                                                catch (IllegalStateException illegalStateException) {
                                                                                                    throw pf.cNk(illegalStateException);
                                                                                                }
                                                                                                ++n4;
                                                                                            }
                                                                                            d14 = d12;
                                                                                        }
                                                                                        try {
                                                                                            if (!bl2) break block68;
                                                                                            if (d14 == false) break block69;
                                                                                        }
                                                                                        catch (IllegalStateException illegalStateException) {
                                                                                            throw pf.cNk(illegalStateException);
                                                                                        }
                                                                                        ++n4;
                                                                                    }
                                                                                    d14 = d11;
                                                                                }
                                                                                try {
                                                                                    if (!bl2) break block70;
                                                                                    if (d14 == false) break block71;
                                                                                }
                                                                                catch (IllegalStateException illegalStateException) {
                                                                                    throw pf.cNk(illegalStateException);
                                                                                }
                                                                                ++n4;
                                                                            }
                                                                            d14 = d8;
                                                                        }
                                                                        try {
                                                                            if (!bl2) break block72;
                                                                            if (d14 == false) break block73;
                                                                        }
                                                                        catch (IllegalStateException illegalStateException) {
                                                                            throw pf.cNk(illegalStateException);
                                                                        }
                                                                        ++n4;
                                                                    }
                                                                    d14 = d7;
                                                                }
                                                                try {
                                                                    if (!bl2) break block74;
                                                                    if (d14 == false) break block75;
                                                                }
                                                                catch (IllegalStateException illegalStateException) {
                                                                    throw pf.cNk(illegalStateException);
                                                                }
                                                                ++n4;
                                                            }
                                                            d14 = n4;
                                                        }
                                                        try {
                                                            if (!bl2) break block76;
                                                            if (d14 != false) break block77;
                                                        }
                                                        catch (IllegalStateException illegalStateException) {
                                                            throw pf.cNk(illegalStateException);
                                                        }
                                                        n4 = (int)nGLOr;
                                                        d7 = 1.0;
                                                        d8 = 1.0;
                                                        d11 = 1.0;
                                                        d12 = 1.0;
                                                        d13 = 1.0;
                                                        d15 = 1.0;
                                                    }
                                                    d14 = Math.max(4, n2 / n4);
                                                }
                                                double d28 = d14;
                                                n3 = (int)Math.ceil(Math.sqrt(d28));
                                                double d29 = 0.01;
                                                d6 = box.minX + d29;
                                                d5 = box.maxX - d29;
                                                d4 = box.minY + d29;
                                                d3 = box.maxY - d29;
                                                d10 = box.minZ + d29;
                                                d9 = box.maxZ - d29;
                                                try {
                                                    try {
                                                        d2 = d15;
                                                        if (!bl2) break block78;
                                                        if (d2 == false) break block79;
                                                    }
                                                    catch (IllegalStateException illegalStateException) {
                                                        throw pf.cNk(illegalStateException);
                                                    }
                                                    pf.cNj(arrayList2, n3, box.minX, box.minX, d4, d3, d10, d9, pf$vt.LTsnB);
                                                }
                                                catch (IllegalStateException illegalStateException) {
                                                    throw pf.cNk(illegalStateException);
                                                }
                                            }
                                            d2 = d13;
                                        }
                                        try {
                                            try {
                                                if (!bl2) break block80;
                                                if (d2 == false) break block81;
                                            }
                                            catch (IllegalStateException illegalStateException) {
                                                throw pf.cNk(illegalStateException);
                                            }
                                            pf.cNj(arrayList2, n3, box.maxX, box.maxX, d4, d3, d10, d9, pf$vt.LTsnB);
                                        }
                                        catch (IllegalStateException illegalStateException) {
                                            throw pf.cNk(illegalStateException);
                                        }
                                    }
                                    d2 = d12;
                                }
                                try {
                                    try {
                                        if (!bl2) break block82;
                                        if (d2 == false) break block83;
                                    }
                                    catch (IllegalStateException illegalStateException) {
                                        throw pf.cNk(illegalStateException);
                                    }
                                    pf.cNj(arrayList2, n3, d6, d5, box.minY, box.minY, d10, d9, pf$vt.ApZth);
                                }
                                catch (IllegalStateException illegalStateException) {
                                    throw pf.cNk(illegalStateException);
                                }
                            }
                            d2 = d11;
                        }
                        try {
                            try {
                                if (!bl2) break block84;
                                if (d2 == false) break block85;
                            }
                            catch (IllegalStateException illegalStateException) {
                                throw pf.cNk(illegalStateException);
                            }
                            pf.cNj(arrayList2, n3, d6, d5, box.maxY, box.maxY, d10, d9, pf$vt.ApZth);
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw pf.cNk(illegalStateException);
                        }
                    }
                    d2 = d8;
                }
                try {
                    try {
                        if (!bl2) break block86;
                        if (d2 == false) break block87;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw pf.cNk(illegalStateException);
                    }
                    pf.cNj(arrayList2, n3, d6, d5, d4, d3, box.minZ, box.minZ, pf$vt.cZCQb);
                }
                catch (IllegalStateException illegalStateException) {
                    throw pf.cNk(illegalStateException);
                }
            }
            d2 = d7;
        }
        try {
            if (d2 != false) {
                pf.cNj(arrayList2, n3, d6, d5, d4, d3, box.maxZ, box.maxZ, pf$vt.cZCQb);
            }
        }
        catch (IllegalStateException illegalStateException) {
            throw pf.cNk(illegalStateException);
        }
        try {
            arrayList = arrayList2;
            if (!bl2) {
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
    private static void cNj(List<Vec3d> var0, int var1_1, double var2_2, double var4_3, double var6_4, double var8_5, double var10_6, double var12_7, pf$vt var14_8) {
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }
}

