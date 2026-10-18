package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.Map;
import net.minecraft.class_3532;

public class cC extends cB {
   protected double bYxsv = -Double.MAX_VALUE;
   protected double WhuQX = Double.MAX_VALUE;
   protected double HqniU;
   protected double LYVpX = 0.0;
   private String VnJkN = "";
   private static int[] iwtYu;
   private static final long JJQla = gb.aYR(-1585309316230611833L, -5126282417768967594L, MethodHandles.lookup().lookupClass()).a(258852658179006L);

   public cC(mr var1) {
      super(var1);
   }

   public cC(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      if (VL() == null) {
         VK(new int[5]);
      }
   }

   @Override
   public void SS(JsonElement var1) {
      this.VA(var1.getAsDouble());
   }

   @Override
   public void SR(Map<String, Object> var1) {
      var1.put(Arrays.toString(this.NwlSF), this.LYVpX);
   }

   public double VI() {
      return this.LYVpX;
   }

   public long VD() {
      return (long)this.LYVpX;
   }

   public double VG() {
      return this.WhuQX;
   }

   private static MatchException VM(MatchException var0) {
      return var0;
   }

   public static int[] VL() {
      return iwtYu;
   }

   public double VF() {
      return this.bYxsv;
   }

   private double VE(double var1) {
      long var3 = JJQla ^ 69786275797551L;
      boolean var10000 = cB.Vu();
      double var6 = Math.min(this.bYxsv, this.WhuQX);
      double var8 = Math.max(this.bYxsv, this.WhuQX);
      double var10 = class_3532.method_15350(var1, var6, var8);
      boolean var5 = var10000;

      try {
         if (var5) {
            return this.HqniU;
         }

         if (!(this.HqniU > 0.0)) {
            return var10;
         }
      } catch (MatchException var12) {
         throw VM(var12);
      }

      var10 = Math.round(var10 / this.HqniU) * this.HqniU;
      return class_3532.method_15350(var10, var6, var8);
   }

   public static void VK(int[] var0) {
      iwtYu = var0;
   }

   public double VH() {
      return this.HqniU;
   }

   public String VJ() {
      return this.VnJkN;
   }

   public float VB() {
      return (float)this.LYVpX;
   }

   public int VC() {
      return (int)this.LYVpX;
   }

   public cC Vz(String var1) {
      long var2 = JJQla ^ 61080077123078L;
      boolean var4 = cB.Vu();

      cC var10000;
      String var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (var4) {
                  break label22;
               }

               if (var1 == null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw VM(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = "";
      }

      var10000.VnJkN = var10001;
      return this;
   }

   public cC VA(double param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cC.JJQla J
      // 03: ldc2_w 41887492064509
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: aload 0
      // 0c: dload 1
      // 0d: invokevirtual sixtwo/cC.VE (D)D
      // 10: dstore 6
      // 12: istore 5
      // 14: aload 0
      // 15: iload 5
      // 17: ifeq 3d
      // 1a: getfield sixtwo/cC.LYVpX D
      // 1d: dload 6
      // 1f: invokestatic java/lang/Double.compare (DD)I
      // 22: ifne 32
      // 25: goto 2c
      // 28: invokestatic sixtwo/cC.VM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: aload 0
      // 2d: areturn
      // 2e: invokestatic sixtwo/cC.VM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 0
      // 33: dload 6
      // 35: putfield sixtwo/cC.LYVpX D
      // 38: aload 0
      // 39: invokevirtual sixtwo/cC.Vk ()V
      // 3c: aload 0
      // 3d: areturn
   }

   public cC Vy(double var1) {
      this.HqniU = Math.max(0.0, var1);
      return this.VA(this.LYVpX);
   }

   public cC Vx(double var1) {
      this.WhuQX = var1;
      return this.VA(this.LYVpX);
   }

   public cC Vw(double var1) {
      this.bYxsv = var1;
      return this.VA(this.LYVpX);
   }
}
