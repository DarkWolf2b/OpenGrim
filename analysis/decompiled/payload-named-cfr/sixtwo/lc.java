/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.MatrixUtil
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Vector3f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.util.math.MatrixUtil;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Vector3f;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.ld;

public class lc {
    protected float NFMZK;
    protected float NeqZE;
    protected float uTJKW;
    protected float FQVVW;
    private static iS[] iJorm;
    private static final long aMWvL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public float bXz() {
        return this.NFMZK + this.uTJKW;
    }

    public float bXF() {
        return this.NFMZK;
    }

    public float bXG() {
        return this.NeqZE;
    }

    public float bXA() {
        return this.NeqZE + this.FQVVW;
    }

    public float bXH() {
        return this.uTJKW;
    }

    public boolean bXD(double d2, double d3) {
        return jf.bAE(d2, d3, this.NFMZK, this.NeqZE, this.uTJKW, this.FQVVW);
    }

    public float bXI() {
        return this.FQVVW;
    }

    public lc(float f2, float f3, float f4, float f5) {
        this.NFMZK = f2;
        this.NeqZE = f3;
        this.uTJKW = f4;
        this.FQVVW = f5;
    }

    static {
        aMWvL = gb.aYR(2221297848610050427L, -7362294069567225307L, MethodHandles.lookup().lookupClass()).a(273555081488487L);
        if (lc.bXK() == null) {
            lc.bXJ(new iS[1]);
        }
    }

    public boolean bXE(lC lC2) {
        return jf.bAG(lC2, this.NFMZK, this.NeqZE, this.uTJKW, this.FQVVW);
    }

    public void bXr(float f2, float f3, float f4, float f5) {
        this.NFMZK = f2;
        this.NeqZE = f3;
        this.uTJKW = f4;
        this.FQVVW = f5;
    }

    public static void bXJ(iS[] iSArray) {
        iJorm = iSArray;
    }

    public lc bXC(Matrix3x2fc matrix3x2fc) {
        lc lc2;
        long l2 = aMWvL ^ 0x6BA6F160EB07L;
        float f2 = matrix3x2fc.m00() * this.NFMZK + matrix3x2fc.m10() * this.NeqZE + matrix3x2fc.m20();
        float f3 = matrix3x2fc.m01() * this.NFMZK + matrix3x2fc.m11() * this.NeqZE + matrix3x2fc.m21();
        float f4 = matrix3x2fc.m00() * (this.NFMZK + this.uTJKW) + matrix3x2fc.m10() * (this.NeqZE + this.FQVVW) + matrix3x2fc.m20();
        String string = ld.b();
        float f5 = matrix3x2fc.m01() * (this.NFMZK + this.uTJKW) + matrix3x2fc.m11() * (this.NeqZE + this.FQVVW) + matrix3x2fc.m21();
        try {
            lc2 = new lc(f2, f3, f4 - f2, f5 - f3);
            if (string == null) {
                iS.bwK("jJvweb");
            }
        }
        catch (MatchException matchException) {
            throw lc.bXL(matchException);
        }
        return lc2;
    }

    public lc bXy(float f2) {
        return new lc(this.NFMZK, this.NeqZE, this.uTJKW, f2);
    }

    public lc bXw(float f2) {
        return new lc(this.NFMZK, f2, this.uTJKW, this.FQVVW);
    }

    public lc bXx(float f2) {
        return new lc(this.NFMZK, this.NeqZE, f2, this.FQVVW);
    }

    public static iS[] bXK() {
        return iJorm;
    }

    public void bXs(lc lc2) {
        this.NFMZK = lc2.NFMZK;
        this.NeqZE = lc2.NeqZE;
        this.uTJKW = lc2.uTJKW;
        this.FQVVW = lc2.FQVVW;
    }

    public void bXu(float f2, float f3) {
        this.uTJKW = f2;
        this.FQVVW = f3;
    }

    public lc bXv(float f2) {
        return new lc(f2, this.NeqZE, this.uTJKW, this.FQVVW);
    }

    private static MatchException bXL(MatchException matchException) {
        return matchException;
    }

    public lc bXB(Matrix4f matrix4f) {
        long l2 = aMWvL ^ 0x5FDF115B906L;
        try {
            if (MatrixUtil.isIdentity((Matrix4fc)matrix4f)) {
                return new lc(this.NFMZK, this.NeqZE, this.uTJKW, this.FQVVW);
            }
        }
        catch (MatchException matchException) {
            throw lc.bXL(matchException);
        }
        Vector3f vector3f = new Vector3f(this.NFMZK, this.NeqZE, 0.0f);
        Vector3f vector3f2 = new Vector3f(this.NFMZK + this.uTJKW, this.NeqZE + this.FQVVW, 0.0f);
        matrix4f.transformPosition(vector3f);
        matrix4f.transformPosition(vector3f2);
        return new lc(vector3f.x, vector3f.y, vector3f2.x - vector3f.x, vector3f2.y - vector3f.y);
    }

    public void bXt(float f2, float f3) {
        this.NFMZK = f2;
        this.NeqZE = f3;
    }
}

