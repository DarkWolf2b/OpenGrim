package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import net.minecraft.class_2960;

public class qA extends qw {
   private final List<class_2960> lNzom;
   private final int ccBYI;
   private long TlsdL = 0L;
   private int Tpxdy = 1;
   private static final long eAiPH = gb.aYR(1130231821807574649L, 272200908279507853L, MethodHandles.lookup().lookupClass()).a(64036585915147L);

   public qA(String var1, int var2) {
      super(var1);
      this.ccBYI = var2;
      this.lNzom = rD.dlR().cZS().getOrDefault(rD.dlR().cZR().get(var1).getFirst(), List.of());
   }

   @Override
   public class_2960 cZa() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qA.eAiPH J
      // 03: ldc2_w 58707468540127
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/qw.cZd ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/qA.lNzom Ljava/util/List;
      // 10: invokeinterface java/util/List.isEmpty ()Z 1
      // 15: ifeq 1e
      // 18: aconst_null
      // 19: areturn
      // 1a: invokestatic sixtwo/qA.cZr (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: invokestatic java/lang/System.currentTimeMillis ()J
      // 21: lstore 4
      // 23: aload 3
      // 24: ifnonnull 4b
      // 27: lload 4
      // 29: aload 0
      // 2a: getfield sixtwo/qA.TlsdL J
      // 2d: lsub
      // 2e: aload 0
      // 2f: getfield sixtwo/qA.ccBYI I
      // 32: i2l
      // 33: lcmp
      // 34: ifle 5f
      // 37: goto 3e
      // 3a: invokestatic sixtwo/qA.cZr (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 0
      // 3f: lload 4
      // 41: putfield sixtwo/qA.TlsdL J
      // 44: goto 4b
      // 47: invokestatic sixtwo/qA.cZr (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: aload 0
      // 4c: aload 0
      // 4d: getfield sixtwo/qA.Tpxdy I
      // 50: bipush 1
      // 51: iadd
      // 52: aload 0
      // 53: getfield sixtwo/qA.lNzom Ljava/util/List;
      // 56: invokeinterface java/util/List.size ()I 1
      // 5b: irem
      // 5c: putfield sixtwo/qA.Tpxdy I
      // 5f: aload 0
      // 60: getfield sixtwo/qA.lNzom Ljava/util/List;
      // 63: aload 0
      // 64: getfield sixtwo/qA.Tpxdy I
      // 67: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 6c: checkcast net/minecraft/class_2960
      // 6f: areturn
   }

   private static MatchException cZr(MatchException var0) {
      return var0;
   }
}
