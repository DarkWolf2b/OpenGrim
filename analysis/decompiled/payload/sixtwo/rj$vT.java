package sixtwo;

import java.lang.invoke.MethodHandles;

public class rj$vT extends rj$vU {
   private static final long cwiPE = gb.aYR(436442722100141440L, -5120196599232278171L, MethodHandles.lookup().lookupClass()).a(246661342715292L);

   public rj$vT(float var1, float var2) {
      super(var1, var2);
   }

   public rj$vT() {
   }

   @Override
   public float dga(float param1, float param2, float param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rj$vT.cwiPE J
      // 03: ldc2_w 31767534863602
      // 06: lxor
      // 07: lstore 5
      // 09: aload 0
      // 0a: invokevirtual sixtwo/rj$vT.dys ()F
      // 0d: fstore 8
      // 0f: invokestatic sixtwo/rk.dhz ()[Ljava/lang/String;
      // 12: aload 0
      // 13: invokevirtual sixtwo/rj$vT.dyt ()F
      // 16: fstore 9
      // 18: astore 7
      // 1a: fload 1
      // 1b: fconst_0
      // 1c: fcmpl
      // 1d: aload 7
      // 1f: ifnonnull 3a
      // 22: ifne 32
      // 25: goto 2c
      // 28: invokestatic sixtwo/rj$vT.dyp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: fload 2
      // 2d: freturn
      // 2e: invokestatic sixtwo/rj$vT.dyp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: fload 1
      // 33: fload 4
      // 35: fdiv
      // 36: dup
      // 37: fstore 1
      // 38: fconst_1
      // 39: fcmpl
      // 3a: aload 7
      // 3c: ifnonnull 55
      // 3f: ifne 51
      // 42: goto 49
      // 45: invokestatic sixtwo/rj$vT.dyp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: fload 2
      // 4a: fload 3
      // 4b: fadd
      // 4c: freturn
      // 4d: invokestatic sixtwo/rj$vT.dyp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: fload 9
      // 53: fconst_0
      // 54: fcmpl
      // 55: aload 7
      // 57: ifnonnull 7e
      // 5a: ifne 6b
      // 5d: goto 64
      // 60: invokestatic sixtwo/rj$vT.dyp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: fload 4
      // 66: ldc 0.3
      // 68: fmul
      // 69: fstore 9
      // 6b: fload 8
      // 6d: fload 3
      // 6e: invokestatic java/lang/Math.abs (F)F
      // 71: aload 7
      // 73: ifnonnull a5
      // 76: fcmpg
      // 77: goto 7e
      // 7a: invokestatic sixtwo/rj$vT.dyp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7d: athrow
      // 7e: ifge 90
      // 81: fload 3
      // 82: fstore 8
      // 84: fload 9
      // 86: ldc 4.0
      // 88: fdiv
      // 89: fstore 10
      // 8b: aload 7
      // 8d: ifnull a8
      // 90: fload 9
      // 92: ldc 6.2831855
      // 94: fdiv
      // 95: fload 3
      // 96: fload 8
      // 98: fdiv
      // 99: f2d
      // 9a: invokestatic java/lang/Math.asin (D)D
      // 9d: d2f
      // 9e: goto a5
      // a1: invokestatic sixtwo/rj$vT.dyp (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a4: athrow
      // a5: fmul
      // a6: fstore 10
      // a8: fload 8
      // aa: fconst_2
      // ab: ldc 10.0
      // ad: fload 1
      // ae: fconst_1
      // af: fsub
      // b0: dup
      // b1: fstore 1
      // b2: fmul
      // b3: invokestatic sixtwo/rj.dgu (FF)F
      // b6: fmul
      // b7: fload 1
      // b8: fload 4
      // ba: fmul
      // bb: fload 10
      // bd: fsub
      // be: ldc 6.2831855
      // c0: fmul
      // c1: fload 9
      // c3: fdiv
      // c4: invokestatic sixtwo/rj.dgr (F)F
      // c7: fmul
      // c8: fneg
      // c9: fload 2
      // ca: fadd
      // cb: freturn
   }

   private static MatchException dyp(MatchException var0) {
      return var0;
   }
}
