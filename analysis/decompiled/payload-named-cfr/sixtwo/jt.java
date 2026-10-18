/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.entity.state.EntityRenderState
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Matrix3x2f
 *  org.joml.Matrix3x2fc
 *  org.joml.Quaternionf
 *  org.joml.Quaternionfc
 */
package sixtwo;

import net.minecraft.client.render.entity.state.EntityRenderState;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix3x2f;
import org.joml.Matrix3x2fc;
import org.joml.Quaternionf;
import org.joml.Quaternionfc;
import sixtwo.jr;
import sixtwo.lF;
import sixtwo.lJ;
import sixtwo.lN;

public final class jt
implements lJ<jt> {
    private final Matrix3x2fc TvcWs;
    private final EntityRenderState fgeSN;
    private final float frbJF;
    private final float KeAxW;
    private final float khKKF;
    private final float uTgLo;
    private float QomKU = 1.0f;
    private Vec3d hXKLQ = Vec3d.ZERO;
    private Quaternionf xZTHX = new Quaternionf();
    private Quaternionf pZyIu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public lN batchKey() {
        return lN.immediate();
    }

    public jt(Matrix3x2fc matrix3x2fc, EntityRenderState entityRenderState, float f2, float f3, float f4, float f5) {
        this.TvcWs = new Matrix3x2f(matrix3x2fc);
        this.fgeSN = entityRenderState;
        this.frbJF = f2;
        this.KeAxW = f3;
        this.khKKF = f4;
        this.uTgLo = f5;
    }

    @Override
    public void execute() {
        jr.bFu(this.TvcWs, this.fgeSN, this.QomKU, this.hXKLQ, this.xZTHX, this.pZyIu, this.frbJF, this.KeAxW, this.khKKF, this.uTgLo);
    }

    public jt bFH(float f2) {
        this.QomKU = f2;
        return this;
    }

    public jt bFI(Vec3d vec3d) {
        this.hXKLQ = vec3d;
        return this;
    }

    public jt bFL(Quaternionf quaternionf) {
        this.pZyIu = new Quaternionf((Quaternionfc)quaternionf);
        return this;
    }

    public jt bFK(Quaternionf quaternionf) {
        this.xZTHX = new Quaternionf((Quaternionfc)quaternionf);
        return this;
    }

    public jt bFJ(float f2, float f3, float f4) {
        this.hXKLQ = new Vec3d((double)f2, (double)f3, (double)f4);
        return this;
    }

    public jt bFM() {
        lF.cfA(this);
        return this;
    }
}

