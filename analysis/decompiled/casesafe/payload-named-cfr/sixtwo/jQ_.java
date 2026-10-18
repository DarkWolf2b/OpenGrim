/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec2f
 *  org.joml.Matrix3x2fStack
 */
package sixtwo;

import net.minecraft.util.math.Vec2f;
import org.joml.Matrix3x2fStack;
import sixtwo.jQ$ub;
import sixtwo.mG;

public class jQ {
    private Matrix3x2fStack OnmFi;
    private Vec2f SACMG;
    private Vec2f xZJck;
    private Vec2f hgzSE;
    private Vec2f DILdN;
    private mG dqFYn;
    private float UCEil;
    private float GeRqt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    jQ(Matrix3x2fStack matrix3x2fStack, Vec2f vec2f, Vec2f vec2f2, Vec2f vec2f3, Vec2f vec2f4, mG mG2, float f2, float f3) {
        this.OnmFi = matrix3x2fStack;
        this.SACMG = vec2f;
        this.xZJck = vec2f2;
        this.hgzSE = vec2f3;
        this.DILdN = vec2f4;
        this.dqFYn = mG2;
        this.UCEil = f2;
        this.GeRqt = f3;
    }

    public Vec2f bLG() {
        return this.xZJck;
    }

    public Vec2f bLH() {
        return this.hgzSE;
    }

    public Vec2f bLF() {
        return this.SACMG;
    }

    public Matrix3x2fStack bLE() {
        return this.OnmFi;
    }

    public Vec2f bLI() {
        return this.DILdN;
    }

    public float bLK() {
        return this.UCEil;
    }

    public float bLL() {
        return this.GeRqt;
    }

    public mG bLJ() {
        return this.dqFYn;
    }

    public static jQ$ub bLD() {
        return new jQ$ub();
    }

    private static float bLC() {
        return 0.75f;
    }

    private static mG bLA() {
        return mG.hoGuU;
    }

    private static float bLB() {
        return 1.0f;
    }

    public static jQ$ub bLz(Matrix3x2fStack matrix3x2fStack, Vec2f vec2f, Vec2f vec2f2, Vec2f vec2f3, Vec2f vec2f4) {
        return jQ.bLD().drm(matrix3x2fStack).drn(vec2f).dro(vec2f2).drp(vec2f3).drq(vec2f4);
    }
}

