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

public class jU implements kh<jO> {
   private static final long iIURF = gb.aYR(6987229562181160938L, 7444533500002196327L, MethodHandles.lookup().lookupClass()).a(41633260938310L);
   private static final String[] QaDIb;
   private static final String[] NMTNJ;
   private static final Map YBUhC = new HashMap(13);

   static {
      long var0 = iIURF ^ 40564356388678L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[4];
      int var7 = 0;
      String var6 = "\"\u0093├ö:C5\u001d\u0094**├ő\u009f\u0018├Ő3Lq*P├░\u0000┬╗@\n>├Ä├╗y├Ś9j├» \u0006├▒├Ź^\u0010┬Ż\u001b(e^T+`├źV\u0083Z├╝\u0000┬ó┬Â├ż\u001d├ą\u0011V\u0099\u0095~\u0085┬ó\f";
      int var8 = "\"\u0093├ö:C5\u001d\u0094**├ő\u009f\u0018├Ő3Lq*P├░\u0000┬╗@\n>├Ä├╗y├Ś9j├» \u0006├▒├Ź^\u0010┬Ż\u001b(e^T+`├źV\u0083Z├╝\u0000┬ó┬Â├ż\u001d├ą\u0011V\u0099\u0095~\u0085┬ó\f"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bNc(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     QaDIb = var9;
                     NMTNJ = new String[4];
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

                  var6 = "@o\u0094&\u0097├▒%2}4├▒5├¬├┐┬ó*\u009c?\u0089g┬ĘY\u0007>{├ő;\b1\t\u001fE├ć├┐W┬á├┐2r├Â8\u009d\u0012|├üL├ôICDSd4├Ś┬¬5├ż\u008f\u0081├ä'p├░├Ź┬źk\u000bA\u001f┬Ż├ŹC├ş\u008eM\u008b\u000f?6├ś┬Ž\u001f\f├ô\u0099\t\u009c┬ó┬┐T\u0010├łH<x\u009c\u0095";
                  var8 = "@o\u0094&\u0097├▒%2}4├▒5├¬├┐┬ó*\u009c?\u0089g┬ĘY\u0007>{├ő;\b1\t\u001fE├ć├┐W┬á├┐2r├Â8\u009d\u0012|├üL├ôICDSd4├Ś┬¬5├ż\u008f\u0081├ä'p├░├Ź┬źk\u000bA\u001f┬Ż├ŹC├ş\u008eM\u008b\u000f?6├ś┬Ž\u001f\f├ô\u0099\t\u009c┬ó┬┐T\u0010├łH<x\u009c\u0095"
                     .length();
                  var5 = '(';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   private static Throwable bNb(Throwable var0) {
      return var0;
   }

   public void bMX(jO param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jU.iIURF J
      // 003: ldc2_w 68493295521108
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/jT.bMR ()Z
      // 00b: aload 1
      // 00c: invokevirtual sixtwo/jO.bKi ()Lsixtwo/mG;
      // 00f: astore 5
      // 011: istore 4
      // 013: aload 5
      // 015: invokevirtual sixtwo/mG.cnW ()Z
      // 018: ifeq 020
      // 01b: return
      // 01c: invokestatic sixtwo/jU.bNb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01f: athrow
      // 020: aload 1
      // 021: invokevirtual sixtwo/jO.bKm ()F
      // 024: ldc 0.001
      // 026: invokestatic java/lang/Math.max (FF)F
      // 029: fstore 6
      // 02b: aload 1
      // 02c: invokevirtual sixtwo/jO.bKd ()F
      // 02f: fstore 7
      // 031: aload 1
      // 032: invokevirtual sixtwo/jO.bKe ()F
      // 035: fstore 8
      // 037: fload 7
      // 039: fconst_0
      // 03a: fcmpg
      // 03b: iload 4
      // 03d: ifne 061
      // 040: ifle 064
      // 043: goto 04a
      // 046: invokestatic sixtwo/jU.bNb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 049: athrow
      // 04a: fload 8
      // 04c: fconst_0
      // 04d: iload 4
      // 04f: ifne 06b
      // 052: goto 059
      // 055: invokestatic sixtwo/jU.bNb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 058: athrow
      // 059: fcmpg
      // 05a: goto 061
      // 05d: invokestatic sixtwo/jU.bNb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 060: athrow
      // 061: ifgt 065
      // 064: return
      // 065: aload 1
      // 066: invokevirtual sixtwo/jO.bKb ()F
      // 069: fload 6
      // 06b: fsub
      // 06c: fstore 9
      // 06e: aload 1
      // 06f: invokevirtual sixtwo/jO.bKc ()F
      // 072: fload 6
      // 074: fsub
      // 075: fstore 10
      // 077: fload 7
      // 079: fload 6
      // 07b: fconst_2
      // 07c: fmul
      // 07d: fadd
      // 07e: fstore 11
      // 080: fload 8
      // 082: fload 6
      // 084: fconst_2
      // 085: fmul
      // 086: fadd
      // 087: fstore 12
      // 089: new net/minecraft/class_9799
      // 08c: dup
      // 08d: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 090: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 093: bipush 4
      // 094: imul
      // 095: invokespecial net/minecraft/class_9799.<init> (I)V
      // 098: astore 13
      // 09a: new net/minecraft/class_287
      // 09d: dup
      // 09e: aload 13
      // 0a0: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 0a3: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 0a6: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 0a9: astore 14
      // 0ab: getstatic sixtwo/jU.FroVm Lsixtwo/kb;
      // 0ae: aload 14
      // 0b0: aload 1
      // 0b1: invokevirtual sixtwo/jO.bKa ()Lorg/joml/Matrix3x2fStack;
      // 0b4: fload 9
      // 0b6: fload 10
      // 0b8: fload 11
      // 0ba: fload 12
      // 0bc: fconst_0
      // 0bd: fconst_0
      // 0be: fconst_1
      // 0bf: fconst_1
      // 0c0: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 0c3: invokevirtual sixtwo/kb.uv_quad_region_color (Lnet/minecraft/class_287;Lorg/joml/Matrix3x2fStack;FFFFFFFFLsixtwo/mG;)V
      // 0c6: aload 14
      // 0c8: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 0cb: astore 15
      // 0cd: getstatic sixtwo/kR.bAgoy Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0d0: aload 15
      // 0d2: aload 0
      // 0d3: aload 1
      // 0d4: fload 6
      // 0d6: invokedynamic accept (Lsixtwo/jU;Lsixtwo/jO;F)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/jU.bNa (Lsixtwo/jO;FLcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 0db: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 0de: iload 4
      // 0e0: ifne 120
      // 0e3: aload 15
      // 0e5: ifnull 11b
      // 0e8: aload 15
      // 0ea: invokevirtual net/minecraft/class_9801.close ()V
      // 0ed: goto 11b
      // 0f0: invokestatic sixtwo/jU.bNb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f3: athrow
      // 0f4: astore 16
      // 0f6: aload 15
      // 0f8: iload 4
      // 0fa: ifne 109
      // 0fd: ifnull 118
      // 100: goto 107
      // 103: invokestatic sixtwo/jU.bNb (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 106: athrow
      // 107: aload 15
      // 109: invokevirtual net/minecraft/class_9801.close ()V
      // 10c: goto 118
      // 10f: astore 17
      // 111: aload 16
      // 113: aload 17
      // 115: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 118: aload 16
      // 11a: athrow
      // 11b: aload 13
      // 11d: invokevirtual net/minecraft/class_9799.close ()V
      // 120: goto 139
      // 123: astore 14
      // 125: aload 13
      // 127: invokevirtual net/minecraft/class_9799.close ()V
      // 12a: goto 136
      // 12d: astore 15
      // 12f: aload 14
      // 131: aload 15
      // 133: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 136: aload 14
      // 138: athrow
      // 139: return
   }

   private static CallSite bNf(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bNe".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jU" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private float bMZ(ld var1, float var2, float var3) {
      float var4 = Math.min(var2, var3);
      return Math.max(0.0F, Math.min(var1.value(), var4));
   }

   private static String bNd(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 20048;
      if (NMTNJ[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])YBUhC.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               YBUhC.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jU", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = QaDIb[var5].getBytes("ISO-8859-1");
         NMTNJ[var5] = bNc(((Cipher)var4[0]).doFinal(var9));
      }

      return NMTNJ[var5];
   }

   private static Object bNe(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bNd(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private void bMY(jO var1, float var2) {
      long var3 = iIURF ^ 81390054973375L;
      float var5 = var1.bKd() * 0.5F;
      float var6 = var1.bKe() * 0.5F;
      float var7 = this.bMZ(var1.bKh(), var5, var6);
      jL.wcOYb.bJl();
      jL.wcOYb.bJr(bNf<"n">(27965, 8012917728523317202L ^ var3), var5 / var2, var6 / var2);
      jL.wcOYb.bJq(bNf<"n">(16015, 993093685915139169L ^ var3), var7 / var2);
      jL.wcOYb.bJu(bNf<"n">(624, 7255583252830519453L ^ var3), var1.bKi().con());
      jL.wcOYb.bJu(bNf<"n">(13885, 8902252150502274257L ^ var3), jF.bHw());
   }

   private static String bNc(byte[] var0) {
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
