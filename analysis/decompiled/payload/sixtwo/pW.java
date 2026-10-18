package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;
import net.minecraft.class_11890;

public final class pW {
   private static final Map<UUID, pX> Myjxl = new ConcurrentHashMap<>();
   private static final long SqIKc = gb.aYR(-7158962212317253991L, 4891171278871459191L, MethodHandles.lookup().lookupClass()).a(64149559430013L);

   private static MatchException cUa(MatchException var0) {
      return var0;
   }

   public static void cTX(class_11890 param0, pY param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pW.SqIKc J
      // 03: ldc2_w 51907221521309
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/qa.cUe ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: ifnull 28
      // 11: aload 1
      // 12: aload 4
      // 14: ifnull 3b
      // 17: goto 1e
      // 1a: invokestatic sixtwo/pW.cUa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: ifnonnull 29
      // 21: goto 28
      // 24: invokestatic sixtwo/pW.cUa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: return
      // 29: getstatic sixtwo/pW.Myjxl Ljava/util/Map;
      // 2c: aload 0
      // 2d: invokevirtual net/minecraft/class_11890.method_5667 ()Ljava/util/UUID;
      // 30: aload 1
      // 31: invokeinterface sixtwo/pY.createInstance ()Lsixtwo/pX; 1
      // 36: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 3b: pop
      // 3c: return
   }

   public static void cTY(class_11890 var0) {
      long var1 = SqIKc ^ 50386301798536L;
      String[] var3 = qa.cUe();

      try {
         if (var3 == null) {
            return;
         }

         if (var0 == null) {
            return;
         }
      } catch (MatchException var4) {
         throw cUa(var4);
      }

      Myjxl.remove(var0.method_5667());
   }

   public static pX cTZ(class_11890 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pW.SqIKc J
      // 03: ldc2_w 99632230426566
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/qa.cUe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 2d
      // 11: ifnonnull 21
      // 14: goto 1b
      // 17: invokestatic sixtwo/pW.cUa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aconst_null
      // 1c: areturn
      // 1d: invokestatic sixtwo/pW.cUa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: getstatic sixtwo/pW.Myjxl Ljava/util/Map;
      // 24: aload 0
      // 25: invokevirtual net/minecraft/class_11890.method_5667 ()Ljava/util/UUID;
      // 28: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 2d: checkcast sixtwo/pX
      // 30: astore 4
      // 32: aload 4
      // 34: aload 3
      // 35: ifnull 4a
      // 38: ifnonnull 48
      // 3b: goto 42
      // 3e: invokestatic sixtwo/pW.cUa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aconst_null
      // 43: areturn
      // 44: invokestatic sixtwo/pW.cUa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 4
      // 4a: aload 3
      // 4b: ifnull 74
      // 4e: invokeinterface sixtwo/pX.finished ()Z 1
      // 53: ifeq 72
      // 56: goto 5d
      // 59: invokestatic sixtwo/pW.cUa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: getstatic sixtwo/pW.Myjxl Ljava/util/Map;
      // 60: aload 0
      // 61: invokevirtual net/minecraft/class_11890.method_5667 ()Ljava/util/UUID;
      // 64: aload 4
      // 66: invokeinterface java/util/Map.remove (Ljava/lang/Object;Ljava/lang/Object;)Z 3
      // 6b: pop
      // 6c: aconst_null
      // 6d: areturn
      // 6e: invokestatic sixtwo/pW.cUa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: aload 4
      // 74: areturn
   }
}
