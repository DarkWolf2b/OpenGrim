package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1268;
import net.minecraft.class_1309;
import net.minecraft.class_1703;
import net.minecraft.class_1713;
import net.minecraft.class_1735;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_8051;
import net.minecraft.class_9304;

public class oR {
   private static int HMydo;
   private static final long KOfQd = gb.aYR(5421706130014531987L, 3041131776011365962L, MethodHandles.lookup().lookupClass()).a(16244812251665L);
   private static final long[] gadYF;
   private static final Integer[] LnehL;
   private static final Map HQEQQ = new HashMap(13);

   static {
      long var0 = KOfQd ^ 114397122598377L;
      cKs(0);
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
      String var6 = "ur\u009bòß\b?eH\u0096\u0080\u0085î[=úaávLy\u0099\u009aQÊi\u000e[{\u009eïp\u0094Á8\u0096ªD5Ñ";
      int var7 = "ur\u009bòß\b?eH\u0096\u0080\u0085î[=úaávLy\u0099\u009aQÊi\u000e[{\u009eïp\u0094Á8\u0096ªD5Ñ".length();
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
                     gadYF = var8;
                     LnehL = new Integer[7];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "öçÿ!í\u000e,\\D\u000b\u0088ùYì\u008eÝ";
                  var7 = "öçÿ!í\u000e,\\D\u000b\u0088ùYì\u008eÝ".length();
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

   public static oJ cJM(int var0) {
      return new oJ(var0);
   }

   public static oG cJR() {
      return new oG();
   }

   public static int cKu() {
      int var0 = cKt();

      try {
         return var0 == 0 ? 31 : 0;
      } catch (MatchException var1) {
         throw cKv(var1);
      }
   }

   public static boolean cJT() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 120969712483416
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: istore 2
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12: invokevirtual net/minecraft/class_746.method_31548 ()Lnet/minecraft/class_1661;
      // 15: invokevirtual net/minecraft/class_1661.method_7376 ()I
      // 18: iload 2
      // 19: ifeq 2f
      // 1c: bipush -1
      // 1d: if_icmpeq 32
      // 20: goto 27
      // 23: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: bipush 1
      // 28: goto 2f
      // 2b: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e: athrow
      // 2f: goto 33
      // 32: bipush 0
      // 33: ireturn
   }

   public static void cKc(int var0) {
      long var1 = KOfQd ^ 100422407856314L;

      try {
         if (rD.dlmvG.method_1562() == null) {
            return;
         }
      } catch (MatchException var4) {
         throw cKv(var4);
      }

      int var3 = cJU(var0);
      rD.dlmvG
         .field_1761
         .method_2906(rD.dlmvG.field_1724.field_7512.field_7763, var3, cKy<"q">(2855, 5140688667564904048L ^ var1), class_1713.field_7791, rD.dlmvG.field_1724);
   }

   public static boolean cKf(oK var0, int var1) {
      oJ var2 = cJM(var1);
      cJW(var0, var2);
      return true;
   }

   public static void cJY(int var0, int var1) {
      cJZ(var0, var1, false);
   }

   public static int cKt() {
      return HMydo;
   }

   public static void cKd(int param0, int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 64901840228698
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oR.cKt ()I
      // 0b: istore 4
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: iload 4
      // 12: ifne 2a
      // 15: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 18: ifnonnull 27
      // 1b: goto 22
      // 1e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: return
      // 23: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2a: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 2d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 30: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 33: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 36: getfield net/minecraft/class_1703.field_7763 I
      // 39: iload 0
      // 3a: iload 1
      // 3b: getstatic net/minecraft/class_1713.field_7791 Lnet/minecraft/class_1713;
      // 3e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 41: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 44: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 47: return
   }

   public static oJ cJQ() {
      return cJM(0);
   }

   public static oJ cJP() {
      return cJM(1);
   }

   private static MatchException cKv(MatchException var0) {
      return var0;
   }

   public static void cJW(oK param0, oK param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 116006386508334
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: istore 4
      // 0d: iload 4
      // 0f: ifeq 2f
      // 12: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 15: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 18: ifnonnull 27
      // 1b: goto 22
      // 1e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: return
      // 23: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 0
      // 28: invokevirtual sixtwo/oK.cIY ()V
      // 2b: aload 1
      // 2c: invokevirtual sixtwo/oK.cIY ()V
      // 2f: aload 1
      // 30: iload 4
      // 32: ifeq 4a
      // 35: invokevirtual sixtwo/oK.cIT ()Z
      // 38: ifne 4d
      // 3b: goto 42
      // 3e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 0
      // 43: goto 4a
      // 46: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: invokevirtual sixtwo/oK.cIY ()V
      // 4d: return
   }

   public static void cKa(int param0, int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 41232645606911
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: istore 4
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: iload 4
      // 12: ifeq 4a
      // 15: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 18: ifnonnull 27
      // 1b: goto 22
      // 1e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: return
      // 23: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2a: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 2d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 30: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 33: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 36: getfield net/minecraft/class_1703.field_7763 I
      // 39: iload 0
      // 3a: bipush 1
      // 3b: getstatic net/minecraft/class_1713.field_7790 Lnet/minecraft/class_1713;
      // 3e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 41: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 44: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 47: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 4a: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 4d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 50: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 53: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 56: getfield net/minecraft/class_1703.field_7763 I
      // 59: iload 1
      // 5a: bipush 0
      // 5b: getstatic net/minecraft/class_1713.field_7790 Lnet/minecraft/class_1713;
      // 5e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 61: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 64: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 67: return
   }

   public static boolean cKe(oK var0, int var1) {
      oI var2 = cJK(var1);
      cJW(var0, var2);
      return true;
   }

   private static CallSite cKy(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cKx".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/oR" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static oJ cJO() {
      return cJM(2);
   }

   public static void cKh(class_1703 param0, class_1735 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/oR.KOfQd J
      // 003: ldc2_w 16755397812848
      // 006: lxor
      // 007: lstore 2
      // 008: aload 0
      // 009: getfield net/minecraft/class_1703.field_7761 Lnet/minecraft/class_2371;
      // 00c: astore 5
      // 00e: invokestatic sixtwo/oR.cKt ()I
      // 011: aload 5
      // 013: invokevirtual net/minecraft/class_2371.size ()I
      // 016: istore 6
      // 018: iload 6
      // 01a: invokestatic com/google/common/collect/Lists.newArrayListWithCapacity (I)Ljava/util/ArrayList;
      // 01d: astore 7
      // 01f: aload 5
      // 021: invokevirtual net/minecraft/class_2371.iterator ()Ljava/util/Iterator;
      // 024: astore 8
      // 026: istore 4
      // 028: aload 8
      // 02a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 02f: ifeq 059
      // 032: aload 8
      // 034: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 039: checkcast net/minecraft/class_1735
      // 03c: astore 9
      // 03e: aload 7
      // 040: aload 9
      // 042: invokevirtual net/minecraft/class_1735.method_7677 ()Lnet/minecraft/class_1799;
      // 045: invokevirtual net/minecraft/class_1799.method_7972 ()Lnet/minecraft/class_1799;
      // 048: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 04d: pop
      // 04e: iload 4
      // 050: ifeq 028
      // 053: ldc_w "kTf95b"
      // 056: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 059: new it/unimi/dsi/fastutil/ints/Int2ObjectOpenHashMap
      // 05c: dup
      // 05d: invokespecial it/unimi/dsi/fastutil/ints/Int2ObjectOpenHashMap.<init> ()V
      // 060: astore 8
      // 062: bipush 0
      // 063: istore 9
      // 065: iload 9
      // 067: iload 6
      // 069: if_icmpge 0d2
      // 06c: aload 7
      // 06e: iload 9
      // 070: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 075: checkcast net/minecraft/class_1799
      // 078: astore 10
      // 07a: aload 5
      // 07c: iload 9
      // 07e: invokevirtual net/minecraft/class_2371.get (I)Ljava/lang/Object;
      // 081: checkcast net/minecraft/class_1735
      // 084: invokevirtual net/minecraft/class_1735.method_7677 ()Lnet/minecraft/class_1799;
      // 087: astore 11
      // 089: iload 4
      // 08b: ifne 0cd
      // 08e: aload 10
      // 090: iload 4
      // 092: ifne 0d6
      // 095: goto 09c
      // 098: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09b: athrow
      // 09c: aload 11
      // 09e: invokestatic net/minecraft/class_1799.method_7973 (Lnet/minecraft/class_1799;Lnet/minecraft/class_1799;)Z
      // 0a1: ifne 0ca
      // 0a4: goto 0ab
      // 0a7: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0aa: athrow
      // 0ab: aload 8
      // 0ad: iload 9
      // 0af: aload 11
      // 0b1: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0b4: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 0b7: invokevirtual net/minecraft/class_634.method_68823 ()Lnet/minecraft/class_10936$class_10937;
      // 0ba: invokestatic net/minecraft/class_10938.method_68853 (Lnet/minecraft/class_1799;Lnet/minecraft/class_10936$class_10937;)Lnet/minecraft/class_10938;
      // 0bd: invokeinterface it/unimi/dsi/fastutil/ints/Int2ObjectMap.put (ILjava/lang/Object;)Ljava/lang/Object; 3
      // 0c2: pop
      // 0c3: goto 0ca
      // 0c6: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c9: athrow
      // 0ca: iinc 9 1
      // 0cd: iload 4
      // 0cf: ifeq 065
      // 0d2: aload 0
      // 0d3: invokevirtual net/minecraft/class_1703.method_34255 ()Lnet/minecraft/class_1799;
      // 0d6: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0d9: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 0dc: invokevirtual net/minecraft/class_634.method_68823 ()Lnet/minecraft/class_10936$class_10937;
      // 0df: invokestatic net/minecraft/class_10938.method_68853 (Lnet/minecraft/class_1799;Lnet/minecraft/class_10936$class_10937;)Lnet/minecraft/class_10938;
      // 0e2: astore 9
      // 0e4: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e7: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 0ea: new net/minecraft/class_2813
      // 0ed: dup
      // 0ee: aload 0
      // 0ef: getfield net/minecraft/class_1703.field_7763 I
      // 0f2: aload 0
      // 0f3: invokevirtual net/minecraft/class_1703.method_37421 ()I
      // 0f6: aload 1
      // 0f7: getfield net/minecraft/class_1735.field_7874 I
      // 0fa: i2l
      // 0fb: invokestatic com/google/common/primitives/Shorts.checkedCast (J)S
      // 0fe: lconst_0
      // 0ff: invokestatic com/google/common/primitives/SignedBytes.checkedCast (J)B
      // 102: getstatic net/minecraft/class_1713.field_7790 Lnet/minecraft/class_1713;
      // 105: aload 8
      // 107: aload 9
      // 109: invokespecial net/minecraft/class_2813.<init> (IISBLnet/minecraft/class_1713;Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;Lnet/minecraft/class_10938;)V
      // 10c: invokevirtual net/minecraft/class_634.method_52787 (Lnet/minecraft/class_2596;)V
      // 10f: return
   }

   public static oH cJL(int var0) {
      return new oH(var0);
   }

   public static void cKb(int param0, int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 33219838607220
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: istore 4
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: iload 4
      // 12: ifeq 6a
      // 15: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 18: ifnonnull 27
      // 1b: goto 22
      // 1e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: return
      // 23: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2a: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 2d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 30: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 33: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 36: getfield net/minecraft/class_1703.field_7763 I
      // 39: iload 0
      // 3a: bipush 0
      // 3b: getstatic net/minecraft/class_1713.field_7790 Lnet/minecraft/class_1713;
      // 3e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 41: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 44: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 47: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 4a: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 4d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 50: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 53: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 56: getfield net/minecraft/class_1703.field_7763 I
      // 59: iload 1
      // 5a: bipush 1
      // 5b: getstatic net/minecraft/class_1713.field_7790 Lnet/minecraft/class_1713;
      // 5e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 61: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 64: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 67: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 6a: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 6d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 70: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 73: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 76: getfield net/minecraft/class_1703.field_7763 I
      // 79: iload 0
      // 7a: bipush 0
      // 7b: getstatic net/minecraft/class_1713.field_7790 Lnet/minecraft/class_1713;
      // 7e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 81: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 84: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 87: return
   }

   public static void cKg(oK var0) {
      oG var1 = cJR();
      cJW(var0, var1);
   }

   public static boolean cKj(class_1268 var0) {
      return jc.bzl(rD.dlmvG.field_1724.method_5998(var0));
   }

   public static void cJX(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 70395856037884
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: istore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: iload 3
      // 10: ifeq 28
      // 13: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 16: ifnonnull 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 28: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 2b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 31: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 34: getfield net/minecraft/class_1703.field_7763 I
      // 37: iload 0
      // 38: bipush 0
      // 39: getstatic net/minecraft/class_1713.field_7794 Lnet/minecraft/class_1713;
      // 3c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 3f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 42: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 45: return
   }

   public static boolean cJV(class_1309 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 71268510131638
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: aload 0
      // 0c: invokevirtual net/minecraft/class_1309.method_6047 ()Lnet/minecraft/class_1799;
      // 0f: astore 4
      // 11: istore 3
      // 12: aload 4
      // 14: getstatic net/minecraft/class_3489.field_42611 Lnet/minecraft/class_6862;
      // 17: invokevirtual net/minecraft/class_1799.method_31573 (Lnet/minecraft/class_6862;)Z
      // 1a: iload 3
      // 1b: ifeq 60
      // 1e: ifne 5f
      // 21: goto 28
      // 24: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 4
      // 2a: invokestatic sixtwo/jc.bzl (Lnet/minecraft/class_1799;)Z
      // 2d: iload 3
      // 2e: ifeq 60
      // 31: goto 38
      // 34: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: ifne 5f
      // 3b: goto 42
      // 3e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 4
      // 44: getstatic net/minecraft/class_1802.field_49814 Lnet/minecraft/class_1792;
      // 47: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 4a: iload 3
      // 4b: ifeq 60
      // 4e: goto 55
      // 51: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: ifeq 63
      // 58: goto 5f
      // 5b: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: bipush 1
      // 60: goto 64
      // 63: bipush 0
      // 64: ireturn
   }

   public static void cJZ(int param0, int param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 4643959635388
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/oR.cKt ()I
      // 0b: istore 5
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: iload 5
      // 12: ifne 4a
      // 15: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 18: ifnonnull 27
      // 1b: goto 22
      // 1e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: return
      // 23: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2a: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 2d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 30: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 33: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 36: getfield net/minecraft/class_1703.field_7763 I
      // 39: iload 0
      // 3a: bipush 0
      // 3b: getstatic net/minecraft/class_1713.field_7790 Lnet/minecraft/class_1713;
      // 3e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 41: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 44: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 47: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 4a: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 4d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 50: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 53: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 56: getfield net/minecraft/class_1703.field_7763 I
      // 59: iload 1
      // 5a: bipush 0
      // 5b: getstatic net/minecraft/class_1713.field_7790 Lnet/minecraft/class_1713;
      // 5e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 61: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 64: iload 5
      // 66: ifne 9b
      // 69: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 6c: iload 2
      // 6d: ifeq 9e
      // 70: goto 77
      // 73: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 7a: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 7d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 80: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 83: getfield net/minecraft/class_746.field_7512 Lnet/minecraft/class_1703;
      // 86: getfield net/minecraft/class_1703.field_7763 I
      // 89: iload 0
      // 8a: bipush 0
      // 8b: getstatic net/minecraft/class_1713.field_7790 Lnet/minecraft/class_1713;
      // 8e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 91: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 94: goto 9b
      // 97: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9a: athrow
      // 9b: invokevirtual net/minecraft/class_636.method_2906 (IIILnet/minecraft/class_1713;Lnet/minecraft/class_1657;)V
      // 9e: return
   }

   public static oI cJK(int var0) {
      return new oI(var0);
   }

   public static int cJU(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 6313332535680
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: istore 3
      // 0c: iload 0
      // 0d: invokestatic net/minecraft/class_1661.method_7368 ()I
      // 10: iload 3
      // 11: ifeq 33
      // 14: if_icmpge 37
      // 17: goto 1e
      // 1a: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: iload 0
      // 1f: sipush 27928
      // 22: ldc2_w 6919953084683204979
      // 25: lload 1
      // 26: lxor
      // 27: invokedynamic q (IJ)I bsm=sixtwo/oR.cKy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2c: goto 33
      // 2f: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: iadd
      // 34: goto 38
      // 37: iload 0
      // 38: ireturn
   }

   public static oJ cJN() {
      return cJM(3);
   }

   public static Optional<class_1268> cKi(class_1792 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 57106862445434
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic net/minecraft/class_1268.values ()[Lnet/minecraft/class_1268;
      // 0b: astore 4
      // 0d: aload 4
      // 0f: arraylength
      // 10: istore 5
      // 12: invokestatic sixtwo/oR.cKt ()I
      // 15: bipush 0
      // 16: istore 6
      // 18: istore 3
      // 19: iload 6
      // 1b: iload 5
      // 1d: if_icmpge 55
      // 20: aload 4
      // 22: iload 6
      // 24: aaload
      // 25: astore 7
      // 27: iload 3
      // 28: ifne 51
      // 2b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 31: aload 7
      // 33: invokevirtual net/minecraft/class_746.method_5998 (Lnet/minecraft/class_1268;)Lnet/minecraft/class_1799;
      // 36: aload 0
      // 37: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 3a: ifeq 4e
      // 3d: goto 44
      // 40: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 7
      // 46: invokestatic java/util/Optional.of (Ljava/lang/Object;)Ljava/util/Optional;
      // 49: areturn
      // 4a: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: iinc 6 1
      // 51: iload 3
      // 52: ifeq 19
      // 55: invokestatic java/util/Optional.empty ()Ljava/util/Optional;
      // 58: areturn
   }

   public static void cJS(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 35916859253539
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: istore 3
      // 0c: iload 0
      // 0d: iload 3
      // 0e: ifeq 1c
      // 11: iflt 37
      // 14: goto 1b
      // 17: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: iload 0
      // 1c: sipush 28195
      // 1f: ldc2_w 3474740991813478638
      // 22: lload 1
      // 23: lxor
      // 24: invokedynamic q (IJ)I bsm=sixtwo/oR.cKy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 29: iload 3
      // 2a: ifeq 50
      // 2d: if_icmple 38
      // 30: goto 37
      // 33: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: return
      // 38: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 3b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 3e: invokevirtual net/minecraft/class_746.method_31548 ()Lnet/minecraft/class_1661;
      // 41: iload 3
      // 42: ifeq 72
      // 45: invokevirtual net/minecraft/class_1661.method_67532 ()I
      // 48: iload 0
      // 49: goto 50
      // 4c: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: if_icmpne 69
      // 53: invokestatic sixtwo/rD.dlZ ()Lsixtwo/qJ;
      // 56: invokevirtual sixtwo/qJ.dbs ()I
      // 59: iload 0
      // 5a: if_icmpne 69
      // 5d: goto 64
      // 60: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: return
      // 65: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 6c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 6f: invokevirtual net/minecraft/class_746.method_31548 ()Lnet/minecraft/class_1661;
      // 72: iload 0
      // 73: invokevirtual net/minecraft/class_1661.method_61496 (I)V
      // 76: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 79: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 7c: checkcast mixin/accessors/MultiPlayerGameModeAccessor
      // 7f: invokeinterface mixin/accessors/MultiPlayerGameModeAccessor.callEnsureHasSentCarriedItem ()V 1
      // 84: return
   }

   public static LinkedList<Integer> cKm(class_8051 var0) {
      long var1 = KOfQd ^ 61887255360617L;
      return cKn(var0, cKy<"q">(24534, 7359320571185122899L ^ var1), cKy<"q">(30501, 4823270294825232037L ^ var1));
   }

   public static int cKl(class_8051 param0, int param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 94882575538951
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 11: invokevirtual net/minecraft/class_746.method_31548 ()Lnet/minecraft/class_1661;
      // 14: astore 6
      // 16: bipush -1
      // 17: istore 7
      // 19: istore 5
      // 1b: sipush 32528
      // 1e: ldc2_w 8175089410001240573
      // 21: lload 3
      // 22: lxor
      // 23: invokedynamic q (IJ)I bsm=sixtwo/oR.cKy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 28: istore 8
      // 2a: iload 1
      // 2b: istore 9
      // 2d: iload 9
      // 2f: iload 2
      // 30: if_icmpgt f0
      // 33: aload 6
      // 35: iload 9
      // 37: invokevirtual net/minecraft/class_1661.method_5438 (I)Lnet/minecraft/class_1799;
      // 3a: astore 10
      // 3c: aload 10
      // 3e: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 41: iload 5
      // 43: ifeq f2
      // 46: iload 5
      // 48: ifeq 77
      // 4b: goto 52
      // 4e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: ifeq 68
      // 55: goto 5c
      // 58: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: iload 5
      // 5e: ifne e8
      // 61: goto 68
      // 64: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: aload 10
      // 6a: getstatic net/minecraft/class_9334.field_54196 Lnet/minecraft/class_9331;
      // 6d: invokevirtual net/minecraft/class_1799.method_57826 (Lnet/minecraft/class_9331;)Z
      // 70: goto 77
      // 73: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: iload 5
      // 79: ifeq 9f
      // 7c: ifne 92
      // 7f: goto 86
      // 82: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 85: athrow
      // 86: iload 5
      // 88: ifne e8
      // 8b: goto 92
      // 8e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 91: athrow
      // 92: aload 10
      // 94: aload 0
      // 95: invokestatic sixtwo/jc.bza (Lnet/minecraft/class_1799;Lnet/minecraft/class_8051;)Z
      // 98: goto 9f
      // 9b: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9e: athrow
      // 9f: iload 5
      // a1: ifeq cb
      // a4: ifne ba
      // a7: goto ae
      // aa: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ad: athrow
      // ae: iload 5
      // b0: ifne e8
      // b3: goto ba
      // b6: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b9: athrow
      // ba: aload 10
      // bc: aload 10
      // be: invokevirtual net/minecraft/class_1799.method_58657 ()Lnet/minecraft/class_9304;
      // c1: invokestatic sixtwo/oR.cKo (Lnet/minecraft/class_1799;Lnet/minecraft/class_9304;)I
      // c4: goto cb
      // c7: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ca: athrow
      // cb: istore 11
      // cd: iload 5
      // cf: ifeq eb
      // d2: iload 11
      // d4: iload 8
      // d6: if_icmple e8
      // d9: goto e0
      // dc: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // df: athrow
      // e0: iload 11
      // e2: istore 8
      // e4: iload 9
      // e6: istore 7
      // e8: iinc 9 1
      // eb: iload 5
      // ed: ifne 2d
      // f0: iload 7
      // f2: ireturn
   }

   public static void cKs(int var0) {
      HMydo = var0;
   }

   private static int cKw(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24488;
      if (LnehL[var3] == null) {
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
         long var5 = gadYF[var3];
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
         Object[] var9 = (Object[])HQEQQ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               HQEQQ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/oR", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         LnehL[var3] = var15;
      }

      return LnehL[var3];
   }

   private static int cKo(class_1799 param0, class_9304 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/oR.KOfQd J
      // 003: ldc2_w 111818657082993
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/oR.cKu ()I
      // 00b: bipush 0
      // 00c: istore 5
      // 00e: istore 4
      // 010: aload 0
      // 011: getstatic net/minecraft/class_9334.field_54196 Lnet/minecraft/class_9331;
      // 014: invokevirtual net/minecraft/class_1799.method_58694 (Lnet/minecraft/class_9331;)Ljava/lang/Object;
      // 017: checkcast net/minecraft/class_10192
      // 01a: astore 6
      // 01c: aload 6
      // 01e: ifnonnull 028
      // 021: iload 5
      // 023: ireturn
      // 024: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 027: athrow
      // 028: aload 1
      // 029: invokevirtual net/minecraft/class_9304.method_57539 ()Ljava/util/Set;
      // 02c: invokeinterface java/util/Set.iterator ()Ljava/util/Iterator; 1
      // 031: astore 7
      // 033: aload 7
      // 035: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 03a: ifeq 0f6
      // 03d: aload 7
      // 03f: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 044: checkcast java/util/Map$Entry
      // 047: astore 8
      // 049: aload 8
      // 04b: invokeinterface java/util/Map$Entry.getKey ()Ljava/lang/Object; 1
      // 050: checkcast net/minecraft/class_6880
      // 053: astore 9
      // 055: aload 8
      // 057: invokeinterface java/util/Map$Entry.getValue ()Ljava/lang/Object; 1
      // 05c: checkcast java/lang/Integer
      // 05f: invokevirtual java/lang/Integer.intValue ()I
      // 062: istore 10
      // 064: aload 9
      // 066: iload 4
      // 068: ifeq 0fd
      // 06b: getstatic net/minecraft/class_1893.field_9111 Lnet/minecraft/class_5321;
      // 06e: invokeinterface net/minecraft/class_6880.method_40225 (Lnet/minecraft/class_5321;)Z 2
      // 073: iload 4
      // 075: ifeq 0a8
      // 078: goto 07f
      // 07b: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07e: athrow
      // 07f: ifeq 097
      // 082: goto 089
      // 085: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 088: athrow
      // 089: iload 5
      // 08b: iload 10
      // 08d: bipush 3
      // 08e: imul
      // 08f: iadd
      // 090: istore 5
      // 092: iload 4
      // 094: ifne 0f1
      // 097: aload 9
      // 099: getstatic net/minecraft/class_1893.field_9119 Lnet/minecraft/class_5321;
      // 09c: invokeinterface net/minecraft/class_6880.method_40225 (Lnet/minecraft/class_5321;)Z 2
      // 0a1: goto 0a8
      // 0a4: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a7: athrow
      // 0a8: iload 4
      // 0aa: ifeq 0d4
      // 0ad: ifeq 0c3
      // 0b0: goto 0b7
      // 0b3: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b6: athrow
      // 0b7: iload 5
      // 0b9: iload 10
      // 0bb: iadd
      // 0bc: istore 5
      // 0be: iload 4
      // 0c0: ifne 0f1
      // 0c3: aload 9
      // 0c5: getstatic net/minecraft/class_1893.field_9097 Lnet/minecraft/class_5321;
      // 0c8: invokeinterface net/minecraft/class_6880.method_40225 (Lnet/minecraft/class_5321;)Z 2
      // 0cd: goto 0d4
      // 0d0: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d3: athrow
      // 0d4: iload 4
      // 0d6: ifeq 0ef
      // 0d9: ifeq 0f1
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: iload 5
      // 0e5: iload 10
      // 0e7: iadd
      // 0e8: goto 0ef
      // 0eb: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ee: athrow
      // 0ef: istore 5
      // 0f1: iload 4
      // 0f3: ifne 033
      // 0f6: aload 0
      // 0f7: getstatic net/minecraft/class_9334.field_49636 Lnet/minecraft/class_9331;
      // 0fa: invokevirtual net/minecraft/class_1799.method_58694 (Lnet/minecraft/class_9331;)Ljava/lang/Object;
      // 0fd: checkcast net/minecraft/class_9285
      // 100: astore 7
      // 102: aload 7
      // 104: iload 4
      // 106: ifeq 11c
      // 109: ifnonnull 11a
      // 10c: goto 113
      // 10f: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 112: athrow
      // 113: iload 5
      // 115: ireturn
      // 116: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 119: athrow
      // 11a: aload 7
      // 11c: invokevirtual net/minecraft/class_9285.comp_2393 ()Ljava/util/List;
      // 11f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 124: astore 8
      // 126: aload 8
      // 128: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 12d: ifeq 1e4
      // 130: aload 8
      // 132: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 137: checkcast net/minecraft/class_9285$class_9287
      // 13a: astore 9
      // 13c: aload 9
      // 13e: iload 4
      // 140: ifeq 17a
      // 143: invokevirtual net/minecraft/class_9285$class_9287.comp_2395 ()Lnet/minecraft/class_6880;
      // 146: getstatic net/minecraft/class_5134.field_23724 Lnet/minecraft/class_6880;
      // 149: if_acmpeq 171
      // 14c: goto 153
      // 14f: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 152: athrow
      // 153: aload 9
      // 155: iload 4
      // 157: ifeq 17a
      // 15a: goto 161
      // 15d: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 160: athrow
      // 161: invokevirtual net/minecraft/class_9285$class_9287.comp_2395 ()Lnet/minecraft/class_6880;
      // 164: getstatic net/minecraft/class_5134.field_23725 Lnet/minecraft/class_6880;
      // 167: if_acmpne 1df
      // 16a: goto 171
      // 16d: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 170: athrow
      // 171: aload 9
      // 173: goto 17a
      // 176: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 179: athrow
      // 17a: invokevirtual net/minecraft/class_9285$class_9287.comp_2396 ()Lnet/minecraft/class_1322;
      // 17d: invokevirtual net/minecraft/class_1322.comp_2449 ()D
      // 180: dstore 10
      // 182: iload 5
      // 184: getstatic sixtwo/oR$vn.tWgVh [I
      // 187: aload 9
      // 189: invokevirtual net/minecraft/class_9285$class_9287.comp_2396 ()Lnet/minecraft/class_1322;
      // 18c: invokevirtual net/minecraft/class_1322.comp_2450 ()Lnet/minecraft/class_1322$class_1323;
      // 18f: invokevirtual net/minecraft/class_1322$class_1323.ordinal ()I
      // 192: iaload
      // 193: tableswitch 25 1 3 39 45 66
      // 1ac: new java/lang/MatchException
      // 1af: dup
      // 1b0: aconst_null
      // 1b1: aconst_null
      // 1b2: invokespecial java/lang/MatchException.<init> (Ljava/lang/String;Ljava/lang/Throwable;)V
      // 1b5: athrow
      // 1b6: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b9: athrow
      // 1ba: dload 10
      // 1bc: d2i
      // 1bd: goto 1dc
      // 1c0: dload 10
      // 1c2: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1c5: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1c8: aload 9
      // 1ca: invokevirtual net/minecraft/class_9285$class_9287.comp_2395 ()Lnet/minecraft/class_6880;
      // 1cd: invokevirtual net/minecraft/class_746.method_45326 (Lnet/minecraft/class_6880;)D
      // 1d0: dmul
      // 1d1: d2i
      // 1d2: goto 1dc
      // 1d5: dload 10
      // 1d7: iload 5
      // 1d9: i2d
      // 1da: dmul
      // 1db: d2i
      // 1dc: iadd
      // 1dd: istore 5
      // 1df: iload 4
      // 1e1: ifne 126
      // 1e4: iload 5
      // 1e6: ireturn
   }

   public static rB cKp(gg param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/oR.KOfQd J
      // 003: ldc2_w 69821814068008
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/oR.cKt ()I
      // 00b: invokestatic sixtwo/oR.cJO ()Lsixtwo/oJ;
      // 00e: astore 4
      // 010: istore 3
      // 011: aload 4
      // 013: iload 3
      // 014: ifne 045
      // 017: getstatic net/minecraft/class_1802.field_8833 Lnet/minecraft/class_1792;
      // 01a: invokevirtual sixtwo/oJ.cIU (Lnet/minecraft/class_1792;)Z
      // 01d: ifeq 138
      // 020: goto 027
      // 023: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 026: athrow
      // 027: invokestatic sixtwo/oP.cJm ()Lsixtwo/oQ;
      // 02a: invokestatic sixtwo/oP.cJs ()Lsixtwo/oQ;
      // 02d: invokevirtual sixtwo/oQ.cJF (Lsixtwo/oQ;)Lsixtwo/oQ;
      // 030: invokestatic sixtwo/oP.cJo ()Lsixtwo/oQ;
      // 033: invokevirtual sixtwo/oQ.cJF (Lsixtwo/oQ;)Lsixtwo/oQ;
      // 036: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/jc.bzb (Lnet/minecraft/class_1799;)Z, (Lnet/minecraft/class_1799;)Z ]
      // 03b: invokevirtual sixtwo/oQ.cJv (Ljava/util/function/Predicate;)Lsixtwo/oK;
      // 03e: goto 045
      // 041: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 044: athrow
      // 045: astore 5
      // 047: aload 5
      // 049: iload 3
      // 04a: ifne 061
      // 04d: ifnonnull 05f
      // 050: goto 057
      // 053: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 056: athrow
      // 057: getstatic sixtwo/rB.TfMBm Lsixtwo/rB;
      // 05a: areturn
      // 05b: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05e: athrow
      // 05f: aload 5
      // 061: instanceof sixtwo/oI
      // 064: iload 3
      // 065: ifne 0bf
      // 068: ifeq 0ba
      // 06b: goto 072
      // 06e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 071: athrow
      // 072: aload 5
      // 074: checkcast sixtwo/oI
      // 077: astore 6
      // 079: invokestatic sixtwo/rD.dlZ ()Lsixtwo/qJ;
      // 07c: aload 6
      // 07e: bipush 0
      // 07f: aload 0
      // 080: invokevirtual sixtwo/qJ.dbj (Lsixtwo/oI;ZLsixtwo/gg;)Z
      // 083: iload 3
      // 084: ifne 0a1
      // 087: ifeq 0b6
      // 08a: goto 091
      // 08d: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 090: athrow
      // 091: invokestatic sixtwo/rD.dlW ()Lsixtwo/qP;
      // 094: getstatic sixtwo/oT.UgZrs Lsixtwo/oT;
      // 097: invokevirtual sixtwo/qP.ddp (Lsixtwo/oT;)Z
      // 09a: goto 0a1
      // 09d: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a0: athrow
      // 0a1: ifeq 0ae
      // 0a4: getstatic sixtwo/rB.ahPNi Lsixtwo/rB;
      // 0a7: goto 0b1
      // 0aa: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ad: athrow
      // 0ae: getstatic sixtwo/rB.TfMBm Lsixtwo/rB;
      // 0b1: astore 7
      // 0b3: aload 7
      // 0b5: areturn
      // 0b6: getstatic sixtwo/rB.TfMBm Lsixtwo/rB;
      // 0b9: areturn
      // 0ba: aload 5
      // 0bc: instanceof sixtwo/oG
      // 0bf: iload 3
      // 0c0: ifne 0f5
      // 0c3: ifeq 0f2
      // 0c6: goto 0cd
      // 0c9: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cc: athrow
      // 0cd: invokestatic sixtwo/rD.dlW ()Lsixtwo/qP;
      // 0d0: getstatic sixtwo/oT.DpyXs Lsixtwo/oT;
      // 0d3: invokevirtual sixtwo/qP.ddp (Lsixtwo/oT;)Z
      // 0d6: ifeq 0ea
      // 0d9: goto 0e0
      // 0dc: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0df: athrow
      // 0e0: getstatic sixtwo/rB.ahPNi Lsixtwo/rB;
      // 0e3: goto 0ed
      // 0e6: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e9: athrow
      // 0ea: getstatic sixtwo/rB.TfMBm Lsixtwo/rB;
      // 0ed: astore 7
      // 0ef: aload 7
      // 0f1: areturn
      // 0f2: invokestatic sixtwo/iX.bxC ()Z
      // 0f5: iload 3
      // 0f6: ifne 12a
      // 0f9: ifne 119
      // 0fc: goto 103
      // 0ff: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 102: athrow
      // 103: aload 5
      // 105: aload 4
      // 107: invokestatic sixtwo/oR.cJW (Lsixtwo/oK;Lsixtwo/oK;)V
      // 10a: invokestatic sixtwo/rD.dma ()Lsixtwo/qN;
      // 10d: aload 0
      // 10e: invokevirtual sixtwo/qN.dcw (Ljava/lang/Object;)V
      // 111: getstatic sixtwo/rB.ahPNi Lsixtwo/rB;
      // 114: areturn
      // 115: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 118: athrow
      // 119: invokestatic sixtwo/rD.dma ()Lsixtwo/qN;
      // 11c: iload 3
      // 11d: ifne 130
      // 120: invokevirtual sixtwo/qN.dcy ()Z
      // 123: goto 12a
      // 126: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 129: athrow
      // 12a: ifne 134
      // 12d: invokestatic sixtwo/rD.dma ()Lsixtwo/qN;
      // 130: aload 0
      // 131: invokevirtual sixtwo/qN.dcv (Lsixtwo/gg;)V
      // 134: getstatic sixtwo/rB.HbZxW Lsixtwo/rB;
      // 137: areturn
      // 138: getstatic sixtwo/rB.iSmge Lsixtwo/rB;
      // 13b: areturn
   }

   public static int cKk(class_8051 var0) {
      long var1 = KOfQd ^ 29898316165983L;
      return cKl(var0, cKy<"q">(29454, 657699248679445945L ^ var1), cKy<"q">(27928, 6919923927504124844L ^ var1));
   }

   public static rB cKq(gg param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/oR.KOfQd J
      // 003: ldc2_w 37247635558244
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/oR.cKu ()I
      // 00b: invokestatic sixtwo/oR.cJO ()Lsixtwo/oJ;
      // 00e: astore 4
      // 010: istore 3
      // 011: aload 4
      // 013: iload 3
      // 014: ifeq 043
      // 017: getstatic net/minecraft/class_1802.field_8833 Lnet/minecraft/class_1792;
      // 01a: invokevirtual sixtwo/oJ.cIU (Lnet/minecraft/class_1792;)Z
      // 01d: ifne 125
      // 020: goto 027
      // 023: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 026: athrow
      // 027: invokestatic sixtwo/oP.cJm ()Lsixtwo/oQ;
      // 02a: invokestatic sixtwo/oP.cJs ()Lsixtwo/oQ;
      // 02d: invokevirtual sixtwo/oQ.cJF (Lsixtwo/oQ;)Lsixtwo/oQ;
      // 030: invokestatic sixtwo/oP.cJo ()Lsixtwo/oQ;
      // 033: invokevirtual sixtwo/oQ.cJF (Lsixtwo/oQ;)Lsixtwo/oQ;
      // 036: getstatic net/minecraft/class_1802.field_8833 Lnet/minecraft/class_1792;
      // 039: invokevirtual sixtwo/oQ.cJu (Lnet/minecraft/class_1792;)Lsixtwo/oK;
      // 03c: goto 043
      // 03f: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 042: athrow
      // 043: astore 5
      // 045: aload 5
      // 047: iload 3
      // 048: ifeq 05f
      // 04b: ifnonnull 05d
      // 04e: goto 055
      // 051: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 054: athrow
      // 055: getstatic sixtwo/rB.TfMBm Lsixtwo/rB;
      // 058: areturn
      // 059: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05c: athrow
      // 05d: aload 5
      // 05f: instanceof sixtwo/oI
      // 062: iload 3
      // 063: ifeq 0bd
      // 066: ifeq 0b8
      // 069: goto 070
      // 06c: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06f: athrow
      // 070: aload 5
      // 072: checkcast sixtwo/oI
      // 075: astore 6
      // 077: invokestatic sixtwo/rD.dlZ ()Lsixtwo/qJ;
      // 07a: aload 6
      // 07c: bipush 0
      // 07d: aload 0
      // 07e: invokevirtual sixtwo/qJ.dbj (Lsixtwo/oI;ZLsixtwo/gg;)Z
      // 081: iload 3
      // 082: ifeq 09f
      // 085: ifeq 0b4
      // 088: goto 08f
      // 08b: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08e: athrow
      // 08f: invokestatic sixtwo/rD.dlW ()Lsixtwo/qP;
      // 092: getstatic sixtwo/oT.UgZrs Lsixtwo/oT;
      // 095: invokevirtual sixtwo/qP.ddp (Lsixtwo/oT;)Z
      // 098: goto 09f
      // 09b: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09e: athrow
      // 09f: ifeq 0ac
      // 0a2: getstatic sixtwo/rB.ahPNi Lsixtwo/rB;
      // 0a5: goto 0af
      // 0a8: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ab: athrow
      // 0ac: getstatic sixtwo/rB.TfMBm Lsixtwo/rB;
      // 0af: astore 7
      // 0b1: aload 7
      // 0b3: areturn
      // 0b4: getstatic sixtwo/rB.TfMBm Lsixtwo/rB;
      // 0b7: areturn
      // 0b8: aload 5
      // 0ba: instanceof sixtwo/oG
      // 0bd: iload 3
      // 0be: ifeq 101
      // 0c1: ifeq 0f0
      // 0c4: goto 0cb
      // 0c7: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ca: athrow
      // 0cb: invokestatic sixtwo/rD.dlW ()Lsixtwo/qP;
      // 0ce: getstatic sixtwo/oT.DpyXs Lsixtwo/oT;
      // 0d1: invokevirtual sixtwo/qP.ddp (Lsixtwo/oT;)Z
      // 0d4: ifeq 0e8
      // 0d7: goto 0de
      // 0da: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dd: athrow
      // 0de: getstatic sixtwo/rB.ahPNi Lsixtwo/rB;
      // 0e1: goto 0eb
      // 0e4: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e7: athrow
      // 0e8: getstatic sixtwo/rB.TfMBm Lsixtwo/rB;
      // 0eb: astore 7
      // 0ed: aload 7
      // 0ef: areturn
      // 0f0: invokestatic sixtwo/rD.dma ()Lsixtwo/qN;
      // 0f3: iload 3
      // 0f4: ifeq 11d
      // 0f7: invokevirtual sixtwo/qN.dcy ()Z
      // 0fa: goto 101
      // 0fd: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 100: athrow
      // 101: ifne 113
      // 104: invokestatic sixtwo/rD.dma ()Lsixtwo/qN;
      // 107: aload 0
      // 108: invokevirtual sixtwo/qN.dcv (Lsixtwo/gg;)V
      // 10b: getstatic sixtwo/rB.HbZxW Lsixtwo/rB;
      // 10e: areturn
      // 10f: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 112: athrow
      // 113: aload 5
      // 115: aload 4
      // 117: invokestatic sixtwo/oR.cJW (Lsixtwo/oK;Lsixtwo/oK;)V
      // 11a: invokestatic sixtwo/rD.dma ()Lsixtwo/qN;
      // 11d: aload 0
      // 11e: invokevirtual sixtwo/qN.dcw (Ljava/lang/Object;)V
      // 121: getstatic sixtwo/rB.ahPNi Lsixtwo/rB;
      // 124: areturn
      // 125: getstatic sixtwo/rB.iSmge Lsixtwo/rB;
      // 128: areturn
   }

   private static int cKx(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cKw(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static LinkedList<Integer> cKn(class_8051 param0, int param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oR.KOfQd J
      // 03: ldc2_w 31927234328120
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/oR.cKu ()I
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 11: invokevirtual net/minecraft/class_746.method_31548 ()Lnet/minecraft/class_1661;
      // 14: astore 6
      // 16: new java/util/ArrayList
      // 19: dup
      // 1a: invokespecial java/util/ArrayList.<init> ()V
      // 1d: astore 7
      // 1f: istore 5
      // 21: iload 1
      // 22: istore 8
      // 24: iload 8
      // 26: iload 2
      // 27: if_icmpgt 8b
      // 2a: aload 6
      // 2c: iload 8
      // 2e: invokevirtual net/minecraft/class_1661.method_5438 (I)Lnet/minecraft/class_1799;
      // 31: astore 9
      // 33: iload 5
      // 35: ifeq 99
      // 38: iload 5
      // 3a: ifeq 86
      // 3d: goto 44
      // 40: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 9
      // 46: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 49: ifne 83
      // 4c: goto 53
      // 4f: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: aload 9
      // 55: aload 0
      // 56: invokestatic sixtwo/jc.bza (Lnet/minecraft/class_1799;Lnet/minecraft/class_8051;)Z
      // 59: iload 5
      // 5b: ifeq 82
      // 5e: goto 65
      // 61: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: ifeq 83
      // 68: goto 6f
      // 6b: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: aload 7
      // 71: iload 8
      // 73: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 76: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 7b: goto 82
      // 7e: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 81: athrow
      // 82: pop
      // 83: iinc 8 1
      // 86: iload 5
      // 88: ifne 24
      // 8b: aload 7
      // 8d: aload 6
      // 8f: invokedynamic compare (Lnet/minecraft/class_1661;)Ljava/util/Comparator; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)I, sixtwo/oR.cKr (Lnet/minecraft/class_1661;Ljava/lang/Integer;Ljava/lang/Integer;)I, (Ljava/lang/Integer;Ljava/lang/Integer;)I ]
      // 94: invokeinterface java/util/List.sort (Ljava/util/Comparator;)V 2
      // 99: new java/util/LinkedList
      // 9c: dup
      // 9d: aload 7
      // 9f: invokespecial java/util/LinkedList.<init> (Ljava/util/Collection;)V
      // a2: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // a5: ifnonnull b7
      // a8: iinc 5 1
      // ab: iload 5
      // ad: invokestatic sixtwo/oR.cKs (I)V
      // b0: goto b7
      // b3: invokestatic sixtwo/oR.cKv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b6: athrow
      // b7: areturn
   }
}
