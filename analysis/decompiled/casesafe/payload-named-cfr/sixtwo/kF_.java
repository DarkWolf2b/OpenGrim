/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Vec3d;
import sixtwo.kF$un;
import sixtwo.mG;

public class kF {
    private MatrixStack gvSDk;
    private Vec3d imnbU;
    private Vec3d EnbiM;
    private mG ZCDlZ;
    private float KVJFP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    kF(MatrixStack matrixStack, Vec3d vec3d, Vec3d vec3d2, mG mG2, float f2) {
        this.gvSDk = matrixStack;
        this.imnbU = vec3d;
        this.EnbiM = vec3d2;
        this.ZCDlZ = mG2;
        this.KVJFP = f2;
    }

    public static kF$un bTp() {
        return new kF$un();
    }

    private static float bTo() {
        return 1.0f;
    }

    public MatrixStack bTq() {
        return this.gvSDk;
    }

    public static kF$un bTn(MatrixStack matrixStack, Vec3d vec3d, Vec3d vec3d2, mG mG2) {
        return kF.bTp().dto(matrixStack).dtp(vec3d).dtq(vec3d2).dtr(mG2);
    }

    public Vec3d bTs() {
        return this.EnbiM;
    }

    public float bTu() {
        return this.KVJFP;
    }

    public Vec3d bTr() {
        return this.imnbU;
    }

    public mG bTt() {
        return this.ZCDlZ;
    }
}

