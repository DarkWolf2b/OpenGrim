package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.pipeline.RenderPipeline.Builder;
import com.mojang.blaze3d.pipeline.RenderPipeline.Snippet;
import com.mojang.blaze3d.vertex.VertexFormat;
import com.mojang.blaze3d.vertex.VertexFormat.class_5596;
import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import java.util.Map.Entry;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10149;
import net.minecraft.class_10789;

public final class kU {
   private final Builder rlOvj;
   private lh LDjgD = lh.GpGUc;
   private static final long nALnU = gb.aYR(-7963621086618303205L, -3003222976746946721L, MethodHandles.lookup().lookupClass()).a(139296445087519L);
   private static final String Xiiwp;

   private kU(String var1, Snippet... var2) {
      this.rlOvj = RenderPipeline.builder(var2).withLocation(var1);
   }

   static {
      long var0 = nALnU ^ 29058645514418L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("l├Č├Ť\u0083├Ť├żH\u0019\u0098\u0091x\u0004\u0092├í├Ő&┬ż\u0099Y\u001f┬│PI┬ż".getBytes("ISO-8859-1"));
      String var5 = bWk(var4).intern();
      byte var10001 = -1;
      Xiiwp = var5;
   }

   public kU bWd(jN var1) {
      kT.bVS(this.rlOvj, var1);
      return this;
   }

   public kU bVY(VertexFormat var1, class_5596 var2) {
      this.rlOvj.withVertexFormat(var1, var2);
      return this;
   }

   public static kU bVX(String var0, Snippet... var1) {
      return new kU(var0, var1);
   }

   public RenderPipeline bWg() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kU.nALnU J
      // 03: ldc2_w 98020833436037
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kR.bVy ()Z
      // 0b: aload 0
      // 0c: getfield sixtwo/kU.rlOvj Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 0f: invokestatic sixtwo/kT.bVR (Ljava/lang/Object;)Lsixtwo/jN;
      // 12: astore 4
      // 14: istore 3
      // 15: aload 4
      // 17: ifnull 74
      // 1a: aload 0
      // 1b: getfield sixtwo/kU.rlOvj Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 1e: checkcast mixin/accessors/RenderPipelineBuilderAccessor
      // 21: astore 5
      // 23: aload 5
      // 25: invokeinterface mixin/accessors/RenderPipelineBuilderAccessor.getVertexShader ()Ljava/util/Optional; 1
      // 2a: invokevirtual java/util/Optional.isEmpty ()Z
      // 2d: iload 3
      // 2e: ifne 64
      // 31: ifeq 4f
      // 34: goto 3b
      // 37: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 3a: athrow
      // 3b: aload 5
      // 3d: getstatic sixtwo/kT.dmDCF Lnet/minecraft/class_2960;
      // 40: invokestatic java/util/Optional.of (Ljava/lang/Object;)Ljava/util/Optional;
      // 43: invokeinterface mixin/accessors/RenderPipelineBuilderAccessor.setVertexShader (Ljava/util/Optional;)V 2
      // 48: goto 4f
      // 4b: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 4e: athrow
      // 4f: aload 5
      // 51: iload 3
      // 52: ifne 69
      // 55: invokeinterface mixin/accessors/RenderPipelineBuilderAccessor.getFragmentShader ()Ljava/util/Optional; 1
      // 5a: invokevirtual java/util/Optional.isEmpty ()Z
      // 5d: goto 64
      // 60: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 63: athrow
      // 64: ifeq 74
      // 67: aload 5
      // 69: getstatic sixtwo/kT.wNJTB Lnet/minecraft/class_2960;
      // 6c: invokestatic java/util/Optional.of (Ljava/lang/Object;)Ljava/util/Optional;
      // 6f: invokeinterface mixin/accessors/RenderPipelineBuilderAccessor.setFragmentShader (Ljava/util/Optional;)V 2
      // 74: aload 0
      // 75: getfield sixtwo/kU.rlOvj Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 78: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.build ()Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 7b: astore 5
      // 7d: aload 5
      // 7f: aload 0
      // 80: getfield sixtwo/kU.LDjgD Lsixtwo/lh;
      // 83: invokestatic sixtwo/kV.bWl (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lsixtwo/lh;)V
      // 86: aload 0
      // 87: aload 5
      // 89: invokevirtual sixtwo/kU.bWh (Lcom/mojang/blaze3d/pipeline/RenderPipeline;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 8c: astore 6
      // 8e: iload 3
      // 8f: ifne ac
      // 92: aload 4
      // 94: ifnull cb
      // 97: goto 9e
      // 9a: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 9d: athrow
      // 9e: aload 5
      // a0: aload 4
      // a2: invokestatic sixtwo/kT.bVU (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lsixtwo/jN;)V
      // a5: goto ac
      // a8: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // ab: athrow
      // ac: aload 6
      // ae: iload 3
      // af: ifne be
      // b2: ifnull c3
      // b5: goto bc
      // b8: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // bb: athrow
      // bc: aload 6
      // be: aload 4
      // c0: invokestatic sixtwo/kT.bVU (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lsixtwo/jN;)V
      // c3: aload 0
      // c4: getfield sixtwo/kU.rlOvj Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // c7: aconst_null
      // c8: invokestatic sixtwo/kT.bVS (Ljava/lang/Object;Lsixtwo/jN;)V
      // cb: aload 5
      // cd: areturn
   }

   public kU bWf(String var1) {
      this.rlOvj.withSampler(var1);
      return this;
   }

   public kU bVZ(String var1) {
      this.rlOvj.withVertexShader(var1);
      return this;
   }

   public kU bWc(kS param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kU.nALnU J
      // 03: ldc2_w 4620781340103
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kR.bVx ()Z
      // 0b: aload 0
      // 0c: aload 1
      // 0d: invokevirtual sixtwo/kS.bVJ ()Lsixtwo/lh;
      // 10: putfield sixtwo/kU.LDjgD Lsixtwo/lh;
      // 13: istore 4
      // 15: iload 4
      // 17: ifeq 48
      // 1a: aload 1
      // 1b: invokevirtual sixtwo/kS.bVJ ()Lsixtwo/lh;
      // 1e: ifnull 39
      // 21: goto 28
      // 24: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 27: athrow
      // 28: aload 1
      // 29: invokevirtual sixtwo/kS.bVJ ()Lsixtwo/lh;
      // 2c: getstatic sixtwo/lh.RpYeK Lsixtwo/lh;
      // 2f: if_acmpne 4d
      // 32: goto 39
      // 35: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 38: athrow
      // 39: aload 0
      // 3a: getfield sixtwo/kU.rlOvj Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 3d: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withoutBlend ()Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 40: pop
      // 41: goto 48
      // 44: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 47: athrow
      // 48: iload 4
      // 4a: ifne 63
      // 4d: aload 0
      // 4e: getfield sixtwo/kU.rlOvj Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 51: aload 1
      // 52: invokevirtual sixtwo/kS.bVJ ()Lsixtwo/lh;
      // 55: invokevirtual sixtwo/lh.bXZ ()Lcom/mojang/blaze3d/pipeline/BlendFunction;
      // 58: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withBlend (Lcom/mojang/blaze3d/pipeline/BlendFunction;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 5b: pop
      // 5c: goto 63
      // 5f: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 62: athrow
      // 63: aload 0
      // 64: getfield sixtwo/kU.rlOvj Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 67: aload 1
      // 68: invokevirtual sixtwo/kS.bVK ()Lcom/mojang/blaze3d/platform/DepthTestFunction;
      // 6b: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withDepthTestFunction (Lcom/mojang/blaze3d/platform/DepthTestFunction;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 6e: pop
      // 6f: aload 0
      // 70: getfield sixtwo/kU.rlOvj Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 73: aload 1
      // 74: invokevirtual sixtwo/kS.bVL ()Z
      // 77: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withDepthWrite (Z)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 7a: pop
      // 7b: aload 0
      // 7c: getfield sixtwo/kU.rlOvj Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 7f: aload 1
      // 80: invokevirtual sixtwo/kS.bVM ()Z
      // 83: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withCull (Z)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 86: pop
      // 87: aload 0
      // 88: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 8b: ifnonnull a6
      // 8e: iload 4
      // 90: ifeq a2
      // 93: goto 9a
      // 96: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 99: athrow
      // 9a: bipush 0
      // 9b: goto a3
      // 9e: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // a1: athrow
      // a2: bipush 1
      // a3: invokestatic sixtwo/kR.bVw (Z)V
      // a6: areturn
   }

   public kU bWa(String var1) {
      this.rlOvj.withFragmentShader(var1);
      return this;
   }

   public kU bWe(String var1, class_10789 var2) {
      this.rlOvj.withUniform(var1, var2);
      return this;
   }

   public kU bWb(String var1) {
      return this.bVZ(var1).bWa(var1);
   }

   private static String bWk(byte[] var0) {
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

   private static NumberFormatException bWj(NumberFormatException var0) {
      return var0;
   }

   private void bWi(class_10149 var1, Builder var2) {
      long var3 = nALnU ^ 27684650976756L;
      boolean var10000 = kR.bVy();
      Iterator var6 = var1.comp_3104().iterator();
      boolean var5 = var10000;

      while (var6.hasNext()) {
         String var7 = (String)var6.next();

         try {
            var2.withShaderDefine(var7);
            if (!var5 && !var5) {
               continue;
            }
            break;
         } catch (NumberFormatException var13) {
            throw bWj(var13);
         }
      }

      for (Entry var14 : var1.comp_3103().entrySet()) {
         String var8 = (String)var14.getValue();

         try {
            var2.withShaderDefine((String)var14.getKey(), Integer.parseInt(var8));
         } catch (NumberFormatException var12) {
            try {
               var2.withShaderDefine((String)var14.getKey(), Float.parseFloat(var8));
            } catch (NumberFormatException var11) {
               var2.withShaderDefine((String)var14.getKey());
            }
         }

         if (var5) {
            break;
         }
      }
   }

   private RenderPipeline bWh(RenderPipeline param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kU.nALnU J
      // 003: ldc2_w 122960566294263
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/kR.bVy ()Z
      // 00b: istore 4
      // 00d: aload 0
      // 00e: getfield sixtwo/kU.LDjgD Lsixtwo/lh;
      // 011: getstatic sixtwo/lh.GpGUc Lsixtwo/lh;
      // 014: if_acmpeq 01d
      // 017: aconst_null
      // 018: areturn
      // 019: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 01c: athrow
      // 01d: bipush 0
      // 01e: anewarray 6
      // 021: invokestatic com/mojang/blaze3d/pipeline/RenderPipeline.builder ([Lcom/mojang/blaze3d/pipeline/RenderPipeline$Snippet;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 024: aload 1
      // 025: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getLocation ()Lnet/minecraft/class_2960;
      // 028: getstatic sixtwo/kU.Xiiwp Ljava/lang/String;
      // 02b: invokevirtual net/minecraft/class_2960.method_48331 (Ljava/lang/String;)Lnet/minecraft/class_2960;
      // 02e: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withLocation (Lnet/minecraft/class_2960;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 031: aload 1
      // 032: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getVertexShader ()Lnet/minecraft/class_2960;
      // 035: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withVertexShader (Lnet/minecraft/class_2960;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 038: aload 1
      // 039: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getFragmentShader ()Lnet/minecraft/class_2960;
      // 03c: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withFragmentShader (Lnet/minecraft/class_2960;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 03f: getstatic sixtwo/lh.YrFUh Lsixtwo/lh;
      // 042: invokevirtual sixtwo/lh.bXZ ()Lcom/mojang/blaze3d/pipeline/BlendFunction;
      // 045: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withBlend (Lcom/mojang/blaze3d/pipeline/BlendFunction;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 048: aload 1
      // 049: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getDepthTestFunction ()Lcom/mojang/blaze3d/platform/DepthTestFunction;
      // 04c: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withDepthTestFunction (Lcom/mojang/blaze3d/platform/DepthTestFunction;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 04f: aload 1
      // 050: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.isWriteDepth ()Z
      // 053: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withDepthWrite (Z)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 056: aload 1
      // 057: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getPolygonMode ()Lcom/mojang/blaze3d/platform/PolygonMode;
      // 05a: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withPolygonMode (Lcom/mojang/blaze3d/platform/PolygonMode;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 05d: aload 1
      // 05e: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.isCull ()Z
      // 061: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withCull (Z)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 064: aload 1
      // 065: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getVertexFormat ()Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 068: aload 1
      // 069: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getVertexFormatMode ()Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 06c: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withVertexFormat (Lcom/mojang/blaze3d/vertex/VertexFormat;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 06f: astore 5
      // 071: aload 0
      // 072: aload 1
      // 073: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getShaderDefines ()Lnet/minecraft/class_10149;
      // 076: aload 5
      // 078: invokevirtual sixtwo/kU.bWi (Lnet/minecraft/class_10149;Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;)V
      // 07b: aload 1
      // 07c: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getSamplers ()Ljava/util/List;
      // 07f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 084: astore 6
      // 086: aload 6
      // 088: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 08d: ifeq 0b5
      // 090: aload 6
      // 092: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 097: checkcast java/lang/String
      // 09a: astore 7
      // 09c: aload 5
      // 09e: aload 7
      // 0a0: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withSampler (Ljava/lang/String;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 0a3: pop
      // 0a4: iload 4
      // 0a6: ifne 0c0
      // 0a9: iload 4
      // 0ab: ifeq 086
      // 0ae: goto 0b5
      // 0b1: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0b4: athrow
      // 0b5: aload 1
      // 0b6: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline.getUniforms ()Ljava/util/List;
      // 0b9: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0be: astore 6
      // 0c0: aload 6
      // 0c2: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0c7: ifeq 128
      // 0ca: aload 6
      // 0cc: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0d1: checkcast com/mojang/blaze3d/pipeline/RenderPipeline$UniformDescription
      // 0d4: astore 7
      // 0d6: aload 7
      // 0d8: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$UniformDescription.textureFormat ()Lcom/mojang/blaze3d/textures/TextureFormat;
      // 0db: astore 8
      // 0dd: iload 4
      // 0df: ifne 105
      // 0e2: aload 8
      // 0e4: ifnonnull 10a
      // 0e7: goto 0ee
      // 0ea: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0ed: athrow
      // 0ee: aload 5
      // 0f0: aload 7
      // 0f2: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$UniformDescription.name ()Ljava/lang/String;
      // 0f5: aload 7
      // 0f7: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$UniformDescription.type ()Lnet/minecraft/class_10789;
      // 0fa: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withUniform (Ljava/lang/String;Lnet/minecraft/class_10789;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 0fd: pop
      // 0fe: goto 105
      // 101: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 104: athrow
      // 105: iload 4
      // 107: ifeq 123
      // 10a: aload 5
      // 10c: aload 7
      // 10e: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$UniformDescription.name ()Ljava/lang/String;
      // 111: aload 7
      // 113: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$UniformDescription.type ()Lnet/minecraft/class_10789;
      // 116: aload 8
      // 118: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.withUniform (Ljava/lang/String;Lnet/minecraft/class_10789;Lcom/mojang/blaze3d/textures/TextureFormat;)Lcom/mojang/blaze3d/pipeline/RenderPipeline$Builder;
      // 11b: pop
      // 11c: goto 123
      // 11f: invokestatic sixtwo/kU.bWj (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 122: athrow
      // 123: iload 4
      // 125: ifeq 0c0
      // 128: aload 5
      // 12a: invokevirtual com/mojang/blaze3d/pipeline/RenderPipeline$Builder.build ()Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 12d: astore 6
      // 12f: aload 6
      // 131: getstatic sixtwo/lh.YrFUh Lsixtwo/lh;
      // 134: invokestatic sixtwo/kV.bWl (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lsixtwo/lh;)V
      // 137: aload 1
      // 138: aload 6
      // 13a: invokestatic sixtwo/kV.bWm (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lcom/mojang/blaze3d/pipeline/RenderPipeline;)V
      // 13d: aload 6
      // 13f: areturn
   }
}
