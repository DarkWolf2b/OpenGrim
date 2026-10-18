package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1923;
import net.minecraft.class_2338;
import net.minecraft.class_243;
import net.minecraft.class_2680;

public class rl {
   private final ExecutorService uGYBe = Executors.newSingleThreadExecutor();
   private final AtomicReference<List<class_2338>> CpYTu = new AtomicReference<>(List.of());
   private final AtomicReference<List<class_243>> pLsVY = new AtomicReference<>(List.of());
   private final AtomicReference<Map<class_1923, Integer>> JBNes = new AtomicReference<>(Map.of());
   private final AtomicReference<Map<class_1923, Double>> ucAmG = new AtomicReference<>(Map.of());
   private final AtomicBoolean ZZxam = new AtomicBoolean(false);
   private final mT VSIco = mT.cpz();
   private static final long DhLYb = gb.aYR(-2826802764978116507L, -2204435378481699971L, MethodHandles.lookup().lookupClass()).a(82766912750945L);
   private static final long[] hWFwR;
   private static final Integer[] Ymwbn;
   private static final Map cvnpU = new HashMap(13);

   static {
      long var0 = DhLYb ^ 140571357786141L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "\u0092½)\u009dF]Yr\u001cß\u008f÷]¸°\u0084";
      int var7 = "\u0092½)\u009dF]Yr\u001cß\u008f÷]¸°\u0084".length();
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

      hWFwR = var8;
      Ymwbn = new Integer[2];
   }

   private static CallSite dig(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dif".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/rl" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int dif(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = die(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public boolean dhC() {
      long var1 = DhLYb ^ 14456466396154L;
      iS[] var3 = rm.div();

      try {
         boolean var10000 = this.ZZxam.get();
         if (var3 == null) {
            return var10000;
         }

         if (!var10000) {
            return true;
         }
      } catch (MatchException var4) {
         throw did(var4);
      }

      return false;
   }

   private static MatchException did(MatchException var0) {
      return var0;
   }

   public Map<class_1923, Integer> dhD() {
      return this.JBNes.get();
   }

   public void dhH() {
      this.pLsVY.set(List.of());
   }

   public boolean dhM(int param1, Predicate<class_2680> param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rl.DhLYb J
      // 03: ldc2_w 104737758923397
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: aload 5
      // 12: ifnull 2c
      // 15: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 18: ifnull 32
      // 1b: goto 22
      // 1e: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 25: goto 2c
      // 28: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2f: ifnonnull 38
      // 32: bipush 0
      // 33: ireturn
      // 34: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: aload 0
      // 39: getfield sixtwo/rl.ZZxam Ljava/util/concurrent/atomic/AtomicBoolean;
      // 3c: bipush 0
      // 3d: bipush 1
      // 3e: invokevirtual java/util/concurrent/atomic/AtomicBoolean.compareAndSet (ZZ)Z
      // 41: aload 5
      // 43: ifnull 78
      // 46: ifne 56
      // 49: goto 50
      // 4c: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: bipush 0
      // 51: ireturn
      // 52: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: iload 1
      // 57: aload 2
      // 58: invokedynamic get (ILjava/util/function/Predicate;)Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/rl.dic (ILjava/util/function/Predicate;)Ljava/util/List;, ()Ljava/util/List; ]
      // 5d: aload 0
      // 5e: getfield sixtwo/rl.uGYBe Ljava/util/concurrent/ExecutorService;
      // 61: invokestatic java/util/concurrent/CompletableFuture.supplyAsync (Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;
      // 64: aload 0
      // 65: invokedynamic accept (Lsixtwo/rl;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/rl.dib (Ljava/util/List;)V, (Ljava/util/List;)V ]
      // 6a: invokevirtual java/util/concurrent/CompletableFuture.thenAccept (Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;
      // 6d: aload 0
      // 6e: invokedynamic accept (Lsixtwo/rl;)Ljava/util/function/BiConsumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)V, sixtwo/rl.dia (Ljava/lang/Void;Ljava/lang/Throwable;)V, (Ljava/lang/Void;Ljava/lang/Throwable;)V ]
      // 73: invokevirtual java/util/concurrent/CompletableFuture.whenComplete (Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;
      // 76: pop
      // 77: bipush 1
      // 78: ireturn
   }

   public boolean dhN(int param1, Predicate<class_2680> param2, Predicate<class_1297> param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rl.DhLYb J
      // 03: ldc2_w 131771395037742
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0c: astore 6
      // 0e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 11: aload 6
      // 13: ifnull 2d
      // 16: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 19: ifnull 33
      // 1c: goto 23
      // 1f: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 26: goto 2d
      // 29: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 30: ifnonnull 39
      // 33: bipush 0
      // 34: ireturn
      // 35: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: getfield sixtwo/rl.ZZxam Ljava/util/concurrent/atomic/AtomicBoolean;
      // 3d: bipush 0
      // 3e: bipush 1
      // 3f: invokevirtual java/util/concurrent/atomic/AtomicBoolean.compareAndSet (ZZ)Z
      // 42: aload 6
      // 44: ifnull 7a
      // 47: ifne 57
      // 4a: goto 51
      // 4d: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: bipush 0
      // 52: ireturn
      // 53: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: iload 1
      // 58: aload 2
      // 59: aload 3
      // 5a: invokedynamic get (ILjava/util/function/Predicate;Ljava/util/function/Predicate;)Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/rl.dhZ (ILjava/util/function/Predicate;Ljava/util/function/Predicate;)Ljava/util/Map$Entry;, ()Ljava/util/Map$Entry; ]
      // 5f: aload 0
      // 60: getfield sixtwo/rl.uGYBe Ljava/util/concurrent/ExecutorService;
      // 63: invokestatic java/util/concurrent/CompletableFuture.supplyAsync (Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;
      // 66: aload 0
      // 67: invokedynamic accept (Lsixtwo/rl;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/rl.dhY (Ljava/util/Map$Entry;)V, (Ljava/util/Map$Entry;)V ]
      // 6c: invokevirtual java/util/concurrent/CompletableFuture.thenAccept (Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;
      // 6f: aload 0
      // 70: invokedynamic accept (Lsixtwo/rl;)Ljava/util/function/BiConsumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)V, sixtwo/rl.dhX (Ljava/lang/Void;Ljava/lang/Throwable;)V, (Ljava/lang/Void;Ljava/lang/Throwable;)V ]
      // 75: invokevirtual java/util/concurrent/CompletableFuture.whenComplete (Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;
      // 78: pop
      // 79: bipush 1
      // 7a: ireturn
   }

   public boolean dhJ(long param1, int param3, Predicate<class_2680> param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rl.DhLYb J
      // 03: ldc2_w 111871031683160
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0c: astore 7
      // 0e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 11: aload 7
      // 13: ifnull 2d
      // 16: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 19: ifnull 33
      // 1c: goto 23
      // 1f: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 26: goto 2d
      // 29: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 30: ifnonnull 39
      // 33: bipush 0
      // 34: ireturn
      // 35: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: getfield sixtwo/rl.VSIco Lsixtwo/mT;
      // 3d: lload 1
      // 3e: invokevirtual sixtwo/mT.cpC (J)Z
      // 41: aload 7
      // 43: ifnull 5d
      // 46: ifne 56
      // 49: goto 50
      // 4c: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: bipush 0
      // 51: ireturn
      // 52: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: aload 0
      // 57: iload 3
      // 58: aload 4
      // 5a: invokevirtual sixtwo/rl.dhM (ILjava/util/function/Predicate;)Z
      // 5d: istore 8
      // 5f: iload 8
      // 61: aload 7
      // 63: ifnull 80
      // 66: ifeq 7e
      // 69: goto 70
      // 6c: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6f: athrow
      // 70: aload 0
      // 71: getfield sixtwo/rl.VSIco Lsixtwo/mT;
      // 74: invokevirtual sixtwo/mT.cpB ()V
      // 77: goto 7e
      // 7a: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7d: athrow
      // 7e: iload 8
      // 80: ireturn
   }

   public boolean dhL(long param1, int param3, Predicate<class_2680> param4, Predicate<class_1297> param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rl.DhLYb J
      // 03: ldc2_w 109726346202822
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0c: astore 8
      // 0e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 11: aload 8
      // 13: ifnull 2d
      // 16: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 19: ifnull 33
      // 1c: goto 23
      // 1f: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 26: goto 2d
      // 29: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 30: ifnonnull 39
      // 33: bipush 0
      // 34: ireturn
      // 35: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: getfield sixtwo/rl.VSIco Lsixtwo/mT;
      // 3d: lload 1
      // 3e: invokevirtual sixtwo/mT.cpC (J)Z
      // 41: aload 8
      // 43: ifnull 5f
      // 46: ifne 56
      // 49: goto 50
      // 4c: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: bipush 0
      // 51: ireturn
      // 52: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: aload 0
      // 57: iload 3
      // 58: aload 4
      // 5a: aload 5
      // 5c: invokevirtual sixtwo/rl.dhO (ILjava/util/function/Predicate;Ljava/util/function/Predicate;)Z
      // 5f: istore 9
      // 61: iload 9
      // 63: aload 8
      // 65: ifnull 82
      // 68: ifeq 80
      // 6b: goto 72
      // 6e: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: aload 0
      // 73: getfield sixtwo/rl.VSIco Lsixtwo/mT;
      // 76: invokevirtual sixtwo/mT.cpB ()V
      // 79: goto 80
      // 7c: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7f: athrow
      // 80: iload 9
      // 82: ireturn
   }

   public void dhI() {
      this.JBNes.set(Map.of());
      this.ucAmG.set(Map.of());
   }

   public void dhF() {
      this.CpYTu.set(List.of());
   }

   public boolean dhO(int param1, Predicate<class_2680> param2, Predicate<class_1297> param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rl.DhLYb J
      // 03: ldc2_w 30530167554780
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0c: astore 6
      // 0e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 11: aload 6
      // 13: ifnull 2d
      // 16: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 19: ifnull 33
      // 1c: goto 23
      // 1f: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 26: goto 2d
      // 29: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 30: ifnonnull 39
      // 33: bipush 0
      // 34: ireturn
      // 35: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: getfield sixtwo/rl.ZZxam Ljava/util/concurrent/atomic/AtomicBoolean;
      // 3d: bipush 0
      // 3e: bipush 1
      // 3f: invokevirtual java/util/concurrent/atomic/AtomicBoolean.compareAndSet (ZZ)Z
      // 42: aload 6
      // 44: ifnull 7a
      // 47: ifne 57
      // 4a: goto 51
      // 4d: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: bipush 0
      // 52: ireturn
      // 53: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: iload 1
      // 58: aload 2
      // 59: aload 3
      // 5a: invokedynamic get (ILjava/util/function/Predicate;Ljava/util/function/Predicate;)Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/rl.dhW (ILjava/util/function/Predicate;Ljava/util/function/Predicate;)Ljava/util/List;, ()Ljava/util/List; ]
      // 5f: aload 0
      // 60: getfield sixtwo/rl.uGYBe Ljava/util/concurrent/ExecutorService;
      // 63: invokestatic java/util/concurrent/CompletableFuture.supplyAsync (Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;
      // 66: aload 0
      // 67: invokedynamic accept (Lsixtwo/rl;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/rl.dhV (Ljava/util/List;)V, (Ljava/util/List;)V ]
      // 6c: invokevirtual java/util/concurrent/CompletableFuture.thenAccept (Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;
      // 6f: aload 0
      // 70: invokedynamic accept (Lsixtwo/rl;)Ljava/util/function/BiConsumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)V, sixtwo/rl.dhU (Ljava/lang/Void;Ljava/lang/Throwable;)V, (Ljava/lang/Void;Ljava/lang/Throwable;)V ]
      // 75: invokevirtual java/util/concurrent/CompletableFuture.whenComplete (Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;
      // 78: pop
      // 79: bipush 1
      // 7a: ireturn
   }

   public boolean dhK(long param1, int param3, Predicate<class_2680> param4, Predicate<class_1297> param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rl.DhLYb J
      // 03: ldc2_w 4931265763693
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0c: astore 8
      // 0e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 11: aload 8
      // 13: ifnull 2d
      // 16: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 19: ifnull 33
      // 1c: goto 23
      // 1f: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 26: goto 2d
      // 29: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 30: ifnonnull 39
      // 33: bipush 0
      // 34: ireturn
      // 35: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: getfield sixtwo/rl.VSIco Lsixtwo/mT;
      // 3d: lload 1
      // 3e: invokevirtual sixtwo/mT.cpC (J)Z
      // 41: aload 8
      // 43: ifnull 5f
      // 46: ifne 56
      // 49: goto 50
      // 4c: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: bipush 0
      // 51: ireturn
      // 52: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: aload 0
      // 57: iload 3
      // 58: aload 4
      // 5a: aload 5
      // 5c: invokevirtual sixtwo/rl.dhN (ILjava/util/function/Predicate;Ljava/util/function/Predicate;)Z
      // 5f: istore 9
      // 61: iload 9
      // 63: aload 8
      // 65: ifnull 82
      // 68: ifeq 80
      // 6b: goto 72
      // 6e: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: aload 0
      // 73: getfield sixtwo/rl.VSIco Lsixtwo/mT;
      // 76: invokevirtual sixtwo/mT.cpB ()V
      // 79: goto 80
      // 7c: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7f: athrow
      // 80: iload 9
      // 82: ireturn
   }

   public Map<class_1923, Double> dhE() {
      return this.ucAmG.get();
   }

   public List<class_243> dhG() {
      return this.pLsVY.get();
   }

   public List<class_2338> dhB() {
      return this.CpYTu.get();
   }

   private static int die(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 5738;
      if (Ymwbn[var3] == null) {
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
         long var5 = hWFwR[var3];
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
         Object[] var9 = (Object[])cvnpU.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               cvnpU.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/rl", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         Ymwbn[var3] = var15;
      }

      return Ymwbn[var3];
   }

   public static List<class_2338> dhP(int param0, Predicate<class_2680> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/rl.DhLYb J
      // 003: ldc2_w 8972875994067
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 010: aload 4
      // 012: ifnull 02c
      // 015: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 018: ifnull 032
      // 01b: goto 022
      // 01e: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 021: athrow
      // 022: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 025: goto 02c
      // 028: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02b: athrow
      // 02c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 02f: ifnonnull 03a
      // 032: invokestatic java/util/List.of ()Ljava/util/List;
      // 035: areturn
      // 036: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: new java/util/ArrayList
      // 03d: dup
      // 03e: invokespecial java/util/ArrayList.<init> ()V
      // 041: astore 5
      // 043: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 046: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 049: invokevirtual net/minecraft/class_746.method_23317 ()D
      // 04c: iload 0
      // 04d: i2d
      // 04e: dsub
      // 04f: invokestatic java/lang/Math.floor (D)D
      // 052: d2i
      // 053: istore 6
      // 055: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 058: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 05b: invokevirtual net/minecraft/class_746.method_23317 ()D
      // 05e: iload 0
      // 05f: i2d
      // 060: dadd
      // 061: invokestatic java/lang/Math.ceil (D)D
      // 064: d2i
      // 065: istore 7
      // 067: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 06a: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 06d: invokevirtual net/minecraft/class_638.method_31607 ()I
      // 070: bipush 1
      // 071: iadd
      // 072: istore 8
      // 074: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 077: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 07a: invokevirtual net/minecraft/class_638.method_31600 ()I
      // 07d: istore 9
      // 07f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 082: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 085: invokevirtual net/minecraft/class_746.method_23321 ()D
      // 088: iload 0
      // 089: i2d
      // 08a: dsub
      // 08b: invokestatic java/lang/Math.floor (D)D
      // 08e: d2i
      // 08f: istore 10
      // 091: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 094: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 097: invokevirtual net/minecraft/class_746.method_23321 ()D
      // 09a: iload 0
      // 09b: i2d
      // 09c: dadd
      // 09d: invokestatic java/lang/Math.ceil (D)D
      // 0a0: d2i
      // 0a1: istore 11
      // 0a3: iload 6
      // 0a5: istore 12
      // 0a7: iload 12
      // 0a9: iload 7
      // 0ab: if_icmpgt 15d
      // 0ae: iload 8
      // 0b0: istore 13
      // 0b2: iload 13
      // 0b4: iload 9
      // 0b6: if_icmpgt 155
      // 0b9: iload 10
      // 0bb: aload 4
      // 0bd: ifnull 0a9
      // 0c0: istore 14
      // 0c2: iload 14
      // 0c4: iload 11
      // 0c6: if_icmpgt 14d
      // 0c9: new net/minecraft/class_2338
      // 0cc: dup
      // 0cd: iload 12
      // 0cf: iload 13
      // 0d1: iload 14
      // 0d3: invokespecial net/minecraft/class_2338.<init> (III)V
      // 0d6: astore 15
      // 0d8: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0db: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 0de: aload 15
      // 0e0: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 0e3: astore 16
      // 0e5: aload 16
      // 0e7: invokevirtual net/minecraft/class_2680.method_26215 ()Z
      // 0ea: aload 4
      // 0ec: ifnull 0b4
      // 0ef: aload 4
      // 0f1: ifnull 119
      // 0f4: ifeq 10a
      // 0f7: goto 0fe
      // 0fa: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fd: athrow
      // 0fe: aload 4
      // 100: ifnonnull 145
      // 103: goto 10a
      // 106: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 109: athrow
      // 10a: aload 1
      // 10b: aload 16
      // 10d: invokeinterface java/util/function/Predicate.test (Ljava/lang/Object;)Z 2
      // 112: goto 119
      // 115: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 118: athrow
      // 119: aload 4
      // 11b: ifnull 144
      // 11e: ifne 134
      // 121: goto 128
      // 124: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 127: athrow
      // 128: aload 4
      // 12a: ifnonnull 145
      // 12d: goto 134
      // 130: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 133: athrow
      // 134: aload 5
      // 136: aload 15
      // 138: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 13d: goto 144
      // 140: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 143: athrow
      // 144: pop
      // 145: iinc 14 1
      // 148: aload 4
      // 14a: ifnonnull 0c2
      // 14d: iinc 13 1
      // 150: aload 4
      // 152: ifnonnull 0b2
      // 155: iinc 12 1
      // 158: aload 4
      // 15a: ifnonnull 0a7
      // 15d: aload 5
      // 15f: areturn
   }

   private static boolean dhT(class_1923 var0, double var1, double var3, double var5) {
      long var7 = DhLYb ^ 59911024516996L;
      iS[] var10000 = rm.div();
      double var10 = var0.method_8326() + 8.0;
      iS[] var9 = var10000;
      double var12 = var0.method_8328() + 8.0;
      double var14 = var1 - var10;
      double var16 = var3 - var12;

      try {
         double var20;
         int var19 = (var20 = var14 * var14 + var16 * var16 - var5) == 0.0 ? 0 : (var20 < 0.0 ? -1 : 1);
         if (var9 == null) {
            return (boolean)var19;
         }

         if (var19 <= 0) {
            return (boolean)1;
         }
      } catch (MatchException var18) {
         throw did(var18);
      }

      return (boolean)0;
   }

   public static Map<class_1923, Integer> dhQ(int var0, Predicate<class_2680> var1, Predicate<class_1297> var2) {
      return dhR(var0, var1, var2, null);
   }

   public static List<class_243> dhS(int param0, Predicate<class_2680> param1, Predicate<class_1297> param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/rl.DhLYb J
      // 003: ldc2_w 4856348253412
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 00b: astore 5
      // 00d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 010: aload 5
      // 012: ifnull 02c
      // 015: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 018: ifnull 032
      // 01b: goto 022
      // 01e: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 021: athrow
      // 022: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 025: goto 02c
      // 028: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02b: athrow
      // 02c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 02f: ifnonnull 03a
      // 032: invokestatic java/util/List.of ()Ljava/util/List;
      // 035: areturn
      // 036: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: new java/util/ArrayList
      // 03d: dup
      // 03e: invokespecial java/util/ArrayList.<init> ()V
      // 041: astore 6
      // 043: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 046: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 049: invokevirtual net/minecraft/class_746.method_23317 ()D
      // 04c: dstore 7
      // 04e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 051: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 054: invokevirtual net/minecraft/class_746.method_23321 ()D
      // 057: dstore 9
      // 059: iload 0
      // 05a: iload 0
      // 05b: imul
      // 05c: i2d
      // 05d: dstore 11
      // 05f: aload 1
      // 060: aload 5
      // 062: ifnull 243
      // 065: ifnull 242
      // 068: goto 06f
      // 06b: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06e: athrow
      // 06f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 072: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 075: invokevirtual net/minecraft/class_638.method_31607 ()I
      // 078: istore 13
      // 07a: invokestatic sixtwo/ja.byG ()Ljava/util/List;
      // 07d: astore 14
      // 07f: aload 14
      // 081: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 086: astore 15
      // 088: aload 15
      // 08a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 08f: ifeq 242
      // 092: aload 15
      // 094: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 099: checkcast net/minecraft/class_2818
      // 09c: astore 16
      // 09e: aload 16
      // 0a0: invokevirtual net/minecraft/class_2818.method_12004 ()Lnet/minecraft/class_1923;
      // 0a3: astore 17
      // 0a5: aload 5
      // 0a7: ifnull 2e5
      // 0aa: aload 17
      // 0ac: dload 7
      // 0ae: dload 9
      // 0b0: dload 11
      // 0b2: invokestatic sixtwo/rl.dhT (Lnet/minecraft/class_1923;DDD)Z
      // 0b5: aload 5
      // 0b7: ifnull 0d5
      // 0ba: ifne 0d0
      // 0bd: goto 0c4
      // 0c0: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c3: athrow
      // 0c4: aload 5
      // 0c6: ifnonnull 088
      // 0c9: goto 0d0
      // 0cc: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cf: athrow
      // 0d0: aload 17
      // 0d2: invokevirtual net/minecraft/class_1923.method_8326 ()I
      // 0d5: istore 18
      // 0d7: aload 17
      // 0d9: invokevirtual net/minecraft/class_1923.method_8328 ()I
      // 0dc: istore 19
      // 0de: aload 16
      // 0e0: invokevirtual net/minecraft/class_2818.method_12006 ()[Lnet/minecraft/class_2826;
      // 0e3: astore 20
      // 0e5: bipush 0
      // 0e6: istore 21
      // 0e8: iload 21
      // 0ea: aload 20
      // 0ec: arraylength
      // 0ed: if_icmpge 23d
      // 0f0: aload 20
      // 0f2: iload 21
      // 0f4: aaload
      // 0f5: astore 22
      // 0f7: aload 5
      // 0f9: ifnull 238
      // 0fc: aload 22
      // 0fe: aload 5
      // 100: ifnull 099
      // 103: goto 10a
      // 106: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 109: athrow
      // 10a: ifnull 235
      // 10d: aload 22
      // 10f: invokevirtual net/minecraft/class_2826.method_38292 ()Z
      // 112: aload 5
      // 114: ifnull 14e
      // 117: goto 11e
      // 11a: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11d: athrow
      // 11e: ifeq 134
      // 121: goto 128
      // 124: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 127: athrow
      // 128: aload 5
      // 12a: ifnonnull 235
      // 12d: goto 134
      // 130: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 133: athrow
      // 134: iload 13
      // 136: iload 21
      // 138: sipush 1115
      // 13b: ldc2_w 9098107995825301897
      // 13e: lload 3
      // 13f: lxor
      // 140: invokedynamic m (IJ)I bsm=sixtwo/rl.dig (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 145: imul
      // 146: iadd
      // 147: goto 14e
      // 14a: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14d: athrow
      // 14e: istore 23
      // 150: bipush 0
      // 151: istore 24
      // 153: iload 24
      // 155: sipush 21912
      // 158: ldc2_w 6805548184960710731
      // 15b: lload 3
      // 15c: lxor
      // 15d: invokedynamic m (IJ)I bsm=sixtwo/rl.dig (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 162: if_icmpge 235
      // 165: bipush 0
      // 166: aload 5
      // 168: ifnull 0ea
      // 16b: istore 25
      // 16d: iload 25
      // 16f: sipush 21912
      // 172: ldc2_w 6805548184960710731
      // 175: lload 3
      // 176: lxor
      // 177: invokedynamic m (IJ)I bsm=sixtwo/rl.dig (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 17c: if_icmpge 22d
      // 17f: bipush 0
      // 180: aload 5
      // 182: ifnull 155
      // 185: istore 26
      // 187: iload 26
      // 189: sipush 21912
      // 18c: ldc2_w 6805548184960710731
      // 18f: lload 3
      // 190: lxor
      // 191: invokedynamic m (IJ)I bsm=sixtwo/rl.dig (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 196: if_icmpge 225
      // 199: aload 22
      // 19b: iload 24
      // 19d: iload 25
      // 19f: iload 26
      // 1a1: invokevirtual net/minecraft/class_2826.method_12254 (III)Lnet/minecraft/class_2680;
      // 1a4: astore 27
      // 1a6: aload 5
      // 1a8: ifnull 220
      // 1ab: aload 27
      // 1ad: invokevirtual net/minecraft/class_2680.method_26215 ()Z
      // 1b0: aload 5
      // 1b2: ifnull 16f
      // 1b5: goto 1bc
      // 1b8: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1bb: athrow
      // 1bc: ifne 21d
      // 1bf: aload 1
      // 1c0: aload 27
      // 1c2: invokeinterface java/util/function/Predicate.test (Ljava/lang/Object;)Z 2
      // 1c7: aload 5
      // 1c9: ifnull 21c
      // 1cc: goto 1d3
      // 1cf: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d2: athrow
      // 1d3: ifne 1e9
      // 1d6: goto 1dd
      // 1d9: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1dc: athrow
      // 1dd: aload 5
      // 1df: ifnonnull 21d
      // 1e2: goto 1e9
      // 1e5: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e8: athrow
      // 1e9: aload 6
      // 1eb: new net/minecraft/class_243
      // 1ee: dup
      // 1ef: iload 18
      // 1f1: iload 24
      // 1f3: iadd
      // 1f4: i2d
      // 1f5: ldc2_w 0.5
      // 1f8: dadd
      // 1f9: iload 23
      // 1fb: iload 25
      // 1fd: iadd
      // 1fe: i2d
      // 1ff: ldc2_w 0.5
      // 202: dadd
      // 203: iload 19
      // 205: iload 26
      // 207: iadd
      // 208: i2d
      // 209: ldc2_w 0.5
      // 20c: dadd
      // 20d: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 210: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 215: goto 21c
      // 218: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21b: athrow
      // 21c: pop
      // 21d: iinc 26 1
      // 220: aload 5
      // 222: ifnonnull 187
      // 225: iinc 25 1
      // 228: aload 5
      // 22a: ifnonnull 16d
      // 22d: iinc 24 1
      // 230: aload 5
      // 232: ifnonnull 153
      // 235: iinc 21 1
      // 238: aload 5
      // 23a: ifnonnull 0e8
      // 23d: aload 5
      // 23f: ifnonnull 088
      // 242: aload 2
      // 243: ifnull 2e5
      // 246: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 249: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 24c: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 24f: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 254: astore 13
      // 256: aload 13
      // 258: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 25d: ifeq 2e5
      // 260: aload 13
      // 262: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 267: checkcast net/minecraft/class_1297
      // 26a: astore 14
      // 26c: aload 14
      // 26e: aload 5
      // 270: ifnull 27f
      // 273: ifnull 256
      // 276: goto 27d
      // 279: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27c: athrow
      // 27d: aload 14
      // 27f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 282: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 285: if_acmpeq 256
      // 288: aload 2
      // 289: aload 14
      // 28b: invokeinterface java/util/function/Predicate.test (Ljava/lang/Object;)Z 2
      // 290: ifne 29f
      // 293: aload 5
      // 295: ifnonnull 256
      // 298: goto 29f
      // 29b: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29e: athrow
      // 29f: new net/minecraft/class_1923
      // 2a2: dup
      // 2a3: aload 14
      // 2a5: invokevirtual net/minecraft/class_1297.method_24515 ()Lnet/minecraft/class_2338;
      // 2a8: invokespecial net/minecraft/class_1923.<init> (Lnet/minecraft/class_2338;)V
      // 2ab: astore 15
      // 2ad: aload 15
      // 2af: dload 7
      // 2b1: dload 9
      // 2b3: dload 11
      // 2b5: invokestatic sixtwo/rl.dhT (Lnet/minecraft/class_1923;DDD)Z
      // 2b8: aload 5
      // 2ba: ifnull 2df
      // 2bd: ifne 2d3
      // 2c0: goto 2c7
      // 2c3: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c6: athrow
      // 2c7: aload 5
      // 2c9: ifnonnull 256
      // 2cc: goto 2d3
      // 2cf: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d2: athrow
      // 2d3: aload 6
      // 2d5: aload 14
      // 2d7: invokevirtual net/minecraft/class_1297.method_73189 ()Lnet/minecraft/class_243;
      // 2da: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 2df: pop
      // 2e0: aload 5
      // 2e2: ifnonnull 256
      // 2e5: aload 6
      // 2e7: areturn
   }

   public static Map<class_1923, Integer> dhR(int param0, Predicate<class_2680> param1, Predicate<class_1297> param2, Map<class_1923, Double> param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/rl.DhLYb J
      // 003: ldc2_w 37547601289885
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 00c: astore 6
      // 00e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 011: aload 6
      // 013: ifnull 02d
      // 016: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 019: ifnull 033
      // 01c: goto 023
      // 01f: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 022: athrow
      // 023: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 026: goto 02d
      // 029: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02c: athrow
      // 02d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 030: ifnonnull 03b
      // 033: invokestatic java/util/Map.of ()Ljava/util/Map;
      // 036: areturn
      // 037: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03a: athrow
      // 03b: new java/util/LinkedHashMap
      // 03e: dup
      // 03f: invokespecial java/util/LinkedHashMap.<init> ()V
      // 042: astore 7
      // 044: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 047: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 04a: invokevirtual net/minecraft/class_746.method_23317 ()D
      // 04d: dstore 8
      // 04f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 052: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 055: invokevirtual net/minecraft/class_746.method_23321 ()D
      // 058: dstore 10
      // 05a: iload 0
      // 05b: iload 0
      // 05c: imul
      // 05d: i2d
      // 05e: dstore 12
      // 060: invokestatic sixtwo/ja.byG ()Ljava/util/List;
      // 063: astore 14
      // 065: aload 1
      // 066: aload 6
      // 068: ifnull 252
      // 06b: ifnull 251
      // 06e: goto 075
      // 071: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 074: athrow
      // 075: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 078: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 07b: invokevirtual net/minecraft/class_638.method_31607 ()I
      // 07e: istore 15
      // 080: aload 14
      // 082: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 087: astore 16
      // 089: aload 16
      // 08b: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 090: ifeq 251
      // 093: aload 16
      // 095: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 09a: checkcast net/minecraft/class_2818
      // 09d: astore 17
      // 09f: aload 17
      // 0a1: invokevirtual net/minecraft/class_2818.method_12004 ()Lnet/minecraft/class_1923;
      // 0a4: astore 18
      // 0a6: aload 6
      // 0a8: ifnull 327
      // 0ab: aload 18
      // 0ad: dload 8
      // 0af: dload 10
      // 0b1: dload 12
      // 0b3: invokestatic sixtwo/rl.dhT (Lnet/minecraft/class_1923;DDD)Z
      // 0b6: aload 6
      // 0b8: ifnull 0d2
      // 0bb: ifne 0d1
      // 0be: goto 0c5
      // 0c1: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c4: athrow
      // 0c5: aload 6
      // 0c7: ifnonnull 089
      // 0ca: goto 0d1
      // 0cd: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d0: athrow
      // 0d1: bipush 0
      // 0d2: istore 19
      // 0d4: dconst_0
      // 0d5: dstore 20
      // 0d7: aload 17
      // 0d9: invokevirtual net/minecraft/class_2818.method_12006 ()[Lnet/minecraft/class_2826;
      // 0dc: astore 22
      // 0de: bipush 0
      // 0df: istore 23
      // 0e1: iload 23
      // 0e3: aload 22
      // 0e5: arraylength
      // 0e6: if_icmpge 20c
      // 0e9: aload 22
      // 0eb: iload 23
      // 0ed: aaload
      // 0ee: astore 24
      // 0f0: aload 6
      // 0f2: ifnull 207
      // 0f5: aload 24
      // 0f7: aload 6
      // 0f9: ifnull 09a
      // 0fc: goto 103
      // 0ff: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 102: athrow
      // 103: ifnull 204
      // 106: aload 24
      // 108: invokevirtual net/minecraft/class_2826.method_38292 ()Z
      // 10b: aload 6
      // 10d: ifnull 148
      // 110: goto 117
      // 113: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 116: athrow
      // 117: ifeq 12d
      // 11a: goto 121
      // 11d: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 120: athrow
      // 121: aload 6
      // 123: ifnonnull 204
      // 126: goto 12d
      // 129: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12c: athrow
      // 12d: iload 15
      // 12f: iload 23
      // 131: sipush 21912
      // 134: ldc2_w 6805515494010209842
      // 137: lload 4
      // 139: lxor
      // 13a: invokedynamic m (IJ)I bsm=sixtwo/rl.dig (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 13f: imul
      // 140: iadd
      // 141: goto 148
      // 144: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 147: athrow
      // 148: istore 25
      // 14a: bipush 0
      // 14b: istore 26
      // 14d: iload 26
      // 14f: sipush 21912
      // 152: ldc2_w 6805515494010209842
      // 155: lload 4
      // 157: lxor
      // 158: invokedynamic m (IJ)I bsm=sixtwo/rl.dig (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15d: if_icmpge 204
      // 160: bipush 0
      // 161: aload 6
      // 163: ifnull 0e3
      // 166: istore 27
      // 168: iload 27
      // 16a: sipush 21912
      // 16d: ldc2_w 6805515494010209842
      // 170: lload 4
      // 172: lxor
      // 173: invokedynamic m (IJ)I bsm=sixtwo/rl.dig (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 178: if_icmpge 1fc
      // 17b: bipush 0
      // 17c: aload 6
      // 17e: ifnull 14f
      // 181: istore 28
      // 183: iload 28
      // 185: sipush 21912
      // 188: ldc2_w 6805515494010209842
      // 18b: lload 4
      // 18d: lxor
      // 18e: invokedynamic m (IJ)I bsm=sixtwo/rl.dig (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 193: if_icmpge 1f4
      // 196: aload 24
      // 198: iload 26
      // 19a: iload 27
      // 19c: iload 28
      // 19e: invokevirtual net/minecraft/class_2826.method_12254 (III)Lnet/minecraft/class_2680;
      // 1a1: astore 29
      // 1a3: aload 6
      // 1a5: ifnull 1ef
      // 1a8: aload 29
      // 1aa: invokevirtual net/minecraft/class_2680.method_26215 ()Z
      // 1ad: aload 6
      // 1af: ifnull 16a
      // 1b2: goto 1b9
      // 1b5: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b8: athrow
      // 1b9: ifne 1ec
      // 1bc: aload 1
      // 1bd: aload 29
      // 1bf: invokeinterface java/util/function/Predicate.test (Ljava/lang/Object;)Z 2
      // 1c4: ifne 1da
      // 1c7: goto 1ce
      // 1ca: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1cd: athrow
      // 1ce: aload 6
      // 1d0: ifnonnull 1ec
      // 1d3: goto 1da
      // 1d6: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d9: athrow
      // 1da: iinc 19 1
      // 1dd: dload 20
      // 1df: iload 25
      // 1e1: iload 27
      // 1e3: iadd
      // 1e4: i2d
      // 1e5: ldc2_w 0.5
      // 1e8: dadd
      // 1e9: dadd
      // 1ea: dstore 20
      // 1ec: iinc 28 1
      // 1ef: aload 6
      // 1f1: ifnonnull 183
      // 1f4: iinc 27 1
      // 1f7: aload 6
      // 1f9: ifnonnull 168
      // 1fc: iinc 26 1
      // 1ff: aload 6
      // 201: ifnonnull 14d
      // 204: iinc 23 1
      // 207: aload 6
      // 209: ifnonnull 0e1
      // 20c: iload 19
      // 20e: ifle 24c
      // 211: aload 7
      // 213: aload 18
      // 215: iload 19
      // 217: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 21a: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 21f: pop
      // 220: aload 3
      // 221: aload 6
      // 223: ifnull 24b
      // 226: goto 22d
      // 229: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22c: athrow
      // 22d: ifnull 24c
      // 230: goto 237
      // 233: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 236: athrow
      // 237: aload 3
      // 238: aload 18
      // 23a: dload 20
      // 23c: invokestatic java/lang/Double.valueOf (D)Ljava/lang/Double;
      // 23f: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 244: goto 24b
      // 247: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24a: athrow
      // 24b: pop
      // 24c: aload 6
      // 24e: ifnonnull 089
      // 251: aload 2
      // 252: ifnull 327
      // 255: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 258: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 25b: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 25e: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 263: astore 15
      // 265: aload 15
      // 267: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 26c: ifeq 327
      // 26f: aload 15
      // 271: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 276: checkcast net/minecraft/class_1297
      // 279: astore 16
      // 27b: aload 16
      // 27d: aload 6
      // 27f: ifnull 28e
      // 282: ifnull 265
      // 285: goto 28c
      // 288: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28b: athrow
      // 28c: aload 16
      // 28e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 291: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 294: if_acmpeq 265
      // 297: aload 2
      // 298: aload 16
      // 29a: invokeinterface java/util/function/Predicate.test (Ljava/lang/Object;)Z 2
      // 29f: ifne 2ae
      // 2a2: aload 6
      // 2a4: ifnonnull 265
      // 2a7: goto 2ae
      // 2aa: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2ad: athrow
      // 2ae: new net/minecraft/class_1923
      // 2b1: dup
      // 2b2: aload 16
      // 2b4: invokevirtual net/minecraft/class_1297.method_24515 ()Lnet/minecraft/class_2338;
      // 2b7: invokespecial net/minecraft/class_1923.<init> (Lnet/minecraft/class_2338;)V
      // 2ba: astore 17
      // 2bc: aload 17
      // 2be: aload 6
      // 2c0: ifnull 2f4
      // 2c3: dload 8
      // 2c5: dload 10
      // 2c7: dload 12
      // 2c9: invokestatic sixtwo/rl.dhT (Lnet/minecraft/class_1923;DDD)Z
      // 2cc: ifne 2e2
      // 2cf: goto 2d6
      // 2d2: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d5: athrow
      // 2d6: aload 6
      // 2d8: ifnonnull 265
      // 2db: goto 2e2
      // 2de: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e1: athrow
      // 2e2: aload 7
      // 2e4: aload 17
      // 2e6: bipush 1
      // 2e7: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 2ea: invokedynamic apply ()Ljava/util/function/BiFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;, java/lang/Integer.sum (II)I, (Ljava/lang/Integer;Ljava/lang/Integer;)Ljava/lang/Integer; ]
      // 2ef: invokeinterface java/util/Map.merge (Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object; 4
      // 2f4: pop
      // 2f5: aload 3
      // 2f6: aload 6
      // 2f8: ifnull 321
      // 2fb: ifnull 322
      // 2fe: goto 305
      // 301: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 304: athrow
      // 305: aload 3
      // 306: aload 17
      // 308: aload 16
      // 30a: invokevirtual net/minecraft/class_1297.method_23318 ()D
      // 30d: invokestatic java/lang/Double.valueOf (D)Ljava/lang/Double;
      // 310: invokedynamic apply ()Ljava/util/function/BiFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;, java/lang/Double.sum (DD)D, (Ljava/lang/Double;Ljava/lang/Double;)Ljava/lang/Double; ]
      // 315: invokeinterface java/util/Map.merge (Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object; 4
      // 31a: goto 321
      // 31d: invokestatic sixtwo/rl.did (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 320: athrow
      // 321: pop
      // 322: aload 6
      // 324: ifnonnull 265
      // 327: aload 7
      // 329: areturn
   }
}
