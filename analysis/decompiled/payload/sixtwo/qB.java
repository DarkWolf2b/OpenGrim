package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import net.minecraft.class_2960;

public class qB extends qz {
   private final List<class_2960> vAhyA;
   private final int JPIol;
   private long aEStd = 0L;
   private int lOIJa = 1;
   private static final long hIHKx = gb.aYR(-1468868640441108540L, 8458465084499036594L, MethodHandles.lookup().lookupClass()).a(98482650010113L);

   public qB(String var1, int var2) {
      super(var1);
      this.JPIol = var2;
      this.vAhyA = rD.dlT().dat().getOrDefault(rD.dlT().das().get(var1).getFirst(), List.of());
   }

   @Override
   public class_2960 cZk() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qB.hIHKx J
      // 03: ldc2_w 75577986008844
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/qw.cZd ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/qB.vAhyA Ljava/util/List;
      // 10: invokeinterface java/util/List.isEmpty ()Z 1
      // 15: ifeq 1e
      // 18: aconst_null
      // 19: areturn
      // 1a: invokestatic sixtwo/qB.cZs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: invokestatic java/lang/System.currentTimeMillis ()J
      // 21: lstore 4
      // 23: aload 3
      // 24: ifnonnull 4b
      // 27: lload 4
      // 29: aload 0
      // 2a: getfield sixtwo/qB.aEStd J
      // 2d: lsub
      // 2e: aload 0
      // 2f: getfield sixtwo/qB.JPIol I
      // 32: i2l
      // 33: lcmp
      // 34: ifle 5f
      // 37: goto 3e
      // 3a: invokestatic sixtwo/qB.cZs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 0
      // 3f: lload 4
      // 41: putfield sixtwo/qB.aEStd J
      // 44: goto 4b
      // 47: invokestatic sixtwo/qB.cZs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: aload 0
      // 4c: aload 0
      // 4d: getfield sixtwo/qB.lOIJa I
      // 50: bipush 1
      // 51: iadd
      // 52: aload 0
      // 53: getfield sixtwo/qB.vAhyA Ljava/util/List;
      // 56: invokeinterface java/util/List.size ()I 1
      // 5b: irem
      // 5c: putfield sixtwo/qB.lOIJa I
      // 5f: aload 0
      // 60: getfield sixtwo/qB.vAhyA Ljava/util/List;
      // 63: aload 0
      // 64: getfield sixtwo/qB.lOIJa I
      // 67: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 6c: checkcast net/minecraft/class_2960
      // 6f: areturn
   }

   private static MatchException cZs(MatchException var0) {
      return var0;
   }
}
