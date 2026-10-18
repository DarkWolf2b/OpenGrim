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

public class cV extends gg {
   private final cG RJTEl;
   private final cC GYMnk;
   private final kS qIziY;
   private static final long pmcJe = gb.aYR(-2470474728584993321L, 1736357213481642949L, MethodHandles.lookup().lookupClass()).a(83191937741183L);
   private static final String[] PisBp;
   private static final String[] LibVv;
   private static final Map YwHDb = new HashMap(13);
   private static final long[] rPgzr;
   private static final Integer[] AuGko;
   private static final Map cIwBU;

   public cV() {
      long var1 = pmcJe ^ 87443643683697L;
      super(gf.aZL(ZT<"h">(30839, 4573786691099455056L ^ var1), false, gh.nOCvV));
      this.RJTEl = new cG(
            this,
            mr.clS(
               new int[]{
                  ZT<"h">(10438, 7481342897639964384L ^ var1),
                  ZT<"h">(31493, 8784790317653355819L ^ var1),
                  ZT<"h">(22086, 8489949909437956204L ^ var1),
                  ZT<"h">(5100, 2283853247948293597L ^ var1),
                  ZT<"h">(13522, 7142117866345571059L ^ var1)
               }
            )
         )
         .Uf(rD.dlM().bjG().bis());
      int[] var10004 = new int[ZT<"h">(29590, 6021167648284239282L ^ var1)];
      var10004[0] = ZT<"h">(14466, 6249224511740587700L ^ var1);
      var10004[1] = ZT<"h">(26598, 4481184708212191702L ^ var1);
      var10004[2] = ZT<"h">(28643, 4762262605958511060L ^ var1);
      var10004[3] = ZT<"h">(14271, 3567048817175601558L ^ var1);
      var10004[4] = ZT<"h">(1977, 9041910656739348890L ^ var1);
      var10004[5] = ZT<"h">(14058, 6068523825238810823L ^ var1);
      var10004[ZT<"h">(8274, 2157999766625826418L ^ var1)] = ZT<"h">(8981, 7263099376014341437L ^ var1);
      var10004[ZT<"h">(7, 6947096673452463668L ^ var1)] = ZT<"h">(20770, 1093922498910996237L ^ var1);
      var10004[ZT<"h">(6352, 612343699577605874L ^ var1)] = ZT<"h">(12661, 9196392308417963856L ^ var1);
      var10004[ZT<"h">(3486, 9122035330350390188L ^ var1)] = ZT<"h">(31040, 5318967678130777963L ^ var1);
      this.GYMnk = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0);
      this.qIziY = kS.bVE().duk(lh.GpGUc).dul(false).dun(true).duo(false).dup();
   }

   static {
      long var11 = pmcJe ^ 9441958642408L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "k0├Ę\\3\u0000├É\u0004\u0085\u0082=\u009b├ü┬░├Ž\u00010l3/Q^┬ĘI\u0004\f├×T├ĆN\u007f┬Č ;'├Á\u0081\u008d┬Ż┬┐\u0010\u0091+U\u0088h\u0088┬Á\n┬ó\u001c88\u0090┬Â├╗\nv├Ę├ć\u0011v\bI\u0083";
      int var19 = "k0├Ę\\3\u0000├É\u0004\u0085\u0082=\u009b├ü┬░├Ž\u00010l3/Q^┬ĘI\u0004\f├×T├ĆN\u007f┬Č ;'├Á\u0081\u008d┬Ż┬┐\u0010\u0091+U\u0088h\u0088┬Á\n┬ó\u001c88\u0090┬Â├╗\nv├Ę├ć\u0011v\bI\u0083"
         .length();
      char var16 = ' ';
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = ZN(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            PisBp = var20;
            LibVv = new String[2];
            cIwBU = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[22];
            int var3 = 0;
            String var4 = "├ä\u0080┬┤f├ľ\b\u0092┬▓\r\u0098`┬Ż\u0084┬Ą\u007f\\F\u0018├ĄK├┤\u008f┬╣\u0002Z\u0016┬ź\u0084├ŻZ;R├░┬║s29\u00923┬Ž_@D├ź├ós(f├áT1L[\u0003├çj├ş]&┬Â9T\u0012 uEzf┬¬F\u001e\u00816o<h├ó├Ł_n3vS├á:├┐├őZT\u0084├¬\u0081G\u001dC├╗├ś\u009bD├ę├ů├▒┬║P├Ĺ\u008e7┬źfu├Ą\u0001#W&├Öp├ąc├Ż┬╣iv├Á├í\u0016\u0010┬Ž├É\u0005Y5├í├Ş├▒\u001f\u0006s?├ž┬╝\u009c├¬ s|W┬Ât\u0097┬║├Ę\u0090├ź├ş\u0001Y├ŚXA";
            int var5 = "├ä\u0080┬┤f├ľ\b\u0092┬▓\r\u0098`┬Ż\u0084┬Ą\u007f\\F\u0018├ĄK├┤\u008f┬╣\u0002Z\u0016┬ź\u0084├ŻZ;R├░┬║s29\u00923┬Ž_@D├ź├ós(f├áT1L[\u0003├çj├ş]&┬Â9T\u0012 uEzf┬¬F\u001e\u00816o<h├ó├Ł_n3vS├á:├┐├őZT\u0084├¬\u0081G\u001dC├╗├ś\u009bD├ę├ů├▒┬║P├Ĺ\u008e7┬źfu├Ą\u0001#W&├Öp├ąc├Ż┬╣iv├Á├í\u0016\u0010┬Ž├É\u0005Y5├í├Ş├▒\u001f\u0006s?├ž┬╝\u009c├¬ s|W┬Ât\u0097┬║├Ę\u0090├ź├ş\u0001Y├ŚXA"
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
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
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           rPgzr = var6;
                           AuGko = new Integer[22];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "┬«├╣=\\\u009d┬Č├Ť├«n\u0083├ë>┬Ę-UV";
                        var5 = "┬«├╣=\\\u009d┬Č├Ť├«n\u0083├ë>┬Ę-UV".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   @hG
   public void ZK(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cV.pmcJe J
      // 003: ldc2_w 16725379719620
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/cV.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/cV.ZM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 018: athrow
      // 019: aload 1
      // 01a: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 01d: astore 5
      // 01f: aload 1
      // 020: invokevirtual sixtwo/go$sX.bbi ()F
      // 023: fstore 6
      // 025: aload 0
      // 026: getfield sixtwo/cV.RJTEl Lsixtwo/cG;
      // 029: invokevirtual sixtwo/cG.Wh ()I
      // 02c: istore 7
      // 02e: aload 0
      // 02f: getfield sixtwo/cV.GYMnk Lsixtwo/cC;
      // 032: invokevirtual sixtwo/cC.VB ()F
      // 035: fstore 8
      // 037: new net/minecraft/class_9799
      // 03a: dup
      // 03b: getstatic net/minecraft/class_290.field_63455 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 03e: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 041: sipush 707
      // 044: ldc2_w 2025765352078927450
      // 047: lload 2
      // 048: lxor
      // 049: invokedynamic h (IJ)I bsm=sixtwo/cV.ZT (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 04e: imul
      // 04f: invokespecial net/minecraft/class_9799.<init> (I)V
      // 052: astore 9
      // 054: new net/minecraft/class_287
      // 057: dup
      // 058: aload 9
      // 05a: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27377 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 05d: getstatic net/minecraft/class_290.field_63455 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 060: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 063: astore 10
      // 065: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 068: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 06b: invokevirtual net/minecraft/class_638.method_18456 ()Ljava/util/List;
      // 06e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 073: astore 11
      // 075: aload 11
      // 077: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 07c: ifeq 0ca
      // 07f: aload 11
      // 081: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 086: checkcast net/minecraft/class_742
      // 089: astore 12
      // 08b: aload 12
      // 08d: aload 4
      // 08f: ifnonnull 0a4
      // 092: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 095: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 098: if_acmpeq 075
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/cV.ZM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0a1: athrow
      // 0a2: aload 12
      // 0a4: invokestatic sixtwo/jJ.bIB (Lnet/minecraft/class_1297;)Z
      // 0a7: ifne 0b6
      // 0aa: aload 4
      // 0ac: ifnull 075
      // 0af: goto 0b6
      // 0b2: invokestatic sixtwo/cV.ZM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0b5: athrow
      // 0b6: aload 5
      // 0b8: aload 10
      // 0ba: fload 6
      // 0bc: aload 12
      // 0be: iload 7
      // 0c0: fload 8
      // 0c2: invokestatic sixtwo/kq.bQG (Lnet/minecraft/class_4587;Lnet/minecraft/class_287;FLnet/minecraft/class_742;IF)V
      // 0c5: aload 4
      // 0c7: ifnull 075
      // 0ca: aload 10
      // 0cc: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 0cf: astore 11
      // 0d1: aload 11
      // 0d3: aload 4
      // 0d5: ifnonnull 0ff
      // 0d8: ifnull 0fd
      // 0db: goto 0e2
      // 0de: invokestatic sixtwo/cV.ZM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e1: athrow
      // 0e2: getstatic sixtwo/kR.hvBSz Lsixtwo/kO;
      // 0e5: aload 0
      // 0e6: getfield sixtwo/cV.qIziY Lsixtwo/kS;
      // 0e9: invokevirtual sixtwo/kO.bUZ (Lsixtwo/kS;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0ec: aload 11
      // 0ee: invokedynamic accept ()Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/cV.ZL (Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 0f3: invokestatic sixtwo/lF.cfQ (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 0f6: goto 0fd
      // 0f9: invokestatic sixtwo/cV.ZM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0fc: athrow
      // 0fd: aload 11
      // 0ff: aload 4
      // 101: ifnonnull 110
      // 104: ifnull 13d
      // 107: goto 10e
      // 10a: invokestatic sixtwo/cV.ZM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10d: athrow
      // 10e: aload 11
      // 110: invokevirtual net/minecraft/class_9801.close ()V
      // 113: goto 13d
      // 116: astore 12
      // 118: aload 11
      // 11a: aload 4
      // 11c: ifnonnull 12b
      // 11f: ifnull 13a
      // 122: goto 129
      // 125: invokestatic sixtwo/cV.ZM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 128: athrow
      // 129: aload 11
      // 12b: invokevirtual net/minecraft/class_9801.close ()V
      // 12e: goto 13a
      // 131: astore 13
      // 133: aload 12
      // 135: aload 13
      // 137: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 13a: aload 12
      // 13c: athrow
      // 13d: aload 9
      // 13f: invokevirtual net/minecraft/class_9799.close ()V
      // 142: goto 15b
      // 145: astore 10
      // 147: aload 9
      // 149: invokevirtual net/minecraft/class_9799.close ()V
      // 14c: goto 158
      // 14f: astore 11
      // 151: aload 10
      // 153: aload 11
      // 155: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 158: aload 10
      // 15a: athrow
      // 15b: return
   }

   private static Throwable ZM(Throwable var0) {
      return var0;
   }

   private static CallSite ZQ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ZP".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cV" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite ZT(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ZS".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cV" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String ZN(byte[] var0) {
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

   private static String ZO(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 3014;
      if (LibVv[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])YwHDb.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               YwHDb.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cV", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = PisBp[var5].getBytes("ISO-8859-1");
         LibVv[var5] = ZN(((Cipher)var4[0]).doFinal(var9));
      }

      return LibVv[var5];
   }

   private static int ZR(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29880;
      if (AuGko[var3] == null) {
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
         long var5 = rPgzr[var3];
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
         Object[] var9 = (Object[])cIwBU.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               cIwBU.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cV", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         AuGko[var3] = var15;
      }

      return AuGko[var3];
   }

   private static int ZS(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ZR(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Object ZP(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = ZO(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
