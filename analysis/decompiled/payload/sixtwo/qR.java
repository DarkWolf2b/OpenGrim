package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.HashMap;
import java.util.Map;
import net.minecraft.class_1297;

public class qR {
   private final Map<class_1297, Boolean> EDYHm = new HashMap<>();
   private static final long AfTAF = gb.aYR(7585163979685280713L, -922062843457004028L, MethodHandles.lookup().lookupClass()).a(101520123846384L);

   public qR() {
      hF.bdI(this);
   }

   public boolean ddR(class_1297 var1) {
      return this.EDYHm.containsKey(var1);
   }

   private static MatchException ddS(MatchException var0) {
      return var0;
   }

   @hG
   public void ddQ(hp param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qR.AfTAF J
      // 03: ldc2_w 51614261116612
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/qL.dcc ()Z
      // 0b: aload 1
      // 0c: invokevirtual sixtwo/hp.bcX ()Lnet/minecraft/class_1297;
      // 0f: astore 6
      // 11: istore 4
      // 13: aload 6
      // 15: iload 4
      // 17: ifne 30
      // 1a: instanceof net/minecraft/class_1511
      // 1d: ifeq 5d
      // 20: goto 27
      // 23: invokestatic sixtwo/qR.ddS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 6
      // 29: goto 30
      // 2c: invokestatic sixtwo/qR.ddS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: checkcast net/minecraft/class_1511
      // 33: astore 5
      // 35: aload 0
      // 36: iload 4
      // 38: ifne 5c
      // 3b: aload 5
      // 3d: invokevirtual sixtwo/qR.ddR (Lnet/minecraft/class_1297;)Z
      // 40: ifeq 5d
      // 43: goto 4a
      // 46: invokestatic sixtwo/qR.ddS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 0
      // 4b: getfield sixtwo/qR.EDYHm Ljava/util/Map;
      // 4e: aload 5
      // 50: invokeinterface java/util/Map.remove (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 55: goto 5c
      // 58: invokestatic sixtwo/qR.ddS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: pop
      // 5d: return
   }

   @hG
   public void ddP(hw$tw param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qR.AfTAF J
      // 03: ldc2_w 9543046832523
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/qL.dcb ()Z
      // 0b: aload 1
      // 0c: invokevirtual sixtwo/hw$tw.bdm ()Lnet/minecraft/class_1297;
      // 0f: astore 6
      // 11: istore 4
      // 13: aload 6
      // 15: iload 4
      // 17: ifeq 30
      // 1a: instanceof net/minecraft/class_1511
      // 1d: ifeq 45
      // 20: goto 27
      // 23: invokestatic sixtwo/qR.ddS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 6
      // 29: goto 30
      // 2c: invokestatic sixtwo/qR.ddS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: checkcast net/minecraft/class_1511
      // 33: astore 5
      // 35: aload 0
      // 36: getfield sixtwo/qR.EDYHm Ljava/util/Map;
      // 39: aload 5
      // 3b: bipush 1
      // 3c: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 3f: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 44: pop
      // 45: return
   }
}
