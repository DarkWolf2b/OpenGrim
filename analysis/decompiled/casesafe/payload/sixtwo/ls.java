package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_276;
import net.minecraft.class_6367;

public class ls extends class_6367 {
   private static final int GQfle;
   private final boolean ClHck;
   private static final long PmtPt = gb.aYR(-6135898123433329992L, 7388474228343281349L, MethodHandles.lookup().lookupClass()).a(53017075674439L);
   private static final String[] cyUMW;
   private static final String[] iEJId;
   private static final Map rvbpg = new HashMap(13);
   private static final long[] hIIsj;
   private static final Integer[] UJsAs;
   private static final Map xzudJ;

   private static CallSite caS(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("caR".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ls" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite caV(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("caU".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ls" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public void caM() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ls.PmtPt J
      // 03: ldc2_w 111240305405651
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lt.cbc ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 26
      // 11: invokevirtual sixtwo/ls.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 14: ifnull 80
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 25: athrow
      // 26: aload 3
      // 27: ifnonnull 3f
      // 2a: getfield sixtwo/ls.field_1478 Z
      // 2d: ifeq 67
      // 30: goto 37
      // 33: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 36: athrow
      // 37: aload 0
      // 38: goto 3f
      // 3b: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 3e: athrow
      // 3f: invokevirtual sixtwo/ls.method_30278 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 42: ifnull 67
      // 45: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 48: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createCommandEncoder ()Lcom/mojang/blaze3d/systems/CommandEncoder; 1
      // 4d: aload 0
      // 4e: invokevirtual sixtwo/ls.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 51: bipush 0
      // 52: aload 0
      // 53: invokevirtual sixtwo/ls.method_30278 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 56: dconst_1
      // 57: invokeinterface com/mojang/blaze3d/systems/CommandEncoder.clearColorAndDepthTextures (Lcom/mojang/blaze3d/textures/GpuTexture;ILcom/mojang/blaze3d/textures/GpuTexture;D)V 6
      // 5c: aload 3
      // 5d: ifnull 80
      // 60: goto 67
      // 63: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 66: athrow
      // 67: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 6a: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createCommandEncoder ()Lcom/mojang/blaze3d/systems/CommandEncoder; 1
      // 6f: aload 0
      // 70: invokevirtual sixtwo/ls.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 73: bipush 0
      // 74: invokeinterface com/mojang/blaze3d/systems/CommandEncoder.clearColorTexture (Lcom/mojang/blaze3d/textures/GpuTexture;I)V 3
      // 79: goto 80
      // 7c: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 7f: athrow
      // 80: return
   }

   public void caK() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ls.PmtPt J
      // 03: ldc2_w 101395079862710
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lt.cbc ()[Lsixtwo/iS;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: invokevirtual net/minecraft/class_310.method_1522 ()Lnet/minecraft/class_276;
      // 11: astore 4
      // 13: aload 4
      // 15: getfield net/minecraft/class_276.field_1482 I
      // 18: istore 5
      // 1a: aload 4
      // 1c: getfield net/minecraft/class_276.field_1481 I
      // 1f: istore 6
      // 21: astore 3
      // 22: aload 0
      // 23: aload 3
      // 24: ifnonnull 59
      // 27: getfield sixtwo/ls.field_1482 I
      // 2a: iload 5
      // 2c: if_icmpne 51
      // 2f: goto 36
      // 32: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 35: athrow
      // 36: aload 0
      // 37: aload 3
      // 38: ifnonnull 59
      // 3b: goto 42
      // 3e: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 41: athrow
      // 42: getfield sixtwo/ls.field_1481 I
      // 45: iload 6
      // 47: if_icmpeq 60
      // 4a: goto 51
      // 4d: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 50: athrow
      // 51: aload 0
      // 52: goto 59
      // 55: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 58: athrow
      // 59: iload 5
      // 5b: iload 6
      // 5d: invokevirtual sixtwo/ls.method_1234 (II)V
      // 60: return
   }

   private static int caT(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 7046;
      if (UJsAs[var3] == null) {
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
         long var5 = hIIsj[var3];
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
         Object[] var9 = (Object[])xzudJ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               xzudJ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ls", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         UJsAs[var3] = var15;
      }

      return UJsAs[var3];
   }

   private static String caP(byte[] var0) {
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

   public void caL(class_276 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ls.PmtPt J
      // 03: ldc2_w 99843633122225
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lt.cbc ()[Lsixtwo/iS;
      // 0b: aload 1
      // 0c: getfield net/minecraft/class_276.field_1482 I
      // 0f: istore 5
      // 11: aload 1
      // 12: getfield net/minecraft/class_276.field_1481 I
      // 15: istore 6
      // 17: astore 4
      // 19: aload 0
      // 1a: aload 4
      // 1c: ifnonnull 52
      // 1f: getfield sixtwo/ls.field_1482 I
      // 22: iload 5
      // 24: if_icmpne 4a
      // 27: goto 2e
      // 2a: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 2d: athrow
      // 2e: aload 0
      // 2f: aload 4
      // 31: ifnonnull 52
      // 34: goto 3b
      // 37: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 3a: athrow
      // 3b: getfield sixtwo/ls.field_1481 I
      // 3e: iload 6
      // 40: if_icmpeq 59
      // 43: goto 4a
      // 46: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 49: athrow
      // 4a: aload 0
      // 4b: goto 52
      // 4e: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 51: athrow
      // 52: iload 5
      // 54: iload 6
      // 56: invokevirtual sixtwo/ls.method_1234 (II)V
      // 59: return
   }

   private static int caN(int param0, int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ls.PmtPt J
      // 03: ldc2_w 68722056260132
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lt.cbc ()[Lsixtwo/iS;
      // 0b: bipush 1
      // 0c: istore 5
      // 0e: iload 0
      // 0f: iload 1
      // 10: invokestatic java/lang/Math.min (II)I
      // 13: istore 6
      // 15: astore 4
      // 17: iload 6
      // 19: bipush 1
      // 1a: if_icmple 55
      // 1d: iload 5
      // 1f: aload 4
      // 21: ifnonnull 57
      // 24: aload 4
      // 26: ifnonnull 57
      // 29: goto 30
      // 2c: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 2f: athrow
      // 30: sipush 32733
      // 33: ldc2_w 3164662701339517590
      // 36: lload 2
      // 37: lxor
      // 38: invokedynamic b (IJ)I bsm=sixtwo/ls.caV (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3d: if_icmpge 55
      // 40: goto 47
      // 43: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 46: athrow
      // 47: iload 6
      // 49: bipush 1
      // 4a: ishr
      // 4b: istore 6
      // 4d: iinc 5 1
      // 50: aload 4
      // 52: ifnull 17
      // 55: iload 5
      // 57: ireturn
   }

   private static int caU(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = caT(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String caQ(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 3768;
      if (iEJId[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])rvbpg.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               rvbpg.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ls", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = cyUMW[var5].getBytes("ISO-8859-1");
         iEJId[var5] = caP(((Cipher)var4[0]).doFinal(var9));
      }

      return iEJId[var5];
   }

   private static Object caR(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = caQ(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static IllegalArgumentException caO(IllegalArgumentException var0) {
      return var0;
   }

   public ls(boolean var1) {
      long var2 = PmtPt ^ 129171943182078L;
      super(mU.cpM(caV<"b">(295, 8096990184414443701L ^ var2)), rD.dlmvG.method_22683().method_4489(), rD.dlmvG.method_22683().method_4506(), true);
      this.ClHck = var1;
      if (var1) {
         this.method_1234(this.field_1482, this.field_1481);
      }
   }

   public ls() {
      this(false);
   }

   static {
      long var11 = PmtPt ^ 40175481128179L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[4];
      int var18 = 0;
      String var17 = "├ť-)├ů&\u0089!├Ž\u0087┬źNY├öD3\u008b├áD├│.├Ş\u009aU├«├ĆN@\u0005\u0099├ľ\u0014\u001d@┬▒C┬╝\u0003┬¬┬ŻDG\u0080\u0090R├Á┬┤\u0098}┬┤┬Ż├äuh┬┐┬»1f├ťA\u0089\rZ├Ź\u0089├ć┬╝o├Ł\r\u0002{\u008c>\u0019├¬`├öN\u0090\u0007\u0081\u0016├ŻV\u009a'├┐c\u009a┬¬\u009f┬░\u009fm@├│┬┤";
      int var19 = "├ť-)├ů&\u0089!├Ž\u0087┬źNY├öD3\u008b├áD├│.├Ş\u009aU├«├ĆN@\u0005\u0099├ľ\u0014\u001d@┬▒C┬╝\u0003┬¬┬ŻDG\u0080\u0090R├Á┬┤\u0098}┬┤┬Ż├äuh┬┐┬»1f├ťA\u0089\rZ├Ź\u0089├ć┬╝o├Ł\r\u0002{\u008c>\u0019├¬`├öN\u0090\u0007\u0081\u0016├ŻV\u009a'├┐c\u009a┬¬\u009f┬░\u009fm@├│┬┤"
         .length();
      char var16 = ' ';
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = caP(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     cyUMW = var20;
                     iEJId = new String[4];
                     xzudJ = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[5];
                     int var3 = 0;
                     String var4 = "\u0082\"p:├Ő\u009ex ├Ť*[\u008b\u0088\u009f├ž\u009b├Ő├┐VV┬ą.\u0093<";
                     int var5 = "\u0082\"p:├Ő\u009ex ├Ť*[\u008b\u0088\u009f├ž\u009b├Ő├┐VV┬ą.\u0093<".length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
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
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    hIIsj = var6;
                                    UJsAs = new Integer[5];
                                    GQfle = caV<"b">(13614, var11 ^ 8280240620009785008L);
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "`N├│\u001a├Ś├Á\u008f\u0086kZU\"├ž├░uO";
                                 var5 = "`N├│\u001a├Ś├Á\u008f\u0086kZU\"├ž├░uO".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var16 = var17.charAt(var24);
                  break;
               default:
                  var20[var18++] = var36;
                  if ((var24 += var16) < var19) {
                     var16 = var17.charAt(var24);
                     continue label54;
                  }

                  var17 = "\u0091\u0088┬Ę├┐n'*r┬ę├ë\u008f├Ä├Ž\u008c\u0091┬╣ \u001c\u0080\u0013\u008e{Fvk┬źu├Ö,j├ô\u0000\u0087\u00ads\u0087\u000b\u0095┬ęC\u0081\u0005T\ricD\\├│";
                  var19 = "\u0091\u0088┬Ę├┐n'*r┬ę├ë\u008f├Ä├Ž\u008c\u0091┬╣ \u001c\u0080\u0013\u008e{Fvk┬źu├Ö,j├ô\u0000\u0087\u00ads\u0087\u000b\u0095┬ęC\u0081\u0005T\ricD\\├│"
                     .length();
                  var16 = 16;
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   public void method_1231(int param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ls.PmtPt J
      // 003: ldc2_w 16413158183505
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/lt.cbc ()[Lsixtwo/iS;
      // 00b: astore 5
      // 00d: aload 0
      // 00e: getfield sixtwo/ls.ClHck Z
      // 011: aload 5
      // 013: ifnonnull 036
      // 016: ifne 02b
      // 019: goto 020
      // 01c: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 01f: athrow
      // 020: aload 0
      // 021: iload 1
      // 022: iload 2
      // 023: invokespecial net/minecraft/class_6367.method_1231 (II)V
      // 026: return
      // 027: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 02a: athrow
      // 02b: invokestatic com/mojang/blaze3d/systems/RenderSystem.assertOnRenderThread ()V
      // 02e: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 031: invokeinterface com/mojang/blaze3d/systems/GpuDevice.getMaxTextureSize ()I 1
      // 036: istore 6
      // 038: iload 1
      // 039: aload 5
      // 03b: ifnonnull 049
      // 03e: ifle 083
      // 041: goto 048
      // 044: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 047: athrow
      // 048: iload 1
      // 049: aload 5
      // 04b: ifnonnull 062
      // 04e: iload 6
      // 050: if_icmpgt 083
      // 053: goto 05a
      // 056: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 059: athrow
      // 05a: iload 2
      // 05b: goto 062
      // 05e: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 061: athrow
      // 062: aload 5
      // 064: ifnonnull 072
      // 067: ifle 083
      // 06a: goto 071
      // 06d: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 070: athrow
      // 071: iload 2
      // 072: aload 5
      // 074: ifnonnull 0d8
      // 077: iload 6
      // 079: if_icmple 0be
      // 07c: goto 083
      // 07f: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 082: athrow
      // 083: new java/lang/IllegalArgumentException
      // 086: dup
      // 087: iload 1
      // 088: iload 2
      // 089: iload 6
      // 08b: istore 7
      // 08d: istore 8
      // 08f: istore 9
      // 091: sipush 12057
      // 094: ldc2_w 7639902845187858203
      // 097: lload 3
      // 098: lxor
      // 099: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/ls.caS (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09e: iload 9
      // 0a0: ldc "x"
      // 0a2: iload 8
      // 0a4: sipush 2472
      // 0a7: ldc2_w 2848780148768782761
      // 0aa: lload 3
      // 0ab: lxor
      // 0ac: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/ls.caS (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b1: iload 7
      // 0b3: ldc ")"
      // 0b5: invokedynamic makeConcatWithConstants (Ljava/lang/String;ILjava/lang/String;ILjava/lang/String;ILjava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001\u0001\u0001\u0001\u0001\u0001" ]
      // 0ba: invokespecial java/lang/IllegalArgumentException.<init> (Ljava/lang/String;)V
      // 0bd: athrow
      // 0be: aload 0
      // 0bf: iload 1
      // 0c0: putfield sixtwo/ls.field_1482 I
      // 0c3: aload 0
      // 0c4: iload 2
      // 0c5: putfield sixtwo/ls.field_1481 I
      // 0c8: aload 0
      // 0c9: aload 5
      // 0cb: ifnonnull 163
      // 0ce: getfield sixtwo/ls.field_1478 Z
      // 0d1: goto 0d8
      // 0d4: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 0d7: athrow
      // 0d8: ifeq 128
      // 0db: aload 0
      // 0dc: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 0df: aload 0
      // 0e0: getfield sixtwo/ls.field_56738 Ljava/lang/String;
      // 0e3: sipush 30517
      // 0e6: ldc2_w 4860681673635710774
      // 0e9: lload 3
      // 0ea: lxor
      // 0eb: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/ls.caS (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f0: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 0f5: sipush 15875
      // 0f8: ldc2_w 6618878725697346361
      // 0fb: lload 3
      // 0fc: lxor
      // 0fd: invokedynamic b (IJ)I bsm=sixtwo/ls.caV (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 102: getstatic com/mojang/blaze3d/textures/TextureFormat.DEPTH32 Lcom/mojang/blaze3d/textures/TextureFormat;
      // 105: iload 1
      // 106: iload 2
      // 107: bipush 1
      // 108: bipush 1
      // 109: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createTexture (Ljava/lang/String;ILcom/mojang/blaze3d/textures/TextureFormat;IIII)Lcom/mojang/blaze3d/textures/GpuTexture; 8
      // 10e: putfield sixtwo/ls.field_56739 Lcom/mojang/blaze3d/textures/GpuTexture;
      // 111: aload 0
      // 112: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 115: aload 0
      // 116: getfield sixtwo/ls.field_56739 Lcom/mojang/blaze3d/textures/GpuTexture;
      // 119: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createTextureView (Lcom/mojang/blaze3d/textures/GpuTexture;)Lcom/mojang/blaze3d/textures/GpuTextureView; 2
      // 11e: putfield sixtwo/ls.field_60568 Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 121: goto 128
      // 124: invokestatic sixtwo/ls.caO (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 127: athrow
      // 128: aload 0
      // 129: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 12c: aload 0
      // 12d: getfield sixtwo/ls.field_56738 Ljava/lang/String;
      // 130: sipush 9586
      // 133: ldc2_w 7628329538455377266
      // 136: lload 3
      // 137: lxor
      // 138: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/ls.caS (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 13d: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 142: sipush 375
      // 145: ldc2_w 8823180210894087240
      // 148: lload 3
      // 149: lxor
      // 14a: invokedynamic b (IJ)I bsm=sixtwo/ls.caV (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 14f: getstatic com/mojang/blaze3d/textures/TextureFormat.RGBA8 Lcom/mojang/blaze3d/textures/TextureFormat;
      // 152: iload 1
      // 153: iload 2
      // 154: bipush 1
      // 155: iload 1
      // 156: iload 2
      // 157: invokestatic sixtwo/ls.caN (II)I
      // 15a: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createTexture (Ljava/lang/String;ILcom/mojang/blaze3d/textures/TextureFormat;IIII)Lcom/mojang/blaze3d/textures/GpuTexture; 8
      // 15f: putfield sixtwo/ls.field_1475 Lcom/mojang/blaze3d/textures/GpuTexture;
      // 162: aload 0
      // 163: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 166: aload 0
      // 167: getfield sixtwo/ls.field_1475 Lcom/mojang/blaze3d/textures/GpuTexture;
      // 16a: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createTextureView (Lcom/mojang/blaze3d/textures/GpuTexture;)Lcom/mojang/blaze3d/textures/GpuTextureView; 2
      // 16f: putfield sixtwo/ls.field_60567 Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 172: return
   }
}
