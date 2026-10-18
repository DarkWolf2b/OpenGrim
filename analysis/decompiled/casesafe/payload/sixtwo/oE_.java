package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_243;

public final class oE {
   private static final double DNYow = 0.15;
   private static final double XZnzz = 0.85;
   private static final long APCaM = gb.aYR(3061124458824285984L, 3083354060611859981L, MethodHandles.lookup().lookupClass()).a(17576920791162L);
   private static final String IBRal;

   static {
      long var0 = APCaM ^ 73630405109880L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("┬┐\u0087F┬╗\u008b\u0016\u0098├áE\u0014D\u0081q9├ů\u0092├Á├║\u0003┬ú\u0088┬Ě.├Ę".getBytes("ISO-8859-1"));
      String var5 = cIt(var4).intern();
      byte var10001 = -1;
      IBRal = var5;
   }

   private static IllegalStateException cIs(IllegalStateException var0) {
      return var0;
   }

   private static class_243 cIr(class_2338 var0, class_2350 var1) {
      long var2 = APCaM ^ 120605129479873L;

      try {
         switch (oE$vm.Ukckq[var1.ordinal()]) {
            case 1:
               return new class_243(var0.method_10263() + 0.5, var0.method_10264() + 1.0, var0.method_10260() + 0.5);
            case 2:
               return new class_243(var0.method_10263() + 0.5, var0.method_10264(), var0.method_10260() + 0.5);
            case 3:
               return new class_243(var0.method_10263() + 1.0, var0.method_10264() + 0.5, var0.method_10260() + 0.5);
            case 4:
               return new class_243(var0.method_10263(), var0.method_10264() + 0.5, var0.method_10260() + 0.5);
            case 5:
               return new class_243(var0.method_10263() + 0.5, var0.method_10264() + 0.5, var0.method_10260());
            case 6:
               return new class_243(var0.method_10263() + 0.5, var0.method_10264() + 0.5, var0.method_10260() + 1.0);
            default:
               throw new MatchException(null, null);
         }
      } catch (IllegalStateException var4) {
         throw cIs(var4);
      }
   }

   private static String cIt(byte[] var0) {
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

   public static List<class_243> cIq(class_2338 param0, class_2350 param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/oE.APCaM J
      // 003: ldc2_w 136733799372917
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 00b: new java/util/ArrayList
      // 00e: dup
      // 00f: iload 2
      // 010: iload 2
      // 011: imul
      // 012: bipush 1
      // 013: iadd
      // 014: invokespecial java/util/ArrayList.<init> (I)V
      // 017: astore 6
      // 019: astore 5
      // 01b: aload 6
      // 01d: aload 0
      // 01e: aload 1
      // 01f: invokestatic sixtwo/oE.cIr (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)Lnet/minecraft/class_243;
      // 022: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 027: pop
      // 028: bipush 0
      // 029: istore 7
      // 02b: iload 7
      // 02d: iload 2
      // 02e: if_icmpge 1aa
      // 031: bipush 0
      // 032: istore 8
      // 034: iload 8
      // 036: iload 2
      // 037: if_icmpge 1a2
      // 03a: iload 7
      // 03c: i2d
      // 03d: ldc2_w 0.5
      // 040: dadd
      // 041: iload 2
      // 042: i2d
      // 043: ddiv
      // 044: dstore 9
      // 046: iload 8
      // 048: i2d
      // 049: ldc2_w 0.5
      // 04c: dadd
      // 04d: iload 2
      // 04e: i2d
      // 04f: ddiv
      // 050: dstore 11
      // 052: getstatic sixtwo/oE$vm.Ukckq [I
      // 055: aload 1
      // 056: invokevirtual net/minecraft/class_2350.ordinal ()I
      // 059: iaload
      // 05a: aload 5
      // 05c: ifnonnull 02d
      // 05f: aload 5
      // 061: ifnonnull 09b
      // 064: tableswitch 264 1 6 44 44 130 130 197 197
      // 08c: invokestatic sixtwo/oE.cIs (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 08f: athrow
      // 090: aload 0
      // 091: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 094: goto 09b
      // 097: invokestatic sixtwo/oE.cIs (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 09a: athrow
      // 09b: i2d
      // 09c: dload 9
      // 09e: ldc2_w 0.15
      // 0a1: ldc2_w 0.85
      // 0a4: invokestatic net/minecraft/class_3532.method_16436 (DDD)D
      // 0a7: dadd
      // 0a8: dstore 13
      // 0aa: aload 0
      // 0ab: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 0ae: i2d
      // 0af: aload 1
      // 0b0: getstatic net/minecraft/class_2350.field_11036 Lnet/minecraft/class_2350;
      // 0b3: if_acmpne 0be
      // 0b6: dconst_1
      // 0b7: goto 0bf
      // 0ba: invokestatic sixtwo/oE.cIs (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 0bd: athrow
      // 0be: dconst_0
      // 0bf: dadd
      // 0c0: dstore 15
      // 0c2: aload 0
      // 0c3: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 0c6: i2d
      // 0c7: dload 11
      // 0c9: ldc2_w 0.15
      // 0cc: ldc2_w 0.85
      // 0cf: invokestatic net/minecraft/class_3532.method_16436 (DDD)D
      // 0d2: dadd
      // 0d3: dstore 17
      // 0d5: aload 5
      // 0d7: ifnull 185
      // 0da: ldc "nYrapc"
      // 0dc: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/oE.cIs (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 0e5: athrow
      // 0e6: aload 0
      // 0e7: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 0ea: i2d
      // 0eb: aload 1
      // 0ec: getstatic net/minecraft/class_2350.field_11034 Lnet/minecraft/class_2350;
      // 0ef: if_acmpne 0fa
      // 0f2: dconst_1
      // 0f3: goto 0fb
      // 0f6: invokestatic sixtwo/oE.cIs (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 0f9: athrow
      // 0fa: dconst_0
      // 0fb: dadd
      // 0fc: dstore 13
      // 0fe: aload 0
      // 0ff: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 102: i2d
      // 103: dload 9
      // 105: ldc2_w 0.15
      // 108: ldc2_w 0.85
      // 10b: invokestatic net/minecraft/class_3532.method_16436 (DDD)D
      // 10e: dadd
      // 10f: dstore 15
      // 111: aload 0
      // 112: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 115: i2d
      // 116: dload 11
      // 118: ldc2_w 0.15
      // 11b: ldc2_w 0.85
      // 11e: invokestatic net/minecraft/class_3532.method_16436 (DDD)D
      // 121: dadd
      // 122: dstore 17
      // 124: aload 5
      // 126: ifnull 185
      // 129: aload 0
      // 12a: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 12d: i2d
      // 12e: dload 9
      // 130: ldc2_w 0.15
      // 133: ldc2_w 0.85
      // 136: invokestatic net/minecraft/class_3532.method_16436 (DDD)D
      // 139: dadd
      // 13a: dstore 13
      // 13c: aload 0
      // 13d: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 140: i2d
      // 141: dload 11
      // 143: ldc2_w 0.15
      // 146: ldc2_w 0.85
      // 149: invokestatic net/minecraft/class_3532.method_16436 (DDD)D
      // 14c: dadd
      // 14d: dstore 15
      // 14f: aload 0
      // 150: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 153: i2d
      // 154: aload 1
      // 155: getstatic net/minecraft/class_2350.field_11035 Lnet/minecraft/class_2350;
      // 158: if_acmpne 163
      // 15b: dconst_1
      // 15c: goto 164
      // 15f: invokestatic sixtwo/oE.cIs (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 162: athrow
      // 163: dconst_0
      // 164: dadd
      // 165: dstore 17
      // 167: aload 5
      // 169: ifnull 185
      // 16c: new java/lang/IllegalStateException
      // 16f: dup
      // 170: aload 1
      // 171: invokestatic java/lang/String.valueOf (Ljava/lang/Object;)Ljava/lang/String;
      // 174: getstatic sixtwo/oE.IBRal Ljava/lang/String;
      // 177: swap
      // 178: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 17d: invokespecial java/lang/IllegalStateException.<init> (Ljava/lang/String;)V
      // 180: athrow
      // 181: invokestatic sixtwo/oE.cIs (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 184: athrow
      // 185: aload 6
      // 187: new net/minecraft/class_243
      // 18a: dup
      // 18b: dload 13
      // 18d: dload 15
      // 18f: dload 17
      // 191: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 194: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 199: pop
      // 19a: iinc 8 1
      // 19d: aload 5
      // 19f: ifnull 034
      // 1a2: iinc 7 1
      // 1a5: aload 5
      // 1a7: ifnull 02b
      // 1aa: aload 6
      // 1ac: areturn
   }
}
