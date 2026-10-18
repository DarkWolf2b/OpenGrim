package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_241;

final class di$sA {
   private float UcFvW = Float.POSITIVE_INFINITY;
   private float ARrvJ = Float.POSITIVE_INFINITY;
   private float MRZOj = Float.NEGATIVE_INFINITY;
   private float VRpNr = Float.NEGATIVE_INFINITY;
   private int TomLU;
   private static final long osDYz = gb.aYR(4529541263180445756L, 6623467899913022852L, MethodHandles.lookup().lookupClass()).a(149834542413418L);

   private di$sA() {
   }

   private static MatchException doE(MatchException var0) {
      return var0;
   }

   private lc doD() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/di$sA.osDYz J
      // 03: ldc2_w 30058723024691
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 25
      // 11: getfield sixtwo/di$sA.TomLU I
      // 14: ifne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/di$sA.doE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aconst_null
      // 1f: areturn
      // 20: invokestatic sixtwo/di$sA.doE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: getfield sixtwo/di$sA.MRZOj F
      // 28: aload 0
      // 29: getfield sixtwo/di$sA.UcFvW F
      // 2c: fsub
      // 2d: fstore 4
      // 2f: aload 0
      // 30: getfield sixtwo/di$sA.VRpNr F
      // 33: aload 0
      // 34: getfield sixtwo/di$sA.ARrvJ F
      // 37: fsub
      // 38: fstore 5
      // 3a: fload 4
      // 3c: fconst_1
      // 3d: fcmpg
      // 3e: aload 3
      // 3f: ifnonnull 57
      // 42: ifle 5a
      // 45: goto 4c
      // 48: invokestatic sixtwo/di$sA.doE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: fload 5
      // 4e: fconst_1
      // 4f: fcmpg
      // 50: goto 57
      // 53: invokestatic sixtwo/di$sA.doE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: ifgt 60
      // 5a: aconst_null
      // 5b: areturn
      // 5c: invokestatic sixtwo/di$sA.doE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f: athrow
      // 60: new sixtwo/lc
      // 63: dup
      // 64: aload 0
      // 65: getfield sixtwo/di$sA.UcFvW F
      // 68: aload 0
      // 69: getfield sixtwo/di$sA.ARrvJ F
      // 6c: fload 4
      // 6e: fload 5
      // 70: invokespecial sixtwo/lc.<init> (FFFF)V
      // 73: areturn
   }

   private void doC(class_241 var1) {
      this.TomLU++;
      this.UcFvW = Math.min(this.UcFvW, var1.field_1343);
      this.ARrvJ = Math.min(this.ARrvJ, var1.field_1342);
      this.MRZOj = Math.max(this.MRZOj, var1.field_1343);
      this.VRpNr = Math.max(this.VRpNr, var1.field_1342);
   }
}
