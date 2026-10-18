package sixtwo;

import java.lang.invoke.MethodHandles;

class rj$wd extends rj {
   final rj$vQ Djkne;
   private static final long ZWpJx = gb.aYR(-350898152435174116L, 4296055351239158528L, MethodHandles.lookup().lookupClass()).a(130721015290098L);

   rj$wd(rj$vQ var1) {
      this.Djkne = var1;
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
      // 00: getstatic sixtwo/rj$wd.ZWpJx J
      // 03: ldc2_w 109343830366921
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/rk.dhz ()[Ljava/lang/String;
      // 0c: astore 7
      // 0e: fload 4
      // 10: aload 7
      // 12: ifnonnull 3b
      // 15: fconst_0
      // 16: fcmpg
      // 17: ifle 3a
      // 1a: goto 21
      // 1d: invokestatic sixtwo/rj$wd.dyI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: fload 1
      // 22: fconst_0
      // 23: fcmpg
      // 24: aload 7
      // 26: ifnonnull 4c
      // 29: goto 30
      // 2c: invokestatic sixtwo/rj$wd.dyI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: ifgt 3c
      // 33: goto 3a
      // 36: invokestatic sixtwo/rj$wd.dyI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: fload 2
      // 3b: freturn
      // 3c: fload 1
      // 3d: fload 4
      // 3f: aload 7
      // 41: ifnonnull 67
      // 44: fcmpl
      // 45: goto 4c
      // 48: invokestatic sixtwo/rj$wd.dyI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: iflt 57
      // 4f: fload 2
      // 50: fload 3
      // 51: fadd
      // 52: freturn
      // 53: invokestatic sixtwo/rj$wd.dyI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: fload 2
      // 58: fload 3
      // 59: aload 0
      // 5a: getfield sixtwo/rj$wd.Djkne Lsixtwo/rj$vQ;
      // 5d: fload 1
      // 5e: fload 4
      // 60: fdiv
      // 61: invokeinterface sixtwo/rj$vQ.calculate (F)F 2
      // 66: fmul
      // 67: fadd
      // 68: freturn
   }

   private static MatchException dyI(MatchException var0) {
      return var0;
   }
}
