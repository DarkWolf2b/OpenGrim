package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_4588;
import org.joml.Matrix4f;

public final class ll {
   private final int IAjQu;
   private final float XqVFz;
   private final float gklxJ;
   private final float rFTRR;
   private final float QqAgq;
   private final float Zkfrx;
   private final float iOwcU;
   private final float CcUvc;
   private final float DiaaM;
   private static final long swvZf = gb.aYR(-5279788945856983259L, 1293598650621952571L, MethodHandles.lookup().lookupClass()).a(115458556905361L);

   public ll(li$uv param1, float param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ll.swvZf J
      // 03: ldc2_w 89207116480901
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 0c: aload 0
      // 0d: invokespecial java/lang/Object.<init> ()V
      // 10: aload 0
      // 11: aload 1
      // 12: invokevirtual sixtwo/li$uv.duS ()I
      // 15: putfield sixtwo/ll.IAjQu I
      // 18: astore 6
      // 1a: aload 0
      // 1b: aload 1
      // 1c: invokevirtual sixtwo/li$uv.duT ()F
      // 1f: putfield sixtwo/ll.Zkfrx F
      // 22: aload 1
      // 23: invokevirtual sixtwo/li$uv.duV ()Lsixtwo/li$uw;
      // 26: astore 7
      // 28: aload 6
      // 2a: ifnull 70
      // 2d: aload 7
      // 2f: ifnull 75
      // 32: goto 39
      // 35: invokestatic sixtwo/ll.bZv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: aload 7
      // 3c: invokevirtual sixtwo/li$uw.dvb ()F
      // 3f: fload 2
      // 40: fdiv
      // 41: putfield sixtwo/ll.XqVFz F
      // 44: aload 0
      // 45: aload 7
      // 47: invokevirtual sixtwo/li$uw.dvd ()F
      // 4a: fload 2
      // 4b: fdiv
      // 4c: putfield sixtwo/ll.gklxJ F
      // 4f: aload 0
      // 50: fconst_1
      // 51: aload 7
      // 53: invokevirtual sixtwo/li$uw.dvc ()F
      // 56: fload 3
      // 57: fdiv
      // 58: fsub
      // 59: putfield sixtwo/ll.rFTRR F
      // 5c: aload 0
      // 5d: fconst_1
      // 5e: aload 7
      // 60: invokevirtual sixtwo/li$uw.dve ()F
      // 63: fload 3
      // 64: fdiv
      // 65: fsub
      // 66: putfield sixtwo/ll.QqAgq F
      // 69: goto 70
      // 6c: invokestatic sixtwo/ll.bZv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6f: athrow
      // 70: aload 6
      // 72: ifnonnull 90
      // 75: aload 0
      // 76: aload 0
      // 77: aload 0
      // 78: aload 0
      // 79: fconst_0
      // 7a: dup_x1
      // 7b: putfield sixtwo/ll.QqAgq F
      // 7e: dup_x1
      // 7f: putfield sixtwo/ll.rFTRR F
      // 82: dup_x1
      // 83: putfield sixtwo/ll.gklxJ F
      // 86: putfield sixtwo/ll.XqVFz F
      // 89: goto 90
      // 8c: invokestatic sixtwo/ll.bZv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: aload 1
      // 91: invokevirtual sixtwo/li$uv.duU ()Lsixtwo/li$uw;
      // 94: astore 8
      // 96: aload 6
      // 98: ifnull d5
      // 9b: aload 8
      // 9d: ifnull da
      // a0: goto a7
      // a3: invokestatic sixtwo/ll.bZv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a6: athrow
      // a7: aload 0
      // a8: aload 8
      // aa: invokevirtual sixtwo/li$uw.dvd ()F
      // ad: aload 8
      // af: invokevirtual sixtwo/li$uw.dvb ()F
      // b2: fsub
      // b3: putfield sixtwo/ll.CcUvc F
      // b6: aload 0
      // b7: aload 8
      // b9: invokevirtual sixtwo/li$uw.dvc ()F
      // bc: aload 8
      // be: invokevirtual sixtwo/li$uw.dve ()F
      // c1: fsub
      // c2: putfield sixtwo/ll.DiaaM F
      // c5: aload 0
      // c6: aload 8
      // c8: invokevirtual sixtwo/li$uw.dvc ()F
      // cb: putfield sixtwo/ll.iOwcU F
      // ce: goto d5
      // d1: invokestatic sixtwo/ll.bZv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d4: athrow
      // d5: aload 6
      // d7: ifnonnull f0
      // da: aload 0
      // db: aload 0
      // dc: aload 0
      // dd: fconst_0
      // de: dup_x1
      // df: putfield sixtwo/ll.iOwcU F
      // e2: dup_x1
      // e3: putfield sixtwo/ll.DiaaM F
      // e6: putfield sixtwo/ll.CcUvc F
      // e9: goto f0
      // ec: invokestatic sixtwo/ll.bZv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ef: athrow
      // f0: return
   }

   public float bZo() {
      return this.gklxJ;
   }

   public float bZk(Matrix4f var1, class_4588 var2, float var3, float var4, float var5, float var6, int var7) {
      long var8 = swvZf ^ 42597141965752L;
      String var10000 = lj.bYV();
      float var11 = this.CcUvc * var3;
      float var12 = this.DiaaM * var3;
      float var13 = var5 - this.iOwcU * var3;
      var2.method_22918(var1, var4, var13, var6).method_22913(this.XqVFz, this.rFTRR).method_39415(var7);
      String var10 = var10000;

      try {
         var2.method_22918(var1, var4, var13 + var12, var6).method_22913(this.XqVFz, this.QqAgq).method_39415(var7);
         var2.method_22918(var1, var4 + var11, var13 + var12, var6).method_22913(this.gklxJ, this.QqAgq).method_39415(var7);
         var2.method_22918(var1, var4 + var11, var13, var6).method_22913(this.gklxJ, this.rFTRR).method_39415(var7);
         float var15 = this.Zkfrx * var3;
         if (var10 == null) {
            iS.bwK("FbUjIc");
         }

         return var15;
      } catch (MatchException var14) {
         throw bZv(var14);
      }
   }

   private static MatchException bZv(MatchException var0) {
      return var0;
   }

   public float bZt() {
      return this.CcUvc;
   }

   public float bZl(float var1) {
      return this.Zkfrx * var1;
   }

   public int bZm() {
      return this.IAjQu;
   }

   public float bZn() {
      return this.XqVFz;
   }

   public float bZr() {
      return this.Zkfrx;
   }

   public float bZs() {
      return this.iOwcU;
   }

   public float bZu() {
      return this.DiaaM;
   }

   public float bZp() {
      return this.rFTRR;
   }

   public float bZq() {
      return this.QqAgq;
   }
}
