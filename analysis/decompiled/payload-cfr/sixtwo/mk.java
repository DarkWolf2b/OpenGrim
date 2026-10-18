/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.ibm.icu.impl.Pair
 *  mixin.accessors.EntityAccessor
 *  mixin.accessors.InterpolationHandlerAccessor
 *  mixin.accessors.LivingEntityAccessor
 *  mixin.accessors.SoundManagerAccessor
 *  net.minecraft.class_10185
 *  net.minecraft.class_10584
 *  net.minecraft.class_1297
 *  net.minecraft.class_1299
 *  net.minecraft.class_1309
 *  net.minecraft.class_1657
 *  net.minecraft.class_1753
 *  net.minecraft.class_1799
 *  net.minecraft.class_1802
 *  net.minecraft.class_1890
 *  net.minecraft.class_1937
 *  net.minecraft.class_241
 *  net.minecraft.class_243
 *  net.minecraft.class_299
 *  net.minecraft.class_3469
 *  net.minecraft.class_3532
 *  net.minecraft.class_5819
 *  net.minecraft.class_746
 *  net.minecraft.class_9278
 *  net.minecraft.class_9334
 */
package sixtwo;

import com.ibm.icu.impl.Pair;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Function;
import mixin.accessors.EntityAccessor;
import mixin.accessors.InterpolationHandlerAccessor;
import mixin.accessors.LivingEntityAccessor;
import mixin.accessors.SoundManagerAccessor;
import net.minecraft.class_10185;
import net.minecraft.class_10584;
import net.minecraft.class_1297;
import net.minecraft.class_1299;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_1753;
import net.minecraft.class_1799;
import net.minecraft.class_1802;
import net.minecraft.class_1890;
import net.minecraft.class_1937;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_299;
import net.minecraft.class_3469;
import net.minecraft.class_3532;
import net.minecraft.class_5819;
import net.minecraft.class_746;
import net.minecraft.class_9278;
import net.minecraft.class_9334;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.iV;
import sixtwo.jg;
import sixtwo.mK;
import sixtwo.mL;
import sixtwo.mk$uH;
import sixtwo.mk$uI;
import sixtwo.mk$uJ;
import sixtwo.mk$uK;
import sixtwo.mk$uL;
import sixtwo.mv;
import sixtwo.ov;
import sixtwo.rD;
import sixtwo.rx;

public class mk {
    public static final double niqAb = 0.006;
    private static final mv[] VXslL;
    public static final List<mk$uH> XJSIq;
    private static int[] LGqHZ;
    private static final long WjIdv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        WjIdv = gb.aYR(5973715133145077810L, 4515151093230620071L, MethodHandles.lookup().lookupClass()).a(218533993750122L);
        ArrayList<mv> arrayList = new ArrayList<mv>();
        mk.cld(null);
        for (int i = -1; i <= 1; ++i) {
            try {
                for (int j = -1; j <= 1; ++j) {
                    arrayList.add(mk.ckO(i, j));
                }
                continue;
            }
            catch (MatchException matchException) {
                throw mk.clf(matchException);
            }
        }
        VXslL = arrayList.toArray(new mv[0]);
        XJSIq = List.of(new mk$uH(class_1802.field_8102.getClass(), class_1299.field_6122, true, (class_17992, class_16652) -> {
            int n;
            block4: {
                block5: {
                    long l = WjIdv ^ 0x3BB408D0600CL;
                    int[] nArray = mk.cle();
                    try {
                        try {
                            n = rD.dlmvG.field_1724.method_6115();
                            if (nArray != null) break block4;
                            if (n == 0) break block5;
                        }
                        catch (MatchException matchException) {
                            throw mk.clf(matchException);
                        }
                        n = rD.dlmvG.field_1724.method_6048();
                        break block4;
                    }
                    catch (MatchException matchException) {
                        throw mk.clf(matchException);
                    }
                }
                n = class_17992.method_7935((class_1309)rD.dlmvG.field_1724);
            }
            double d = class_1753.method_7722((int)n);
            class_16652.method_24919((class_1297)rD.dlmvG.field_1724, rD.dlmvG.field_1724.method_36455(), rD.dlmvG.field_1724.method_36454(), 0.0f, (float)(d * 3.0), 1.0f);
        }), new mk$uH(class_1802.field_8543.getClass(), class_1299.field_6068, false, (class_17992, class_16652) -> class_16652.method_24919((class_1297)rD.dlmvG.field_1724, rD.dlmvG.field_1724.method_36455(), rD.dlmvG.field_1724.method_36454(), 0.0f, 1.5f, 1.0f)), new mk$uH(class_1802.field_8803.getClass(), class_1299.field_6144, false, (class_17992, class_16652) -> class_16652.method_24919((class_1297)rD.dlmvG.field_1724, rD.dlmvG.field_1724.method_36455(), rD.dlmvG.field_1724.method_36454(), 0.0f, 1.5f, 1.0f)), new mk$uH(class_1802.field_8634.getClass(), class_1299.field_6082, false, (class_17992, class_16652) -> class_16652.method_24919((class_1297)rD.dlmvG.field_1724, rD.dlmvG.field_1724.method_36455(), rD.dlmvG.field_1724.method_36454(), 0.0f, 1.5f, 1.0f)), new mk$uH(class_1802.field_8287.getClass(), class_1299.field_6064, false, (class_17992, class_16652) -> class_16652.method_24919((class_1297)rD.dlmvG.field_1724, rD.dlmvG.field_1724.method_36455(), rD.dlmvG.field_1724.method_36454(), -20.0f, 0.7f, 1.0f)), new mk$uH(class_1802.field_8436.getClass(), class_1299.field_56254, false, (class_17992, class_16652) -> class_16652.method_24919((class_1297)rD.dlmvG.field_1724, rD.dlmvG.field_1724.method_36455(), rD.dlmvG.field_1724.method_36454(), -20.0f, 0.5f, 1.0f)), new mk$uH(class_1802.field_8547.getClass(), class_1299.field_6127, true, (class_17992, class_16652) -> {
            float f = class_1890.method_60123((class_1799)class_17992, (class_1309)rD.dlmvG.field_1724);
            class_16652.method_24919((class_1297)rD.dlmvG.field_1724, rD.dlmvG.field_1724.method_36455(), rD.dlmvG.field_1724.method_36454(), 0.0f, 2.5f + f * 0.5f, 1.0f);
        }), new mk$uH(class_1802.field_8378.getClass(), class_1299.field_6103, false, (class_17992, class_16652) -> {
            float f = rD.dlmvG.field_1724.method_36455();
            float f2 = rD.dlmvG.field_1724.method_36454();
            float f3 = class_3532.method_15362((double)((float)Math.toRadians(-f2) - (float)Math.PI));
            float f4 = class_3532.method_15374((double)((float)Math.toRadians(-f2) - (float)Math.PI));
            float f5 = -class_3532.method_15362((double)((float)Math.toRadians(-f)));
            float f6 = class_3532.method_15374((double)((float)Math.toRadians(-f)));
            class_16652.method_5808(class_16652.method_23317() - (double)f4 * 0.3, class_16652.method_23318() + 0.1, class_16652.method_23321() - (double)f3 * 0.3, f, f2);
            class_243 class_2432 = new class_243((double)(-f4), (double)class_3532.method_15363((float)(-(f6 / f5)), (float)-5.0f, (float)5.0f), (double)(-f3));
            double d = class_2432.method_1033();
            EntityAccessor entityAccessor = (EntityAccessor)class_16652;
            class_5819 class_58192 = entityAccessor.getRandom();
            class_243 class_2433 = new class_243(0.6 / d + class_58192.method_43385(0.5, 0.0103365), 0.6 / d + class_58192.method_43385(0.5, 0.0103365), 0.6 / d + class_58192.method_43385(0.5, 0.0103365));
            class_2432 = class_2432.method_18805(class_2433.field_1352, class_2433.field_1351, class_2433.field_1350);
            class_16652.method_18799(class_2432);
            ov ov2 = iV.bxm(class_2432);
            class_16652.method_36456(ov2.cGI());
            class_16652.field_5982 = ov2.cGI();
            class_16652.method_36457(ov2.cGJ());
            class_16652.field_6004 = ov2.cGJ();
        }), new mk$uH(class_1802.field_8399.getClass(), class_1299.field_6122, true, (class_17992, class_16652) -> class_16652.method_24919((class_1297)rD.dlmvG.field_1724, rD.dlmvG.field_1724.method_36455(), rD.dlmvG.field_1724.method_36454(), 0.0f, mk.ckQ(class_17992), 1.0f)));
    }

    private static MatchException clf(MatchException matchException) {
        return matchException;
    }

    public static int[] cle() {
        return LGqHZ;
    }

    public static void cld(int[] nArray) {
        LGqHZ = nArray;
    }

    /*
     * Unable to fully structure code
     */
    public static Pair<class_746, ArrayList<class_243>> ckM(int var0, class_1657 var1_1, mv var2_2, Function<class_746, Boolean> var3_3) {
        block42: {
            block41: {
                block38: {
                    block43: {
                        block37: {
                            block36: {
                                block34: {
                                    block35: {
                                        block32: {
                                            block33: {
                                                block31: {
                                                    block30: {
                                                        var4_4 = mk.WjIdv ^ 62344234370371L;
                                                        var7_5 = var1_1.method_18798();
                                                        var6_6 = mk.cle();
                                                        var8_7 = new class_243(var7_5.field_1352, var7_5.field_1351, var7_5.field_1350);
                                                        var9_8 = rD.dlmvG.field_1724.method_18798();
                                                        try {
                                                            v0 = rD.dlmvG.field_1724 != null ? new class_243(var9_8.field_1352, var9_8.field_1351, var9_8.field_1350) : null;
                                                        }
                                                        catch (MatchException v1) {
                                                            throw mk.clf(v1);
                                                        }
                                                        var10_9 = v0;
                                                        var11_10 = ((SoundManagerAccessor)rD.dlmvG.method_1483()).getSoundEngine();
                                                        ((mK)var11_10).setSoundDisabled(true);
                                                        var12_11 = new mk$uL(rD.dlmvG, rD.dlmvG.field_1687, rx.dkv(), new class_3469(), new class_299(), class_10185.field_54098, false);
                                                        try {
                                                            v2 = var2_2;
                                                            if (var6_6 != null) break block30;
                                                            if (v2 == null) break block31;
                                                        }
                                                        catch (MatchException v3) {
                                                            throw mk.clf(v3);
                                                        }
                                                        v2 = var2_2;
                                                    }
                                                    var13_12 = v2;
                                                    try {
                                                        if (var6_6 == null) break block32;
                                                        iS.bwK("zyySG");
                                                    }
                                                    catch (MatchException v4) {
                                                        throw mk.clf(v4);
                                                    }
                                                }
                                                try {
                                                    v5 = var1_1;
                                                    if (var6_6 != null) break block33;
                                                    if (v5 == rD.dlmvG.field_1724) {
                                                    }
                                                    ** GOTO lbl47
                                                }
                                                catch (MatchException v6) {
                                                    throw mk.clf(v6);
                                                }
                                                var14_13 = (class_746)var1_1;
                                                var15_14 = var14_13.field_3913;
                                                var16_15 = var15_14.method_3128();
                                                var13_12 = new mv(var16_15.field_1342, var16_15.field_1343);
                                                try {
                                                    var13_12.GgKkk = var15_14.field_54155.comp_3163();
                                                    var13_12.SuYKY = var14_13.method_5715();
                                                    if (var6_6 == null) break block32;
lbl47:
                                                    // 2 sources

                                                    v5 = var1_1;
                                                }
                                                catch (MatchException v7) {
                                                    throw mk.clf(v7);
                                                }
                                            }
                                            var13_12 = mk.ckN(v5);
                                        }
                                        try {
                                            var12_11.field_3913 = new mk$uK(var13_12, var12_11);
                                            var12_11.method_33689();
                                            var12_11.method_5719((class_1297)var1_1);
                                            var12_11.method_5878((class_1297)var1_1);
                                            if (var6_6 != null) break block34;
                                            if (var1_1 != rD.dlmvG.field_1724) break block35;
                                        }
                                        catch (MatchException v8) {
                                            throw mk.clf(v8);
                                        }
                                        var14_13 = rD.dlX().dbC();
                                        var12_11.method_36456(var14_13.cGI());
                                        var12_11.method_36457(var14_13.cGJ());
                                    }
                                    var12_11.method_24830(var1_1.method_24828());
                                }
                                try {
                                    try {
                                        v9 = var12_11;
                                        v10 = var1_1;
                                        if (var6_6 != null) break block36;
                                        if (v10 != rD.dlmvG.field_1724) break block37;
                                    }
                                    catch (MatchException v11) {
                                        throw mk.clf(v11);
                                    }
                                    v10 = var1_1;
                                }
                                catch (MatchException v12) {
                                    throw mk.clf(v12);
                                }
                            }
                            v13 = v10.method_18798();
                            break block43;
                        }
                        v13 = class_243.field_1353;
                    }
                    v9.method_18799(v13);
                    var12_11.method_18380(var1_1.method_18376());
                    ((LivingEntityAccessor)var12_11).setJumpDelay(((LivingEntityAccessor)var1_1).getJumpDelay());
                    ((EntityAccessor)var12_11).setWasEyeInWater(var1_1.method_5869());
                    ((EntityAccessor)var12_11).setWasTouchingWater(var1_1.method_5799());
                    var12_11.method_5728(var1_1.method_5624());
                    var12_11.method_5660(var1_1.method_5715());
                    var12_11.field_5992 = var1_1.field_5992;
                    var12_11.field_5976 = var1_1.field_5976;
                    var12_11.field_34927 = var1_1.field_34927;
                    var14_13 = rD.dlmvG.field_1713;
                    ((mL)var14_13).setParticlesDisabled(true);
                    var15_14 = new ArrayList<E>();
                    var16_16 = 0;
                    while (var16_16 < var0) {
                        block39: {
                            try {
                                block40: {
                                    try {
                                        try {
                                            try {
                                                var12_11.method_22862();
                                                ++var12_11.field_6012;
                                                var12_11.method_5773();
                                                var15_14.add(var12_11.method_73189());
                                                if (var6_6 != null) break block38;
                                                if (var6_6 != null) break block39;
                                            }
                                            catch (MatchException v14) {
                                                throw mk.clf(v14);
                                            }
                                            if (!var3_3.apply(var12_11).booleanValue()) break block40;
                                        }
                                        catch (MatchException v15) {
                                            throw mk.clf(v15);
                                        }
                                        if (var6_6 == null) break;
                                    }
                                    catch (MatchException v16) {
                                        throw mk.clf(v16);
                                    }
                                }
                                ++var16_16;
                            }
                            catch (MatchException v17) {
                                throw mk.clf(v17);
                            }
                        }
                        if (var6_6 == null) continue;
                    }
                    ((mK)var11_10).setSoundDisabled(false);
                    ((mL)var14_13).setParticlesDisabled(false);
                    var1_1.method_18799(var8_7);
                }
                try {
                    try {
                        v18 = rD.dlmvG.field_1724;
                        if (var6_6 != null) break block41;
                        if (v18 == null) break block42;
                    }
                    catch (MatchException v19) {
                        throw mk.clf(v19);
                    }
                    v18 = rD.dlmvG.field_1724;
                }
                catch (MatchException v20) {
                    throw mk.clf(v20);
                }
            }
            v18.method_18799(var10_9);
        }
        return Pair.of((Object)var12_11, (Object)var15_14);
    }

    public static Pair<class_746, ArrayList<class_243>> ckL(int n) {
        return mk.ckM(n, (class_1657)rD.dlmvG.field_1724, null, class_7462 -> false);
    }

    public static mv ckO(float f, float f2) {
        mv mv2 = new mv(f, f2);
        return mv2;
    }

    public static mv ckP(mv mv2, boolean bl, boolean bl2) {
        mv mv3 = mk.ckO(mv2.vGEel, mv2.mgoqe);
        mv3.GgKkk = bl;
        mv3.SuYKY = bl2;
        return mv3;
    }

    public static ArrayList<class_243> ckR(class_1799 class_17992, ov ov2, boolean bl) {
        ArrayList<class_243> arrayList;
        ArrayList<class_243> arrayList2;
        block28: {
            int n;
            class_243 class_2432;
            ov ov3;
            int[] nArray;
            mk$uJ mk$uJ;
            boolean[] blArray;
            mk$uH mk$uH2;
            block27: {
                block26: {
                    long l = WjIdv ^ 0x279EA54803C8L;
                    mk$uH2 = XJSIq.stream().filter(mk$uH -> mk$uH.isSame(class_17992.method_7909())).findFirst().orElseThrow();
                    arrayList2 = new ArrayList<class_243>();
                    blArray = new boolean[]{false};
                    mk$uJ = new mk$uJ(mk$uH2.entityType, (class_1937)rD.dlmvG.field_1687, blArray, mk$uH2);
                    float f = rD.dlmvG.method_61966().method_60637(true);
                    int[] nArray2 = mk.cle();
                    class_243 class_2433 = rD.dlmvG.field_1724.method_30950(f);
                    mk$uJ.method_5808(class_2433.field_1352, class_2433.field_1351 + (double)rD.dlmvG.field_1724.method_5751() - 0.1, class_2433.field_1350, rD.dlmvG.field_1724.method_36455(), rD.dlmvG.field_1724.method_36454());
                    EntityAccessor entityAccessor = (EntityAccessor)mk$uJ;
                    class_5819 class_58192 = entityAccessor.getRandom();
                    nArray = nArray2;
                    entityAccessor.setRandom((class_5819)new mk$uI(class_58192));
                    class_241 class_2412 = rD.dlmvG.field_1724.method_5802();
                    ov3 = ov.cGv(class_2412.field_1342, class_2412.field_1343);
                    class_2432 = rD.dlmvG.field_1724.method_18798();
                    try {
                        try {
                            if (nArray != null) break block26;
                            if (ov2 == null) break block27;
                        }
                        catch (MatchException matchException) {
                            throw mk.clf(matchException);
                        }
                        rD.dlmvG.field_1724.method_36456(ov2.cGI());
                    }
                    catch (MatchException matchException) {
                        throw mk.clf(matchException);
                    }
                }
                rD.dlmvG.field_1724.method_36457(ov2.cGJ());
            }
            try {
                if (!bl) {
                    rD.dlmvG.field_1724.method_18799(class_243.field_1353);
                }
            }
            catch (MatchException matchException) {
                throw mk.clf(matchException);
            }
            mk$uH2.setupRoutine.accept(class_17992, mk$uJ);
            rD.dlmvG.field_1724.method_18799(class_2432);
            rD.dlmvG.field_1724.method_36456(ov3.cGI());
            rD.dlmvG.field_1724.method_36457(ov3.cGJ());
            while (!blArray[0]) {
                class_243 class_2434;
                class_243 class_2435;
                block31: {
                    ArrayList<class_243> arrayList3;
                    block29: {
                        block30: {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    double d = mk$uJ.method_18798().method_1027() - 0.0;
                                                    n = d == 0.0 ? 0 : (d > 0.0 ? 1 : -1);
                                                    if (nArray != null) break block28;
                                                    if (n == 0) break;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mk.clf(matchException);
                                                }
                                                arrayList2.add(mk$uJ.method_73189());
                                                mk$uJ.method_5773();
                                                double d = mk$uJ.method_73189().field_1351 - (double)rD.dlmvG.field_1687.method_31607();
                                                n = d == 0.0 ? 0 : (d < 0.0 ? -1 : 1);
                                                if (nArray != null) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw mk.clf(matchException);
                                            }
                                            if (n < 0) break;
                                        }
                                        catch (MatchException matchException) {
                                            throw mk.clf(matchException);
                                        }
                                        class_2435 = mk$uJ.method_73189();
                                        arrayList3 = arrayList2;
                                        if (nArray != null) break block29;
                                    }
                                    catch (MatchException matchException) {
                                        throw mk.clf(matchException);
                                    }
                                    if (!arrayList3.isEmpty()) break block30;
                                }
                                catch (MatchException matchException) {
                                    throw mk.clf(matchException);
                                }
                                class_2434 = null;
                                break block31;
                            }
                            catch (MatchException matchException) {
                                throw mk.clf(matchException);
                            }
                        }
                        arrayList3 = arrayList2;
                    }
                    class_2434 = arrayList3.get(arrayList2.size() - 1);
                }
                if (!class_2435.equals((Object)class_2434)) continue;
                try {
                    if (nArray == null) {
                        break;
                    }
                    break block28;
                }
                catch (MatchException matchException) {
                    throw mk.clf(matchException);
                }
            }
            n = arrayList2.add(mk$uJ.method_73189());
        }
        try {
            arrayList = arrayList2;
            if (iS.bwL() == null) {
                mk.cld(new int[1]);
            }
        }
        catch (MatchException matchException) {
            throw mk.clf(matchException);
        }
        return arrayList;
    }

    private static mv ckN(class_1657 class_16572) {
        mv mv2;
        block30: {
            long l = WjIdv ^ 0x42F2AD094F47L;
            class_243 class_2432 = ((InterpolationHandlerAccessor)class_16572.method_66233()).getPreviousTickPosition();
            int[] nArray = mk.cle();
            try {
                if (class_2432 == null) {
                    return mk.ckO(0.0f, 0.0f);
                }
            }
            catch (MatchException matchException) {
                throw mk.clf(matchException);
            }
            class_10584 class_105842 = class_16572.method_66233();
            class_243 class_2433 = class_105842.method_66265();
            class_243 class_2434 = class_2433.method_1020(class_2432);
            mv mv3 = null;
            double d = Double.MAX_VALUE;
            mv[] mvArray = VXslL;
            int n = mvArray.length;
            int n2 = 0;
            while (n2 < n) {
                block39: {
                    block38: {
                        class_243 class_2435;
                        mv mv4;
                        block41: {
                            block40: {
                                double d2;
                                block36: {
                                    float f;
                                    block35: {
                                        block34: {
                                            block33: {
                                                boolean bl;
                                                block31: {
                                                    block32: {
                                                        mv mv5 = mvArray[n2];
                                                        try {
                                                            try {
                                                                mv2 = mv5;
                                                                if (nArray != null) break block30;
                                                                bl = class_16572.method_24828();
                                                                if (nArray != null) break block31;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw mk.clf(matchException);
                                                            }
                                                            if (bl) break block32;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw mk.clf(matchException);
                                                        }
                                                        bl = true;
                                                        break block31;
                                                    }
                                                    bl = false;
                                                }
                                                mv4 = mk.ckP(mv2, bl, class_16572.method_5715());
                                                try {
                                                    try {
                                                        float f2 = mv4.vGEel - 0.0f;
                                                        f = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                                                        if (nArray != null) break block33;
                                                        if (f != false) break block34;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw mk.clf(matchException);
                                                    }
                                                    float f3 = mv4.mgoqe - 0.0f;
                                                    f = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                                                }
                                                catch (MatchException matchException) {
                                                    throw mk.clf(matchException);
                                                }
                                            }
                                            try {
                                                if (nArray != null) break block35;
                                                if (f != false) break block34;
                                            }
                                            catch (MatchException matchException) {
                                                throw mk.clf(matchException);
                                            }
                                            f = 1.0f;
                                            break block35;
                                        }
                                        f = 0.0f;
                                    }
                                    float f4 = f;
                                    try {
                                        block37: {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            double d3 = class_2434.method_37268() - 0.0;
                                                            d2 = d3 == 0.0 ? 0 : (d3 > 0.0 ? 1 : -1);
                                                            if (nArray != null) break block36;
                                                            if (d2 <= 0) break block37;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw mk.clf(matchException);
                                                        }
                                                        d2 = f4;
                                                        if (nArray != null) break block36;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw mk.clf(matchException);
                                                    }
                                                    if (d2 == false) break block37;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mk.clf(matchException);
                                                }
                                                if (nArray == null) break block38;
                                            }
                                            catch (MatchException matchException) {
                                                throw mk.clf(matchException);
                                            }
                                        }
                                        d2 = f4;
                                    }
                                    catch (MatchException matchException) {
                                        throw mk.clf(matchException);
                                    }
                                }
                                if (d2 == false) break block40;
                                class_2435 = class_243.field_1353;
                                if (nArray == null) break block41;
                            }
                            class_241 class_2412 = mv4.cmC();
                            class_243 class_2436 = new class_243((double)class_2412.field_1343, 0.0, (double)class_2412.field_1342);
                            class_2435 = jg.bBE(class_2436, 1.0f, class_105842.method_66268());
                        }
                        double d4 = class_2434.method_1022(class_2435);
                        try {
                            if (nArray != null) break block39;
                            if (!(d4 < d)) break block38;
                        }
                        catch (MatchException matchException) {
                            throw mk.clf(matchException);
                        }
                        d = d4;
                        mv3 = mv4;
                    }
                    ++n2;
                }
                if (nArray == null) continue;
            }
            mv2 = mv3;
        }
        return mv2;
    }

    private static float ckQ(class_1799 class_17992) {
        float f;
        class_9278 class_92782;
        block6: {
            class_9278 class_92783;
            block7: {
                long l = WjIdv ^ 0x67C98518CFBAL;
                class_92783 = (class_9278)class_17992.method_58694(class_9334.field_49649);
                int[] nArray = mk.cle();
                try {
                    try {
                        class_92782 = class_92783;
                        if (nArray != null) break block6;
                        if (class_92782 != null) break block7;
                    }
                    catch (MatchException matchException) {
                        throw mk.clf(matchException);
                    }
                    return 1.6f;
                }
                catch (MatchException matchException) {
                    throw mk.clf(matchException);
                }
            }
            class_92782 = class_92783;
        }
        try {
            f = class_92782.method_57438(class_1802.field_8639) ? 1.6f : 3.15f;
        }
        catch (MatchException matchException) {
            throw mk.clf(matchException);
        }
        return f;
    }
}
