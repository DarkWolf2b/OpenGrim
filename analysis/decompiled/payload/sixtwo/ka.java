package sixtwo;

import com.mojang.blaze3d.textures.GpuTextureView;
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
import net.minecraft.class_1044;
import net.minecraft.class_12137;

public class ka implements kh<jS> {
   private static final long Svclk = gb.aYR(800389536625626810L, -8325731754206593775L, MethodHandles.lookup().lookupClass()).a(229622370642876L);
   private static final String[] KqBiZ;
   private static final String[] nkwQm;
   private static final Map FWlbV = new HashMap(13);

   static {
      long var0 = Svclk ^ 23220963582867L;
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
      String var6 = "v\u0099Y7w\u0099Ê\u001b~B2Ï>k¾\u009d\u0096áé\u0013òKgãÀU¥\u008e7\u0096v\u0003\u0018×¹¼å\u0005X\n®¸ñm)01\u0085e\u001d6zdÒÿ\u0019\u0090 ¾aº\u009chÿSõÞþÇNy~rø(\u0099¨=\u001a³\u009cg\u0014\u0010T\f|A\u008b\u0086\u00185lú¶À-ÝH\u000bx5\u0000CûD\u0082¬\b²¡Ð¨\u00927 Î\"\u00800&\u0016¹\u0092ªôþ¬VÃb[Íøîâ\u0098Z\u0090Ï\n\u0016\u008dT\u0083å\u008ci \u001aÍºÖ£ð\\§Fºnk\u0088è\u0089\u000e\u0091¥$\r\u0091òÈ\"Y´F\u0012Ká©r Úy\u0011Åq\u0086\u0018\u000fI\u001c\"³[$Í´(ü£¬\u0006¦øÀÿ\u0095Ä\u007f\u0084\u009fö6\u0018Òoh\u0017c{«Åý]ÐÞ\u009c\u009236#Ôj«\u008eó\u0001e `m\u009f\t\u0014$\u0012\u0084G¼\\9\u0010f±ý\u0094677\u0087Ó7\u0007\u0094h\u008f\u000fÂ\b´®\u0018YLJ[@í\u0094\tI5³\u0013ßiò\u00adó-C_ägÙ\u0091 \u0013M×Å+\u008f,\u0001°XáÅ£\u0085\u0086(ïëîÏÊ$Gt?Ûu\u0081J.\u0093\\";
      int var8 = "v\u0099Y7w\u0099Ê\u001b~B2Ï>k¾\u009d\u0096áé\u0013òKgãÀU¥\u008e7\u0096v\u0003\u0018×¹¼å\u0005X\n®¸ñm)01\u0085e\u001d6zdÒÿ\u0019\u0090 ¾aº\u009chÿSõÞþÇNy~rø(\u0099¨=\u001a³\u009cg\u0014\u0010T\f|A\u008b\u0086\u00185lú¶À-ÝH\u000bx5\u0000CûD\u0082¬\b²¡Ð¨\u00927 Î\"\u00800&\u0016¹\u0092ªôþ¬VÃb[Íøîâ\u0098Z\u0090Ï\n\u0016\u008dT\u0083å\u008ci \u001aÍºÖ£ð\\§Fºnk\u0088è\u0089\u000e\u0091¥$\r\u0091òÈ\"Y´F\u0012Ká©r Úy\u0011Åq\u0086\u0018\u000fI\u001c\"³[$Í´(ü£¬\u0006¦øÀÿ\u0095Ä\u007f\u0084\u009fö6\u0018Òoh\u0017c{«Åý]ÐÞ\u009c\u009236#Ôj«\u008eó\u0001e `m\u009f\t\u0014$\u0012\u0084G¼\\9\u0010f±ý\u0094677\u0087Ó7\u0007\u0094h\u008f\u000fÂ\b´®\u0018YLJ[@í\u0094\tI5³\u0013ßiò\u00adó-C_ägÙ\u0091 \u0013M×Å+\u008f,\u0001°XáÅ£\u0085\u0086(ïëîÏÊ$Gt?Ûu\u0081J.\u0093\\"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bNW(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     KqBiZ = var9;
                     nkwQm = new String[13];
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

                  var6 = "¥\u009aéa\u0080Á\u009d>\u009cº@úÄ9\u0007;½ý~{×ô\u008b§\u0012\u009f\bsK\u001b*\u0087\u0010}«÷©i&\u001fë²\u0018üÖ-0*2";
                  var8 = "¥\u009aéa\u0080Á\u009d>\u009cº@úÄ9\u0007;½ý~{×ô\u008b§\u0012\u009f\bsK\u001b*\u0087\u0010}«÷©i&\u001fë²\u0018üÖ-0*2".length();
                  var5 = ' ';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public void bNR(jS param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ka.Svclk J
      // 003: ldc2_w 22889794249675
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/jT.bMQ ()Z
      // 00b: aload 1
      // 00c: invokevirtual sixtwo/jS.bMB ()Lsixtwo/mG;
      // 00f: astore 5
      // 011: istore 4
      // 013: aload 1
      // 014: invokevirtual sixtwo/jS.bMx ()Lsixtwo/la;
      // 017: astore 6
      // 019: aload 5
      // 01b: invokevirtual sixtwo/mG.cnW ()Z
      // 01e: iload 4
      // 020: ifeq 042
      // 023: ifeq 03e
      // 026: goto 02d
      // 029: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 02c: athrow
      // 02d: aload 6
      // 02f: ifnonnull 03e
      // 032: goto 039
      // 035: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 038: athrow
      // 039: return
      // 03a: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 03d: athrow
      // 03e: aload 1
      // 03f: invokevirtual sixtwo/jS.bMb ()Z
      // 042: istore 7
      // 044: aload 0
      // 045: aload 1
      // 046: invokevirtual sixtwo/ka.bNS (Lsixtwo/jS;)Lcom/mojang/blaze3d/textures/GpuTextureView;
      // 049: astore 8
      // 04b: aload 0
      // 04c: aload 1
      // 04d: invokevirtual sixtwo/ka.bNT (Lsixtwo/jS;)Lnet/minecraft/class_12137;
      // 050: astore 9
      // 052: iload 7
      // 054: ifeq 068
      // 057: aload 8
      // 059: ifnonnull 068
      // 05c: goto 063
      // 05f: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 062: athrow
      // 063: return
      // 064: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 067: athrow
      // 068: new net/minecraft/class_9799
      // 06b: dup
      // 06c: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 06f: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 072: bipush 4
      // 073: imul
      // 074: invokespecial net/minecraft/class_9799.<init> (I)V
      // 077: astore 10
      // 079: new net/minecraft/class_287
      // 07c: dup
      // 07d: aload 10
      // 07f: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 082: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 085: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 088: astore 11
      // 08a: getstatic sixtwo/ka.FroVm Lsixtwo/kb;
      // 08d: aload 11
      // 08f: aload 1
      // 090: invokevirtual sixtwo/jS.bMo ()Lorg/joml/Matrix3x2fStack;
      // 093: aload 1
      // 094: invokevirtual sixtwo/jS.bMp ()F
      // 097: aload 1
      // 098: invokevirtual sixtwo/jS.bMq ()F
      // 09b: aload 1
      // 09c: invokevirtual sixtwo/jS.bMr ()F
      // 09f: aload 1
      // 0a0: invokevirtual sixtwo/jS.bMs ()F
      // 0a3: aload 1
      // 0a4: invokevirtual sixtwo/jS.bMH ()F
      // 0a7: aload 1
      // 0a8: invokevirtual sixtwo/jS.bMI ()F
      // 0ab: aload 1
      // 0ac: invokevirtual sixtwo/jS.bMJ ()F
      // 0af: aload 1
      // 0b0: invokevirtual sixtwo/jS.bMK ()F
      // 0b3: aload 5
      // 0b5: invokevirtual sixtwo/kb.uv_quad_region_color (Lnet/minecraft/class_287;Lorg/joml/Matrix3x2fStack;FFFFFFFFLsixtwo/mG;)V
      // 0b8: aload 11
      // 0ba: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 0bd: astore 12
      // 0bf: iload 7
      // 0c1: ifeq 0ce
      // 0c4: getstatic sixtwo/kR.cdFxE Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0c7: goto 0d1
      // 0ca: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0cd: athrow
      // 0ce: getstatic sixtwo/kR.cHZhA Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0d1: aload 12
      // 0d3: iload 7
      // 0d5: aload 8
      // 0d7: aload 9
      // 0d9: aload 1
      // 0da: aload 6
      // 0dc: invokedynamic accept (ZLcom/mojang/blaze3d/textures/GpuTextureView;Lnet/minecraft/class_12137;Lsixtwo/jS;Lsixtwo/la;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/ka.bNU (ZLcom/mojang/blaze3d/textures/GpuTextureView;Lnet/minecraft/class_12137;Lsixtwo/jS;Lsixtwo/la;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 0e1: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 0e4: iload 4
      // 0e6: ifeq 126
      // 0e9: aload 12
      // 0eb: ifnull 121
      // 0ee: aload 12
      // 0f0: invokevirtual net/minecraft/class_9801.close ()V
      // 0f3: goto 121
      // 0f6: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f9: athrow
      // 0fa: astore 13
      // 0fc: aload 12
      // 0fe: iload 4
      // 100: ifeq 10f
      // 103: ifnull 11e
      // 106: goto 10d
      // 109: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10c: athrow
      // 10d: aload 12
      // 10f: invokevirtual net/minecraft/class_9801.close ()V
      // 112: goto 11e
      // 115: astore 14
      // 117: aload 13
      // 119: aload 14
      // 11b: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 11e: aload 13
      // 120: athrow
      // 121: aload 10
      // 123: invokevirtual net/minecraft/class_9799.close ()V
      // 126: goto 13f
      // 129: astore 11
      // 12b: aload 10
      // 12d: invokevirtual net/minecraft/class_9799.close ()V
      // 130: goto 13c
      // 133: astore 12
      // 135: aload 11
      // 137: aload 12
      // 139: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 13c: aload 11
      // 13e: athrow
      // 13f: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 142: ifnonnull 15d
      // 145: iload 4
      // 147: ifeq 159
      // 14a: goto 151
      // 14d: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 150: athrow
      // 151: bipush 0
      // 152: goto 15a
      // 155: invokestatic sixtwo/ka.bNV (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 158: athrow
      // 159: bipush 1
      // 15a: invokestatic sixtwo/jT.bMP (Z)V
      // 15d: return
   }

   private static CallSite bNZ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bNY".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ka" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Throwable bNV(Throwable var0) {
      return var0;
   }

   private class_12137 bNT(jS var1) {
      long var2 = Svclk ^ 121762839344384L;
      boolean var10000 = jT.bMQ();
      class_1044 var5 = var1.bMy();
      boolean var4 = var10000;

      label53: {
         try {
            if (!var4) {
               return var5.method_75484();
            }

            if (var5 == null) {
               break label53;
            }
         } catch (MatchException var8) {
            throw bNV(var8);
         }

         return var5.method_75484();
      }

      class_12137 var6 = var1.bMA();

      try {
         if (!var4) {
            return var6;
         }

         if (var6 == null) {
            return lt.caX();
         }
      } catch (MatchException var7) {
         throw bNV(var7);
      }

      return var6;
   }

   private GpuTextureView bNS(jS var1) {
      long var2 = Svclk ^ 69984980110380L;
      boolean var10000 = jT.bMQ();
      class_1044 var5 = var1.bMy();
      boolean var4 = var10000;

      try {
         if (!var4) {
            return var5.method_71659();
         }

         if (var5 == null) {
            return var1.bMz();
         }
      } catch (MatchException var6) {
         throw bNV(var6);
      }

      return var5.method_71659();
   }

   private static String bNW(byte[] var0) {
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

   private static String bNX(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 8117;
      if (nkwQm[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])FWlbV.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               FWlbV.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ka", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = KqBiZ[var5].getBytes("ISO-8859-1");
         nkwQm[var5] = bNW(((Cipher)var4[0]).doFinal(var9));
      }

      return nkwQm[var5];
   }

   private static Object bNY(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bNX(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
