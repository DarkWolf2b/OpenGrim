package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderPass;
import java.lang.invoke.MethodHandles;
import java.util.function.Consumer;
import net.minecraft.class_9801;

record lD(lB renderSpace, RenderPipeline pipeline, class_9801 meshData, Integer vertexCount, Consumer<RenderPass> uniformSetter) implements lI {
   private static final long a = gb.aYR(-7782313630929861887L, 3835919307989803911L, MethodHandles.lookup().lookupClass()).a(225270233700859L);

   lD(lB var1, RenderPipeline var2, class_9801 var3, Consumer<RenderPass> var4) {
      this(var1, var2, var3, null, var4);
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }

   @Override
   public void execute() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lD.a J
      // 03: ldc2_w 37944476490990
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lC.cfk ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 37
      // 11: getfield sixtwo/lD.vertexCount Ljava/lang/Integer;
      // 14: ifnonnull 36
      // 17: goto 1e
      // 1a: invokestatic sixtwo/lD.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/lD.renderSpace Lsixtwo/lB;
      // 22: aload 0
      // 23: getfield sixtwo/lD.pipeline Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 26: aload 0
      // 27: getfield sixtwo/lD.meshData Lnet/minecraft/class_9801;
      // 2a: aload 0
      // 2b: getfield sixtwo/lD.uniformSetter Ljava/util/function/Consumer;
      // 2e: invokestatic sixtwo/lF.cfT (Lsixtwo/lB;Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 31: return
      // 32: invokestatic sixtwo/lD.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 0
      // 37: getfield sixtwo/lD.renderSpace Lsixtwo/lB;
      // 3a: aload 0
      // 3b: getfield sixtwo/lD.pipeline Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 3e: aload 0
      // 3f: getfield sixtwo/lD.meshData Lnet/minecraft/class_9801;
      // 42: aload 0
      // 43: getfield sixtwo/lD.vertexCount Ljava/lang/Integer;
      // 46: invokevirtual java/lang/Integer.intValue ()I
      // 49: aload 0
      // 4a: getfield sixtwo/lD.uniformSetter Ljava/util/function/Consumer;
      // 4d: invokestatic sixtwo/lF.cfO (Lsixtwo/lB;Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;ILjava/util/function/Consumer;)V
      // 50: return
   }

   @Override
   public lN batchKey() {
      return lN.immediate();
   }
}
