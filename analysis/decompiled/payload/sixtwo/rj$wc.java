package sixtwo;

import java.lang.invoke.MethodHandles;

class rj$wc extends rj {
   final float QoQQx;
   final float DjosD;
   private static final long jtbjT = gb.aYR(3412735544362462244L, 9135200302643141261L, MethodHandles.lookup().lookupClass()).a(29687556110635L);

   rj$wc(float var1, float var2) {
      this.QoQQx = var1;
      this.DjosD = var2;
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
      // 00: getstatic sixtwo/rj$wc.jtbjT J
      // 03: ldc2_w 75822684894169
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/rk.dhz ()[Ljava/lang/String;
      // 0c: aload 0
      // 0d: getfield sixtwo/rj$wc.QoQQx F
      // 10: fstore 8
      // 12: astore 7
      // 14: aload 0
      // 15: getfield sixtwo/rj$wc.DjosD F
      // 18: fstore 9
      // 1a: fload 1
      // 1b: fconst_0
      // 1c: fcmpl
      // 1d: aload 7
      // 1f: ifnonnull 3a
      // 22: ifne 32
      // 25: goto 2c
      // 28: invokestatic sixtwo/rj$wc.dyH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: fload 2
      // 2d: freturn
      // 2e: invokestatic sixtwo/rj$wc.dyH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
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
      // 45: invokestatic sixtwo/rj$wc.dyH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: fload 2
      // 4a: fload 3
      // 4b: fadd
      // 4c: freturn
      // 4d: invokestatic sixtwo/rj$wc.dyH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: fload 9
      // 53: fconst_0
      // 54: fcmpl
      // 55: aload 7
      // 57: ifnonnull 7e
      // 5a: ifne 6b
      // 5d: goto 64
      // 60: invokestatic sixtwo/rj$wc.dyH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
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
      // 7a: invokestatic sixtwo/rj$wc.dyH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
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
      // a1: invokestatic sixtwo/rj$wc.dyH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
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

   private static MatchException dyH(MatchException var0) {
      return var0;
   }
}
