package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import java.lang.invoke.MethodHandles;
import java.util.Collections;
import java.util.IdentityHashMap;
import java.util.Map;

public final class kV {
   private static final Map<RenderPipeline, lh> sirgS = Collections.synchronizedMap(new IdentityHashMap<>());
   private static final Map<RenderPipeline, RenderPipeline> JEqcI = Collections.synchronizedMap(new IdentityHashMap<>());
   private static final long WfwXb = gb.aYR(7494737941102038453L, -6521411567110058702L, MethodHandles.lookup().lookupClass()).a(253947487802698L);

   private kV() {
   }

   public static void bWl(RenderPipeline param0, lh param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kV.WfwXb J
      // 03: ldc2_w 87579486580355
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kR.bVy ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifne 2e
      // 13: ifnull 2f
      // 16: goto 1d
      // 19: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: getstatic sixtwo/kV.sirgS Ljava/util/Map;
      // 20: aload 0
      // 21: aload 1
      // 22: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 27: goto 2e
      // 2a: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: pop
      // 2f: return
   }

   public static RenderPipeline bWp(RenderPipeline var0) {
      return JEqcI.getOrDefault(var0, var0);
   }

   public static lh bWn(RenderPipeline param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kV.WfwXb J
      // 03: ldc2_w 70118437658805
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kR.bVx ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifeq 2c
      // 11: ifnonnull 23
      // 14: goto 1b
      // 17: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aconst_null
      // 1c: goto 2f
      // 1f: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: getstatic sixtwo/kV.sirgS Ljava/util/Map;
      // 26: aload 0
      // 27: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 2c: checkcast sixtwo/lh
      // 2f: areturn
   }

   private static MatchException bWq(MatchException var0) {
      return var0;
   }

   public static boolean bWo(RenderPipeline param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kV.WfwXb J
      // 03: ldc2_w 93853645156106
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kR.bVy ()Z
      // 0b: aload 0
      // 0c: invokestatic sixtwo/kV.bWn (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)Lsixtwo/lh;
      // 0f: astore 4
      // 11: istore 3
      // 12: aload 4
      // 14: getstatic sixtwo/lh.GJHNe Lsixtwo/lh;
      // 17: iload 3
      // 18: ifne 31
      // 1b: if_acmpeq 34
      // 1e: goto 25
      // 21: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 4
      // 27: getstatic sixtwo/lh.aApMr Lsixtwo/lh;
      // 2a: goto 31
      // 2d: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: if_acmpne 3c
      // 34: bipush 1
      // 35: goto 3d
      // 38: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 0
      // 3d: ireturn
   }

   public static void bWm(RenderPipeline param0, RenderPipeline param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kV.WfwXb J
      // 03: ldc2_w 14104841101490
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kR.bVx ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: iload 4
      // 10: ifeq 1e
      // 13: ifnull 3f
      // 16: goto 1d
      // 19: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: iload 4
      // 20: ifeq 3e
      // 23: ifnull 3f
      // 26: goto 2d
      // 29: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getstatic sixtwo/kV.JEqcI Ljava/util/Map;
      // 30: aload 0
      // 31: aload 1
      // 32: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 37: goto 3e
      // 3a: invokestatic sixtwo/kV.bWq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: pop
      // 3f: return
   }
}
