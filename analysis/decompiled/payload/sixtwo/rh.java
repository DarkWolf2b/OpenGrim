package sixtwo;

import java.lang.invoke.MethodHandles;

public class rh {
   private float EiSey;
   private float Jspxf;
   private rj KQBBC = rj.Xmkbr;
   private final rk gyBUb = new rk(1);
   private static int leSyR;
   private static final long HwknU = gb.aYR(-3092870795174280153L, 319375823086773238L, MethodHandles.lookup().lookupClass()).a(103336697470254L);

   static {
      if (dfQ() != 0) {
         dfP(97);
      }
   }

   public static int dfQ() {
      return leSyR;
   }

   public static void dfP(int var0) {
      leSyR = var0;
   }

   public float dfF(float var1, int var2) {
      var2 = Math.max(1, var2);
      this.Jspxf = var1;
      this.gyBUb.dhq(var2);
      this.gyBUb.dhs(this.KQBBC);
      this.EiSey = this.gyBUb.dhd(this.Jspxf);
      return this.EiSey;
   }

   public rh dfK(rj var1) {
      this.KQBBC = var1;
      return this;
   }

   public float dfH() {
      this.EiSey = this.gyBUb.dhd(this.Jspxf);
      return this.EiSey;
   }

   public float dfL() {
      return this.EiSey;
   }

   public rj dfN() {
      return this.KQBBC;
   }

   public static int dfR() {
      int var0 = dfQ();

      try {
         return var0 == 0 ? 57 : 0;
      } catch (MatchException var1) {
         throw dfS(var1);
      }
   }

   public rh dfJ(float var1) {
      this.Jspxf = var1;
      return this;
   }

   private static MatchException dfS(MatchException var0) {
      return var0;
   }

   public rh dfI(float var1) {
      this.EiSey = var1;
      return this;
   }

   public float dfM() {
      return this.Jspxf;
   }

   public boolean dfG() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rh.HwknU J
      // 03: ldc2_w 63870581929739
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rh.dfQ ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/rh.gyBUb Lsixtwo/rk;
      // 10: invokevirtual sixtwo/rk.dho ()Z
      // 13: iload 3
      // 14: ifne 31
      // 17: ifeq 43
      // 1a: goto 21
      // 1d: invokestatic sixtwo/rh.dfS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: getfield sixtwo/rh.EiSey F
      // 25: aload 0
      // 26: getfield sixtwo/rh.Jspxf F
      // 29: fcmpl
      // 2a: goto 31
      // 2d: invokestatic sixtwo/rh.dfS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: iload 3
      // 32: ifne 40
      // 35: ifne 43
      // 38: goto 3f
      // 3b: invokestatic sixtwo/rh.dfS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: bipush 1
      // 40: goto 44
      // 43: bipush 0
      // 44: ireturn
   }

   public rk dfO() {
      return this.gyBUb;
   }
}
