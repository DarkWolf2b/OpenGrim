/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.Camera
 *  net.minecraft.client.render.state.CameraRenderState
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.RotationAxis
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Matrix3x2fStack
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionfc
 *  org.joml.Vector4f
 *  org.jspecify.annotations.Nullable
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.state.CameraRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Quaternionfc;
import org.joml.Vector4f;
import org.jspecify.annotations.Nullable;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jH;
import sixtwo.jK;
import sixtwo.rD;
import sixtwo.rm;

public class jI {
    private static Matrix4f BfOvs;
    private static Matrix4f GDhOW;
    private static Matrix4f ruTXP;
    private static final long PXtDs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static MatchException bIz(MatchException matchException) {
        return matchException;
    }

    public static void bIt(MatrixStack matrixStack, double d2) {
        matrixStack.translate(d2, d2, d2);
    }

    public static MatrixStack bIm(Matrix3x2fc matrix3x2fc) {
        MatrixStack matrixStack = new MatrixStack();
        matrixStack.multiplyPositionMatrix((Matrix4fc)jI.bIl(matrix3x2fc));
        return matrixStack;
    }

    public static MatrixStack bIp(double d2, double d3, double d4) {
        return jI.bIo(new Vec3d(d2, d3, d4));
    }

    public static float bIy() {
        return Math.max((float)rD.dlmvG.options.getClampedViewDistance() * 4.0f, 4.0f);
    }

    public static Matrix3x2fStack bIn(@Nullable Matrix3x2fc matrix3x2fc) {
        long l2 = PXtDs ^ 0x6071A34E4586L;
        Matrix3x2fStack matrix3x2fStack = new Matrix3x2fStack();
        try {
            if (matrix3x2fc != null) {
                matrix3x2fStack.set(matrix3x2fc);
            }
        }
        catch (MatchException matchException) {
            throw jI.bIz(matchException);
        }
        return matrix3x2fStack;
    }

    public static void bIv(MatrixStack matrixStack, float f2, float f3, float f4, float f5) {
        matrixStack.translate(f2, f3, f4);
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Z.rotationDegrees(f5));
        matrixStack.translate(-f2, -f3, f4);
    }

    public static Matrix4f bIx(CameraRenderState cameraRenderState, float f2) {
        return jK.bIF(((Integer)rD.dlmvG.options.getFov().getValue()).floatValue(), f2, jI.bIy());
    }

    static {
        PXtDs = gb.aYR(704151637779864399L, -6002197135173590387L, MethodHandles.lookup().lookupClass()).a(135865284138013L);
        BfOvs = new Matrix4f();
        GDhOW = new Matrix4f();
        ruTXP = new Matrix4f();
    }

    public static void bIr(MatrixStack matrixStack) {
        Camera camera = rD.dlmvG.gameRenderer.getCamera();
        Vec3d vec3d = camera.getCameraPos().negate();
        matrixStack.translate(vec3d.x, vec3d.y, vec3d.z);
    }

    public static void bIs(MatrixStack matrixStack, Vec3d vec3d) {
        Camera camera = rD.dlmvG.gameRenderer.getCamera();
        Vec3d vec3d2 = camera.getCameraPos();
        Vec3d vec3d3 = vec3d.subtract(vec3d2);
        matrixStack.translate(vec3d3.x, vec3d3.y, vec3d3.z);
    }

    public static void bIj(Matrix4f matrix4f, Matrix4f matrix4f2, Matrix4f matrix4f3) {
        BfOvs = new Matrix4f((Matrix4fc)matrix4f);
        GDhOW = new Matrix4f((Matrix4fc)matrix4f2);
        ruTXP = new Matrix4f((Matrix4fc)matrix4f3);
    }

    public static Matrix4f bIl(Matrix3x2fc matrix3x2fc) {
        return new Matrix4f(matrix3x2fc.m00(), matrix3x2fc.m01(), 0.0f, 0.0f, matrix3x2fc.m10(), matrix3x2fc.m11(), 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, matrix3x2fc.m20(), matrix3x2fc.m21(), 0.0f, 1.0f);
    }

    public static MatrixStack bIo(Vec3d vec3d) {
        MatrixStack matrixStack;
        long l2 = PXtDs ^ 0x29772E792A2FL;
        MatrixStack matrixStack2 = new MatrixStack();
        String[] stringArray = jH.bIh();
        Camera camera = rD.dlmvG.gameRenderer.getCamera();
        matrixStack2.multiply((Quaternionfc)RotationAxis.POSITIVE_X.rotationDegrees(camera.getPitch()));
        matrixStack2.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(camera.getYaw() + 180.0f));
        Vec3d vec3d2 = vec3d.subtract(camera.getCameraPos());
        matrixStack2.translate(vec3d2.x, vec3d2.y, vec3d2.z);
        String[] stringArray2 = stringArray;
        try {
            matrixStack = matrixStack2;
            if (iS.bwL() == null) {
                jH.bIg(new String[2]);
            }
        }
        catch (MatchException matchException) {
            throw jI.bIz(matchException);
        }
        return matrixStack;
    }

    public static void bIu(MatrixStack matrixStack) {
        Camera camera = rD.dlmvG.gameRenderer.getCamera();
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(-camera.getYaw()));
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_X.rotationDegrees(camera.getPitch()));
    }

    public static void bIq(MatrixStack matrixStack) {
        Camera camera = rD.dlmvG.gameRenderer.getCamera();
        matrixStack.multiply((Quaternionfc)camera.getRotation());
    }

    public static Vec2f bIw(Vec3d vec3d) {
        Vec2f vec2f;
        Vector4f vector4f;
        String[] stringArray;
        block7: {
            Vector4f vector4f2;
            block8: {
                long l2 = PXtDs ^ 0x49BDF9D1599DL;
                Camera camera = rD.dlmvG.gameRenderer.getCamera();
                stringArray = jH.bIh();
                Vec3d vec3d2 = camera.getCameraPos();
                float f2 = (float)(vec3d.x - vec3d2.x);
                float f3 = (float)(vec3d.y - vec3d2.y);
                float f4 = (float)(vec3d.z - vec3d2.z);
                vector4f2 = new Vector4f(f2, f3, f4, 1.0f);
                try {
                    try {
                        vector4f2.mul((Matrix4fc)ruTXP).mul((Matrix4fc)BfOvs).mul((Matrix4fc)GDhOW);
                        vector4f = vector4f2;
                        if (stringArray != null) break block7;
                        if (!(vector4f.w <= 0.0f)) break block8;
                    }
                    catch (MatchException matchException) {
                        throw jI.bIz(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw jI.bIz(matchException);
                }
            }
            vector4f = vector4f2.div(vector4f2.w);
        }
        Vector4f vector4f3 = vector4f;
        Vec2f vec2f2 = rm.dip();
        float f5 = (vector4f3.x + 1.0f) / 2.0f * vec2f2.x;
        float f6 = (1.0f - vector4f3.y) / 2.0f * vec2f2.y;
        try {
            vec2f = new Vec2f(f5, f6);
            if (stringArray != null) {
                iS.bwK("TXQKec");
            }
        }
        catch (MatchException matchException) {
            throw jI.bIz(matchException);
        }
        return vec2f;
    }

    public static Matrix4f bIk() {
        return new Matrix4f((Matrix4fc)GDhOW);
    }
}

