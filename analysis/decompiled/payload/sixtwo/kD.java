package sixtwo;

import java.lang.invoke.MethodHandles;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix4f;

public class kD {
   private Matrix3x2fStack vLXCt;
   private Matrix4f LTgfz;
   private float qcXxG;
   private float QkzCs;
   private float lpFYB;
   private float SCber;
   private int[] bDgdv;
   private mG uePHf;
   private static final long PeEVb = gb.aYR(8725412669369813506L, 2727400911256207010L, MethodHandles.lookup().lookupClass()).a(85921129537519L);

   private static MatchException bTe(MatchException var0) {
      return var0;
   }

   public static kD$ul bSU(Matrix4f var0, double var1, double var3, double var5, double var7, int[] var9) {
      return bSV().dsR(var0).dsS((float)var1).dsT((float)var3).dsU((float)var5).dsV((float)var7).dsW(var9);
   }

   public static kD$ul bSV() {
      return new kD$ul();
   }

   kD(Matrix3x2fStack var1, Matrix4f var2, float var3, float var4, float var5, float var6, int[] var7, mG var8) {
      long var9 = PeEVb ^ 89857723057770L;
      iS[] var10000 = kG.bTH();
      super();
      this.vLXCt = var1;
      this.LTgfz = var2;
      this.qcXxG = var3;
      iS[] var11 = var10000;

      try {
         this.QkzCs = var4;
         this.lpFYB = var5;
         this.SCber = var6;
         this.bDgdv = var7;
         this.uePHf = var8;
         if (var11 != null) {
            iS.bwK("ZgrXCc");
         }
      } catch (MatchException var12) {
         throw bTe(var12);
      }
   }

   public int[] bTc() {
      return this.bDgdv;
   }

   public Matrix4f bSX() {
      return this.LTgfz;
   }

   public float bTb() {
      return this.SCber;
   }

   public mG bTd() {
      return this.uePHf;
   }

   public float bSY() {
      return this.qcXxG;
   }

   public float bSZ() {
      return this.QkzCs;
   }

   public float bTa() {
      return this.lpFYB;
   }

   public Matrix3x2fStack bSW() {
      return this.vLXCt;
   }

   public static kD$ul bST(Matrix3x2fStack var0, double var1, double var3, double var5, double var7, int[] var9) {
      return bSV().dsQ(var0).dsS((float)var1).dsT((float)var3).dsU((float)var5).dsV((float)var7).dsW(var9);
   }
}
