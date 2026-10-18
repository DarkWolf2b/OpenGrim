/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.block.Blocks
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.projectile.ProjectileUtil
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.hit.EntityHitResult
 *  net.minecraft.util.hit.HitResult$Type
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Direction
 *  net.minecraft.util.math.Position
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.util.shape.VoxelShape
 *  net.minecraft.util.shape.VoxelShapes
 *  net.minecraft.world.BlockView
 *  net.minecraft.world.RaycastContext
 *  net.minecraft.world.RaycastContext$FluidHandling
 *  net.minecraft.world.RaycastContext$ShapeType
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Optional;
import java.util.function.Predicate;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.projectile.ProjectileUtil;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.EntityHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Position;
import net.minecraft.util.math.Vec3d;
import net.minecraft.util.shape.VoxelShape;
import net.minecraft.util.shape.VoxelShapes;
import net.minecraft.world.BlockView;
import net.minecraft.world.RaycastContext;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.oV;
import sixtwo.ov;
import sixtwo.qL;
import sixtwo.rD;

public final class ox {
    private Entity wuRIs;
    private ov HJoUm;
    private double rnYFy = 3.0;
    private boolean fmYuI = false;
    private boolean XIKjc = true;
    private RaycastContext.ShapeType WIDNA = RaycastContext.ShapeType.OUTLINE;
    private RaycastContext.FluidHandling ZcMTi = RaycastContext.FluidHandling.NONE;
    private Predicate<Entity> MgANl = entity -> true;
    private Predicate<LivingEntity> XaSyX = livingEntity -> true;
    private static String cUAGt;
    private static final long yqpEX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private ox(Entity entity2) {
        this.wuRIs = entity2;
    }

    static {
        yqpEX = gb.aYR(-2364444756791235890L, -6693464728922493294L, MethodHandles.lookup().lookupClass()).a(183309789674886L);
        if (ox.cHz() != null) {
            ox.cHy("f6WPkb");
        }
    }

    public static boolean cHa(BlockPos blockPos, double d2) {
        return ox.cHb(new Box(blockPos), d2);
    }

    public EntityHitResult cHn() {
        BlockHitResult blockHitResult;
        Vec3d vec3d;
        Vec3d vec3d2;
        Vec3d vec3d3;
        double d2;
        Entity entity2;
        block22: {
            double d3;
            String string;
            block20: {
                ox ox2;
                block18: {
                    block19: {
                        long l2 = yqpEX ^ 0x6F6582206709L;
                        entity2 = this.cHq();
                        string = ox.cHz();
                        try {
                            if (entity2 == null) {
                                return null;
                            }
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                        try {
                            try {
                                try {
                                    ox2 = this;
                                    if (string != null) break block18;
                                    if (!ox2.XIKjc) break block19;
                                }
                                catch (MatchException matchException) {
                                    throw ox.cHA(matchException);
                                }
                                if (entity2 != rD.dlmvG.player) break block19;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            d3 = oV.cLb(this.rnYFy);
                            break block20;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    ox2 = this;
                }
                d3 = ox2.rnYFy;
            }
            d2 = d3;
            vec3d3 = entity2.getEyePos();
            vec3d2 = this.cHr().cGH();
            vec3d = vec3d3.add(vec3d2.x * d2, vec3d2.y * d2, vec3d2.z * d2);
            if (!this.fmYuI) {
                double d4;
                block23: {
                    BlockHitResult blockHitResult2;
                    block21: {
                        blockHitResult = ox.cGY(vec3d3, vec3d2, d2, this.ZcMTi, this.WIDNA, entity2);
                        try {
                            try {
                                blockHitResult2 = blockHitResult;
                                if (string != null) break block21;
                                if (blockHitResult2.getType() != HitResult.Type.BLOCK) break block22;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            blockHitResult2 = blockHitResult;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    double d5 = blockHitResult2.getPos().squaredDistanceTo(vec3d3);
                    double d6 = d2 * d2;
                    try {
                        try {
                            d4 = d5;
                            if (string != null) break block23;
                            if (!(d4 < d6)) break block22;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                        d4 = Math.sqrt(d5);
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                }
                double d7 = d4;
                vec3d = vec3d3.add(vec3d2.x * d7, vec3d2.y * d7, vec3d2.z * d7);
            }
        }
        blockHitResult = entity2.getBoundingBox().stretch(vec3d2.multiply(d2)).expand(1.0, 1.0, 1.0);
        return ProjectileUtil.raycast((Entity)entity2, (Vec3d)vec3d3, (Vec3d)vec3d, (Box)blockHitResult, entity -> {
            boolean bl2;
            block8: {
                block7: {
                    String string;
                    block6: {
                        long l2 = yqpEX ^ 0xD8087BE92BDL;
                        string = ox.cHz();
                        try {
                            try {
                                bl2 = entity.isSpectator();
                                if (string != null) break block6;
                                if (bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            bl2 = this.MgANl.test((Entity)entity);
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    try {
                        if (string != null) break block8;
                        if (!bl2) break block7;
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    bl2 = true;
                    break block8;
                }
                bl2 = false;
            }
            return bl2;
        }, (double)(d2 * d2));
    }

    public ox cHj(Predicate<Entity> predicate) {
        long l2 = yqpEX ^ 0x641B1E052764L;
        try {
            if (predicate != null) {
                this.MgANl = this.MgANl.and(predicate);
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        return this;
    }

    @Deprecated
    public static BlockHitResult cHc(RaycastContext raycastContext2, BlockPos blockPos) {
        return (BlockHitResult)BlockView.raycast((Vec3d)raycastContext2.getStart(), (Vec3d)raycastContext2.getEnd(), (Object)raycastContext2, (raycastContext, blockPos2) -> {
            BlockHitResult blockHitResult;
            double d2;
            double d3;
            BlockState blockState;
            block9: {
                block8: {
                    long l2 = yqpEX ^ 0x5F58EBAD0051L;
                    String string = ox.cHz();
                    if (blockPos2.equals((Object)blockPos)) break block8;
                    blockState = Blocks.AIR.getDefaultState();
                    if (string == null) break block9;
                }
                blockState = Blocks.OBSIDIAN.getDefaultState();
            }
            Vec3d vec3d = raycastContext.getStart();
            Vec3d vec3d2 = raycastContext.getEnd();
            VoxelShape voxelShape = raycastContext.getBlockShape(blockState, (BlockView)rD.dlmvG.world, blockPos2);
            BlockHitResult blockHitResult2 = rD.dlmvG.world.raycastBlock(vec3d, vec3d2, blockPos2, voxelShape, blockState);
            VoxelShape voxelShape2 = VoxelShapes.empty();
            BlockHitResult blockHitResult3 = voxelShape2.raycast(vec3d, vec3d2, blockPos2);
            try {
                d3 = blockHitResult2 == null ? Double.MAX_VALUE : raycastContext.getStart().squaredDistanceTo(blockHitResult2.getPos());
            }
            catch (MatchException matchException) {
                throw ox.cHA(matchException);
            }
            double d4 = d3;
            try {
                d2 = blockHitResult3 == null ? Double.MAX_VALUE : raycastContext.getStart().squaredDistanceTo(blockHitResult3.getPos());
            }
            catch (MatchException matchException) {
                throw ox.cHA(matchException);
            }
            double d5 = d2;
            try {
                blockHitResult = d4 <= d5 ? blockHitResult2 : blockHitResult3;
            }
            catch (MatchException matchException) {
                throw ox.cHA(matchException);
            }
            return blockHitResult;
        }, raycastContext -> {
            Vec3d vec3d = raycastContext.getStart().subtract(raycastContext.getEnd());
            return BlockHitResult.createMissed((Vec3d)raycastContext.getEnd(), (Direction)Direction.getFacing((double)vec3d.x, (double)vec3d.y, (double)vec3d.z), (BlockPos)BlockPos.ofFloored((Position)raycastContext.getEnd()));
        });
    }

    public BlockHitResult cHp() {
        BlockHitResult blockHitResult;
        long l2 = yqpEX ^ 0x3BE6657C90D7L;
        Entity entity = this.cHq();
        Vec3d vec3d = entity.getEyePos();
        String string = ox.cHz();
        Vec3d vec3d2 = this.cHr().cGH();
        try {
            blockHitResult = ox.cGY(vec3d, vec3d2, this.rnYFy, this.ZcMTi, this.WIDNA, entity);
            if (string != null) {
                iS.bwK("Ee7bdb");
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        return blockHitResult;
    }

    public ox cHe(double d2) {
        this.rnYFy = d2;
        return this;
    }

    public ox cHd(ov ov2) {
        this.HJoUm = ov2;
        return this;
    }

    public ox cHi(RaycastContext.ShapeType shapeType) {
        this.WIDNA = shapeType;
        return this;
    }

    public ox cHh(RaycastContext.FluidHandling fluidHandling) {
        this.ZcMTi = fluidHandling;
        return this;
    }

    public static ox cGV() {
        Entity entity = rD.dlmvG.getCameraEntity();
        return new ox(entity);
    }

    public static boolean cHb(Box box, double d2) {
        long l2 = yqpEX ^ 0x22250FEDEC3EL;
        Entity entity = rD.dlmvG.getCameraEntity();
        try {
            if (entity == null) {
                return false;
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        qL qL2 = rD.dlX();
        Vec3d vec3d = entity.getEyePos();
        Vec3d vec3d2 = qL2.dbC().cGH();
        Vec3d vec3d3 = vec3d.add(vec3d2.x * d2, vec3d2.y * d2, vec3d2.z * d2);
        Optional optional = box.raycast(vec3d, vec3d3);
        return optional.isPresent();
    }

    public static ox cGW(Entity entity) {
        return new ox(entity);
    }

    public static EntityHitResult cGX() {
        return ox.cGV().cHe(rD.dlmvG.player.getEntityInteractionRange()).cHn();
    }

    private static BlockHitResult cGY(Vec3d vec3d, Vec3d vec3d2, double d2, RaycastContext.FluidHandling fluidHandling, RaycastContext.ShapeType shapeType, Entity entity) {
        Vec3d vec3d3 = vec3d.add(vec3d2.x * d2, vec3d2.y * d2, vec3d2.z * d2);
        RaycastContext raycastContext = new RaycastContext(vec3d, vec3d3, shapeType, fluidHandling, entity);
        return rD.dlmvG.world.raycast(raycastContext);
    }

    public static boolean cGZ(BlockPos blockPos) {
        double d2 = rD.dlmvG.player.getBlockInteractionRange();
        return ox.cHb(new Box(blockPos), d2);
    }

    private static MatchException cHA(MatchException matchException) {
        return matchException;
    }

    public ox cHg() {
        this.XIKjc = false;
        return this;
    }

    public ox cHf(boolean bl2) {
        this.fmYuI = bl2;
        return this;
    }

    public ox cHk(Predicate<LivingEntity> predicate) {
        long l2 = yqpEX ^ 0x27375E5F55E5L;
        try {
            if (predicate != null) {
                this.XaSyX = this.XaSyX.and(predicate);
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        return this;
    }

    public Entity cHl() {
        Entity entity;
        block4: {
            block3: {
                EntityHitResult entityHitResult;
                block2: {
                    long l2 = yqpEX ^ 0x44C722B54170L;
                    EntityHitResult entityHitResult2 = this.cHn();
                    String string = ox.cHz();
                    try {
                        entityHitResult = entityHitResult2;
                        if (string != null) break block2;
                        if (entityHitResult == null) break block3;
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    entityHitResult = entityHitResult2;
                }
                entity = entityHitResult.getEntity();
                break block4;
            }
            entity = null;
        }
        return entity;
    }

    public static String cHz() {
        return cUAGt;
    }

    public <T extends Entity> T cHm(Class<T> clazz) {
        Entity entity;
        block9: {
            block8: {
                Entity entity2;
                Class<T> clazz2;
                block7: {
                    long l2 = yqpEX ^ 0x3C01BC89274EL;
                    EntityHitResult entityHitResult = this.cHn();
                    String string = ox.cHz();
                    try {
                        if (entityHitResult == null) {
                            return null;
                        }
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    try {
                        try {
                            clazz2 = clazz;
                            entity2 = entityHitResult.getEntity();
                            if (string != null) break block7;
                            if (!clazz2.isInstance(entity2)) break block8;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                        clazz2 = clazz;
                        entity2 = entityHitResult.getEntity();
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                }
                entity = (Entity)clazz2.cast(entity2);
                break block9;
            }
            entity = null;
        }
        return (T)entity;
    }

    private Entity cHq() {
        Entity entity;
        block4: {
            block5: {
                long l2 = yqpEX ^ 0x332F3927325FL;
                String string = ox.cHz();
                try {
                    try {
                        entity = this.wuRIs;
                        if (string != null) break block4;
                        if (entity == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    return this.wuRIs;
                }
                catch (MatchException matchException) {
                    throw ox.cHA(matchException);
                }
            }
            entity = rD.dlmvG.getCameraEntity();
        }
        return entity;
    }

    private ov cHr() {
        ov ov2;
        block8: {
            block9: {
                String string;
                block7: {
                    ov ov3;
                    block6: {
                        long l2 = yqpEX ^ 0x3071756B5086L;
                        string = ox.cHz();
                        try {
                            try {
                                ov3 = this.HJoUm;
                                if (string != null) break block6;
                                if (ov3 == null) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            ov3 = this.HJoUm;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    return ov3;
                }
                qL qL2 = rD.dlX();
                ov ov4 = qL2.dbX();
                try {
                    ov2 = ov4;
                    if (string != null) break block8;
                    if (ov2 == null) break block9;
                }
                catch (MatchException matchException) {
                    throw ox.cHA(matchException);
                }
                ov2 = ov4;
                break block8;
            }
            ov2 = ov.cGA();
        }
        return ov2;
    }

    public static void cHy(String string) {
        cUAGt = string;
    }

    public EntityHitResult cHo() {
        EntityHitResult entityHitResult;
        EntityHitResult entityHitResult2;
        long l2 = yqpEX ^ 0x69F1E44B535CL;
        Predicate<Entity> predicate = this.MgANl;
        String string = ox.cHz();
        this.MgANl = predicate.and(entity -> {
            boolean bl2;
            block8: {
                block7: {
                    Entity entity2;
                    String string;
                    block6: {
                        long l2 = yqpEX ^ 0x61F775EF2495L;
                        string = ox.cHz();
                        try {
                            try {
                                entity2 = entity;
                                if (string != null) break block6;
                                if (!(entity2 instanceof LivingEntity)) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            entity2 = entity;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    LivingEntity livingEntity = (LivingEntity)entity2;
                    try {
                        bl2 = this.XaSyX.test(livingEntity);
                        if (string != null) break block8;
                        if (!bl2) break block7;
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    bl2 = true;
                    break block8;
                }
                bl2 = false;
            }
            return bl2;
        });
        try {
            entityHitResult2 = this.cHn();
        }
        catch (Throwable throwable) {
            this.MgANl = predicate;
            throw throwable;
        }
        try {
            this.MgANl = predicate;
            entityHitResult = entityHitResult2;
            if (iS.bwL() == null) {
                ox.cHy("Y5lZic");
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        return entityHitResult;
    }
}

