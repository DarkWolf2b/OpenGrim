package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayDeque;
import java.util.Deque;
import org.joml.Vector4f;

public final class jF {
   private static final float[] jJgKH = new float[]{1.0F, 1.0F, 1.0F, 1.0F};
   private static final Deque<float[]> WjVUd = new ArrayDeque<>();
   private static boolean gfICi;
   private static final long uKzlv = gb.aYR(-5824617674824207052L, -5855478531357891036L, MethodHandles.lookup().lookupClass()).a(25331677279744L);

   static {
      bHE(false);
   }

   public static float bHy() {
      return jJgKH[3];
   }

   public static Vector4f bHx() {
      return new Vector4f(jJgKH[0], jJgKH[1], jJgKH[2], jJgKH[3]);
   }

   public static void bHz(float var0, float var1, float var2, float var3) {
      jJgKH[0] = var0;
      jJgKH[1] = var1;
      jJgKH[2] = var2;
      jJgKH[3] = var3;
   }

   public static float[] bHw() {
      return jJgKH;
   }

   public static boolean bHG() {
      boolean var0 = bHF();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw bHH(var1);
      }
   }

   public static boolean bHF() {
      return gfICi;
   }

   public static void bHB(float var0) {
      bHA(1.0F, 1.0F, 1.0F, var0);
   }

   public static void bHA(float var0, float var1, float var2, float var3) {
      long var4 = uKzlv ^ 49750989485698L;
      boolean var10000 = bHG();
      WjVUd.push(new float[]{jJgKH[0], jJgKH[1], jJgKH[2], jJgKH[3]});
      boolean var6 = var10000;

      try {
         bHz(var0, var1, var2, var3);
         if (!var6) {
            iS.bwK("CVusTc");
         }
      } catch (MatchException var7) {
         throw bHH(var7);
      }
   }

   public static void bHC() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jF.uKzlv J
      // 03: ldc2_w 138077199412369
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jF.bHF ()Z
      // 0b: istore 2
      // 0c: getstatic sixtwo/jF.WjVUd Ljava/util/Deque;
      // 0f: iload 2
      // 10: ifne 31
      // 13: invokeinterface java/util/Deque.isEmpty ()Z 1
      // 18: ifne 59
      // 1b: goto 22
      // 1e: invokestatic sixtwo/jF.bHH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: getstatic sixtwo/jF.WjVUd Ljava/util/Deque;
      // 25: invokeinterface java/util/Deque.pop ()Ljava/lang/Object; 1
      // 2a: goto 31
      // 2d: invokestatic sixtwo/jF.bHH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: checkcast [F
      // 34: astore 3
      // 35: getstatic sixtwo/jF.jJgKH [F
      // 38: bipush 0
      // 39: aload 3
      // 3a: bipush 0
      // 3b: faload
      // 3c: fastore
      // 3d: getstatic sixtwo/jF.jJgKH [F
      // 40: bipush 1
      // 41: aload 3
      // 42: bipush 1
      // 43: faload
      // 44: fastore
      // 45: getstatic sixtwo/jF.jJgKH [F
      // 48: bipush 2
      // 49: aload 3
      // 4a: bipush 2
      // 4b: faload
      // 4c: fastore
      // 4d: getstatic sixtwo/jF.jJgKH [F
      // 50: bipush 3
      // 51: aload 3
      // 52: bipush 3
      // 53: faload
      // 54: fastore
      // 55: iload 2
      // 56: ifeq 78
      // 59: getstatic sixtwo/jF.jJgKH [F
      // 5c: bipush 0
      // 5d: fconst_1
      // 5e: fastore
      // 5f: getstatic sixtwo/jF.jJgKH [F
      // 62: bipush 1
      // 63: fconst_1
      // 64: fastore
      // 65: getstatic sixtwo/jF.jJgKH [F
      // 68: bipush 2
      // 69: fconst_1
      // 6a: fastore
      // 6b: getstatic sixtwo/jF.jJgKH [F
      // 6e: bipush 3
      // 6f: fconst_1
      // 70: fastore
      // 71: goto 78
      // 74: invokestatic sixtwo/jF.bHH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 77: athrow
      // 78: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 7b: ifnonnull 95
      // 7e: iload 2
      // 7f: ifeq 91
      // 82: goto 89
      // 85: invokestatic sixtwo/jF.bHH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 88: athrow
      // 89: bipush 0
      // 8a: goto 92
      // 8d: invokestatic sixtwo/jF.bHH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: bipush 1
      // 92: invokestatic sixtwo/jF.bHE (Z)V
      // 95: return
   }

   private static MatchException bHH(MatchException var0) {
      return var0;
   }

   public static void bHE(boolean var0) {
      gfICi = var0;
   }

   public static void bHD() {
      WjVUd.clear();
      jJgKH[0] = 1.0F;
      jJgKH[1] = 1.0F;
      jJgKH[2] = 1.0F;
      jJgKH[3] = 1.0F;
   }
}
