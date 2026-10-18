/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_10055
 *  net.minecraft.class_10186
 *  net.minecraft.class_10186$class_10190
 *  net.minecraft.class_10192
 *  net.minecraft.class_10201
 *  net.minecraft.class_11659
 *  net.minecraft.class_11683$class_11792
 *  net.minecraft.class_12249
 *  net.minecraft.class_1297
 *  net.minecraft.class_1799
 *  net.minecraft.class_2960
 *  net.minecraft.class_3883
 *  net.minecraft.class_3887
 *  net.minecraft.class_4587
 *  net.minecraft.class_4608
 *  net.minecraft.class_5321
 *  net.minecraft.class_5599
 *  net.minecraft.class_5602
 *  net.minecraft.class_572
 *  net.minecraft.class_591
 *  net.minecraft.class_742
 *  net.minecraft.class_9334
 *  net.minecraft.class_9950
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_10055;
import net.minecraft.class_10186;
import net.minecraft.class_10192;
import net.minecraft.class_10201;
import net.minecraft.class_11659;
import net.minecraft.class_11683;
import net.minecraft.class_12249;
import net.minecraft.class_1297;
import net.minecraft.class_1799;
import net.minecraft.class_2960;
import net.minecraft.class_3883;
import net.minecraft.class_3887;
import net.minecraft.class_4587;
import net.minecraft.class_4608;
import net.minecraft.class_5321;
import net.minecraft.class_5599;
import net.minecraft.class_5602;
import net.minecraft.class_572;
import net.minecraft.class_591;
import net.minecraft.class_742;
import net.minecraft.class_9334;
import net.minecraft.class_9950;
import sixtwo.ee;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.iS;
import sixtwo.qC;
import sixtwo.qu;
import sixtwo.rD;

public class qE
extends class_3887<class_10055, class_591> {
    private final class_572<class_10055> jmbPO;
    private final class_10201 VDPZF;
    private static final long gmDen = gb.aYR(1610285853023546737L, 3427000863365390479L, MethodHandles.lookup().lookupClass()).a(189872680527603L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qE(class_3883<class_10055, class_591> class_38832, class_5599 class_55992, class_10201 class_102012) {
        long l = gmDen ^ 0x5EE9785E0C1FL;
        super(class_38832);
        this.jmbPO = new class_9950(class_55992.method_32072(class_5602.field_52980));
        boolean bl = qC.cZy();
        try {
            this.VDPZF = class_102012;
            if (!bl) {
                iS.bwK("Ujbrd");
            }
        }
        catch (MatchException matchException) {
            throw qE.cZJ(matchException);
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void cZI(class_4587 class_45872, class_11659 class_116592, int n, class_10055 class_100552, float f, float f2) {
        block38: {
            boolean bl;
            class_2960 class_29602;
            block37: {
                boolean bl2;
                class_742 class_7422;
                boolean bl3;
                block36: {
                    block35: {
                        class_1297 class_12972;
                        block34: {
                            boolean bl4;
                            block33: {
                                long l = gmDen ^ 0x1F7E965FE8CBL;
                                bl3 = qC.cZz();
                                try {
                                    if (rD.dlmvG.field_1687 == null) {
                                        return;
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw qE.cZJ(matchException);
                                }
                                try {
                                    bl4 = qu.cmARD.get();
                                    if (bl3) break block33;
                                    if (bl4) return;
                                }
                                catch (MatchException matchException) {
                                    throw qE.cZJ(matchException);
                                }
                                bl4 = hF.BQuMu;
                            }
                            if (!bl4) {
                                return;
                            }
                            class_1297 class_12973 = rD.dlmvG.field_1687.method_8469(class_100552.field_53528);
                            try {
                                try {
                                    class_12972 = class_12973;
                                    if (bl3) break block34;
                                    if (!(class_12972 instanceof class_742)) return;
                                }
                                catch (MatchException matchException) {
                                    throw qE.cZJ(matchException);
                                }
                                class_12972 = class_12973;
                            }
                            catch (MatchException matchException) {
                                throw qE.cZJ(matchException);
                            }
                        }
                        class_7422 = (class_742)class_12972;
                        try {
                            if (bl3) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        ee ee2 = rD.dlJ().aZx(ee.class);
                        try {
                            try {
                                bl2 = class_100552.field_53333;
                                if (bl3) break block35;
                                if (bl2) return;
                            }
                            catch (MatchException matchException) {
                                throw qE.cZJ(matchException);
                            }
                            bl2 = ee2.bag();
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                    }
                    try {
                        try {
                            if (bl3) break block36;
                            if (!bl2) return;
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        bl2 = class_100552.field_53532;
                    }
                    catch (MatchException matchException) {
                        throw qE.cZJ(matchException);
                    }
                }
                if (!bl2) return;
                class_29602 = rD.dlT().daj(class_7422);
                try {
                    if (class_29602 == null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw qE.cZJ(matchException);
                }
                try {
                    try {
                        try {
                            bl = this.cZH(class_100552.field_53418, class_10186.class_10190.field_54127);
                            if (bl3) break block37;
                            if (bl) return;
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        class_45872.method_22903();
                        if (bl3) break block38;
                    }
                    catch (MatchException matchException) {
                        throw qE.cZJ(matchException);
                    }
                    bl = this.cZH(class_100552.field_53418, class_10186.class_10190.field_54125);
                }
                catch (MatchException matchException) {
                    throw qE.cZJ(matchException);
                }
            }
            try {
                if (bl) {
                    class_45872.method_46416(0.0f, -0.053125f, 0.06875f);
                }
            }
            catch (MatchException matchException) {
                throw qE.cZJ(matchException);
            }
            class_116592.method_73489(this.jmbPO, (Object)class_100552, class_45872, class_12249.method_75982((class_2960)class_29602), n, class_4608.field_21444, class_100552.field_61821, (class_11683.class_11792)null);
        }
        class_45872.method_22909();
    }

    private boolean cZH(class_1799 class_17992, class_10186.class_10190 class_101902) {
        boolean bl;
        block8: {
            block7: {
                boolean bl2;
                block9: {
                    block10: {
                        class_10192 class_101922;
                        boolean bl3;
                        class_10192 class_101923;
                        block6: {
                            long l = gmDen ^ 0x421E4184392L;
                            class_101923 = (class_10192)class_17992.method_58694(class_9334.field_54196);
                            bl3 = qC.cZy();
                            try {
                                class_101922 = class_101923;
                                if (!bl3) break block6;
                                if (class_101922 == null) break block7;
                            }
                            catch (MatchException matchException) {
                                throw qE.cZJ(matchException);
                            }
                            class_101922 = class_101923;
                        }
                        try {
                            bl = class_101922.comp_3176().isPresent();
                            if (!bl3) break block8;
                            if (!bl) break block7;
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        class_10186 class_101862 = this.VDPZF.method_64087((class_5321)class_101923.comp_3176().get());
                        try {
                            bl2 = class_101862.method_63996(class_101902).isEmpty();
                            if (!bl3) break block9;
                            if (bl2) break block10;
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        bl2 = true;
                        break block9;
                    }
                    bl2 = false;
                }
                return bl2;
            }
            bl = false;
        }
        return bl;
    }

    private static MatchException cZJ(MatchException matchException) {
        return matchException;
    }
}
