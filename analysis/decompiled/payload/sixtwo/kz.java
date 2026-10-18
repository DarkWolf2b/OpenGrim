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
import net.minecraft.class_1044;
import net.minecraft.class_1297;
import net.minecraft.class_243;
import net.minecraft.class_4587;

public final class kz {
   private static final kS aKqGY;
   private static final long ViaTx = gb.aYR(3160100636026436216L, 5719372574879310460L, MethodHandles.lookup().lookupClass()).a(31403975451301L);
   private static final String[] rpCWe;
   private static final String[] lfBwE;
   private static final Map obVin = new HashMap(13);
   private static final long[] GbqLf;
   private static final Integer[] XzWak;
   private static final Map sFABK;

   static {
      long var11 = ViaTx ^ 96630310835019L;
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
      String var17 = "éÄ&e\u008f£\fyÞLKÂµæ\u0084Ö`¯É!½Eö\u0012çÃcó\u0082+6} àe@\u0097h\u0006Æqÿ+ÃoQS\u0017\u0088\u009eË\u0013¼Ç\u008aÌp1<\u0082äb\u008ds±";
      int var19 = "éÄ&e\u008f£\fyÞLKÂµæ\u0084Ö`¯É!½Eö\u0012çÃcó\u0082+6} àe@\u0097h\u0006Æqÿ+ÃoQS\u0017\u0088\u009eË\u0013¼Ç\u008aÌp1<\u0082äb\u008ds±"
         .length();
      char var16 = ' ';
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = bSl(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            rpCWe = var20;
            lfBwE = new String[2];
            sFABK = new HashMap(13);
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
            String var4 = "R\u0000\u00adx½O\u008dþ\u009bâBÛ+Ew\u001e\u008f1ï³tH¼4";
            int var5 = "R\u0000\u00adx½O\u008dþ\u009bâBÛ+Ew\u001e\u008f1ï³tH¼4".length();
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
                           GbqLf = var6;
                           XzWak = new Integer[5];
                           aKqGY = kS.bVE().duk(lh.aApMr).dul(false).dun(true).duo(false).dup();
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "2(\u009fX\u0099\u008d\u0010X5iz\u0099$°~¯";
                        var5 = "2(\u009fX\u0099\u008d\u0010X5iz\u0099$°~¯".length();
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

   private static Object bSn(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bSm(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Throwable bSk(Throwable var0) {
      return var0;
   }

   private static int bSp(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 10019;
      if (XzWak[var3] == null) {
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
         long var5 = GbqLf[var3];
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
         Object[] var9 = (Object[])sFABK.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               sFABK.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/kz", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         XzWak[var3] = var15;
      }

      return XzWak[var3];
   }

   private static CallSite bSo(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bSn".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kz" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int bSq(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bSp(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String bSm(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 17760;
      if (lfBwE[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])obVin.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               obVin.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kz", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = rpCWe[var5].getBytes("ISO-8859-1");
         lfBwE[var5] = bSl(((Cipher)var4[0]).doFinal(var9));
      }

      return lfBwE[var5];
   }

   private static CallSite bSr(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bSq".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kz" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bSl(byte[] var0) {
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

   public static void bSi(class_4587 param0, class_1297 param1, int param2, float param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kz.ViaTx J
      // 003: ldc2_w 3074298772986
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/kA.bSv ()Ljava/lang/String;
      // 00c: new net/minecraft/class_9799
      // 00f: dup
      // 010: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 013: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 016: sipush 15678
      // 019: ldc2_w 3426705825559317601
      // 01c: lload 5
      // 01e: lxor
      // 01f: invokedynamic a (IJ)I bsm=sixtwo/kz.bSr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 024: imul
      // 025: invokespecial net/minecraft/class_9799.<init> (I)V
      // 028: astore 8
      // 02a: astore 7
      // 02c: new net/minecraft/class_287
      // 02f: dup
      // 030: aload 8
      // 032: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27380 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 035: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 038: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 03b: astore 9
      // 03d: aload 0
      // 03e: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 041: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 044: astore 10
      // 046: fload 4
      // 048: invokestatic sixtwo/kA.bSt (F)F
      // 04b: f2d
      // 04c: dstore 11
      // 04e: dconst_1
      // 04f: dload 11
      // 051: ldc2_w 0.44999998807907104
      // 054: dsub
      // 055: invokestatic java/lang/Math.sin (D)D
      // 058: dadd
      // 059: invokestatic java/lang/Math.abs (D)D
      // 05c: ldc2_w 2.0
      // 05f: ddiv
      // 060: dstore 13
      // 062: dconst_1
      // 063: dload 11
      // 065: invokestatic java/lang/Math.sin (D)D
      // 068: dadd
      // 069: invokestatic java/lang/Math.abs (D)D
      // 06c: ldc2_w 2.0
      // 06f: ddiv
      // 070: dstore 15
      // 072: aload 1
      // 073: fload 4
      // 075: invokevirtual net/minecraft/class_1297.method_30950 (F)Lnet/minecraft/class_243;
      // 078: dconst_0
      // 079: dload 13
      // 07b: aload 1
      // 07c: invokevirtual net/minecraft/class_1297.method_17682 ()F
      // 07f: f2d
      // 080: dmul
      // 081: dconst_0
      // 082: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 085: astore 17
      // 087: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 08a: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 08d: invokevirtual net/minecraft/class_757.method_19418 ()Lnet/minecraft/class_4184;
      // 090: invokevirtual net/minecraft/class_4184.method_71156 ()Lnet/minecraft/class_243;
      // 093: astore 18
      // 095: aload 17
      // 097: aload 18
      // 099: invokevirtual net/minecraft/class_243.method_1020 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 09c: astore 19
      // 09e: aload 1
      // 09f: getfield net/minecraft/class_1297.field_5971 D
      // 0a2: aload 1
      // 0a3: invokevirtual net/minecraft/class_1297.method_23318 ()D
      // 0a6: aload 1
      // 0a7: getfield net/minecraft/class_1297.field_5971 D
      // 0aa: dsub
      // 0ab: fload 4
      // 0ad: f2d
      // 0ae: dmul
      // 0af: dadd
      // 0b0: aload 18
      // 0b2: getfield net/minecraft/class_243.field_1351 D
      // 0b5: dsub
      // 0b6: dload 15
      // 0b8: aload 1
      // 0b9: invokevirtual net/minecraft/class_1297.method_17682 ()F
      // 0bc: f2d
      // 0bd: dmul
      // 0be: dadd
      // 0bf: dstore 20
      // 0c1: sipush 18164
      // 0c4: ldc2_w 2136292836833327017
      // 0c7: lload 5
      // 0c9: lxor
      // 0ca: invokedynamic a (IJ)I bsm=sixtwo/kz.bSr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0cf: istore 22
      // 0d1: bipush 0
      // 0d2: istore 23
      // 0d4: iload 23
      // 0d6: iload 22
      // 0d8: if_icmpgt 173
      // 0db: aload 19
      // 0dd: getfield net/minecraft/class_243.field_1352 D
      // 0e0: iload 23
      // 0e2: i2f
      // 0e3: ldc_w 6.2831855
      // 0e6: fmul
      // 0e7: iload 22
      // 0e9: i2f
      // 0ea: fdiv
      // 0eb: f2d
      // 0ec: invokestatic java/lang/Math.cos (D)D
      // 0ef: aload 1
      // 0f0: invokevirtual net/minecraft/class_1297.method_17681 ()F
      // 0f3: f2d
      // 0f4: dmul
      // 0f5: fload 3
      // 0f6: f2d
      // 0f7: dmul
      // 0f8: dadd
      // 0f9: d2f
      // 0fa: fstore 24
      // 0fc: aload 19
      // 0fe: getfield net/minecraft/class_243.field_1350 D
      // 101: iload 23
      // 103: i2f
      // 104: ldc_w 6.2831855
      // 107: fmul
      // 108: iload 22
      // 10a: i2f
      // 10b: fdiv
      // 10c: f2d
      // 10d: invokestatic java/lang/Math.sin (D)D
      // 110: aload 1
      // 111: invokevirtual net/minecraft/class_1297.method_17681 ()F
      // 114: f2d
      // 115: dmul
      // 116: fload 3
      // 117: f2d
      // 118: dmul
      // 119: dadd
      // 11a: d2f
      // 11b: fstore 25
      // 11d: aload 9
      // 11f: aload 10
      // 121: fload 24
      // 123: dload 20
      // 125: d2f
      // 126: fload 25
      // 128: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 12b: iload 2
      // 12c: sipush 28421
      // 12f: ldc2_w 3114213708417130073
      // 132: lload 5
      // 134: lxor
      // 135: invokedynamic a (IJ)I bsm=sixtwo/kz.bSr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 13a: invokestatic sixtwo/jk.bDv (II)I
      // 13d: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 142: pop
      // 143: aload 9
      // 145: aload 7
      // 147: ifnull 175
      // 14a: aload 10
      // 14c: fload 24
      // 14e: aload 19
      // 150: getfield net/minecraft/class_243.field_1351 D
      // 153: d2f
      // 154: fload 25
      // 156: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 159: iload 2
      // 15a: bipush 0
      // 15b: invokestatic sixtwo/jk.bDv (II)I
      // 15e: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 163: pop
      // 164: iinc 23 1
      // 167: aload 7
      // 169: ifnonnull 0d4
      // 16c: goto 173
      // 16f: invokestatic sixtwo/kz.bSk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 172: athrow
      // 173: aload 9
      // 175: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 178: astore 23
      // 17a: aload 23
      // 17c: aload 7
      // 17e: ifnull 19c
      // 181: ifnull 19a
      // 184: goto 18b
      // 187: invokestatic sixtwo/kz.bSk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 18a: athrow
      // 18b: getstatic sixtwo/kR.PMnQE Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 18e: aload 23
      // 190: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 193: goto 19a
      // 196: invokestatic sixtwo/kz.bSk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 199: athrow
      // 19a: aload 23
      // 19c: aload 7
      // 19e: ifnull 1ad
      // 1a1: ifnull 1da
      // 1a4: goto 1ab
      // 1a7: invokestatic sixtwo/kz.bSk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1aa: athrow
      // 1ab: aload 23
      // 1ad: invokevirtual net/minecraft/class_9801.close ()V
      // 1b0: goto 1da
      // 1b3: astore 24
      // 1b5: aload 23
      // 1b7: aload 7
      // 1b9: ifnull 1c8
      // 1bc: ifnull 1d7
      // 1bf: goto 1c6
      // 1c2: invokestatic sixtwo/kz.bSk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c5: athrow
      // 1c6: aload 23
      // 1c8: invokevirtual net/minecraft/class_9801.close ()V
      // 1cb: goto 1d7
      // 1ce: astore 25
      // 1d0: aload 24
      // 1d2: aload 25
      // 1d4: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 1d7: aload 24
      // 1d9: athrow
      // 1da: aload 8
      // 1dc: invokevirtual net/minecraft/class_9799.close ()V
      // 1df: goto 1f8
      // 1e2: astore 9
      // 1e4: aload 8
      // 1e6: invokevirtual net/minecraft/class_9799.close ()V
      // 1e9: goto 1f5
      // 1ec: astore 10
      // 1ee: aload 9
      // 1f0: aload 10
      // 1f2: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 1f5: aload 9
      // 1f7: athrow
      // 1f8: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 1fb: ifnonnull 20b
      // 1fe: ldc_w "rrXmCb"
      // 201: invokestatic sixtwo/kA.bSu (Ljava/lang/String;)V
      // 204: goto 20b
      // 207: invokestatic sixtwo/kz.bSk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 20a: athrow
      // 20b: return
   }

   public static void bSh(class_243 param0, class_4587 param1, float param2, int param3, class_1044 param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kz.ViaTx J
      // 003: ldc2_w 60416891214860
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/kA.bSv ()Ljava/lang/String;
      // 00c: astore 7
      // 00e: aload 1
      // 00f: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 012: aload 1
      // 013: aload 0
      // 014: invokestatic sixtwo/jI.bIs (Lnet/minecraft/class_4587;Lnet/minecraft/class_243;)V
      // 017: aload 1
      // 018: getstatic net/minecraft/class_7833.field_40714 Lnet/minecraft/class_7833;
      // 01b: ldc 90.0
      // 01d: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 022: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 025: fload 2
      // 026: fconst_2
      // 027: fmul
      // 028: fstore 8
      // 02a: new net/minecraft/class_9799
      // 02d: dup
      // 02e: getstatic net/minecraft/class_290.field_20888 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 031: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 034: bipush 4
      // 035: imul
      // 036: invokespecial net/minecraft/class_9799.<init> (I)V
      // 039: astore 9
      // 03b: new net/minecraft/class_287
      // 03e: dup
      // 03f: aload 9
      // 041: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 044: getstatic net/minecraft/class_290.field_20888 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 047: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 04a: astore 10
      // 04c: aload 1
      // 04d: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 050: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 053: astore 11
      // 055: aload 10
      // 057: aload 11
      // 059: fload 2
      // 05a: fneg
      // 05b: fload 2
      // 05c: fneg
      // 05d: fload 8
      // 05f: fadd
      // 060: fconst_0
      // 061: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 064: iload 3
      // 065: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 06a: fconst_0
      // 06b: fconst_1
      // 06c: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 071: bipush 0
      // 072: sipush 4097
      // 075: ldc2_w 5703019465875390636
      // 078: lload 5
      // 07a: lxor
      // 07b: invokedynamic a (IJ)I bsm=sixtwo/kz.bSr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 080: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 085: pop
      // 086: aload 10
      // 088: aload 11
      // 08a: fload 2
      // 08b: fneg
      // 08c: fload 8
      // 08e: fadd
      // 08f: fload 2
      // 090: fneg
      // 091: fload 8
      // 093: fadd
      // 094: fconst_0
      // 095: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 098: iload 3
      // 099: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 09e: fconst_1
      // 09f: fconst_1
      // 0a0: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 0a5: bipush 0
      // 0a6: sipush 28672
      // 0a9: ldc2_w 2317038945494196392
      // 0ac: lload 5
      // 0ae: lxor
      // 0af: invokedynamic a (IJ)I bsm=sixtwo/kz.bSr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b4: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 0b9: pop
      // 0ba: aload 10
      // 0bc: aload 11
      // 0be: fload 2
      // 0bf: fneg
      // 0c0: fload 8
      // 0c2: fadd
      // 0c3: fload 2
      // 0c4: fneg
      // 0c5: fconst_0
      // 0c6: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0c9: iload 3
      // 0ca: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0cf: fconst_1
      // 0d0: fconst_0
      // 0d1: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 0d6: bipush 0
      // 0d7: sipush 28672
      // 0da: ldc2_w 2317038945494196392
      // 0dd: lload 5
      // 0df: lxor
      // 0e0: invokedynamic a (IJ)I bsm=sixtwo/kz.bSr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e5: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 0ea: pop
      // 0eb: aload 10
      // 0ed: aload 11
      // 0ef: fload 2
      // 0f0: fneg
      // 0f1: fload 2
      // 0f2: fneg
      // 0f3: fconst_0
      // 0f4: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0f7: iload 3
      // 0f8: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0fd: fconst_0
      // 0fe: fconst_0
      // 0ff: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 104: bipush 0
      // 105: sipush 28672
      // 108: ldc2_w 2317038945494196392
      // 10b: lload 5
      // 10d: lxor
      // 10e: invokedynamic a (IJ)I bsm=sixtwo/kz.bSr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 113: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 118: pop
      // 119: aload 10
      // 11b: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 11e: astore 12
      // 120: getstatic sixtwo/kR.Dmmsd Lsixtwo/kO;
      // 123: getstatic sixtwo/kz.aKqGY Lsixtwo/kS;
      // 126: invokevirtual sixtwo/kO.bUZ (Lsixtwo/kS;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 129: astore 13
      // 12b: aload 13
      // 12d: aload 12
      // 12f: aload 4
      // 131: invokedynamic accept (Lnet/minecraft/class_1044;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/kz.bSj (Lnet/minecraft/class_1044;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 136: invokestatic sixtwo/lF.cfD (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 139: aload 7
      // 13b: ifnull 17b
      // 13e: aload 12
      // 140: ifnull 176
      // 143: aload 12
      // 145: invokevirtual net/minecraft/class_9801.close ()V
      // 148: goto 176
      // 14b: invokestatic sixtwo/kz.bSk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 14e: athrow
      // 14f: astore 13
      // 151: aload 12
      // 153: aload 7
      // 155: ifnull 164
      // 158: ifnull 173
      // 15b: goto 162
      // 15e: invokestatic sixtwo/kz.bSk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 161: athrow
      // 162: aload 12
      // 164: invokevirtual net/minecraft/class_9801.close ()V
      // 167: goto 173
      // 16a: astore 14
      // 16c: aload 13
      // 16e: aload 14
      // 170: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 173: aload 13
      // 175: athrow
      // 176: aload 9
      // 178: invokevirtual net/minecraft/class_9799.close ()V
      // 17b: goto 194
      // 17e: astore 10
      // 180: aload 9
      // 182: invokevirtual net/minecraft/class_9799.close ()V
      // 185: goto 191
      // 188: astore 11
      // 18a: aload 10
      // 18c: aload 11
      // 18e: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 191: aload 10
      // 193: athrow
      // 194: aload 1
      // 195: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 198: goto 1a4
      // 19b: astore 15
      // 19d: aload 1
      // 19e: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 1a1: aload 15
      // 1a3: athrow
      // 1a4: aload 7
      // 1a6: ifnonnull 1b5
      // 1a9: ldc "mGctS"
      // 1ab: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 1ae: goto 1b5
      // 1b1: invokestatic sixtwo/kz.bSk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1b4: athrow
      // 1b5: return
   }
}
