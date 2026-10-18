/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.jg;
import sixtwo.oA;
import sixtwo.oB;
import sixtwo.oD;
import sixtwo.of;
import sixtwo.ox;
import sixtwo.oz;
import sixtwo.rD;

public class oj {
    private oz awZhb;
    private static final long EBkhS = gb.aYR(8080834934779996922L, -4925974876756873979L, MethodHandles.lookup().lookupClass()).a(202294447517771L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public boolean cEr(oD oD2, oB oB2, boolean bl2) {
        boolean bl3;
        block4: {
            block5: {
                long l2 = EBkhS ^ 0x165BF6FB55BCL;
                String[] stringArray = of.cCL();
                try {
                    try {
                        bl3 = this.cEy();
                        if (stringArray == null) break block4;
                        if (!bl3) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    return oA.cHC(this.cED(), oD2, bl2).cHF(oB2).cHJ(this.awZhb).cHK();
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            bl3 = false;
        }
        return bl3;
    }

    private static MatchException cEG(MatchException matchException) {
        return matchException;
    }

    public BlockPos cED() {
        oj oj2;
        block4: {
            block5: {
                long l2 = EBkhS ^ 0x7A0533C1B63L;
                String[] stringArray = of.cCL();
                try {
                    try {
                        oj2 = this;
                        if (stringArray == null) break block4;
                        if (oj2.cEy()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    return BlockPos.ORIGIN;
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            oj2 = this;
        }
        return oj2.awZhb.blockPos();
    }

    public boolean cEy() {
        boolean bl2;
        long l2 = EBkhS ^ 0x1F702781771CL;
        try {
            bl2 = this.awZhb != null;
        }
        catch (MatchException matchException) {
            throw oj.cEG(matchException);
        }
        return bl2;
    }

    public void cEx() {
        this.awZhb = null;
    }

    public Vec3d cEE() {
        Vec3d vec3d;
        block6: {
            block5: {
                oj oj2;
                block4: {
                    long l2 = EBkhS ^ 0x68FDC7FE45A7L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oj2 = this;
                            if (stringArray == null) break block4;
                            if (!oj2.cEy()) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        oj2 = this;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                vec3d = oj2.awZhb.hitPoint();
                break block6;
            }
            vec3d = Vec3d.ZERO;
        }
        return vec3d;
    }

    public oz cEC() {
        return this.awZhb;
    }

    public boolean cEt() {
        double d2;
        block6: {
            ClientPlayerEntity clientPlayerEntity;
            block4: {
                block5: {
                    long l2 = EBkhS ^ 0x48C1E64D2AF9L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            clientPlayerEntity = rD.dlmvG.player;
                            if (stringArray == null) break block4;
                            if (clientPlayerEntity != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        d2 = 4.5;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                clientPlayerEntity = rD.dlmvG.player;
            }
            d2 = (float)clientPlayerEntity.getBlockInteractionRange();
        }
        double d3 = d2;
        return this.cEu(d3);
    }

    public BlockHitResult cEB() {
        BlockHitResult blockHitResult;
        block6: {
            oz oz2;
            block4: {
                block5: {
                    long l2 = EBkhS ^ 0x27F983B139D5L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oz2 = this.awZhb;
                            if (stringArray == null) break block4;
                            if (oz2 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        blockHitResult = null;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                oz2 = this.awZhb;
            }
            blockHitResult = oz2.blockHitResult();
        }
        return blockHitResult;
    }

    public boolean cEu(double d2) {
        oz oz2;
        block10: {
            oz oz3;
            block11: {
                oj oj2;
                String[] stringArray;
                block8: {
                    block9: {
                        long l2 = EBkhS ^ 0x57330492C7F1L;
                        stringArray = of.cCL();
                        try {
                            try {
                                oj2 = this;
                                if (stringArray == null) break block8;
                                if (oj2.cEy()) break block9;
                            }
                            catch (MatchException matchException) {
                                throw oj.cEG(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                    }
                    oj2 = this;
                }
                oz3 = oj2.cEC();
                try {
                    try {
                        oz2 = oz3;
                        if (stringArray == null) break block10;
                        if (oz2 != null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            oz2 = oz3;
        }
        Vec3d vec3d = oz2.hitPoint();
        Box box = Box.of((Vec3d)vec3d, (double)0.1f, (double)0.1f, (double)0.1f);
        return ox.cHb(box, d2);
    }

    public void cEz() {
        float f2;
        block6: {
            ClientPlayerEntity clientPlayerEntity;
            block4: {
                block5: {
                    long l2 = EBkhS ^ 0x697B4ECEE6C1L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            clientPlayerEntity = rD.dlmvG.player;
                            if (stringArray == null) break block4;
                            if (clientPlayerEntity != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        f2 = 4.5f;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                clientPlayerEntity = rD.dlmvG.player;
            }
            f2 = (float)clientPlayerEntity.getBlockInteractionRange();
        }
        float f3 = f2;
        this.cEA(f3);
    }

    public void cEv(oz oz2) {
        block4: {
            block5: {
                long l2 = EBkhS ^ 0x38FFDAC176A3L;
                String[] stringArray = of.cCL();
                try {
                    try {
                        if (stringArray == null) break block4;
                        if (oz2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    this.cEx();
                    return;
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            this.awZhb = oz2;
        }
    }

    public void cEw(BlockHitResult blockHitResult) {
        oz oz2;
        long l2 = EBkhS ^ 0x4C702DA7E9CAL;
        try {
            oj oj2 = this;
            oz2 = blockHitResult == null ? null : new oz(blockHitResult.getBlockPos(), blockHitResult);
        }
        catch (MatchException matchException) {
            throw oj.cEG(matchException);
        }
        oj2.awZhb = oz2;
    }

    public void cEs(oD oD2, oB oB2, boolean bl2) {
        block5: {
            oj oj2;
            block4: {
                long l2 = EBkhS ^ 0x46AC081B1EFDL;
                String[] stringArray = of.cCL();
                try {
                    try {
                        oj2 = this;
                        if (stringArray == null) break block4;
                        if (!oj2.cEy()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    oj2 = this;
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            oz oz2 = oA.cHD(oj2.cED(), oD2, bl2, blockState -> true).cHF(oB2).cHJ(this.awZhb).cHL();
            this.cEv(oz2);
        }
    }

    public void cEA(float f2) {
        block9: {
            oj oj2;
            block8: {
                boolean bl2;
                block6: {
                    String[] stringArray;
                    block7: {
                        long l2 = EBkhS ^ 0x9839351AA38L;
                        stringArray = of.cCL();
                        try {
                            bl2 = this.cEy();
                            if (stringArray == null) break block6;
                            if (bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        return;
                    }
                    try {
                        oj2 = this;
                        if (stringArray == null) break block8;
                        bl2 = jg.bBG(oj2.awZhb.hitPoint(), f2);
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                if (bl2) break block9;
                oj2 = this;
            }
            oj2.cEx();
        }
    }
}

