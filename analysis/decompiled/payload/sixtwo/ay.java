package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayDeque;
import java.util.Deque;

public final class ay {
   public static final Object eGcjO = new Object();
   private static final Deque<Object> SeYIH = new ArrayDeque<>();
   private static Object fuxGD;
   private static boolean ZmJyP;
   private static final long VfsuD = gb.aYR(-9049166262062814204L, -529335740970060287L, MethodHandles.lookup().lookupClass()).a(5773309340471L);

   public static void sp() {
      fuxGD = null;
      ZmJyP = false;
      SeYIH.clear();
   }

   public static Object ss() {
      long var0 = VfsuD ^ 71769471982382L;
      String var10000 = az.tE();
      Object var3 = SeYIH.peek();
      String var2 = var10000;

      label45: {
         try {
            if (var2 == null) {
               return var3;
            }

            if (var3 == null) {
               break label45;
            }
         } catch (MatchException var5) {
            throw st(var5);
         }

         return var3;
      }

      try {
         if (ZmJyP) {
            return fuxGD;
         }
      } catch (MatchException var4) {
         throw st(var4);
      }

      return eGcjO;
   }

   private static MatchException st(MatchException var0) {
      return var0;
   }

   public static boolean sr() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ay.VfsuD J
      // 03: ldc2_w 97031863697524
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 2
      // 0c: getstatic sixtwo/ay.ZmJyP Z
      // 0f: aload 2
      // 10: ifnull 1e
      // 13: ifne 1f
      // 16: goto 1d
      // 19: invokestatic sixtwo/ay.st (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: bipush 1
      // 1e: ireturn
      // 1f: getstatic sixtwo/ay.SeYIH Ljava/util/Deque;
      // 22: invokeinterface java/util/Deque.peek ()Ljava/lang/Object; 1
      // 27: astore 3
      // 28: aload 3
      // 29: aload 2
      // 2a: ifnull 52
      // 2d: ifnonnull 51
      // 30: goto 37
      // 33: invokestatic sixtwo/ay.st (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: getstatic sixtwo/ay.fuxGD Ljava/lang/Object;
      // 3a: getstatic sixtwo/ay.eGcjO Ljava/lang/Object;
      // 3d: if_acmpne 4f
      // 40: goto 47
      // 43: invokestatic sixtwo/ay.st (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: bipush 1
      // 48: goto 50
      // 4b: invokestatic sixtwo/ay.st (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: bipush 0
      // 50: ireturn
      // 51: aload 3
      // 52: getstatic sixtwo/ay.fuxGD Ljava/lang/Object;
      // 55: invokestatic java/util/Objects.equals (Ljava/lang/Object;Ljava/lang/Object;)Z
      // 58: ireturn
   }

   public static void sq(Object var0, Runnable var1) {
      SeYIH.push(var0);

      try {
         var1.run();
      } finally {
         SeYIH.pop();
      }
   }

   public static void so(Object var0) {
      long var1 = VfsuD ^ 13328698300578L;

      boolean var10000;
      label17: {
         try {
            fuxGD = var0;
            if (var0 != null) {
               var10000 = true;
               break label17;
            }
         } catch (MatchException var3) {
            throw st(var3);
         }

         var10000 = false;
      }

      ZmJyP = var10000;
      SeYIH.clear();
   }
}
