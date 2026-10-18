package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_287;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_630;
import net.minecraft.class_742;
import org.joml.Matrix4f;
import org.joml.Vector3f;

public final class kq {
   private static int hmhqw;
   private static final long WdBQQ = gb.aYR(845915686675419384L, 5212466952231506870L, MethodHandles.lookup().lookupClass()).a(161708862246564L);

   static {
      if (bQM() == 0) {
         bQK(22);
      }
   }

   private static MatchException bQN(MatchException var0) {
      return var0;
   }

   public static int bQM() {
      int var0 = bQL();

      try {
         return var0 == 0 ? 84 : 0;
      } catch (MatchException var1) {
         throw bQN(var1);
      }
   }

   private static void bQJ(class_4587 param0, class_630 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kq.WdBQQ J
      // 03: ldc2_w 26766528155906
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kq.bQM ()I
      // 0b: istore 4
      // 0d: aload 1
      // 0e: getfield net/minecraft/class_630.field_3674 F
      // 11: fconst_0
      // 12: fcmpl
      // 13: iload 4
      // 15: ifeq 3f
      // 18: ifeq 39
      // 1b: goto 22
      // 1e: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: getstatic net/minecraft/class_7833.field_40718 Lnet/minecraft/class_7833;
      // 26: aload 1
      // 27: getfield net/minecraft/class_630.field_3674 F
      // 2a: invokeinterface net/minecraft/class_7833.rotation (F)Lorg/joml/Quaternionf; 2
      // 2f: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 32: goto 39
      // 35: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 1
      // 3a: getfield net/minecraft/class_630.field_3675 F
      // 3d: fconst_0
      // 3e: fcmpl
      // 3f: iload 4
      // 41: ifeq 6b
      // 44: ifeq 65
      // 47: goto 4e
      // 4a: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: aload 0
      // 4f: getstatic net/minecraft/class_7833.field_40715 Lnet/minecraft/class_7833;
      // 52: aload 1
      // 53: getfield net/minecraft/class_630.field_3675 F
      // 56: invokeinterface net/minecraft/class_7833.rotation (F)Lorg/joml/Quaternionf; 2
      // 5b: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 5e: goto 65
      // 61: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: aload 1
      // 66: getfield net/minecraft/class_630.field_3654 F
      // 69: fconst_0
      // 6a: fcmpl
      // 6b: ifeq 85
      // 6e: aload 0
      // 6f: getstatic net/minecraft/class_7833.field_40713 Lnet/minecraft/class_7833;
      // 72: aload 1
      // 73: getfield net/minecraft/class_630.field_3654 F
      // 76: invokeinterface net/minecraft/class_7833.rotation (F)Lorg/joml/Quaternionf; 2
      // 7b: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 7e: goto 85
      // 81: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 84: athrow
      // 85: return
   }

   public static void bQK(int var0) {
      hmhqw = var0;
   }

   private static void bQH(class_287 var0, class_4587 var1, float var2, float var3, float var4, float var5, float var6, float var7, int var8, float var9) {
      Matrix4f var10 = var1.method_23760().method_23761();
      Vector3f var11 = bQI(var2, var3, var4, var5, var6, var7);
      var0.method_22918(var10, var2, var3, var4).method_39415(var8).method_60831(var1.method_23760(), var11.x(), var11.y(), var11.z()).method_75298(var9);
      var0.method_22918(var10, var5, var6, var7).method_39415(var8).method_60831(var1.method_23760(), var11.x(), var11.y(), var11.z()).method_75298(var9);
   }

   public static int bQL() {
      return hmhqw;
   }

   private static Vector3f bQI(float var0, float var1, float var2, float var3, float var4, float var5) {
      float var6 = var3 - var0;
      float var7 = var4 - var1;
      float var8 = var5 - var2;
      float var9 = class_3532.method_15355(var6 * var6 + var7 * var7 + var8 * var8);
      return new Vector3f(var6 / var9, var7 / var9, var8 / var9);
   }

   public static void bQG(class_4587 param0, class_287 param1, float param2, class_742 param3, int param4, float param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kq.WdBQQ J
      // 003: ldc2_w 93401702963734
      // 006: lxor
      // 007: lstore 6
      // 009: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 00c: invokevirtual net/minecraft/class_310.method_1561 ()Lnet/minecraft/class_898;
      // 00f: aload 3
      // 010: invokevirtual net/minecraft/class_898.method_74405 (Lnet/minecraft/class_742;)Lnet/minecraft/class_1007;
      // 013: astore 9
      // 015: aload 9
      // 017: invokevirtual net/minecraft/class_1007.method_4038 ()Lnet/minecraft/class_583;
      // 01a: checkcast net/minecraft/class_591
      // 01d: astore 10
      // 01f: fload 2
      // 020: aload 3
      // 021: getfield net/minecraft/class_742.field_6220 F
      // 024: aload 3
      // 025: getfield net/minecraft/class_742.field_6283 F
      // 028: invokestatic net/minecraft/class_3532.method_17821 (FFF)F
      // 02b: fstore 11
      // 02d: aload 3
      // 02e: fload 2
      // 02f: invokevirtual net/minecraft/class_742.method_5695 (F)F
      // 032: fstore 12
      // 034: aload 3
      // 035: invokevirtual net/minecraft/class_742.method_20232 ()Z
      // 038: istore 13
      // 03a: invokestatic sixtwo/kq.bQM ()I
      // 03d: aload 3
      // 03e: invokevirtual net/minecraft/class_742.method_18276 ()Z
      // 041: istore 14
      // 043: aload 3
      // 044: invokevirtual net/minecraft/class_742.method_6128 ()Z
      // 047: istore 15
      // 049: aload 10
      // 04b: getfield net/minecraft/class_591.field_3398 Lnet/minecraft/class_630;
      // 04e: astore 16
      // 050: aload 10
      // 052: getfield net/minecraft/class_591.field_27433 Lnet/minecraft/class_630;
      // 055: astore 17
      // 057: aload 10
      // 059: getfield net/minecraft/class_591.field_3401 Lnet/minecraft/class_630;
      // 05c: astore 18
      // 05e: aload 10
      // 060: getfield net/minecraft/class_591.field_3397 Lnet/minecraft/class_630;
      // 063: astore 19
      // 065: aload 10
      // 067: getfield net/minecraft/class_591.field_3392 Lnet/minecraft/class_630;
      // 06a: astore 20
      // 06c: aload 0
      // 06d: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 070: istore 8
      // 072: new net/minecraft/class_10055
      // 075: dup
      // 076: invokespecial net/minecraft/class_10055.<init> ()V
      // 079: astore 21
      // 07b: aload 9
      // 07d: aload 3
      // 07e: aload 21
      // 080: fload 2
      // 081: invokevirtual net/minecraft/class_1007.method_62604 (Lnet/minecraft/class_11890;Lnet/minecraft/class_10055;F)V
      // 084: aload 10
      // 086: aload 21
      // 088: invokevirtual net/minecraft/class_591.method_62110 (Lnet/minecraft/class_10055;)V
      // 08b: aload 3
      // 08c: fload 2
      // 08d: invokevirtual net/minecraft/class_742.method_30950 (F)Lnet/minecraft/class_243;
      // 090: astore 22
      // 092: aload 0
      // 093: aload 22
      // 095: invokestatic sixtwo/jI.bIs (Lnet/minecraft/class_4587;Lnet/minecraft/class_243;)V
      // 098: iload 13
      // 09a: iload 8
      // 09c: ifeq 0e7
      // 09f: ifeq 0b8
      // 0a2: goto 0a9
      // 0a5: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a8: athrow
      // 0a9: aload 0
      // 0aa: fconst_0
      // 0ab: ldc 0.35
      // 0ad: fconst_0
      // 0ae: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 0b1: goto 0b8
      // 0b4: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b7: athrow
      // 0b8: aload 0
      // 0b9: new org/joml/Quaternionf
      // 0bc: dup
      // 0bd: invokespecial org/joml/Quaternionf.<init> ()V
      // 0c0: fload 11
      // 0c2: ldc 180.0
      // 0c4: fadd
      // 0c5: f2d
      // 0c6: ldc2_w 3.141592653589793
      // 0c9: dmul
      // 0ca: ldc2_w 180.0
      // 0cd: ddiv
      // 0ce: d2f
      // 0cf: fconst_0
      // 0d0: ldc -1.0
      // 0d2: fconst_0
      // 0d3: invokevirtual org/joml/Quaternionf.rotationAxis (FFFF)Lorg/joml/Quaternionf;
      // 0d6: iload 8
      // 0d8: ifeq 127
      // 0db: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 0de: iload 13
      // 0e0: goto 0e7
      // 0e3: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e6: athrow
      // 0e7: ifne 102
      // 0ea: iload 15
      // 0ec: iload 8
      // 0ee: ifeq 12c
      // 0f1: goto 0f8
      // 0f4: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f7: athrow
      // 0f8: ifeq 12a
      // 0fb: goto 102
      // 0fe: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 101: athrow
      // 102: aload 0
      // 103: new org/joml/Quaternionf
      // 106: dup
      // 107: invokespecial org/joml/Quaternionf.<init> ()V
      // 10a: ldc 90.0
      // 10c: fload 12
      // 10e: fadd
      // 10f: f2d
      // 110: ldc2_w 3.141592653589793
      // 113: dmul
      // 114: ldc2_w 180.0
      // 117: ddiv
      // 118: d2f
      // 119: ldc -1.0
      // 11b: fconst_0
      // 11c: fconst_0
      // 11d: invokevirtual org/joml/Quaternionf.rotationAxis (FFFF)Lorg/joml/Quaternionf;
      // 120: goto 127
      // 123: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 126: athrow
      // 127: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 12a: iload 13
      // 12c: ifeq 13e
      // 12f: aload 0
      // 130: fconst_0
      // 131: ldc -0.95
      // 133: fconst_0
      // 134: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 137: goto 13e
      // 13a: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13d: athrow
      // 13e: aload 1
      // 13f: aload 0
      // 140: fconst_0
      // 141: iload 14
      // 143: ifeq 14f
      // 146: ldc 0.6
      // 148: goto 151
      // 14b: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14e: athrow
      // 14f: ldc 0.7
      // 151: iload 14
      // 153: ifeq 15f
      // 156: ldc 0.23
      // 158: goto 160
      // 15b: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15e: athrow
      // 15f: fconst_0
      // 160: fconst_0
      // 161: iload 14
      // 163: ifeq 16f
      // 166: ldc 1.05
      // 168: goto 171
      // 16b: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16e: athrow
      // 16f: ldc 1.4
      // 171: fconst_0
      // 172: iload 4
      // 174: fload 5
      // 176: invokestatic sixtwo/kq.bQH (Lnet/minecraft/class_287;Lnet/minecraft/class_4587;FFFFFFIF)V
      // 179: aload 1
      // 17a: aload 0
      // 17b: ldc -0.37
      // 17d: iload 14
      // 17f: ifeq 18b
      // 182: ldc 1.05
      // 184: goto 18d
      // 187: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18a: athrow
      // 18b: ldc 1.35
      // 18d: fconst_0
      // 18e: ldc 0.37
      // 190: iload 14
      // 192: ifeq 19e
      // 195: ldc 1.05
      // 197: goto 1a0
      // 19a: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19d: athrow
      // 19e: ldc 1.35
      // 1a0: fconst_0
      // 1a1: iload 4
      // 1a3: fload 5
      // 1a5: invokestatic sixtwo/kq.bQH (Lnet/minecraft/class_287;Lnet/minecraft/class_4587;FFFFFFIF)V
      // 1a8: aload 1
      // 1a9: aload 0
      // 1aa: ldc -0.15
      // 1ac: iload 14
      // 1ae: ifeq 1ba
      // 1b1: ldc 0.6
      // 1b3: goto 1bc
      // 1b6: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b9: athrow
      // 1ba: ldc 0.7
      // 1bc: iload 14
      // 1be: ifeq 1ca
      // 1c1: ldc 0.23
      // 1c3: goto 1cb
      // 1c6: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c9: athrow
      // 1ca: fconst_0
      // 1cb: ldc 0.15
      // 1cd: iload 14
      // 1cf: ifeq 1db
      // 1d2: ldc 0.6
      // 1d4: goto 1dd
      // 1d7: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1da: athrow
      // 1db: ldc 0.7
      // 1dd: iload 14
      // 1df: ifeq 1eb
      // 1e2: ldc 0.23
      // 1e4: goto 1ec
      // 1e7: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ea: athrow
      // 1eb: fconst_0
      // 1ec: iload 4
      // 1ee: fload 5
      // 1f0: invokestatic sixtwo/kq.bQH (Lnet/minecraft/class_287;Lnet/minecraft/class_4587;FFFFFFIF)V
      // 1f3: aload 0
      // 1f4: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 1f7: aload 0
      // 1f8: fconst_0
      // 1f9: iload 14
      // 1fb: ifeq 207
      // 1fe: ldc 1.05
      // 200: goto 209
      // 203: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 206: athrow
      // 207: ldc 1.4
      // 209: fconst_0
      // 20a: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 20d: aload 0
      // 20e: aload 16
      // 210: invokestatic sixtwo/kq.bQJ (Lnet/minecraft/class_4587;Lnet/minecraft/class_630;)V
      // 213: aload 1
      // 214: aload 0
      // 215: fconst_0
      // 216: fconst_0
      // 217: fconst_0
      // 218: fconst_0
      // 219: ldc 0.15
      // 21b: fconst_0
      // 21c: iload 4
      // 21e: fload 5
      // 220: invokestatic sixtwo/kq.bQH (Lnet/minecraft/class_287;Lnet/minecraft/class_4587;FFFFFFIF)V
      // 223: aload 0
      // 224: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 227: aload 0
      // 228: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 22b: aload 0
      // 22c: ldc 0.15
      // 22e: iload 14
      // 230: ifeq 23c
      // 233: ldc 0.6
      // 235: goto 23e
      // 238: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23b: athrow
      // 23c: ldc 0.7
      // 23e: iload 14
      // 240: ifeq 24c
      // 243: ldc 0.23
      // 245: goto 24d
      // 248: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24b: athrow
      // 24c: fconst_0
      // 24d: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 250: aload 0
      // 251: aload 20
      // 253: invokestatic sixtwo/kq.bQJ (Lnet/minecraft/class_4587;Lnet/minecraft/class_630;)V
      // 256: aload 1
      // 257: aload 0
      // 258: fconst_0
      // 259: fconst_0
      // 25a: fconst_0
      // 25b: fconst_0
      // 25c: ldc -0.6
      // 25e: fconst_0
      // 25f: iload 4
      // 261: fload 5
      // 263: invokestatic sixtwo/kq.bQH (Lnet/minecraft/class_287;Lnet/minecraft/class_4587;FFFFFFIF)V
      // 266: aload 0
      // 267: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 26a: aload 0
      // 26b: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 26e: aload 0
      // 26f: ldc -0.15
      // 271: iload 14
      // 273: ifeq 27f
      // 276: ldc 0.6
      // 278: goto 281
      // 27b: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27e: athrow
      // 27f: ldc 0.7
      // 281: iload 14
      // 283: ifeq 28f
      // 286: ldc 0.23
      // 288: goto 290
      // 28b: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28e: athrow
      // 28f: fconst_0
      // 290: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 293: aload 0
      // 294: aload 19
      // 296: invokestatic sixtwo/kq.bQJ (Lnet/minecraft/class_4587;Lnet/minecraft/class_630;)V
      // 299: aload 1
      // 29a: aload 0
      // 29b: fconst_0
      // 29c: fconst_0
      // 29d: fconst_0
      // 29e: fconst_0
      // 29f: ldc -0.6
      // 2a1: fconst_0
      // 2a2: iload 4
      // 2a4: fload 5
      // 2a6: invokestatic sixtwo/kq.bQH (Lnet/minecraft/class_287;Lnet/minecraft/class_4587;FFFFFFIF)V
      // 2a9: aload 0
      // 2aa: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 2ad: aload 0
      // 2ae: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 2b1: aload 0
      // 2b2: ldc 0.37
      // 2b4: iload 14
      // 2b6: ifeq 2c2
      // 2b9: ldc 1.05
      // 2bb: goto 2c4
      // 2be: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c1: athrow
      // 2c2: ldc 1.35
      // 2c4: fconst_0
      // 2c5: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 2c8: aload 0
      // 2c9: aload 18
      // 2cb: invokestatic sixtwo/kq.bQJ (Lnet/minecraft/class_4587;Lnet/minecraft/class_630;)V
      // 2ce: aload 1
      // 2cf: aload 0
      // 2d0: fconst_0
      // 2d1: fconst_0
      // 2d2: fconst_0
      // 2d3: fconst_0
      // 2d4: ldc -0.55
      // 2d6: fconst_0
      // 2d7: iload 4
      // 2d9: fload 5
      // 2db: invokestatic sixtwo/kq.bQH (Lnet/minecraft/class_287;Lnet/minecraft/class_4587;FFFFFFIF)V
      // 2de: aload 0
      // 2df: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 2e2: aload 0
      // 2e3: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 2e6: aload 0
      // 2e7: ldc -0.37
      // 2e9: iload 14
      // 2eb: ifeq 2f7
      // 2ee: ldc 1.05
      // 2f0: goto 2f9
      // 2f3: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f6: athrow
      // 2f7: ldc 1.35
      // 2f9: fconst_0
      // 2fa: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 2fd: aload 0
      // 2fe: aload 17
      // 300: invokestatic sixtwo/kq.bQJ (Lnet/minecraft/class_4587;Lnet/minecraft/class_630;)V
      // 303: aload 1
      // 304: aload 0
      // 305: fconst_0
      // 306: fconst_0
      // 307: fconst_0
      // 308: fconst_0
      // 309: ldc -0.55
      // 30b: fconst_0
      // 30c: iload 4
      // 30e: fload 5
      // 310: invokestatic sixtwo/kq.bQH (Lnet/minecraft/class_287;Lnet/minecraft/class_4587;FFFFFFIF)V
      // 313: aload 0
      // 314: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 317: aload 0
      // 318: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 31b: iload 8
      // 31d: ifne 32c
      // 320: ldc "QLmeX"
      // 322: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 325: goto 32c
      // 328: invokestatic sixtwo/kq.bQN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32b: athrow
      // 32c: return
   }
}
