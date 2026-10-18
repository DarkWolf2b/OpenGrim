/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  org.joml.Matrix3x2fStack
 *  org.joml.Matrix4f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix4f;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kD$ul;
import sixtwo.kG;
import sixtwo.mG;

public class kD {
    private Matrix3x2fStack vLXCt;
    private Matrix4f LTgfz;
    private float qcXxG;
    private float QkzCs;
    private float lpFYB;
    private float SCber;
    private int[] bDgdv;
    private mG uePHf;
    private static final long PeEVb = gb.aYR(8725412669369813506L, 2727400911256207010L, MethodHandles.lookup().lookupClass()).a(85921129537519L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static MatchException bTe(MatchException matchException) {
        return matchException;
    }

    public static kD$ul bSU(Matrix4f matrix4f, double d2, double d3, double d4, double d5, int[] nArray) {
        return kD.bSV().dsR(matrix4f).dsS((float)d2).dsT((float)d3).dsU((float)d4).dsV((float)d5).dsW(nArray);
    }

    public static kD$ul bSV() {
        return new kD$ul();
    }

    kD(Matrix3x2fStack matrix3x2fStack, Matrix4f matrix4f, float f2, float f3, float f4, float f5, int[] nArray, mG mG2) {
        long l2 = PeEVb ^ 0x51B9A1A9C66AL;
        iS[] iSArray = kG.bTH();
        this.vLXCt = matrix3x2fStack;
        this.LTgfz = matrix4f;
        this.qcXxG = f2;
        iS[] iSArray2 = iSArray;
        try {
            this.QkzCs = f3;
            this.lpFYB = f4;
            this.SCber = f5;
            this.bDgdv = nArray;
            this.uePHf = mG2;
            if (iSArray2 != null) {
                iS.bwK("ZgrXCc");
            }
        }
        catch (MatchException matchException) {
            throw kD.bTe(matchException);
        }
    }

    public int[] bTc() {
        return this.bDgdv;
    }

    public Matrix4f bSX() {
        return this.LTgfz;
    }

    public float bTb() {
        return this.SCber;
    }

    public mG bTd() {
        return this.uePHf;
    }

    public float bSY() {
        return this.qcXxG;
    }

    public float bSZ() {
        return this.QkzCs;
    }

    public float bTa() {
        return this.lpFYB;
    }

    public Matrix3x2fStack bSW() {
        return this.vLXCt;
    }

    public static kD$ul bST(Matrix3x2fStack matrix3x2fStack, double d2, double d3, double d4, double d5, int[] nArray) {
        return kD.bSV().dsQ(matrix3x2fStack).dsS((float)d2).dsT((float)d3).dsU((float)d4).dsV((float)d5).dsW(nArray);
    }
}

