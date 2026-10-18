package sixtwo;

import java.lang.invoke.MethodHandles;

public final class jB {
   private static final ThreadLocal<jC> kvatN = new ThreadLocal<>();
   private static final long pshJL = gb.aYR(-6816820043125824775L, -8577862816213828180L, MethodHandles.lookup().lookupClass()).a(185371376800142L);

   private static MatchException bGS(MatchException var0) {
      return var0;
   }

   public static void bGR(jC param0, Runnable param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jB.pshJL J
      // 03: ldc2_w 31836299509842
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jC.bHc ()I
      // 0b: getstatic sixtwo/jB.kvatN Ljava/lang/ThreadLocal;
      // 0e: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 11: checkcast sixtwo/jC
      // 14: astore 5
      // 16: istore 4
      // 18: getstatic sixtwo/jB.kvatN Ljava/lang/ThreadLocal;
      // 1b: aload 0
      // 1c: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 1f: aload 1
      // 20: invokeinterface java/lang/Runnable.run ()V 1
      // 25: iload 4
      // 27: ifne 50
      // 2a: aload 5
      // 2c: ifnonnull 41
      // 2f: getstatic sixtwo/jB.kvatN Ljava/lang/ThreadLocal;
      // 32: invokevirtual java/lang/ThreadLocal.remove ()V
      // 35: iload 4
      // 37: ifeq 8a
      // 3a: goto 41
      // 3d: invokestatic sixtwo/jB.bGS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: getstatic sixtwo/jB.kvatN Ljava/lang/ThreadLocal;
      // 44: aload 5
      // 46: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 49: goto 50
      // 4c: invokestatic sixtwo/jB.bGS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: goto 8a
      // 53: astore 6
      // 55: iload 4
      // 57: ifne 73
      // 5a: aload 5
      // 5c: ifnonnull 78
      // 5f: goto 66
      // 62: invokestatic sixtwo/jB.bGS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: getstatic sixtwo/jB.kvatN Ljava/lang/ThreadLocal;
      // 69: invokevirtual java/lang/ThreadLocal.remove ()V
      // 6c: goto 73
      // 6f: invokestatic sixtwo/jB.bGS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: iload 4
      // 75: ifeq 87
      // 78: getstatic sixtwo/jB.kvatN Ljava/lang/ThreadLocal;
      // 7b: aload 5
      // 7d: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 80: goto 87
      // 83: invokestatic sixtwo/jB.bGS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 86: athrow
      // 87: aload 6
      // 89: athrow
      // 8a: return
   }

   public static jC bGQ() {
      return kvatN.get();
   }
}
