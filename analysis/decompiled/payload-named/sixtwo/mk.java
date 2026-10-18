/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.ibm.icu.impl.Pair
 *  mixin.accessors.EntityAccessor
 *  mixin.accessors.InterpolationHandlerAccessor
 *  mixin.accessors.LivingEntityAccessor
 *  mixin.accessors.SoundManagerAccessor
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.recipebook.ClientRecipeBook
 *  net.minecraft.component.DataComponentTypes
 *  net.minecraft.component.type.ChargedProjectilesComponent
 *  net.minecraft.enchantment.EnchantmentHelper
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.EntityType
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.PositionInterpolator
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.BowItem
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.Items
 *  net.minecraft.stat.StatHandler
 *  net.minecraft.util.PlayerInput
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.util.math.random.Random
 *  net.minecraft.world.World
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
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.recipebook.ClientRecipeBook;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.ChargedProjectilesComponent;
import net.minecraft.enchantment.EnchantmentHelper;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.PositionInterpolator;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.BowItem;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.stat.StatHandler;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import net.minecraft.util.math.random.Random;
import net.minecraft.world.World;
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
        for (int i2 = -1; i2 <= 1; ++i2) {
            try {
                for (int i3 = -1; i3 <= 1; ++i3) {
                    arrayList.add(mk.ckO(i2, i3));
                }
                continue;
            }
            catch (MatchException matchException) {
                throw mk.clf(matchException);
            }
        }
        VXslL = arrayList.toArray(new mv[0]);
        XJSIq = List.of(new mk$uH(Items.BOW.getClass(), EntityType.ARROW, true, (itemStack, persistentProjectileEntity) -> {
            int n2;
            block4: {
                block5: {
                    long l2 = WjIdv ^ 0x3BB408D0600CL;
                    int[] nArray = mk.cle();
                    try {
                        try {
                            n2 = rD.dlmvG.player.isUsingItem();
                            if (nArray != null) break block4;
                            if (n2 == 0) break block5;
                        }
                        catch (MatchException matchException) {
                            throw mk.clf(matchException);
                        }
                        n2 = rD.dlmvG.player.getItemUseTime();
                        break block4;
                    }
                    catch (MatchException matchException) {
                        throw mk.clf(matchException);
                    }
                }
                n2 = itemStack.getMaxUseTime((LivingEntity)rD.dlmvG.player);
            }
            double d2 = BowItem.getPullProgress((int)n2);
            persistentProjectileEntity.setVelocity((Entity)rD.dlmvG.player, rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw(), 0.0f, (float)(d2 * 3.0), 1.0f);
        }), new mk$uH(Items.SNOWBALL.getClass(), EntityType.SNOWBALL, false, (itemStack, persistentProjectileEntity) -> persistentProjectileEntity.setVelocity((Entity)rD.dlmvG.player, rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw(), 0.0f, 1.5f, 1.0f)), new mk$uH(Items.EGG.getClass(), EntityType.EGG, false, (itemStack, persistentProjectileEntity) -> persistentProjectileEntity.setVelocity((Entity)rD.dlmvG.player, rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw(), 0.0f, 1.5f, 1.0f)), new mk$uH(Items.ENDER_PEARL.getClass(), EntityType.ENDER_PEARL, false, (itemStack, persistentProjectileEntity) -> persistentProjectileEntity.setVelocity((Entity)rD.dlmvG.player, rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw(), 0.0f, 1.5f, 1.0f)), new mk$uH(Items.EXPERIENCE_BOTTLE.getClass(), EntityType.EXPERIENCE_BOTTLE, false, (itemStack, persistentProjectileEntity) -> persistentProjectileEntity.setVelocity((Entity)rD.dlmvG.player, rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw(), -20.0f, 0.7f, 1.0f)), new mk$uH(Items.SPLASH_POTION.getClass(), EntityType.SPLASH_POTION, false, (itemStack, persistentProjectileEntity) -> persistentProjectileEntity.setVelocity((Entity)rD.dlmvG.player, rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw(), -20.0f, 0.5f, 1.0f)), new mk$uH(Items.TRIDENT.getClass(), EntityType.TRIDENT, true, (itemStack, persistentProjectileEntity) -> {
            float f2 = EnchantmentHelper.getTridentSpinAttackStrength((ItemStack)itemStack, (LivingEntity)rD.dlmvG.player);
            persistentProjectileEntity.setVelocity((Entity)rD.dlmvG.player, rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw(), 0.0f, 2.5f + f2 * 0.5f, 1.0f);
        }), new mk$uH(Items.FISHING_ROD.getClass(), EntityType.FISHING_BOBBER, false, (itemStack, persistentProjectileEntity) -> {
            float f2 = rD.dlmvG.player.getPitch();
            float f3 = rD.dlmvG.player.getYaw();
            float f4 = MathHelper.cos((double)((float)Math.toRadians(-f3) - (float)Math.PI));
            float f5 = MathHelper.sin((double)((float)Math.toRadians(-f3) - (float)Math.PI));
            float f6 = -MathHelper.cos((double)((float)Math.toRadians(-f2)));
            float f7 = MathHelper.sin((double)((float)Math.toRadians(-f2)));
            persistentProjectileEntity.refreshPositionAndAngles(persistentProjectileEntity.getX() - (double)f5 * 0.3, persistentProjectileEntity.getY() + 0.1, persistentProjectileEntity.getZ() - (double)f4 * 0.3, f2, f3);
            Vec3d vec3d = new Vec3d((double)(-f5), (double)MathHelper.clamp((float)(-(f7 / f6)), (float)-5.0f, (float)5.0f), (double)(-f4));
            double d2 = vec3d.length();
            EntityAccessor entityAccessor = (EntityAccessor)persistentProjectileEntity;
            Random random = entityAccessor.getRandom();
            Vec3d vec3d2 = new Vec3d(0.6 / d2 + random.nextTriangular(0.5, 0.0103365), 0.6 / d2 + random.nextTriangular(0.5, 0.0103365), 0.6 / d2 + random.nextTriangular(0.5, 0.0103365));
            vec3d = vec3d.multiply(vec3d2.x, vec3d2.y, vec3d2.z);
            persistentProjectileEntity.setVelocity(vec3d);
            ov ov2 = iV.bxm(vec3d);
            persistentProjectileEntity.setYaw(ov2.cGI());
            persistentProjectileEntity.lastYaw = ov2.cGI();
            persistentProjectileEntity.setPitch(ov2.cGJ());
            persistentProjectileEntity.lastPitch = ov2.cGJ();
        }), new mk$uH(Items.CROSSBOW.getClass(), EntityType.ARROW, true, (itemStack, persistentProjectileEntity) -> persistentProjectileEntity.setVelocity((Entity)rD.dlmvG.player, rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw(), 0.0f, mk.ckQ(itemStack), 1.0f)));
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
    public static Pair<ClientPlayerEntity, ArrayList<Vec3d>> ckM(int var0, PlayerEntity var1_1, mv var2_2, Function<ClientPlayerEntity, Boolean> var3_3) {
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
                                                        var7_5 = var1_1.getVelocity();
                                                        var6_6 = mk.cle();
                                                        var8_7 = new Vec3d(var7_5.x, var7_5.y, var7_5.z);
                                                        var9_8 = rD.dlmvG.player.getVelocity();
                                                        try {
                                                            v0 = rD.dlmvG.player != null ? new Vec3d(var9_8.x, var9_8.y, var9_8.z) : null;
                                                        }
                                                        catch (MatchException v1) {
                                                            throw mk.clf(v1);
                                                        }
                                                        var10_9 = v0;
                                                        var11_10 = ((SoundManagerAccessor)rD.dlmvG.getSoundManager()).getSoundEngine();
                                                        ((mK)var11_10).setSoundDisabled(true);
                                                        var12_11 = new mk$uL(rD.dlmvG, rD.dlmvG.world, rx.dkv(), new StatHandler(), new ClientRecipeBook(), PlayerInput.DEFAULT, false);
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
                                                    if (v5 == rD.dlmvG.player) {
                                                    }
                                                    ** GOTO lbl47
                                                }
                                                catch (MatchException v6) {
                                                    throw mk.clf(v6);
                                                }
                                                var14_13 = (ClientPlayerEntity)var1_1;
                                                var15_14 = var14_13.input;
                                                var16_15 = var15_14.getMovementInput();
                                                var13_12 = new mv(var16_15.y, var16_15.x);
                                                try {
                                                    var13_12.GgKkk = var15_14.playerInput.jump();
                                                    var13_12.SuYKY = var14_13.isSneaking();
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
                                            var12_11.input = new mk$uK(var13_12, var12_11);
                                            var12_11.init();
                                            var12_11.copyPositionAndRotation((Entity)var1_1);
                                            var12_11.copyFrom((Entity)var1_1);
                                            if (var6_6 != null) break block34;
                                            if (var1_1 != rD.dlmvG.player) break block35;
                                        }
                                        catch (MatchException v8) {
                                            throw mk.clf(v8);
                                        }
                                        var14_13 = rD.dlX().dbC();
                                        var12_11.setYaw(var14_13.cGI());
                                        var12_11.setPitch(var14_13.cGJ());
                                    }
                                    var12_11.setOnGround(var1_1.isOnGround());
                                }
                                try {
                                    try {
                                        v9 = var12_11;
                                        v10 = var1_1;
                                        if (var6_6 != null) break block36;
                                        if (v10 != rD.dlmvG.player) break block37;
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
                            v13 = v10.getVelocity();
                            break block43;
                        }
                        v13 = Vec3d.ZERO;
                    }
                    v9.setVelocity(v13);
                    var12_11.setPose(var1_1.getPose());
                    ((LivingEntityAccessor)var12_11).setJumpDelay(((LivingEntityAccessor)var1_1).getJumpDelay());
                    ((EntityAccessor)var12_11).setWasEyeInWater(var1_1.isSubmergedInWater());
                    ((EntityAccessor)var12_11).setWasTouchingWater(var1_1.isTouchingWater());
                    var12_11.setSprinting(var1_1.isSprinting());
                    var12_11.setSneaking(var1_1.isSneaking());
                    var12_11.verticalCollision = var1_1.verticalCollision;
                    var12_11.horizontalCollision = var1_1.horizontalCollision;
                    var12_11.collidedSoftly = var1_1.collidedSoftly;
                    var14_13 = rD.dlmvG.particleManager;
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
                                                var12_11.resetPosition();
                                                ++var12_11.age;
                                                var12_11.tick();
                                                var15_14.add(var12_11.getEntityPos());
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
                    var1_1.setVelocity(var8_7);
                }
                try {
                    try {
                        v18 = rD.dlmvG.player;
                        if (var6_6 != null) break block41;
                        if (v18 == null) break block42;
                    }
                    catch (MatchException v19) {
                        throw mk.clf(v19);
                    }
                    v18 = rD.dlmvG.player;
                }
                catch (MatchException v20) {
                    throw mk.clf(v20);
                }
            }
            v18.setVelocity(var10_9);
        }
        return Pair.of((Object)var12_11, (Object)var15_14);
    }

    public static Pair<ClientPlayerEntity, ArrayList<Vec3d>> ckL(int n2) {
        return mk.ckM(n2, (PlayerEntity)rD.dlmvG.player, null, clientPlayerEntity -> false);
    }

    public static mv ckO(float f2, float f3) {
        mv mv2 = new mv(f2, f3);
        return mv2;
    }

    public static mv ckP(mv mv2, boolean bl2, boolean bl3) {
        mv mv3 = mk.ckO(mv2.vGEel, mv2.mgoqe);
        mv3.GgKkk = bl2;
        mv3.SuYKY = bl3;
        return mv3;
    }

    public static ArrayList<Vec3d> ckR(ItemStack itemStack, ov ov2, boolean bl2) {
        ArrayList<Vec3d> arrayList;
        ArrayList<Vec3d> arrayList2;
        block28: {
            int n2;
            Vec3d vec3d;
            ov ov3;
            int[] nArray;
            mk$uJ mk$uJ;
            boolean[] blArray;
            mk$uH mk$uH2;
            block27: {
                block26: {
                    long l2 = WjIdv ^ 0x279EA54803C8L;
                    mk$uH2 = XJSIq.stream().filter(mk$uH -> mk$uH.isSame(itemStack.getItem())).findFirst().orElseThrow();
                    arrayList2 = new ArrayList<Vec3d>();
                    blArray = new boolean[]{false};
                    mk$uJ = new mk$uJ(mk$uH2.entityType, (World)rD.dlmvG.world, blArray, mk$uH2);
                    float f2 = rD.dlmvG.getRenderTickCounter().getTickProgress(true);
                    int[] nArray2 = mk.cle();
                    Vec3d vec3d2 = rD.dlmvG.player.getLerpedPos(f2);
                    mk$uJ.refreshPositionAndAngles(vec3d2.x, vec3d2.y + (double)rD.dlmvG.player.getStandingEyeHeight() - 0.1, vec3d2.z, rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw());
                    EntityAccessor entityAccessor = (EntityAccessor)mk$uJ;
                    Random random = entityAccessor.getRandom();
                    nArray = nArray2;
                    entityAccessor.setRandom((Random)new mk$uI(random));
                    Vec2f vec2f = rD.dlmvG.player.getRotationClient();
                    ov3 = ov.cGv(vec2f.y, vec2f.x);
                    vec3d = rD.dlmvG.player.getVelocity();
                    try {
                        try {
                            if (nArray != null) break block26;
                            if (ov2 == null) break block27;
                        }
                        catch (MatchException matchException) {
                            throw mk.clf(matchException);
                        }
                        rD.dlmvG.player.setYaw(ov2.cGI());
                    }
                    catch (MatchException matchException) {
                        throw mk.clf(matchException);
                    }
                }
                rD.dlmvG.player.setPitch(ov2.cGJ());
            }
            try {
                if (!bl2) {
                    rD.dlmvG.player.setVelocity(Vec3d.ZERO);
                }
            }
            catch (MatchException matchException) {
                throw mk.clf(matchException);
            }
            mk$uH2.setupRoutine.accept(itemStack, mk$uJ);
            rD.dlmvG.player.setVelocity(vec3d);
            rD.dlmvG.player.setYaw(ov3.cGI());
            rD.dlmvG.player.setPitch(ov3.cGJ());
            while (!blArray[0]) {
                Vec3d vec3d3;
                Vec3d vec3d4;
                block31: {
                    ArrayList<Vec3d> arrayList3;
                    block29: {
                        block30: {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    double d2 = mk$uJ.getVelocity().lengthSquared() - 0.0;
                                                    n2 = d2 == 0.0 ? 0 : (d2 > 0.0 ? 1 : -1);
                                                    if (nArray != null) break block28;
                                                    if (n2 == 0) break;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mk.clf(matchException);
                                                }
                                                arrayList2.add(mk$uJ.getEntityPos());
                                                mk$uJ.tick();
                                                double d3 = mk$uJ.getEntityPos().y - (double)rD.dlmvG.world.getBottomY();
                                                n2 = d3 == 0.0 ? 0 : (d3 < 0.0 ? -1 : 1);
                                                if (nArray != null) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw mk.clf(matchException);
                                            }
                                            if (n2 < 0) break;
                                        }
                                        catch (MatchException matchException) {
                                            throw mk.clf(matchException);
                                        }
                                        vec3d4 = mk$uJ.getEntityPos();
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
                                vec3d3 = null;
                                break block31;
                            }
                            catch (MatchException matchException) {
                                throw mk.clf(matchException);
                            }
                        }
                        arrayList3 = arrayList2;
                    }
                    vec3d3 = arrayList3.get(arrayList2.size() - 1);
                }
                if (!vec3d4.equals((Object)vec3d3)) continue;
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
            n2 = arrayList2.add(mk$uJ.getEntityPos());
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

    private static mv ckN(PlayerEntity playerEntity) {
        mv mv2;
        block30: {
            long l2 = WjIdv ^ 0x42F2AD094F47L;
            Vec3d vec3d = ((InterpolationHandlerAccessor)playerEntity.getInterpolator()).getPreviousTickPosition();
            int[] nArray = mk.cle();
            try {
                if (vec3d == null) {
                    return mk.ckO(0.0f, 0.0f);
                }
            }
            catch (MatchException matchException) {
                throw mk.clf(matchException);
            }
            PositionInterpolator positionInterpolator = playerEntity.getInterpolator();
            Vec3d vec3d2 = positionInterpolator.getLerpedPos();
            Vec3d vec3d3 = vec3d2.subtract(vec3d);
            mv mv3 = null;
            double d2 = Double.MAX_VALUE;
            mv[] mvArray = VXslL;
            int n2 = mvArray.length;
            int n3 = 0;
            while (n3 < n2) {
                block39: {
                    block38: {
                        Vec3d vec3d4;
                        mv mv4;
                        block41: {
                            block40: {
                                double d3;
                                block36: {
                                    float f2;
                                    block35: {
                                        block34: {
                                            block33: {
                                                boolean bl2;
                                                block31: {
                                                    block32: {
                                                        mv mv5 = mvArray[n3];
                                                        try {
                                                            try {
                                                                mv2 = mv5;
                                                                if (nArray != null) break block30;
                                                                bl2 = playerEntity.isOnGround();
                                                                if (nArray != null) break block31;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw mk.clf(matchException);
                                                            }
                                                            if (bl2) break block32;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw mk.clf(matchException);
                                                        }
                                                        bl2 = true;
                                                        break block31;
                                                    }
                                                    bl2 = false;
                                                }
                                                mv4 = mk.ckP(mv2, bl2, playerEntity.isSneaking());
                                                try {
                                                    try {
                                                        float f3 = mv4.vGEel - 0.0f;
                                                        f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                                                        if (nArray != null) break block33;
                                                        if (f2 != false) break block34;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw mk.clf(matchException);
                                                    }
                                                    float f4 = mv4.mgoqe - 0.0f;
                                                    f2 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                                                }
                                                catch (MatchException matchException) {
                                                    throw mk.clf(matchException);
                                                }
                                            }
                                            try {
                                                if (nArray != null) break block35;
                                                if (f2 != false) break block34;
                                            }
                                            catch (MatchException matchException) {
                                                throw mk.clf(matchException);
                                            }
                                            f2 = 1.0f;
                                            break block35;
                                        }
                                        f2 = 0.0f;
                                    }
                                    float f5 = f2;
                                    try {
                                        block37: {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            double d4 = vec3d3.horizontalLengthSquared() - 0.0;
                                                            d3 = d4 == 0.0 ? 0 : (d4 > 0.0 ? 1 : -1);
                                                            if (nArray != null) break block36;
                                                            if (d3 <= 0) break block37;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw mk.clf(matchException);
                                                        }
                                                        d3 = f5;
                                                        if (nArray != null) break block36;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw mk.clf(matchException);
                                                    }
                                                    if (d3 == false) break block37;
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
                                        d3 = f5;
                                    }
                                    catch (MatchException matchException) {
                                        throw mk.clf(matchException);
                                    }
                                }
                                if (d3 == false) break block40;
                                vec3d4 = Vec3d.ZERO;
                                if (nArray == null) break block41;
                            }
                            Vec2f vec2f = mv4.cmC();
                            Vec3d vec3d5 = new Vec3d((double)vec2f.x, 0.0, (double)vec2f.y);
                            vec3d4 = jg.bBE(vec3d5, 1.0f, positionInterpolator.getLerpedYaw());
                        }
                        double d5 = vec3d3.distanceTo(vec3d4);
                        try {
                            if (nArray != null) break block39;
                            if (!(d5 < d2)) break block38;
                        }
                        catch (MatchException matchException) {
                            throw mk.clf(matchException);
                        }
                        d2 = d5;
                        mv3 = mv4;
                    }
                    ++n3;
                }
                if (nArray == null) continue;
            }
            mv2 = mv3;
        }
        return mv2;
    }

    private static float ckQ(ItemStack itemStack) {
        float f2;
        ChargedProjectilesComponent chargedProjectilesComponent;
        block6: {
            ChargedProjectilesComponent chargedProjectilesComponent2;
            block7: {
                long l2 = WjIdv ^ 0x67C98518CFBAL;
                chargedProjectilesComponent2 = (ChargedProjectilesComponent)itemStack.get(DataComponentTypes.CHARGED_PROJECTILES);
                int[] nArray = mk.cle();
                try {
                    try {
                        chargedProjectilesComponent = chargedProjectilesComponent2;
                        if (nArray != null) break block6;
                        if (chargedProjectilesComponent != null) break block7;
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
            chargedProjectilesComponent = chargedProjectilesComponent2;
        }
        try {
            f2 = chargedProjectilesComponent.contains(Items.FIREWORK_ROCKET) ? 1.6f : 3.15f;
        }
        catch (MatchException matchException) {
            throw mk.clf(matchException);
        }
        return f2;
    }
}

