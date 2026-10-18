package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10055;
import net.minecraft.class_11659;
import net.minecraft.class_3883;
import net.minecraft.class_3887;
import net.minecraft.class_4587;
import net.minecraft.class_4588;
import net.minecraft.class_4608;
import net.minecraft.class_591;
import net.minecraft.class_4587.class_4665;
import org.joml.Matrix4f;

public class qC extends class_3887<class_10055, class_591> {
   private static boolean ajGhE;
   private static final long PftoW = gb.aYR(-4265989503287534394L, 7359482773001144905L, MethodHandles.lookup().lookupClass()).a(212318759050670L);
   private static final long[] uJLFk;
   private static final Integer[] lcjyD;
   private static final Map KgUBe = new HashMap(13);

   public qC(class_3883<class_10055, class_591> var1) {
      super(var1);
   }

   static {
      cZx(true);
      long var0 = PftoW ^ 120307984891374L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[4];
      int var5 = 0;
      String var6 = "6µ¯Ì.=\u0096\u00ad\u008cÒ\u0080ò_\u009a²¿";
      int var7 = "6µ¯Ì.=\u0096\u00ad\u008cÒ\u0080ò_\u009a²¿".length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var2.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     uJLFk = var8;
                     lcjyD = new Integer[4];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "nÃÍo\u001d÷\u0095Cö\u0010\u000b_\u001aÜ \u008c";
                  var7 = "nÃÍo\u001d÷\u0095Cö\u0010\u000b_\u001aÜ \u008c".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }

   public static void cZx(boolean var0) {
      ajGhE = var0;
   }

   private static int cZC(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cZB(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static boolean cZy() {
      return ajGhE;
   }

   private static MatchException cZA(MatchException var0) {
      return var0;
   }

   private static void cZu(class_4587 var0, class_4588 var1, int var2) {
      long var3 = PftoW ^ 32977686975915L;
      var0.method_22903();
      var0.method_22904(1.0, -0.10000001, 0.1);
      var0.method_22905(1.875F, 1.875F, 1.0F);
      var0.method_46416(-0.9375F, -0.0625F, 0.0F);
      var0.method_22905(1.0F, 1.0F, 0.7F);
      class_4665 var6 = var0.method_23760();
      Matrix4f var7 = var6.method_23761();
      var1.method_22918(var7, 0.0F, 0.0F, 0.0F)
         .method_1336(
            cZD<"a">(25439, 6826488049639504249L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3)
         )
         .method_22913(1.0F, 1.0F)
         .method_22922(class_4608.field_21444)
         .method_60803(var2)
         .method_60831(var0.method_23760(), 0.0F, 0.0F, 1.0F);
      var1.method_22918(var7, 1.0F, 0.0F, 0.0F)
         .method_1336(
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3)
         )
         .method_22913(0.0F, 1.0F)
         .method_22922(class_4608.field_21444)
         .method_60803(var2)
         .method_60831(var0.method_23760(), 0.0F, 0.0F, 1.0F);
      var1.method_22918(var7, 1.0F, 1.0F, 0.0F)
         .method_1336(
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3)
         )
         .method_22913(0.0F, 0.0F)
         .method_22922(class_4608.field_21444)
         .method_60803(var2)
         .method_60831(var0.method_23760(), 0.0F, 0.0F, 1.0F);
      var1.method_22918(var7, 0.0F, 1.0F, 0.0F)
         .method_1336(
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3)
         )
         .method_22913(1.0F, 0.0F)
         .method_22922(class_4608.field_21444)
         .method_60803(var2)
         .method_60831(var0.method_23760(), 0.0F, 0.0F, 1.0F);
      boolean var10000 = cZy();
      var1.method_22918(var7, 0.0F, 1.0F, -0.078125F)
         .method_1336(
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3)
         )
         .method_22913(1.0F, 0.0F)
         .method_22922(class_4608.field_21444)
         .method_60803(var2)
         .method_60831(var0.method_23760(), 0.0F, 0.0F, -1.0F);
      var1.method_22918(var7, 1.0F, 1.0F, -0.078125F)
         .method_1336(
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3)
         )
         .method_22913(0.0F, 0.0F)
         .method_22922(class_4608.field_21444)
         .method_60803(var2)
         .method_60831(var0.method_23760(), 0.0F, 0.0F, -1.0F);
      var1.method_22918(var7, 1.0F, 0.0F, -0.078125F)
         .method_1336(
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3)
         )
         .method_22913(0.0F, 1.0F)
         .method_22922(class_4608.field_21444)
         .method_60803(var2)
         .method_60831(var0.method_23760(), 0.0F, 0.0F, -1.0F);
      var1.method_22918(var7, 0.0F, 0.0F, -0.078125F)
         .method_1336(
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3),
            cZD<"a">(25340, 1393990053305333976L ^ var3)
         )
         .method_22913(1.0F, 1.0F)
         .method_22922(class_4608.field_21444)
         .method_60803(var2)
         .method_60831(var0.method_23760(), 0.0F, 0.0F, -1.0F);
      int var8 = 0;
      boolean var5 = var10000;

      while (true) {
         if (var8 < cZD<"a">(12780, 4845769759170653129L ^ var3)) {
            float var9 = var8 / 32.0F;
            float var10 = 1.0F - var9 - 0.015625F;
            var1.method_22918(var7, var9, 0.0F, -0.078125F)
               .method_1336(
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3)
               )
               .method_22913(var10, 1.0F)
               .method_22922(class_4608.field_21444)
               .method_60803(var2)
               .method_60831(var0.method_23760(), -1.0F, 0.0F, 0.0F);
            var1.method_22918(var7, var9, 0.0F, 0.0F)
               .method_1336(
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3)
               )
               .method_22913(var10, 1.0F)
               .method_22922(class_4608.field_21444)
               .method_60803(var2)
               .method_60831(var0.method_23760(), -1.0F, 0.0F, 0.0F);
            var1.method_22918(var7, var9, 1.0F, 0.0F)
               .method_1336(
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3)
               )
               .method_22913(var10, 0.0F)
               .method_22922(class_4608.field_21444)
               .method_60803(var2)
               .method_60831(var0.method_23760(), -1.0F, 0.0F, 0.0F);
            var1.method_22918(var7, var9, 1.0F, -0.078125F)
               .method_1336(
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3),
                  cZD<"a">(25340, 1393990053305333976L ^ var3)
               )
               .method_22913(var10, 0.0F)
               .method_22922(class_4608.field_21444)
               .method_60803(var2)
               .method_60831(var0.method_23760(), -1.0F, 0.0F, 0.0F);
            float var11 = var9 + 0.03125F;

            try {
               var1.method_22918(var7, var11, 1.0F, -0.078125F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(var10, 0.0F)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 1.0F, 0.0F, 0.0F);
               var1.method_22918(var7, var11, 1.0F, 0.0F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(var10, 0.0F)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 1.0F, 0.0F, 0.0F);
               var1.method_22918(var7, var11, 0.0F, 0.0F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(var10, 1.0F)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 1.0F, 0.0F, 0.0F);
               var1.method_22918(var7, var11, 0.0F, -0.078125F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(var10, 1.0F)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 1.0F, 0.0F, 0.0F);
               var8++;
               if (!var5) {
                  break;
               }

               if (var5) {
                  continue;
               }
            } catch (MatchException var14) {
               throw cZA(var14);
            }
         }

         var8 = 0;
         break;
      }

      while (true) {
         if (var8 < cZD<"a">(3484, 4503067855661193147L ^ var3)) {
            float var15 = var8 / 32.0F + 0.03125F;
            float var17 = 1.0F - var8 / 32.0F - 0.015625F;

            try {
               var1.method_22918(var7, 0.0F, var15, 0.0F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(1.0F, var17)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 0.0F, 1.0F, 0.0F);
               var1.method_22918(var7, 1.0F, var15, 0.0F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(0.0F, var17)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 0.0F, 1.0F, 0.0F);
               var1.method_22918(var7, 1.0F, var15, -0.078125F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(0.0F, var17)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 0.0F, 1.0F, 0.0F);
               var1.method_22918(var7, 0.0F, var15, -0.078125F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(1.0F, var17)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 0.0F, 1.0F, 0.0F);
               var8++;
               if (!var5) {
                  break;
               }

               if (var5) {
                  continue;
               }
            } catch (MatchException var13) {
               throw cZA(var13);
            }
         }

         var8 = 0;
         break;
      }

      while (true) {
         if (var8 < cZD<"a">(3484, 4503067855661193147L ^ var3)) {
            float var16 = var8 / 32.0F;
            float var18 = 1.0F - var16 - 0.015625F;

            try {
               var1.method_22918(var7, 1.0F, var16, 0.0F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(0.0F, var18)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 0.0F, -1.0F, 0.0F);
               var1.method_22918(var7, 0.0F, var16, 0.0F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(1.0F, var18)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 0.0F, -1.0F, 0.0F);
               var1.method_22918(var7, 0.0F, var16, -0.078125F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(1.0F, var18)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 0.0F, -1.0F, 0.0F);
               var1.method_22918(var7, 1.0F, var16, -0.078125F)
                  .method_1336(
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3),
                     cZD<"a">(25340, 1393990053305333976L ^ var3)
                  )
                  .method_22913(0.0F, var18)
                  .method_22922(class_4608.field_21444)
                  .method_60803(var2)
                  .method_60831(var0.method_23760(), 0.0F, -1.0F, 0.0F);
               var8++;
               if (!var5) {
                  break;
               }

               if (var5) {
                  continue;
               }
            } catch (MatchException var12) {
               throw cZA(var12);
            }
         }

         var0.method_22909();
         break;
      }
   }

   private static int cZB(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 21331;
      if (lcjyD[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = uJLFk[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])KgUBe.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               KgUBe.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/qC", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         lcjyD[var3] = var15;
      }

      return lcjyD[var3];
   }

   public static boolean cZz() {
      boolean var0 = cZy();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw cZA(var1);
      }
   }

   public void cZt(class_4587 param1, class_11659 param2, int param3, class_10055 param4, float param5, float param6) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/qC.PftoW J
      // 003: ldc2_w 84834201988864
      // 006: lxor
      // 007: lstore 7
      // 009: invokestatic sixtwo/qC.cZy ()Z
      // 00c: istore 9
      // 00e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 011: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 014: ifnonnull 01c
      // 017: return
      // 018: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01b: athrow
      // 01c: getstatic sixtwo/qu.cmARD Ljava/util/concurrent/atomic/AtomicBoolean;
      // 01f: invokevirtual java/util/concurrent/atomic/AtomicBoolean.get ()Z
      // 022: iload 9
      // 024: ifeq 034
      // 027: ifne 037
      // 02a: goto 031
      // 02d: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: getstatic sixtwo/hF.BQuMu Z
      // 034: ifne 038
      // 037: return
      // 038: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 03b: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 03e: aload 4
      // 040: getfield net/minecraft/class_10055.field_53528 I
      // 043: invokevirtual net/minecraft/class_638.method_8469 (I)Lnet/minecraft/class_1297;
      // 046: astore 10
      // 048: aload 10
      // 04a: iload 9
      // 04c: ifeq 065
      // 04f: instanceof net/minecraft/class_742
      // 052: ifeq 06f
      // 055: goto 05c
      // 058: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05b: athrow
      // 05c: aload 10
      // 05e: goto 065
      // 061: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 064: athrow
      // 065: checkcast net/minecraft/class_742
      // 068: astore 11
      // 06a: iload 9
      // 06c: ifne 074
      // 06f: return
      // 070: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 073: athrow
      // 074: aload 11
      // 076: invokevirtual net/minecraft/class_742.method_5767 ()Z
      // 079: ifeq 081
      // 07c: return
      // 07d: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 080: athrow
      // 081: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 084: ldc sixtwo/ee
      // 086: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 089: checkcast sixtwo/ee
      // 08c: astore 12
      // 08e: aload 12
      // 090: invokevirtual sixtwo/ee.arM ()Lsixtwo/cJ;
      // 093: invokevirtual sixtwo/cJ.WF ()Z
      // 096: ifeq 09e
      // 099: return
      // 09a: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09d: athrow
      // 09e: aload 11
      // 0a0: getstatic net/minecraft/class_1304.field_6174 Lnet/minecraft/class_1304;
      // 0a3: invokevirtual net/minecraft/class_742.method_6118 (Lnet/minecraft/class_1304;)Lnet/minecraft/class_1799;
      // 0a6: astore 13
      // 0a8: aload 13
      // 0aa: getstatic net/minecraft/class_1802.field_8833 Lnet/minecraft/class_1792;
      // 0ad: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 0b0: ifeq 0b8
      // 0b3: return
      // 0b4: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b7: athrow
      // 0b8: invokestatic sixtwo/rD.dlR ()Lsixtwo/qF;
      // 0bb: aload 11
      // 0bd: invokevirtual sixtwo/qF.cZL (Lnet/minecraft/class_742;)Lnet/minecraft/class_2960;
      // 0c0: astore 14
      // 0c2: aload 14
      // 0c4: ifnonnull 0cc
      // 0c7: return
      // 0c8: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cb: athrow
      // 0cc: aload 11
      // 0ce: invokevirtual net/minecraft/class_742.method_18276 ()Z
      // 0d1: istore 15
      // 0d3: iload 15
      // 0d5: ifeq 0e0
      // 0d8: fconst_1
      // 0d9: goto 0e1
      // 0dc: invokestatic sixtwo/qC.cZA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0df: athrow
      // 0e0: fconst_0
      // 0e1: fstore 16
      // 0e3: fload 16
      // 0e5: ldc 0.2
      // 0e7: ldc 0.185
      // 0e9: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 0ec: fstore 17
      // 0ee: fload 16
      // 0f0: ldc 0.125
      // 0f2: ldc 0.175
      // 0f4: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 0f7: fstore 18
      // 0f9: fload 16
      // 0fb: ldc 24.0
      // 0fd: ldc 33.0
      // 0ff: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 102: fstore 19
      // 104: new org/joml/Vector3f
      // 107: dup
      // 108: fload 16
      // 10a: fconst_0
      // 10b: ldc 1.5
      // 10d: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 110: fconst_0
      // 111: fload 16
      // 113: fconst_1
      // 114: ldc 2.5
      // 116: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 119: invokespecial org/joml/Vector3f.<init> (FFF)V
      // 11c: astore 20
      // 11e: aload 20
      // 120: invokevirtual org/joml/Vector3f.normalize ()Lorg/joml/Vector3f;
      // 123: pop
      // 124: new org/joml/Vector3f
      // 127: dup
      // 128: fload 16
      // 12a: fconst_0
      // 12b: ldc 1.5
      // 12d: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 130: fconst_0
      // 131: fload 16
      // 133: ldc -1.0
      // 135: ldc -2.5
      // 137: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 13a: invokespecial org/joml/Vector3f.<init> (FFF)V
      // 13d: astore 21
      // 13f: aload 21
      // 141: invokevirtual org/joml/Vector3f.normalize ()Lorg/joml/Vector3f;
      // 144: pop
      // 145: fload 19
      // 147: fload 5
      // 149: ldc 4.0
      // 14b: fdiv
      // 14c: f2d
      // 14d: invokestatic net/minecraft/class_3532.method_15374 (D)F
      // 150: ldc 20.0
      // 152: fmul
      // 153: fadd
      // 154: fstore 22
      // 156: aload 14
      // 158: invokestatic net/minecraft/class_12249.method_75990 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1921;
      // 15b: astore 23
      // 15d: aload 1
      // 15e: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 161: aload 1
      // 162: ldc 1.1
      // 164: ldc 1.1
      // 166: ldc 1.1
      // 168: invokevirtual net/minecraft/class_4587.method_22905 (FFF)V
      // 16b: aload 1
      // 16c: fconst_0
      // 16d: fload 17
      // 16f: fload 18
      // 171: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 174: aload 1
      // 175: getstatic net/minecraft/class_7833.field_40714 Lnet/minecraft/class_7833;
      // 178: ldc 90.0
      // 17a: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 17f: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 182: aload 1
      // 183: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 186: aload 1
      // 187: aload 20
      // 189: invokestatic net/minecraft/class_7833.method_46356 (Lorg/joml/Vector3f;)Lnet/minecraft/class_7833;
      // 18c: fload 22
      // 18e: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 193: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 196: aload 1
      // 197: ldc -0.125
      // 199: ldc 0.125
      // 19b: ldc 0.18
      // 19d: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 1a0: aload 1
      // 1a1: getstatic net/minecraft/class_7833.field_40716 Lnet/minecraft/class_7833;
      // 1a4: ldc 100.0
      // 1a6: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 1ab: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 1ae: aload 2
      // 1af: aload 1
      // 1b0: aload 23
      // 1b2: aload 1
      // 1b3: iload 3
      // 1b4: invokedynamic render (Lnet/minecraft/class_4587;I)Lnet/minecraft/class_11659$class_11660; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lnet/minecraft/class_4587$class_4665;Lnet/minecraft/class_4588;)V, sixtwo/qC.cZw (Lnet/minecraft/class_4587;ILnet/minecraft/class_4587$class_4665;Lnet/minecraft/class_4588;)V, (Lnet/minecraft/class_4587$class_4665;Lnet/minecraft/class_4588;)V ]
      // 1b9: invokeinterface net/minecraft/class_11659.method_73483 (Lnet/minecraft/class_4587;Lnet/minecraft/class_1921;Lnet/minecraft/class_11659$class_11660;)V 4
      // 1be: aload 1
      // 1bf: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 1c2: aload 1
      // 1c3: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 1c6: aload 1
      // 1c7: aload 21
      // 1c9: invokestatic net/minecraft/class_7833.method_46356 (Lorg/joml/Vector3f;)Lnet/minecraft/class_7833;
      // 1cc: fload 22
      // 1ce: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 1d3: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 1d6: aload 1
      // 1d7: fconst_0
      // 1d8: ldc 0.125
      // 1da: ldc 0.18
      // 1dc: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 1df: aload 1
      // 1e0: getstatic net/minecraft/class_7833.field_40716 Lnet/minecraft/class_7833;
      // 1e3: ldc 80.0
      // 1e5: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 1ea: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 1ed: aload 2
      // 1ee: aload 1
      // 1ef: aload 23
      // 1f1: aload 1
      // 1f2: iload 3
      // 1f3: invokedynamic render (Lnet/minecraft/class_4587;I)Lnet/minecraft/class_11659$class_11660; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lnet/minecraft/class_4587$class_4665;Lnet/minecraft/class_4588;)V, sixtwo/qC.cZv (Lnet/minecraft/class_4587;ILnet/minecraft/class_4587$class_4665;Lnet/minecraft/class_4588;)V, (Lnet/minecraft/class_4587$class_4665;Lnet/minecraft/class_4588;)V ]
      // 1f8: invokeinterface net/minecraft/class_11659.method_73483 (Lnet/minecraft/class_4587;Lnet/minecraft/class_1921;Lnet/minecraft/class_11659$class_11660;)V 4
      // 1fd: aload 1
      // 1fe: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 201: aload 1
      // 202: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 205: return
   }

   private static CallSite cZD(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cZC".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/qC" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
