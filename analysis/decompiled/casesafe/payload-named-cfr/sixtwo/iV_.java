/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket$Full
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.ov;
import sixtwo.rD;

public class iV {
    public static final ov uTmcD;
    public static final ov XsgMs;
    public static final ov Qhihw;
    public static final ov BzuYL;
    public static final ov HGROY;
    public static final ov GDobf;
    private static final long iPecI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        iPecI = gb.aYR(879203543032306159L, 1449607818855702903L, MethodHandles.lookup().lookupClass()).a(246983329538410L);
        uTmcD = ov.cGx(new Vec3d(0.0, 20.0, 0.0));
        XsgMs = ov.cGx(new Vec3d(0.0, -20.0, 0.0));
        Qhihw = ov.cGx(new Vec3d(20.0, 0.0, 0.0));
        BzuYL = ov.cGx(new Vec3d(-20.0, 0.0, 0.0));
        HGROY = ov.cGx(new Vec3d(0.0, 0.0, 20.0));
        GDobf = ov.cGx(new Vec3d(0.0, 0.0, -20.0));
    }

    public static Vec3d bxi(float f2, float f3) {
        float f4 = f2 * ((float)Math.PI / 180);
        float f5 = -f3 * ((float)Math.PI / 180);
        float f6 = MathHelper.cos((double)f5);
        float f7 = MathHelper.sin((double)f5);
        float f8 = MathHelper.cos((double)f4);
        float f9 = MathHelper.sin((double)f4);
        return new Vec3d((double)(f7 * f8), (double)(-f9), (double)(f6 * f8));
    }

    public static ov bxe(ov ov2, ov ov3) {
        float f2;
        float f3;
        block7: {
            float f4;
            float f5;
            float f6;
            block5: {
                String[] stringArray;
                block6: {
                    long l2 = iPecI ^ 0x72B633E619C7L;
                    f6 = MathHelper.wrapDegrees((float)(ov3.cGI() - ov2.cGI()));
                    stringArray = jf.bBe();
                    f5 = MathHelper.wrapDegrees((float)(ov3.cGJ() - ov2.cGJ()));
                    try {
                        float f7 = f5 - -180.0f;
                        f4 = f7 == 0.0f ? 0 : (f7 > 0.0f ? 1 : -1);
                        if (stringArray == null) break block5;
                        if (f4 != false) break block6;
                    }
                    catch (MatchException matchException) {
                        throw iV.bxo(matchException);
                    }
                    f5 = 180.0f;
                }
                try {
                    f3 = f6;
                    f2 = -180.0f;
                    if (stringArray == null) break block7;
                    float f8 = f3 - f2;
                    f4 = f8 == 0.0f ? 0 : (f8 > 0.0f ? 1 : -1);
                }
                catch (MatchException matchException) {
                    throw iV.bxo(matchException);
                }
            }
            if (f4 == false) {
                f6 = 180.0f;
            }
            f3 = f6;
            f2 = f5;
        }
        return ov.cGv(f3, f2);
    }

    private static MatchException bxo(MatchException matchException) {
        return matchException;
    }

    public static Vec3d bxh(PlayerEntity playerEntity) {
        float f2 = rD.dlmvG.getRenderTickCounter().getTickProgress(true);
        return iV.bxi(playerEntity.getPitch(f2), playerEntity.getYaw(f2));
    }

    public static double bxf(Vec3d vec3d, Vec3d vec3d2, ov ov2) {
        ov ov3 = ov.cGx(vec3d2.subtract(vec3d));
        ov ov4 = iV.bxe(ov2, ov3);
        return Math.hypot(ov4.cGI(), ov4.cGJ());
    }

    public static double bxg(ov ov2, Entity entity) {
        double d2 = MathHelper.wrapDegrees((float)entity.getYaw());
        double d3 = MathHelper.wrapDegrees((float)entity.getPitch());
        double d4 = MathHelper.wrapDegrees((double)(d2 - (double)ov2.cGI()));
        double d5 = MathHelper.wrapDegrees((double)(d3 - (double)ov2.cGJ()));
        return Math.sqrt(d4 * d4 + d5 * d5);
    }

    public static double bxj(Vec3d vec3d) {
        return Math.toDegrees(Math.atan2(vec3d.getZ(), vec3d.getX())) - 90.0;
    }

    public static void bxk(Vec3d vec3d) {
        ov ov2 = iV.bxm(vec3d);
        iV.bxl(ov2);
    }

    public static void bxl(ov ov2) {
        rD.dlmvG.getNetworkHandler().sendPacket((Packet)new PlayerMoveC2SPacket.Full(rD.dlmvG.player.getX(), rD.dlmvG.player.getY(), rD.dlmvG.player.getZ(), ov2.cGI(), ov2.cGJ(), rD.dlmvG.player.isOnGround(), rD.dlmvG.player.horizontalCollision));
    }

    public static ov bxn(Vec3d vec3d, Vec3d vec3d2) {
        double d2 = vec3d2.x - vec3d.x;
        double d3 = vec3d2.y - vec3d.y;
        double d4 = vec3d2.z - vec3d.z;
        float f2 = (float)Math.toDegrees(Math.atan2(d4, d2)) - 90.0f;
        double d5 = Math.sqrt(d2 * d2 + d4 * d4);
        float f3 = (float)(-Math.toDegrees(Math.atan2(d3, d5)));
        return ov.cGv(f2, f3);
    }

    public static ov bxm(Vec3d vec3d) {
        Vec3d vec3d2 = new Vec3d(rD.dlmvG.player.getX(), rD.dlmvG.player.getY() + (double)rD.dlmvG.player.getEyeHeight(rD.dlmvG.player.getPose()), rD.dlmvG.player.getZ());
        return iV.bxn(vec3d2, vec3d);
    }
}

