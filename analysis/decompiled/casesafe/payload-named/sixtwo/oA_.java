package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import java.util.function.Predicate;
import net.minecraft.block.BlockState;
import net.minecraft.util.math.BlockPos;

public class oA {
   private static final oC aLdiM = new oC();
   private final BlockPos QzHgl;
   private oD fhmDl = oD.pxPhl;
   private oB zwhrf = oB.LwHxs;
   private boolean xUADK = false;
   private Predicate<BlockState> TgQUV = oC.djrGf;
   private final List<oy> whCJw = new ArrayList<>();
   private oz Tpyyr;
   private static final long vNCDT = gb.aYR(8405173992199691241L, -4794170450468326090L, MethodHandles.lookup().lookupClass()).a(136406394027844L);

   private oA(BlockPos var1) {
      this.QzHgl = var1;
   }

   public oA cHI(oy var1) {
      long var2 = vNCDT ^ 6151571987475L;

      try {
         if (var1 != null) {
            this.whCJw.add(var1);
         }

         return this;
      } catch (MatchException var4) {
         throw cHM(var4);
      }
   }

   public oA cHH(Predicate<BlockState> var1) {
      this.TgQUV = var1;
      return this;
   }

   public oA cHE(oD var1) {
      this.fhmDl = var1;
      return this;
   }

   private static MatchException cHM(MatchException var0) {
      return var0;
   }

   public static oA cHB(BlockPos var0) {
      return new oA(var0);
   }

   public oA cHG(boolean var1) {
      this.xUADK = var1;
      return this;
   }

   public static oA cHC(BlockPos var0, oD var1, boolean var2) {
      return cHD(var0, var1, var2, oC.djrGf);
   }

   public oA cHF(oB var1) {
      this.zwhrf = var1;
      return this;
   }

   public oA cHJ(oz var1) {
      this.Tpyyr = var1;
      return this;
   }

   public boolean cHK() {
      long var1 = vNCDT ^ 93346566314799L;
      String[] var3 = oz.b();

      boolean var10000;
      label25: {
         try {
            if (aLdiM.cHT(this.QzHgl, this.fhmDl, this.zwhrf, this.xUADK, this.TgQUV, this.whCJw, this.Tpyyr) != null) {
               var10000 = true;
               break label25;
            }
         } catch (MatchException var5) {
            throw cHM(var5);
         }

         var10000 = false;
      }

      try {
         if (iS.bwL() == null) {
            oz.b(new String[5]);
         }

         return var10000;
      } catch (MatchException var4) {
         throw cHM(var4);
      }
   }

   public static oA cHD(BlockPos var0, oD var1, boolean var2, Predicate<BlockState> var3) {
      return new oA(var0).cHE(var1).cHG(var2).cHH(var3);
   }

   public oz cHL() {
      return aLdiM.cHT(this.QzHgl, this.fhmDl, this.zwhrf, this.xUADK, this.TgQUV, this.whCJw, this.Tpyyr);
   }
}
