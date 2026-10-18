package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_6367;

public final class jp extends class_6367 {
   public boolean LHtaR;
   private final boolean mYUfR;
   private static final long OhKWC = gb.aYR(1601633786730209997L, 7273737541638152616L, MethodHandles.lookup().lookupClass()).a(133707839667403L);

   public int bFm() {
      return lT.ciQ().nativeTextureId(this.method_30278());
   }

   public void bFk() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jp.OhKWC J
      // 03: ldc2_w 63794959560617
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/jp.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 0f: astore 4
      // 11: astore 3
      // 12: aload 3
      // 13: ifnull 2e
      // 16: aload 4
      // 18: ifnonnull 2f
      // 1b: goto 22
      // 1e: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: bipush 0
      // 24: putfield sixtwo/jp.LHtaR Z
      // 27: goto 2e
      // 2a: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: return
      // 2f: aload 0
      // 30: aload 3
      // 31: ifnull 49
      // 34: getfield sixtwo/jp.mYUfR Z
      // 37: ifeq 6f
      // 3a: goto 41
      // 3d: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: aload 0
      // 42: goto 49
      // 45: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: invokevirtual sixtwo/jp.method_30278 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 4c: ifnull 6f
      // 4f: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 52: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createCommandEncoder ()Lcom/mojang/blaze3d/systems/CommandEncoder; 1
      // 57: aload 4
      // 59: bipush 0
      // 5a: aload 0
      // 5b: invokevirtual sixtwo/jp.method_30278 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 5e: dconst_1
      // 5f: invokeinterface com/mojang/blaze3d/systems/CommandEncoder.clearColorAndDepthTextures (Lcom/mojang/blaze3d/textures/GpuTexture;ILcom/mojang/blaze3d/textures/GpuTexture;D)V 6
      // 64: aload 3
      // 65: ifnonnull 86
      // 68: goto 6f
      // 6b: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 72: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createCommandEncoder ()Lcom/mojang/blaze3d/systems/CommandEncoder; 1
      // 77: aload 4
      // 79: bipush 0
      // 7a: invokeinterface com/mojang/blaze3d/systems/CommandEncoder.clearColorTexture (Lcom/mojang/blaze3d/textures/GpuTexture;I)V 3
      // 7f: goto 86
      // 82: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 85: athrow
      // 86: aload 0
      // 87: bipush 0
      // 88: putfield sixtwo/jp.LHtaR Z
      // 8b: return
   }

   public void bFj() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jp.OhKWC J
      // 03: ldc2_w 26770202381173
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jm.bDZ ()[Lsixtwo/iS;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: invokevirtual net/minecraft/class_310.method_1522 ()Lnet/minecraft/class_276;
      // 11: astore 4
      // 13: aload 4
      // 15: getfield net/minecraft/class_276.field_1482 I
      // 18: istore 5
      // 1a: astore 3
      // 1b: aload 4
      // 1d: getfield net/minecraft/class_276.field_1481 I
      // 20: istore 6
      // 22: iload 5
      // 24: aload 3
      // 25: ifnull 34
      // 28: ifle 42
      // 2b: goto 32
      // 2e: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: iload 6
      // 34: aload 3
      // 35: ifnull 45
      // 38: ifgt 43
      // 3b: goto 42
      // 3e: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: return
      // 43: iload 5
      // 45: aload 0
      // 46: getfield sixtwo/jp.field_1482 I
      // 49: aload 3
      // 4a: ifnull 64
      // 4d: if_icmpne 67
      // 50: goto 57
      // 53: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: iload 6
      // 59: aload 0
      // 5a: getfield sixtwo/jp.field_1481 I
      // 5d: goto 64
      // 60: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: if_icmpeq 7a
      // 67: aload 0
      // 68: iload 5
      // 6a: iload 6
      // 6c: invokevirtual sixtwo/jp.method_1234 (II)V
      // 6f: aload 0
      // 70: invokevirtual sixtwo/jp.bFk ()V
      // 73: goto 7a
      // 76: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 7d: ifnonnull 8e
      // 80: bipush 1
      // 81: anewarray 60
      // 84: invokestatic sixtwo/jm.bDY ([Lsixtwo/iS;)V
      // 87: goto 8e
      // 8a: invokestatic sixtwo/jp.bFn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8d: athrow
      // 8e: return
   }

   private static MatchException bFn(MatchException var0) {
      return var0;
   }

   public int bFl() {
      return lT.ciQ().nativeTextureId(this.method_30277());
   }

   public jp(String var1, boolean var2) {
      long var3 = OhKWC ^ 6896843323299L;
      iS[] var10000 = jm.bDZ();
      super(var1, rD.dlmvG.method_22683().method_4489(), rD.dlmvG.method_22683().method_4506(), var2);
      iS[] var5 = var10000;

      try {
         this.mYUfR = var2;
         this.bFj();
         this.bFk();
         if (var5 == null) {
            iS.bwK("YUp1ac");
         }
      } catch (MatchException var6) {
         throw bFn(var6);
      }
   }
}
