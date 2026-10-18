package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.KeyMappingAccessor;
import mixin.accessors.MouseHandlerAccessor;
import mixin.accessors.WindowAccessor;
import net.minecraft.class_11910;
import net.minecraft.class_304;

public class rr {
   private static final long DRJHN = gb.aYR(3353819894316347284L, -4467285435648143016L, MethodHandles.lookup().lookupClass()).a(157838082167188L);
   private static final long[] zfaTi;
   private static final Integer[] rOwPU;
   private static final Map FGwWO = new HashMap(13);

   public static void diV(class_304 var0, long var1) {
      diU(((KeyMappingAccessor)var0).getKey().method_1444(), var1);
   }

   private static MatchException djh(MatchException var0) {
      return var0;
   }

   private static int dji(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 22922;
      if (rOwPU[var3] == null) {
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
         long var5 = zfaTi[var3];
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
         Object[] var9 = (Object[])FGwWO.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               FGwWO.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/rr", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         rOwPU[var3] = var15;
      }

      return rOwPU[var3];
   }

   public static boolean djf(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rr.DRJHN J
      // 03: ldc2_w 83338624365389
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: iload 0
      // 0d: aload 3
      // 0e: ifnull 32
      // 11: sipush 28646
      // 14: ldc2_w 5638052495771060095
      // 17: lload 1
      // 18: lxor
      // 19: invokedynamic m (IJ)I bsm=sixtwo/rr.djk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1e: if_icmpne 66
      // 21: goto 28
      // 24: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: invokestatic sixtwo/rr.diZ ()Z
      // 2b: goto 32
      // 2e: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 3
      // 33: ifnull 43
      // 36: ifeq 66
      // 39: goto 40
      // 3c: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: invokestatic sixtwo/rr.dja ()Z
      // 43: aload 3
      // 44: ifnull 54
      // 47: ifne 66
      // 4a: goto 51
      // 4d: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: invokestatic sixtwo/rr.djb ()Z
      // 54: aload 3
      // 55: ifnull 63
      // 58: ifne 66
      // 5b: goto 62
      // 5e: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: bipush 1
      // 63: goto 67
      // 66: bipush 0
      // 67: ireturn
   }

   public static boolean dja() {
      return rD.dlmvG.method_74187();
   }

   public static boolean djb() {
      return rD.dlmvG.method_74189();
   }

   public static boolean djd(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rr.DRJHN J
      // 03: ldc2_w 10244902182120
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: iload 0
      // 0d: aload 3
      // 0e: ifnull 32
      // 11: sipush 10123
      // 14: ldc2_w 2782649594793664694
      // 17: lload 1
      // 18: lxor
      // 19: invokedynamic m (IJ)I bsm=sixtwo/rr.djk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1e: if_icmpne 66
      // 21: goto 28
      // 24: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: invokestatic sixtwo/rr.diZ ()Z
      // 2b: goto 32
      // 2e: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 3
      // 33: ifnull 43
      // 36: ifeq 66
      // 39: goto 40
      // 3c: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: invokestatic sixtwo/rr.dja ()Z
      // 43: aload 3
      // 44: ifnull 54
      // 47: ifne 66
      // 4a: goto 51
      // 4d: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: invokestatic sixtwo/rr.djb ()Z
      // 54: aload 3
      // 55: ifnull 63
      // 58: ifne 66
      // 5b: goto 62
      // 5e: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: bipush 1
      // 63: goto 67
      // 66: bipush 0
      // 67: ireturn
   }

   public static boolean djc(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rr.DRJHN J
      // 03: ldc2_w 23159900288482
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: iload 0
      // 0d: aload 3
      // 0e: ifnull 32
      // 11: sipush 22597
      // 14: ldc2_w 3018197292914685552
      // 17: lload 1
      // 18: lxor
      // 19: invokedynamic m (IJ)I bsm=sixtwo/rr.djk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1e: if_icmpne 66
      // 21: goto 28
      // 24: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: invokestatic sixtwo/rr.diZ ()Z
      // 2b: goto 32
      // 2e: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 3
      // 33: ifnull 43
      // 36: ifeq 66
      // 39: goto 40
      // 3c: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: invokestatic sixtwo/rr.dja ()Z
      // 43: aload 3
      // 44: ifnull 54
      // 47: ifne 66
      // 4a: goto 51
      // 4d: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: invokestatic sixtwo/rr.djb ()Z
      // 54: aload 3
      // 55: ifnull 63
      // 58: ifne 66
      // 5b: goto 62
      // 5e: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: bipush 1
      // 63: goto 67
      // 66: bipush 0
      // 67: ireturn
   }

   public static void diT(class_304 var0) {
      diS(((KeyMappingAccessor)var0).getKey().method_1444());
   }

   private static CallSite djk(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("djj".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/rr" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static void diU(int var0, long var1) {
      MouseHandlerAccessor var3 = (MouseHandlerAccessor)rD.dlmvG.field_1729;
      WindowAccessor var4 = (WindowAccessor)rD.dlmvG.method_22683();
      long var5 = var4.getHandle();
      var3.callOnButton(var5, new class_11910(var0, 0), 1);
      iU.bwU(() -> var3.callOnButton(var5, new class_11910(var0, 0), 0), var1, TimeUnit.MILLISECONDS);
   }

   private static int djj(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = dji(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static boolean dje(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rr.DRJHN J
      // 03: ldc2_w 118483412800330
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: iload 0
      // 0d: aload 3
      // 0e: ifnull 32
      // 11: sipush 29869
      // 14: ldc2_w 8107080016541416502
      // 17: lload 1
      // 18: lxor
      // 19: invokedynamic m (IJ)I bsm=sixtwo/rr.djk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1e: if_icmpne 66
      // 21: goto 28
      // 24: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: invokestatic sixtwo/rr.diZ ()Z
      // 2b: goto 32
      // 2e: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 3
      // 33: ifnull 43
      // 36: ifeq 66
      // 39: goto 40
      // 3c: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: invokestatic sixtwo/rr.dja ()Z
      // 43: aload 3
      // 44: ifnull 54
      // 47: ifne 66
      // 4a: goto 51
      // 4d: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: invokestatic sixtwo/rr.djb ()Z
      // 54: aload 3
      // 55: ifnull 63
      // 58: ifne 66
      // 5b: goto 62
      // 5e: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: bipush 1
      // 63: goto 67
      // 66: bipush 0
      // 67: ireturn
   }

   public static boolean diX(class_304 var0) {
      return diW(((KeyMappingAccessor)var0).getKey().method_1444());
   }

   public static void diS(int var0) {
      MouseHandlerAccessor var1 = (MouseHandlerAccessor)rD.dlmvG.field_1729;
      WindowAccessor var2 = (WindowAccessor)rD.dlmvG.method_22683();
      long var3 = var2.getHandle();
      var1.callOnButton(var3, new class_11910(var0, 0), 1);
      var1.callOnButton(var3, new class_11910(var0, 0), 0);
   }

   public static boolean diZ() {
      return rD.dlmvG.method_74188();
   }

   static {
      long var0 = DRJHN ^ 136053133931881L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[6];
      int var5 = 0;
      String var6 = "äÿ\n¼\u0007\u0017´\u009b`Èã\u0095?Gm\u0089\u008c*±\u008d\u0081\u0090\"E^02Û¤C\rÆ";
      int var7 = "äÿ\n¼\u0007\u0017´\u009b`Èã\u0095?Gm\u0089\u008c*±\u008d\u0081\u0090\"E^02Û¤C\rÆ".length();
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
                     zfaTi = var8;
                     rOwPU = new Integer[6];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "rî\u0007\u009azÊÁ{¶\u0084\u0085\u0001\nuÁ?";
                  var7 = "rî\u0007\u009azÊÁ{¶\u0084\u0085\u0001\nuÁ?".length();
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

   public static boolean diW(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rr.DRJHN J
      // 03: ldc2_w 28463047374836
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 12: instanceof net/minecraft/class_408
      // 15: aload 3
      // 16: ifnull 42
      // 19: ifne 41
      // 1c: goto 23
      // 1f: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 26: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 29: instanceof net/minecraft/class_498
      // 2c: aload 3
      // 2d: ifnull 44
      // 30: goto 37
      // 33: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: ifeq 43
      // 3a: goto 41
      // 3d: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: bipush 0
      // 42: ireturn
      // 43: iload 0
      // 44: aload 3
      // 45: ifnull 59
      // 48: ifge 58
      // 4b: goto 52
      // 4e: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: bipush 0
      // 53: ireturn
      // 54: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: iload 0
      // 59: sipush 22130
      // 5c: ldc2_w 5923379997927733846
      // 5f: lload 1
      // 60: lxor
      // 61: invokedynamic m (IJ)I bsm=sixtwo/rr.djk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 66: aload 3
      // 67: ifnull c7
      // 6a: if_icmpgt a9
      // 6d: goto 74
      // 70: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 73: athrow
      // 74: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 77: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // 7a: checkcast mixin/accessors/WindowAccessor
      // 7d: invokeinterface mixin/accessors/WindowAccessor.getHandle ()J 1
      // 82: iload 0
      // 83: invokestatic org/lwjgl/glfw/GLFW.glfwGetMouseButton (JI)I
      // 86: aload 3
      // 87: ifnull a4
      // 8a: goto 91
      // 8d: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: bipush 1
      // 92: if_icmpne a7
      // 95: goto 9c
      // 98: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9b: athrow
      // 9c: bipush 1
      // 9d: goto a4
      // a0: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a3: athrow
      // a4: goto a8
      // a7: bipush 0
      // a8: ireturn
      // a9: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // ac: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // af: checkcast mixin/accessors/WindowAccessor
      // b2: invokeinterface mixin/accessors/WindowAccessor.getHandle ()J 1
      // b7: iload 0
      // b8: invokestatic org/lwjgl/glfw/GLFW.glfwGetKey (JI)I
      // bb: aload 3
      // bc: ifnull cb
      // bf: bipush 1
      // c0: goto c7
      // c3: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c6: athrow
      // c7: if_icmpne ce
      // ca: bipush 1
      // cb: goto cf
      // ce: bipush 0
      // cf: ireturn
   }

   public static boolean diY(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rr.DRJHN J
      // 03: ldc2_w 15579669994228
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: iload 0
      // 0d: aload 3
      // 0e: ifnull 22
      // 11: ifge 21
      // 14: goto 1b
      // 17: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: bipush 0
      // 1c: ireturn
      // 1d: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: iload 0
      // 22: sipush 14529
      // 25: ldc2_w 362822712199739875
      // 28: lload 1
      // 29: lxor
      // 2a: invokedynamic m (IJ)I bsm=sixtwo/rr.djk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2f: aload 3
      // 30: ifnull 90
      // 33: if_icmpgt 72
      // 36: goto 3d
      // 39: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 40: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // 43: checkcast mixin/accessors/WindowAccessor
      // 46: invokeinterface mixin/accessors/WindowAccessor.getHandle ()J 1
      // 4b: iload 0
      // 4c: invokestatic org/lwjgl/glfw/GLFW.glfwGetMouseButton (JI)I
      // 4f: aload 3
      // 50: ifnull 6d
      // 53: goto 5a
      // 56: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: bipush 1
      // 5b: if_icmpne 70
      // 5e: goto 65
      // 61: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: bipush 1
      // 66: goto 6d
      // 69: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6c: athrow
      // 6d: goto 71
      // 70: bipush 0
      // 71: ireturn
      // 72: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 75: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // 78: checkcast mixin/accessors/WindowAccessor
      // 7b: invokeinterface mixin/accessors/WindowAccessor.getHandle ()J 1
      // 80: iload 0
      // 81: invokestatic org/lwjgl/glfw/GLFW.glfwGetKey (JI)I
      // 84: aload 3
      // 85: ifnull 94
      // 88: bipush 1
      // 89: goto 90
      // 8c: invokestatic sixtwo/rr.djh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: if_icmpne 97
      // 93: bipush 1
      // 94: goto 98
      // 97: bipush 0
      // 98: ireturn
   }
}
