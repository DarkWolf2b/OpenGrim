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
import net.minecraft.class_243;
import net.minecraft.class_3532;

public class mZ {
   private static final double[] qApXy;
   private static final float[] pEYVS;
   public static int[] FPcHT;
   private static int[] OCHuI;
   private static final long MaViA = gb.aYR(-6673238518622702799L, 1208759698212216367L, MethodHandles.lookup().lookupClass()).a(228894526947183L);
   private static final String BeopE;
   private static final long[] xHioO;
   private static final Integer[] ENfKA;
   private static final Map QFlXv;
   private static final long IrWKJ;

   static {
      long var19 = MaViA ^ 94881272248261L;
      if (csy() != null) {
         csx(new int[4]);
      }

      Cipher var16;
      Cipher var10000 = var16 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var19 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var17 = 1; var17 < 8; var17++) {
         var10003[var17] = (byte)(var19 << var17 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var18 = var16.doFinal("┬│├Ť├¬┬ę\u0087#\u000b:".getBytes("ISO-8859-1"));
      String var33 = csA(var18).intern();
      int var10001 = -1;
      BeopE = var33;
      QFlXv = new HashMap(13);
      Cipher var5;
      var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var19 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var6 = 1; var6 < 8; var6++) {
         var10003[var6] = (byte)(var19 << var6 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var11 = new long[11];
      int var8 = 0;
      String var9 = "├ôT├Ś\u0006W\u0005~├č>,\u00195├»\u001e\u009b├čb┬»\u0011-┬íx^├ş┬╣├Ĺ\u0096├ú┬ę├║\u0012┬Ě\u0087\u0017\u0086=\f├ć}\u0006\u008d├ż├ő@├ő4┬┤.\u0095├ő\u0081\u0002├ć{\u0016\u0001\u0093┬Ş\t├░}├Źc├╗├▒├çp'B$├ç\u009a";
      int var10 = "├ôT├Ś\u0006W\u0005~├č>,\u00195├»\u001e\u009b├čb┬»\u0011-┬íx^├ş┬╣├Ĺ\u0096├ú┬ę├║\u0012┬Ě\u0087\u0017\u0086=\f├ć}\u0006\u008d├ż├ő@├ő4┬┤.\u0095├ő\u0081\u0002├ć{\u0016\u0001\u0093┬Ş\t├░}├Źc├╗├▒├çp'B$├ç\u009a"
         .length();
      byte var7 = 0;

      label71:
      while (true) {
         var10001 = var7;
         var7 += 8;
         byte[] var12 = var9.substring(var10001, var7).getBytes("ISO-8859-1");
         long[] var27 = var11;
         var10001 = var8++;
         long var35 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var40 = -1;

         while (true) {
            long var13 = var35;
            byte[] var15 = var5.doFinal(
               new byte[]{
                  (byte)(var13 >>> 56),
                  (byte)(var13 >>> 48),
                  (byte)(var13 >>> 40),
                  (byte)(var13 >>> 32),
                  (byte)(var13 >>> 24),
                  (byte)(var13 >>> 16),
                  (byte)(var13 >>> 8),
                  (byte)var13
               }
            );
            long var43 = (var15[0] & 255L) << 56
               | (var15[1] & 255L) << 48
               | (var15[2] & 255L) << 40
               | (var15[3] & 255L) << 32
               | (var15[4] & 255L) << 24
               | (var15[5] & 255L) << 16
               | (var15[6] & 255L) << 8
               | var15[7] & 255L;
            switch (var40) {
               case 0:
                  var27[var10001] = var43;
                  if (var7 >= var10) {
                     xHioO = var11;
                     ENfKA = new Integer[11];
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var19 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var19 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long var2 = 664771319359349991L;
                     byte[] var4 = var0.doFinal(
                        new byte[]{
                           (byte)(var2 >>> 56),
                           (byte)(var2 >>> 48),
                           (byte)(var2 >>> 40),
                           (byte)(var2 >>> 32),
                           (byte)(var2 >>> 24),
                           (byte)(var2 >>> 16),
                           (byte)(var2 >>> 8),
                           (byte)var2
                        }
                     );
                     long var38 = (var4[0] & 255L) << 56
                        | (var4[1] & 255L) << 48
                        | (var4[2] & 255L) << 40
                        | (var4[3] & 255L) << 32
                        | (var4[4] & 255L) << 24
                        | (var4[5] & 255L) << 16
                        | (var4[6] & 255L) << 8
                        | var4[7] & 255L;
                     byte var32 = -1;
                     IrWKJ = var38;
                     qApXy = new double[csD<"z">(30590, 7921595943361779118L ^ var19)];
                     pEYVS = new float[csD<"z">(20488, 3049313968009425627L ^ var19)];
                     FPcHT = new int[]{
                        csD<"z">(23257, 3015726467192535046L ^ var19),
                        csD<"z">(6136, 774821477800637741L ^ var19),
                        csD<"z">(17021, 2614290680667218083L ^ var19)
                     };
                     int var21 = 0;

                     try {
                        while (var21 < qApXy.length) {
                           qApXy[var21] = Math.pow(10.0, var21);
                           var21++;
                        }
                     } catch (MatchException var23) {
                        throw csz(var23);
                     }

                     var21 = 0;

                     try {
                        while (var21 < pEYVS.length) {
                           pEYVS[var21] = (float)Math.pow(10.0, var21);
                           var21++;
                        }

                        return;
                     } catch (MatchException var22) {
                        throw csz(var22);
                     }
                  }
                  break;
               default:
                  var27[var10001] = var43;
                  if (var7 < var10) {
                     continue label71;
                  }

                  var9 = "kOC\u009f?├┤├ę\u0084J├Ç}┬╣<{\u0014┬ú";
                  var10 = "kOC\u009f?├┤├ę\u0084J├Ç}┬╣<{\u0014┬ú".length();
                  var7 = 0;
            }

            byte var31 = var7;
            var7 += 8;
            var12 = var9.substring(var31, var7).getBytes("ISO-8859-1");
            var27 = var11;
            var10001 = var8++;
            var35 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            var40 = 0;
         }
      }
   }

   public static float csn(float var0, float var1, float var2) {
      return (float)Math.floor(var1 + (var0 - var1) * class_3532.method_15363(var2, 0.0F, 1.0F));
   }

   public static float csq(float var0, float var1, float var2, float var3) {
      return Math.max(Math.max(var0, var1), Math.max(var2, var3));
   }

   public static long cst(long var0, mT var2) {
      return csv(var0, var2.cpF());
   }

   public static double csu(double var0) {
      long var2 = MaViA ^ 105967603097479L;
      int[] var10000 = csy();
      var0 %= 360.0;
      int[] var4 = var10000;

      try {
         if (var4 != null) {
            return var0;
         }

         if (!(var0 < 0.0)) {
            return var0;
         }
      } catch (MatchException var5) {
         throw csz(var5);
      }

      var0 += 360.0;
      return var0;
   }

   public static byte[] csg(byte[]... var0) {
      long var1 = MaViA ^ 18585930051575L;
      int var4 = 0;
      int[] var10000 = csy();
      byte[][] var5 = var0;
      int[] var3 = var10000;
      int var6 = var0.length;
      int var7 = 0;

      while (true) {
         if (var7 < var6) {
            byte[] var8 = var5[var7];
            var20 = var4 + var8.length;
            if (var3 != null) {
               break;
            }

            var4 = var20;
            var7++;
            if (var3 == null) {
               continue;
            }

            iS.bwK("EIqNt");
         }

         var20 = var4;
         break;
      }

      byte[] var16 = new byte[var20];
      var6 = 0;
      byte[][] var18 = var0;
      int var19 = var0.length;
      int var9 = 0;

      while (true) {
         if (var9 < var19) {
            byte[] var10 = var18[var9];
            byte[] var11 = var10;
            var21 = var10;
            if (var3 != null) {
               break;
            }

            int var12 = var10.length;
            int var13 = 0;

            label40: {
               while (var13 < var12) {
                  byte var14 = var11[var13];

                  try {
                     var16[var6] = var14;
                     var6++;
                     var13++;
                     if (var3 != null) {
                        break label40;
                     }

                     if (var3 != null) {
                        break;
                     }
                  } catch (MatchException var15) {
                     throw csz(var15);
                  }
               }

               var9++;
            }

            if (var3 == null) {
               continue;
            }
         }

         var21 = var16;
         break;
      }

      return var21;
   }

   public static long csv(long var0, long var2) {
      long var4 = MaViA ^ 32528730276300L;
      return (var0 - var2) / IrWKJ;
   }

   public static boolean css() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mZ.MaViA J
      // 03: ldc2_w 31343662556146
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: astore 2
      // 0c: invokestatic sixtwo/ry.dkB ()Lsixtwo/ry;
      // 0f: invokevirtual sixtwo/ry.dkJ ()Ljava/lang/String;
      // 12: aload 2
      // 13: ifnonnull 2d
      // 16: ifnull 3e
      // 19: goto 20
      // 1c: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: invokestatic sixtwo/ry.dkB ()Lsixtwo/ry;
      // 23: invokevirtual sixtwo/ry.dkJ ()Ljava/lang/String;
      // 26: goto 2d
      // 29: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 2
      // 2e: ifnonnull 4a
      // 31: invokevirtual java/lang/String.isBlank ()Z
      // 34: ifeq 44
      // 37: goto 3e
      // 3a: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: bipush 0
      // 3f: ireturn
      // 40: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: invokestatic sixtwo/ry.dkB ()Lsixtwo/ry;
      // 47: invokevirtual sixtwo/ry.dkJ ()Ljava/lang/String;
      // 4a: getstatic sixtwo/mZ.BeopE Ljava/lang/String;
      // 4d: invokevirtual java/lang/String.split (Ljava/lang/String;)[Ljava/lang/String;
      // 50: astore 3
      // 51: aload 3
      // 52: arraylength
      // 53: aload 2
      // 54: ifnonnull 6a
      // 57: bipush 3
      // 58: if_icmpne 6d
      // 5b: goto 62
      // 5e: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: bipush 1
      // 63: goto 6a
      // 66: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 69: athrow
      // 6a: goto 6e
      // 6d: bipush 0
      // 6e: ireturn
   }

   public static class_243 csk(class_243 var0, class_243 var1, float var2) {
      double var3 = class_3532.method_16436(var2, var0.field_1352, var1.field_1352);
      double var5 = class_3532.method_16436(var2, var0.field_1351, var1.field_1351);
      double var7 = class_3532.method_16436(var2, var0.field_1350, var1.field_1350);
      return new class_243(var3, var5, var7);
   }

   private static CallSite csD(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("csC".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mZ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static int[] csi(int var0) {
      return csh(String.valueOf(var0));
   }

   public static String csd(byte[] param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mZ.MaViA J
      // 03: ldc2_w 38907729227165
      // 06: lxor
      // 07: lstore 1
      // 08: new java/lang/StringBuilder
      // 0b: dup
      // 0c: bipush 2
      // 0d: aload 0
      // 0e: arraylength
      // 0f: imul
      // 10: invokespecial java/lang/StringBuilder.<init> (I)V
      // 13: astore 4
      // 15: invokestatic sixtwo/mZ.csy ()[I
      // 18: aload 0
      // 19: astore 5
      // 1b: aload 5
      // 1d: arraylength
      // 1e: istore 6
      // 20: bipush 0
      // 21: istore 7
      // 23: astore 3
      // 24: iload 7
      // 26: iload 6
      // 28: if_icmpge 8f
      // 2b: aload 5
      // 2d: iload 7
      // 2f: baload
      // 30: istore 8
      // 32: sipush 29103
      // 35: ldc2_w 4351640220727347489
      // 38: lload 1
      // 39: lxor
      // 3a: invokedynamic z (IJ)I bsm=sixtwo/mZ.csD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3f: iload 8
      // 41: iand
      // 42: invokestatic java/lang/Integer.toHexString (I)Ljava/lang/String;
      // 45: astore 9
      // 47: aload 3
      // 48: ifnonnull 8b
      // 4b: aload 9
      // 4d: aload 3
      // 4e: ifnonnull 94
      // 51: goto 58
      // 54: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: invokevirtual java/lang/String.length ()I
      // 5b: bipush 1
      // 5c: if_icmpne 80
      // 5f: goto 66
      // 62: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: aload 4
      // 68: sipush 4620
      // 6b: ldc2_w 3306092305215384200
      // 6e: lload 1
      // 6f: lxor
      // 70: invokedynamic z (IJ)I bsm=sixtwo/mZ.csD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 75: invokevirtual java/lang/StringBuilder.append (C)Ljava/lang/StringBuilder;
      // 78: pop
      // 79: goto 80
      // 7c: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7f: athrow
      // 80: aload 4
      // 82: aload 9
      // 84: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 87: pop
      // 88: iinc 7 1
      // 8b: aload 3
      // 8c: ifnull 24
      // 8f: aload 4
      // 91: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // 94: areturn
   }

   public static String cse(int[] var0) {
      long var1 = MaViA ^ 43593138845045L;
      StringBuilder var3 = new StringBuilder();

      for (int var7 : var0) {
         var3.append((char)var7);
      }

      return var3.toString();
   }

   public static double cso(double var0, double var2, double var4, double var6, double var8, double var10) {
      double var12 = var6 - var0;
      double var14 = var8 - var2;
      double var16 = var10 - var4;
      return Math.sqrt(var12 * var12 + var14 * var14 + var16 * var16);
   }

   public static double csb(double param0, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mZ.MaViA J
      // 03: ldc2_w 69465455585723
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: astore 5
      // 0d: iload 2
      // 0e: aload 5
      // 10: ifnonnull 24
      // 13: ifge 23
      // 16: goto 1d
      // 19: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: dload 0
      // 1e: dreturn
      // 1f: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: iload 2
      // 24: getstatic sixtwo/mZ.qApXy [D
      // 27: arraylength
      // 28: if_icmpge 37
      // 2b: getstatic sixtwo/mZ.qApXy [D
      // 2e: iload 2
      // 2f: daload
      // 30: goto 3f
      // 33: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: ldc2_w 10.0
      // 3a: iload 2
      // 3b: i2d
      // 3c: invokestatic java/lang/Math.pow (DD)D
      // 3f: dstore 6
      // 41: dload 0
      // 42: dload 6
      // 44: dmul
      // 45: dstore 8
      // 47: dload 8
      // 49: dconst_0
      // 4a: aload 5
      // 4c: ifnonnull 6f
      // 4f: dcmpl
      // 50: iflt 6a
      // 53: goto 5a
      // 56: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: dload 8
      // 5c: ldc2_w 0.5
      // 5f: dadd
      // 60: invokestatic java/lang/Math.floor (D)D
      // 63: goto 73
      // 66: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 69: athrow
      // 6a: dload 8
      // 6c: ldc2_w 0.5
      // 6f: dsub
      // 70: invokestatic java/lang/Math.ceil (D)D
      // 73: dstore 10
      // 75: dload 10
      // 77: dload 6
      // 79: ddiv
      // 7a: dreturn
   }

   public static float csc(float param0, int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mZ.MaViA J
      // 03: ldc2_w 129601400576490
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: astore 4
      // 0d: iload 1
      // 0e: aload 4
      // 10: ifnonnull 24
      // 13: ifge 23
      // 16: goto 1d
      // 19: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: fload 0
      // 1e: freturn
      // 1f: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: iload 1
      // 24: getstatic sixtwo/mZ.pEYVS [F
      // 27: arraylength
      // 28: if_icmpge 37
      // 2b: getstatic sixtwo/mZ.pEYVS [F
      // 2e: iload 1
      // 2f: faload
      // 30: goto 40
      // 33: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: ldc2_w 10.0
      // 3a: iload 1
      // 3b: i2d
      // 3c: invokestatic java/lang/Math.pow (DD)D
      // 3f: d2f
      // 40: fstore 5
      // 42: fload 0
      // 43: fload 5
      // 45: fmul
      // 46: fstore 6
      // 48: fload 6
      // 4a: fconst_0
      // 4b: aload 4
      // 4d: ifnonnull 70
      // 50: fcmpl
      // 51: iflt 6c
      // 54: goto 5b
      // 57: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: fload 6
      // 5d: ldc 0.5
      // 5f: fadd
      // 60: f2d
      // 61: invokestatic java/lang/Math.floor (D)D
      // 64: d2f
      // 65: goto 76
      // 68: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: fload 6
      // 6e: ldc 0.5
      // 70: fsub
      // 71: f2d
      // 72: invokestatic java/lang/Math.ceil (D)D
      // 75: d2f
      // 76: fstore 7
      // 78: fload 7
      // 7a: fload 5
      // 7c: fdiv
      // 7d: freturn
   }

   public static int[] csj(long var0) {
      return csh(String.valueOf(var0));
   }

   public static void csx(int[] var0) {
      OCHuI = var0;
   }

   public static int[] csy() {
      return OCHuI;
   }

   public static int[] csh(String var0) {
      long var1 = MaViA ^ 32415310878596L;
      int[] var4 = new int[var0.length()];
      int[] var10000 = csy();
      int var5 = 0;
      int[] var3 = var10000;

      while (true) {
         if (var5 < var0.length()) {
            try {
               var10000 = var4;
               if (var3 != null) {
                  break;
               }

               var4[var5] = var0.charAt(var5);
               var5++;
               if (var3 == null) {
                  continue;
               }
            } catch (MatchException var6) {
               throw csz(var6);
            }
         }

         var10000 = var4;
         break;
      }

      return var10000;
   }

   public static float csl(double var0, double var2, double var4) {
      return (float)(var0 + (var2 - var0) * var4);
   }

   public static int[] csf(int[]... var0) {
      long var1 = MaViA ^ 89709597890318L;
      int var4 = 0;
      int[][] var5 = var0;
      int var6 = var0.length;
      int[] var10000 = csy();
      int var7 = 0;
      int[] var3 = var10000;

      while (true) {
         if (var7 < var6) {
            int[] var8 = var5[var7];
            var21 = var4 + var8.length;
            if (var3 != null) {
               break;
            }

            var4 = var21;
            var7++;
            if (var3 == null) {
               continue;
            }
         }

         var21 = var4;
         break;
      }

      int[] var17 = new int[var21];
      var6 = 0;
      int[][] var19 = var0;
      int var20 = var0.length;
      int var9 = 0;

      while (true) {
         if (var9 < var20) {
            int[] var10 = var19[var9];
            int[] var11 = var10;
            var10000 = var10;
            if (var3 != null) {
               break;
            }

            int var12 = var10.length;
            int var13 = 0;

            label47: {
               while (var13 < var12) {
                  int var14 = var11[var13];

                  try {
                     var17[var6] = var14;
                     var6++;
                     var13++;
                     if (var3 != null) {
                        break label47;
                     }

                     if (var3 != null) {
                        break;
                     }
                  } catch (MatchException var16) {
                     throw csz(var16);
                  }
               }

               var9++;
            }

            if (var3 == null) {
               continue;
            }
         }

         var10000 = var17;
         break;
      }

      try {
         if (iS.bwL() == null) {
            csx(new int[2]);
         }

         return var10000;
      } catch (MatchException var15) {
         throw csz(var15);
      }
   }

   private static MatchException csz(MatchException var0) {
      return var0;
   }

   public static float csp(float var0, float var1, float var2, float var3) {
      return Math.min(Math.min(var0, var1), Math.min(var2, var3));
   }

   private static int csC(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = csB(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int csB(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 15487;
      if (ENfKA[var3] == null) {
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
         long var5 = xHioO[var3];
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
         Object[] var9 = (Object[])QFlXv.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               QFlXv.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mZ", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ENfKA[var3] = var15;
      }

      return ENfKA[var3];
   }

   public static int csw(int[] param0, int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mZ.MaViA J
      // 03: ldc2_w 35689005215169
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: aload 0
      // 0c: arraylength
      // 0d: aload 1
      // 0e: arraylength
      // 0f: invokestatic java/lang/Math.min (II)I
      // 12: istore 5
      // 14: bipush 0
      // 15: istore 6
      // 17: astore 4
      // 19: iload 6
      // 1b: iload 5
      // 1d: if_icmpge ee
      // 20: aload 0
      // 21: iload 6
      // 23: iaload
      // 24: istore 7
      // 26: aload 1
      // 27: iload 6
      // 29: iaload
      // 2a: istore 8
      // 2c: iload 7
      // 2e: sipush 16229
      // 31: ldc2_w 1919267140492855221
      // 34: lload 2
      // 35: lxor
      // 36: invokedynamic z (IJ)I bsm=sixtwo/mZ.csD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3b: aload 4
      // 3d: ifnonnull f2
      // 40: aload 4
      // 42: ifnonnull 8d
      // 45: goto 4c
      // 48: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: if_icmplt 7e
      // 4f: goto 56
      // 52: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: iload 7
      // 58: sipush 8099
      // 5b: ldc2_w 6488990380347303792
      // 5e: lload 2
      // 5f: lxor
      // 60: invokedynamic z (IJ)I bsm=sixtwo/mZ.csD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 65: aload 4
      // 67: ifnonnull 8d
      // 6a: goto 71
      // 6d: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 70: athrow
      // 71: if_icmpgt 7e
      // 74: goto 7b
      // 77: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7a: athrow
      // 7b: iinc 7 32
      // 7e: iload 8
      // 80: sipush 11981
      // 83: ldc2_w 3117391130409539096
      // 86: lload 2
      // 87: lxor
      // 88: invokedynamic z (IJ)I bsm=sixtwo/mZ.csD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 8d: aload 4
      // 8f: ifnonnull c8
      // 92: if_icmplt c4
      // 95: goto 9c
      // 98: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9b: athrow
      // 9c: iload 8
      // 9e: sipush 29813
      // a1: ldc2_w 5798031117441322147
      // a4: lload 2
      // a5: lxor
      // a6: invokedynamic z (IJ)I bsm=sixtwo/mZ.csD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // ab: aload 4
      // ad: ifnonnull c8
      // b0: goto b7
      // b3: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b6: athrow
      // b7: if_icmpgt c4
      // ba: goto c1
      // bd: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c0: athrow
      // c1: iinc 8 32
      // c4: iload 7
      // c6: iload 8
      // c8: aload 4
      // ca: ifnonnull e2
      // cd: if_icmpeq e6
      // d0: goto d7
      // d3: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d6: athrow
      // d7: iload 7
      // d9: iload 8
      // db: goto e2
      // de: invokestatic sixtwo/mZ.csz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e1: athrow
      // e2: invokestatic java/lang/Integer.compare (II)I
      // e5: ireturn
      // e6: iinc 6 1
      // e9: aload 4
      // eb: ifnull 19
      // ee: aload 0
      // ef: arraylength
      // f0: aload 1
      // f1: arraylength
      // f2: invokestatic java/lang/Integer.compare (II)I
      // f5: ireturn
   }

   private static String csA(byte[] var0) {
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

   public static double csr() {
      double var0 = (Double)rD.dlmvG.field_1690.method_42495().method_41753() * 0.6 + 0.2;
      return var0 * var0 * var0 * 8.0 * 0.15;
   }

   public static int csm(float var0, float var1, double var2) {
      return (int)Math.floor(var1 + (var0 - var1) * class_3532.method_15350(var2, 0.0, 1.0));
   }
}
