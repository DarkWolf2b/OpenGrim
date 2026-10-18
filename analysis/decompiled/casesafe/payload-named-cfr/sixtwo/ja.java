/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.Block
 *  net.minecraft.block.entity.BlockEntity
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Direction
 *  net.minecraft.world.chunk.WorldChunk
 */
package sixtwo;

import java.util.ArrayList;
import java.util.List;
import native.Loader;
import net.minecraft.block.Block;
import net.minecraft.block.entity.BlockEntity;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.world.chunk.WorldChunk;
import sixtwo.jf;

public class ja {
    public static Direction[] srUqw;
    public static Direction[] toQLU;
    private static long PbEQK;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _b322c0acb18f2f07ac99b71e048df7be();

    static {
        Loader.doInit(ja.class);
        ja._b322c0acb18f2f07ac99b71e048df7be();
    }

    private static native MatchException byK(MatchException var0);

    public static native boolean byF(Box var0, BlockPos var1);

    public static List<BlockEntity> byD(WorldChunk worldChunk) {
        return new ArrayList<BlockEntity>(worldChunk.getBlockEntities().values());
    }

    public static native List<WorldChunk> byG();

    public static native void byJ();

    public static List<BlockPos> byE(BlockPos blockPos) {
        long l2 = PbEQK ^ 0x3BAEABDA4E6DL;
        ArrayList<BlockPos> arrayList = new ArrayList<BlockPos>();
        String[] stringArray = jf.bBe();
        int n2 = blockPos.getX() - 2;
        block2: while (true) {
            int n3 = n2;
            block3: while (n3 <= blockPos.getX() + 2) {
                int n4 = blockPos.getY() - 1;
                while (n4 <= blockPos.getY() + 4) {
                    block7: {
                        n3 = blockPos.getZ() - 2;
                        if (stringArray == null) continue block3;
                        for (int i2 = v1443815; i2 <= blockPos.getZ() + 2; ++i2) {
                            try {
                                arrayList.add(new BlockPos(n2, n4, i2));
                                if (stringArray != null) {
                                    if (stringArray != null) continue;
                                    break;
                                }
                                break block7;
                            }
                            catch (MatchException matchException) {
                                throw ja.byK(matchException);
                            }
                        }
                        ++n4;
                    }
                    if (stringArray != null) continue;
                }
                ++n2;
                if (stringArray != null) continue block2;
            }
            break;
        }
        return arrayList;
    }

    public static native boolean byH(Block var0);

    public static native boolean byI(BlockPos var0);
}

