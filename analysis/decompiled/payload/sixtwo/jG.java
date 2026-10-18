package sixtwo;

import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.MethodHandles;
import java.util.ArrayDeque;
import java.util.Deque;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;

public final class jG {
   private static final Deque<lc> tyoKy = new ArrayDeque<>();
   private static final long AJNGy = gb.aYR(-1063796139203356576L, -8906039374498815337L, MethodHandles.lookup().lookupClass()).a(172161209956373L);

   public static boolean bHY(az var0) {
      return bHX(var0.tr(), var0.ts(), var0.kN(), var0.dn());
   }

   public static boolean bHZ(lC var0) {
      return bIa(var0.cff(), var0.cfg());
   }

   public static void bHP() {
      tyoKy.clear();
      bHT();
   }

   public static void bHS(RenderPass param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jG.AJNGy J
      // 03: ldc2_w 138378174258595
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jF.bHG ()Z
      // 0b: invokestatic sixtwo/jG.bHV ()Lsixtwo/jG$tW;
      // 0e: astore 4
      // 10: istore 3
      // 11: iload 3
      // 12: ifeq 46
      // 15: aload 4
      // 17: ifnonnull 2c
      // 1a: goto 21
      // 1d: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: invokeinterface com/mojang/blaze3d/systems/RenderPass.disableScissor ()V 1
      // 27: return
      // 28: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: aload 0
      // 2d: aload 4
      // 2f: invokevirtual sixtwo/jG$tW.x ()I
      // 32: aload 4
      // 34: invokevirtual sixtwo/jG$tW.y ()I
      // 37: aload 4
      // 39: invokevirtual sixtwo/jG$tW.width ()I
      // 3c: aload 4
      // 3e: invokevirtual sixtwo/jG$tW.height ()I
      // 41: invokeinterface com/mojang/blaze3d/systems/RenderPass.enableScissor (IIII)V 5
      // 46: return
   }

   public static void bHI(lC var0, lc var1) {
      lc var2 = new lc(var1.bXF(), var1.bXG(), var1.bXH(), var1.bXI()).bXB(var0.cfd());
      bHQ(var2);
   }

   public static void bHN() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jG.AJNGy J
      // 03: ldc2_w 31300209943209
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jF.bHG ()Z
      // 0b: istore 2
      // 0c: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 0f: invokeinterface java/util/Deque.isEmpty ()Z 1
      // 14: iload 2
      // 15: ifeq 45
      // 18: ifne 32
      // 1b: goto 22
      // 1e: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 25: invokeinterface java/util/Deque.pop ()Ljava/lang/Object; 1
      // 2a: pop
      // 2b: goto 32
      // 2e: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 35: iload 2
      // 36: ifeq 57
      // 39: invokeinterface java/util/Deque.isEmpty ()Z 1
      // 3e: goto 45
      // 41: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: ifne 61
      // 48: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 4b: invokeinterface java/util/Deque.peek ()Ljava/lang/Object; 1
      // 50: goto 57
      // 53: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: checkcast sixtwo/lc
      // 5a: invokestatic sixtwo/jG.bHR (Lsixtwo/lc;)V
      // 5d: iload 2
      // 5e: ifne 6b
      // 61: invokestatic sixtwo/jG.bHT ()V
      // 64: goto 6b
      // 67: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a: athrow
      // 6b: return
   }

   public static boolean bHX(float param0, float param1, float param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jG.AJNGy J
      // 03: ldc2_w 31416980369510
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/jF.bHF ()Z
      // 0c: istore 6
      // 0e: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 11: invokeinterface java/util/Deque.isEmpty ()Z 1
      // 16: iload 6
      // 18: ifne 26
      // 1b: ifeq 27
      // 1e: goto 25
      // 21: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: bipush 1
      // 26: ireturn
      // 27: fload 0
      // 28: fload 2
      // 29: fadd
      // 2a: fstore 7
      // 2c: fload 1
      // 2d: fload 3
      // 2e: fadd
      // 2f: fstore 8
      // 31: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 34: invokeinterface java/util/Deque.peek ()Ljava/lang/Object; 1
      // 39: checkcast sixtwo/lc
      // 3c: astore 9
      // 3e: fload 7
      // 40: aload 9
      // 42: invokevirtual sixtwo/lc.bXF ()F
      // 45: fcmpl
      // 46: iload 6
      // 48: ifne 63
      // 4b: ifle b1
      // 4e: goto 55
      // 51: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: fload 0
      // 56: aload 9
      // 58: invokevirtual sixtwo/lc.bXz ()F
      // 5b: fcmpg
      // 5c: goto 63
      // 5f: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: iload 6
      // 65: ifne 81
      // 68: ifge b1
      // 6b: goto 72
      // 6e: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: fload 8
      // 74: aload 9
      // 76: invokevirtual sixtwo/lc.bXG ()F
      // 79: fcmpl
      // 7a: goto 81
      // 7d: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: iload 6
      // 83: ifne 9e
      // 86: ifle b1
      // 89: goto 90
      // 8c: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: fload 1
      // 91: aload 9
      // 93: invokevirtual sixtwo/lc.bXA ()F
      // 96: fcmpg
      // 97: goto 9e
      // 9a: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9d: athrow
      // 9e: iload 6
      // a0: ifne ae
      // a3: ifge b1
      // a6: goto ad
      // a9: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ac: athrow
      // ad: bipush 1
      // ae: goto b2
      // b1: bipush 0
      // b2: ireturn
   }

   public static void bHK(lC var0, float var1, float var2, float var3, float var4) {
      lc var5 = new lc(var1, var2, var3, var4).bXB(var0.cfd());
      bHQ(var5);
   }

   private static void bHQ(lc var0) {
      long var1 = AJNGy ^ 429446865583L;
      boolean var3 = jF.bHG();

      Deque var10000;
      label21: {
         label20: {
            try {
               var10000 = tyoKy;
               if (!var3) {
                  break label21;
               }

               if (tyoKy.isEmpty()) {
                  break label20;
               }
            } catch (MatchException var4) {
               throw bIc(var4);
            }

            var0 = bHW(tyoKy.peek(), var0);
         }

         var10000 = tyoKy;
      }

      var10000.push(var0);
      bHR(var0);
   }

   public static void bHJ(float var0, float var1, float var2, float var3) {
      lc var4 = new lc(var0, var1, var2, var3);
      bHQ(var4);
   }

   public static boolean bIa(double param0, double param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jG.AJNGy J
      // 03: ldc2_w 128967586454877
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/jF.bHG ()Z
      // 0c: istore 6
      // 0e: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 11: iload 6
      // 13: ifeq 33
      // 16: invokeinterface java/util/Deque.isEmpty ()Z 1
      // 1b: ifeq 2b
      // 1e: goto 25
      // 21: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: bipush 1
      // 26: ireturn
      // 27: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 2e: invokeinterface java/util/Deque.peek ()Ljava/lang/Object; 1
      // 33: checkcast sixtwo/lc
      // 36: astore 7
      // 38: aload 7
      // 3a: dload 0
      // 3b: dload 2
      // 3c: invokevirtual sixtwo/lc.bXD (DD)Z
      // 3f: ireturn
   }

   public static void bHL(Matrix3x2fStack var0, float var1, float var2, float var3, float var4) {
      lc var5 = new lc(var1, var2, var3, var4).bXC(var0);
      bHQ(var5);
   }

   public static void bHM(Matrix3x2fc var0, float var1, float var2, float var3, float var4) {
      lc var5 = new lc(var1, var2, var3, var4).bXC(var0);
      bHQ(var5);
   }

   public static int bIb() {
      return tyoKy.size();
   }

   private static void bHT() {
      tyoKy.clear();
      RenderSystem.disableScissorForRenderTypeDraws();
      lT.ciQ().disableScissor();
   }

   public static boolean bHO() {
      long var0 = AJNGy ^ 127936294218945L;
      boolean var2 = jF.bHG();

      try {
         boolean var10000 = tyoKy.isEmpty();
         if (!var2) {
            return var10000;
         }

         if (!var10000) {
            return true;
         }
      } catch (MatchException var3) {
         throw bIc(var3);
      }

      return false;
   }

   private static MatchException bIc(MatchException var0) {
      return var0;
   }

   private static lc bHW(lc var0, lc var1) {
      float var2 = Math.max(var0.bXF(), var1.bXF());
      float var3 = Math.max(var0.bXG(), var1.bXG());
      float var4 = Math.min(var0.bXz(), var1.bXz());
      float var5 = Math.min(var0.bXA(), var1.bXA());
      float var6 = Math.max(0.0F, var4 - var2);
      float var7 = Math.max(0.0F, var5 - var3);
      return new lc(var2, var3, var6, var7);
   }

   private static jG$tW bHV() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jG.AJNGy J
      // 03: ldc2_w 120079624301105
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jF.bHG ()Z
      // 0b: istore 2
      // 0c: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 0f: iload 2
      // 10: ifeq 30
      // 13: invokeinterface java/util/Deque.isEmpty ()Z 1
      // 18: ifeq 28
      // 1b: goto 22
      // 1e: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aconst_null
      // 23: areturn
      // 24: invokestatic sixtwo/jG.bIc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: getstatic sixtwo/jG.tyoKy Ljava/util/Deque;
      // 2b: invokeinterface java/util/Deque.peek ()Ljava/lang/Object; 1
      // 30: checkcast sixtwo/lc
      // 33: invokestatic sixtwo/jG.bHU (Lsixtwo/lc;)Lsixtwo/jG$tW;
      // 36: areturn
   }

   private static jG$tW bHU(lc var0) {
      int var1 = rD.dlmvG.method_22683().method_4506();
      double var2 = rm.dio().doubleValue();
      float var4 = var0.bXF() * (float)var2;
      float var5 = var0.bXG() * (float)var2;
      float var6 = (var0.bXF() + var0.bXH()) * (float)var2;
      float var7 = (var0.bXG() + var0.bXI()) * (float)var2;
      int var8 = (int)Math.floor(var4);
      int var9 = (int)Math.floor(var1 - Math.ceil(var7) + 0.5);
      int var10 = Math.max(0, (int)Math.ceil(var6) - var8);
      int var11 = Math.max(0, (int)Math.ceil(var7) - (int)Math.floor(var5) - 1);
      return new jG$tW(var8, var9, var10, var11);
   }

   private static void bHR(lc var0) {
      jG$tW var1 = bHU(var0);
      RenderSystem.enableScissorForRenderTypeDraws(var1.x(), var1.y(), var1.width(), var1.height());
   }
}
