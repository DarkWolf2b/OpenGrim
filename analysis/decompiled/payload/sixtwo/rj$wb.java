package sixtwo;

import java.lang.invoke.MethodHandles;

class rj$wb extends rj {
   final float dWZFo;
   final float KEAFq;
   private static final long qKCxg = gb.aYR(7390955750804238243L, -3633050884953615933L, MethodHandles.lookup().lookupClass()).a(22569977106844L);

   rj$wb(float var1, float var2) {
      this.dWZFo = var1;
      this.KEAFq = var2;
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
      // 00: getstatic sixtwo/rj$wb.qKCxg J
      // 03: ldc2_w 127594219165652
      // 06: lxor
      // 07: lstore 5
      // 09: aload 0
      // 0a: getfield sixtwo/rj$wb.dWZFo F
      // 0d: fstore 8
      // 0f: invokestatic sixtwo/rk.dhz ()[Ljava/lang/String;
      // 12: aload 0
      // 13: getfield sixtwo/rj$wb.KEAFq F
      // 16: fstore 9
      // 18: astore 7
      // 1a: fload 1
      // 1b: fconst_0
      // 1c: fcmpl
      // 1d: aload 7
      // 1f: ifnonnull 3a
      // 22: ifne 32
      // 25: goto 2c
      // 28: invokestatic sixtwo/rj$wb.dyG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: fload 2
      // 2d: freturn
      // 2e: invokestatic sixtwo/rj$wb.dyG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
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
      // 45: invokestatic sixtwo/rj$wb.dyG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: fload 2
      // 4a: fload 3
      // 4b: fadd
      // 4c: freturn
      // 4d: invokestatic sixtwo/rj$wb.dyG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: fload 9
      // 53: fconst_0
      // 54: fcmpl
      // 55: aload 7
      // 57: ifnonnull 7e
      // 5a: ifne 6b
      // 5d: goto 64
      // 60: invokestatic sixtwo/rj$wb.dyG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
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
      // 7a: invokestatic sixtwo/rj$wb.dyG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
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
      // a1: invokestatic sixtwo/rj$wb.dyG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a4: athrow
      // a5: fmul
      // a6: fstore 10
      // a8: fload 8
      // aa: fconst_2
      // ab: ldc -10.0
      // ad: fload 1
      // ae: fmul
      // af: invokestatic sixtwo/rj.dgu (FF)F
      // b2: fmul
      // b3: fload 1
      // b4: fload 4
      // b6: fmul
      // b7: fload 10
      // b9: fsub
      // ba: ldc 6.2831855
      // bc: fmul
      // bd: fload 9
      // bf: fdiv
      // c0: invokestatic sixtwo/rj.dgr (F)F
      // c3: fmul
      // c4: fload 3
      // c5: fadd
      // c6: fload 2
      // c7: fadd
      // c8: freturn
   }

   private static MatchException dyG(MatchException var0) {
      return var0;
   }
}
