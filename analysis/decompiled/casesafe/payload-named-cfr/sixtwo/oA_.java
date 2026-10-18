/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Predicate;
import net.minecraft.block.BlockState;
import net.minecraft.util.math.BlockPos;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.oB;
import sixtwo.oC;
import sixtwo.oD;
import sixtwo.oy;
import sixtwo.oz;

public class oA {
    private static final oC aLdiM;
    private final BlockPos QzHgl;
    private oD fhmDl = oD.pxPhl;
    private oB zwhrf = oB.LwHxs;
    private boolean xUADK = false;
    private Predicate<BlockState> TgQUV = oC.djrGf;
    private final List<oy> whCJw = new ArrayList<oy>();
    private oz Tpyyr;
    private static final long vNCDT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private oA(BlockPos blockPos) {
        this.QzHgl = blockPos;
    }

    static {
        vNCDT = gb.aYR(8405173992199691241L, -4794170450468326090L, MethodHandles.lookup().lookupClass()).a(136406394027844L);
        aLdiM = new oC();
    }

    public oA cHI(oy oy2) {
        long l2 = vNCDT ^ 0x59846435C13L;
        try {
            if (oy2 != null) {
                this.whCJw.add(oy2);
            }
        }
        catch (MatchException matchException) {
            throw oA.cHM(matchException);
        }
        return this;
    }

    public oA cHH(Predicate<BlockState> predicate) {
        this.TgQUV = predicate;
        return this;
    }

    public oA cHE(oD oD2) {
        this.fhmDl = oD2;
        return this;
    }

    private static MatchException cHM(MatchException matchException) {
        return matchException;
    }

    public static oA cHB(BlockPos blockPos) {
        return new oA(blockPos);
    }

    public oA cHG(boolean bl2) {
        this.xUADK = bl2;
        return this;
    }

    public static oA cHC(BlockPos blockPos, oD oD2, boolean bl2) {
        return oA.cHD(blockPos, oD2, bl2, oC.djrGf);
    }

    public oA cHF(oB oB2) {
        this.zwhrf = oB2;
        return this;
    }

    public oA cHJ(oz oz2) {
        this.Tpyyr = oz2;
        return this;
    }

    public boolean cHK() {
        boolean bl2;
        long l2 = vNCDT ^ 0x54E5F0ED1B2FL;
        String[] stringArray = oz.b();
        try {
            bl2 = aLdiM.cHT(this.QzHgl, this.fhmDl, this.zwhrf, this.xUADK, this.TgQUV, this.whCJw, this.Tpyyr) != null;
        }
        catch (MatchException matchException) {
            throw oA.cHM(matchException);
        }
        try {
            if (iS.bwL() == null) {
                oz.b(new String[5]);
            }
        }
        catch (MatchException matchException) {
            throw oA.cHM(matchException);
        }
        return bl2;
    }

    public static oA cHD(BlockPos blockPos, oD oD2, boolean bl2, Predicate<BlockState> predicate) {
        return new oA(blockPos).cHE(oD2).cHG(bl2).cHH(predicate);
    }

    public oz cHL() {
        return aLdiM.cHT(this.QzHgl, this.fhmDl, this.zwhrf, this.xUADK, this.TgQUV, this.whCJw, this.Tpyyr);
    }
}

