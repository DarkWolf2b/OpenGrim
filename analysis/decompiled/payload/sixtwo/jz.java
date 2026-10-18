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
import net.minecraft.class_2561;
import net.minecraft.class_327;
import net.minecraft.class_5481;
import net.minecraft.class_327.class_6415;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.jspecify.annotations.Nullable;

public final class jz {
   private static final float WVGee = -11000.0F;
   private static final class_6415 zrLJA;
   @Nullable
   private static jA zbhCz;
   private static final long kzcEw = gb.aYR(-1672401726751479232L, 4739872558628929044L, MethodHandles.lookup().lookupClass()).a(242368169425296L);
   private static final long[] onZzt;
   private static final Integer[] ERLZp;
   private static final Map RckkA = new HashMap(13);

   static {
      long var0 = kzcEw ^ 25830338425580L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[3];
      int var5 = 0;
      String var6 = "¬jPþj¿¼\tá\u0000\u0094ù\u008a\u009c¶ÑÖÏÌÅa\u001b¡¹";
      int var7 = "¬jPþj¿¼\tá\u0000\u0094ù\u008a\u009c¶ÑÖÏÌÅa\u001b¡¹".length();
      byte var4 = 0;

      do {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         var10001 = var5++;
         long var10 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
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
         long var10004 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var14 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      onZzt = var8;
      ERLZp = new Integer[3];
      zrLJA = class_6415.field_33994;
   }

   public static void bGI(
      @Nullable Matrix3x2fc param0, class_327 param1, @Nullable class_2561 param2, float param3, float param4, int param5, boolean param6, jz$tU param7
   ) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jz.kzcEw J
      // 03: ldc2_w 89043493970294
      // 06: lxor
      // 07: lstore 8
      // 09: aload 2
      // 0a: ifnull 1c
      // 0d: iload 5
      // 0f: invokestatic net/minecraft/class_9848.method_61320 (I)I
      // 12: ifne 21
      // 15: goto 1c
      // 18: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b: athrow
      // 1c: return
      // 1d: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 1
      // 22: aload 2
      // 23: fload 3
      // 24: fload 4
      // 26: iload 5
      // 28: iload 6
      // 2a: aload 0
      // 2b: invokestatic sixtwo/jz.bGL (Lorg/joml/Matrix3x2fc;)Lorg/joml/Matrix4f;
      // 2e: invokestatic sixtwo/jz.bGK ()Lsixtwo/jA;
      // 31: invokevirtual sixtwo/jA.bufferSource ()Lnet/minecraft/class_4597$class_4598;
      // 34: getstatic sixtwo/jz.zrLJA Lnet/minecraft/class_327$class_6415;
      // 37: bipush 0
      // 38: sipush 17418
      // 3b: ldc2_w 2250233001719505419
      // 3e: lload 8
      // 40: lxor
      // 41: invokedynamic p (IJ)I bsm=sixtwo/jz.bGP (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 46: invokevirtual net/minecraft/class_327.method_27522 (Lnet/minecraft/class_2561;FFIZLorg/joml/Matrix4f;Lnet/minecraft/class_4597;Lnet/minecraft/class_327$class_6415;II)V
      // 49: aload 7
      // 4b: getstatic sixtwo/jz$tU.GgXAb Lsixtwo/jz$tU;
      // 4e: if_acmpne 5b
      // 51: invokestatic sixtwo/jz.bGJ ()V
      // 54: goto 5b
      // 57: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: return
   }

   public static void bGJ() {
      long var0 = kzcEw ^ 116089666197029L;
      String[] var10000 = jz$tU.dqa();
      jA var3 = zbhCz;
      String[] var2 = var10000;

      label20: {
         try {
            var5 = var3;
            if (var2 != null) {
               break label20;
            }

            if (var3 == null) {
               return;
            }
         } catch (MatchException var4) {
            throw bGM(var4);
         }

         var5 = var3;
      }

      var5.bufferSource().method_22993();
   }

   public static void bGH(@Nullable Matrix3x2fc var0, class_327 var1, @Nullable class_2561 var2, float var3, float var4, int var5, boolean var6) {
      long var7 = kzcEw ^ 136013694471321L;
      String[] var10000 = jz$tU.dqa();
      bGI(var0, var1, var2, var3, var4, var5, var6, jz$tU.GgXAb);
      String[] var9 = var10000;

      try {
         if (var9 != null) {
            iS.bwK("frmyLb");
         }
      } catch (MatchException var10) {
         throw bGM(var10);
      }
   }

   private static CallSite bGP(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bGO".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jz" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static void bGD(@Nullable Matrix3x2fc var0, class_327 var1, @Nullable String var2, float var3, float var4, int var5, boolean var6) {
      bGE(var0, var1, var2, var3, var4, var5, var6, jz$tU.GgXAb);
   }

   private static int bGN(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24417;
      if (ERLZp[var3] == null) {
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
         long var5 = onZzt[var3];
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
         Object[] var9 = (Object[])RckkA.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               RckkA.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/jz", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ERLZp[var3] = var15;
      }

      return ERLZp[var3];
   }

   private static int bGO(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bGN(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException bGM(MatchException var0) {
      return var0;
   }

   public static void bGG(
      @Nullable Matrix3x2fc param0, class_327 param1, @Nullable class_5481 param2, float param3, float param4, int param5, boolean param6, jz$tU param7
   ) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jz.kzcEw J
      // 03: ldc2_w 61443720839860
      // 06: lxor
      // 07: lstore 8
      // 09: aload 2
      // 0a: ifnull 1c
      // 0d: iload 5
      // 0f: invokestatic net/minecraft/class_9848.method_61320 (I)I
      // 12: ifne 21
      // 15: goto 1c
      // 18: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b: athrow
      // 1c: return
      // 1d: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 1
      // 22: aload 2
      // 23: fload 3
      // 24: fload 4
      // 26: iload 5
      // 28: iload 6
      // 2a: aload 0
      // 2b: invokestatic sixtwo/jz.bGL (Lorg/joml/Matrix3x2fc;)Lorg/joml/Matrix4f;
      // 2e: invokestatic sixtwo/jz.bGK ()Lsixtwo/jA;
      // 31: invokevirtual sixtwo/jA.bufferSource ()Lnet/minecraft/class_4597$class_4598;
      // 34: getstatic sixtwo/jz.zrLJA Lnet/minecraft/class_327$class_6415;
      // 37: bipush 0
      // 38: sipush 14824
      // 3b: ldc2_w 5954108885875899434
      // 3e: lload 8
      // 40: lxor
      // 41: invokedynamic p (IJ)I bsm=sixtwo/jz.bGP (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 46: invokevirtual net/minecraft/class_327.method_22942 (Lnet/minecraft/class_5481;FFIZLorg/joml/Matrix4f;Lnet/minecraft/class_4597;Lnet/minecraft/class_327$class_6415;II)V
      // 49: aload 7
      // 4b: getstatic sixtwo/jz$tU.GgXAb Lsixtwo/jz$tU;
      // 4e: if_acmpne 5b
      // 51: invokestatic sixtwo/jz.bGJ ()V
      // 54: goto 5b
      // 57: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: return
   }

   private static Matrix4f bGL(@Nullable Matrix3x2fc var0) {
      long var1 = kzcEw ^ 73393792341596L;
      String[] var3 = jz$tU.dqa();

      Matrix4f var6;
      label24: {
         label23: {
            label22: {
               try {
                  var10000 = var0;
                  if (var3 != null) {
                     break label23;
                  }

                  if (var0 == null) {
                     break label22;
                  }
               } catch (MatchException var5) {
                  throw bGM(var5);
               }

               var10000 = var0;
               break label23;
            }

            var6 = new Matrix4f();
            break label24;
         }

         var6 = jI.bIl(var10000);
      }

      Matrix4f var4 = var6;
      return var4.translate(0.0F, 0.0F, -11000.0F);
   }

   public static void bGF(@Nullable Matrix3x2fc var0, class_327 var1, @Nullable class_5481 var2, float var3, float var4, int var5, boolean var6) {
      long var7 = kzcEw ^ 95805802133900L;
      jz$tU.dqa();
      bGG(var0, var1, var2, var3, var4, var5, var6, jz$tU.GgXAb);

      try {
         if (iS.bwL() == null) {
            jz$tU.dpZ(new String[2]);
         }
      } catch (MatchException var10) {
         throw bGM(var10);
      }
   }

   public static void bGE(
      @Nullable Matrix3x2fc param0, class_327 param1, @Nullable String param2, float param3, float param4, int param5, boolean param6, jz$tU param7
   ) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jz.kzcEw J
      // 03: ldc2_w 29471526663375
      // 06: lxor
      // 07: lstore 8
      // 09: invokestatic sixtwo/jz$tU.dqa ()[Ljava/lang/String;
      // 0c: astore 10
      // 0e: aload 2
      // 0f: aload 10
      // 11: ifnonnull 1f
      // 14: ifnull 40
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 2
      // 1f: invokevirtual java/lang/String.isEmpty ()Z
      // 22: aload 10
      // 24: ifnonnull 3d
      // 27: ifne 40
      // 2a: goto 31
      // 2d: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: iload 5
      // 33: invokestatic net/minecraft/class_9848.method_61320 (I)I
      // 36: goto 3d
      // 39: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: ifne 41
      // 40: return
      // 41: aload 1
      // 42: aload 2
      // 43: fload 3
      // 44: fload 4
      // 46: iload 5
      // 48: iload 6
      // 4a: aload 0
      // 4b: invokestatic sixtwo/jz.bGL (Lorg/joml/Matrix3x2fc;)Lorg/joml/Matrix4f;
      // 4e: invokestatic sixtwo/jz.bGK ()Lsixtwo/jA;
      // 51: invokevirtual sixtwo/jA.bufferSource ()Lnet/minecraft/class_4597$class_4598;
      // 54: getstatic sixtwo/jz.zrLJA Lnet/minecraft/class_327$class_6415;
      // 57: bipush 0
      // 58: sipush 14824
      // 5b: ldc2_w 5954061418497444433
      // 5e: lload 8
      // 60: lxor
      // 61: invokedynamic p (IJ)I bsm=sixtwo/jz.bGP (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 66: invokevirtual net/minecraft/class_327.method_27521 (Ljava/lang/String;FFIZLorg/joml/Matrix4f;Lnet/minecraft/class_4597;Lnet/minecraft/class_327$class_6415;II)V
      // 69: aload 7
      // 6b: getstatic sixtwo/jz$tU.GgXAb Lsixtwo/jz$tU;
      // 6e: if_acmpne 7b
      // 71: invokestatic sixtwo/jz.bGJ ()V
      // 74: goto 7b
      // 77: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7a: athrow
      // 7b: return
   }

   private static jA bGK() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jz.kzcEw J
      // 03: ldc2_w 31553460541585
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jz$tU.dqa ()[Ljava/lang/String;
      // 0b: astore 2
      // 0c: getstatic sixtwo/jz.zbhCz Lsixtwo/jA;
      // 0f: aload 2
      // 10: ifnonnull 48
      // 13: ifnonnull 45
      // 16: goto 1d
      // 19: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: new sixtwo/jA
      // 20: dup
      // 21: new net/minecraft/class_9799
      // 24: dup
      // 25: sipush 3368
      // 28: ldc2_w 8429094650840126156
      // 2b: lload 0
      // 2c: lxor
      // 2d: invokedynamic p (IJ)I bsm=sixtwo/jz.bGP (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 32: invokespecial net/minecraft/class_9799.<init> (I)V
      // 35: invokestatic net/minecraft/class_4597.method_22991 (Lnet/minecraft/class_9799;)Lnet/minecraft/class_4597$class_4598;
      // 38: invokespecial sixtwo/jA.<init> (Lnet/minecraft/class_4597$class_4598;)V
      // 3b: putstatic sixtwo/jz.zbhCz Lsixtwo/jA;
      // 3e: goto 45
      // 41: invokestatic sixtwo/jz.bGM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: getstatic sixtwo/jz.zbhCz Lsixtwo/jA;
      // 48: areturn
   }
}
