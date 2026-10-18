package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Stack;
import org.joml.Matrix3x2fStack;

public class jH {
   private static final Stack<Matrix3x2fStack> uQzaj = new Stack<>();
   private static String[] qPLFl;
   private static final long cgTUn = gb.aYR(7714846715772269806L, -3538060880037723863L, MethodHandles.lookup().lookupClass()).a(133043786062544L);

   public static String[] bIh() {
      return qPLFl;
   }

   public static void bIg(String[] var0) {
      qPLFl = var0;
   }

   static {
      bIg(null);
   }

   public static void bIf() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jH.cgTUn J
      // 03: ldc2_w 55147162857368
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jH.bIh ()[Ljava/lang/String;
      // 0b: astore 2
      // 0c: getstatic sixtwo/jH.uQzaj Ljava/util/Stack;
      // 0f: aload 2
      // 10: ifnonnull 2b
      // 13: invokevirtual java/util/Stack.isEmpty ()Z
      // 16: ifeq 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/jH.bIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/jH.bIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: getstatic sixtwo/jH.uQzaj Ljava/util/Stack;
      // 28: invokevirtual java/util/Stack.pop ()Ljava/lang/Object;
      // 2b: checkcast org/joml/Matrix3x2fStack
      // 2e: astore 3
      // 2f: aload 3
      // 30: invokevirtual org/joml/Matrix3x2fStack.popMatrix ()Lorg/joml/Matrix3x2fStack;
      // 33: pop
      // 34: return
   }

   public static void bId(lC var0, float var1, float var2, float var3) {
      long var4 = cgTUn ^ 15611571575638L;
      String[] var6 = bIh();

      lC var10000;
      label22: {
         try {
            var10000 = var0;
            if (var6 != null) {
               break label22;
            }

            if (var0 == null) {
               return;
            }
         } catch (MatchException var8) {
            throw bIi(var8);
         }

         var10000 = var0;
      }

      Matrix3x2fStack var7 = var10000.cfe().method_51448();
      uQzaj.push(var7);
      var7.pushMatrix();
      var7.translate(var1, var2);
      var7.scale(var3, var3);
      var7.translate(-var1, -var2);
   }

   public static void bIe(Matrix3x2fStack var0, float var1, float var2, float var3) {
      long var4 = cgTUn ^ 9631317014568L;
      String[] var6 = bIh();

      try {
         if (var6 != null) {
            return;
         }

         if (var0 == null) {
            return;
         }
      } catch (MatchException var7) {
         throw bIi(var7);
      }

      uQzaj.push(var0);
      var0.pushMatrix();
      var0.translate(var1, var2);
      var0.scale(var3, var3);
      var0.translate(-var1, -var2);
   }

   private static MatchException bIi(MatchException var0) {
      return var0;
   }
}
