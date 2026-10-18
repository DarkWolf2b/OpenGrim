/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_2189
 *  net.minecraft.class_2246
 *  net.minecraft.class_2248
 *  net.minecraft.class_2338
 *  net.minecraft.class_243
 *  net.minecraft.class_4587
 *  net.minecraft.class_7833
 *  org.joml.Quaternionfc
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2189;
import net.minecraft.class_2246;
import net.minecraft.class_2248;
import net.minecraft.class_2338;
import net.minecraft.class_243;
import net.minecraft.class_4587;
import net.minecraft.class_7833;
import org.joml.Quaternionfc;
import sixtwo.cA;
import sixtwo.gb;
import sixtwo.jI;
import sixtwo.kG;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mp;
import sixtwo.mq;
import sixtwo.rD;

public class mm
extends mq
implements lG {
    private float nHHba;
    private final float xWRpb;
    private final int CTmHp;
    private final long VSmWz;
    private boolean cIWFA = false;
    private static int dQaMV;
    private static final long oEeog;
    private static final long ZRQxW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mm(class_243 class_2432, class_243 class_2433, mp mp2, float f, int n, cA cA2, cA cA3) {
        super(class_2432, class_2433, mp2, f);
        this.CTmHp = n;
        this.VSmWz = System.currentTimeMillis();
        this.nHHba = cA2.UN().floatValue();
        this.xWRpb = cA3.UN().floatValue();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        oEeog = gb.aYR(328948364182937956L, -1488710637705604069L, MethodHandles.lookup().lookupClass()).a(272021838087009L);
        long l = oEeog ^ 0x369D292021B8L;
        mm.clv(0);
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = -7482999287654472051L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                ZRQxW = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    @Override
    public void cls(class_4587 class_45872, float f) {
        float f2 = 0.07f;
        jI.bIs(class_45872, this.clL(f));
        class_45872.method_22905(f2, f2, f2);
        jI.bIt(class_45872, this.hMiLh / 2.0f);
        jI.bIu(class_45872);
        class_45872.method_22907((Quaternionfc)class_7833.field_40718.rotationDegrees(this.nHHba += f * this.xWRpb));
        jI.bIt(class_45872, -this.hMiLh / 2.0f);
    }

    public static void clv(int n) {
        dQaMV = n;
    }

    private boolean clt(double d, double d2, double d3) {
        boolean bl;
        block13: {
            block11: {
                class_2248 class_22482;
                class_2248 class_22483;
                block12: {
                    int n;
                    class_2248 class_22484;
                    block10: {
                        long l = oEeog ^ 0x18ACFF0F0C7L;
                        class_22484 = rD.dlmvG.field_1687.method_8320(class_2338.method_49637((double)d, (double)d2, (double)d3)).method_26204();
                        n = mm.clw();
                        try {
                            try {
                                class_22483 = class_22484;
                                if (n != 0) break block10;
                                if (class_22483 instanceof class_2189) break block11;
                            }
                            catch (MatchException matchException) {
                                throw mm.cly(matchException);
                            }
                            class_22483 = class_22484;
                        }
                        catch (MatchException matchException) {
                            throw mm.cly(matchException);
                        }
                    }
                    try {
                        try {
                            class_22482 = class_2246.field_10382;
                            if (n != 0) break block12;
                            if (class_22483 == class_22482) break block11;
                        }
                        catch (MatchException matchException) {
                            throw mm.cly(matchException);
                        }
                        class_22483 = class_22484;
                        class_22482 = class_2246.field_10164;
                    }
                    catch (MatchException matchException) {
                        throw mm.cly(matchException);
                    }
                }
                try {
                    if (class_22483 == class_22482) break block11;
                    bl = true;
                    break block13;
                }
                catch (MatchException matchException) {
                    throw mm.cly(matchException);
                }
            }
            bl = false;
        }
        return bl;
    }

    private static MatchException cly(MatchException matchException) {
        return matchException;
    }

    public static int clx() {
        int n = mm.clw();
        try {
            if (n == 0) {
                return 64;
            }
        }
        catch (MatchException matchException) {
            throw mm.cly(matchException);
        }
        return 0;
    }

    public long clu() {
        return this.VSmWz;
    }

    public static int clw() {
        return dQaMV;
    }

    /*
     * Exception decompiling
     */
    @Override
    public boolean clp() {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Extractable last case doesn't follow previous, and can't clone.
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.op3rewriters.SwitchReplacer.examineSwitchContiguity(SwitchReplacer.java:611)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.op3rewriters.SwitchReplacer.replaceRawSwitches(SwitchReplacer.java:94)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:517)
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

    @Override
    public void clr(class_4587 class_45872, float f, mG mG2) {
        class_45872.method_22903();
        this.cls(class_45872, f);
        double d = 2.0;
        double d2 = (double)this.hMiLh * d;
        double d3 = ((double)this.hMiLh - d2) / 2.0;
        double d4 = ((double)this.hMiLh - d2) / 2.0;
        XSRvt.bUH(kG.bTv(class_45872, d3, d4, 0.0, d2, d2).dtF(mG2).dtG());
        class_45872.method_22909();
    }

    @Override
    public void clq(class_4587 class_45872, float f, mG mG2) {
        class_45872.method_22903();
        this.cls(class_45872, f);
        XSRvt.bUH(kG.bTv(class_45872, 0.0, 0.0, 0.0, this.hMiLh, this.hMiLh).dtF(mG2).dtG());
        class_45872.method_22909();
    }
}
