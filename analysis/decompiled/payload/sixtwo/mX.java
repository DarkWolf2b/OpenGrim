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

public class mX {
   private static final long nacTO = gb.aYR(5558789182704723956L, -7768098523006838707L, MethodHandles.lookup().lookupClass()).a(158746631795078L);
   private static final long[] mOsSp;
   private static final Integer[] KNTgs;
   private static final Map XzTuG = new HashMap(13);

   static {
      long var0 = nacTO ^ 121608516676103L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[7];
      int var5 = 0;
      String var6 = "Ôv\u0096\u0007Ö\u008e1\u008f\u0016©i}\u0012\u0012xÄ²\u009a+\u000b|vÖÐ¿Ô\u008f`#\u000eÁ80µ·w×ÔËR";
      int var7 = "Ôv\u0096\u0007Ö\u008e1\u008f\u0016©i}\u0012\u0012xÄ²\u009a+\u000b|vÖÐ¿Ô\u008f`#\u000eÁ80µ·w×ÔËR".length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var2.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     mOsSp = var8;
                     KNTgs = new Integer[7];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "^òV¬/\u001b6ß\u0082ïä´Yj0\u0094";
                  var7 = "^òV¬/\u001b6ß\u0082ïä´Yj0\u0094".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }

   public static int crC(int[] param0, int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mX.nacTO J
      // 03: ldc2_w 27029127323373
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 1e
      // 13: ifnull 56
      // 16: goto 1d
      // 19: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: aload 4
      // 20: ifnonnull 2e
      // 23: ifnull 56
      // 26: goto 2d
      // 29: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 0
      // 2e: arraylength
      // 2f: aload 4
      // 31: ifnonnull 5e
      // 34: ifeq 56
      // 37: goto 3e
      // 3a: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 1
      // 3f: aload 4
      // 41: ifnonnull 63
      // 44: goto 4b
      // 47: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: arraylength
      // 4c: ifne 5f
      // 4f: goto 56
      // 52: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: bipush 0
      // 57: goto 5e
      // 5a: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: ireturn
      // 5f: aload 0
      // 60: invokestatic sixtwo/mX.crD ([I)[I
      // 63: astore 5
      // 65: aload 1
      // 66: invokestatic sixtwo/mX.crD ([I)[I
      // 69: astore 6
      // 6b: aload 5
      // 6d: aload 6
      // 6f: invokestatic sixtwo/mX.crE ([I[I)Z
      // 72: aload 4
      // 74: ifnonnull 9a
      // 77: ifeq 93
      // 7a: goto 81
      // 7d: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: sipush 13601
      // 84: ldc2_w 1068586295394076887
      // 87: lload 2
      // 88: lxor
      // 89: invokedynamic c (IJ)I bsm=sixtwo/mX.crN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 8e: ireturn
      // 8f: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 92: athrow
      // 93: aload 6
      // 95: aload 5
      // 97: invokestatic sixtwo/mX.crF ([I[I)Z
      // 9a: aload 4
      // 9c: ifnonnull c2
      // 9f: ifeq bb
      // a2: goto a9
      // a5: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a8: athrow
      // a9: sipush 16472
      // ac: ldc2_w 7724456415999163816
      // af: lload 2
      // b0: lxor
      // b1: invokedynamic c (IJ)I bsm=sixtwo/mX.crN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // b6: ireturn
      // b7: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ba: athrow
      // bb: aload 6
      // bd: aload 5
      // bf: invokestatic sixtwo/mX.crG ([I[I)I
      // c2: istore 7
      // c4: iload 7
      // c6: aload 4
      // c8: ifnonnull ec
      // cb: bipush -1
      // cc: if_icmpeq eb
      // cf: goto d6
      // d2: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d5: athrow
      // d6: sipush 23280
      // d9: ldc2_w 6807423579979507461
      // dc: lload 2
      // dd: lxor
      // de: invokedynamic c (IJ)I bsm=sixtwo/mX.crN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // e3: iload 7
      // e5: isub
      // e6: ireturn
      // e7: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ea: athrow
      // eb: bipush 0
      // ec: ireturn
   }

   private static MatchException crK(MatchException var0) {
      return var0;
   }

   public static int[] crD(int[] param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mX.nacTO J
      // 03: ldc2_w 25753104949434
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: aload 0
      // 0c: arraylength
      // 0d: newarray 10
      // 0f: astore 4
      // 11: bipush 0
      // 12: istore 5
      // 14: astore 3
      // 15: iload 5
      // 17: aload 0
      // 18: arraylength
      // 19: if_icmpge 74
      // 1c: aload 0
      // 1d: aload 3
      // 1e: ifnonnull 76
      // 21: iload 5
      // 23: iaload
      // 24: istore 6
      // 26: aload 3
      // 27: ifnonnull 70
      // 2a: iload 6
      // 2c: sipush 31903
      // 2f: ldc2_w 8550870208818200378
      // 32: lload 1
      // 33: lxor
      // 34: invokedynamic c (IJ)I bsm=sixtwo/mX.crN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 39: if_icmplt 66
      // 3c: goto 43
      // 3f: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: iload 6
      // 45: sipush 24501
      // 48: ldc2_w 6516077206965296145
      // 4b: lload 1
      // 4c: lxor
      // 4d: invokedynamic c (IJ)I bsm=sixtwo/mX.crN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 52: if_icmpgt 66
      // 55: goto 5c
      // 58: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: iinc 6 32
      // 5f: goto 66
      // 62: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: aload 4
      // 68: iload 5
      // 6a: iload 6
      // 6c: iastore
      // 6d: iinc 5 1
      // 70: aload 3
      // 71: ifnull 15
      // 74: aload 4
      // 76: areturn
   }

   public static boolean crE(int[] param0, int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mX.nacTO J
      // 03: ldc2_w 46592139405670
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: arraylength
      // 0f: aload 4
      // 11: ifnonnull 27
      // 14: aload 1
      // 15: arraylength
      // 16: if_icmpeq 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush 0
      // 21: ireturn
      // 22: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: bipush 0
      // 27: istore 5
      // 29: iload 5
      // 2b: aload 0
      // 2c: arraylength
      // 2d: if_icmpge 64
      // 30: aload 0
      // 31: iload 5
      // 33: iaload
      // 34: aload 4
      // 36: ifnonnull 65
      // 39: aload 4
      // 3b: ifnonnull 5b
      // 3e: goto 45
      // 41: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: aload 1
      // 46: iload 5
      // 48: iaload
      // 49: if_icmpeq 5c
      // 4c: goto 53
      // 4f: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: bipush 0
      // 54: goto 5b
      // 57: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: ireturn
      // 5c: iinc 5 1
      // 5f: aload 4
      // 61: ifnull 29
      // 64: bipush 1
      // 65: ireturn
   }

   private static CallSite crN(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("crM".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mX" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static boolean crF(int[] param0, int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mX.nacTO J
      // 03: ldc2_w 39432033643518
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: astore 4
      // 0d: aload 1
      // 0e: arraylength
      // 0f: aload 4
      // 11: ifnonnull 27
      // 14: aload 0
      // 15: arraylength
      // 16: if_icmple 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush 0
      // 21: ireturn
      // 22: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: bipush 0
      // 27: istore 5
      // 29: iload 5
      // 2b: aload 1
      // 2c: arraylength
      // 2d: if_icmpge 64
      // 30: aload 0
      // 31: iload 5
      // 33: iaload
      // 34: aload 4
      // 36: ifnonnull 65
      // 39: aload 4
      // 3b: ifnonnull 5b
      // 3e: goto 45
      // 41: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: aload 1
      // 46: iload 5
      // 48: iaload
      // 49: if_icmpeq 5c
      // 4c: goto 53
      // 4f: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: bipush 0
      // 54: goto 5b
      // 57: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: ireturn
      // 5c: iinc 5 1
      // 5f: aload 4
      // 61: ifnull 29
      // 64: bipush 1
      // 65: ireturn
   }

   public static int crH(int[] param0, int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mX.nacTO J
      // 03: ldc2_w 22658911479994
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: bipush 0
      // 0c: istore 5
      // 0e: astore 4
      // 10: bipush 0
      // 11: istore 6
      // 13: iload 6
      // 15: aload 0
      // 16: arraylength
      // 17: if_icmpge b7
      // 1a: bipush 0
      // 1b: aload 4
      // 1d: ifnonnull b9
      // 20: istore 7
      // 22: iload 7
      // 24: aload 1
      // 25: arraylength
      // 26: if_icmpge af
      // 29: bipush 0
      // 2a: aload 4
      // 2c: ifnonnull 15
      // 2f: istore 8
      // 31: iload 6
      // 33: iload 8
      // 35: iadd
      // 36: aload 0
      // 37: arraylength
      // 38: if_icmpge 90
      // 3b: iload 7
      // 3d: iload 8
      // 3f: iadd
      // 40: aload 1
      // 41: arraylength
      // 42: aload 4
      // 44: ifnonnull a0
      // 47: aload 4
      // 49: ifnonnull a0
      // 4c: goto 53
      // 4f: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: if_icmpge 90
      // 56: goto 5d
      // 59: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 0
      // 5e: iload 6
      // 60: iload 8
      // 62: iadd
      // 63: iaload
      // 64: aload 1
      // 65: iload 7
      // 67: iload 8
      // 69: iadd
      // 6a: iaload
      // 6b: aload 4
      // 6d: ifnonnull a0
      // 70: goto 77
      // 73: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: if_icmpne 90
      // 7a: goto 81
      // 7d: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: iinc 8 1
      // 84: aload 4
      // 86: ifnull 31
      // 89: goto 90
      // 8c: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: iload 8
      // 92: aload 4
      // 94: ifnonnull a5
      // 97: iload 5
      // 99: goto a0
      // 9c: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9f: athrow
      // a0: if_icmple a7
      // a3: iload 8
      // a5: istore 5
      // a7: iinc 7 1
      // aa: aload 4
      // ac: ifnull 22
      // af: iinc 6 1
      // b2: aload 4
      // b4: ifnull 13
      // b7: iload 5
      // b9: ireturn
   }

   public static boolean crJ(String var0, String var1) {
      return crI(mZ.csh(var0), mZ.csh(var1));
   }

   public static boolean crI(int[] param0, int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/mX.nacTO J
      // 003: ldc2_w 7454731542196
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/mZ.csy ()[I
      // 00b: astore 4
      // 00d: aload 1
      // 00e: aload 4
      // 010: ifnonnull 01e
      // 013: ifnull 02e
      // 016: goto 01d
      // 019: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: aload 1
      // 01e: aload 4
      // 020: ifnonnull 035
      // 023: arraylength
      // 024: ifne 034
      // 027: goto 02e
      // 02a: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02d: athrow
      // 02e: bipush 1
      // 02f: ireturn
      // 030: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 033: athrow
      // 034: aload 0
      // 035: aload 4
      // 037: ifnonnull 045
      // 03a: ifnull 057
      // 03d: goto 044
      // 040: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 043: athrow
      // 044: aload 0
      // 045: arraylength
      // 046: aload 4
      // 048: ifnonnull 05e
      // 04b: aload 1
      // 04c: arraylength
      // 04d: if_icmpge 05d
      // 050: goto 057
      // 053: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 056: athrow
      // 057: bipush 0
      // 058: ireturn
      // 059: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05c: athrow
      // 05d: bipush 0
      // 05e: istore 5
      // 060: iload 5
      // 062: aload 0
      // 063: arraylength
      // 064: aload 1
      // 065: arraylength
      // 066: isub
      // 067: if_icmpgt 13c
      // 06a: bipush 0
      // 06b: aload 4
      // 06d: ifnonnull 13d
      // 070: istore 6
      // 072: iload 6
      // 074: aload 1
      // 075: arraylength
      // 076: if_icmpge 132
      // 079: aload 0
      // 07a: iload 5
      // 07c: iload 6
      // 07e: iadd
      // 07f: iaload
      // 080: istore 7
      // 082: aload 1
      // 083: iload 6
      // 085: iaload
      // 086: istore 8
      // 088: iload 7
      // 08a: aload 4
      // 08c: ifnonnull 133
      // 08f: sipush 28199
      // 092: ldc2_w 4946757718238729097
      // 095: lload 2
      // 096: lxor
      // 097: invokedynamic c (IJ)I bsm=sixtwo/mX.crN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09c: aload 4
      // 09e: ifnonnull 0e9
      // 0a1: goto 0a8
      // 0a4: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a7: athrow
      // 0a8: if_icmplt 0da
      // 0ab: goto 0b2
      // 0ae: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b1: athrow
      // 0b2: iload 7
      // 0b4: sipush 11157
      // 0b7: ldc2_w 1288387444802704957
      // 0ba: lload 2
      // 0bb: lxor
      // 0bc: invokedynamic c (IJ)I bsm=sixtwo/mX.crN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0c1: aload 4
      // 0c3: ifnonnull 0e9
      // 0c6: goto 0cd
      // 0c9: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cc: athrow
      // 0cd: if_icmpgt 0da
      // 0d0: goto 0d7
      // 0d3: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d6: athrow
      // 0d7: iinc 7 32
      // 0da: iload 8
      // 0dc: sipush 31903
      // 0df: ldc2_w 8550887142330990900
      // 0e2: lload 2
      // 0e3: lxor
      // 0e4: invokedynamic c (IJ)I bsm=sixtwo/mX.crN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e9: aload 4
      // 0eb: ifnonnull 124
      // 0ee: if_icmplt 120
      // 0f1: goto 0f8
      // 0f4: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f7: athrow
      // 0f8: iload 8
      // 0fa: sipush 24501
      // 0fd: ldc2_w 6516093044320870943
      // 100: lload 2
      // 101: lxor
      // 102: invokedynamic c (IJ)I bsm=sixtwo/mX.crN (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 107: aload 4
      // 109: ifnonnull 124
      // 10c: goto 113
      // 10f: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 112: athrow
      // 113: if_icmpgt 120
      // 116: goto 11d
      // 119: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11c: athrow
      // 11d: iinc 8 32
      // 120: iload 7
      // 122: iload 8
      // 124: if_icmpeq 12a
      // 127: goto 134
      // 12a: iinc 6 1
      // 12d: aload 4
      // 12f: ifnull 072
      // 132: bipush 1
      // 133: ireturn
      // 134: iinc 5 1
      // 137: aload 4
      // 139: ifnull 060
      // 13c: bipush 0
      // 13d: ireturn
   }

   private static int crM(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = crL(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int crL(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 19348;
      if (KNTgs[var3] == null) {
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
         long var5 = mOsSp[var3];
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
         Object[] var9 = (Object[])XzTuG.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               XzTuG.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mX", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         KNTgs[var3] = var15;
      }

      return KNTgs[var3];
   }

   public static int crG(int[] param0, int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mX.nacTO J
      // 03: ldc2_w 102859675189704
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: astore 4
      // 0d: aload 1
      // 0e: arraylength
      // 0f: aload 4
      // 11: ifnonnull 27
      // 14: aload 0
      // 15: arraylength
      // 16: if_icmple 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush -1
      // 21: ireturn
      // 22: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: bipush 0
      // 27: istore 5
      // 29: iload 5
      // 2b: aload 0
      // 2c: arraylength
      // 2d: aload 1
      // 2e: arraylength
      // 2f: isub
      // 30: if_icmpgt 82
      // 33: bipush 0
      // 34: aload 4
      // 36: ifnonnull 83
      // 39: istore 6
      // 3b: iload 6
      // 3d: aload 1
      // 3e: arraylength
      // 3f: if_icmpge 77
      // 42: aload 0
      // 43: iload 5
      // 45: iload 6
      // 47: iadd
      // 48: iaload
      // 49: aload 4
      // 4b: ifnonnull 79
      // 4e: aload 1
      // 4f: iload 6
      // 51: iaload
      // 52: if_icmpeq 68
      // 55: goto 5c
      // 58: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: aload 4
      // 5e: ifnull 7a
      // 61: goto 68
      // 64: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: iinc 6 1
      // 6b: aload 4
      // 6d: ifnull 3b
      // 70: goto 77
      // 73: invokestatic sixtwo/mX.crK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: iload 5
      // 79: ireturn
      // 7a: iinc 5 1
      // 7d: aload 4
      // 7f: ifnull 29
      // 82: bipush -1
      // 83: ireturn
   }
}
