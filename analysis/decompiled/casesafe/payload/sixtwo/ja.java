package sixtwo;

import java.util.ArrayList;
import java.util.List;
import native.Loader;
import net.minecraft.class_2248;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_238;
import net.minecraft.class_2586;
import net.minecraft.class_2818;

public class ja {
   public static class_2350[] srUqw;
   public static class_2350[] toQLU;
   private static long PbEQK;

   private static native void _b322c0acb18f2f07ac99b71e048df7be();

   static {
      Loader.doInit(ja.class);
      _b322c0acb18f2f07ac99b71e048df7be();
   }

   private static native MatchException byK(MatchException var0);

   public static native boolean byF(class_238 var0, class_2338 var1);

   public static List<class_2586> byD(class_2818 var0) {
      return new ArrayList<>(var0.method_12214().values());
   }

   public static native List<class_2818> byG();

   public static native void byJ();

   public static List<class_2338> byE(class_2338 var0) {
      long var1 = PbEQK ^ 65621393559149L;
      String[] var10000 = jf.bBe();
      ArrayList var4 = new ArrayList();
      String[] var3 = var10000;
      int var5 = var0.method_10263() - 2;

      label49:
      while (true) {
         int var9 = var5;

         label47:
         while (var9 <= var0.method_10263() + 2) {
            int var6 = var0.method_10264() - 1;

            while (var6 <= var0.method_10264() + 4) {
               var9 = var0.method_10260() - 2;
               if (var3 == null) {
                  continue label47;
               }

               int var7 = var9;

               while (true) {
                  if (var7 <= var0.method_10260() + 2) {
                     try {
                        var4.add(new class_2338(var5, var6, var7));
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

   public static native boolean byH(class_2248 var0);

   public static native boolean byI(class_2338 var0);
}
