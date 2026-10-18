package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_243;
import net.minecraft.class_3532;
import net.minecraft.class_4587;

public abstract class mq {
   protected class_243 vMbcc;
   protected class_243 fmdTe;
   protected class_243 AkpJr;
   protected mp XIaIs;
   protected float hMiLh;
   private static int nELfM;
   private static final long fnWhW = gb.aYR(-7470366193575900063L, 157527839226905763L, MethodHandles.lookup().lookupClass()).a(3765218645199L);

   public mq(class_243 var1, class_243 var2, mp var3, float var4) {
      long var5 = fnWhW ^ 13866980424024L;
      int var10000 = clO();
      super();
      this.vMbcc = var1;
      this.fmdTe = var1;
      int var7 = var10000;

      try {
         this.AkpJr = var2;
         this.XIaIs = var3;
         this.hMiLh = var4;
         if (iS.bwL() == null) {
            clM(++var7);
         }
      } catch (MatchException var8) {
         throw clP(var8);
      }
   }

   static {
      if (clO() != 0) {
         clM(16);
      }
   }

   public abstract void cls(class_4587 var1, float var2);

   public static void clM(int var0) {
      nELfM = var0;
   }

   private static MatchException clP(MatchException var0) {
      return var0;
   }

   public static int clO() {
      int var0 = clN();

      try {
         return var0 == 0 ? 24 : 0;
      } catch (MatchException var1) {
         throw clP(var1);
      }
   }

   public static int clN() {
      return nELfM;
   }

   public abstract boolean clp();

   public abstract void clr(class_4587 var1, float var2, mG var3);

   public class_243 clL(float var1) {
      long var2 = fnWhW ^ 76646303141266L;
      int var10000 = clN();
      double var5 = class_3532.method_16436(var1, this.fmdTe.field_1352, this.vMbcc.field_1352);
      int var4 = var10000;
      double var7 = class_3532.method_16436(var1, this.fmdTe.field_1351, this.vMbcc.field_1351);
      double var9 = class_3532.method_16436(var1, this.fmdTe.field_1350, this.vMbcc.field_1350);

      try {
         class_243 var12 = new class_243(var5, var7, var9);
         if (var4 == 0) {
            iS.bwK("NMVZ3");
         }

         return var12;
      } catch (MatchException var11) {
         throw clP(var11);
      }
   }

   public abstract void clq(class_4587 var1, float var2, mG var3);
}
