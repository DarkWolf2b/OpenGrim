package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_238;
import net.minecraft.class_243;

public final class pf {
   private static final long AQdMn = gb.aYR(-2866706717294193310L, -2177333281957051479L, MethodHandles.lookup().lookupClass()).a(228981521064160L);
   private static final long nGLOr;

   static {
      long var0 = AQdMn ^ 115622371997658L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 7196469634155587222L;
      byte[] var6 = var2.doFinal(
         new byte[]{
            (byte)(var4 >>> 56),
            (byte)(var4 >>> 48),
            (byte)(var4 >>> 40),
            (byte)(var4 >>> 32),
            (byte)(var4 >>> 24),
            (byte)(var4 >>> 16),
            (byte)(var4 >>> 8),
            (byte)var4
         }
      );
      long var7 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      nGLOr = var7;
   }

   public static List<class_243> cNi(class_243 param0, class_238 param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pf.AQdMn J
      // 003: ldc2_w 42928018163793
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/ph.cNp ()Z
      // 00b: new java/util/ArrayList
      // 00e: dup
      // 00f: invokespecial java/util/ArrayList.<init> ()V
      // 012: astore 6
      // 014: istore 5
      // 016: aload 0
      // 017: getfield net/minecraft/class_243.field_1352 D
      // 01a: aload 1
      // 01b: getfield net/minecraft/class_238.field_1323 D
      // 01e: dcmpg
      // 01f: iload 5
      // 021: ifeq 02f
      // 024: ifge 032
      // 027: goto 02e
      // 02a: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 02d: athrow
      // 02e: bipush 1
      // 02f: goto 033
      // 032: bipush 0
      // 033: istore 7
      // 035: aload 0
      // 036: getfield net/minecraft/class_243.field_1352 D
      // 039: aload 1
      // 03a: getfield net/minecraft/class_238.field_1320 D
      // 03d: dcmpl
      // 03e: iload 5
      // 040: ifeq 04e
      // 043: ifle 051
      // 046: goto 04d
      // 049: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 04c: athrow
      // 04d: bipush 1
      // 04e: goto 052
      // 051: bipush 0
      // 052: istore 8
      // 054: aload 0
      // 055: getfield net/minecraft/class_243.field_1351 D
      // 058: aload 1
      // 059: getfield net/minecraft/class_238.field_1322 D
      // 05c: dcmpg
      // 05d: iload 5
      // 05f: ifeq 06d
      // 062: ifge 070
      // 065: goto 06c
      // 068: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 06b: athrow
      // 06c: bipush 1
      // 06d: goto 071
      // 070: bipush 0
      // 071: istore 9
      // 073: aload 0
      // 074: getfield net/minecraft/class_243.field_1351 D
      // 077: aload 1
      // 078: getfield net/minecraft/class_238.field_1325 D
      // 07b: dcmpl
      // 07c: iload 5
      // 07e: ifeq 08c
      // 081: ifle 08f
      // 084: goto 08b
      // 087: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 08a: athrow
      // 08b: bipush 1
      // 08c: goto 090
      // 08f: bipush 0
      // 090: istore 10
      // 092: aload 0
      // 093: getfield net/minecraft/class_243.field_1350 D
      // 096: aload 1
      // 097: getfield net/minecraft/class_238.field_1321 D
      // 09a: dcmpg
      // 09b: iload 5
      // 09d: ifeq 0ab
      // 0a0: ifge 0ae
      // 0a3: goto 0aa
      // 0a6: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 0a9: athrow
      // 0aa: bipush 1
      // 0ab: goto 0af
      // 0ae: bipush 0
      // 0af: istore 11
      // 0b1: aload 0
      // 0b2: getfield net/minecraft/class_243.field_1350 D
      // 0b5: aload 1
      // 0b6: getfield net/minecraft/class_238.field_1324 D
      // 0b9: dcmpl
      // 0ba: iload 5
      // 0bc: ifeq 0ca
      // 0bf: ifle 0cd
      // 0c2: goto 0c9
      // 0c5: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 0c8: athrow
      // 0c9: bipush 1
      // 0ca: goto 0ce
      // 0cd: bipush 0
      // 0ce: istore 12
      // 0d0: bipush 0
      // 0d1: istore 13
      // 0d3: iload 7
      // 0d5: iload 5
      // 0d7: ifeq 0e9
      // 0da: ifeq 0e7
      // 0dd: goto 0e4
      // 0e0: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 0e3: athrow
      // 0e4: iinc 13 1
      // 0e7: iload 8
      // 0e9: iload 5
      // 0eb: ifeq 0fd
      // 0ee: ifeq 0fb
      // 0f1: goto 0f8
      // 0f4: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 0f7: athrow
      // 0f8: iinc 13 1
      // 0fb: iload 9
      // 0fd: iload 5
      // 0ff: ifeq 111
      // 102: ifeq 10f
      // 105: goto 10c
      // 108: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 10b: athrow
      // 10c: iinc 13 1
      // 10f: iload 10
      // 111: iload 5
      // 113: ifeq 125
      // 116: ifeq 123
      // 119: goto 120
      // 11c: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 11f: athrow
      // 120: iinc 13 1
      // 123: iload 11
      // 125: iload 5
      // 127: ifeq 139
      // 12a: ifeq 137
      // 12d: goto 134
      // 130: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 133: athrow
      // 134: iinc 13 1
      // 137: iload 12
      // 139: iload 5
      // 13b: ifeq 14d
      // 13e: ifeq 14b
      // 141: goto 148
      // 144: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 147: athrow
      // 148: iinc 13 1
      // 14b: iload 13
      // 14d: iload 5
      // 14f: ifeq 17c
      // 152: ifne 174
      // 155: goto 15c
      // 158: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 15b: athrow
      // 15c: getstatic sixtwo/pf.nGLOr J
      // 15f: l2i
      // 160: istore 13
      // 162: bipush 1
      // 163: dup
      // 164: istore 12
      // 166: dup
      // 167: istore 11
      // 169: dup
      // 16a: istore 10
      // 16c: dup
      // 16d: istore 9
      // 16f: dup
      // 170: istore 8
      // 172: istore 7
      // 174: bipush 4
      // 175: iload 2
      // 176: iload 13
      // 178: idiv
      // 179: invokestatic java/lang/Math.max (II)I
      // 17c: istore 14
      // 17e: iload 14
      // 180: i2d
      // 181: invokestatic java/lang/Math.sqrt (D)D
      // 184: invokestatic java/lang/Math.ceil (D)D
      // 187: d2i
      // 188: istore 15
      // 18a: ldc2_w 0.01
      // 18d: dstore 16
      // 18f: aload 1
      // 190: getfield net/minecraft/class_238.field_1323 D
      // 193: dload 16
      // 195: dadd
      // 196: dstore 18
      // 198: aload 1
      // 199: getfield net/minecraft/class_238.field_1320 D
      // 19c: dload 16
      // 19e: dsub
      // 19f: dstore 20
      // 1a1: aload 1
      // 1a2: getfield net/minecraft/class_238.field_1322 D
      // 1a5: dload 16
      // 1a7: dadd
      // 1a8: dstore 22
      // 1aa: aload 1
      // 1ab: getfield net/minecraft/class_238.field_1325 D
      // 1ae: dload 16
      // 1b0: dsub
      // 1b1: dstore 24
      // 1b3: aload 1
      // 1b4: getfield net/minecraft/class_238.field_1321 D
      // 1b7: dload 16
      // 1b9: dadd
      // 1ba: dstore 26
      // 1bc: aload 1
      // 1bd: getfield net/minecraft/class_238.field_1324 D
      // 1c0: dload 16
      // 1c2: dsub
      // 1c3: dstore 28
      // 1c5: iload 7
      // 1c7: iload 5
      // 1c9: ifeq 1f9
      // 1cc: ifeq 1f7
      // 1cf: goto 1d6
      // 1d2: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 1d5: athrow
      // 1d6: aload 6
      // 1d8: iload 15
      // 1da: aload 1
      // 1db: getfield net/minecraft/class_238.field_1323 D
      // 1de: aload 1
      // 1df: getfield net/minecraft/class_238.field_1323 D
      // 1e2: dload 22
      // 1e4: dload 24
      // 1e6: dload 26
      // 1e8: dload 28
      // 1ea: getstatic sixtwo/pf$vt.LTsnB Lsixtwo/pf$vt;
      // 1ed: invokestatic sixtwo/pf.cNj (Ljava/util/List;IDDDDDDLsixtwo/pf$vt;)V
      // 1f0: goto 1f7
      // 1f3: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 1f6: athrow
      // 1f7: iload 8
      // 1f9: iload 5
      // 1fb: ifeq 22b
      // 1fe: ifeq 229
      // 201: goto 208
      // 204: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 207: athrow
      // 208: aload 6
      // 20a: iload 15
      // 20c: aload 1
      // 20d: getfield net/minecraft/class_238.field_1320 D
      // 210: aload 1
      // 211: getfield net/minecraft/class_238.field_1320 D
      // 214: dload 22
      // 216: dload 24
      // 218: dload 26
      // 21a: dload 28
      // 21c: getstatic sixtwo/pf$vt.LTsnB Lsixtwo/pf$vt;
      // 21f: invokestatic sixtwo/pf.cNj (Ljava/util/List;IDDDDDDLsixtwo/pf$vt;)V
      // 222: goto 229
      // 225: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 228: athrow
      // 229: iload 9
      // 22b: iload 5
      // 22d: ifeq 25d
      // 230: ifeq 25b
      // 233: goto 23a
      // 236: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 239: athrow
      // 23a: aload 6
      // 23c: iload 15
      // 23e: dload 18
      // 240: dload 20
      // 242: aload 1
      // 243: getfield net/minecraft/class_238.field_1322 D
      // 246: aload 1
      // 247: getfield net/minecraft/class_238.field_1322 D
      // 24a: dload 26
      // 24c: dload 28
      // 24e: getstatic sixtwo/pf$vt.ApZth Lsixtwo/pf$vt;
      // 251: invokestatic sixtwo/pf.cNj (Ljava/util/List;IDDDDDDLsixtwo/pf$vt;)V
      // 254: goto 25b
      // 257: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 25a: athrow
      // 25b: iload 10
      // 25d: iload 5
      // 25f: ifeq 28f
      // 262: ifeq 28d
      // 265: goto 26c
      // 268: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 26b: athrow
      // 26c: aload 6
      // 26e: iload 15
      // 270: dload 18
      // 272: dload 20
      // 274: aload 1
      // 275: getfield net/minecraft/class_238.field_1325 D
      // 278: aload 1
      // 279: getfield net/minecraft/class_238.field_1325 D
      // 27c: dload 26
      // 27e: dload 28
      // 280: getstatic sixtwo/pf$vt.ApZth Lsixtwo/pf$vt;
      // 283: invokestatic sixtwo/pf.cNj (Ljava/util/List;IDDDDDDLsixtwo/pf$vt;)V
      // 286: goto 28d
      // 289: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 28c: athrow
      // 28d: iload 11
      // 28f: iload 5
      // 291: ifeq 2c1
      // 294: ifeq 2bf
      // 297: goto 29e
      // 29a: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 29d: athrow
      // 29e: aload 6
      // 2a0: iload 15
      // 2a2: dload 18
      // 2a4: dload 20
      // 2a6: dload 22
      // 2a8: dload 24
      // 2aa: aload 1
      // 2ab: getfield net/minecraft/class_238.field_1321 D
      // 2ae: aload 1
      // 2af: getfield net/minecraft/class_238.field_1321 D
      // 2b2: getstatic sixtwo/pf$vt.cZCQb Lsixtwo/pf$vt;
      // 2b5: invokestatic sixtwo/pf.cNj (Ljava/util/List;IDDDDDDLsixtwo/pf$vt;)V
      // 2b8: goto 2bf
      // 2bb: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 2be: athrow
      // 2bf: iload 12
      // 2c1: ifeq 2e5
      // 2c4: aload 6
      // 2c6: iload 15
      // 2c8: dload 18
      // 2ca: dload 20
      // 2cc: dload 22
      // 2ce: dload 24
      // 2d0: aload 1
      // 2d1: getfield net/minecraft/class_238.field_1324 D
      // 2d4: aload 1
      // 2d5: getfield net/minecraft/class_238.field_1324 D
      // 2d8: getstatic sixtwo/pf$vt.cZCQb Lsixtwo/pf$vt;
      // 2db: invokestatic sixtwo/pf.cNj (Ljava/util/List;IDDDDDDLsixtwo/pf$vt;)V
      // 2de: goto 2e5
      // 2e1: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 2e4: athrow
      // 2e5: aload 6
      // 2e7: iload 5
      // 2e9: ifne 2f8
      // 2ec: ldc "eIYnj"
      // 2ee: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 2f1: goto 2f8
      // 2f4: invokestatic sixtwo/pf.cNk (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 2f7: athrow
      // 2f8: areturn
   }

   private static IllegalStateException cNk(IllegalStateException var0) {
      return var0;
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private static void cNj(List<class_243> var0, int var1, double var2, double var4, double var6, double var8, double var10, double var12, pf$vt var14) {
      long var15 = AQdMn ^ 47234360121312L;
      int var10000 = ph.cNo();
      int var18 = 0;
      boolean var17 = (boolean)var10000;

      label55:
      while (true) {
         var10000 = var18;

         label52:
         while (var10000 < var1) {
            int var19 = 0;

            label49: {
               while (var19 < var1) {
                  double var20 = (var18 + 0.5) / var1;
                  double var22 = (var19 + 0.5) / var1;
                  var10000 = var14.ordinal();
                  if (var17) {
                     continue label52;
                  }

                  double var24;
                  double var26;
                  double var28;
                  switch (var10000) {
                     case 0:
                        var24 = var2;
                        var26 = var6 + (var8 - var6) * var20;
                        var28 = var10 + (var12 - var10) * var22;
                        if (!var17) {
                           break;
                        }
                     case 1:
                        var24 = var2 + (var4 - var2) * var20;
                        var26 = var6;
                        var28 = var10 + (var12 - var10) * var22;
                        if (!var17) {
                           break;
                        }
                     case 2:
                        var24 = var2 + (var4 - var2) * var20;
                        var26 = var6 + (var8 - var6) * var22;
                        var28 = var10;

                        try {
                           if (var17) {
                              break label49;
                           }
                           break;
                        } catch (IllegalStateException var31) {
                           throw cNk(var31);
                        }
                     default:
                        break label49;
                  }

                  var0.add(new class_243(var24, var26, var28));
                  var19++;
                  if (var17) {
                     break;
                  }
               }

               var18++;
               if (!var17) {
                  continue label55;
               }
               break;
            }

            try {
               throw new IllegalStateException();
            } catch (IllegalStateException var30) {
               throw cNk(var30);
            }
         }

         return;
      }
   }
}
