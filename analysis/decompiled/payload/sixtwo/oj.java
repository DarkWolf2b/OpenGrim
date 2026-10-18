package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_2338;
import net.minecraft.class_243;
import net.minecraft.class_3965;

public class oj {
   private oz awZhb;
   private static final long EBkhS = gb.aYR(8080834934779996922L, -4925974876756873979L, MethodHandles.lookup().lookupClass()).a(202294447517771L);

   public boolean cEr(oD param1, oB param2, boolean param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oj.EBkhS J
      // 03: ldc2_w 24584241501628
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/of.cCL ()[Ljava/lang/String;
      // 0c: astore 6
      // 0e: aload 0
      // 0f: invokevirtual sixtwo/oj.cEy ()Z
      // 12: aload 6
      // 14: ifnull 3e
      // 17: ifeq 3d
      // 1a: goto 21
      // 1d: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: invokevirtual sixtwo/oj.cED ()Lnet/minecraft/class_2338;
      // 25: aload 1
      // 26: iload 3
      // 27: invokestatic sixtwo/oA.cHC (Lnet/minecraft/class_2338;Lsixtwo/oD;Z)Lsixtwo/oA;
      // 2a: aload 2
      // 2b: invokevirtual sixtwo/oA.cHF (Lsixtwo/oB;)Lsixtwo/oA;
      // 2e: aload 0
      // 2f: getfield sixtwo/oj.awZhb Lsixtwo/oz;
      // 32: invokevirtual sixtwo/oA.cHJ (Lsixtwo/oz;)Lsixtwo/oA;
      // 35: invokevirtual sixtwo/oA.cHK ()Z
      // 38: ireturn
      // 39: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: bipush 0
      // 3e: ireturn
   }

   private static MatchException cEG(MatchException var0) {
      return var0;
   }

   public class_2338 cED() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oj.EBkhS J
      // 03: ldc2_w 8385172609891
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/of.cCL ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 27
      // 11: invokevirtual sixtwo/oj.cEy ()Z
      // 14: ifne 26
      // 17: goto 1e
      // 1a: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: getstatic net/minecraft/class_2338.field_10980 Lnet/minecraft/class_2338;
      // 21: areturn
      // 22: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: getfield sixtwo/oj.awZhb Lsixtwo/oz;
      // 2a: invokevirtual sixtwo/oz.blockPos ()Lnet/minecraft/class_2338;
      // 2d: areturn
   }

   public boolean cEy() {
      long var1 = EBkhS ^ 34566559594268L;

      try {
         if (this.awZhb != null) {
            return true;
         }
      } catch (MatchException var3) {
         throw cEG(var3);
      }

      return false;
   }

   public void cEx() {
      this.awZhb = null;
   }

   public class_243 cEE() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oj.EBkhS J
      // 03: ldc2_w 115439191344551
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/of.cCL ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 26
      // 11: invokevirtual sixtwo/oj.cEy ()Z
      // 14: ifeq 2f
      // 17: goto 1e
      // 1a: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: getfield sixtwo/oj.awZhb Lsixtwo/oz;
      // 29: invokevirtual sixtwo/oz.hitPoint ()Lnet/minecraft/class_243;
      // 2c: goto 32
      // 2f: getstatic net/minecraft/class_243.field_1353 Lnet/minecraft/class_243;
      // 32: areturn
   }

   public oz cEC() {
      return this.awZhb;
   }

   public boolean cEt() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oj.EBkhS J
      // 03: ldc2_w 79997629704953
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/of.cCL ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12: aload 3
      // 13: ifnull 30
      // 16: ifnonnull 2a
      // 19: goto 20
      // 1c: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: ldc2_w 4.5
      // 23: goto 35
      // 26: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 30: invokevirtual net/minecraft/class_746.method_55754 ()D
      // 33: d2f
      // 34: f2d
      // 35: dstore 4
      // 37: aload 0
      // 38: dload 4
      // 3a: invokevirtual sixtwo/oj.cEu (D)Z
      // 3d: ireturn
   }

   public class_3965 cEB() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oj.EBkhS J
      // 03: ldc2_w 43952609769941
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/of.cCL ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/oj.awZhb Lsixtwo/oz;
      // 10: aload 3
      // 11: ifnull 2a
      // 14: ifnonnull 26
      // 17: goto 1e
      // 1a: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aconst_null
      // 1f: goto 2d
      // 22: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: getfield sixtwo/oj.awZhb Lsixtwo/oz;
      // 2a: invokevirtual sixtwo/oz.blockHitResult ()Lnet/minecraft/class_3965;
      // 2d: areturn
   }

   public boolean cEu(double param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oj.EBkhS J
      // 03: ldc2_w 95876631676913
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/of.cCL ()[Ljava/lang/String;
      // 0b: astore 5
      // 0d: aload 0
      // 0e: aload 5
      // 10: ifnull 27
      // 13: invokevirtual sixtwo/oj.cEy ()Z
      // 16: ifne 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush 0
      // 21: ireturn
      // 22: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: invokevirtual sixtwo/oj.cEC ()Lsixtwo/oz;
      // 2a: astore 6
      // 2c: aload 6
      // 2e: aload 5
      // 30: ifnull 45
      // 33: ifnonnull 43
      // 36: goto 3d
      // 39: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: bipush 0
      // 3e: ireturn
      // 3f: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 6
      // 45: invokevirtual sixtwo/oz.hitPoint ()Lnet/minecraft/class_243;
      // 48: astore 7
      // 4a: aload 7
      // 4c: ldc2_w 0.10000000149011612
      // 4f: ldc2_w 0.10000000149011612
      // 52: ldc2_w 0.10000000149011612
      // 55: invokestatic net/minecraft/class_238.method_30048 (Lnet/minecraft/class_243;DDD)Lnet/minecraft/class_238;
      // 58: astore 8
      // 5a: aload 8
      // 5c: dload 1
      // 5d: invokestatic sixtwo/ox.cHb (Lnet/minecraft/class_238;D)Z
      // 60: ireturn
   }

   public void cEz() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oj.EBkhS J
      // 03: ldc2_w 115978324076225
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/of.cCL ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12: aload 3
      // 13: ifnull 2f
      // 16: ifnonnull 29
      // 19: goto 20
      // 1c: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: ldc 4.5
      // 22: goto 33
      // 25: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2f: invokevirtual net/minecraft/class_746.method_55754 ()D
      // 32: d2f
      // 33: fstore 4
      // 35: aload 0
      // 36: fload 4
      // 38: invokevirtual sixtwo/oj.cEA (F)V
      // 3b: return
   }

   public void cEv(oz param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oj.EBkhS J
      // 03: ldc2_w 62671537927843
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/of.cCL ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 4
      // 0f: ifnull 2b
      // 12: aload 1
      // 13: ifnonnull 26
      // 16: goto 1d
      // 19: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: invokevirtual sixtwo/oj.cEx ()V
      // 21: return
      // 22: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: aload 1
      // 28: putfield sixtwo/oj.awZhb Lsixtwo/oz;
      // 2b: return
   }

   public void cEw(class_3965 var1) {
      long var2 = EBkhS ^ 84044686027210L;

      oj var10000;
      oz var10001;
      label17: {
         try {
            var10000 = this;
            if (var1 == null) {
               var10001 = null;
               break label17;
            }
         } catch (MatchException var4) {
            throw cEG(var4);
         }

         var10001 = new oz(var1.method_17777(), var1);
      }

      var10000.awZhb = var10001;
   }

   public void cEs(oD param1, oB param2, boolean param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oj.EBkhS J
      // 03: ldc2_w 77704684314365
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/of.cCL ()[Ljava/lang/String;
      // 0c: astore 6
      // 0e: aload 0
      // 0f: aload 6
      // 11: ifnull 29
      // 14: invokevirtual sixtwo/oj.cEy ()Z
      // 17: ifeq 4c
      // 1a: goto 21
      // 1d: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: goto 29
      // 25: invokestatic sixtwo/oj.cEG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: invokevirtual sixtwo/oj.cED ()Lnet/minecraft/class_2338;
      // 2c: aload 1
      // 2d: iload 3
      // 2e: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/oj.cEF (Lnet/minecraft/class_2680;)Z, (Lnet/minecraft/class_2680;)Z ]
      // 33: invokestatic sixtwo/oA.cHD (Lnet/minecraft/class_2338;Lsixtwo/oD;ZLjava/util/function/Predicate;)Lsixtwo/oA;
      // 36: aload 2
      // 37: invokevirtual sixtwo/oA.cHF (Lsixtwo/oB;)Lsixtwo/oA;
      // 3a: aload 0
      // 3b: getfield sixtwo/oj.awZhb Lsixtwo/oz;
      // 3e: invokevirtual sixtwo/oA.cHJ (Lsixtwo/oz;)Lsixtwo/oA;
      // 41: invokevirtual sixtwo/oA.cHL ()Lsixtwo/oz;
      // 44: astore 7
      // 46: aload 0
      // 47: aload 7
      // 49: invokevirtual sixtwo/oj.cEv (Lsixtwo/oz;)V
      // 4c: return
   }

   public void cEA(float var1) {
      long var2 = EBkhS ^ 10460716968504L;
      String[] var4 = of.cCL();

      oj var7;
      label39: {
         label33: {
            try {
               var10000 = this.cEy();
               if (var4 == null) {
                  break label33;
               }

               if (!var10000) {
                  return;
               }
            } catch (MatchException var6) {
               throw cEG(var6);
            }

            try {
               var7 = this;
               if (var4 == null) {
                  break label39;
               }

               var10000 = jg.bBG(this.awZhb.hitPoint(), var1);
            } catch (MatchException var5) {
               throw cEG(var5);
            }
         }

         if (var10000) {
            return;
         }

         var7 = this;
      }

      var7.cEx();
   }
}
