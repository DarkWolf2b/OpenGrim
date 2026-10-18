package sixtwo;

import com.mojang.blaze3d.buffers.GpuBufferSlice;
import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_11282;
import net.minecraft.class_276;
import net.minecraft.class_9801;
import org.joml.Matrix4f;
import org.joml.Vector3f;

public final class lF {
   private static final ThreadLocal<lB> ReACR;
   private static final long uvZFB = gb.aYR(-7082319368593597064L, 4003172569416304658L, MethodHandles.lookup().lookupClass()).a(22140624023131L);
   private static final String[] maWGS;
   private static final String[] iimvN;
   private static final Map LJNca = new HashMap(13);

   static {
      long var0 = uvZFB ^ 57732277940055L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[9];
      int var7 = 0;
      String var6 = "ÐÃzi\u0082ÿ\u009eÇw-y42ãx\u0016S\u008aS\b÷xe¾Ùû:è\u0007î\u001c¾\u0018Ë¢é\u008fr0ªz\u0012v\u008c\u0005\u0099ïº6\u0086\u0097|¾ðT\u001aá0~ú\u001eÉé\u0014ÔÌW\u000enpïÇ¶+Ó7sÚ,\u0086\u0019¯Cè.q\u0007K\u0013\u0007Äìà\u0090>\u0002\u00139\r¹\u0091Ëã\u0013{³(\u001f6S\u00920\u0094Q\u0096*l£\u008dT*´MõÙÓóã(5y©Fy.yoÅî\u0013Ã½ðâÚ]\u0011\u0010E\r\rë\u000b\u0019ö\u0000\rt\u001d\u009a\u0091\u0002E6(Nâ Q\u0090OÂ0\u0090â mðO¹ÕÌó¦\u0080\u001b°\u00044#´v{¸5\u0081Ú\\Ï\u0085º@Þl\u008d(\u001bý\u001c3\u009fwîL\u008aÎ\t[Û\u0085ô¶@\u001eXJëº\u0007\fÿT\u0015p\u008c\u0019\u009c\u0017YPd0ÍèÅz";
      int var8 = "ÐÃzi\u0082ÿ\u009eÇw-y42ãx\u0016S\u008aS\b÷xe¾Ùû:è\u0007î\u001c¾\u0018Ë¢é\u008fr0ªz\u0012v\u008c\u0005\u0099ïº6\u0086\u0097|¾ðT\u001aá0~ú\u001eÉé\u0014ÔÌW\u000enpïÇ¶+Ó7sÚ,\u0086\u0019¯Cè.q\u0007K\u0013\u0007Äìà\u0090>\u0002\u00139\r¹\u0091Ëã\u0013{³(\u001f6S\u00920\u0094Q\u0096*l£\u008dT*´MõÙÓóã(5y©Fy.yoÅî\u0013Ã½ðâÚ]\u0011\u0010E\r\rë\u000b\u0019ö\u0000\rt\u001d\u009a\u0091\u0002E6(Nâ Q\u0090OÂ0\u0090â mðO¹ÕÌó¦\u0080\u001b°\u00044#´v{¸5\u0081Ú\\Ï\u0085º@Þl\u008d(\u001bý\u001c3\u009fwîL\u008aÎ\t[Û\u0085ô¶@\u001eXJëº\u0007\fÿT\u0015p\u008c\u0019\u009c\u0017YPd0ÍèÅz"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = cgi(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     maWGS = var9;
                     iimvN = new String[9];
                     ReACR = ThreadLocal.withInitial(() -> lB.xCeuB);
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = "kæ\u001dÏ_Ü\u008f*Ñòý\u001f\u008eK&ÿ\u001fsãÓ\u0005ªß¶jô\u0095»¿Â\u0087\u0099Ój\\d¡³8V8\u009a\u0081À1¤ÍüË}_\u008fdÒÆ\u0090\u0012ÔÄ\u0099x\u0097úùÌ\u0083g\u0082 Ã\u009cV\b®\u0085\u0007\u0006y\u001dsÕ¼Z\u0093\u000f®\f\u0093\u0003Ñ|ððW<ëá";
                  var8 = "kæ\u001dÏ_Ü\u008f*Ñòý\u001f\u008eK&ÿ\u001fsãÓ\u0005ªß¶jô\u0095»¿Â\u0087\u0099Ój\\d¡³8V8\u009a\u0081À1¤ÍüË}_\u008fdÒÆ\u0090\u0012ÔÄ\u0099x\u0097úùÌ\u0083g\u0082 Ã\u009cV\b®\u0085\u0007\u0006y\u001dsÕ¼Z\u0093\u000f®\f\u0093\u0003Ñ|ððW<ëá"
                     .length();
                  var5 = '(';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public static void cfW(RenderPipeline var0, class_9801 var1) {
      cfQ(var0, var1, null);
   }

   public static void cfA(lI var0) {
      var0.execute();
   }

   public static void cfB(RenderPipeline var0, class_9801 var1, Consumer<RenderPass> var2) {
      cfN(lB.xCeuB, var0, var1, 4, var2);
   }

   private static void cfN(lB var0, RenderPipeline var1, class_9801 var2, int var3, Consumer<RenderPass> var4) {
      cfA(new lD(var0, var1, var2, var3, var4));
   }

   public static void cfC(RenderPipeline var0, class_9801 var1) {
      cfN(lB.xCeuB, var0, var1, 4, null);
   }

   public static void cfD(RenderPipeline var0, class_9801 var1, Consumer<RenderPass> var2) {
      cfN(lB.rMraa, var0, var1, 4, var2);
   }

   public static void cfF(RenderPipeline var0, class_9801 var1, Consumer<RenderPass> var2) {
      cfN(lB.dlmOV, var0, var1, 4, var2);
   }

   public static void cfP(RenderPipeline var0, class_9801 var1, Consumer<RenderPass> var2) {
      cfS(lB.xCeuB, var0, var1, var2);
   }

   public static void cfR(RenderPipeline var0, class_9801 var1, Consumer<RenderPass> var2) {
      cfS(lB.dlmOV, var0, var1, var2);
   }

   public static void cfQ(RenderPipeline var0, class_9801 var1, Consumer<RenderPass> var2) {
      cfS(lB.rMraa, var0, var1, var2);
   }

   private static void cgb(RenderPass var0, GpuBufferSlice var1) {
      long var2 = uvZFB ^ 49865001073289L;
      RenderSystem.bindDefaultUniforms(var0);
      var0.setUniform(cgl<"o">(22806, 4708244413352240378L ^ var2), var1);
   }

   public static void cfV(RenderPipeline var0, class_9801 var1) {
      cfP(var0, var1, null);
   }

   public static void cfI(class_276 var0, lB var1, RenderPipeline var2, class_9801 var3) {
      cfU(var0, var1, var2, var3, null);
   }

   static void cfO(lB param0, RenderPipeline param1, class_9801 param2, int param3, Consumer<RenderPass> param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lF.uvZFB J
      // 003: ldc2_w 39303848405384
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/lC.cfk ()[Ljava/lang/String;
      // 00c: aload 1
      // 00d: invokestatic sixtwo/jo.bEp (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)Lnet/minecraft/class_276;
      // 010: astore 8
      // 012: aload 1
      // 013: invokestatic sixtwo/jo.bEr (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 016: astore 1
      // 017: astore 7
      // 019: aload 1
      // 01a: ifnonnull 022
      // 01d: return
      // 01e: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 021: athrow
      // 022: aload 8
      // 024: invokevirtual net/minecraft/class_276.method_71639 ()Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 027: astore 9
      // 029: aload 9
      // 02b: aload 7
      // 02d: ifnonnull 040
      // 030: ifnonnull 03b
      // 033: goto 03a
      // 036: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 039: athrow
      // 03a: return
      // 03b: aload 8
      // 03d: invokevirtual net/minecraft/class_276.method_71640 ()Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 040: astore 10
      // 042: aload 2
      // 043: invokevirtual net/minecraft/class_9801.method_60818 ()Ljava/nio/ByteBuffer;
      // 046: sipush 17505
      // 049: ldc2_w 9025044213999807117
      // 04c: lload 5
      // 04e: lxor
      // 04f: invokedynamic o (IJ)Ljava/lang/String; bsm=sixtwo/lF.cgl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 054: invokestatic sixtwo/lr.caC (Ljava/nio/ByteBuffer;Ljava/lang/String;)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 057: astore 11
      // 059: aload 2
      // 05a: invokevirtual net/minecraft/class_9801.method_60822 ()Lnet/minecraft/class_9801$class_4574;
      // 05d: astore 12
      // 05f: aload 12
      // 061: invokevirtual net/minecraft/class_9801$class_4574.comp_752 ()Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 064: astore 13
      // 066: aload 13
      // 068: iload 3
      // 069: invokevirtual com/mojang/blaze3d/vertex/VertexFormat$class_5596.method_31973 (I)I
      // 06c: istore 14
      // 06e: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 071: invokestatic com/mojang/blaze3d/systems/RenderSystem.getSequentialBuffer (Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lcom/mojang/blaze3d/systems/RenderSystem$class_5590;
      // 074: iload 14
      // 076: invokevirtual com/mojang/blaze3d/systems/RenderSystem$class_5590.method_68274 (I)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 079: astore 15
      // 07b: aload 0
      // 07c: invokestatic sixtwo/lF.cga (Lsixtwo/lB;)Lcom/mojang/blaze3d/buffers/GpuBufferSlice;
      // 07f: astore 16
      // 081: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 084: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 087: checkcast sixtwo/lB
      // 08a: astore 17
      // 08c: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 08f: aload 0
      // 090: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 093: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 096: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createCommandEncoder ()Lcom/mojang/blaze3d/systems/CommandEncoder; 1
      // 09b: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/lF.cge ()Ljava/lang/String;, ()Ljava/lang/String; ]
      // 0a0: aload 9
      // 0a2: invokestatic java/util/OptionalInt.empty ()Ljava/util/OptionalInt;
      // 0a5: aload 10
      // 0a7: invokestatic java/util/OptionalDouble.empty ()Ljava/util/OptionalDouble;
      // 0aa: invokeinterface com/mojang/blaze3d/systems/CommandEncoder.createRenderPass (Ljava/util/function/Supplier;Lcom/mojang/blaze3d/textures/GpuTextureView;Ljava/util/OptionalInt;Lcom/mojang/blaze3d/textures/GpuTextureView;Ljava/util/OptionalDouble;)Lcom/mojang/blaze3d/systems/RenderPass; 6
      // 0af: astore 18
      // 0b1: aload 18
      // 0b3: aload 1
      // 0b4: invokeinterface com/mojang/blaze3d/systems/RenderPass.setPipeline (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)V 2
      // 0b9: aload 18
      // 0bb: aload 16
      // 0bd: invokestatic sixtwo/lF.cgb (Lcom/mojang/blaze3d/systems/RenderPass;Lcom/mojang/blaze3d/buffers/GpuBufferSlice;)V
      // 0c0: aload 18
      // 0c2: invokestatic sixtwo/jG.bHS (Lcom/mojang/blaze3d/systems/RenderPass;)V
      // 0c5: aload 7
      // 0c7: ifnonnull 10e
      // 0ca: aload 4
      // 0cc: ifnull 0e6
      // 0cf: goto 0d6
      // 0d2: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d5: athrow
      // 0d6: aload 4
      // 0d8: aload 18
      // 0da: invokeinterface java/util/function/Consumer.accept (Ljava/lang/Object;)V 2
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e5: athrow
      // 0e6: aload 18
      // 0e8: bipush 0
      // 0e9: aload 11
      // 0eb: invokeinterface com/mojang/blaze3d/systems/RenderPass.setVertexBuffer (ILcom/mojang/blaze3d/buffers/GpuBuffer;)V 3
      // 0f0: aload 18
      // 0f2: aload 15
      // 0f4: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 0f7: invokestatic com/mojang/blaze3d/systems/RenderSystem.getSequentialBuffer (Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lcom/mojang/blaze3d/systems/RenderSystem$class_5590;
      // 0fa: invokevirtual com/mojang/blaze3d/systems/RenderSystem$class_5590.method_31924 ()Lcom/mojang/blaze3d/vertex/VertexFormat$class_5595;
      // 0fd: invokeinterface com/mojang/blaze3d/systems/RenderPass.setIndexBuffer (Lcom/mojang/blaze3d/buffers/GpuBuffer;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5595;)V 3
      // 102: aload 18
      // 104: bipush 0
      // 105: bipush 0
      // 106: iload 14
      // 108: bipush 1
      // 109: invokeinterface com/mojang/blaze3d/systems/RenderPass.drawIndexed (IIII)V 5
      // 10e: aload 7
      // 110: ifnonnull 15e
      // 113: aload 18
      // 115: ifnull 156
      // 118: goto 11f
      // 11b: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 11e: athrow
      // 11f: aload 18
      // 121: invokeinterface com/mojang/blaze3d/systems/RenderPass.close ()V 1
      // 126: goto 156
      // 129: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 12c: athrow
      // 12d: astore 19
      // 12f: aload 18
      // 131: aload 7
      // 133: ifnonnull 142
      // 136: ifnull 153
      // 139: goto 140
      // 13c: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 13f: athrow
      // 140: aload 18
      // 142: invokeinterface com/mojang/blaze3d/systems/RenderPass.close ()V 1
      // 147: goto 153
      // 14a: astore 20
      // 14c: aload 19
      // 14e: aload 20
      // 150: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 153: aload 19
      // 155: athrow
      // 156: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 159: aload 17
      // 15b: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 15e: goto 16e
      // 161: astore 21
      // 163: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 166: aload 17
      // 168: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 16b: aload 21
      // 16d: athrow
      // 16e: return
   }

   private static GpuBufferSlice cga(lB var0) {
      long var1 = uvZFB ^ 93857827368669L;

      try {
         class_11282 var10000 = RenderSystem.getDynamicUniforms();
         switch (lF$uD.dCIhl[var0.ordinal()]) {
            case 1:
               return var10000.method_71106(new Matrix4f().setTranslation(0.0F, 0.0F, -11000.0F), jF.bHx(), new Vector3f(), new Matrix4f());
            case 2:
               return var10000.method_71106(new Matrix4f(), jF.bHx(), new Vector3f(), new Matrix4f());
            case 3:
               return var10000.method_71106(RenderSystem.getModelViewMatrix(), jF.bHx(), new Vector3f(), new Matrix4f());
            default:
               throw new MatchException(null, null);
         }
      } catch (MatchException var3) {
         throw cgh(var3);
      }
   }

   static void cfT(lB param0, RenderPipeline param1, class_9801 param2, Consumer<RenderPass> param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lF.uvZFB J
      // 003: ldc2_w 93648500158517
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/lC.cfk ()[Ljava/lang/String;
      // 00c: aload 1
      // 00d: invokestatic sixtwo/jo.bEp (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)Lnet/minecraft/class_276;
      // 010: astore 7
      // 012: astore 6
      // 014: aload 1
      // 015: invokestatic sixtwo/jo.bEr (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 018: astore 1
      // 019: aload 1
      // 01a: ifnonnull 022
      // 01d: return
      // 01e: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 021: athrow
      // 022: aload 7
      // 024: invokevirtual net/minecraft/class_276.method_71639 ()Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 027: astore 8
      // 029: aload 8
      // 02b: aload 6
      // 02d: ifnonnull 040
      // 030: ifnonnull 03b
      // 033: goto 03a
      // 036: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 039: athrow
      // 03a: return
      // 03b: aload 7
      // 03d: invokevirtual net/minecraft/class_276.method_71640 ()Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 040: astore 9
      // 042: aload 2
      // 043: invokevirtual net/minecraft/class_9801.method_60822 ()Lnet/minecraft/class_9801$class_4574;
      // 046: astore 10
      // 048: aload 10
      // 04a: invokevirtual net/minecraft/class_9801$class_4574.comp_752 ()Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 04d: astore 11
      // 04f: aload 10
      // 051: invokevirtual net/minecraft/class_9801$class_4574.comp_750 ()I
      // 054: istore 12
      // 056: aload 11
      // 058: iload 12
      // 05a: invokevirtual com/mojang/blaze3d/vertex/VertexFormat$class_5596.method_31973 (I)I
      // 05d: istore 13
      // 05f: aload 2
      // 060: invokevirtual net/minecraft/class_9801.method_60818 ()Ljava/nio/ByteBuffer;
      // 063: sipush 31842
      // 066: ldc2_w 417481556563774256
      // 069: lload 4
      // 06b: lxor
      // 06c: invokedynamic o (IJ)Ljava/lang/String; bsm=sixtwo/lF.cgl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 071: invokestatic sixtwo/lr.caC (Ljava/nio/ByteBuffer;Ljava/lang/String;)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 074: astore 14
      // 076: aload 11
      // 078: invokestatic com/mojang/blaze3d/systems/RenderSystem.getSequentialBuffer (Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lcom/mojang/blaze3d/systems/RenderSystem$class_5590;
      // 07b: iload 13
      // 07d: invokevirtual com/mojang/blaze3d/systems/RenderSystem$class_5590.method_68274 (I)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 080: astore 15
      // 082: aload 0
      // 083: invokestatic sixtwo/lF.cga (Lsixtwo/lB;)Lcom/mojang/blaze3d/buffers/GpuBufferSlice;
      // 086: astore 16
      // 088: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 08b: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 08e: checkcast sixtwo/lB
      // 091: astore 17
      // 093: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 096: aload 0
      // 097: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 09a: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 09d: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createCommandEncoder ()Lcom/mojang/blaze3d/systems/CommandEncoder; 1
      // 0a2: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/lF.cgd ()Ljava/lang/String;, ()Ljava/lang/String; ]
      // 0a7: aload 8
      // 0a9: invokestatic java/util/OptionalInt.empty ()Ljava/util/OptionalInt;
      // 0ac: aload 9
      // 0ae: invokestatic java/util/OptionalDouble.empty ()Ljava/util/OptionalDouble;
      // 0b1: invokeinterface com/mojang/blaze3d/systems/CommandEncoder.createRenderPass (Ljava/util/function/Supplier;Lcom/mojang/blaze3d/textures/GpuTextureView;Ljava/util/OptionalInt;Lcom/mojang/blaze3d/textures/GpuTextureView;Ljava/util/OptionalDouble;)Lcom/mojang/blaze3d/systems/RenderPass; 6
      // 0b6: astore 18
      // 0b8: aload 18
      // 0ba: aload 1
      // 0bb: invokeinterface com/mojang/blaze3d/systems/RenderPass.setPipeline (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)V 2
      // 0c0: aload 18
      // 0c2: aload 16
      // 0c4: invokestatic sixtwo/lF.cgb (Lcom/mojang/blaze3d/systems/RenderPass;Lcom/mojang/blaze3d/buffers/GpuBufferSlice;)V
      // 0c7: aload 18
      // 0c9: invokestatic sixtwo/jG.bHS (Lcom/mojang/blaze3d/systems/RenderPass;)V
      // 0cc: aload 6
      // 0ce: ifnonnull 112
      // 0d1: aload 3
      // 0d2: ifnull 0eb
      // 0d5: goto 0dc
      // 0d8: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0db: athrow
      // 0dc: aload 3
      // 0dd: aload 18
      // 0df: invokeinterface java/util/function/Consumer.accept (Ljava/lang/Object;)V 2
      // 0e4: goto 0eb
      // 0e7: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ea: athrow
      // 0eb: aload 18
      // 0ed: bipush 0
      // 0ee: aload 14
      // 0f0: invokeinterface com/mojang/blaze3d/systems/RenderPass.setVertexBuffer (ILcom/mojang/blaze3d/buffers/GpuBuffer;)V 3
      // 0f5: aload 18
      // 0f7: aload 15
      // 0f9: aload 11
      // 0fb: invokestatic com/mojang/blaze3d/systems/RenderSystem.getSequentialBuffer (Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lcom/mojang/blaze3d/systems/RenderSystem$class_5590;
      // 0fe: invokevirtual com/mojang/blaze3d/systems/RenderSystem$class_5590.method_31924 ()Lcom/mojang/blaze3d/vertex/VertexFormat$class_5595;
      // 101: invokeinterface com/mojang/blaze3d/systems/RenderPass.setIndexBuffer (Lcom/mojang/blaze3d/buffers/GpuBuffer;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5595;)V 3
      // 106: aload 18
      // 108: bipush 0
      // 109: bipush 0
      // 10a: iload 13
      // 10c: bipush 1
      // 10d: invokeinterface com/mojang/blaze3d/systems/RenderPass.drawIndexed (IIII)V 5
      // 112: aload 6
      // 114: ifnonnull 162
      // 117: aload 18
      // 119: ifnull 15a
      // 11c: goto 123
      // 11f: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 122: athrow
      // 123: aload 18
      // 125: invokeinterface com/mojang/blaze3d/systems/RenderPass.close ()V 1
      // 12a: goto 15a
      // 12d: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 130: athrow
      // 131: astore 19
      // 133: aload 18
      // 135: aload 6
      // 137: ifnonnull 146
      // 13a: ifnull 157
      // 13d: goto 144
      // 140: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 143: athrow
      // 144: aload 18
      // 146: invokeinterface com/mojang/blaze3d/systems/RenderPass.close ()V 1
      // 14b: goto 157
      // 14e: astore 20
      // 150: aload 19
      // 152: aload 20
      // 154: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 157: aload 19
      // 159: athrow
      // 15a: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 15d: aload 17
      // 15f: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 162: goto 172
      // 165: astore 21
      // 167: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 16a: aload 17
      // 16c: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 16f: aload 21
      // 171: athrow
      // 172: return
   }

   private static void cfS(lB var0, RenderPipeline var1, class_9801 var2, Consumer<RenderPass> var3) {
      cfA(new lD(var0, var1, var2, var3));
   }

   public static void cfE(RenderPipeline var0, class_9801 var1) {
      cfN(lB.rMraa, var0, var1, 4, null);
   }

   public static void cfJ(class_276 param0, RenderPipeline param1, class_9801 param2, Consumer<RenderPass> param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lF.uvZFB J
      // 003: ldc2_w 6890379483479
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/lC.cfk ()[Ljava/lang/String;
      // 00c: astore 6
      // 00e: aload 1
      // 00f: ifnull 029
      // 012: aload 0
      // 013: aload 6
      // 015: ifnonnull 03b
      // 018: goto 01f
      // 01b: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01e: athrow
      // 01f: ifnonnull 02a
      // 022: goto 029
      // 025: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 028: athrow
      // 029: return
      // 02a: aload 1
      // 02b: aload 0
      // 02c: invokestatic sixtwo/jo.bEq (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_276;)Lnet/minecraft/class_276;
      // 02f: astore 0
      // 030: aload 1
      // 031: invokestatic sixtwo/jo.bEr (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 034: aload 6
      // 036: ifnonnull 03f
      // 039: astore 1
      // 03a: aload 0
      // 03b: ifnull 042
      // 03e: aload 1
      // 03f: ifnonnull 043
      // 042: return
      // 043: aload 0
      // 044: invokevirtual net/minecraft/class_276.method_71639 ()Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 047: astore 7
      // 049: aload 7
      // 04b: aload 6
      // 04d: ifnonnull 05f
      // 050: ifnonnull 05b
      // 053: goto 05a
      // 056: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 059: athrow
      // 05a: return
      // 05b: aload 0
      // 05c: invokevirtual net/minecraft/class_276.method_71640 ()Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 05f: astore 8
      // 061: aload 2
      // 062: invokevirtual net/minecraft/class_9801.method_60822 ()Lnet/minecraft/class_9801$class_4574;
      // 065: astore 9
      // 067: aload 9
      // 069: invokevirtual net/minecraft/class_9801$class_4574.comp_752 ()Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 06c: astore 10
      // 06e: aload 10
      // 070: aload 9
      // 072: invokevirtual net/minecraft/class_9801$class_4574.comp_750 ()I
      // 075: invokevirtual com/mojang/blaze3d/vertex/VertexFormat$class_5596.method_31973 (I)I
      // 078: istore 11
      // 07a: aload 2
      // 07b: invokevirtual net/minecraft/class_9801.method_60818 ()Ljava/nio/ByteBuffer;
      // 07e: sipush 10485
      // 081: ldc2_w 5398242504242951880
      // 084: lload 4
      // 086: lxor
      // 087: invokedynamic o (IJ)Ljava/lang/String; bsm=sixtwo/lF.cgl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 08c: invokestatic sixtwo/lr.caC (Ljava/nio/ByteBuffer;Ljava/lang/String;)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 08f: astore 12
      // 091: aload 10
      // 093: invokestatic com/mojang/blaze3d/systems/RenderSystem.getSequentialBuffer (Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lcom/mojang/blaze3d/systems/RenderSystem$class_5590;
      // 096: iload 11
      // 098: invokevirtual com/mojang/blaze3d/systems/RenderSystem$class_5590.method_68274 (I)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 09b: astore 13
      // 09d: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 0a0: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createCommandEncoder ()Lcom/mojang/blaze3d/systems/CommandEncoder; 1
      // 0a5: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/lF.cgf ()Ljava/lang/String;, ()Ljava/lang/String; ]
      // 0aa: aload 7
      // 0ac: invokestatic java/util/OptionalInt.empty ()Ljava/util/OptionalInt;
      // 0af: aload 8
      // 0b1: invokestatic java/util/OptionalDouble.empty ()Ljava/util/OptionalDouble;
      // 0b4: invokeinterface com/mojang/blaze3d/systems/CommandEncoder.createRenderPass (Ljava/util/function/Supplier;Lcom/mojang/blaze3d/textures/GpuTextureView;Ljava/util/OptionalInt;Lcom/mojang/blaze3d/textures/GpuTextureView;Ljava/util/OptionalDouble;)Lcom/mojang/blaze3d/systems/RenderPass; 6
      // 0b9: astore 14
      // 0bb: aload 14
      // 0bd: aload 1
      // 0be: invokeinterface com/mojang/blaze3d/systems/RenderPass.setPipeline (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)V 2
      // 0c3: aload 6
      // 0c5: ifnonnull 109
      // 0c8: aload 3
      // 0c9: ifnull 0e2
      // 0cc: goto 0d3
      // 0cf: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d2: athrow
      // 0d3: aload 3
      // 0d4: aload 14
      // 0d6: invokeinterface java/util/function/Consumer.accept (Ljava/lang/Object;)V 2
      // 0db: goto 0e2
      // 0de: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e1: athrow
      // 0e2: aload 14
      // 0e4: bipush 0
      // 0e5: aload 12
      // 0e7: invokeinterface com/mojang/blaze3d/systems/RenderPass.setVertexBuffer (ILcom/mojang/blaze3d/buffers/GpuBuffer;)V 3
      // 0ec: aload 14
      // 0ee: aload 13
      // 0f0: aload 10
      // 0f2: invokestatic com/mojang/blaze3d/systems/RenderSystem.getSequentialBuffer (Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lcom/mojang/blaze3d/systems/RenderSystem$class_5590;
      // 0f5: invokevirtual com/mojang/blaze3d/systems/RenderSystem$class_5590.method_31924 ()Lcom/mojang/blaze3d/vertex/VertexFormat$class_5595;
      // 0f8: invokeinterface com/mojang/blaze3d/systems/RenderPass.setIndexBuffer (Lcom/mojang/blaze3d/buffers/GpuBuffer;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5595;)V 3
      // 0fd: aload 14
      // 0ff: bipush 0
      // 100: bipush 0
      // 101: iload 11
      // 103: bipush 1
      // 104: invokeinterface com/mojang/blaze3d/systems/RenderPass.drawIndexed (IIII)V 5
      // 109: aload 14
      // 10b: aload 6
      // 10d: ifnonnull 11c
      // 110: ifnull 14d
      // 113: goto 11a
      // 116: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 119: athrow
      // 11a: aload 14
      // 11c: invokeinterface com/mojang/blaze3d/systems/RenderPass.close ()V 1
      // 121: goto 14d
      // 124: astore 15
      // 126: aload 14
      // 128: aload 6
      // 12a: ifnonnull 139
      // 12d: ifnull 14a
      // 130: goto 137
      // 133: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 136: athrow
      // 137: aload 14
      // 139: invokeinterface com/mojang/blaze3d/systems/RenderPass.close ()V 1
      // 13e: goto 14a
      // 141: astore 16
      // 143: aload 15
      // 145: aload 16
      // 147: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 14a: aload 15
      // 14c: athrow
      // 14d: return
   }

   private static String cgj(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 31442;
      if (iimvN[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])LJNca.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               LJNca.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/lF", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = maWGS[var5].getBytes("ISO-8859-1");
         iimvN[var5] = cgi(((Cipher)var4[0]).doFinal(var9));
      }

      return iimvN[var5];
   }

   private static Object cgk(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cgj(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static void cfL(RenderPipeline var0, class_9801 var1, int var2, Consumer<RenderPass> var3) {
      cfN(lB.rMraa, var0, var1, var2, var3);
   }

   private static void cfU(class_276 param0, lB param1, RenderPipeline param2, class_9801 param3, Consumer<RenderPass> param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lF.uvZFB J
      // 003: ldc2_w 2494535929377
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/lC.cfk ()[Ljava/lang/String;
      // 00c: aload 2
      // 00d: invokestatic sixtwo/jo.bEr (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 010: astore 2
      // 011: astore 7
      // 013: aload 2
      // 014: ifnull 02e
      // 017: aload 0
      // 018: aload 7
      // 01a: ifnonnull 030
      // 01d: goto 024
      // 020: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 023: athrow
      // 024: ifnonnull 02f
      // 027: goto 02e
      // 02a: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 02d: athrow
      // 02e: return
      // 02f: aload 0
      // 030: invokevirtual net/minecraft/class_276.method_71639 ()Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 033: astore 8
      // 035: aload 8
      // 037: aload 7
      // 039: ifnonnull 04b
      // 03c: ifnonnull 047
      // 03f: goto 046
      // 042: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 045: athrow
      // 046: return
      // 047: aload 0
      // 048: invokevirtual net/minecraft/class_276.method_71640 ()Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 04b: astore 9
      // 04d: aload 3
      // 04e: invokevirtual net/minecraft/class_9801.method_60822 ()Lnet/minecraft/class_9801$class_4574;
      // 051: astore 10
      // 053: aload 10
      // 055: invokevirtual net/minecraft/class_9801$class_4574.comp_752 ()Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 058: astore 11
      // 05a: aload 10
      // 05c: invokevirtual net/minecraft/class_9801$class_4574.comp_750 ()I
      // 05f: istore 12
      // 061: aload 11
      // 063: iload 12
      // 065: invokevirtual com/mojang/blaze3d/vertex/VertexFormat$class_5596.method_31973 (I)I
      // 068: istore 13
      // 06a: aload 3
      // 06b: invokevirtual net/minecraft/class_9801.method_60818 ()Ljava/nio/ByteBuffer;
      // 06e: sipush 4092
      // 071: ldc2_w 1688240817862624957
      // 074: lload 5
      // 076: lxor
      // 077: invokedynamic o (IJ)Ljava/lang/String; bsm=sixtwo/lF.cgl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 07c: invokestatic sixtwo/lr.caC (Ljava/nio/ByteBuffer;Ljava/lang/String;)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 07f: astore 14
      // 081: aload 11
      // 083: invokestatic com/mojang/blaze3d/systems/RenderSystem.getSequentialBuffer (Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lcom/mojang/blaze3d/systems/RenderSystem$class_5590;
      // 086: iload 13
      // 088: invokevirtual com/mojang/blaze3d/systems/RenderSystem$class_5590.method_68274 (I)Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 08b: astore 15
      // 08d: aload 1
      // 08e: invokestatic sixtwo/lF.cga (Lsixtwo/lB;)Lcom/mojang/blaze3d/buffers/GpuBufferSlice;
      // 091: astore 16
      // 093: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 096: invokevirtual java/lang/ThreadLocal.get ()Ljava/lang/Object;
      // 099: checkcast sixtwo/lB
      // 09c: astore 17
      // 09e: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 0a1: aload 1
      // 0a2: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 0a5: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 0a8: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createCommandEncoder ()Lcom/mojang/blaze3d/systems/CommandEncoder; 1
      // 0ad: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/lF.cgc ()Ljava/lang/String;, ()Ljava/lang/String; ]
      // 0b2: aload 8
      // 0b4: invokestatic java/util/OptionalInt.empty ()Ljava/util/OptionalInt;
      // 0b7: aload 9
      // 0b9: invokestatic java/util/OptionalDouble.empty ()Ljava/util/OptionalDouble;
      // 0bc: invokeinterface com/mojang/blaze3d/systems/CommandEncoder.createRenderPass (Ljava/util/function/Supplier;Lcom/mojang/blaze3d/textures/GpuTextureView;Ljava/util/OptionalInt;Lcom/mojang/blaze3d/textures/GpuTextureView;Ljava/util/OptionalDouble;)Lcom/mojang/blaze3d/systems/RenderPass; 6
      // 0c1: astore 18
      // 0c3: aload 18
      // 0c5: aload 2
      // 0c6: invokeinterface com/mojang/blaze3d/systems/RenderPass.setPipeline (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)V 2
      // 0cb: aload 18
      // 0cd: aload 16
      // 0cf: invokestatic sixtwo/lF.cgb (Lcom/mojang/blaze3d/systems/RenderPass;Lcom/mojang/blaze3d/buffers/GpuBufferSlice;)V
      // 0d2: aload 18
      // 0d4: invokestatic sixtwo/jG.bHS (Lcom/mojang/blaze3d/systems/RenderPass;)V
      // 0d7: aload 7
      // 0d9: ifnonnull 11f
      // 0dc: aload 4
      // 0de: ifnull 0f8
      // 0e1: goto 0e8
      // 0e4: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e7: athrow
      // 0e8: aload 4
      // 0ea: aload 18
      // 0ec: invokeinterface java/util/function/Consumer.accept (Ljava/lang/Object;)V 2
      // 0f1: goto 0f8
      // 0f4: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f7: athrow
      // 0f8: aload 18
      // 0fa: bipush 0
      // 0fb: aload 14
      // 0fd: invokeinterface com/mojang/blaze3d/systems/RenderPass.setVertexBuffer (ILcom/mojang/blaze3d/buffers/GpuBuffer;)V 3
      // 102: aload 18
      // 104: aload 15
      // 106: aload 11
      // 108: invokestatic com/mojang/blaze3d/systems/RenderSystem.getSequentialBuffer (Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lcom/mojang/blaze3d/systems/RenderSystem$class_5590;
      // 10b: invokevirtual com/mojang/blaze3d/systems/RenderSystem$class_5590.method_31924 ()Lcom/mojang/blaze3d/vertex/VertexFormat$class_5595;
      // 10e: invokeinterface com/mojang/blaze3d/systems/RenderPass.setIndexBuffer (Lcom/mojang/blaze3d/buffers/GpuBuffer;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5595;)V 3
      // 113: aload 18
      // 115: bipush 0
      // 116: bipush 0
      // 117: iload 13
      // 119: bipush 1
      // 11a: invokeinterface com/mojang/blaze3d/systems/RenderPass.drawIndexed (IIII)V 5
      // 11f: aload 7
      // 121: ifnonnull 16f
      // 124: aload 18
      // 126: ifnull 167
      // 129: goto 130
      // 12c: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 12f: athrow
      // 130: aload 18
      // 132: invokeinterface com/mojang/blaze3d/systems/RenderPass.close ()V 1
      // 137: goto 167
      // 13a: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 13d: athrow
      // 13e: astore 19
      // 140: aload 18
      // 142: aload 7
      // 144: ifnonnull 153
      // 147: ifnull 164
      // 14a: goto 151
      // 14d: invokestatic sixtwo/lF.cgh (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 150: athrow
      // 151: aload 18
      // 153: invokeinterface com/mojang/blaze3d/systems/RenderPass.close ()V 1
      // 158: goto 164
      // 15b: astore 20
      // 15d: aload 19
      // 15f: aload 20
      // 161: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 164: aload 19
      // 166: athrow
      // 167: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 16a: aload 17
      // 16c: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 16f: goto 17f
      // 172: astore 21
      // 174: getstatic sixtwo/lF.ReACR Ljava/lang/ThreadLocal;
      // 177: aload 17
      // 179: invokevirtual java/lang/ThreadLocal.set (Ljava/lang/Object;)V
      // 17c: aload 21
      // 17e: athrow
      // 17f: return
   }

   private static Throwable cgh(Throwable var0) {
      return var0;
   }

   public static void cfG(RenderPipeline var0, class_9801 var1) {
      cfN(lB.dlmOV, var0, var1, 4, null);
   }

   public static void cfH(class_276 var0, lB var1, RenderPipeline var2, class_9801 var3, Consumer<RenderPass> var4) {
      cfU(var0, var1, var2, var3, var4);
   }

   public static void cfM(RenderPipeline var0, class_9801 var1, int var2, Consumer<RenderPass> var3) {
      cfN(lB.dlmOV, var0, var1, var2, var3);
   }

   private static CallSite cgl(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cgk".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lF" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String cgi(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   public static void cfK(RenderPipeline var0, class_9801 var1, int var2, Consumer<RenderPass> var3) {
      cfN(lB.xCeuB, var0, var1, var2, var3);
   }

   public static void cfX(RenderPipeline var0, class_9801 var1) {
      cfR(var0, var1, null);
   }

   public static void cfZ() {
      lr.caB();
   }

   public static lB cfY() {
      return ReACR.get();
   }
}
