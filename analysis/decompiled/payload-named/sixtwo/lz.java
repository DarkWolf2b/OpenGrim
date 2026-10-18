/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.enums.CameraSubmersionType
 *  net.minecraft.client.render.Camera
 *  net.minecraft.client.render.RenderTickCounter
 *  net.minecraft.client.render.fog.FogData
 *  net.minecraft.client.render.fog.FogModifier
 *  net.minecraft.client.world.ClientWorld
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.ColorHelper
 *  org.jspecify.annotations.NonNull
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.block.enums.CameraSubmersionType;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.client.render.fog.FogData;
import net.minecraft.client.render.fog.FogModifier;
import net.minecraft.client.world.ClientWorld;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.ColorHelper;
import org.jspecify.annotations.NonNull;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jk;
import sixtwo.rD;

public class lz
extends FogModifier {
    private static iS[] pBqwe;
    private static final long KvTCM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        KvTCM = gb.aYR(-4215507453542254378L, 39000015741264975L, MethodHandles.lookup().lookupClass()).a(122772580996940L);
        if (lz.ccL() != null) {
            lz.ccK(new iS[3]);
        }
    }

    /*
     * Loose catch block
     */
    public boolean shouldApply(CameraSubmersionType submersionType, @NonNull Entity cameraEntity) {
        long l2 = KvTCM ^ 0x13FBD57C03E4L;
        iS[] iSArray = lz.ccL();
        try {
            boolean bl2;
            block10: {
                block9: {
                    block8: {
                        dh dh2 = rD.dlJ().aZx(dh.class);
                        bl2 = dh2.bag();
                        if (iSArray != null) break block8;
                        try {
                            block11: {
                                if (!bl2) break block9;
                                break block11;
                                catch (Throwable throwable) {
                                    throw lz.ccM(throwable);
                                }
                            }
                            bl2 = dh2.aeU().SZ();
                        }
                        catch (Throwable throwable) {
                            throw lz.ccM(throwable);
                        }
                    }
                    try {
                        if (iSArray != null) break block10;
                        if (bl2) break block9;
                    }
                    catch (Throwable throwable) {
                        throw lz.ccM(throwable);
                    }
                    bl2 = true;
                    break block10;
                }
                bl2 = false;
            }
            return bl2;
        }
        catch (Throwable throwable) {
            return false;
        }
    }

    /*
     * Loose catch block
     */
    public boolean isColorSource() {
        long l2 = KvTCM ^ 0x5AF209F308B0L;
        iS[] iSArray = lz.ccL();
        try {
            boolean bl2;
            block10: {
                block9: {
                    block8: {
                        dh dh2 = rD.dlJ().aZx(dh.class);
                        bl2 = dh2.bag();
                        if (iSArray != null) break block8;
                        try {
                            block11: {
                                if (!bl2) break block9;
                                break block11;
                                catch (Throwable throwable) {
                                    throw lz.ccM(throwable);
                                }
                            }
                            bl2 = dh2.aeW().SZ();
                        }
                        catch (Throwable throwable) {
                            throw lz.ccM(throwable);
                        }
                    }
                    try {
                        if (iSArray != null) break block10;
                        if (!bl2) break block9;
                    }
                    catch (Throwable throwable) {
                        throw lz.ccM(throwable);
                    }
                    bl2 = true;
                    break block10;
                }
                bl2 = false;
            }
            return bl2;
        }
        catch (Throwable throwable) {
            return false;
        }
    }

    public void applyStartEndModifier(@NonNull FogData data, @NonNull Camera camera, @NonNull ClientWorld clientWorld, float f2, @NonNull RenderTickCounter renderTickCounter) {
        block10: {
            long l2 = KvTCM ^ 0x25B1D2F3CD4L;
            iS[] iSArray = lz.ccL();
            try {
                dh dh2;
                float f3;
                float f4;
                dh dh3;
                block9: {
                    boolean bl2;
                    block7: {
                        block8: {
                            dh3 = rD.dlJ().aZx(dh.class);
                            try {
                                bl2 = dh3.aeV().SZ();
                                if (iSArray != null) break block7;
                                if (!bl2) break block8;
                            }
                            catch (Throwable throwable) {
                                throw lz.ccM(throwable);
                            }
                            f4 = Float.MAX_VALUE;
                            f3 = Float.MAX_VALUE;
                            data.environmentalStart = f4;
                            data.environmentalEnd = f3;
                            data.renderDistanceStart = f4;
                            data.renderDistanceEnd = f3;
                            data.skyEnd = f3;
                            data.cloudEnd = f3;
                        }
                        try {
                            dh2 = dh3;
                            if (iSArray != null) break block9;
                            bl2 = dh2.aeW().SZ();
                        }
                        catch (Throwable throwable) {
                            throw lz.ccM(throwable);
                        }
                    }
                    if (!bl2) break block10;
                    dh2 = dh3;
                }
                f4 = dh2.aeY().UP(0);
                f3 = dh3.aeY().UP(1);
                data.environmentalStart = f4;
                data.environmentalEnd = f3;
                data.renderDistanceStart = f4;
                data.renderDistanceEnd = f3;
                data.skyEnd = f3;
                data.cloudEnd = f3;
            }
            catch (Throwable throwable) {
                // empty catch block
            }
        }
    }

    public int getFogColor(@NonNull ClientWorld world, @NonNull Camera camera, int viewDistance, float skyDarkness) {
        try {
            dh dh2 = rD.dlJ().aZx(dh.class);
            float[] fArray = jk.bDt(dh2.aeX().Wh());
            return ColorHelper.fromFloats((float)fArray[3], (float)fArray[0], (float)fArray[1], (float)fArray[2]);
        }
        catch (Throwable throwable) {
            return -1;
        }
    }

    public static void ccK(iS[] iSArray) {
        pBqwe = iSArray;
    }

    public static iS[] ccL() {
        return pBqwe;
    }

    private static Throwable ccM(Throwable throwable) {
        return throwable;
    }
}

