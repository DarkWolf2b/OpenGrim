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
import net.minecraft.class_1291;
import net.minecraft.class_1293;
import net.minecraft.class_1799;
import net.minecraft.class_1844;
import net.minecraft.class_6880;
import net.minecraft.class_9334;

public class ji {
   private static final long ddkOp = gb.aYR(-8770930556179578709L, 1365867104116320953L, MethodHandles.lookup().lookupClass()).a(151922222827004L);
   private static final String[] MISSp;
   private static final String[] QMarr;
   private static final Map iyXhB = new HashMap(13);
   private static final long[] jEdlK;
   private static final Integer[] knWfQ;
   private static final Map ChJqY;

   static {
      long var11 = ddkOp ^ 8464753161615L;
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
      String var17 = "\u0019\u008eê R\u0091\u0001\u0093·\u008dH\u0011\u008eÐ\u009e%\u0010Hð¤+Ù\u008eªG\u0012\u000b[Òóô¾\u0002";
      int var19 = "\u0019\u008eê R\u0091\u0001\u0093·\u008dH\u0011\u008eÐ\u009e%\u0010Hð¤+Ù\u008eªG\u0012\u000b[Òóô¾\u0002".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var27 = bCz(var21).intern();
         int var10001 = -1;
         var20[var18++] = var27;
         if ((var15 += var16) >= var19) {
            MISSp = var20;
            QMarr = new String[2];
            ChJqY = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[3];
            int var3 = 0;
            String var4 = "u;·º\u0084\u0015W*J|å\u0093õS¡\u008c³\u000b\u0092\u0080ÿbah";
            int var5 = "u;·º\u0084\u0015W*J|å\u0093õS¡\u008c³\u000b\u0092\u0080ÿbah".length();
            byte var2 = 0;

            do {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               var10001 = var3++;
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
               long var10004 = (var10[0] & 255L) << 56
                  | (var10[1] & 255L) << 48
                  | (var10[2] & 255L) << 40
                  | (var10[3] & 255L) << 32
                  | (var10[4] & 255L) << 24
                  | (var10[5] & 255L) << 16
                  | (var10[6] & 255L) << 8
                  | var10[7] & 255L;
               byte var31 = -1;
               var6[var10001] = var10004;
            } while (var2 < var5);

            jEdlK = var6;
            knWfQ = new Integer[3];
            return;
         }

         var16 = var17.charAt(var15);
      }
   }

   private static int bCD(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 20705;
      if (knWfQ[var3] == null) {
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
         long var5 = jEdlK[var3];
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
         Object[] var9 = (Object[])ChJqY.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ChJqY.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ji", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         knWfQ[var3] = var15;
      }

      return knWfQ[var3];
   }

   private static MatchException bCy(MatchException var0) {
      return var0;
   }

   private static CallSite bCF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bCE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ji" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static boolean bCx(class_1799 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ji.ddkOp J
      // 03: ldc2_w 114419199170947
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: invokevirtual net/minecraft/class_1799.method_57353 ()Lnet/minecraft/class_9323;
      // 0f: getstatic net/minecraft/class_9334.field_49651 Lnet/minecraft/class_9331;
      // 12: getstatic net/minecraft/class_1844.field_49274 Lnet/minecraft/class_1844;
      // 15: invokeinterface net/minecraft/class_9323.method_58695 (Lnet/minecraft/class_9331;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 1a: checkcast net/minecraft/class_1844
      // 1d: astore 4
      // 1f: aload 4
      // 21: invokevirtual net/minecraft/class_1844.method_57397 ()Ljava/lang/Iterable;
      // 24: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 29: astore 5
      // 2b: astore 3
      // 2c: aload 5
      // 2e: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 33: ifeq 77
      // 36: aload 5
      // 38: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 3d: checkcast net/minecraft/class_1293
      // 40: astore 6
      // 42: aload 6
      // 44: invokevirtual net/minecraft/class_1293.method_5579 ()Lnet/minecraft/class_6880;
      // 47: invokeinterface net/minecraft/class_6880.comp_349 ()Ljava/lang/Object; 1
      // 4c: checkcast net/minecraft/class_1291
      // 4f: invokevirtual net/minecraft/class_1291.method_18792 ()Lnet/minecraft/class_4081;
      // 52: getstatic net/minecraft/class_4081.field_18272 Lnet/minecraft/class_4081;
      // 55: invokevirtual net/minecraft/class_4081.equals (Ljava/lang/Object;)Z
      // 58: aload 3
      // 59: ifnull 78
      // 5c: aload 3
      // 5d: ifnull 72
      // 60: goto 67
      // 63: invokestatic sixtwo/ji.bCy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: ifeq 73
      // 6a: goto 71
      // 6d: invokestatic sixtwo/ji.bCy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 70: athrow
      // 71: bipush 1
      // 72: ireturn
      // 73: aload 3
      // 74: ifnonnull 2c
      // 77: bipush 0
      // 78: ireturn
   }

   private static String bCz(byte[] var0) {
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

   private static Object bCB(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bCA(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite bCC(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bCB".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ji" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static boolean bCw(class_1799 var0, class_6880<class_1291> var1) {
      long var2 = ddkOp ^ 68455104886901L;
      String[] var10000 = jf.bBe();
      class_1844 var5 = (class_1844)var0.method_57353().method_58695(class_9334.field_49651, class_1844.field_49274);
      String[] var4 = var10000;

      for (class_1293 var7 : var5.method_57397()) {
         try {
            if (var7.method_5579() == var1) {
               return true;
            }
         } catch (MatchException var8) {
            throw bCy(var8);
         }

         if (var4 == null) {
            break;
         }
      }

      return false;
   }

   private static int bCE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bCD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String bCA(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 29961;
      if (QMarr[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])iyXhB.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               iyXhB.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ji", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = MISSp[var5].getBytes("ISO-8859-1");
         QMarr[var5] = bCz(((Cipher)var4[0]).doFinal(var9));
      }

      return QMarr[var5];
   }

   public static String bCv(class_1293 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ji.ddkOp J
      // 03: ldc2_w 116881234490383
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: invokevirtual net/minecraft/class_1293.method_48559 ()Z
      // 10: aload 3
      // 11: ifnull 34
      // 14: ifeq 30
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ji.bCy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: sipush 22249
      // 21: ldc2_w 8543258874068414320
      // 24: lload 1
      // 25: lxor
      // 26: invokedynamic p (IJ)Ljava/lang/String; bsm=sixtwo/ji.bCC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2b: areturn
      // 2c: invokestatic sixtwo/ji.bCy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: aload 0
      // 31: invokevirtual net/minecraft/class_1293.method_5584 ()I
      // 34: istore 4
      // 36: sipush 25763
      // 39: iload 4
      // 3b: sipush 28564
      // 3e: ldc2_w 5136977466173830117
      // 41: lload 1
      // 42: lxor
      // 43: invokedynamic n (IJ)I bsm=sixtwo/ji.bCF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 48: idiv
      // 49: istore 5
      // 4b: ldc2_w 8908422878786526523
      // 4e: lload 1
      // 4f: lxor
      // 50: invokedynamic p (IJ)Ljava/lang/String; bsm=sixtwo/ji.bCC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 55: bipush 1
      // 56: anewarray 4
      // 59: dup
      // 5a: bipush 0
      // 5b: iload 4
      // 5d: sipush 2676
      // 60: ldc2_w 398092310900594183
      // 63: lload 1
      // 64: lxor
      // 65: invokedynamic n (IJ)I bsm=sixtwo/ji.bCF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 6a: irem
      // 6b: sipush 23611
      // 6e: ldc2_w 3691094252909461579
      // 71: lload 1
      // 72: lxor
      // 73: invokedynamic n (IJ)I bsm=sixtwo/ji.bCF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 78: idiv
      // 79: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 7c: aastore
      // 7d: invokestatic java/lang/String.format (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
      // 80: astore 6
      // 82: iload 5
      // 84: aload 6
      // 86: invokedynamic makeConcatWithConstants (ILjava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001:\u0001" ]
      // 8b: areturn
   }
}
