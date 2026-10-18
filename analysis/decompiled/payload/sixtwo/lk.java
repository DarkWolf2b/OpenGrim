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
import org.joml.Matrix4f;

public class lk {
   private static final long DJuVT = gb.aYR(-8081307210028646611L, 1016840739963391374L, MethodHandles.lookup().lookupClass()).a(173437716146327L);
   private static final String[] ofRvq;
   private static final String[] FvEPT;
   private static final Map BGzjS = new HashMap(13);

   static {
      long var0 = DJuVT ^ 135777116084386L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[13];
      int var7 = 0;
      String var6 = "ÛÙ÷\u008cpp8±\u009c÷\u0005\u0019\u0086J\u001f\u0019\u0006Nç\u0099H-×\u0010Uï\u008aX5n\u001aæ \u0095\u0088ZéE\u0090GyÞV²\u0013Eà\u008f\u000e[¹\u0012\u00958\u0093[¥\u0082§ä5ÅK¤i \u0017¢ùÆ\u0000\u0010cÆ\u0087\"\u0086¸ïÍ\fU\u001d¢t\u0093\u00975'£Ã\u008c\u0092\u00145\u0005ÜÅ\u0010òSù¤£\u009f\u0092*\u001b®3\"\u0095Ô\u0006º\u0018}\u0002»O\u0016NtÑºKþG &Ø«x¶I\u001cI\u008e2\u0019(ÃÑ\u008dSµ\f¢Î¯\u0007÷\u0099Â¥\bà\u008b\u000bÎe \u0087d\u0087ä\u009eØÖ&©\u0083Ò{I¶À\n\u008ccë\u0010Ó÷ízñ^3¢Ô¥\u009aü©¹ÐK\u0010\u0005gC×hÉr&§Äv°ßî\u0010\n mp6\u0083ïè\u0081ÛÐW+\u0081a\u0006öDç.ùÉ\u009d>,Ìþ\u009eÇ¨ãåq\u0096 +¯\"\u000bp¥è\u0088\u009eÂ\u009c\u0010Ð(ådKÖ\u0092\u0083ÍÑ\u0018oÔòUêÅ\u000epT\u0018¦Ú3\u0018n\u0006c¯·ÉR\u000f-*\u0002\u0013\u0000\u008f\u009aþ\u00883Ûð";
      int var8 = "ÛÙ÷\u008cpp8±\u009c÷\u0005\u0019\u0086J\u001f\u0019\u0006Nç\u0099H-×\u0010Uï\u008aX5n\u001aæ \u0095\u0088ZéE\u0090GyÞV²\u0013Eà\u008f\u000e[¹\u0012\u00958\u0093[¥\u0082§ä5ÅK¤i \u0017¢ùÆ\u0000\u0010cÆ\u0087\"\u0086¸ïÍ\fU\u001d¢t\u0093\u00975'£Ã\u008c\u0092\u00145\u0005ÜÅ\u0010òSù¤£\u009f\u0092*\u001b®3\"\u0095Ô\u0006º\u0018}\u0002»O\u0016NtÑºKþG &Ø«x¶I\u001cI\u008e2\u0019(ÃÑ\u008dSµ\f¢Î¯\u0007÷\u0099Â¥\bà\u008b\u000bÎe \u0087d\u0087ä\u009eØÖ&©\u0083Ò{I¶À\n\u008ccë\u0010Ó÷ízñ^3¢Ô¥\u009aü©¹ÐK\u0010\u0005gC×hÉr&§Äv°ßî\u0010\n mp6\u0083ïè\u0081ÛÐW+\u0081a\u0006öDç.ùÉ\u009d>,Ìþ\u009eÇ¨ãåq\u0096 +¯\"\u000bp¥è\u0088\u009eÂ\u009c\u0010Ð(ådKÖ\u0092\u0083ÍÑ\u0018oÔòUêÅ\u000epT\u0018¦Ú3\u0018n\u0006c¯·ÉR\u000f-*\u0002\u0013\u0000\u008f\u009aþ\u00883Ûð"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bZg(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     ofRvq = var9;
                     FvEPT = new String[13];
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

                  var6 = "y\u001b°Àª\u008bJÀ´\u0007!\"¾¥±\"g\u0002\u0002É\u0016W~j \u001f\u0011\u0087\u009f?'Àèy[¢\u0085¤¿H$*DÇ\u001a4ñò×\u0090Ýäñ\u0093¤ë&";
                  var8 = "y\u001b°Àª\u008bJÀ´\u0007!\"¾¥±\"g\u0002\u0002É\u0016W~j \u001f\u0011\u0087\u009f?'Àèy[¢\u0085¤¿H$*DÇ\u001a4ñò×\u0090Ýäñ\u0093¤ë&"
                     .length();
                  var5 = 24;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   private static String bZg(byte[] var0) {
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

   private static CallSite bZj(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bZi".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lk" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Object bZi(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bZh(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Throwable bZf(Throwable var0) {
      return var0;
   }

   private static String bZh(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 17778;
      if (FvEPT[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])BGzjS.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               BGzjS.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/lk", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = ofRvq[var5].getBytes("ISO-8859-1");
         FvEPT[var5] = bZg(((Cipher)var4[0]).doFinal(var9));
      }

      return FvEPT[var5];
   }

   public static void bZd(lj param0, char param1, float param2, int param3, Matrix4f param4, float param5, float param6, float param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lk.DJuVT J
      // 003: ldc2_w 95944700019166
      // 006: lxor
      // 007: lstore 8
      // 009: ldc 0.05
      // 00b: fstore 11
      // 00d: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 010: ldc 0.5
      // 012: fstore 12
      // 014: aload 0
      // 015: invokevirtual sixtwo/lj.bYQ ()Ljava/util/Map;
      // 018: iload 1
      // 019: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 01c: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 021: checkcast sixtwo/ll
      // 024: astore 13
      // 026: fload 6
      // 028: aload 13
      // 02a: invokevirtual sixtwo/ll.bZs ()F
      // 02d: fload 2
      // 02e: fmul
      // 02f: fadd
      // 030: fstore 14
      // 032: astore 10
      // 034: new net/minecraft/class_9799
      // 037: dup
      // 038: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 03b: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 03e: bipush 4
      // 03f: imul
      // 040: invokespecial net/minecraft/class_9799.<init> (I)V
      // 043: astore 15
      // 045: new net/minecraft/class_287
      // 048: dup
      // 049: aload 15
      // 04b: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 04e: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 051: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 054: astore 16
      // 056: aload 13
      // 058: aload 4
      // 05a: aload 16
      // 05c: fload 2
      // 05d: fload 5
      // 05f: fload 14
      // 061: fload 7
      // 063: iload 3
      // 064: invokevirtual sixtwo/ll.bZk (Lorg/joml/Matrix4f;Lnet/minecraft/class_4588;FFFFI)F
      // 067: pop
      // 068: aload 16
      // 06a: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 06d: astore 17
      // 06f: aload 17
      // 071: aload 10
      // 073: ifnull 09d
      // 076: ifnull 09b
      // 079: goto 080
      // 07c: invokestatic sixtwo/lk.bZf (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 07f: athrow
      // 080: getstatic sixtwo/kR.mQUZT Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 083: aload 17
      // 085: aload 0
      // 086: fload 11
      // 088: fload 12
      // 08a: fload 5
      // 08c: invokedynamic accept (Lsixtwo/lj;FFF)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/lk.bZe (Lsixtwo/lj;FFFLcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 091: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 094: goto 09b
      // 097: invokestatic sixtwo/lk.bZf (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 09a: athrow
      // 09b: aload 17
      // 09d: aload 10
      // 09f: ifnull 0ae
      // 0a2: ifnull 0db
      // 0a5: goto 0ac
      // 0a8: invokestatic sixtwo/lk.bZf (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ab: athrow
      // 0ac: aload 17
      // 0ae: invokevirtual net/minecraft/class_9801.close ()V
      // 0b1: goto 0db
      // 0b4: astore 18
      // 0b6: aload 17
      // 0b8: aload 10
      // 0ba: ifnull 0c9
      // 0bd: ifnull 0d8
      // 0c0: goto 0c7
      // 0c3: invokestatic sixtwo/lk.bZf (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0c6: athrow
      // 0c7: aload 17
      // 0c9: invokevirtual net/minecraft/class_9801.close ()V
      // 0cc: goto 0d8
      // 0cf: astore 19
      // 0d1: aload 18
      // 0d3: aload 19
      // 0d5: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 0d8: aload 18
      // 0da: athrow
      // 0db: aload 15
      // 0dd: invokevirtual net/minecraft/class_9799.close ()V
      // 0e0: goto 0f9
      // 0e3: astore 16
      // 0e5: aload 15
      // 0e7: invokevirtual net/minecraft/class_9799.close ()V
      // 0ea: goto 0f6
      // 0ed: astore 17
      // 0ef: aload 16
      // 0f1: aload 17
      // 0f3: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 0f6: aload 16
      // 0f8: athrow
      // 0f9: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 0fc: ifnonnull 10b
      // 0ff: ldc "sjiyt"
      // 101: invokestatic sixtwo/lj.bYU (Ljava/lang/String;)V
      // 104: goto 10b
      // 107: invokestatic sixtwo/lk.bZf (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10a: athrow
      // 10b: return
   }
}
