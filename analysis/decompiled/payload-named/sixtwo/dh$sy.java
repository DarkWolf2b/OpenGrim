/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.world.World
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.world.World;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;

class dh$sy {
    private float cmcMI = 0.0f;
    private float eIsxf = 0.0f;
    private static final long cdlKh = gb.aYR(-8094499602601458092L, 6363211938442674905L, MethodHandles.lookup().lookupClass()).a(85071454242371L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private dh$sy() {
    }

    public void doy(World world) {
        float f2;
        block7: {
            float f3;
            block8: {
                long l2 = cdlKh ^ 0x32278D612A4FL;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        float f4 = this.cmcMI - 0.0f;
                        f2 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                        if (iSArray != null) break block7;
                        if (f2 < 0) break block8;
                    }
                    catch (MatchException matchException) {
                        throw dh$sy.doA(matchException);
                    }
                    world.setRainGradient(this.cmcMI);
                }
                catch (MatchException matchException) {
                    throw dh$sy.doA(matchException);
                }
            }
            f2 = (f3 = this.eIsxf - 0.0f) == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
        }
        try {
            if (f2 >= 0) {
                world.setThunderGradient(this.eIsxf);
            }
        }
        catch (MatchException matchException) {
            throw dh$sy.doA(matchException);
        }
    }

    public void dow(float f2) {
        this.eIsxf = f2;
    }

    public void dov(float f2) {
        this.cmcMI = f2;
    }

    public void dox() {
        this.cmcMI = 0.0f;
        this.eIsxf = 0.0f;
    }

    public boolean doz() {
        float f2;
        block6: {
            block8: {
                block7: {
                    long l2 = cdlKh ^ 0x1AF7BEBC7FA8L;
                    iS[] iSArray = dh.afl();
                    try {
                        try {
                            try {
                                float f3 = this.cmcMI - 0.0f;
                                f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                                if (iSArray != null) break block6;
                                if (f2 >= 0) break block7;
                            }
                            catch (MatchException matchException) {
                                throw dh$sy.doA(matchException);
                            }
                            float f4 = this.eIsxf - 1.0f;
                            f2 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                            if (iSArray != null) break block6;
                        }
                        catch (MatchException matchException) {
                            throw dh$sy.doA(matchException);
                        }
                        if (f2 < 0) break block8;
                    }
                    catch (MatchException matchException) {
                        throw dh$sy.doA(matchException);
                    }
                }
                f2 = 1.0f;
                break block6;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    private static MatchException doA(MatchException matchException) {
        return matchException;
    }
}

