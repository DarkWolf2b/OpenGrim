package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_4587;
import org.joml.Matrix3x2fStack;

public class kG {
   private class_4587 HMKVC;
   private Matrix3x2fStack RyMUH;
   private float CKUpI;
   private float VHjcQ;
   private float zLaiu;
   private float THJBt;
   private float yoCan;
   private mG rjrxM;
   private static iS[] ajnUy;
   private static final long AwfGk = gb.aYR(2091655255853178601L, 5796732930774797645L, MethodHandles.lookup().lookupClass()).a(280769937773786L);

   public static iS[] bTH() {
      return ajnUy;
   }

   public static void bTG(iS[] var0) {
      ajnUy = var0;
   }

   public static kG$uo bTx() {
      return new kG$uo();
   }

   private static MatchException bTI(MatchException var0) {
      return var0;
   }

   public static kG$uo bTw(Matrix3x2fStack var0, double var1, double var3, double var5, double var7, double var9) {
      return bTx().dtz(var0).dtA((float)var1).dtB((float)var3).dtC((float)var5).dtD((float)var7).dtE((float)var9);
   }

   kG(class_4587 var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6, float var7, mG var8) {
      long var9 = AwfGk ^ 125424028001763L;
      super();
      bTH();
      this.HMKVC = var1;
      this.RyMUH = var2;
      this.CKUpI = var3;
      this.VHjcQ = var4;
      this.zLaiu = var5;

      try {
         this.THJBt = var6;
         this.yoCan = var7;
         this.rjrxM = var8;
         if (iS.bwL() == null) {
            bTG(new iS[4]);
         }
      } catch (MatchException var12) {
         throw bTI(var12);
      }
   }

   static {
      if (bTH() != null) {
         bTG(new iS[1]);
      }
   }

   public static kG$uo bTv(class_4587 var0, double var1, double var3, double var5, double var7, double var9) {
      return bTx().dty(var0).dtA((float)var1).dtB((float)var3).dtC((float)var5).dtD((float)var7).dtE((float)var9);
   }

   public float bTE() {
      return this.yoCan;
   }

   public float bTA() {
      return this.CKUpI;
   }

   public float bTB() {
      return this.VHjcQ;
   }

   public Matrix3x2fStack bTz() {
      return this.RyMUH;
   }

   public float bTC() {
      return this.zLaiu;
   }

   public float bTD() {
      return this.THJBt;
   }

   public class_4587 bTy() {
      return this.HMKVC;
   }

   public mG bTF() {
      return this.rjrxM;
   }
}
