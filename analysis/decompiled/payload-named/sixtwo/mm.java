/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.AirBlock
 *  net.minecraft.block.Block
 *  net.minecraft.block.Blocks
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.RotationAxis
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Quaternionfc
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.block.AirBlock;
import net.minecraft.block.Block;
import net.minecraft.block.Blocks;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;
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

    public mm(Vec3d vec3d, Vec3d vec3d2, mp mp2, float f2, int n2, cA cA2, cA cA3) {
        super(vec3d, vec3d2, mp2, f2);
        this.CTmHp = n2;
        this.VSmWz = System.currentTimeMillis();
        this.nHHba = cA2.UN().floatValue();
        this.xWRpb = cA3.UN().floatValue();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        oEeog = gb.aYR(328948364182937956L, -1488710637705604069L, MethodHandles.lookup().lookupClass()).a(272021838087009L);
        long l2 = oEeog ^ 0x369D292021B8L;
        mm.clv(0);
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = -7482999287654472051L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                ZRQxW = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    @Override
    public void cls(MatrixStack matrixStack, float f2) {
        float f3 = 0.07f;
        jI.bIs(matrixStack, this.clL(f2));
        matrixStack.scale(f3, f3, f3);
        jI.bIt(matrixStack, this.hMiLh / 2.0f);
        jI.bIu(matrixStack);
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Z.rotationDegrees(this.nHHba += f2 * this.xWRpb));
        jI.bIt(matrixStack, -this.hMiLh / 2.0f);
    }

    public static void clv(int n2) {
        dQaMV = n2;
    }

    private boolean clt(double d2, double d3, double d4) {
        boolean bl2;
        block13: {
            block11: {
                Block block;
                Block block2;
                block12: {
                    int n2;
                    Block block3;
                    block10: {
                        long l2 = oEeog ^ 0x18ACFF0F0C7L;
                        block3 = rD.dlmvG.world.getBlockState(BlockPos.ofFloored((double)d2, (double)d3, (double)d4)).getBlock();
                        n2 = mm.clw();
                        try {
                            try {
                                block2 = block3;
                                if (n2 != 0) break block10;
                                if (block2 instanceof AirBlock) break block11;
                            }
                            catch (MatchException matchException) {
                                throw mm.cly(matchException);
                            }
                            block2 = block3;
                        }
                        catch (MatchException matchException) {
                            throw mm.cly(matchException);
                        }
                    }
                    try {
                        try {
                            block = Blocks.WATER;
                            if (n2 != 0) break block12;
                            if (block2 == block) break block11;
                        }
                        catch (MatchException matchException) {
                            throw mm.cly(matchException);
                        }
                        block2 = block3;
                        block = Blocks.LAVA;
                    }
                    catch (MatchException matchException) {
                        throw mm.cly(matchException);
                    }
                }
                try {
                    if (block2 == block) break block11;
                    bl2 = true;
                    break block13;
                }
                catch (MatchException matchException) {
                    throw mm.cly(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException cly(MatchException matchException) {
        return matchException;
    }

    public static int clx() {
        int n2 = mm.clw();
        try {
            if (n2 == 0) {
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    @Override
    public void clr(MatrixStack matrixStack, float f2, mG mG2) {
        matrixStack.push();
        this.cls(matrixStack, f2);
        double d2 = 2.0;
        double d3 = (double)this.hMiLh * d2;
        double d4 = ((double)this.hMiLh - d3) / 2.0;
        double d5 = ((double)this.hMiLh - d3) / 2.0;
        XSRvt.bUH(kG.bTv(matrixStack, d4, d5, 0.0, d3, d3).dtF(mG2).dtG());
        matrixStack.pop();
    }

    @Override
    public void clq(MatrixStack matrixStack, float f2, mG mG2) {
        matrixStack.push();
        this.cls(matrixStack, f2);
        XSRvt.bUH(kG.bTv(matrixStack, 0.0, 0.0, 0.0, this.hMiLh, this.hMiLh).dtF(mG2).dtG());
        matrixStack.pop();
    }
}

