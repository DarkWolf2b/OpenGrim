package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.function.Predicate;
import java.util.function.ToDoubleFunction;
import net.minecraft.class_1792;
import net.minecraft.class_1799;

public class oQ<T extends oK> {
   protected final List<T> AOxby;
   private static String[] LjINO;
   private static final long dTuwN = gb.aYR(-305250295011513895L, -4162370041205828697L, MethodHandles.lookup().lookupClass()).a(122341747616617L);

   public T cJu(class_1792 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 90075126945037
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 0f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14: astore 5
      // 16: astore 4
      // 18: aload 5
      // 1a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1f: ifeq 52
      // 22: aload 5
      // 24: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 29: checkcast sixtwo/oK
      // 2c: astore 6
      // 2e: aload 6
      // 30: aload 4
      // 32: ifnull 4c
      // 35: aload 1
      // 36: invokevirtual sixtwo/oK.cIU (Lnet/minecraft/class_1792;)Z
      // 39: ifeq 4d
      // 3c: goto 43
      // 3f: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 6
      // 45: goto 4c
      // 48: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: areturn
      // 4d: aload 4
      // 4f: ifnonnull 18
      // 52: aconst_null
      // 53: areturn
   }

   public oQ(List<T> var1) {
      this.AOxby = var1;
   }

   static {
      if (cJI() == null) {
         cJH(new String[4]);
      }
   }

   public T cJx(Predicate<class_1799> param1, ToDoubleFunction<class_1799> param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 85427670663315
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0b: aconst_null
      // 0c: astore 6
      // 0e: ldc2_w Infinity
      // 11: dstore 7
      // 13: astore 5
      // 15: aload 0
      // 16: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 19: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1e: astore 9
      // 20: aload 9
      // 22: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 27: ifeq a3
      // 2a: aload 9
      // 2c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 31: checkcast sixtwo/oK
      // 34: astore 10
      // 36: aload 10
      // 38: aload 5
      // 3a: ifnull a5
      // 3d: invokevirtual sixtwo/oK.cIu ()Lnet/minecraft/class_1799;
      // 40: astore 11
      // 42: aload 1
      // 43: aload 11
      // 45: invokeinterface java/util/function/Predicate.test (Ljava/lang/Object;)Z 2
      // 4a: ifne 59
      // 4d: aload 5
      // 4f: ifnonnull 20
      // 52: goto 59
      // 55: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 58: athrow
      // 59: aload 2
      // 5a: aload 11
      // 5c: invokeinterface java/util/function/ToDoubleFunction.applyAsDouble (Ljava/lang/Object;)D 2
      // 61: dstore 12
      // 63: aload 6
      // 65: aload 5
      // 67: ifnull 9c
      // 6a: ifnull 8f
      // 6d: goto 74
      // 70: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 73: athrow
      // 74: dload 12
      // 76: aload 5
      // 78: ifnull 98
      // 7b: goto 82
      // 7e: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 81: athrow
      // 82: dload 7
      // 84: dcmpg
      // 85: ifge 9e
      // 88: goto 8f
      // 8b: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8e: athrow
      // 8f: dload 12
      // 91: goto 98
      // 94: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 97: athrow
      // 98: dstore 7
      // 9a: aload 10
      // 9c: astore 6
      // 9e: aload 5
      // a0: ifnonnull 20
      // a3: aload 6
      // a5: areturn
   }

   public List<class_1799> cJE() {
      long var1 = dTuwN ^ 109444835202911L;
      ArrayList var4 = new ArrayList(this.AOxby.size());
      String[] var10000 = cJI();
      Iterator var5 = this.AOxby.iterator();
      String[] var3 = var10000;

      while (true) {
         if (var5.hasNext()) {
            oK var6 = (oK)var5.next();

            try {
               var9 = var4;
               if (var3 == null) {
                  break;
               }

               var4.add(var6.cIu());
               if (var3 != null) {
                  continue;
               }
            } catch (MatchException var8) {
               throw cJJ(var8);
            }
         }

         var9 = var4;
         break;
      }

      try {
         if (iS.bwL() == null) {
            cJH(new String[3]);
         }

         return var9;
      } catch (MatchException var7) {
         throw cJJ(var7);
      }
   }

   public oQ<oK> cJF(oQ<? extends oK> var1) {
      long var2 = dTuwN ^ 72440613265518L;
      String[] var10000 = cJI();
      ArrayList var5 = new ArrayList(this.AOxby.size() + var1.AOxby.size());
      var5.addAll(this.AOxby);
      String[] var4 = var10000;

      try {
         var5.addAll(var1.AOxby);
         oQ var7 = new oQ(var5);
         if (var4 == null) {
            iS.bwK("GJxwec");
         }

         return var7;
      } catch (MatchException var6) {
         throw cJJ(var6);
      }
   }

   public static void cJH(String[] var0) {
      LjINO = var0;
   }

   public T cJw(ToDoubleFunction<class_1799> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 61796831724743
      // 06: lxor
      // 07: lstore 2
      // 08: aconst_null
      // 09: astore 5
      // 0b: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0e: ldc2_w Infinity
      // 11: dstore 6
      // 13: astore 4
      // 15: aload 0
      // 16: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 19: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1e: astore 8
      // 20: aload 8
      // 22: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 27: ifeq 93
      // 2a: aload 8
      // 2c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 31: checkcast sixtwo/oK
      // 34: astore 9
      // 36: aload 9
      // 38: invokevirtual sixtwo/oK.cIu ()Lnet/minecraft/class_1799;
      // 3b: astore 10
      // 3d: aload 1
      // 3e: aload 10
      // 40: invokeinterface java/util/function/ToDoubleFunction.applyAsDouble (Ljava/lang/Object;)D 2
      // 45: dstore 11
      // 47: aload 5
      // 49: aload 4
      // 4b: ifnull 95
      // 4e: aload 4
      // 50: ifnull 8c
      // 53: goto 5a
      // 56: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: ifnull 7f
      // 5d: goto 64
      // 60: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: dload 11
      // 66: aload 4
      // 68: ifnull 88
      // 6b: goto 72
      // 6e: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: dload 6
      // 74: dcmpg
      // 75: ifge 8e
      // 78: goto 7f
      // 7b: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: dload 11
      // 81: goto 88
      // 84: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: dstore 6
      // 8a: aload 9
      // 8c: astore 5
      // 8e: aload 4
      // 90: ifnonnull 20
      // 93: aload 5
      // 95: areturn
   }

   public static String[] cJI() {
      return LjINO;
   }

   public boolean cJC(Predicate<class_1799> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 72428976123707
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 0f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14: astore 5
      // 16: astore 4
      // 18: aload 5
      // 1a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1f: ifeq 56
      // 22: aload 5
      // 24: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 29: checkcast sixtwo/oK
      // 2c: astore 6
      // 2e: aload 6
      // 30: aload 1
      // 31: invokevirtual sixtwo/oK.cIV (Ljava/util/function/Predicate;)Z
      // 34: aload 4
      // 36: ifnull 57
      // 39: aload 4
      // 3b: ifnull 50
      // 3e: goto 45
      // 41: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: ifeq 51
      // 48: goto 4f
      // 4b: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: bipush 1
      // 50: ireturn
      // 51: aload 4
      // 53: ifnonnull 18
      // 56: bipush 0
      // 57: ireturn
   }

   public int cJD(class_1792 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 112426200915027
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0b: bipush 0
      // 0c: istore 5
      // 0e: astore 4
      // 10: aload 0
      // 11: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 14: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 19: astore 6
      // 1b: aload 6
      // 1d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 22: ifeq 6b
      // 25: aload 6
      // 27: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 2c: checkcast sixtwo/oK
      // 2f: astore 7
      // 31: aload 7
      // 33: aload 1
      // 34: invokevirtual sixtwo/oK.cIU (Lnet/minecraft/class_1792;)Z
      // 37: aload 4
      // 39: ifnull 6d
      // 3c: aload 4
      // 3e: ifnull 64
      // 41: goto 48
      // 44: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: ifeq 66
      // 4b: goto 52
      // 4e: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: iload 5
      // 54: aload 7
      // 56: invokevirtual sixtwo/oK.cIu ()Lnet/minecraft/class_1799;
      // 59: invokevirtual net/minecraft/class_1799.method_7947 ()I
      // 5c: iadd
      // 5d: goto 64
      // 60: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: istore 5
      // 66: aload 4
      // 68: ifnonnull 1b
      // 6b: iload 5
      // 6d: ireturn
   }

   public oQ<oK> cJG(oK var1) {
      ArrayList var2 = new ArrayList<>(this.AOxby);
      var2.add(var1);
      return new oQ<>(var2);
   }

   public List<T> cJz(Predicate<class_1799> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 85077989477238
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0b: new java/util/ArrayList
      // 0e: dup
      // 0f: invokespecial java/util/ArrayList.<init> ()V
      // 12: astore 5
      // 14: aload 0
      // 15: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 18: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1d: astore 6
      // 1f: astore 4
      // 21: aload 6
      // 23: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 28: ifeq 60
      // 2b: aload 6
      // 2d: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 32: checkcast sixtwo/oK
      // 35: astore 7
      // 37: aload 7
      // 39: aload 1
      // 3a: invokevirtual sixtwo/oK.cIV (Ljava/util/function/Predicate;)Z
      // 3d: aload 4
      // 3f: ifnull 5a
      // 42: ifeq 5b
      // 45: goto 4c
      // 48: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: aload 5
      // 4e: aload 7
      // 50: invokevirtual java/util/ArrayList.add (Ljava/lang/Object;)Z
      // 53: goto 5a
      // 56: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: pop
      // 5b: aload 4
      // 5d: ifnonnull 21
      // 60: aload 5
      // 62: areturn
   }

   private static MatchException cJJ(MatchException var0) {
      return var0;
   }

   public boolean cJB(class_1792 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 52341545600010
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 0f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14: astore 5
      // 16: astore 4
      // 18: aload 5
      // 1a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1f: ifeq 56
      // 22: aload 5
      // 24: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 29: checkcast sixtwo/oK
      // 2c: astore 6
      // 2e: aload 6
      // 30: aload 1
      // 31: invokevirtual sixtwo/oK.cIU (Lnet/minecraft/class_1792;)Z
      // 34: aload 4
      // 36: ifnull 57
      // 39: aload 4
      // 3b: ifnull 50
      // 3e: goto 45
      // 41: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: ifeq 51
      // 48: goto 4f
      // 4b: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: bipush 1
      // 50: ireturn
      // 51: aload 4
      // 53: ifnonnull 18
      // 56: bipush 0
      // 57: ireturn
   }

   public T cJA() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 66730681330586
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 0f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14: astore 4
      // 16: astore 3
      // 17: aload 4
      // 19: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1e: ifeq 4e
      // 21: aload 4
      // 23: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 28: checkcast sixtwo/oK
      // 2b: astore 5
      // 2d: aload 5
      // 2f: aload 3
      // 30: ifnull 49
      // 33: invokevirtual sixtwo/oK.cIT ()Z
      // 36: ifeq 4a
      // 39: goto 40
      // 3c: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: aload 5
      // 42: goto 49
      // 45: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: areturn
      // 4a: aload 3
      // 4b: ifnonnull 17
      // 4e: aconst_null
      // 4f: areturn
   }

   public T cJv(Predicate<class_1799> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 94551289143412
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 0f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14: astore 5
      // 16: astore 4
      // 18: aload 5
      // 1a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1f: ifeq 52
      // 22: aload 5
      // 24: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 29: checkcast sixtwo/oK
      // 2c: astore 6
      // 2e: aload 6
      // 30: aload 4
      // 32: ifnull 4c
      // 35: aload 1
      // 36: invokevirtual sixtwo/oK.cIV (Ljava/util/function/Predicate;)Z
      // 39: ifeq 4d
      // 3c: goto 43
      // 3f: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 6
      // 45: goto 4c
      // 48: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: areturn
      // 4d: aload 4
      // 4f: ifnonnull 18
      // 52: aconst_null
      // 53: areturn
   }

   public List<T> cJy(class_1792 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oQ.dTuwN J
      // 03: ldc2_w 140025359947466
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oQ.cJI ()[Ljava/lang/String;
      // 0b: new java/util/ArrayList
      // 0e: dup
      // 0f: invokespecial java/util/ArrayList.<init> ()V
      // 12: astore 5
      // 14: astore 4
      // 16: aload 0
      // 17: getfield sixtwo/oQ.AOxby Ljava/util/List;
      // 1a: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1f: astore 6
      // 21: aload 6
      // 23: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 28: ifeq 60
      // 2b: aload 6
      // 2d: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 32: checkcast sixtwo/oK
      // 35: astore 7
      // 37: aload 7
      // 39: aload 1
      // 3a: invokevirtual sixtwo/oK.cIU (Lnet/minecraft/class_1792;)Z
      // 3d: aload 4
      // 3f: ifnull 5a
      // 42: ifeq 5b
      // 45: goto 4c
      // 48: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: aload 5
      // 4e: aload 7
      // 50: invokevirtual java/util/ArrayList.add (Ljava/lang/Object;)Z
      // 53: goto 5a
      // 56: invokestatic sixtwo/oQ.cJJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: pop
      // 5b: aload 4
      // 5d: ifnonnull 21
      // 60: aload 5
      // 62: areturn
   }
}
