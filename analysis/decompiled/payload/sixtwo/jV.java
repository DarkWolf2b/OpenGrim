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

public class jV implements kh<jP> {
   private static final long xWvQW = gb.aYR(-84495922352186167L, -1105693986786572907L, MethodHandles.lookup().lookupClass()).a(269959935127425L);
   private static final String[] DMUUA;
   private static final String[] BSCig;
   private static final Map zObhL = new HashMap(13);

   static {
      long var0 = xWvQW ^ 73985132116772L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[25];
      int var7 = 0;
      String var6 = "\u009e\u009b`\u0089~À]\"\u009aØ\u0001-·\u009eAå \u0018\u008e\u0083/¬©>\u001c°á\u0006Y\u001fâ\u0087ç\u000f\u009f1üÔû\u009a\u0019N\u0000ó\u0086V7do\u0018l\u007f\u0081´HÌ·Q¡Ë\u008f¼&<ñ\u008bÿ¨hÖy\u008a\t\\ ;\u009c~\u008b¿m£\u0085\u0085$ß\u0089\u008cÍ\u008d\u0087\u001f;¤ \u009a\u0015³¨BO\u0001%«¢Ý\u0015\u0010èY\u008fpTõ~ U\u001ahj]\u009c\u008er õÃ\u0011O\u0019I\u0015Ê5¥Á «qå\u008eík)\u0000p±*ù\u009f¥\f6wúÎQ\u0018µ£Iuï;³$FÛÁñúÊÚ\u001b\u008a©/\u0085·\u0010ü\u0081\u0018ñ\u009fÀ [ÇGLáé\u0018\u001bë\u0098Ó\u0004f\u001dBYè<\t¥(\u009b\u0093<ê#©Ê\"#«\u0090Ì\u001c\u008e\u0014%K\u009c\u008exh\u0006ß`'Ýði9!\u009f*wñJÌw)F@\u0018 T\u0089\u009eÙ\u0018>\u000b\u0097i¦zaÙ}SÄêÂL£©M\u0003 he\u0018ïyFa\u0091A¥\u0091üàó5_-ÃÄsÅ\u0010bv\u009få«\u0012°°KE Pqm \tM\u0014\u008d³]\u008fbò\u0013¸\r±\u0017Ç¡¿\u0093ÒvQ´\u0015£*tv\n \u0099\u0005æ\t\u0003 $o\u0087¤\\V;\u001eML@¿®\u0006§\u000eVo ¼^Æ\u009c±&¥ zÚ33\u0017\u0018.\u0099uÉ\u0018D\u0099U\u008d\u001f\u008bä$Ú\u0007ÙËó®_PS4üzÓ\u0010üÖê2\u009dÊ÷Õ[\u008dÍ\u0084míc÷\u0018\u0004½\u0005ÌP\u0013£.\u008d×{VrÅÁQg_ÅTÑ:ÚX\u0018\u009dÃ\u001dvëeòr!\u008fIðÌ¨Ìj<\u0097\u0017f\u0092\u0081)k\u0018\u0088ÿWþN²&öD\u0084\u008eÊ]i\u009bN\u000e\u0017BÍ/Q¿\u001a\u0018\fp\u0014<òÔû2w'ö\u009aà@\u0010e\u009b\u007fÆ&\u0010h*Ö \u008b!ÏÌ\u000fX¦3Ðx\u001b^æ@a&\u0083\u0093(\u0099oßÚ0ú²TÉ\u0080\\íç Y\u0085\u0010\"\u001ax(\u0080Iòàvò¢TzwM;d(³úÄ2èü/[|ôh(+& ªº\u008d´÷\\Ué\u008d£ |76qoìÀ\u0006\u0080\u0015¸\fÕ\u0082tÄv}\u001c3\\ò\u0092]\u001ae RïN\u009a\u00186H\u0097\u001e\u008cö3z\u0082)(v'\u0000\u0095«\"Tù¤÷Çãº\txe";
      int var8 = "\u009e\u009b`\u0089~À]\"\u009aØ\u0001-·\u009eAå \u0018\u008e\u0083/¬©>\u001c°á\u0006Y\u001fâ\u0087ç\u000f\u009f1üÔû\u009a\u0019N\u0000ó\u0086V7do\u0018l\u007f\u0081´HÌ·Q¡Ë\u008f¼&<ñ\u008bÿ¨hÖy\u008a\t\\ ;\u009c~\u008b¿m£\u0085\u0085$ß\u0089\u008cÍ\u008d\u0087\u001f;¤ \u009a\u0015³¨BO\u0001%«¢Ý\u0015\u0010èY\u008fpTõ~ U\u001ahj]\u009c\u008er õÃ\u0011O\u0019I\u0015Ê5¥Á «qå\u008eík)\u0000p±*ù\u009f¥\f6wúÎQ\u0018µ£Iuï;³$FÛÁñúÊÚ\u001b\u008a©/\u0085·\u0010ü\u0081\u0018ñ\u009fÀ [ÇGLáé\u0018\u001bë\u0098Ó\u0004f\u001dBYè<\t¥(\u009b\u0093<ê#©Ê\"#«\u0090Ì\u001c\u008e\u0014%K\u009c\u008exh\u0006ß`'Ýði9!\u009f*wñJÌw)F@\u0018 T\u0089\u009eÙ\u0018>\u000b\u0097i¦zaÙ}SÄêÂL£©M\u0003 he\u0018ïyFa\u0091A¥\u0091üàó5_-ÃÄsÅ\u0010bv\u009få«\u0012°°KE Pqm \tM\u0014\u008d³]\u008fbò\u0013¸\r±\u0017Ç¡¿\u0093ÒvQ´\u0015£*tv\n \u0099\u0005æ\t\u0003 $o\u0087¤\\V;\u001eML@¿®\u0006§\u000eVo ¼^Æ\u009c±&¥ zÚ33\u0017\u0018.\u0099uÉ\u0018D\u0099U\u008d\u001f\u008bä$Ú\u0007ÙËó®_PS4üzÓ\u0010üÖê2\u009dÊ÷Õ[\u008dÍ\u0084míc÷\u0018\u0004½\u0005ÌP\u0013£.\u008d×{VrÅÁQg_ÅTÑ:ÚX\u0018\u009dÃ\u001dvëeòr!\u008fIðÌ¨Ìj<\u0097\u0017f\u0092\u0081)k\u0018\u0088ÿWþN²&öD\u0084\u008eÊ]i\u009bN\u000e\u0017BÍ/Q¿\u001a\u0018\fp\u0014<òÔû2w'ö\u009aà@\u0010e\u009b\u007fÆ&\u0010h*Ö \u008b!ÏÌ\u000fX¦3Ðx\u001b^æ@a&\u0083\u0093(\u0099oßÚ0ú²TÉ\u0080\\íç Y\u0085\u0010\"\u001ax(\u0080Iòàvò¢TzwM;d(³úÄ2èü/[|ôh(+& ªº\u008d´÷\\Ué\u008d£ |76qoìÀ\u0006\u0080\u0015¸\fÕ\u0082tÄv}\u001c3\\ò\u0092]\u001ae RïN\u009a\u00186H\u0097\u001e\u008cö3z\u0082)(v'\u0000\u0095«\"Tù¤÷Çãº\txe"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bNj(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     DMUUA = var9;
                     BSCig = new String[25];
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

                  var6 = "Ð%²û¿Kj\u008c\u001cîÕ\b\u0011i\t?\u0096×Éäè,úk\u0010ê\u0080b\u0083ð\u0003\u0094\u00134nkbYµ\u0006r";
                  var8 = "Ð%²û¿Kj\u008c\u001cîÕ\b\u0011i\t?\u0096×Éäè,úk\u0010ê\u0080b\u0083ð\u0003\u0094\u00134nkbYµ\u0006r".length();
                  var5 = 24;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public void bNg(jP param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jV.xWvQW J
      // 003: ldc2_w 119592211983747
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/jT.bMQ ()Z
      // 00b: invokestatic sixtwo/rm.dip ()Lnet/minecraft/class_241;
      // 00e: astore 5
      // 010: aload 1
      // 011: invokevirtual sixtwo/jP.bKZ ()F
      // 014: fstore 6
      // 016: aload 1
      // 017: invokevirtual sixtwo/jP.bLa ()F
      // 01a: fstore 7
      // 01c: aload 1
      // 01d: invokevirtual sixtwo/jP.bLb ()F
      // 020: fstore 8
      // 022: aload 1
      // 023: invokevirtual sixtwo/jP.bLc ()F
      // 026: fstore 9
      // 028: aload 1
      // 029: invokevirtual sixtwo/jP.bKY ()Lorg/joml/Matrix3x2fStack;
      // 02c: astore 10
      // 02e: istore 4
      // 030: aload 10
      // 032: invokevirtual org/joml/Matrix3x2fStack.m00 ()F
      // 035: fload 6
      // 037: fmul
      // 038: aload 10
      // 03a: invokevirtual org/joml/Matrix3x2fStack.m10 ()F
      // 03d: fload 7
      // 03f: fmul
      // 040: fadd
      // 041: aload 10
      // 043: invokevirtual org/joml/Matrix3x2fStack.m20 ()F
      // 046: fadd
      // 047: fstore 11
      // 049: aload 10
      // 04b: invokevirtual org/joml/Matrix3x2fStack.m01 ()F
      // 04e: fload 6
      // 050: fmul
      // 051: aload 10
      // 053: invokevirtual org/joml/Matrix3x2fStack.m11 ()F
      // 056: fload 7
      // 058: fmul
      // 059: fadd
      // 05a: aload 10
      // 05c: invokevirtual org/joml/Matrix3x2fStack.m21 ()F
      // 05f: fadd
      // 060: fstore 12
      // 062: aload 10
      // 064: invokevirtual org/joml/Matrix3x2fStack.m00 ()F
      // 067: fload 6
      // 069: fload 8
      // 06b: fadd
      // 06c: fmul
      // 06d: aload 10
      // 06f: invokevirtual org/joml/Matrix3x2fStack.m10 ()F
      // 072: fload 7
      // 074: fload 9
      // 076: fadd
      // 077: fmul
      // 078: fadd
      // 079: aload 10
      // 07b: invokevirtual org/joml/Matrix3x2fStack.m20 ()F
      // 07e: fadd
      // 07f: fstore 13
      // 081: aload 10
      // 083: invokevirtual org/joml/Matrix3x2fStack.m01 ()F
      // 086: fload 6
      // 088: fload 8
      // 08a: fadd
      // 08b: fmul
      // 08c: aload 10
      // 08e: invokevirtual org/joml/Matrix3x2fStack.m11 ()F
      // 091: fload 7
      // 093: fload 9
      // 095: fadd
      // 096: fmul
      // 097: fadd
      // 098: aload 10
      // 09a: invokevirtual org/joml/Matrix3x2fStack.m21 ()F
      // 09d: fadd
      // 09e: fstore 14
      // 0a0: fload 11
      // 0a2: aload 5
      // 0a4: getfield net/minecraft/class_241.field_1343 F
      // 0a7: fdiv
      // 0a8: fstore 15
      // 0aa: fload 13
      // 0ac: aload 5
      // 0ae: getfield net/minecraft/class_241.field_1343 F
      // 0b1: fdiv
      // 0b2: fstore 16
      // 0b4: fconst_1
      // 0b5: fload 12
      // 0b7: aload 5
      // 0b9: getfield net/minecraft/class_241.field_1342 F
      // 0bc: fdiv
      // 0bd: fsub
      // 0be: fstore 17
      // 0c0: fconst_1
      // 0c1: fload 14
      // 0c3: aload 5
      // 0c5: getfield net/minecraft/class_241.field_1342 F
      // 0c8: fdiv
      // 0c9: fsub
      // 0ca: fstore 18
      // 0cc: aload 1
      // 0cd: invokevirtual sixtwo/jP.bLf ()Lsixtwo/ld;
      // 0d0: astore 19
      // 0d2: aload 1
      // 0d3: invokevirtual sixtwo/jP.bLj ()F
      // 0d6: fstore 20
      // 0d8: aload 19
      // 0da: invokevirtual sixtwo/ld.topLeft ()F
      // 0dd: aload 19
      // 0df: invokevirtual sixtwo/ld.topRight ()F
      // 0e2: fcmpl
      // 0e3: iload 4
      // 0e5: ifeq 104
      // 0e8: ifne 138
      // 0eb: goto 0f2
      // 0ee: invokestatic sixtwo/jV.bNi (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f1: athrow
      // 0f2: aload 19
      // 0f4: invokevirtual sixtwo/ld.topRight ()F
      // 0f7: aload 19
      // 0f9: invokevirtual sixtwo/ld.bottomLeft ()F
      // 0fc: fcmpl
      // 0fd: goto 104
      // 100: invokestatic sixtwo/jV.bNi (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 103: athrow
      // 104: iload 4
      // 106: ifeq 125
      // 109: ifne 138
      // 10c: goto 113
      // 10f: invokestatic sixtwo/jV.bNi (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 112: athrow
      // 113: aload 19
      // 115: invokevirtual sixtwo/ld.bottomLeft ()F
      // 118: aload 19
      // 11a: invokevirtual sixtwo/ld.bottomRight ()F
      // 11d: fcmpl
      // 11e: goto 125
      // 121: invokestatic sixtwo/jV.bNi (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 124: athrow
      // 125: iload 4
      // 127: ifeq 135
      // 12a: ifne 138
      // 12d: goto 134
      // 130: invokestatic sixtwo/jV.bNi (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 133: athrow
      // 134: bipush 1
      // 135: goto 139
      // 138: bipush 0
      // 139: istore 21
      // 13b: new net/minecraft/class_9799
      // 13e: dup
      // 13f: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 142: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 145: bipush 4
      // 146: imul
      // 147: invokespecial net/minecraft/class_9799.<init> (I)V
      // 14a: astore 22
      // 14c: new net/minecraft/class_287
      // 14f: dup
      // 150: aload 22
      // 152: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 155: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 158: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 15b: astore 23
      // 15d: getstatic sixtwo/jV.FroVm Lsixtwo/kb;
      // 160: aload 23
      // 162: aload 10
      // 164: fload 6
      // 166: fload 7
      // 168: fload 8
      // 16a: fload 9
      // 16c: fload 15
      // 16e: fload 17
      // 170: fload 16
      // 172: fload 18
      // 174: aload 1
      // 175: invokevirtual sixtwo/jP.bLg ()Lsixtwo/mG;
      // 178: invokevirtual sixtwo/kb.uv_quad_region_color (Lnet/minecraft/class_287;Lorg/joml/Matrix3x2fStack;FFFFFFFFLsixtwo/mG;)V
      // 17b: aload 23
      // 17d: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 180: astore 24
      // 182: getstatic sixtwo/kR.azlqG Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 185: aload 24
      // 187: fload 8
      // 189: fload 9
      // 18b: aload 1
      // 18c: iload 21
      // 18e: aload 19
      // 190: fload 20
      // 192: invokedynamic accept (FFLsixtwo/jP;ILsixtwo/ld;F)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/jV.bNh (FFLsixtwo/jP;ILsixtwo/ld;FLcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 197: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 19a: iload 4
      // 19c: ifeq 1dc
      // 19f: aload 24
      // 1a1: ifnull 1d7
      // 1a4: aload 24
      // 1a6: invokevirtual net/minecraft/class_9801.close ()V
      // 1a9: goto 1d7
      // 1ac: invokestatic sixtwo/jV.bNi (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1af: athrow
      // 1b0: astore 25
      // 1b2: aload 24
      // 1b4: iload 4
      // 1b6: ifeq 1c5
      // 1b9: ifnull 1d4
      // 1bc: goto 1c3
      // 1bf: invokestatic sixtwo/jV.bNi (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c2: athrow
      // 1c3: aload 24
      // 1c5: invokevirtual net/minecraft/class_9801.close ()V
      // 1c8: goto 1d4
      // 1cb: astore 26
      // 1cd: aload 25
      // 1cf: aload 26
      // 1d1: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 1d4: aload 25
      // 1d6: athrow
      // 1d7: aload 22
      // 1d9: invokevirtual net/minecraft/class_9799.close ()V
      // 1dc: goto 1f5
      // 1df: astore 23
      // 1e1: aload 22
      // 1e3: invokevirtual net/minecraft/class_9799.close ()V
      // 1e6: goto 1f2
      // 1e9: astore 24
      // 1eb: aload 23
      // 1ed: aload 24
      // 1ef: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 1f2: aload 23
      // 1f4: athrow
      // 1f5: iload 4
      // 1f7: ifne 206
      // 1fa: ldc "kSWPqc"
      // 1fc: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 1ff: goto 206
      // 202: invokestatic sixtwo/jV.bNi (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 205: athrow
      // 206: return
   }

   private static String bNk(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 19360;
      if (BSCig[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])zObhL.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               zObhL.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jV", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = DMUUA[var5].getBytes("ISO-8859-1");
         BSCig[var5] = bNj(((Cipher)var4[0]).doFinal(var9));
      }

      return BSCig[var5];
   }

   private static CallSite bNm(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bNl".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jV" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Object bNl(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bNk(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Throwable bNi(Throwable var0) {
      return var0;
   }

   private static String bNj(byte[] var0) {
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
}
