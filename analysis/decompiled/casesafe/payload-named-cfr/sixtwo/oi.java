/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.Block
 *  net.minecraft.block.BlockState
 *  net.minecraft.block.Blocks
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.BlockItem
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.Items
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Direction
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.WorldView
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.function.BiPredicate;
import java.util.function.Predicate;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.BlockItem;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.WorldView;
import sixtwo.gb;
import sixtwo.oA;
import sixtwo.oD;
import sixtwo.oI;
import sixtwo.oP;
import sixtwo.of;
import sixtwo.oi$vg;
import sixtwo.oz;
import sixtwo.rD;

public class oi {
    private final Predicate<ItemStack> IipTX;
    private final List<BlockPos> qHRqo;
    private oi$vg QPXAM;
    private boolean fiwOr;
    private static final long DYnxh = gb.aYR(-4509888282340237097L, 1499279391141828958L, MethodHandles.lookup().lookupClass()).a(164779899776753L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oi() {
        this(oi::cDZ);
    }

    public oi(Predicate<ItemStack> predicate) {
        Predicate<ItemStack> predicate2;
        block2: {
            block3: {
                long l2 = DYnxh ^ 0x480DDFBAD4AFL;
                String[] stringArray = of.cCL();
                this.qHRqo = new ArrayList<BlockPos>();
                String[] stringArray2 = stringArray;
                try {
                    oi oi2 = this;
                    predicate2 = predicate;
                    if (stringArray2 == null) break block2;
                    if (predicate2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                predicate2 = oi::cDZ;
                break block2;
            }
            predicate2 = predicate;
        }
        oi2.IipTX = predicate2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private BlockPos cDQ(Vec3d vec3d, PlayerEntity playerEntity) {
        int n2;
        int n3;
        int n4;
        block4: {
            long l2 = DYnxh ^ 0x785968843DB1L;
            Vec3d vec3d2 = playerEntity.getEntityPos();
            n4 = this.cDR(vec3d.x - vec3d2.x);
            n3 = this.cDR(vec3d.z - vec3d2.z);
            String[] stringArray = of.cCL();
            try {
                n2 = n4;
                if (stringArray == null) break block4;
                if (n2 == 0) return null;
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
            n2 = n3;
        }
        try {
            if (n2 != 0) return new BlockPos(n4, 0, n3);
            return null;
        }
        catch (MatchException matchException) {
            throw oi.cEq(matchException);
        }
    }

    public static boolean cDZ(ItemStack itemStack) {
        return oi.cEa(itemStack.getItem());
    }

    public boolean cDJ() {
        boolean bl2;
        long l2 = DYnxh ^ 0x6AA28DED1A27L;
        try {
            bl2 = this.QPXAM != null;
        }
        catch (MatchException matchException) {
            throw oi.cEq(matchException);
        }
        return bl2;
    }

    public oi$vg cDG(Vec3d vec3d, PlayerEntity playerEntity, Predicate<BlockPos> predicate) {
        BiPredicate<BlockPos, Item> biPredicate;
        PlayerEntity playerEntity2;
        Vec3d vec3d2;
        oi oi2;
        block6: {
            Predicate<BlockPos> predicate2;
            block4: {
                block5: {
                    long l2 = DYnxh ^ 0x570FF83D206FL;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi2 = this;
                            vec3d2 = vec3d;
                            playerEntity2 = playerEntity;
                            predicate2 = predicate;
                            if (stringArray == null) break block4;
                            if (predicate2 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        biPredicate = null;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                predicate2 = predicate;
            }
            biPredicate = (blockPos, item) -> predicate2.test((BlockPos)blockPos);
        }
        return oi2.cDH(vec3d2, playerEntity2, biPredicate);
    }

    public void cDD(Vec3d vec3d, PlayerEntity playerEntity, Predicate<BlockPos> predicate) {
        this.QPXAM = this.cDG(vec3d, playerEntity, predicate);
    }

    public BlockPos cDL() {
        BlockPos blockPos;
        block6: {
            oi$vg oi$vg;
            block4: {
                block5: {
                    long l2 = DYnxh ^ 0x341C9556B686L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi$vg = this.QPXAM;
                            if (stringArray == null) break block4;
                            if (oi$vg != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        blockPos = BlockPos.ORIGIN;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oi$vg = this.QPXAM;
            }
            blockPos = oi$vg.blockPos();
        }
        return blockPos;
    }

    private Direction cDP(Vec3d vec3d, PlayerEntity playerEntity) {
        Direction direction;
        block11: {
            double d2;
            block8: {
                double d3;
                block9: {
                    block10: {
                        long l2 = DYnxh ^ 0x700EE23A00DDL;
                        Vec3d vec3d2 = playerEntity.getEntityPos();
                        String[] stringArray = of.cCL();
                        double d4 = vec3d.x - vec3d2.x;
                        d3 = vec3d.z - vec3d2.z;
                        try {
                            try {
                                try {
                                    double d5 = Math.abs(d4) - Math.abs(d3);
                                    d2 = d5 == 0.0 ? 0 : (d5 > 0.0 ? 1 : -1);
                                    if (stringArray == null) break block8;
                                    if (d2 <= 0) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw oi.cEq(matchException);
                                }
                                if (!(d4 > 0.0)) break block10;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                            direction = Direction.EAST;
                            break block11;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                    direction = Direction.WEST;
                    break block11;
                }
                double d6 = d3 - 0.0;
                d2 = d6 == 0.0 ? 0 : (d6 > 0.0 ? 1 : -1);
            }
            try {
                direction = d2 > 0 ? Direction.SOUTH : Direction.NORTH;
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
        }
        return direction;
    }

    public Vec3d cDM() {
        Vec3d vec3d;
        block6: {
            oi$vg oi$vg;
            block4: {
                block5: {
                    long l2 = DYnxh ^ 0x5C6D0C40B1CDL;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi$vg = this.QPXAM;
                            if (stringArray == null) break block4;
                            if (oi$vg != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        vec3d = Vec3d.ZERO;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oi$vg = this.QPXAM;
            }
            vec3d = oi$vg.placeResult().hitPoint();
        }
        return vec3d;
    }

    public void cDA() {
        this.qHRqo.clear();
    }

    private Item cDY(PlayerEntity playerEntity) {
        Item item;
        block15: {
            oI oI2;
            block13: {
                oI oI3;
                block14: {
                    boolean bl2;
                    String[] stringArray;
                    block11: {
                        block12: {
                            long l2 = DYnxh ^ 0x2C4FC7A0FF6BL;
                            stringArray = of.cCL();
                            try {
                                try {
                                    bl2 = this.IipTX.test(playerEntity.getOffHandStack());
                                    if (stringArray == null) break block11;
                                    if (!bl2) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw oi.cEq(matchException);
                                }
                                return playerEntity.getOffHandStack().getItem();
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                        }
                        bl2 = this.IipTX.test(playerEntity.getMainHandStack());
                    }
                    try {
                        if (bl2) {
                            return playerEntity.getMainHandStack().getItem();
                        }
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    oI3 = oP.cJm().cJx(this.IipTX, itemStack -> -oi.cEb(itemStack.getItem()));
                    try {
                        try {
                            oI2 = oI3;
                            if (stringArray == null) break block13;
                            if (oI2 != null) break block14;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        item = null;
                        break block15;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oI2 = oI3;
            }
            item = oI2.cIu().getItem();
        }
        return item;
    }

    private List<BlockPos> cDO(Vec3d vec3d, PlayerEntity playerEntity) {
        List<BlockPos> list;
        block15: {
            ArrayList<BlockPos> arrayList;
            block13: {
                BlockPos blockPos2;
                oi oi2;
                BlockPos blockPos3;
                String[] stringArray;
                block14: {
                    long l2 = DYnxh ^ 0x2C274AF07F23L;
                    arrayList = new ArrayList<BlockPos>();
                    Direction direction = this.cDP(vec3d, playerEntity);
                    stringArray = of.cCL();
                    blockPos3 = playerEntity.getBlockPos();
                    for (int i2 = 1; i2 <= 3; ++i2) {
                        BlockPos blockPos4 = blockPos3.offset(direction, i2);
                        try {
                            arrayList.add(blockPos4.up());
                            arrayList.add(blockPos4);
                            if (stringArray != null) {
                                if (stringArray != null) continue;
                                break;
                            }
                            break block13;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                    try {
                        try {
                            oi2 = this;
                            if (stringArray == null) break block14;
                            if (!oi2.fiwOr) break block13;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        oi2 = this;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                if ((blockPos2 = oi2.cDQ(vec3d, playerEntity)) != null) {
                    for (int i3 = 1; i3 <= 3; ++i3) {
                        BlockPos blockPos5 = blockPos3.add(blockPos2.getX() * i3, 0, blockPos2.getZ() * i3);
                        try {
                            arrayList.add(blockPos5.up());
                            list = arrayList;
                            if (stringArray != null) {
                                list.add(blockPos5);
                                if (stringArray != null) continue;
                                break;
                            }
                            break block15;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                }
            }
            list = arrayList.stream().distinct().filter(blockPos -> {
                boolean bl2;
                block2: {
                    block3: {
                        long l2 = DYnxh ^ 0x5C0BD45AFEFAL;
                        String[] stringArray = of.cCL();
                        try {
                            bl2 = this.qHRqo.contains(blockPos);
                            if (stringArray == null) break block2;
                            if (bl2) break block3;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        bl2 = true;
                        break block2;
                    }
                    bl2 = false;
                }
                return bl2;
            }).filter(blockPos -> {
                boolean bl2;
                block2: {
                    block3: {
                        long l2 = DYnxh ^ 0x1B3B60F11587L;
                        String[] stringArray = of.cCL();
                        try {
                            bl2 = new Box(blockPos).intersects(playerEntity.getBoundingBox());
                            if (stringArray == null) break block2;
                            if (bl2) break block3;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        bl2 = true;
                        break block2;
                    }
                    bl2 = false;
                }
                return bl2;
            }).toList();
        }
        return list;
    }

    public void cDB(Vec3d vec3d) {
        this.cDC(vec3d, (PlayerEntity)rD.dlmvG.player);
    }

    public oi$vg cDF(Vec3d vec3d, PlayerEntity playerEntity) {
        return this.cDH(vec3d, playerEntity, null);
    }

    public oz cDK() {
        oz oz2;
        block6: {
            oi$vg oi$vg;
            block4: {
                block5: {
                    long l2 = DYnxh ^ 0x4499BBC7E807L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi$vg = this.QPXAM;
                            if (stringArray == null) break block4;
                            if (oi$vg != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        oz2 = null;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oi$vg = this.QPXAM;
            }
            oz2 = oi$vg.placeResult();
        }
        return oz2;
    }

    private boolean cDU(List<BlockPos> list, Vec3d vec3d, PlayerEntity playerEntity) {
        return list.stream().filter(this::cDV).anyMatch(blockPos -> {
            double d2;
            block2: {
                block3: {
                    long l2 = DYnxh ^ 0x58541C0C2A4FL;
                    String[] stringArray = of.cCL();
                    try {
                        double d3 = this.cDW((BlockPos)blockPos, vec3d, playerEntity) - 0.0;
                        d2 = d3 == 0.0 ? 0 : (d3 > 0.0 ? 1 : -1);
                        if (stringArray == null) break block2;
                        if (d2 <= 0) break block3;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    d2 = 1.0;
                    break block2;
                }
                d2 = 0.0;
            }
            return (boolean)d2;
        });
    }

    public void cDC(Vec3d vec3d, PlayerEntity playerEntity) {
        this.QPXAM = this.cDF(vec3d, playerEntity);
    }

    public oi$vg cDH(Vec3d vec3d, PlayerEntity playerEntity, BiPredicate<BlockPos, Item> biPredicate) {
        BiPredicate<BlockPos, Item> biPredicate2;
        Item item2;
        List<BlockPos> list;
        block19: {
            block20: {
                oi oi2;
                String[] stringArray;
                block17: {
                    block18: {
                        block16: {
                            long l2 = DYnxh ^ 0x297197C36805L;
                            stringArray = of.cCL();
                            try {
                                block15: {
                                    try {
                                        try {
                                            if (vec3d == null || playerEntity == null) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw oi.cEq(matchException);
                                        }
                                        if (rD.dlmvG.world != null) break block16;
                                    }
                                    catch (MatchException matchException) {
                                        throw oi.cEq(matchException);
                                    }
                                }
                                return null;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                        }
                        list = this.cDO(vec3d, playerEntity);
                        try {
                            try {
                                oi2 = this;
                                if (stringArray == null) break block17;
                                if (!oi2.cDU(list, vec3d, playerEntity)) break block18;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                    oi2 = this;
                }
                item2 = oi2.cDY(playerEntity);
                try {
                    if (item2 == null) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                try {
                    biPredicate2 = biPredicate;
                    if (stringArray == null) break block19;
                    if (biPredicate2 != null) break block20;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                biPredicate2 = (blockPos, item) -> true;
                break block19;
            }
            biPredicate2 = biPredicate;
        }
        BiPredicate<BlockPos, Item> biPredicate3 = biPredicate2;
        return list.stream().filter(blockPos -> biPredicate3.test((BlockPos)blockPos, item2)).filter(blockPos -> this.cDS((BlockPos)blockPos, item2)).map(blockPos -> {
            oi$vg oi$vg;
            long l2 = DYnxh ^ 0x33EE22855CA6L;
            oz oz2 = oA.cHD(blockPos, oD.pxPhl, false, blockState -> this.cDT((BlockPos)blockPos, (BlockState)blockState, item2)).cHL();
            try {
                oi$vg = oz2 == null ? null : new oi$vg((BlockPos)blockPos, oz2, item2);
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
            return oi$vg;
        }).filter(oi$vg -> {
            int n2;
            block5: {
                block4: {
                    long l2 = DYnxh ^ 0x2EC4C4DDD40FL;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            if (oi$vg == null) break block4;
                            double d2 = this.cDW(oi$vg.blockPos(), vec3d, playerEntity) - 0.0;
                            n2 = d2 == 0.0 ? 0 : (d2 > 0.0 ? 1 : -1);
                            if (stringArray == null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        if (n2 <= 0) break block4;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    n2 = 1;
                    break block5;
                }
                n2 = 0;
            }
            return n2 != 0;
        }).max(Comparator.comparingDouble(oi$vg -> this.cDW(oi$vg.blockPos(), vec3d, playerEntity))).orElse(null);
    }

    public Item cDN() {
        Item item;
        block6: {
            oi$vg oi$vg;
            block4: {
                block5: {
                    long l2 = DYnxh ^ 0x34F47616B79L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi$vg = this.QPXAM;
                            if (stringArray == null) break block4;
                            if (oi$vg != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        item = Items.AIR;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oi$vg = this.QPXAM;
            }
            item = oi$vg.item();
        }
        return item;
    }

    public oi cDy(BlockPos blockPos) {
        oi oi2;
        block7: {
            block6: {
                long l2 = DYnxh ^ 0x532D5AB5A7E1L;
                String[] stringArray = of.cCL();
                try {
                    try {
                        try {
                            if (blockPos == null) break block6;
                            oi2 = this;
                            if (stringArray == null) break block7;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        if (oi2.qHRqo.contains(blockPos)) break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    this.qHRqo.add(blockPos);
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
            }
            oi2 = this;
        }
        return oi2;
    }

    public void cDE(Vec3d vec3d, PlayerEntity playerEntity, BiPredicate<BlockPos, Item> biPredicate) {
        this.QPXAM = this.cDH(vec3d, playerEntity, biPredicate);
    }

    public void cDI() {
        this.QPXAM = null;
    }

    public oi cDz(Collection<BlockPos> collection) {
        block3: {
            Collection<BlockPos> collection2;
            block2: {
                long l2 = DYnxh ^ 0x42CD40BB24AL;
                String[] stringArray = of.cCL();
                try {
                    collection2 = collection;
                    if (stringArray == null) break block2;
                    if (collection2 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                collection2 = collection;
            }
            collection2.stream().filter(blockPos -> {
                boolean bl2;
                block5: {
                    block4: {
                        long l2 = DYnxh ^ 0x2F731CD21ED8L;
                        String[] stringArray = of.cCL();
                        try {
                            try {
                                if (blockPos == null) break block4;
                                bl2 = this.qHRqo.contains(blockPos);
                                if (stringArray == null) break block5;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                            if (bl2) break block4;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        bl2 = true;
                        break block5;
                    }
                    bl2 = false;
                }
                return bl2;
            }).forEach(this.qHRqo::add);
        }
        return this;
    }

    private int cDR(double d2) {
        double d3;
        block8: {
            block9: {
                String[] stringArray;
                block6: {
                    block7: {
                        long l2 = DYnxh ^ 0x1A1CDC919931L;
                        stringArray = of.cCL();
                        try {
                            try {
                                double d4 = d2 - 0.0;
                                d3 = d4 == 0.0 ? 0 : (d4 > 0.0 ? 1 : -1);
                                if (stringArray == null) break block6;
                                if (d3 <= 0) break block7;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                            return 1;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                    double d5 = d2 - 0.0;
                    d3 = d5 == 0.0 ? 0 : (d5 < 0.0 ? -1 : 1);
                }
                try {
                    if (stringArray == null) break block8;
                    if (d3 >= 0) break block9;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                d3 = -1;
                break block8;
            }
            d3 = 0.0;
        }
        return (int)d3;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean cDT(BlockPos blockPos, BlockState blockState, Item item) {
        boolean bl2;
        String[] stringArray;
        block15: {
            long l2 = DYnxh ^ 0x6FC8DBB5D30CL;
            stringArray = of.cCL();
            try {
                boolean bl3;
                try {
                    try {
                        bl3 = blockState.isReplaceable();
                        if (stringArray == null) return bl3;
                        if (!bl3) return false;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    bl3 = item instanceof BlockItem;
                    if (stringArray == null) return bl3;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                if (!bl3) return false;
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
            BlockItem blockItem = (BlockItem)item;
            try {
                if (stringArray == null) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
            BlockState blockState2 = blockItem.getBlock().getDefaultState();
            try {
                try {
                    bl2 = blockState2.isSolid();
                    if (stringArray == null) break block15;
                    if (!bl2) return false;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                bl2 = blockState2.canPlaceAt((WorldView)rD.dlmvG.world, blockPos);
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
        }
        try {
            if (stringArray == null) return bl2;
            if (!bl2) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw oi.cEq(matchException);
        }
    }

    private double cDW(BlockPos blockPos, Vec3d vec3d, PlayerEntity playerEntity) {
        Vec3d vec3d2;
        int n2;
        block4: {
            long l2 = DYnxh ^ 0x60CB733E973EL;
            Box box = new Box(blockPos);
            Box box2 = playerEntity.getBoundingBox();
            n2 = 0;
            Iterator<Vec3d> iterator = this.cDX(box2).iterator();
            String[] stringArray = of.cCL();
            while (iterator.hasNext()) {
                vec3d2 = iterator.next();
                if (stringArray == null) break block4;
                Vec3d vec3d3 = vec3d2;
                try {
                    if (box.raycast(vec3d, vec3d3).isPresent()) {
                        ++n2;
                    }
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                if (stringArray != null) continue;
            }
            vec3d2 = blockPos.toCenterPos();
        }
        double d2 = vec3d2.squaredDistanceTo(playerEntity.getEyePos()) * 0.001;
        return (double)n2 - d2;
    }

    private List<Vec3d> cDX(Box box) {
        long l2 = DYnxh ^ 0x75B7F548ED8L;
        ArrayList<Vec3d> arrayList = new ArrayList<Vec3d>();
        double[] dArray = new double[]{box.minX, (box.minX + box.maxX) * 0.5, box.maxX};
        double[] dArray2 = new double[]{box.minY, (box.minY + box.maxY) * 0.5, box.maxY};
        double[] dArray3 = new double[]{box.minZ, (box.minZ + box.maxZ) * 0.5, box.maxZ};
        double[] dArray4 = dArray;
        String[] stringArray = of.cCL();
        int n2 = dArray4.length;
        int n3 = 0;
        block2: while (true) {
            int n4 = n3;
            block3: while (n4 < n2) {
                double d2 = dArray4[n3];
                double[] dArray5 = dArray2;
                int n5 = dArray5.length;
                int n6 = 0;
                while (n6 < n5) {
                    block7: {
                        double d3 = dArray5[n6];
                        double[] dArray6 = dArray3;
                        int n7 = dArray6.length;
                        n4 = 0;
                        if (stringArray == null) continue block3;
                        for (int i2 = v1403210; i2 < n7; ++i2) {
                            double d4 = dArray6[i2];
                            try {
                                arrayList.add(new Vec3d(d2, d3, d4));
                                if (stringArray != null) {
                                    if (stringArray != null) continue;
                                    break;
                                }
                                break block7;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                        }
                        ++n6;
                    }
                    if (stringArray != null) continue;
                }
                ++n3;
                if (stringArray != null) continue block2;
            }
            break;
        }
        return arrayList;
    }

    private static MatchException cEq(MatchException matchException) {
        return matchException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static boolean cEa(Item item) {
        int n2;
        String[] stringArray;
        block23: {
            Block block;
            Block block2;
            block22: {
                Item item2;
                Item item3;
                block21: {
                    long l2 = DYnxh ^ 0x1FA71AD3E306L;
                    stringArray = of.cCL();
                    try {
                        boolean bl2 = item instanceof BlockItem;
                        if (stringArray == null) return bl2;
                        if (!bl2) return false;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    BlockItem blockItem = (BlockItem)item;
                    try {
                        if (stringArray == null) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    block2 = blockItem.getBlock();
                    try {
                        try {
                            Item item2 = item;
                            item2 = Items.RAIL;
                            if (stringArray == null) break block21;
                            if (item3 == item2) return 0 != 0;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        Item item2 = item;
                        item2 = Items.TNT_MINECART;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                try {
                    try {
                        try {
                            if (item3 == item2) return 0 != 0;
                            block = block2;
                            if (stringArray == null) break block22;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        if (block == Blocks.TNT) return 0 != 0;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    block = block2;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
            }
            try {
                try {
                    n2 = block.getDefaultState().isSolid();
                    if (stringArray == null) break block23;
                    if (n2 == 0) return 0 != 0;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                float f2 = block2.getBlastResistance() - 0.0f;
                n2 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
        }
        try {
            if (stringArray == null) return n2 != 0;
            if (n2 <= 0) return 0 != 0;
            return 1 != 0;
        }
        catch (MatchException matchException) {
            throw oi.cEq(matchException);
        }
    }

    public static float cEb(Item item) {
        float f2;
        block6: {
            block5: {
                Item item2;
                block4: {
                    long l2 = DYnxh ^ 0x17A353DC8D0BL;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            item2 = item;
                            if (stringArray == null) break block4;
                            if (!(item2 instanceof BlockItem)) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        item2 = item;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                BlockItem blockItem = (BlockItem)item2;
                f2 = blockItem.getBlock().getBlastResistance();
                break block6;
            }
            f2 = 0.0f;
        }
        return f2;
    }

    private boolean cDV(BlockPos blockPos) {
        int n2;
        block20: {
            block19: {
                Block block;
                String[] stringArray;
                block18: {
                    BlockState blockState;
                    block16: {
                        BlockState blockState2;
                        block17: {
                            boolean bl2;
                            block14: {
                                long l2 = DYnxh ^ 0x39813362C114L;
                                blockState2 = rD.dlmvG.world.getBlockState(blockPos);
                                stringArray = of.cCL();
                                try {
                                    block15: {
                                        try {
                                            try {
                                                try {
                                                    bl2 = blockState2.isReplaceable();
                                                    if (stringArray == null) break block14;
                                                    if (bl2) break block15;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oi.cEq(matchException);
                                                }
                                                blockState = blockState2;
                                                if (stringArray == null) break block16;
                                            }
                                            catch (MatchException matchException) {
                                                throw oi.cEq(matchException);
                                            }
                                            if (blockState.isSolid()) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw oi.cEq(matchException);
                                        }
                                    }
                                    bl2 = false;
                                }
                                catch (MatchException matchException) {
                                    throw oi.cEq(matchException);
                                }
                            }
                            return bl2;
                        }
                        blockState = blockState2;
                    }
                    Block block2 = blockState.getBlock();
                    try {
                        try {
                            block = block2;
                            if (stringArray == null) break block18;
                            if (block == Blocks.TNT) break block19;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        block = block2;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                try {
                    float f2 = block.getBlastResistance() - 0.0f;
                    n2 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                    if (stringArray == null) break block20;
                    if (n2 <= 0) break block19;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                n2 = 1;
                break block20;
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    public oi cDx(boolean bl2) {
        this.fiwOr = bl2;
        return this;
    }

    private boolean cDS(BlockPos blockPos, Item item) {
        return this.cDT(blockPos, rD.dlmvG.world.getBlockState(blockPos), item);
    }

    public oi$vg cEc() {
        return this.QPXAM;
    }
}

