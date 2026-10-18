/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_11400
 *  net.minecraft.class_1297
 *  net.minecraft.class_4184
 *  net.minecraft.class_5636
 *  net.minecraft.class_638
 *  net.minecraft.class_7285
 *  net.minecraft.class_9779
 *  net.minecraft.class_9848
 *  org.jspecify.annotations.NonNull
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_11400;
import net.minecraft.class_1297;
import net.minecraft.class_4184;
import net.minecraft.class_5636;
import net.minecraft.class_638;
import net.minecraft.class_7285;
import net.minecraft.class_9779;
import net.minecraft.class_9848;
import org.jspecify.annotations.NonNull;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jk;
import sixtwo.rD;

public class lz
extends class_11400 {
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
    public boolean method_42593(class_5636 class_56362, @NonNull class_1297 class_12972) {
        long l = KvTCM ^ 0x13FBD57C03E4L;
        iS[] iSArray = lz.ccL();
        try {
            boolean bl;
            block10: {
                block9: {
                    block8: {
                        dh dh2 = rD.dlJ().aZx(dh.class);
                        bl = dh2.bag();
                        if (iSArray != null) break block8;
                        try {
                            block11: {
                                if (!bl) break block9;
                                break block11;
                                catch (Throwable throwable) {
                                    throw lz.ccM(throwable);
                                }
                            }
                            bl = dh2.aeU().SZ();
                        }
                        catch (Throwable throwable) {
                            throw lz.ccM(throwable);
                        }
                    }
                    try {
                        if (iSArray != null) break block10;
                        if (bl) break block9;
                    }
                    catch (Throwable throwable) {
                        throw lz.ccM(throwable);
                    }
                    bl = true;
                    break block10;
                }
                bl = false;
            }
            return bl;
        }
        catch (Throwable throwable) {
            return false;
        }
    }

    /*
     * Loose catch block
     */
    public boolean method_71655() {
        long l = KvTCM ^ 0x5AF209F308B0L;
        iS[] iSArray = lz.ccL();
        try {
            boolean bl;
            block10: {
                block9: {
                    block8: {
                        dh dh2 = rD.dlJ().aZx(dh.class);
                        bl = dh2.bag();
                        if (iSArray != null) break block8;
                        try {
                            block11: {
                                if (!bl) break block9;
                                break block11;
                                catch (Throwable throwable) {
                                    throw lz.ccM(throwable);
                                }
                            }
                            bl = dh2.aeW().SZ();
                        }
                        catch (Throwable throwable) {
                            throw lz.ccM(throwable);
                        }
                    }
                    try {
                        if (iSArray != null) break block10;
                        if (!bl) break block9;
                    }
                    catch (Throwable throwable) {
                        throw lz.ccM(throwable);
                    }
                    bl = true;
                    break block10;
                }
                bl = false;
            }
            return bl;
        }
        catch (Throwable throwable) {
            return false;
        }
    }

    public void method_42591(@NonNull class_7285 class_72852, @NonNull class_4184 class_41842, @NonNull class_638 class_6382, float f, @NonNull class_9779 class_97792) {
        block10: {
            long l = KvTCM ^ 0x25B1D2F3CD4L;
            iS[] iSArray = lz.ccL();
            try {
                dh dh2;
                float f2;
                float f3;
                dh dh3;
                block9: {
                    boolean bl;
                    block7: {
                        block8: {
                            dh3 = rD.dlJ().aZx(dh.class);
                            try {
                                bl = dh3.aeV().SZ();
                                if (iSArray != null) break block7;
                                if (!bl) break block8;
                            }
                            catch (Throwable throwable) {
                                throw lz.ccM(throwable);
                            }
                            f3 = Float.MAX_VALUE;
                            f2 = Float.MAX_VALUE;
                            class_72852.field_60582 = f3;
                            class_72852.field_60584 = f2;
                            class_72852.field_60583 = f3;
                            class_72852.field_60585 = f2;
                            class_72852.field_60099 = f2;
                            class_72852.field_60100 = f2;
                        }
                        try {
                            dh2 = dh3;
                            if (iSArray != null) break block9;
                            bl = dh2.aeW().SZ();
                        }
                        catch (Throwable throwable) {
                            throw lz.ccM(throwable);
                        }
                    }
                    if (!bl) break block10;
                    dh2 = dh3;
                }
                f3 = dh2.aeY().UP(0);
                f2 = dh3.aeY().UP(1);
                class_72852.field_60582 = f3;
                class_72852.field_60584 = f2;
                class_72852.field_60583 = f3;
                class_72852.field_60585 = f2;
                class_72852.field_60099 = f2;
                class_72852.field_60100 = f2;
            }
            catch (Throwable throwable) {
                // empty catch block
            }
        }
    }

    public int method_71654(@NonNull class_638 class_6382, @NonNull class_4184 class_41842, int n, float f) {
        try {
            dh dh2 = rD.dlJ().aZx(dh.class);
            float[] fArray = jk.bDt(dh2.aeX().Wh());
            return class_9848.method_61318((float)fArray[3], (float)fArray[0], (float)fArray[1], (float)fArray[2]);
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
