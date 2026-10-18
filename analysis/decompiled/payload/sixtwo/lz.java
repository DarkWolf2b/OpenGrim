package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_11400;
import net.minecraft.class_1297;
import net.minecraft.class_4184;
import net.minecraft.class_5636;
import net.minecraft.class_638;
import net.minecraft.class_7285;
import net.minecraft.class_9779;
import net.minecraft.class_9848;
import org.jspecify.annotations.NonNull;

public class lz extends class_11400 {
   private static iS[] pBqwe;
   private static final long KvTCM = gb.aYR(-4215507453542254378L, 39000015741264975L, MethodHandles.lookup().lookupClass()).a(122772580996940L);

   static {
      if (ccL() != null) {
         ccK(new iS[3]);
      }
   }

   public boolean method_42593(class_5636 param1, @NonNull class_1297 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lz.KvTCM J
      // 03: ldc2_w 21972339393508
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/lz.ccL ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 10: ldc sixtwo/dh
      // 12: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 15: checkcast sixtwo/dh
      // 18: astore 6
      // 1a: aload 6
      // 1c: invokevirtual sixtwo/dh.bag ()Z
      // 1f: aload 5
      // 21: ifnonnull 3d
      // 24: ifeq 50
      // 27: goto 2e
      // 2a: invokestatic sixtwo/lz.ccM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2d: athrow
      // 2e: aload 6
      // 30: invokevirtual sixtwo/dh.aeU ()Lsixtwo/cu;
      // 33: invokevirtual sixtwo/cu.SZ ()Z
      // 36: goto 3d
      // 39: invokestatic sixtwo/lz.ccM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3c: athrow
      // 3d: aload 5
      // 3f: ifnonnull 4d
      // 42: ifne 50
      // 45: goto 4c
      // 48: invokestatic sixtwo/lz.ccM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4b: athrow
      // 4c: bipush 1
      // 4d: goto 51
      // 50: bipush 0
      // 51: ireturn
      // 52: astore 6
      // 54: bipush 0
      // 55: ireturn
   }

   public boolean method_71655() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lz.KvTCM J
      // 03: ldc2_w 99995595507888
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lz.ccL ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 0f: ldc sixtwo/dh
      // 11: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 14: checkcast sixtwo/dh
      // 17: astore 4
      // 19: aload 4
      // 1b: invokevirtual sixtwo/dh.bag ()Z
      // 1e: aload 3
      // 1f: ifnonnull 3b
      // 22: ifeq 4d
      // 25: goto 2c
      // 28: invokestatic sixtwo/lz.ccM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2b: athrow
      // 2c: aload 4
      // 2e: invokevirtual sixtwo/dh.aeW ()Lsixtwo/cu;
      // 31: invokevirtual sixtwo/cu.SZ ()Z
      // 34: goto 3b
      // 37: invokestatic sixtwo/lz.ccM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3a: athrow
      // 3b: aload 3
      // 3c: ifnonnull 4a
      // 3f: ifeq 4d
      // 42: goto 49
      // 45: invokestatic sixtwo/lz.ccM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 48: athrow
      // 49: bipush 1
      // 4a: goto 4e
      // 4d: bipush 0
      // 4e: ireturn
      // 4f: astore 4
      // 51: bipush 0
      // 52: ireturn
   }

   public void method_42591(@NonNull class_7285 var1, @NonNull class_4184 var2, @NonNull class_638 var3, float var4, @NonNull class_9779 var5) {
      long var6 = KvTCM ^ 2590354914516L;
      iS[] var8 = ccL();

      try {
         dh var9 = rD.dlJ().aZx(dh.class);

         dh var17;
         label48: {
            label39: {
               label38: {
                  try {
                     var10000 = var9.aeV().SZ();
                     if (var8 != null) {
                        break label39;
                     }

                     if (!var10000) {
                        break label38;
                     }
                  } catch (Throwable var13) {
                     throw ccM(var13);
                  }

                  float var10 = Float.MAX_VALUE;
                  float var11 = Float.MAX_VALUE;
                  var1.field_60582 = var10;
                  var1.field_60584 = var11;
                  var1.field_60583 = var10;
                  var1.field_60585 = var11;
                  var1.field_60099 = var11;
                  var1.field_60100 = var11;
               }

               try {
                  var17 = var9;
                  if (var8 != null) {
                     break label48;
                  }

                  var10000 = var9.aeW().SZ();
               } catch (Throwable var12) {
                  throw ccM(var12);
               }
            }

            if (!var10000) {
               return;
            }

            var17 = var9;
         }

         float var15 = var17.aeY().UP(0);
         float var16 = var9.aeY().UP(1);
         var1.field_60582 = var15;
         var1.field_60584 = var16;
         var1.field_60583 = var15;
         var1.field_60585 = var16;
         var1.field_60099 = var16;
         var1.field_60100 = var16;
      } catch (Throwable var14) {
      }
   }

   public int method_71654(@NonNull class_638 var1, @NonNull class_4184 var2, int var3, float var4) {
      try {
         dh var5 = rD.dlJ().aZx(dh.class);
         float[] var6 = jk.bDt(var5.aeX().Wh());
         return class_9848.method_61318(var6[3], var6[0], var6[1], var6[2]);
      } catch (Throwable var7) {
         return -1;
      }
   }

   public static void ccK(iS[] var0) {
      pBqwe = var0;
   }

   public static iS[] ccL() {
      return pBqwe;
   }

   private static Throwable ccM(Throwable var0) {
      return var0;
   }
}
