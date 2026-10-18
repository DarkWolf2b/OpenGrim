package sixtwo;

import com.mojang.blaze3d.opengl.GlStateManager;
import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.textures.GpuTexture;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.lang.reflect.Constructor;
import java.nio.ByteBuffer;
import java.nio.FloatBuffer;
import java.util.Collections;
import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.Map;
import java.util.Set;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10867;
import net.minecraft.class_5944;
import org.joml.Matrix4f;
import org.lwjgl.opengl.GL11;
import org.lwjgl.opengl.GL20;
import org.lwjgl.system.MemoryStack;

public final class lR implements lU {
   private static final Constructor<class_5944> JlBvN;
   private final Set<class_5944> hyzPD = Collections.newSetFromMap(new IdentityHashMap<>());
   private int APeps = -1;
   private int jQsIC = -1;
   private static String[] xWJpb;
   private static final long PtOYq = gb.aYR(-2049911285825158433L, 8345879564128413148L, MethodHandles.lookup().lookupClass()).a(16376725623122L);
   private static final String[] gJQGB;
   private static final String[] SQTYL;
   private static final Map HvppV = new HashMap(13);
   private static final long[] NaCxN;
   private static final Integer[] kvEby;
   private static final Map YWftv;

   @Override
   public void unbindProgram() {
      GL20.glUseProgram(0);
   }

   @Override
   public void copyDepthTexture(GpuTexture var1, GpuTexture var2, int var3, int var4) {
      this.copyTextureToTexture(var1, var2, 0, 0, 0, 0, 0, var3, var4);
   }

   @Override
   public lW createProgram(VertexFormat param1, lV... param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lR.PtOYq J
      // 03: ldc2_w 76747433930209
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glCreateProgram ()I
      // 0b: istore 6
      // 0d: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 10: aload 1
      // 11: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getElementAttributeNames ()Ljava/util/List;
      // 14: astore 7
      // 16: bipush 0
      // 17: istore 8
      // 19: astore 5
      // 1b: iload 8
      // 1d: aload 7
      // 1f: invokeinterface java/util/List.size ()I 1
      // 24: if_icmpge 42
      // 27: iload 6
      // 29: iload 8
      // 2b: aload 7
      // 2d: iload 8
      // 2f: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 34: checkcast java/lang/CharSequence
      // 37: invokestatic com/mojang/blaze3d/opengl/GlStateManager._glBindAttribLocation (IILjava/lang/CharSequence;)V
      // 3a: iinc 8 1
      // 3d: aload 5
      // 3f: ifnonnull 1b
      // 42: aload 2
      // 43: astore 8
      // 45: aload 8
      // 47: arraylength
      // 48: istore 9
      // 4a: bipush 0
      // 4b: istore 10
      // 4d: iload 10
      // 4f: iload 9
      // 51: if_icmpge 7c
      // 54: aload 8
      // 56: iload 10
      // 58: aaload
      // 59: astore 11
      // 5b: iload 6
      // 5d: aload 11
      // 5f: invokestatic sixtwo/lR.ciA (Lsixtwo/lV;)Lsixtwo/lR$uE;
      // 62: getfield sixtwo/lR$uE.id I
      // 65: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glAttachShader (II)V
      // 68: iinc 10 1
      // 6b: aload 5
      // 6d: ifnull 81
      // 70: aload 5
      // 72: ifnonnull 4d
      // 75: goto 7c
      // 78: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 7b: athrow
      // 7c: iload 6
      // 7e: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glLinkProgram (I)V
      // 81: iload 6
      // 83: sipush 24650
      // 86: ldc2_w 6061877197749888386
      // 89: lload 3
      // 8a: lxor
      // 8b: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 90: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glGetProgrami (II)I
      // 93: bipush 1
      // 94: aload 5
      // 96: ifnull b9
      // 99: if_icmpeq cd
      // 9c: goto a3
      // 9f: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // a2: athrow
      // a3: iload 6
      // a5: sipush 15240
      // a8: ldc2_w 5615011667381288518
      // ab: lload 3
      // ac: lxor
      // ad: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // b2: goto b9
      // b5: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // b8: athrow
      // b9: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glGetProgramInfoLog (II)Ljava/lang/String;
      // bc: astore 8
      // be: iload 6
      // c0: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glDeleteProgram (I)V
      // c3: new java/lang/RuntimeException
      // c6: dup
      // c7: aload 8
      // c9: invokespecial java/lang/RuntimeException.<init> (Ljava/lang/String;)V
      // cc: athrow
      // cd: new sixtwo/lR$uF
      // d0: dup
      // d1: iload 6
      // d3: invokespecial sixtwo/lR$uF.<init> (I)V
      // d6: areturn
   }

   @Override
   public int uniformLocation(lW var1, String var2) {
      return GlStateManager._glGetUniformLocation(ciB(var1).id, var2);
   }

   @Override
   public void setLineSmoothing(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lR.PtOYq J
      // 03: ldc2_w 1011555438188
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: iload 1
      // 0e: aload 4
      // 10: ifnull 6a
      // 13: ifeq 56
      // 16: goto 1d
      // 19: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: sipush 25942
      // 20: ldc2_w 2721326420522713859
      // 23: lload 2
      // 24: lxor
      // 25: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a: invokestatic org/lwjgl/opengl/GL11.glEnable (I)V
      // 2d: sipush 15851
      // 30: ldc2_w 5447253041639758780
      // 33: lload 2
      // 34: lxor
      // 35: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3a: sipush 23628
      // 3d: ldc2_w 5739966877691214340
      // 40: lload 2
      // 41: lxor
      // 42: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 47: invokestatic org/lwjgl/opengl/GL11.glHint (II)V
      // 4a: aload 4
      // 4c: ifnonnull 6d
      // 4f: goto 56
      // 52: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 55: athrow
      // 56: sipush 2523
      // 59: ldc2_w 5781912354061758357
      // 5c: lload 2
      // 5d: lxor
      // 5e: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 63: goto 6a
      // 66: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 69: athrow
      // 6a: invokestatic org/lwjgl/opengl/GL11.glDisable (I)V
      // 6d: return
   }

   @Override
   public void generateMipmaps(GpuTexture param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lR.PtOYq J
      // 03: ldc2_w 124521170171403
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnull 1e
      // 13: ifnull 56
      // 16: goto 1d
      // 19: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: aload 1
      // 1e: invokevirtual com/mojang/blaze3d/textures/GpuTexture.getMipLevels ()I
      // 21: aload 4
      // 23: ifnull 48
      // 26: bipush 1
      // 27: if_icmple 56
      // 2a: goto 31
      // 2d: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 30: athrow
      // 31: aload 1
      // 32: aload 4
      // 34: ifnull 4c
      // 37: goto 3e
      // 3a: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3d: athrow
      // 3e: instanceof net/minecraft/class_10868
      // 41: goto 48
      // 44: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 47: athrow
      // 48: ifeq 56
      // 4b: aload 1
      // 4c: checkcast net/minecraft/class_10868
      // 4f: astore 5
      // 51: aload 4
      // 53: ifnonnull 5b
      // 56: return
      // 57: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 5a: athrow
      // 5b: invokestatic com/mojang/blaze3d/systems/RenderSystem.assertOnRenderThread ()V
      // 5e: sipush 27106
      // 61: ldc2_w 7385483807210026967
      // 64: lload 2
      // 65: lxor
      // 66: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 6b: invokestatic org/lwjgl/opengl/GL11.glGetInteger (I)I
      // 6e: istore 6
      // 70: sipush 13685
      // 73: ldc2_w 8559676763691314003
      // 76: lload 2
      // 77: lxor
      // 78: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 7d: aload 5
      // 7f: invokevirtual net/minecraft/class_10868.method_68427 ()I
      // 82: invokestatic org/lwjgl/opengl/GL11.glBindTexture (II)V
      // 85: sipush 19553
      // 88: ldc2_w 2859429282513687119
      // 8b: lload 2
      // 8c: lxor
      // 8d: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 92: invokestatic org/lwjgl/opengl/GL30.glGenerateMipmap (I)V
      // 95: sipush 19553
      // 98: ldc2_w 2859429282513687119
      // 9b: lload 2
      // 9c: lxor
      // 9d: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // a2: iload 6
      // a4: invokestatic org/lwjgl/opengl/GL11.glBindTexture (II)V
      // a7: goto c1
      // aa: astore 7
      // ac: sipush 19553
      // af: ldc2_w 2859429282513687119
      // b2: lload 2
      // b3: lxor
      // b4: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // b9: iload 6
      // bb: invokestatic org/lwjgl/opengl/GL11.glBindTexture (II)V
      // be: aload 7
      // c0: athrow
      // c1: return
   }

   @Override
   public int nativeTextureId(GpuTexture param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lR.PtOYq J
      // 03: ldc2_w 48376042705178
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnull 28
      // 13: instanceof net/minecraft/class_10868
      // 16: ifeq 35
      // 19: goto 20
      // 1c: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: aload 1
      // 21: goto 28
      // 24: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 27: athrow
      // 28: checkcast net/minecraft/class_10868
      // 2b: astore 5
      // 2d: aload 5
      // 2f: invokevirtual net/minecraft/class_10868.method_68427 ()I
      // 32: goto 36
      // 35: bipush -1
      // 36: ireturn
   }

   @Override
   public void bindProgram(lW var1) {
      GL20.glUseProgram(ciB(var1).id);
   }

   @Override
   public void clearColorBuffer() {
      long var1 = PtOYq ^ 123283090159381L;
      GL11.glClear(ciN<"s">(11845, 1170548756785574256L ^ var1));
   }

   static {
      String[] var10000 = new String[3];
      long var11 = PtOYq ^ 132436637206836L;
      ciE(var10000);
      Cipher var13;
      Cipher var25 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var25.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[6];
      int var18 = 0;
      String var17 = "gþ¼C\u008b²mzÒ¶<\n=zA\r4R7¯4ô\u0080\u00840\u0081\u009d\u009dk>7f\u009b¼FB\u0002×\u008aj~:é¦ß_\u0088\u0093k_\u000b\u0014ÓÍ\nh®\u008e¨ÃI¦\\\u00010³\u0003<\u009a%\u008c¡C\u0007C\"2\u001d\u0002Q\u008cîÑR\u001cQ;&\u0019Q2\u0080È\u0093lð¥Kí\u0089dË\u0017é¼ÓN»|\u0014¡§(HÀ\u0090\u0015¡ªÊWÄê[úÚCïTÕÿùQëù\u0019«^9K>\u0090\u0006³æ+öÂû \u009f\u008cÃàz\u0089\u0004Å!\u00ad\n\u0000YÁ=Øvú&]ndÓ²34\u001b\u0081v¢pQ\u0005\u008e´ÛH{ïL¦Àÿ?`Æ@\u0088\u00ad\u001ei~ÿ\u000fC×=¡É\u009f:»ÿoO\u0007\u009b\u0010\u000eÃ,W,íæ©\\\t\u0083QÔ×R\u00ad&\u0088\u001aÐb\u008dÛâq\b\u000f*\u0085f§&²n\u0082ËÏ\n©ÁË";
      int var19 = "gþ¼C\u008b²mzÒ¶<\n=zA\r4R7¯4ô\u0080\u00840\u0081\u009d\u009dk>7f\u009b¼FB\u0002×\u008aj~:é¦ß_\u0088\u0093k_\u000b\u0014ÓÍ\nh®\u008e¨ÃI¦\\\u00010³\u0003<\u009a%\u008c¡C\u0007C\"2\u001d\u0002Q\u008cîÑR\u001cQ;&\u0019Q2\u0080È\u0093lð¥Kí\u0089dË\u0017é¼ÓN»|\u0014¡§(HÀ\u0090\u0015¡ªÊWÄê[úÚCïTÕÿùQëù\u0019«^9K>\u0090\u0006³æ+öÂû \u009f\u008cÃàz\u0089\u0004Å!\u00ad\n\u0000YÁ=Øvú&]ndÓ²34\u001b\u0081v¢pQ\u0005\u008e´ÛH{ïL¦Àÿ?`Æ@\u0088\u00ad\u001ei~ÿ\u000fC×=¡É\u009f:»ÿoO\u0007\u009b\u0010\u000eÃ,W,íæ©\\\t\u0083QÔ×R\u00ad&\u0088\u001aÐb\u008dÛâq\b\u000f*\u0085f§&²n\u0082ËÏ\n©ÁË"
         .length();
      char var16 = '@';
      int var24 = -1;

      label54:
      while (true) {
         String var26 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var26.getBytes("ISO-8859-1"));
            String var37 = ciH(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var37;
                  if ((var24 += var16) >= var19) {
                     gJQGB = var20;
                     SQTYL = new String[6];
                     YWftv = new HashMap(13);
                     Cipher var0;
                     Cipher var28 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var28.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[29];
                     int var3 = 0;
                     String var4 = "|T)\u007f¾óÁl\u00023\u0011\u0010,4)ÒG=\u001a\u0002¤Z£¡\u001bðe\u0003\u009c\u0006ø\u0094ú\"×{\u0094}\bH³\"(h¸÷\u009di$Ìòá\\\u0099Ü@w\u000b\u0097ý\u009f\"0!òß\u0000\u0001\u0099Ï\u0081sgR§÷\u009b\u0089ùX¹\u0005w\u008f\u008e×\u007fÚ³2\u009d\u0083pXR\u008b/(ô\u009bÛ\u001a\u009c \u0098¡)~\u0003ewâ3`\u007fqÏ1ÈÀª_È§ì!,áG§\u00875\bÆÌ\u0080}:\u0082<æP2È\fT-,`ÈÝ\u009aô§ \\ELoQv}\u000bÆÄu\u0015¥îla¢ËX\u0011e\rëÉ\u0096\u00ad[zÂ!\u0082\u0012t¯åß\u0084Ç$\u008fG ÿînZw\u000f\u009d0Ñ}\u0002\u009eÈ\u0096Õw]\u0093n";
                     int var5 = "|T)\u007f¾óÁl\u00023\u0011\u0010,4)ÒG=\u001a\u0002¤Z£¡\u001bðe\u0003\u009c\u0006ø\u0094ú\"×{\u0094}\bH³\"(h¸÷\u009di$Ìòá\\\u0099Ü@w\u000b\u0097ý\u009f\"0!òß\u0000\u0001\u0099Ï\u0081sgR§÷\u009b\u0089ùX¹\u0005w\u008f\u008e×\u007fÚ³2\u009d\u0083pXR\u008b/(ô\u009bÛ\u001a\u009c \u0098¡)~\u0003ewâ3`\u007fqÏ1ÈÀª_È§ì!,áG§\u00875\bÆÌ\u0080}:\u0082<æP2È\fT-,`ÈÝ\u009aô§ \\ELoQv}\u000bÆÄu\u0015¥îla¢ËX\u0011e\rëÉ\u0096\u00ad[zÂ!\u0082\u0012t¯åß\u0084Ç$\u008fG ÿînZw\u000f\u009d0Ñ}\u0002\u009eÈ\u0096Õw]\u0093n"
                        .length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var29 = var6;
                        var10001 = var3++;
                        long var41 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var44 = -1;

                        while (true) {
                           long var8 = var41;
                           byte[] var10 = var0.doFinal(
                              new byte[]{
                                 (byte)(var8 >>> 56),
                                 (byte)(var8 >>> 48),
                                 (byte)(var8 >>> 40),
                                 (byte)(var8 >>> 32),
                                 (byte)(var8 >>> 24),
                                 (byte)(var8 >>> 16),
                                 (byte)(var8 >>> 8),
                                 (byte)var8
                              }
                           );
                           long var46 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var44) {
                              case 0:
                                 var29[var10001] = var46;
                                 if (var2 >= var5) {
                                    NaCxN = var6;
                                    kvEby = new Integer[29];
                                    JlBvN = ciC();
                                    return;
                                 }
                                 break;
                              default:
                                 var29[var10001] = var46;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = ")Á\u00ad#ZÛ\u008aOÎù^À©Ê\u009f\u009f";
                                 var5 = ")Á\u00ad#ZÛ\u008aOÎù^À©Ê\u009f\u009f".length();
                                 var2 = 0;
                           }

                           byte var35 = var2;
                           var2 += 8;
                           var7 = var4.substring(var35, var2).getBytes("ISO-8859-1");
                           var29 = var6;
                           var10001 = var3++;
                           var41 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var44 = 0;
                        }
                     }
                  }

                  var16 = var17.charAt(var24);
                  break;
               default:
                  var20[var18++] = var37;
                  if ((var24 += var16) < var19) {
                     var16 = var17.charAt(var24);
                     continue label54;
                  }

                  var17 = "0m-Ìó\u0004\u0080þ§öé£¿p86_»üÒZH_0{\u0091¼\u0092\u0090ç\u0010½N\u0099òÌ·L\u0018ÐVJx\u001dëögQ@Z4Ù\u009eÔ7Pèð²EVÒõUª@_Zd\u008c5Hq\u0091b×\"TLª\u0010\u0091Û\u0013.ÅÉamã\u001eÛ÷ â+\u0006";
                  var19 = "0m-Ìó\u0004\u0080þ§öé£¿p86_»üÒZH_0{\u0091¼\u0092\u0090ç\u0010½N\u0099òÌ·L\u0018ÐVJx\u001dëögQ@Z4Ù\u009eÔ7Pèð²EVÒõUª@_Zd\u008c5Hq\u0091b×\"TLª\u0010\u0091Û\u0013.ÅÉamã\u001eÛ÷ â+\u0006"
                     .length();
                  var16 = 'P';
                  var24 = -1;
            }

            var26 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   @Override
   public String name() {
      long var1 = PtOYq ^ 137254425803643L;
      return ciK<"l">(26462, 8005197851864157254L ^ var1);
   }

   private static String ciI(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 5952;
      if (SQTYL[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])HvppV.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               HvppV.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/lR", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = gJQGB[var5].getBytes("ISO-8859-1");
         SQTYL[var5] = ciH(((Cipher)var4[0]).doFinal(var9));
      }

      return SQTYL[var5];
   }

   private static int ciM(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ciL(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int ciL(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 12047;
      if (kvEby[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = NaCxN[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])YWftv.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               YWftv.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/lR", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         kvEby[var3] = var15;
      }

      return kvEby[var3];
   }

   private static String ciH(byte[] var0) {
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

   private static Constructor<class_5944> ciC() {
      try {
         Constructor var0 = class_5944.class.getDeclaredConstructor(int.class, String.class);
         var0.setAccessible(true);
         return var0;
      } catch (ReflectiveOperationException var1) {
         throw new ExceptionInInitializerError(var1);
      }
   }

   private static Object ciJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = ciI(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   public void setUniform(int var1, float var2, float var3, float var4, float var5) {
      GL20.glUniform4f(var1, var2, var3, var4, var5);
   }

   @Override
   public void setUniform(int var1, float var2) {
      GL20.glUniform1f(var1, var2);
   }

   @Override
   public void setUniform(int var1, FloatBuffer var2) {
      GL20.glUniform1fv(var1, var2);
   }

   @Override
   public void setUniform(int var1, int var2) {
      GL20.glUniform1i(var1, var2);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   @Override
   public void setUniform(int var1, Matrix4f var2) {
      long var3 = PtOYq ^ 97856181461357L;
      String[] var10000 = ciF();
      MemoryStack var6 = MemoryStack.stackPush();
      String[] var5 = var10000;

      try {
         FloatBuffer var7 = var6.mallocFloat(ciN<"s">(28447, 6787557031859365464L ^ var3));
         var2.get(var7);
         GL20.glUniformMatrix4fv(var1, false, var7);
      } catch (Throwable var12) {
         label34: {
            try {
               var13 = var6;
               if (var5 == null) {
                  break label34;
               }

               if (var6 == null) {
                  throw var12;
               }
            } catch (Throwable var11) {
               throw ciG(var11);
            }

            try {
               var13 = var6;
            } catch (Throwable var10) {
               var12.addSuppressed(var10);
               throw var12;
            }
         }

         try {
            var13.close();
         } catch (Throwable var9) {
            var12.addSuppressed(var9);
         }

         throw var12;
      }

      MemoryStack var14 = var6;
      if (var5 != null) {
         if (var6 == null) {
            return;
         }

         var14 = var6;
      }

      var14.close();
   }

   @Override
   public void setUniform(int param1, float[] param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lR.PtOYq J
      // 03: ldc2_w 71764924413231
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 5
      // 0d: aload 2
      // 0e: arraylength
      // 0f: aload 5
      // 11: ifnull 39
      // 14: tableswitch 123 1 4 36 48 70 95
      // 34: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 37: athrow
      // 38: iload 1
      // 39: aload 2
      // 3a: bipush 0
      // 3b: faload
      // 3c: invokestatic org/lwjgl/opengl/GL20.glUniform1f (IF)V
      // 3f: aload 5
      // 41: ifnonnull b0
      // 44: iload 1
      // 45: aload 2
      // 46: bipush 0
      // 47: faload
      // 48: aload 2
      // 49: bipush 1
      // 4a: faload
      // 4b: invokestatic org/lwjgl/opengl/GL20.glUniform2f (IFF)V
      // 4e: aload 5
      // 50: ifnonnull b0
      // 53: goto 5a
      // 56: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 59: athrow
      // 5a: iload 1
      // 5b: aload 2
      // 5c: bipush 0
      // 5d: faload
      // 5e: aload 2
      // 5f: bipush 1
      // 60: faload
      // 61: aload 2
      // 62: bipush 2
      // 63: faload
      // 64: invokestatic org/lwjgl/opengl/GL20.glUniform3f (IFFF)V
      // 67: aload 5
      // 69: ifnonnull b0
      // 6c: goto 73
      // 6f: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 72: athrow
      // 73: iload 1
      // 74: aload 2
      // 75: bipush 0
      // 76: faload
      // 77: aload 2
      // 78: bipush 1
      // 79: faload
      // 7a: aload 2
      // 7b: bipush 2
      // 7c: faload
      // 7d: aload 2
      // 7e: bipush 3
      // 7f: faload
      // 80: invokestatic org/lwjgl/opengl/GL20.glUniform4f (IFFFF)V
      // 83: aload 5
      // 85: ifnonnull b0
      // 88: goto 8f
      // 8b: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 8e: athrow
      // 8f: new java/lang/IllegalArgumentException
      // 92: dup
      // 93: aload 2
      // 94: arraylength
      // 95: sipush 24670
      // 98: ldc2_w 5567216464633709847
      // 9b: lload 3
      // 9c: lxor
      // 9d: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/lR.ciK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // a2: swap
      // a3: invokedynamic makeConcatWithConstants (Ljava/lang/String;I)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // a8: invokespecial java/lang/IllegalArgumentException.<init> (Ljava/lang/String;)V
      // ab: athrow
      // ac: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // af: athrow
      // b0: return
   }

   @Override
   public void setUniform(int var1, float var2, float var3) {
      GL20.glUniform2f(var1, var2, var3);
   }

   @Override
   public void setUniform(int var1, float var2, float var3, float var4) {
      GL20.glUniform3f(var1, var2, var3, var4);
   }

   @Override
   public void readPixel(int var1, int var2, ByteBuffer var3) {
      long var4 = PtOYq ^ 72064710235760L;
      GL11.glReadPixels(var1, var2, 1, 1, ciN<"s">(10346, 6663848318751528509L ^ var4), ciN<"s">(21743, 7032443428938197677L ^ var4), var3);
   }

   @Override
   public void disableScissor() {
      GlStateManager._disableScissorTest();
   }

   @Override
   public void copyTextureToTexture(GpuTexture param1, GpuTexture param2, int param3, int param4, int param5, int param6, int param7, int param8, int param9) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lR.PtOYq J
      // 003: ldc2_w 97715003078023
      // 006: lxor
      // 007: lstore 10
      // 009: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 00c: invokestatic com/mojang/blaze3d/opengl/GlStateManager._disableScissorTest ()V
      // 00f: invokestatic com/mojang/blaze3d/systems/RenderSystem.assertOnRenderThread ()V
      // 012: astore 12
      // 014: aload 0
      // 015: getfield sixtwo/lR.APeps I
      // 018: bipush -1
      // 019: aload 12
      // 01b: ifnull 047
      // 01e: if_icmpne 036
      // 021: goto 028
      // 024: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 027: athrow
      // 028: aload 0
      // 029: invokestatic org/lwjgl/opengl/GL30.glGenFramebuffers ()I
      // 02c: putfield sixtwo/lR.APeps I
      // 02f: goto 036
      // 032: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 035: athrow
      // 036: aload 0
      // 037: getfield sixtwo/lR.jQsIC I
      // 03a: aload 12
      // 03c: ifnull 068
      // 03f: bipush -1
      // 040: goto 047
      // 043: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 046: athrow
      // 047: if_icmpne 058
      // 04a: aload 0
      // 04b: invokestatic org/lwjgl/opengl/GL30.glGenFramebuffers ()I
      // 04e: putfield sixtwo/lR.jQsIC I
      // 051: goto 058
      // 054: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 057: athrow
      // 058: aload 1
      // 059: aload 12
      // 05b: ifnull 06c
      // 05e: instanceof net/minecraft/class_10868
      // 061: goto 068
      // 064: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 067: athrow
      // 068: ifeq 0a3
      // 06b: aload 1
      // 06c: checkcast net/minecraft/class_10868
      // 06f: astore 13
      // 071: aload 2
      // 072: aload 12
      // 074: ifnull 08c
      // 077: instanceof net/minecraft/class_10868
      // 07a: ifeq 0a3
      // 07d: goto 084
      // 080: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 083: athrow
      // 084: aload 2
      // 085: goto 08c
      // 088: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 08b: athrow
      // 08c: checkcast net/minecraft/class_10868
      // 08f: astore 14
      // 091: aload 12
      // 093: ifnonnull 0b9
      // 096: ldc_w "Mv4EL"
      // 099: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 09c: goto 0a3
      // 09f: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0a2: athrow
      // 0a3: new java/lang/IllegalArgumentException
      // 0a6: dup
      // 0a7: sipush 26007
      // 0aa: ldc2_w 130368503769940084
      // 0ad: lload 10
      // 0af: lxor
      // 0b0: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/lR.ciK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b5: invokespecial java/lang/IllegalArgumentException.<init> (Ljava/lang/String;)V
      // 0b8: athrow
      // 0b9: aload 1
      // 0ba: invokevirtual com/mojang/blaze3d/textures/GpuTexture.getFormat ()Lcom/mojang/blaze3d/textures/TextureFormat;
      // 0bd: invokevirtual com/mojang/blaze3d/textures/TextureFormat.hasDepthAspect ()Z
      // 0c0: istore 15
      // 0c2: iload 15
      // 0c4: aload 12
      // 0c6: ifnull 0e1
      // 0c9: ifeq 0e4
      // 0cc: goto 0d3
      // 0cf: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d2: athrow
      // 0d3: sipush 7481
      // 0d6: ldc2_w 5394255276610486422
      // 0d9: lload 10
      // 0db: lxor
      // 0dc: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e1: goto 0f2
      // 0e4: sipush 22058
      // 0e7: ldc2_w 3429538059245046672
      // 0ea: lload 10
      // 0ec: lxor
      // 0ed: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f2: istore 16
      // 0f4: iload 15
      // 0f6: aload 12
      // 0f8: ifnull 113
      // 0fb: ifeq 116
      // 0fe: goto 105
      // 101: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 104: athrow
      // 105: sipush 26409
      // 108: ldc2_w 7868486432715307650
      // 10b: lload 10
      // 10d: lxor
      // 10e: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 113: goto 124
      // 116: sipush 21825
      // 119: ldc2_w 8346287016865351926
      // 11c: lload 10
      // 11e: lxor
      // 11f: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 124: istore 17
      // 126: sipush 22698
      // 129: ldc2_w 4042731091236603164
      // 12c: lload 10
      // 12e: lxor
      // 12f: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 134: invokestatic org/lwjgl/opengl/GL11.glGetInteger (I)I
      // 137: istore 18
      // 139: sipush 28161
      // 13c: ldc2_w 2277547815541535674
      // 13f: lload 10
      // 141: lxor
      // 142: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 147: invokestatic org/lwjgl/opengl/GL11.glGetInteger (I)I
      // 14a: istore 19
      // 14c: sipush 13477
      // 14f: ldc2_w 6124717797344323863
      // 152: lload 10
      // 154: lxor
      // 155: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15a: aload 0
      // 15b: getfield sixtwo/lR.APeps I
      // 15e: invokestatic org/lwjgl/opengl/GL30.glBindFramebuffer (II)V
      // 161: sipush 14645
      // 164: ldc2_w 5305756324959200392
      // 167: lload 10
      // 169: lxor
      // 16a: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 16f: aload 0
      // 170: getfield sixtwo/lR.jQsIC I
      // 173: invokestatic org/lwjgl/opengl/GL30.glBindFramebuffer (II)V
      // 176: sipush 31375
      // 179: ldc2_w 284518169528559401
      // 17c: lload 10
      // 17e: lxor
      // 17f: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 184: iload 16
      // 186: sipush 19553
      // 189: ldc2_w 2859383715795390915
      // 18c: lload 10
      // 18e: lxor
      // 18f: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 194: aload 13
      // 196: invokevirtual net/minecraft/class_10868.method_68427 ()I
      // 199: iload 3
      // 19a: invokestatic org/lwjgl/opengl/GL30.glFramebufferTexture2D (IIIII)V
      // 19d: sipush 28342
      // 1a0: ldc2_w 7166796641889973023
      // 1a3: lload 10
      // 1a5: lxor
      // 1a6: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1ab: iload 16
      // 1ad: sipush 19553
      // 1b0: ldc2_w 2859383715795390915
      // 1b3: lload 10
      // 1b5: lxor
      // 1b6: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1bb: aload 14
      // 1bd: invokevirtual net/minecraft/class_10868.method_68427 ()I
      // 1c0: iload 3
      // 1c1: invokestatic org/lwjgl/opengl/GL30.glFramebufferTexture2D (IIIII)V
      // 1c4: iload 15
      // 1c6: aload 12
      // 1c8: ifnull 20f
      // 1cb: ifeq 1e9
      // 1ce: goto 1d5
      // 1d1: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d4: athrow
      // 1d5: bipush 0
      // 1d6: invokestatic org/lwjgl/opengl/GL11.glReadBuffer (I)V
      // 1d9: bipush 0
      // 1da: invokestatic org/lwjgl/opengl/GL11.glDrawBuffer (I)V
      // 1dd: aload 12
      // 1df: ifnonnull 212
      // 1e2: goto 1e9
      // 1e5: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1e8: athrow
      // 1e9: sipush 14045
      // 1ec: ldc2_w 373400023064259429
      // 1ef: lload 10
      // 1f1: lxor
      // 1f2: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1f7: invokestatic org/lwjgl/opengl/GL11.glReadBuffer (I)V
      // 1fa: sipush 14045
      // 1fd: ldc2_w 373400023064259429
      // 200: lload 10
      // 202: lxor
      // 203: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 208: goto 20f
      // 20b: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 20e: athrow
      // 20f: invokestatic org/lwjgl/opengl/GL11.glDrawBuffer (I)V
      // 212: iload 6
      // 214: iload 7
      // 216: iload 6
      // 218: iload 8
      // 21a: iadd
      // 21b: iload 7
      // 21d: iload 9
      // 21f: iadd
      // 220: iload 4
      // 222: iload 5
      // 224: iload 4
      // 226: iload 8
      // 228: iadd
      // 229: iload 5
      // 22b: iload 9
      // 22d: iadd
      // 22e: iload 17
      // 230: sipush 5042
      // 233: ldc2_w 8882597424993373726
      // 236: lload 10
      // 238: lxor
      // 239: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 23e: invokestatic org/lwjgl/opengl/GL30.glBlitFramebuffer (IIIIIIIIII)V
      // 241: sipush 31375
      // 244: ldc2_w 284518169528559401
      // 247: lload 10
      // 249: lxor
      // 24a: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 24f: iload 16
      // 251: sipush 19553
      // 254: ldc2_w 2859383715795390915
      // 257: lload 10
      // 259: lxor
      // 25a: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 25f: bipush 0
      // 260: bipush 0
      // 261: invokestatic org/lwjgl/opengl/GL30.glFramebufferTexture2D (IIIII)V
      // 264: sipush 28342
      // 267: ldc2_w 7166796641889973023
      // 26a: lload 10
      // 26c: lxor
      // 26d: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 272: iload 16
      // 274: sipush 19553
      // 277: ldc2_w 2859383715795390915
      // 27a: lload 10
      // 27c: lxor
      // 27d: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 282: bipush 0
      // 283: bipush 0
      // 284: invokestatic org/lwjgl/opengl/GL30.glFramebufferTexture2D (IIIII)V
      // 287: sipush 31375
      // 28a: ldc2_w 284518169528559401
      // 28d: lload 10
      // 28f: lxor
      // 290: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 295: iload 18
      // 297: invokestatic org/lwjgl/opengl/GL30.glBindFramebuffer (II)V
      // 29a: sipush 28342
      // 29d: ldc2_w 7166796641889973023
      // 2a0: lload 10
      // 2a2: lxor
      // 2a3: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a8: iload 19
      // 2aa: invokestatic org/lwjgl/opengl/GL30.glBindFramebuffer (II)V
      // 2ad: goto 321
      // 2b0: astore 20
      // 2b2: sipush 31375
      // 2b5: ldc2_w 284518169528559401
      // 2b8: lload 10
      // 2ba: lxor
      // 2bb: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2c0: iload 16
      // 2c2: sipush 19553
      // 2c5: ldc2_w 2859383715795390915
      // 2c8: lload 10
      // 2ca: lxor
      // 2cb: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2d0: bipush 0
      // 2d1: bipush 0
      // 2d2: invokestatic org/lwjgl/opengl/GL30.glFramebufferTexture2D (IIIII)V
      // 2d5: sipush 28342
      // 2d8: ldc2_w 7166796641889973023
      // 2db: lload 10
      // 2dd: lxor
      // 2de: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2e3: iload 16
      // 2e5: sipush 19553
      // 2e8: ldc2_w 2859383715795390915
      // 2eb: lload 10
      // 2ed: lxor
      // 2ee: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2f3: bipush 0
      // 2f4: bipush 0
      // 2f5: invokestatic org/lwjgl/opengl/GL30.glFramebufferTexture2D (IIIII)V
      // 2f8: sipush 31375
      // 2fb: ldc2_w 284518169528559401
      // 2fe: lload 10
      // 300: lxor
      // 301: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 306: iload 18
      // 308: invokestatic org/lwjgl/opengl/GL30.glBindFramebuffer (II)V
      // 30b: sipush 28342
      // 30e: ldc2_w 7166796641889973023
      // 311: lload 10
      // 313: lxor
      // 314: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 319: iload 19
      // 31b: invokestatic org/lwjgl/opengl/GL30.glBindFramebuffer (II)V
      // 31e: aload 20
      // 320: athrow
      // 321: return
   }

   @Override
   public lV createShader(byte[] param1, lS param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lR.PtOYq J
      // 003: ldc2_w 63279615730538
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 00b: aload 2
      // 00c: invokestatic sixtwo/lR.ciz (Lsixtwo/lS;)I
      // 00f: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glCreateShader (I)I
      // 012: istore 6
      // 014: invokestatic org/lwjgl/system/MemoryStack.stackPush ()Lorg/lwjgl/system/MemoryStack;
      // 017: astore 7
      // 019: astore 5
      // 01b: aload 1
      // 01c: arraylength
      // 01d: bipush 1
      // 01e: iadd
      // 01f: invokestatic org/lwjgl/system/MemoryUtil.memAlloc (I)Ljava/nio/ByteBuffer;
      // 022: astore 8
      // 024: aload 8
      // 026: aload 1
      // 027: invokevirtual java/nio/ByteBuffer.put ([B)Ljava/nio/ByteBuffer;
      // 02a: bipush 0
      // 02b: invokevirtual java/nio/ByteBuffer.put (B)Ljava/nio/ByteBuffer;
      // 02e: invokevirtual java/nio/ByteBuffer.flip ()Ljava/nio/ByteBuffer;
      // 031: pop
      // 032: aload 7
      // 034: bipush 1
      // 035: invokevirtual org/lwjgl/system/MemoryStack.mallocPointer (I)Lorg/lwjgl/PointerBuffer;
      // 038: astore 9
      // 03a: aload 9
      // 03c: bipush 0
      // 03d: aload 8
      // 03f: invokestatic org/lwjgl/system/MemoryUtil.memAddress (Ljava/nio/ByteBuffer;)J
      // 042: invokevirtual org/lwjgl/PointerBuffer.put (IJ)Lorg/lwjgl/PointerBuffer;
      // 045: pop
      // 046: aload 7
      // 048: aload 1
      // 049: arraylength
      // 04a: invokevirtual org/lwjgl/system/MemoryStack.ints (I)Ljava/nio/IntBuffer;
      // 04d: astore 10
      // 04f: iload 6
      // 051: bipush 1
      // 052: aload 9
      // 054: invokestatic org/lwjgl/system/MemoryUtil.memAddress (Lorg/lwjgl/system/CustomBuffer;)J
      // 057: aload 10
      // 059: invokestatic org/lwjgl/system/MemoryUtil.memAddress (Ljava/nio/IntBuffer;)J
      // 05c: invokestatic org/lwjgl/opengl/GL20.nglShaderSource (IIJJ)V
      // 05f: aload 8
      // 061: invokestatic org/lwjgl/system/MemoryUtil.memAddress (Ljava/nio/ByteBuffer;)J
      // 064: bipush 0
      // 065: aload 8
      // 067: invokevirtual java/nio/ByteBuffer.capacity ()I
      // 06a: i2l
      // 06b: invokestatic org/lwjgl/system/MemoryUtil.memSet (JIJ)V
      // 06e: aload 8
      // 070: invokestatic org/lwjgl/system/MemoryUtil.memFree (Ljava/nio/Buffer;)V
      // 073: goto 08f
      // 076: astore 11
      // 078: aload 8
      // 07a: invokestatic org/lwjgl/system/MemoryUtil.memAddress (Ljava/nio/ByteBuffer;)J
      // 07d: bipush 0
      // 07e: aload 8
      // 080: invokevirtual java/nio/ByteBuffer.capacity ()I
      // 083: i2l
      // 084: invokestatic org/lwjgl/system/MemoryUtil.memSet (JIJ)V
      // 087: aload 8
      // 089: invokestatic org/lwjgl/system/MemoryUtil.memFree (Ljava/nio/Buffer;)V
      // 08c: aload 11
      // 08e: athrow
      // 08f: aload 7
      // 091: aload 5
      // 093: ifnull 0a2
      // 096: ifnull 0cf
      // 099: goto 0a0
      // 09c: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 09f: athrow
      // 0a0: aload 7
      // 0a2: invokevirtual org/lwjgl/system/MemoryStack.close ()V
      // 0a5: goto 0cf
      // 0a8: astore 8
      // 0aa: aload 7
      // 0ac: aload 5
      // 0ae: ifnull 0bd
      // 0b1: ifnull 0cc
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ba: athrow
      // 0bb: aload 7
      // 0bd: invokevirtual org/lwjgl/system/MemoryStack.close ()V
      // 0c0: goto 0cc
      // 0c3: astore 9
      // 0c5: aload 8
      // 0c7: aload 9
      // 0c9: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 0cc: aload 8
      // 0ce: athrow
      // 0cf: iload 6
      // 0d1: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glCompileShader (I)V
      // 0d4: iload 6
      // 0d6: sipush 22433
      // 0d9: ldc2_w 4476770428319145197
      // 0dc: lload 3
      // 0dd: lxor
      // 0de: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e3: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glGetShaderi (II)I
      // 0e6: bipush 1
      // 0e7: aload 5
      // 0e9: ifnull 10c
      // 0ec: if_icmpeq 120
      // 0ef: goto 0f6
      // 0f2: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f5: athrow
      // 0f6: iload 6
      // 0f8: sipush 7210
      // 0fb: ldc2_w 6735759847205853043
      // 0fe: lload 3
      // 0ff: lxor
      // 100: invokedynamic s (IJ)I bsm=sixtwo/lR.ciN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 105: goto 10c
      // 108: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10b: athrow
      // 10c: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glGetShaderInfoLog (II)Ljava/lang/String;
      // 10f: astore 7
      // 111: iload 6
      // 113: invokestatic com/mojang/blaze3d/opengl/GlStateManager.glDeleteShader (I)V
      // 116: new java/lang/RuntimeException
      // 119: dup
      // 11a: aload 7
      // 11c: invokespecial java/lang/RuntimeException.<init> (Ljava/lang/String;)V
      // 11f: athrow
      // 120: new sixtwo/lR$uE
      // 123: dup
      // 124: iload 6
      // 126: invokespecial sixtwo/lR$uE.<init> (I)V
      // 129: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 12c: ifnonnull 13d
      // 12f: bipush 3
      // 130: anewarray 213
      // 133: invokestatic sixtwo/lR.ciE ([Ljava/lang/String;)V
      // 136: goto 13d
      // 139: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 13c: athrow
      // 13d: areturn
   }

   private static CallSite ciK(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ciJ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lR" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Throwable ciG(Throwable var0) {
      return var0;
   }

   private static lR$uE ciA(lV param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lR.PtOYq J
      // 03: ldc2_w 70453536911109
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 26
      // 11: instanceof sixtwo/lR$uE
      // 14: ifeq 2e
      // 17: goto 1e
      // 1a: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: checkcast sixtwo/lR$uE
      // 29: astore 4
      // 2b: aload 4
      // 2d: areturn
      // 2e: new java/lang/IllegalArgumentException
      // 31: dup
      // 32: sipush 5312
      // 35: ldc2_w 1796416434254834599
      // 38: lload 1
      // 39: lxor
      // 3a: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/lR.ciK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3f: invokespecial java/lang/IllegalArgumentException.<init> (Ljava/lang/String;)V
      // 42: athrow
   }

   private static lR$uF ciB(lW param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lR.PtOYq J
      // 03: ldc2_w 75895377107711
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 26
      // 11: instanceof sixtwo/lR$uF
      // 14: ifeq 2e
      // 17: goto 1e
      // 1a: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: checkcast sixtwo/lR$uF
      // 29: astore 4
      // 2b: aload 4
      // 2d: areturn
      // 2e: new java/lang/IllegalArgumentException
      // 31: dup
      // 32: sipush 7379
      // 35: ldc2_w 6618231909010511433
      // 38: lload 1
      // 39: lxor
      // 3a: invokedynamic l (IJ)Ljava/lang/String; bsm=sixtwo/lR.ciK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3f: invokespecial java/lang/IllegalArgumentException.<init> (Ljava/lang/String;)V
      // 42: athrow
   }

   private static CallSite ciN(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ciM".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lR" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static String[] ciF() {
      return xWJpb;
   }

   public static void ciE(String[] var0) {
      xWJpb = var0;
   }

   private static int ciz(lS var0) {
      long var1 = PtOYq ^ 96702529294436L;

      try {
         switch (lR$uG.TrLGx[var0.ordinal()]) {
            case 1:
               return ciN<"s">(4000, 6417017772516145127L ^ var1);
            case 2:
               return ciN<"s">(3934, 5058388669990434562L ^ var1);
            default:
               throw new MatchException(null, null);
         }
      } catch (RuntimeException var3) {
         throw ciG(var3);
      }
   }

   private static class_5944 ciD(int var0, String var1) {
      long var2 = PtOYq ^ 70296004781393L;

      try {
         return JlBvN.newInstance(var0, var1);
      } catch (ReflectiveOperationException var5) {
         throw new RuntimeException(ciK<"l">(29965, 2780916595365478459L ^ var2), var5);
      }
   }

   public class_10867 cix(RenderPipeline var1, lW var2, Map<RenderPipeline, class_10867> var3) {
      long var4 = PtOYq ^ 126345630911092L;
      String[] var10000 = ciF();
      class_10867 var7 = (class_10867)var3.get(var1);
      String[] var6 = var10000;

      label30: {
         try {
            if (var6 == null) {
               return var7;
            }

            if (var7 == null) {
               break label30;
            }
         } catch (RuntimeException var10) {
            throw ciG(var10);
         }

         return var7;
      }

      class_5944 var8 = ciD(ciB(var2).id, var1.getLocation().toString());
      this.hyzPD.add(var8);
      var8.method_62900(var1.getUniforms(), var1.getSamplers());
      class_10867 var9 = new class_10867(var1, var8);
      var3.put(var1, var9);
      return var9;
   }

   public void ciy(Object param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lR.PtOYq J
      // 03: ldc2_w 61346508079785
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnull 28
      // 13: instanceof net/minecraft/class_5944
      // 16: ifeq 47
      // 19: goto 20
      // 1c: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: aload 1
      // 21: goto 28
      // 24: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 27: athrow
      // 28: checkcast net/minecraft/class_5944
      // 2b: astore 5
      // 2d: aload 0
      // 2e: getfield sixtwo/lR.hyzPD Ljava/util/Set;
      // 31: aload 5
      // 33: invokeinterface java/util/Set.remove (Ljava/lang/Object;)Z 2
      // 38: ifne 47
      // 3b: aload 5
      // 3d: invokevirtual net/minecraft/class_5944.close ()V
      // 40: goto 47
      // 43: invokestatic sixtwo/lR.ciG (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 46: athrow
      // 47: return
   }

   @Override
   public void clearColor(float var1, float var2, float var3, float var4) {
      GL11.glClearColor(var1, var2, var3, var4);
   }
}
