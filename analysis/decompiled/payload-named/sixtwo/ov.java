/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mZ;
import sixtwo.rD;

public class ov {
    private float WjcUH;
    private float pDaqa;
    private static iS[] xZSRu;
    private static final long RVwSP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private ov(float f2, float f3) {
        this.WjcUH = f2;
        this.pDaqa = f3;
    }

    static {
        RVwSP = gb.aYR(3040186214229664376L, 1947325989950969753L, MethodHandles.lookup().lookupClass()).a(207253909410786L);
        if (ov.cGN() == null) {
            ov.cGM(new iS[4]);
        }
    }

    public boolean equals(Object object) {
        block18: {
            int n2;
            block22: {
                block21: {
                    iS[] iSArray;
                    block20: {
                        Object object2;
                        block19: {
                            Object object3;
                            block16: {
                                block17: {
                                    long l2 = RVwSP ^ 0x558DEDD4F3FDL;
                                    iSArray = ov.cGN();
                                    try {
                                        try {
                                            object3 = this;
                                            if (iSArray == null) break block16;
                                            if (object3 != object) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw ov.cGO(matchException);
                                        }
                                        return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw ov.cGO(matchException);
                                    }
                                }
                                object3 = object;
                            }
                            try {
                                try {
                                    try {
                                        if (object3 == null) break block18;
                                        object2 = this.getClass();
                                        if (iSArray == null) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw ov.cGO(matchException);
                                    }
                                    if (object2 != object.getClass()) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw ov.cGO(matchException);
                                }
                                object2 = object;
                            }
                            catch (MatchException matchException) {
                                throw ov.cGO(matchException);
                            }
                        }
                        ov ov2 = (ov)object2;
                        try {
                            try {
                                n2 = Float.compare(ov2.WjcUH, this.WjcUH);
                                if (iSArray == null) break block20;
                                if (n2 != 0) break block21;
                            }
                            catch (MatchException matchException) {
                                throw ov.cGO(matchException);
                            }
                            n2 = Float.compare(ov2.pDaqa, this.pDaqa);
                        }
                        catch (MatchException matchException) {
                            throw ov.cGO(matchException);
                        }
                    }
                    try {
                        if (iSArray == null) break block22;
                        if (n2 != 0) break block21;
                    }
                    catch (MatchException matchException) {
                        throw ov.cGO(matchException);
                    }
                    n2 = 1;
                    break block22;
                }
                n2 = 0;
            }
            return n2 != 0;
        }
        return false;
    }

    public Vec3d cGH() {
        Vec3d vec3d;
        long l2 = RVwSP ^ 0x67C024884386L;
        float f2 = this.pDaqa * ((float)Math.PI / 180);
        float f3 = -this.WjcUH * ((float)Math.PI / 180);
        float f4 = MathHelper.cos((double)f3);
        float f5 = MathHelper.sin((double)f3);
        float f6 = MathHelper.cos((double)f2);
        iS[] iSArray = ov.cGN();
        float f7 = MathHelper.sin((double)f2);
        try {
            vec3d = new Vec3d((double)(f5 * f6), (double)(-f7), (double)(f4 * f6));
            if (iSArray == null) {
                iS.bwK("OgWBT");
            }
        }
        catch (MatchException matchException) {
            throw ov.cGO(matchException);
        }
        return vec3d;
    }

    public float cGJ() {
        return this.pDaqa;
    }

    public float cGI() {
        return this.WjcUH;
    }

    public static ov cGv(float f2, float f3) {
        return new ov(f2, f3);
    }

    public void cGK(float f2) {
        this.WjcUH = f2;
    }

    public static iS[] cGN() {
        return xZSRu;
    }

    private float cGG(float f2, float f3, double d2) {
        float f4 = f2 - f3;
        return f3 + (float)Math.round((double)f4 / d2) * (float)d2;
    }

    private static MatchException cGO(MatchException matchException) {
        return matchException;
    }

    public static ov cGx(Vec3d vec3d) {
        return new ov((float)MathHelper.wrapDegrees((double)(Math.toDegrees(Math.atan2(vec3d.z, vec3d.x)) - 90.0)), (float)MathHelper.wrapDegrees((double)Math.toDegrees(-Math.atan2(vec3d.y, Math.hypot(vec3d.x, vec3d.z)))));
    }

    public ov cGC(ov ov2) {
        return new ov(this.WjcUH - ov2.WjcUH, this.pDaqa - ov2.pDaqa);
    }

    public void cGE(Entity entity) {
        entity.setYaw(this.WjcUH);
        entity.setPitch(this.pDaqa);
    }

    public void cGL(float f2) {
        this.pDaqa = f2;
    }

    public ov cGB(ov ov2) {
        return new ov(this.WjcUH + ov2.WjcUH, this.pDaqa + ov2.pDaqa);
    }

    public static void cGM(iS[] iSArray) {
        xZSRu = iSArray;
    }

    public ov cGF() {
        double d2 = mZ.csr();
        ov ov2 = rD.dlX().dbZ();
        float f2 = this.cGG(this.WjcUH, ov2.WjcUH, d2);
        float f3 = this.cGG(this.pDaqa, ov2.pDaqa, d2);
        return new ov(f2, MathHelper.clamp((float)f3, (float)-90.0f, (float)90.0f));
    }

    public static ov cGw(Vec2f vec2f) {
        return new ov(vec2f.y, vec2f.x);
    }

    public static ov cGz(Entity entity) {
        return new ov(entity.getYaw(), entity.getPitch());
    }

    public float cGD(ov ov2) {
        float f2 = MathHelper.wrapDegrees((float)(ov2.WjcUH - this.WjcUH));
        float f3 = ov2.pDaqa - this.pDaqa;
        return (float)Math.sqrt(f2 * f2 + f3 * f3);
    }

    public static ov cGA() {
        ClientPlayerEntity clientPlayerEntity;
        block9: {
            MinecraftClient minecraftClient;
            block7: {
                block8: {
                    long l2 = RVwSP ^ 0x329E03DF9F1AL;
                    iS[] iSArray = ov.cGN();
                    try {
                        try {
                            minecraftClient = rD.dlmvG;
                            if (iSArray == null) break block7;
                            if (minecraftClient.getCameraEntity() == null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw ov.cGO(matchException);
                        }
                        clientPlayerEntity = rD.dlmvG.getCameraEntity();
                        break block9;
                    }
                    catch (MatchException matchException) {
                        throw ov.cGO(matchException);
                    }
                }
                minecraftClient = rD.dlmvG;
            }
            clientPlayerEntity = minecraftClient.player;
        }
        ClientPlayerEntity clientPlayerEntity2 = clientPlayerEntity;
        try {
            if (clientPlayerEntity2 == null) {
                return ov.cGv(0.0f, 0.0f);
            }
        }
        catch (MatchException matchException) {
            throw ov.cGO(matchException);
        }
        float f2 = rD.dlmvG.getRenderTickCounter().getTickProgress(true);
        return ov.cGv(clientPlayerEntity2.getYaw(f2), clientPlayerEntity2.getPitch(f2));
    }

    public static ov cGy(Vec3d vec3d) {
        Vec3d vec3d2 = rD.dlmvG.player.getEyePos();
        return ov.cGx(vec3d.subtract(vec3d2));
    }
}

