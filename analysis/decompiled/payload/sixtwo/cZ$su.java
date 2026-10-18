package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1309;
import net.minecraft.class_243;
import net.minecraft.class_287;
import net.minecraft.class_4184;
import net.minecraft.class_4587;

final class cZ$su {
   private final List<ml> FYVSB;
   private final UUID Abjlp;
   private boolean nYGDp;
   private static final long byLhk = gb.aYR(-3416882283050841335L, -5259282583627597540L, MethodHandles.lookup().lookupClass()).a(87722170772133L);
   private static final long[] dzFFK;
   private static final Integer[] EqhUH;
   private static final Map uPfsb = new HashMap(13);
   private static final long[] NMglr;
   private static final Long[] alVkZ;
   private static final Map affoO;

   private cZ$su(class_1309 param1, int param2, float param3, long param4, mG param6, float param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cZ$su.byLhk J
      // 03: ldc2_w 81915334647140
      // 06: lxor
      // 07: lstore 8
      // 09: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0c: aload 0
      // 0d: invokespecial java/lang/Object.<init> ()V
      // 10: aload 0
      // 11: new java/util/ArrayList
      // 14: dup
      // 15: invokespecial java/util/ArrayList.<init> ()V
      // 18: putfield sixtwo/cZ$su.FYVSB Ljava/util/List;
      // 1b: aload 0
      // 1c: bipush 1
      // 1d: putfield sixtwo/cZ$su.nYGDp Z
      // 20: astore 10
      // 22: aload 0
      // 23: aload 1
      // 24: invokevirtual net/minecraft/class_1309.method_5667 ()Ljava/util/UUID;
      // 27: putfield sixtwo/cZ$su.Abjlp Ljava/util/UUID;
      // 2a: aload 1
      // 2b: invokevirtual net/minecraft/class_1309.method_73189 ()Lnet/minecraft/class_243;
      // 2e: astore 11
      // 30: aload 1
      // 31: invokevirtual net/minecraft/class_1309.method_17681 ()F
      // 34: fstore 12
      // 36: aload 1
      // 37: invokevirtual net/minecraft/class_1309.method_17682 ()F
      // 3a: fstore 13
      // 3c: new net/minecraft/class_243
      // 3f: dup
      // 40: aload 11
      // 42: getfield net/minecraft/class_243.field_1352 D
      // 45: aload 11
      // 47: getfield net/minecraft/class_243.field_1351 D
      // 4a: fload 13
      // 4c: f2d
      // 4d: ldc2_w 0.5
      // 50: dmul
      // 51: dadd
      // 52: aload 11
      // 54: getfield net/minecraft/class_243.field_1350 D
      // 57: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 5a: astore 14
      // 5c: aload 1
      // 5d: getfield net/minecraft/class_1309.field_6283 F
      // 60: f2d
      // 61: invokestatic java/lang/Math.toRadians (D)D
      // 64: dstore 15
      // 66: dload 15
      // 68: invokestatic java/lang/Math.sin (D)D
      // 6b: dstore 17
      // 6d: dload 15
      // 6f: invokestatic java/lang/Math.cos (D)D
      // 72: dstore 19
      // 74: fload 12
      // 76: fload 12
      // 78: fmul
      // 79: fload 13
      // 7b: fload 13
      // 7d: fmul
      // 7e: fadd
      // 7f: f2d
      // 80: invokestatic java/lang/Math.sqrt (D)D
      // 83: d2f
      // 84: fstore 21
      // 86: aload 1
      // 87: invokestatic sixtwo/cZ.abf (Lnet/minecraft/class_1309;)Ljava/util/List;
      // 8a: astore 22
      // 8c: aload 10
      // 8e: ifnonnull c3
      // 91: aload 22
      // 93: invokeinterface java/util/List.isEmpty ()Z 1
      // 98: ifeq c8
      // 9b: goto a2
      // 9e: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a1: athrow
      // a2: aload 0
      // a3: iload 2
      // a4: aload 11
      // a6: aload 14
      // a8: fload 12
      // aa: fload 13
      // ac: fload 21
      // ae: fload 7
      // b0: dload 17
      // b2: dload 19
      // b4: fload 3
      // b5: lload 4
      // b7: aload 6
      // b9: invokevirtual sixtwo/cZ$su.dnX (ILnet/minecraft/class_243;Lnet/minecraft/class_243;FFFFDDFJLsixtwo/mG;)V
      // bc: goto c3
      // bf: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c2: athrow
      // c3: aload 10
      // c5: ifnull e9
      // c8: aload 0
      // c9: iload 2
      // ca: aload 22
      // cc: aload 11
      // ce: aload 14
      // d0: fload 13
      // d2: fload 21
      // d4: fload 7
      // d6: dload 17
      // d8: dload 19
      // da: fload 3
      // db: lload 4
      // dd: aload 6
      // df: invokevirtual sixtwo/cZ$su.dnW (ILjava/util/List;Lnet/minecraft/class_243;Lnet/minecraft/class_243;FFFDDFJLsixtwo/mG;)V
      // e2: goto e9
      // e5: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e8: athrow
      // e9: return
   }

   static {
      long var11 = byLhk ^ 45582593715165L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var19 = new long[2];
      int var16 = 0;
      String var17 = "°.j\u009fR\u0017\u001eæ /\u0093zÓ\\ö\u001b";
      int var18 = "°.j\u009fR\u0017\u001eæ /\u0093zÓ\\ö\u001b".length();
      byte var15 = 0;

      do {
         int var10001 = var15;
         var15 += 8;
         byte[] var20 = var17.substring(var10001, var15).getBytes("ISO-8859-1");
         var10001 = var16++;
         long var21 = (var20[0] & 255L) << 56
            | (var20[1] & 255L) << 48
            | (var20[2] & 255L) << 40
            | (var20[3] & 255L) << 32
            | (var20[4] & 255L) << 24
            | (var20[5] & 255L) << 16
            | (var20[6] & 255L) << 8
            | var20[7] & 255L;
         byte[] var23 = var13.doFinal(
            new byte[]{
               (byte)(var21 >>> 56),
               (byte)(var21 >>> 48),
               (byte)(var21 >>> 40),
               (byte)(var21 >>> 32),
               (byte)(var21 >>> 24),
               (byte)(var21 >>> 16),
               (byte)(var21 >>> 8),
               (byte)var21
            }
         );
         long var10004 = (var23[0] & 255L) << 56
            | (var23[1] & 255L) << 48
            | (var23[2] & 255L) << 40
            | (var23[3] & 255L) << 32
            | (var23[4] & 255L) << 24
            | (var23[5] & 255L) << 16
            | (var23[6] & 255L) << 8
            | var23[7] & 255L;
         byte var29 = -1;
         var19[var10001] = var10004;
      } while (var15 < var18);

      dzFFK = var19;
      EqhUH = new Integer[2];
      affoO = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[2];
      int var3 = 0;
      String var4 = "\u0005S`²¥\u0095¯k\u009e9g)Ö¡zü";
      int var5 = "\u0005S`²¥\u0095¯k\u009e9g)Ö¡zü".length();
      byte var2 = 0;

      do {
         int var26 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var26, var2).getBytes("ISO-8859-1");
         var26 = var3++;
         long var8 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
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
         long var32 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         byte var31 = -1;
         var6[var26] = var32;
      } while (var2 < var5);

      NMglr = var6;
      alVkZ = new Long[2];
   }

   private static MatchException doc(MatchException var0) {
      return var0;
   }

   private void dnW(
      int param1,
      List<float[]> param2,
      class_243 param3,
      class_243 param4,
      float param5,
      float param6,
      float param7,
      double param8,
      double param10,
      float param12,
      long param13,
      mG param15
   ) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cZ$su.byLhk J
      // 003: ldc2_w 24913676967819
      // 006: lxor
      // 007: lstore 16
      // 009: ldc Infinity
      // 00b: fstore 19
      // 00d: ldc Infinity
      // 00f: fstore 20
      // 011: ldc Infinity
      // 013: fstore 21
      // 015: ldc -Infinity
      // 017: fstore 22
      // 019: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 01c: ldc -Infinity
      // 01e: fstore 23
      // 020: ldc -Infinity
      // 022: fstore 24
      // 024: fconst_0
      // 025: fstore 25
      // 027: astore 18
      // 029: aload 2
      // 02a: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 02f: astore 26
      // 031: aload 26
      // 033: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 038: ifeq 0a9
      // 03b: aload 26
      // 03d: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 042: checkcast [F
      // 045: astore 27
      // 047: fload 19
      // 049: aload 27
      // 04b: bipush 0
      // 04c: faload
      // 04d: invokestatic java/lang/Math.min (FF)F
      // 050: fstore 19
      // 052: fload 20
      // 054: aload 27
      // 056: bipush 1
      // 057: faload
      // 058: invokestatic java/lang/Math.min (FF)F
      // 05b: fstore 20
      // 05d: fload 21
      // 05f: aload 27
      // 061: bipush 2
      // 062: faload
      // 063: invokestatic java/lang/Math.min (FF)F
      // 066: fstore 21
      // 068: fload 22
      // 06a: aload 27
      // 06c: bipush 3
      // 06d: faload
      // 06e: invokestatic java/lang/Math.max (FF)F
      // 071: fstore 22
      // 073: fload 23
      // 075: aload 27
      // 077: bipush 4
      // 078: faload
      // 079: invokestatic java/lang/Math.max (FF)F
      // 07c: fstore 23
      // 07e: fload 24
      // 080: aload 27
      // 082: bipush 5
      // 083: faload
      // 084: invokestatic java/lang/Math.max (FF)F
      // 087: fstore 24
      // 089: fload 25
      // 08b: aload 27
      // 08d: sipush 3323
      // 090: ldc2_w 5919368968920556359
      // 093: lload 16
      // 095: lxor
      // 096: invokedynamic a (IJ)I bsm=sixtwo/cZ$su.dof (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09b: faload
      // 09c: fadd
      // 09d: aload 18
      // 09f: ifnonnull 0b1
      // 0a2: fstore 25
      // 0a4: aload 18
      // 0a6: ifnull 031
      // 0a9: fload 19
      // 0ab: fload 22
      // 0ad: fadd
      // 0ae: ldc 0.5
      // 0b0: fmul
      // 0b1: fstore 26
      // 0b3: fload 21
      // 0b5: fload 24
      // 0b7: fadd
      // 0b8: ldc 0.5
      // 0ba: fmul
      // 0bb: fstore 27
      // 0bd: fload 23
      // 0bf: fload 20
      // 0c1: fsub
      // 0c2: ldc 16.0
      // 0c4: fdiv
      // 0c5: fstore 28
      // 0c7: fload 28
      // 0c9: ldc 0.01
      // 0cb: aload 18
      // 0cd: ifnonnull 0e6
      // 0d0: fcmpl
      // 0d1: ifle 0ea
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0da: athrow
      // 0db: fload 5
      // 0dd: fload 28
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e5: athrow
      // 0e6: fdiv
      // 0e7: goto 0eb
      // 0ea: fconst_1
      // 0eb: fstore 29
      // 0ed: bipush 0
      // 0ee: istore 30
      // 0f0: iload 30
      // 0f2: iload 1
      // 0f3: if_icmpge 181
      // 0f6: aload 2
      // 0f7: fload 25
      // 0f9: invokestatic sixtwo/cZ$su.dnY (Ljava/util/List;F)[F
      // 0fc: astore 31
      // 0fe: aload 31
      // 100: invokestatic sixtwo/cZ$su.dnZ ([F)[F
      // 103: astore 32
      // 105: aload 32
      // 107: bipush 0
      // 108: faload
      // 109: fload 26
      // 10b: fsub
      // 10c: f2d
      // 10d: ldc2_w 16.0
      // 110: ddiv
      // 111: dstore 33
      // 113: fload 23
      // 115: aload 32
      // 117: bipush 1
      // 118: faload
      // 119: fsub
      // 11a: f2d
      // 11b: ldc2_w 16.0
      // 11e: ddiv
      // 11f: fload 29
      // 121: f2d
      // 122: dmul
      // 123: dstore 35
      // 125: aload 32
      // 127: bipush 2
      // 128: faload
      // 129: fload 27
      // 12b: fsub
      // 12c: f2d
      // 12d: ldc2_w 16.0
      // 130: ddiv
      // 131: dstore 37
      // 133: dload 33
      // 135: dload 10
      // 137: dmul
      // 138: dload 37
      // 13a: dload 8
      // 13c: dmul
      // 13d: dsub
      // 13e: dstore 39
      // 140: dload 33
      // 142: dload 8
      // 144: dmul
      // 145: dload 37
      // 147: dload 10
      // 149: dmul
      // 14a: dadd
      // 14b: dstore 41
      // 14d: aload 0
      // 14e: new net/minecraft/class_243
      // 151: dup
      // 152: aload 3
      // 153: getfield net/minecraft/class_243.field_1352 D
      // 156: dload 39
      // 158: dadd
      // 159: aload 3
      // 15a: getfield net/minecraft/class_243.field_1351 D
      // 15d: dload 35
      // 15f: dadd
      // 160: aload 3
      // 161: getfield net/minecraft/class_243.field_1350 D
      // 164: dload 41
      // 166: dadd
      // 167: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 16a: aload 4
      // 16c: fload 6
      // 16e: fload 7
      // 170: fload 12
      // 172: lload 13
      // 174: aload 15
      // 176: invokevirtual sixtwo/cZ$su.doa (Lnet/minecraft/class_243;Lnet/minecraft/class_243;FFFJLsixtwo/mG;)V
      // 179: iinc 30 1
      // 17c: aload 18
      // 17e: ifnull 0f0
      // 181: return
   }

   private void dnX(
      int var1, class_243 var2, class_243 var3, float var4, float var5, float var6, float var7, double var8, double var10, float var12, long var13, mG var15
   ) {
      long var16 = byLhk ^ 3693208967193L;
      iS[] var10000 = dh.afl();
      int var19 = 0;
      iS[] var18 = var10000;

      while (var19 < var1) {
         double var20 = cZ.abk(0.0F, (float) (Math.PI * 2));
         double var22 = Math.acos(cZ.abk(-1.0F, 1.0F));
         double var24 = Math.cbrt(cZ.abk(0.0F, 1.0F));
         double var26 = var4 * 0.45 * var24 * Math.sin(var22) * Math.cos(var20);
         double var28 = var5 * 0.45 * var24 * Math.cos(var22) + var5 * 0.5;
         double var30 = var4 * 0.45 * var24 * Math.sin(var22) * Math.sin(var20);
         double var32 = var26 * var10 - var30 * var8;
         double var34 = var26 * var8 + var30 * var10;
         this.doa(new class_243(var2.field_1352 + var32, var2.field_1351 + var28, var2.field_1350 + var34), var3, var6, var7, var12, var13, var15);
         var19++;
         if (var18 != null) {
            break;
         }
      }
   }

   private static int doe(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = dod(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static long dog(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 8182;
      if (alVkZ[var3] == null) {
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
         long var5 = NMglr[var3];
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
         Object[] var9 = (Object[])affoO.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               affoO.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cZ$su", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         alVkZ[var3] = var15;
      }

      return alVkZ[var3];
   }

   private static long doh(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = dog(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   private static CallSite dof(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("doe".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cZ$su" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static float[] dnZ(float[] param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cZ$su.byLhk J
      // 03: ldc2_w 8521907942825
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: fconst_0
      // 0d: fconst_1
      // 0e: invokestatic sixtwo/cZ.abk (FF)F
      // 11: ldc 0.7
      // 13: fcmpg
      // 14: aload 3
      // 15: ifnonnull 3d
      // 18: ifge 3c
      // 1b: goto 22
      // 1e: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: bipush 0
      // 24: faload
      // 25: aload 0
      // 26: bipush 1
      // 27: faload
      // 28: aload 0
      // 29: bipush 2
      // 2a: faload
      // 2b: aload 0
      // 2c: bipush 3
      // 2d: faload
      // 2e: aload 0
      // 2f: bipush 4
      // 30: faload
      // 31: aload 0
      // 32: bipush 5
      // 33: faload
      // 34: invokestatic sixtwo/cZ.abi (FFFFFF)[F
      // 37: areturn
      // 38: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 3
      // 3d: newarray 6
      // 3f: dup
      // 40: bipush 0
      // 41: aload 0
      // 42: bipush 0
      // 43: faload
      // 44: aload 0
      // 45: bipush 3
      // 46: faload
      // 47: invokestatic sixtwo/cZ.abk (FF)F
      // 4a: fastore
      // 4b: dup
      // 4c: bipush 1
      // 4d: aload 0
      // 4e: bipush 1
      // 4f: faload
      // 50: aload 0
      // 51: bipush 4
      // 52: faload
      // 53: invokestatic sixtwo/cZ.abk (FF)F
      // 56: fastore
      // 57: dup
      // 58: bipush 2
      // 59: aload 0
      // 5a: bipush 2
      // 5b: faload
      // 5c: aload 0
      // 5d: bipush 5
      // 5e: faload
      // 5f: invokestatic sixtwo/cZ.abk (FF)F
      // 62: fastore
      // 63: areturn
   }

   private static CallSite doi(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("doh".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cZ$su" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void doa(class_243 var1, class_243 var2, float var3, float var4, float var5, long var6, mG var8) {
      long var9 = byLhk ^ 127895807501609L;
      class_243 var11 = var1.method_1020(var2);
      double var12 = var11.method_1033();

      class_243 var10000;
      label17: {
         try {
            if (var12 > 0.001) {
               var10000 = var11.method_1021(1.0 / var12);
               break label17;
            }
         } catch (MatchException var18) {
            throw doc(var18);
         }

         var10000 = cZ.abj();
      }

      class_243 var14 = var10000;
      var14 = cZ.abh(var14, Math.min(0.6F, var4 * 0.5F));
      float var15 = var3 * var4 * cZ.abk(0.6F, 1.4F);
      float var16 = var5 * cZ.abk(0.85F, 1.15F);
      long[] var17 = dob(var6, (float)var12, var3);
      this.FYVSB.add(new ml(var1, var14, var15, var16, var17[0], var17[1], var17[2], var8));
   }

   private static long[] dob(long param0, float param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cZ$su.byLhk J
      // 03: ldc2_w 132097837722583
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0c: astore 6
      // 0e: fload 3
      // 0f: ldc_w 0.001
      // 12: aload 6
      // 14: ifnonnull 30
      // 17: fcmpl
      // 18: ifle 36
      // 1b: goto 22
      // 1e: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: fconst_1
      // 23: fload 2
      // 24: fload 3
      // 25: ldc 0.5
      // 27: fmul
      // 28: fdiv
      // 29: goto 30
      // 2c: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: invokestatic java/lang/Math.min (FF)F
      // 33: goto 37
      // 36: fconst_0
      // 37: fstore 7
      // 39: sipush 32204
      // 3c: fconst_1
      // 3d: fload 7
      // 3f: ldc 0.7
      // 41: fmul
      // 42: fsub
      // 43: ldc_w 0.4
      // 46: fconst_1
      // 47: invokestatic sixtwo/cZ.abk (FF)F
      // 4a: fmul
      // 4b: fstore 8
      // 4d: ldc2_w 80754262270070159
      // 50: lload 4
      // 52: lxor
      // 53: lconst_0
      // 54: lload 0
      // 55: l2f
      // 56: fload 8
      // 58: fmul
      // 59: invokestatic java/lang/Math.round (F)I
      // 5c: i2l
      // 5d: invokestatic java/lang/Math.max (JJ)J
      // 60: lstore 9
      // 62: invokedynamic v (IJ)J bsm=sixtwo/cZ$su.doi (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 67: lload 0
      // 68: sipush 543
      // 6b: ldc2_w 5229822448085086813
      // 6e: lload 4
      // 70: lxor
      // 71: invokedynamic v (IJ)J bsm=sixtwo/cZ$su.doi (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 76: ldiv
      // 77: invokestatic java/lang/Math.max (JJ)J
      // 7a: lstore 11
      // 7c: lload 0
      // 7d: lload 9
      // 7f: ladd
      // 80: lstore 13
      // 82: lload 13
      // 84: lload 11
      // 86: ladd
      // 87: lstore 15
      // 89: bipush 3
      // 8a: newarray 11
      // 8c: dup
      // 8d: bipush 0
      // 8e: lload 0
      // 8f: lastore
      // 90: dup
      // 91: bipush 1
      // 92: lload 13
      // 94: lastore
      // 95: dup
      // 96: bipush 2
      // 97: lload 15
      // 99: lastore
      // 9a: areturn
   }

   private static float[] dnY(List<float[]> var0, float var1) {
      long var2 = byLhk ^ 132557349800213L;
      iS[] var10000 = dh.afl();
      float var5 = cZ.abk(0.0F, var1);
      float var6 = 0.0F;
      Iterator var7 = var0.iterator();
      iS[] var4 = var10000;

      while (true) {
         if (var7.hasNext()) {
            var10 = (float[])var7.next();
            if (var4 != null) {
               break;
            }

            float[] var8 = var10;
            var6 += var8[dof<"a">(5605, 4996667067135962310L ^ var2)];

            try {
               if (var5 <= var6) {
                  return var8;
               }
            } catch (MatchException var9) {
               throw doc(var9);
            }

            if (var4 == null) {
               continue;
            }
         }

         var10 = (float[])var0.getLast();
         break;
      }

      return var10;
   }

   private static int dod(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 13396;
      if (EqhUH[var3] == null) {
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
         long var5 = dzFFK[var3];
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
         Object[] var9 = (Object[])uPfsb.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               uPfsb.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cZ$su", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         EqhUH[var3] = var15;
      }

      return EqhUH[var3];
   }

   private void dnU(class_287 var1, class_4587 var2, class_4184 var3, float var4) {
      long var5 = byLhk ^ 95914343047485L;
      iS[] var10000 = dh.afl();
      Iterator var8 = this.FYVSB.iterator();
      iS[] var7 = var10000;

      while (var8.hasNext()) {
         ml var9 = (ml)var8.next();
         var9.clh(var1, var2, var3, var4);
         if (var7 != null) {
            break;
         }
      }
   }

   private void dnV() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cZ$su.byLhk J
      // 03: ldc2_w 86014627773982
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: getfield sixtwo/cZ$su.FYVSB Ljava/util/List;
      // 0f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14: astore 4
      // 16: astore 3
      // 17: aload 4
      // 19: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1e: ifeq 52
      // 21: aload 4
      // 23: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 28: checkcast sixtwo/ml
      // 2b: astore 5
      // 2d: aload 5
      // 2f: invokevirtual sixtwo/ml.clg ()Z
      // 32: aload 3
      // 33: ifnonnull 66
      // 36: ifeq 4e
      // 39: goto 40
      // 3c: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: aload 4
      // 42: invokeinterface java/util/Iterator.remove ()V 1
      // 47: goto 4e
      // 4a: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: aload 3
      // 4f: ifnull 17
      // 52: aload 0
      // 53: aload 3
      // 54: ifnonnull 6a
      // 57: getfield sixtwo/cZ$su.FYVSB Ljava/util/List;
      // 5a: invokeinterface java/util/List.isEmpty ()Z 1
      // 5f: goto 66
      // 62: invokestatic sixtwo/cZ$su.doc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: ifeq 6e
      // 69: aload 0
      // 6a: bipush 0
      // 6b: putfield sixtwo/cZ$su.nYGDp Z
      // 6e: return
   }
}
