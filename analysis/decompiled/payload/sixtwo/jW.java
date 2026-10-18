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
import net.minecraft.class_287;

public class jW implements kh<jO> {
   private static final long LJoTc = gb.aYR(-4751435363820668798L, 5791048156308862445L, MethodHandles.lookup().lookupClass()).a(184724111238064L);
   private static final String[] xudpm;
   private static final String[] zqpdo;
   private static final Map GcFSr = new HashMap(13);

   static {
      long var0 = LJoTc ^ 100620001438449L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[6];
      int var7 = 0;
      String var6 = "j\u0086'\u0080+V\u0018z \u0018´P\u009d\u0092Ï© w\u001e\r\u0089}EQ6kt\u0005ýbÏ\u0014ø\u0000J¥\t-SB\u0015ÊÕ»}ò¢k\u0091\u0010Ñá7Ì3wN§ \u0002[fc!pt \u001d\u0081MF\u0092Hä\u008b\u009e\u0097\u007f\u008b\f§s´m÷µàí,d_>ZÿÔ\u0091Áwé";
      int var8 = "j\u0086'\u0080+V\u0018z \u0018´P\u009d\u0092Ï© w\u001e\r\u0089}EQ6kt\u0005ýbÏ\u0014ø\u0000J¥\t-SB\u0015ÊÕ»}ò¢k\u0091\u0010Ñá7Ì3wN§ \u0002[fc!pt \u001d\u0081MF\u0092Hä\u008b\u009e\u0097\u007f\u008b\f§s´m÷µàí,d_>ZÿÔ\u0091Áwé"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bNv(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     xudpm = var9;
                     zqpdo = new String[6];
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

                  var6 = "B\u008esÞ\u001bü\u0003¤÷.5ª\u0017\u009a¨\t\u0084I9\u001b\u000b\u0097ï\u008e«ÎÆþ\\\u001dãU C*\bw\u008b\u0012Ï©\u00801²ÁPc5IË\u009a\u0085N¤\u0098\u0093þj²\u0090·Ï$\fÆ";
                  var8 = "B\u008esÞ\u001bü\u0003¤÷.5ª\u0017\u009a¨\t\u0084I9\u001b\u000b\u0097ï\u008e«ÎÆþ\\\u001dãU C*\bw\u008b\u0012Ï©\u00801²ÁPc5IË\u009a\u0085N¤\u0098\u0093þj²\u0090·Ï$\fÆ"
                     .length();
                  var5 = ' ';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public void bNn(jO param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jW.LJoTc J
      // 03: ldc2_w 122923910231498
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jT.bMQ ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: aload 1
      // 0f: iload 4
      // 11: ifeq 2f
      // 14: invokevirtual sixtwo/jW.bNr (Lsixtwo/jO;)Z
      // 17: ifeq 2d
      // 1a: goto 21
      // 1d: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 20: athrow
      // 21: aload 0
      // 22: aload 1
      // 23: invokevirtual sixtwo/jW.bNo (Lsixtwo/jO;)V
      // 26: goto 2d
      // 29: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2c: athrow
      // 2d: aload 0
      // 2e: aload 1
      // 2f: invokevirtual sixtwo/jW.bNp (Lsixtwo/jO;)V
      // 32: return
   }

   private void bNp(jO param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jW.LJoTc J
      // 03: ldc2_w 118026128184716
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jT.bMQ ()Z
      // 0b: new net/minecraft/class_9799
      // 0e: dup
      // 0f: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 12: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 15: bipush 4
      // 16: imul
      // 17: invokespecial net/minecraft/class_9799.<init> (I)V
      // 1a: astore 5
      // 1c: istore 4
      // 1e: new net/minecraft/class_287
      // 21: dup
      // 22: aload 5
      // 24: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 27: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 2a: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 2d: astore 6
      // 2f: aload 0
      // 30: aload 6
      // 32: aload 1
      // 33: aload 1
      // 34: invokevirtual sixtwo/jO.bKi ()Lsixtwo/mG;
      // 37: invokevirtual sixtwo/jW.bNq (Lnet/minecraft/class_287;Lsixtwo/jO;Lsixtwo/mG;)V
      // 3a: aload 6
      // 3c: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 3f: astore 7
      // 41: getstatic sixtwo/kR.cbSJp Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 44: aload 7
      // 46: aload 1
      // 47: invokedynamic accept (Lsixtwo/jO;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/jW.bNs (Lsixtwo/jO;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 4c: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 4f: iload 4
      // 51: ifeq 91
      // 54: aload 7
      // 56: ifnull 8c
      // 59: aload 7
      // 5b: invokevirtual net/minecraft/class_9801.close ()V
      // 5e: goto 8c
      // 61: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 64: athrow
      // 65: astore 8
      // 67: aload 7
      // 69: iload 4
      // 6b: ifeq 7a
      // 6e: ifnull 89
      // 71: goto 78
      // 74: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 77: athrow
      // 78: aload 7
      // 7a: invokevirtual net/minecraft/class_9801.close ()V
      // 7d: goto 89
      // 80: astore 9
      // 82: aload 8
      // 84: aload 9
      // 86: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 89: aload 8
      // 8b: athrow
      // 8c: aload 5
      // 8e: invokevirtual net/minecraft/class_9799.close ()V
      // 91: goto aa
      // 94: astore 6
      // 96: aload 5
      // 98: invokevirtual net/minecraft/class_9799.close ()V
      // 9b: goto a7
      // 9e: astore 7
      // a0: aload 6
      // a2: aload 7
      // a4: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // a7: aload 6
      // a9: athrow
      // aa: return
   }

   private static Object bNx(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bNw(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private void bNo(jO param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jW.LJoTc J
      // 03: ldc2_w 97484327513161
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jT.bMQ ()Z
      // 0b: new net/minecraft/class_9799
      // 0e: dup
      // 0f: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 12: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 15: bipush 4
      // 16: imul
      // 17: invokespecial net/minecraft/class_9799.<init> (I)V
      // 1a: astore 5
      // 1c: istore 4
      // 1e: new net/minecraft/class_287
      // 21: dup
      // 22: aload 5
      // 24: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 27: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 2a: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 2d: astore 6
      // 2f: aload 0
      // 30: aload 6
      // 32: aload 1
      // 33: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 36: invokevirtual sixtwo/jW.bNq (Lnet/minecraft/class_287;Lsixtwo/jO;Lsixtwo/mG;)V
      // 39: aload 6
      // 3b: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 3e: astore 7
      // 40: getstatic sixtwo/kR.ippae Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 43: aload 7
      // 45: aload 1
      // 46: invokedynamic accept (Lsixtwo/jO;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/jW.bNt (Lsixtwo/jO;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 4b: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 4e: iload 4
      // 50: ifeq 90
      // 53: aload 7
      // 55: ifnull 8b
      // 58: aload 7
      // 5a: invokevirtual net/minecraft/class_9801.close ()V
      // 5d: goto 8b
      // 60: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 63: athrow
      // 64: astore 8
      // 66: aload 7
      // 68: iload 4
      // 6a: ifeq 79
      // 6d: ifnull 88
      // 70: goto 77
      // 73: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 76: athrow
      // 77: aload 7
      // 79: invokevirtual net/minecraft/class_9801.close ()V
      // 7c: goto 88
      // 7f: astore 9
      // 81: aload 8
      // 83: aload 9
      // 85: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 88: aload 8
      // 8a: athrow
      // 8b: aload 5
      // 8d: invokevirtual net/minecraft/class_9799.close ()V
      // 90: goto a9
      // 93: astore 6
      // 95: aload 5
      // 97: invokevirtual net/minecraft/class_9799.close ()V
      // 9a: goto a6
      // 9d: astore 7
      // 9f: aload 6
      // a1: aload 7
      // a3: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // a6: aload 6
      // a8: athrow
      // a9: return
   }

   private static String bNw(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 15745;
      if (zqpdo[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])GcFSr.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               GcFSr.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jW", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = xudpm[var5].getBytes("ISO-8859-1");
         zqpdo[var5] = bNv(((Cipher)var4[0]).doFinal(var9));
      }

      return zqpdo[var5];
   }

   private static Throwable bNu(Throwable var0) {
      return var0;
   }

   private boolean bNr(jO param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jW.LJoTc J
      // 003: ldc2_w 35725380036478
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/jT.bMQ ()Z
      // 00b: istore 4
      // 00d: aload 1
      // 00e: iload 4
      // 010: ifeq 02d
      // 013: invokevirtual sixtwo/jO.bJG ()Z
      // 016: ifne 02c
      // 019: goto 020
      // 01c: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01f: athrow
      // 020: aload 1
      // 021: invokevirtual sixtwo/jO.bKi ()Lsixtwo/mG;
      // 024: invokevirtual sixtwo/mG.cnW ()Z
      // 027: ireturn
      // 028: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 02b: athrow
      // 02c: aload 1
      // 02d: invokevirtual sixtwo/jO.bKj ()Lsixtwo/la;
      // 030: astore 5
      // 032: aload 5
      // 034: invokevirtual sixtwo/la.bWQ ()Z
      // 037: iload 4
      // 039: ifeq 0c5
      // 03c: ifne 0c4
      // 03f: goto 046
      // 042: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 045: athrow
      // 046: aload 5
      // 048: invokevirtual sixtwo/la.bXe ()Lsixtwo/mG;
      // 04b: invokevirtual sixtwo/mG.cnW ()Z
      // 04e: iload 4
      // 050: ifeq 0bf
      // 053: goto 05a
      // 056: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 059: athrow
      // 05a: ifne 0be
      // 05d: goto 064
      // 060: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 063: athrow
      // 064: aload 5
      // 066: invokevirtual sixtwo/la.bXf ()Lsixtwo/mG;
      // 069: invokevirtual sixtwo/mG.cnW ()Z
      // 06c: iload 4
      // 06e: ifeq 0bf
      // 071: goto 078
      // 074: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 077: athrow
      // 078: ifne 0be
      // 07b: goto 082
      // 07e: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 081: athrow
      // 082: aload 5
      // 084: invokevirtual sixtwo/la.bXg ()Lsixtwo/mG;
      // 087: invokevirtual sixtwo/mG.cnW ()Z
      // 08a: iload 4
      // 08c: ifeq 0bf
      // 08f: goto 096
      // 092: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 095: athrow
      // 096: ifne 0be
      // 099: goto 0a0
      // 09c: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 09f: athrow
      // 0a0: aload 5
      // 0a2: invokevirtual sixtwo/la.bXh ()Lsixtwo/mG;
      // 0a5: invokevirtual sixtwo/mG.cnW ()Z
      // 0a8: iload 4
      // 0aa: ifeq 0bf
      // 0ad: goto 0b4
      // 0b0: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0b3: athrow
      // 0b4: ifeq 0c2
      // 0b7: goto 0be
      // 0ba: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0bd: athrow
      // 0be: bipush 1
      // 0bf: goto 0c3
      // 0c2: bipush 0
      // 0c3: ireturn
      // 0c4: bipush 0
      // 0c5: istore 6
      // 0c7: iload 6
      // 0c9: aload 5
      // 0cb: invokevirtual sixtwo/la.bWR ()I
      // 0ce: if_icmpge 100
      // 0d1: aload 5
      // 0d3: iload 6
      // 0d5: invokevirtual sixtwo/la.bWS (I)Lsixtwo/mG;
      // 0d8: invokevirtual sixtwo/mG.cnW ()Z
      // 0db: iload 4
      // 0dd: ifeq 101
      // 0e0: iload 4
      // 0e2: ifeq 0f7
      // 0e5: goto 0ec
      // 0e8: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0eb: athrow
      // 0ec: ifeq 0f8
      // 0ef: goto 0f6
      // 0f2: invokestatic sixtwo/jW.bNu (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f5: athrow
      // 0f6: bipush 1
      // 0f7: ireturn
      // 0f8: iinc 6 1
      // 0fb: iload 4
      // 0fd: ifne 0c7
      // 100: bipush 0
      // 101: ireturn
   }

   private void bNq(class_287 var1, jO var2, mG var3) {
      float var4 = var2.bKb();
      float var5 = var2.bKc();
      float var6 = var2.bKd();
      float var7 = var2.bKe();
      float var8 = Math.max(1.0F, var2.bKm());
      float var9 = var2.bKt() - var8 / var6;
      float var10 = var2.bKu() - var8 / var7;
      float var11 = var2.bKv() + var8 / var6;
      float var12 = var2.bKw() + var8 / var7;
      FroVm.uv_quad_region_color(var1, var2.bKa(), var4 - var8, var5 - var8, var6 + var8 * 2.0F, var7 + var8 * 2.0F, var9, var10, var11, var12, var3);
   }

   private static String bNv(byte[] var0) {
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

   private static CallSite bNy(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bNx".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jW" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
