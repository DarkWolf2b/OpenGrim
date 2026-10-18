/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  org.joml.Matrix3x2fStack
 */
package sixtwo;

import org.joml.Matrix3x2fStack;
import sixtwo.jR$uc;
import sixtwo.mG;

public class jR {
    private Matrix3x2fStack TuWdl;
    private float mKydf;
    private float iXUZY;
    private float SuDcj;
    private float dbElK;
    private float yFTcB;
    private float wuXmw;
    private float iqvtr;
    private float MdGcs;
    private mG CiMOa;
    private float BJIXk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    jR(Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, mG mG2, float f10) {
        this.TuWdl = matrix3x2fStack;
        this.mKydf = f2;
        this.iXUZY = f3;
        this.SuDcj = f4;
        this.dbElK = f5;
        this.yFTcB = f6;
        this.wuXmw = f7;
        this.iqvtr = f8;
        this.MdGcs = f9;
        this.CiMOa = mG2;
        this.BJIXk = f10;
    }

    public float bLS() {
        return this.iXUZY;
    }

    public mG bLZ() {
        return this.CiMOa;
    }

    public float bLU() {
        return this.dbElK;
    }

    public Matrix3x2fStack bLQ() {
        return this.TuWdl;
    }

    public float bLW() {
        return this.wuXmw;
    }

    public float bLR() {
        return this.mKydf;
    }

    public float bLX() {
        return this.iqvtr;
    }

    public float bLT() {
        return this.SuDcj;
    }

    public float bMa() {
        return this.BJIXk;
    }

    public float bLY() {
        return this.MdGcs;
    }

    public static jR$uc bLM(Matrix3x2fStack matrix3x2fStack, double d2, double d3, double d4, double d5) {
        return jR.bLP().drA(matrix3x2fStack).drB((float)d2).drC((float)d3).drD((float)d4).drE((float)d5);
    }

    private static float bLO() {
        return 0.75f;
    }

    private static mG bLN() {
        return mG.hoGuU;
    }

    public float bLV() {
        return this.yFTcB;
    }

    public static jR$uc bLP() {
        return new jR$uc();
    }
}

