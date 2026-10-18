package sixtwo;

import java.lang.invoke.MethodHandles;

public class js {
   private static final ThreadLocal<Integer> TOuAs = ThreadLocal.withInitial(() -> 0);
   private static String[] lfwai;
   private static final long JIoBD = gb.aYR(255756148750922649L, -1897272244287991293L, MethodHandles.lookup().lookupClass()).a(50545706369725L);

   static {
      bFE(null);
   }

   public static void bFB() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/js.JIoBD J
      // 03: ldc2_w 109489683962336
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/js.bFF ()[Ljava/lang/String;
      // 0b: getstatic sixtwo/js.TOuAs Ljava/lang/ThreadLocal;
      // 0e: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 11: checkcast java/lang/Integer
      // 14: invokevirtual java/lang/Integer.intValue ()I
      // 17: bipush 1
      // 18: isub
      // 19: istore 3
      // 1a: astore 2
      // 1b: aload 2
      // 1c: ifnonnull 37
      // 1f: iload 3
      // 20: ifgt 3b
      // 23: goto 2a
      // 26: invokestatic sixtwo/js.bFG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: getstatic sixtwo/js.TOuAs Ljava/lang/ThreadLocal;
      // 2d: invokevirtual java/lang/ThreadLocal.remove ()V
      // 30: goto 37
      // 33: invokestatic sixtwo/js.bFG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 2
      // 38: ifnull 4c
      // 3b: getstatic sixtwo/js.TOuAs Ljava/lang/ThreadLocal;
      // 3e: iload 3
      // 3f: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 42: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 45: goto 4c
      // 48: invokestatic sixtwo/js.bFG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: return
   }

   public static void bFA() {
      TOuAs.set(TOuAs.get() + 1);
   }

   private static MatchException bFG(MatchException var0) {
      return var0;
   }

   public static void bFE(String[] var0) {
      lfwai = var0;
   }

   public static String[] bFF() {
      return lfwai;
   }

   public static boolean bFC() {
      long var0 = JIoBD ^ 72813293115327L;
      String[] var2 = bFF();

      try {
         int var10000 = TOuAs.get();
         if (var2 != null) {
            return (boolean)var10000;
         }

         if (var10000 > 0) {
            return (boolean)1;
         }
      } catch (MatchException var3) {
         throw bFG(var3);
      }

      return (boolean)0;
   }
}
