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

public class jY implements kh<jQ> {
   private static final long rhDdc = gb.aYR(7874516259629707881L, -3334554680866093910L, MethodHandles.lookup().lookupClass()).a(135733769038628L);
   private static final String[] YjkCY;
   private static final String[] IzNUq;
   private static final Map FTAap = new HashMap(13);

   static {
      long var0 = rhDdc ^ 52272056433210L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[8];
      int var7 = 0;
      String var6 = "±£Ên`ØnkÎaGô9\u0017·1\u0010JõbÕ¶ç\u000f\u00894Hl§{°Å¥\u0010=í(c\u008dBªø³Ï¾ÿ\u0087¹}ð ¡\u0099I¾¨\u0085\u0091û;s\u001bä\rpZ\u0082}ücz^Ð)v\u0096Ó\u0014F¿ÝäÛ J¸î~\u009fÂ*ÒÀRk7\u0017\u0019\u0014\u001fB\u009a4üÂ,\u0095\u001eØÍf@·\u000e|¸\u0018KE\u0082\u0093kº¢²E»\u0096ê$\u0000á¨}\u0018ª]\u0082Fu\u0002";
      int var8 = "±£Ên`ØnkÎaGô9\u0017·1\u0010JõbÕ¶ç\u000f\u00894Hl§{°Å¥\u0010=í(c\u008dBªø³Ï¾ÿ\u0087¹}ð ¡\u0099I¾¨\u0085\u0091û;s\u001bä\rpZ\u0082}ücz^Ð)v\u0096Ó\u0014F¿ÝäÛ J¸î~\u009fÂ*ÒÀRk7\u0017\u0019\u0014\u001fB\u009a4üÂ,\u0095\u001eØÍf@·\u000e|¸\u0018KE\u0082\u0093kº¢²E»\u0096ê$\u0000á¨}\u0018ª]\u0082Fu\u0002"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bNG(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     YjkCY = var9;
                     IzNUq = new String[8];
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

                  var6 = "MW\u001aÆ\u0093>]ÌÍa\u001c\u001edÁK\u0086\u0010÷8÷TRR=,õ·çÞ`¿·\u0099";
                  var8 = "MW\u001aÆ\u0093>]ÌÍa\u001c\u001edÁK\u0086\u0010÷8÷TRR=,õ·çÞ`¿·\u0099".length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public void bND(jQ param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jY.rhDdc J
      // 003: ldc2_w 126217890873272
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/jT.bMR ()Z
      // 00b: aload 1
      // 00c: invokevirtual sixtwo/jQ.bLJ ()Lsixtwo/mG;
      // 00f: astore 5
      // 011: istore 4
      // 013: aload 5
      // 015: invokevirtual sixtwo/mG.cnW ()Z
      // 018: ifeq 020
      // 01b: return
      // 01c: invokestatic sixtwo/jY.bNF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01f: athrow
      // 020: aload 1
      // 021: invokevirtual sixtwo/jQ.bLF ()Lnet/minecraft/class_241;
      // 024: astore 6
      // 026: aload 1
      // 027: invokevirtual sixtwo/jQ.bLG ()Lnet/minecraft/class_241;
      // 02a: astore 7
      // 02c: aload 1
      // 02d: invokevirtual sixtwo/jQ.bLH ()Lnet/minecraft/class_241;
      // 030: astore 8
      // 032: aload 1
      // 033: invokevirtual sixtwo/jQ.bLI ()Lnet/minecraft/class_241;
      // 036: astore 9
      // 038: aload 1
      // 039: invokevirtual sixtwo/jQ.bLK ()F
      // 03c: ldc 0.5
      // 03e: fmul
      // 03f: aload 1
      // 040: invokevirtual sixtwo/jQ.bLL ()F
      // 043: fadd
      // 044: fstore 10
      // 046: aload 6
      // 048: getfield net/minecraft/class_241.field_1343 F
      // 04b: aload 7
      // 04d: getfield net/minecraft/class_241.field_1343 F
      // 050: aload 8
      // 052: getfield net/minecraft/class_241.field_1343 F
      // 055: aload 9
      // 057: getfield net/minecraft/class_241.field_1343 F
      // 05a: invokestatic sixtwo/mZ.csp (FFFF)F
      // 05d: fload 10
      // 05f: fsub
      // 060: fstore 11
      // 062: aload 6
      // 064: getfield net/minecraft/class_241.field_1342 F
      // 067: aload 7
      // 069: getfield net/minecraft/class_241.field_1342 F
      // 06c: aload 8
      // 06e: getfield net/minecraft/class_241.field_1342 F
      // 071: aload 9
      // 073: getfield net/minecraft/class_241.field_1342 F
      // 076: invokestatic sixtwo/mZ.csp (FFFF)F
      // 079: fload 10
      // 07b: fsub
      // 07c: fstore 12
      // 07e: aload 6
      // 080: getfield net/minecraft/class_241.field_1343 F
      // 083: aload 7
      // 085: getfield net/minecraft/class_241.field_1343 F
      // 088: aload 8
      // 08a: getfield net/minecraft/class_241.field_1343 F
      // 08d: aload 9
      // 08f: getfield net/minecraft/class_241.field_1343 F
      // 092: invokestatic sixtwo/mZ.csq (FFFF)F
      // 095: fload 10
      // 097: fadd
      // 098: fstore 13
      // 09a: aload 6
      // 09c: getfield net/minecraft/class_241.field_1342 F
      // 09f: aload 7
      // 0a1: getfield net/minecraft/class_241.field_1342 F
      // 0a4: aload 8
      // 0a6: getfield net/minecraft/class_241.field_1342 F
      // 0a9: aload 9
      // 0ab: getfield net/minecraft/class_241.field_1342 F
      // 0ae: invokestatic sixtwo/mZ.csq (FFFF)F
      // 0b1: fload 10
      // 0b3: fadd
      // 0b4: fstore 14
      // 0b6: fload 13
      // 0b8: fload 11
      // 0ba: fsub
      // 0bb: fconst_1
      // 0bc: invokestatic java/lang/Math.max (FF)F
      // 0bf: fstore 15
      // 0c1: fload 14
      // 0c3: fload 12
      // 0c5: fsub
      // 0c6: fconst_1
      // 0c7: invokestatic java/lang/Math.max (FF)F
      // 0ca: fstore 16
      // 0cc: new net/minecraft/class_9799
      // 0cf: dup
      // 0d0: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 0d3: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 0d6: bipush 4
      // 0d7: imul
      // 0d8: invokespecial net/minecraft/class_9799.<init> (I)V
      // 0db: astore 17
      // 0dd: new net/minecraft/class_287
      // 0e0: dup
      // 0e1: aload 17
      // 0e3: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 0e6: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 0e9: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 0ec: astore 18
      // 0ee: getstatic sixtwo/jY.FroVm Lsixtwo/kb;
      // 0f1: aload 18
      // 0f3: aload 1
      // 0f4: invokevirtual sixtwo/jQ.bLE ()Lorg/joml/Matrix3x2fStack;
      // 0f7: fload 11
      // 0f9: fload 12
      // 0fb: fload 15
      // 0fd: fload 16
      // 0ff: aload 1
      // 100: invokevirtual sixtwo/jQ.bLJ ()Lsixtwo/mG;
      // 103: invokevirtual sixtwo/kb.quad_color (Lnet/minecraft/class_287;Lorg/joml/Matrix3x2fStack;FFFFLsixtwo/mG;)V
      // 106: aload 18
      // 108: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 10b: astore 19
      // 10d: getstatic sixtwo/kR.vsmse Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 110: aload 19
      // 112: fload 15
      // 114: fload 16
      // 116: aload 6
      // 118: fload 11
      // 11a: fload 12
      // 11c: aload 7
      // 11e: aload 8
      // 120: aload 9
      // 122: aload 1
      // 123: invokedynamic accept (FFLnet/minecraft/class_241;FFLnet/minecraft/class_241;Lnet/minecraft/class_241;Lnet/minecraft/class_241;Lsixtwo/jQ;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/jY.bNE (FFLnet/minecraft/class_241;FFLnet/minecraft/class_241;Lnet/minecraft/class_241;Lnet/minecraft/class_241;Lsixtwo/jQ;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 128: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 12b: iload 4
      // 12d: ifne 16d
      // 130: aload 19
      // 132: ifnull 168
      // 135: aload 19
      // 137: invokevirtual net/minecraft/class_9801.close ()V
      // 13a: goto 168
      // 13d: invokestatic sixtwo/jY.bNF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 140: athrow
      // 141: astore 20
      // 143: aload 19
      // 145: iload 4
      // 147: ifne 156
      // 14a: ifnull 165
      // 14d: goto 154
      // 150: invokestatic sixtwo/jY.bNF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 153: athrow
      // 154: aload 19
      // 156: invokevirtual net/minecraft/class_9801.close ()V
      // 159: goto 165
      // 15c: astore 21
      // 15e: aload 20
      // 160: aload 21
      // 162: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 165: aload 20
      // 167: athrow
      // 168: aload 17
      // 16a: invokevirtual net/minecraft/class_9799.close ()V
      // 16d: goto 186
      // 170: astore 18
      // 172: aload 17
      // 174: invokevirtual net/minecraft/class_9799.close ()V
      // 177: goto 183
      // 17a: astore 19
      // 17c: aload 18
      // 17e: aload 19
      // 180: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 183: aload 18
      // 185: athrow
      // 186: return
   }

   private static Throwable bNF(Throwable var0) {
      return var0;
   }

   private static CallSite bNJ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bNI".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jY" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bNG(byte[] var0) {
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

   private static Object bNI(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bNH(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String bNH(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 24825;
      if (IzNUq[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])FTAap.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               FTAap.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jY", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = YjkCY[var5].getBytes("ISO-8859-1");
         IzNUq[var5] = bNG(((Cipher)var4[0]).doFinal(var9));
      }

      return IzNUq[var5];
   }
}
