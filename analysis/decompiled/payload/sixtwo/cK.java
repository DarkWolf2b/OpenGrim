package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import java.util.stream.Collectors;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_2248;
import net.minecraft.class_2680;

public class cK extends cB {
   private Set<class_1792> NBjNm;
   private Set<class_1792> eAose;
   private int mnYah;
   private boolean nppnu;
   private static final long bQhZo = gb.aYR(-8797029917334817476L, -5087725111209576123L, MethodHandles.lookup().lookupClass()).a(262354789439710L);
   private static final long[] peAVW;
   private static final Integer[] RNZMo;
   private static final Map bjEhz = new HashMap(13);

   public cK(mr var1) {
      long var2 = bQhZo ^ 36720993089269L;
      super(var1);
      this.NBjNm = new LinkedHashSet<>();
      this.eAose = new LinkedHashSet<>();
      this.mnYah = Xj<"o">(32104, 5825352803038509436L ^ var2);
      this.nppnu = true;
   }

   public cK(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      long var0 = bQhZo ^ 140093941580025L;
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
      String var6 = "íòWØ\u008f\"ëùÇ\u00adD\u008dÓ\ni§";
      int var7 = "íòWØ\u008f\"ëùÇ\u00adD\u008dÓ\ni§".length();
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

      peAVW = var8;
      RNZMo = new Integer[2];
   }

   public cK WS(boolean var1) {
      this.nppnu = var1;
      this.Xa(this.eAose, true);
      return this;
   }

   private static CallSite Xj(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Xi".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cK" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public Set<class_1792> WL() {
      return this.NBjNm;
   }

   private boolean Xa(Set<class_1792> param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cK.bQhZo J
      // 03: ldc2_w 59562022520410
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: aload 1
      // 0c: invokeinterface java/util/Set.stream ()Ljava/util/stream/Stream; 1
      // 11: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, java/util/Objects.nonNull (Ljava/lang/Object;)Z, (Lnet/minecraft/class_1792;)Z ]
      // 16: invokeinterface java/util/stream/Stream.filter (Ljava/util/function/Predicate;)Ljava/util/stream/Stream; 2
      // 1b: aload 0
      // 1c: getfield sixtwo/cK.NBjNm Ljava/util/Set;
      // 1f: dup
      // 20: invokestatic java/util/Objects.requireNonNull (Ljava/lang/Object;)Ljava/lang/Object;
      // 23: pop
      // 24: invokedynamic test (Ljava/util/Set;)Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, java/util/Set.contains (Ljava/lang/Object;)Z, (Lnet/minecraft/class_1792;)Z ]
      // 29: invokeinterface java/util/stream/Stream.filter (Ljava/util/function/Predicate;)Ljava/util/stream/Stream; 2
      // 2e: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, java/util/LinkedHashSet.<init> ()V, ()Ljava/util/LinkedHashSet; ]
      // 33: invokestatic java/util/stream/Collectors.toCollection (Ljava/util/function/Supplier;)Ljava/util/stream/Collector;
      // 36: invokeinterface java/util/stream/Stream.collect (Ljava/util/stream/Collector;)Ljava/lang/Object; 2
      // 3b: checkcast java/util/LinkedHashSet
      // 3e: astore 6
      // 40: istore 5
      // 42: iload 2
      // 43: iload 5
      // 45: ifne 63
      // 48: ifeq 5f
      // 4b: goto 52
      // 4e: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: aload 0
      // 53: aload 6
      // 55: invokevirtual sixtwo/cK.Xb (Ljava/util/LinkedHashSet;)V
      // 58: goto 5f
      // 5b: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: aload 0
      // 60: getfield sixtwo/cK.nppnu Z
      // 63: iload 5
      // 65: ifne c1
      // 68: ifne b8
      // 6b: goto 72
      // 6e: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: aload 6
      // 74: invokevirtual java/util/LinkedHashSet.isEmpty ()Z
      // 77: iload 5
      // 79: ifne c1
      // 7c: goto 83
      // 7f: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 82: athrow
      // 83: ifeq b8
      // 86: goto 8d
      // 89: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8c: athrow
      // 8d: aload 0
      // 8e: getfield sixtwo/cK.NBjNm Ljava/util/Set;
      // 91: invokeinterface java/util/Set.stream ()Ljava/util/stream/Stream; 1
      // 96: invokeinterface java/util/stream/Stream.findFirst ()Ljava/util/Optional; 1
      // 9b: aconst_null
      // 9c: invokevirtual java/util/Optional.orElse (Ljava/lang/Object;)Ljava/lang/Object;
      // 9f: checkcast net/minecraft/class_1792
      // a2: astore 7
      // a4: aload 7
      // a6: ifnull b8
      // a9: aload 6
      // ab: aload 7
      // ad: invokevirtual java/util/LinkedHashSet.add (Ljava/lang/Object;)Z
      // b0: pop
      // b1: goto b8
      // b4: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b7: athrow
      // b8: aload 6
      // ba: aload 0
      // bb: getfield sixtwo/cK.eAose Ljava/util/Set;
      // be: invokevirtual java/util/LinkedHashSet.equals (Ljava/lang/Object;)Z
      // c1: iload 5
      // c3: ifne ec
      // c6: ifeq d6
      // c9: goto d0
      // cc: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // cf: athrow
      // d0: bipush 0
      // d1: ireturn
      // d2: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d5: athrow
      // d6: aload 0
      // d7: getfield sixtwo/cK.eAose Ljava/util/Set;
      // da: invokeinterface java/util/Set.clear ()V 1
      // df: aload 0
      // e0: getfield sixtwo/cK.eAose Ljava/util/Set;
      // e3: aload 6
      // e5: invokeinterface java/util/Set.addAll (Ljava/util/Collection;)Z 2
      // ea: pop
      // eb: bipush 1
      // ec: ireturn
   }

   public cK WO(Set<class_1792> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cK.bQhZo J
      // 03: ldc2_w 92253184775467
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: ifnonnull 1f
      // 11: new java/util/LinkedHashSet
      // 14: dup
      // 15: invokespecial java/util/LinkedHashSet.<init> ()V
      // 18: goto 27
      // 1b: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: new java/util/LinkedHashSet
      // 22: dup
      // 23: aload 1
      // 24: invokespecial java/util/LinkedHashSet.<init> (Ljava/util/Collection;)V
      // 27: astore 5
      // 29: aload 0
      // 2a: iload 4
      // 2c: ifeq 4b
      // 2f: aload 5
      // 31: bipush 1
      // 32: invokevirtual sixtwo/cK.Xa (Ljava/util/Set;Z)Z
      // 35: ifeq 4a
      // 38: goto 3f
      // 3b: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: aload 0
      // 40: invokevirtual sixtwo/cK.Vk ()V
      // 43: goto 4a
      // 46: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 0
      // 4b: areturn
   }

   public cK WQ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cK.bQhZo J
      // 03: ldc2_w 9471770173613
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifeq 2f
      // 11: aload 0
      // 12: getfield sixtwo/cK.NBjNm Ljava/util/Set;
      // 15: bipush 1
      // 16: invokevirtual sixtwo/cK.Xa (Ljava/util/Set;Z)Z
      // 19: ifeq 2e
      // 1c: goto 23
      // 1f: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: invokevirtual sixtwo/cK.Vk ()V
      // 27: goto 2e
      // 2a: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 0
      // 2f: areturn
   }

   public cK WR(int var1) {
      long var2 = bQhZo ^ 28779846894501L;
      boolean var4 = cB.Vt();

      cK var10000;
      int var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (!var4) {
                  break label22;
               }

               if (var1 <= 0) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw Xg(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = Xj<"o">(12788, 3911949078125002929L ^ var2);
      }

      var10000.mnYah = var10001;
      this.Xa(this.eAose, true);
      return this;
   }

   private static MatchException Xg(MatchException var0) {
      return var0;
   }

   @Override
   public void SS(JsonElement param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cK.bQhZo J
      // 03: ldc2_w 44039092828004
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: new java/util/LinkedHashSet
      // 0e: dup
      // 0f: invokespecial java/util/LinkedHashSet.<init> ()V
      // 12: astore 5
      // 14: aload 1
      // 15: invokevirtual com/google/gson/JsonElement.getAsJsonArray ()Lcom/google/gson/JsonArray;
      // 18: invokevirtual com/google/gson/JsonArray.iterator ()Ljava/util/Iterator;
      // 1b: astore 6
      // 1d: istore 4
      // 1f: aload 6
      // 21: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 26: ifeq 56
      // 29: aload 6
      // 2b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 30: checkcast com/google/gson/JsonElement
      // 33: astore 7
      // 35: aload 5
      // 37: aload 7
      // 39: invokevirtual com/google/gson/JsonElement.getAsInt ()I
      // 3c: invokestatic net/minecraft/class_1792.method_7875 (I)Lnet/minecraft/class_1792;
      // 3f: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 44: pop
      // 45: iload 4
      // 47: ifne 77
      // 4a: iload 4
      // 4c: ifeq 1f
      // 4f: goto 56
      // 52: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: aload 0
      // 57: iload 4
      // 59: ifne 74
      // 5c: aload 5
      // 5e: bipush 1
      // 5f: invokevirtual sixtwo/cK.Xa (Ljava/util/Set;Z)Z
      // 62: ifeq 77
      // 65: goto 6c
      // 68: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: aload 0
      // 6d: goto 74
      // 70: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 73: athrow
      // 74: invokevirtual sixtwo/cK.Vk ()V
      // 77: return
   }

   public cK WM(Set<class_1792> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cK.bQhZo J
      // 03: ldc2_w 59133207914452
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: aload 1
      // 0f: ifnonnull 20
      // 12: new java/util/LinkedHashSet
      // 15: dup
      // 16: invokespecial java/util/LinkedHashSet.<init> ()V
      // 19: goto 28
      // 1c: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: new java/util/LinkedHashSet
      // 23: dup
      // 24: aload 1
      // 25: invokespecial java/util/LinkedHashSet.<init> (Ljava/util/Collection;)V
      // 28: putfield sixtwo/cK.NBjNm Ljava/util/Set;
      // 2b: aload 0
      // 2c: iload 4
      // 2e: ifeq 4f
      // 31: aload 0
      // 32: getfield sixtwo/cK.eAose Ljava/util/Set;
      // 35: bipush 1
      // 36: invokevirtual sixtwo/cK.Xa (Ljava/util/Set;Z)Z
      // 39: ifeq 4e
      // 3c: goto 43
      // 3f: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 0
      // 44: invokevirtual sixtwo/cK.Vk ()V
      // 47: goto 4e
      // 4a: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: aload 0
      // 4f: areturn
   }

   public cK WK(class_1792... var1) {
      return this.WM(Arrays.stream(var1).collect(Collectors.toCollection(LinkedHashSet::new)));
   }

   public cK WN(class_1792... param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cK.bQhZo J
      // 03: ldc2_w 12523889996665
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: aload 1
      // 0c: invokestatic java/util/Arrays.stream ([Ljava/lang/Object;)Ljava/util/stream/Stream;
      // 0f: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, java/util/LinkedHashSet.<init> ()V, ()Ljava/util/LinkedHashSet; ]
      // 14: invokestatic java/util/stream/Collectors.toCollection (Ljava/util/function/Supplier;)Ljava/util/stream/Collector;
      // 17: invokeinterface java/util/stream/Stream.collect (Ljava/util/stream/Collector;)Ljava/lang/Object; 2
      // 1c: checkcast java/util/Set
      // 1f: astore 5
      // 21: istore 4
      // 23: aload 0
      // 24: iload 4
      // 26: ifne 45
      // 29: aload 5
      // 2b: bipush 1
      // 2c: invokevirtual sixtwo/cK.Xa (Ljava/util/Set;Z)Z
      // 2f: ifeq 44
      // 32: goto 39
      // 35: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: invokevirtual sixtwo/cK.Vk ()V
      // 3d: goto 44
      // 40: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 0
      // 45: areturn
   }

   public Set<class_1792> WP() {
      return this.eAose;
   }

   private void Xb(LinkedHashSet<class_1792> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cK.bQhZo J
      // 03: ldc2_w 58776912078830
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: invokevirtual java/util/LinkedHashSet.size ()I
      // 11: aload 0
      // 12: getfield sixtwo/cK.mnYah I
      // 15: if_icmple 4d
      // 18: aload 1
      // 19: invokevirtual java/util/LinkedHashSet.iterator ()Ljava/util/Iterator;
      // 1c: astore 5
      // 1e: aload 5
      // 20: iload 4
      // 22: ifeq 43
      // 25: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 2a: ifne 39
      // 2d: goto 34
      // 30: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: return
      // 35: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 5
      // 3b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 40: pop
      // 41: aload 5
      // 43: invokeinterface java/util/Iterator.remove ()V 1
      // 48: iload 4
      // 4a: ifne 0d
      // 4d: return
   }

   private static int Xi(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Xh(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int Xh(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 11566;
      if (RNZMo[var3] == null) {
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
         long var5 = peAVW[var3];
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
         Object[] var9 = (Object[])bjEhz.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               bjEhz.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cK", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         RNZMo[var3] = var15;
      }

      return RNZMo[var3];
   }

   public int Xc() {
      return this.mnYah;
   }

   public cK Xf(boolean var1) {
      this.nppnu = var1;
      return this;
   }

   public void WV(class_1792 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cK.bQhZo J
      // 03: ldc2_w 17591748521797
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vu ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/cK.eAose Ljava/util/Set;
      // 11: aload 1
      // 12: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 17: iload 4
      // 19: ifne 2b
      // 1c: ifne 27
      // 1f: goto 26
      // 22: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: return
      // 27: aload 0
      // 28: getfield sixtwo/cK.nppnu Z
      // 2b: iload 4
      // 2d: ifne 4a
      // 30: ifne 53
      // 33: goto 3a
      // 36: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 0
      // 3b: getfield sixtwo/cK.eAose Ljava/util/Set;
      // 3e: invokeinterface java/util/Set.size ()I 1
      // 43: goto 4a
      // 46: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: bipush 1
      // 4b: if_icmpne 53
      // 4e: return
      // 4f: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: new java/util/LinkedHashSet
      // 56: dup
      // 57: aload 0
      // 58: getfield sixtwo/cK.eAose Ljava/util/Set;
      // 5b: invokespecial java/util/LinkedHashSet.<init> (Ljava/util/Collection;)V
      // 5e: astore 5
      // 60: aload 5
      // 62: aload 1
      // 63: invokeinterface java/util/Set.remove (Ljava/lang/Object;)Z 2
      // 68: pop
      // 69: aload 0
      // 6a: iload 4
      // 6c: ifne 87
      // 6f: aload 5
      // 71: bipush 1
      // 72: invokevirtual sixtwo/cK.Xa (Ljava/util/Set;Z)Z
      // 75: ifeq 8a
      // 78: goto 7f
      // 7b: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: aload 0
      // 80: goto 87
      // 83: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 86: athrow
      // 87: invokevirtual sixtwo/cK.Vk ()V
      // 8a: return
   }

   public boolean WY(class_2248 var1) {
      return this.eAose.contains(var1.method_8389());
   }

   public boolean WZ(class_2680 var1) {
      return this.eAose.contains(var1.method_26204().method_8389());
   }

   public cK WT() {
      this.mnYah = 1;
      this.nppnu = false;
      this.Xa(this.eAose, true);
      return this;
   }

   public boolean WW(class_1792 var1) {
      return this.eAose.contains(var1);
   }

   public boolean WX(class_1799 var1) {
      return this.eAose.contains(var1.method_7909());
   }

   public boolean Xd() {
      return this.nppnu;
   }

   public cK Xe(int var1) {
      this.mnYah = var1;
      return this;
   }

   public void WU(class_1792 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cK.bQhZo J
      // 03: ldc2_w 135132305127814
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cB.Vt ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: ifnull 45
      // 11: aload 0
      // 12: getfield sixtwo/cK.NBjNm Ljava/util/Set;
      // 15: aload 1
      // 16: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 1b: iload 4
      // 1d: ifeq 42
      // 20: goto 27
      // 23: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: ifeq 45
      // 2a: goto 31
      // 2d: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: aload 0
      // 32: getfield sixtwo/cK.eAose Ljava/util/Set;
      // 35: aload 1
      // 36: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 3b: goto 42
      // 3e: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: ifeq 46
      // 45: return
      // 46: new java/util/LinkedHashSet
      // 49: dup
      // 4a: aload 0
      // 4b: getfield sixtwo/cK.eAose Ljava/util/Set;
      // 4e: invokespecial java/util/LinkedHashSet.<init> (Ljava/util/Collection;)V
      // 51: astore 5
      // 53: aload 5
      // 55: aload 1
      // 56: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 5b: pop
      // 5c: aload 0
      // 5d: iload 4
      // 5f: ifeq 7a
      // 62: aload 5
      // 64: bipush 1
      // 65: invokevirtual sixtwo/cK.Xa (Ljava/util/Set;Z)Z
      // 68: ifeq 7d
      // 6b: goto 72
      // 6e: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: aload 0
      // 73: goto 7a
      // 76: invokestatic sixtwo/cK.Xg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: invokevirtual sixtwo/cK.Vk ()V
      // 7d: return
   }

   @Override
   public void SR(Map<String, Object> var1) {
      Set var2 = this.eAose.stream().map(class_1792::method_7880).collect(Collectors.toSet());
      var1.put(Arrays.toString(this.NwlSF), var2);
   }
}
