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

public class ja {
   public static Direction[] srUqw;
   public static Direction[] toQLU;
   private static long PbEQK;

   private static native void _b322c0acb18f2f07ac99b71e048df7be();

   static {
      Loader.doInit(ja.class);
      _b322c0acb18f2f07ac99b71e048df7be();
   }

   private static native MatchException byK(MatchException var0);

   public static native boolean byF(Box var0, BlockPos var1);

   public static List<BlockEntity> byD(WorldChunk var0) {
      return new ArrayList<>(var0.getBlockEntities().values());
   }

   public static native List<WorldChunk> byG();

   public static native void byJ();

   public static List<BlockPos> byE(BlockPos var0) {
      long var1 = PbEQK ^ 65621393559149L;
      String[] var10000 = jf.bBe();
      ArrayList var4 = new ArrayList();
      String[] var3 = var10000;
      int var5 = var0.getX() - 2;

      label49:
      while (true) {
         int var9 = var5;

         label47:
         while (var9 <= var0.getX() + 2) {
            int var6 = var0.getY() - 1;

            while (var6 <= var0.getY() + 4) {
               var9 = var0.getZ() - 2;
               if (var3 == null) {
                  continue label47;
               }

               int var7 = var9;

               while (true) {
                  if (var7 <= var0.getZ() + 2) {
                     try {
                        var4.add(new BlockPos(var5, var6, var7));
                        var7++;
                        if (var3 == null) {
                           break;
                        }

                        if (var3 != null) {
                           continue;
                        }
                     } catch (MatchException var8) {
                        throw byK(var8);
                     }
                  }

                  var6++;
                  break;
               }

               if (var3 == null) {
                  break;
               }
            }

            var5++;
            if (var3 == null) {
               return var4;
            }
            continue label49;
         }

         return var4;
      }
   }

   public static native boolean byH(Block var0);

   public static native boolean byI(BlockPos var0);
}
