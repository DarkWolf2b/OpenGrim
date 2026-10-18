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
import net.minecraft.class_10055;
import net.minecraft.class_243;
import net.minecraft.class_2960;
import net.minecraft.class_3879;
import net.minecraft.class_4587;
import net.minecraft.class_563;
import net.minecraft.class_572;
import net.minecraft.class_591;
import net.minecraft.class_630;
import net.minecraft.class_742;
import net.minecraft.class_745;
import net.minecraft.class_7920;
import net.minecraft.class_9799;
import net.minecraft.class_9801;
import net.minecraft.class_9950;

public class kt {
   private final rg QrGyy;
   private final ku SAPZa;
   private class_243 OmUIx;
   private class_243 UScrC;
   private class_745 tLzLU;
   private class_591 TRGbg;
   private class_591 HRWqQ;
   private class_9950 LOuMD;
   private class_9950 OhmsV;
   private class_563 bAiqA;
   private class_563 Pdzhn;
   private class_7920 CRBkx;
   private ks SueiO;
   private kw KOcUS;
   private jC fKqfS;
   private static final class_2960 mCJQZ;
   private static boolean vuFhM;
   private static final long Iousr = gb.aYR(2155236003250911185L, 1916641638048172439L, MethodHandles.lookup().lookupClass()).a(273694774512790L);
   private static final String[] wINKP;
   private static final String[] KQBfh;
   private static final Map koOhD = new HashMap(13);
   private static final long[] HgRhM;
   private static final Integer[] jmxFQ;
   private static final Map SwLAk;

   public static boolean bRw() {
      return vuFhM;
   }

   public boolean bQX() {
      return true;
   }

   public void bRa(class_243 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 130290980479270
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kt.bRx ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifeq 22
      // 13: ifnonnull 1e
      // 16: goto 1d
      // 19: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: return
      // 1e: aload 0
      // 1f: getfield sixtwo/kt.UScrC Lnet/minecraft/class_243;
      // 22: iload 4
      // 24: ifeq 4b
      // 27: ifnonnull 3b
      // 2a: goto 31
      // 2d: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 30: athrow
      // 31: aload 0
      // 32: aload 1
      // 33: invokevirtual sixtwo/kt.bQY (Lnet/minecraft/class_243;)V
      // 36: return
      // 37: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3a: athrow
      // 3b: aload 0
      // 3c: iload 4
      // 3e: ifeq 64
      // 41: getfield sixtwo/kt.UScrC Lnet/minecraft/class_243;
      // 44: goto 4b
      // 47: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4a: athrow
      // 4b: aload 1
      // 4c: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 4f: ldc2_w 1.0E-6
      // 52: dcmpg
      // 53: ifgt 5b
      // 56: return
      // 57: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 5a: athrow
      // 5b: aload 0
      // 5c: aload 0
      // 5d: getfield sixtwo/kt.UScrC Lnet/minecraft/class_243;
      // 60: putfield sixtwo/kt.OmUIx Lnet/minecraft/class_243;
      // 63: aload 0
      // 64: aload 1
      // 65: putfield sixtwo/kt.UScrC Lnet/minecraft/class_243;
      // 68: return
   }

   public void bQZ(class_243 var1, class_742 var2) {
      this.bQY(var1);
      this.bRr(var2);
   }

   public static boolean bRx() {
      boolean var0 = bRw();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw bRy(var1);
      }
   }

   public kt bQV(kw var1) {
      long var2 = Iousr ^ 5174461403348L;
      boolean var4 = bRx();

      kt var10000;
      kw var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (!var4) {
                  break label22;
               }

               if (var1 == null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw bRy(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = kw.bRK();
      }

      var10000.KOcUS = var10001;
      return this;
   }

   private void bRr(class_742 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 135187773713027
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kt.bRx ()Z
      // 0b: istore 4
      // 0d: iload 4
      // 0f: ifeq 2a
      // 12: aload 1
      // 13: ifnonnull 22
      // 16: goto 1d
      // 19: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: return
      // 1e: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 21: athrow
      // 22: aload 0
      // 23: aload 1
      // 24: invokestatic sixtwo/ks.capture (Lnet/minecraft/class_742;)Lsixtwo/ks;
      // 27: putfield sixtwo/kt.SueiO Lsixtwo/ks;
      // 2a: return
   }

   private boolean bRd(class_742 param1, class_243 param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 111479303851188
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/kt.bRw ()Z
      // 0c: istore 6
      // 0e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 11: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 14: invokevirtual net/minecraft/class_315.method_31044 ()Lnet/minecraft/class_5498;
      // 17: invokevirtual net/minecraft/class_5498.method_31034 ()Z
      // 1a: iload 6
      // 1c: ifne 4c
      // 1f: ifeq 4b
      // 22: goto 29
      // 25: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 28: athrow
      // 29: aload 2
      // 2a: aload 1
      // 2b: invokevirtual net/minecraft/class_742.method_73189 ()Lnet/minecraft/class_243;
      // 2e: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 31: ldc2_w 1.0E-6
      // 34: dcmpl
      // 35: iload 6
      // 37: ifne 65
      // 3a: goto 41
      // 3d: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 40: athrow
      // 41: ifle 4d
      // 44: goto 4b
      // 47: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4a: athrow
      // 4b: bipush 0
      // 4c: ireturn
      // 4d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 50: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 53: invokevirtual net/minecraft/class_757.method_19418 ()Lnet/minecraft/class_4184;
      // 56: invokevirtual net/minecraft/class_4184.method_71156 ()Lnet/minecraft/class_243;
      // 59: aload 1
      // 5a: fload 3
      // 5b: invokevirtual net/minecraft/class_742.method_5836 (F)Lnet/minecraft/class_243;
      // 5e: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 61: ldc2_w 1.0E-6
      // 64: dcmpg
      // 65: iload 6
      // 67: ifne 75
      // 6a: ifgt 78
      // 6d: goto 74
      // 70: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 73: athrow
      // 74: bipush 1
      // 75: goto 79
      // 78: bipush 0
      // 79: ireturn
   }

   private void bRn(ks param1, class_243 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kt.Iousr J
      // 003: ldc2_w 139196573203269
      // 006: lxor
      // 007: lstore 3
      // 008: aload 0
      // 009: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 00c: aload 2
      // 00d: invokevirtual net/minecraft/class_745.method_33574 (Lnet/minecraft/class_243;)V
      // 010: aload 0
      // 011: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 014: aload 2
      // 015: getfield net/minecraft/class_243.field_1352 D
      // 018: putfield net/minecraft/class_745.field_6014 D
      // 01b: aload 0
      // 01c: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 01f: aload 2
      // 020: getfield net/minecraft/class_243.field_1351 D
      // 023: putfield net/minecraft/class_745.field_6036 D
      // 026: aload 0
      // 027: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 02a: aload 2
      // 02b: getfield net/minecraft/class_243.field_1350 D
      // 02e: putfield net/minecraft/class_745.field_5969 D
      // 031: aload 0
      // 032: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 035: aload 1
      // 036: invokevirtual sixtwo/ks.yRot ()F
      // 039: invokevirtual net/minecraft/class_745.method_36456 (F)V
      // 03c: aload 0
      // 03d: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 040: aload 1
      // 041: invokevirtual sixtwo/ks.xRot ()F
      // 044: invokevirtual net/minecraft/class_745.method_36457 (F)V
      // 047: aload 0
      // 048: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 04b: aload 1
      // 04c: invokevirtual sixtwo/ks.yRotO ()F
      // 04f: putfield net/minecraft/class_745.field_5982 F
      // 052: aload 0
      // 053: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 056: aload 1
      // 057: invokevirtual sixtwo/ks.xRotO ()F
      // 05a: putfield net/minecraft/class_745.field_6004 F
      // 05d: aload 0
      // 05e: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 061: aload 1
      // 062: invokevirtual sixtwo/ks.yBodyRot ()F
      // 065: putfield net/minecraft/class_745.field_6283 F
      // 068: aload 0
      // 069: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 06c: aload 1
      // 06d: invokevirtual sixtwo/ks.yBodyRotO ()F
      // 070: putfield net/minecraft/class_745.field_6220 F
      // 073: aload 0
      // 074: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 077: aload 1
      // 078: invokevirtual sixtwo/ks.yHeadRot ()F
      // 07b: putfield net/minecraft/class_745.field_6241 F
      // 07e: invokestatic sixtwo/kt.bRx ()Z
      // 081: aload 0
      // 082: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 085: aload 1
      // 086: invokevirtual sixtwo/ks.yHeadRotO ()F
      // 089: putfield net/minecraft/class_745.field_6259 F
      // 08c: aload 0
      // 08d: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 090: aload 1
      // 091: invokevirtual sixtwo/ks.hurtTime ()I
      // 094: putfield net/minecraft/class_745.field_6235 I
      // 097: aload 0
      // 098: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 09b: aload 1
      // 09c: invokevirtual sixtwo/ks.deathTime ()I
      // 09f: putfield net/minecraft/class_745.field_6213 I
      // 0a2: aload 0
      // 0a3: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 0a6: aload 1
      // 0a7: invokevirtual sixtwo/ks.pose ()Lnet/minecraft/class_4050;
      // 0aa: invokevirtual net/minecraft/class_745.method_18380 (Lnet/minecraft/class_4050;)V
      // 0ad: aload 0
      // 0ae: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 0b1: aload 1
      // 0b2: invokevirtual sixtwo/ks.shiftDown ()Z
      // 0b5: invokevirtual net/minecraft/class_745.method_5660 (Z)V
      // 0b8: aload 0
      // 0b9: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 0bc: aload 1
      // 0bd: invokevirtual sixtwo/ks.sprinting ()Z
      // 0c0: invokevirtual net/minecraft/class_745.method_5728 (Z)V
      // 0c3: aload 0
      // 0c4: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 0c7: aload 1
      // 0c8: invokevirtual sixtwo/ks.onGround ()Z
      // 0cb: invokevirtual net/minecraft/class_745.method_24830 (Z)V
      // 0ce: aload 0
      // 0cf: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 0d2: aload 1
      // 0d3: invokevirtual sixtwo/ks.deltaMovement ()Lnet/minecraft/class_243;
      // 0d6: invokevirtual net/minecraft/class_745.method_18799 (Lnet/minecraft/class_243;)V
      // 0d9: aload 0
      // 0da: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 0dd: getstatic net/minecraft/class_1268.field_5808 Lnet/minecraft/class_1268;
      // 0e0: aload 1
      // 0e1: invokevirtual sixtwo/ks.mainHand ()Lnet/minecraft/class_1799;
      // 0e4: invokevirtual net/minecraft/class_1799.method_7972 ()Lnet/minecraft/class_1799;
      // 0e7: invokevirtual net/minecraft/class_745.method_6122 (Lnet/minecraft/class_1268;Lnet/minecraft/class_1799;)V
      // 0ea: aload 0
      // 0eb: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 0ee: getstatic net/minecraft/class_1268.field_5810 Lnet/minecraft/class_1268;
      // 0f1: aload 1
      // 0f2: invokevirtual sixtwo/ks.offHand ()Lnet/minecraft/class_1799;
      // 0f5: invokevirtual net/minecraft/class_1799.method_7972 ()Lnet/minecraft/class_1799;
      // 0f8: invokevirtual net/minecraft/class_745.method_6122 (Lnet/minecraft/class_1268;Lnet/minecraft/class_1799;)V
      // 0fb: aload 0
      // 0fc: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 0ff: getstatic net/minecraft/class_1304.field_6174 Lnet/minecraft/class_1304;
      // 102: aload 1
      // 103: invokevirtual sixtwo/ks.chestEquipment ()Lnet/minecraft/class_1799;
      // 106: invokevirtual net/minecraft/class_1799.method_7972 ()Lnet/minecraft/class_1799;
      // 109: invokevirtual net/minecraft/class_745.method_5673 (Lnet/minecraft/class_1304;Lnet/minecraft/class_1799;)V
      // 10c: aload 0
      // 10d: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 110: getfield net/minecraft/class_745.field_42108 Lnet/minecraft/class_8080;
      // 113: checkcast mixin/accessors/WalkAnimationStateAccessor
      // 116: astore 6
      // 118: aload 0
      // 119: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 11c: getfield net/minecraft/class_745.field_42108 Lnet/minecraft/class_8080;
      // 11f: aload 1
      // 120: invokevirtual sixtwo/ks.walkAnimationSpeed ()F
      // 123: invokevirtual net/minecraft/class_8080.method_48567 (F)V
      // 126: istore 5
      // 128: aload 6
      // 12a: aload 1
      // 12b: invokevirtual sixtwo/ks.walkAnimationPos ()F
      // 12e: invokeinterface mixin/accessors/WalkAnimationStateAccessor.setPosition (F)V 2
      // 133: aload 0
      // 134: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 137: aload 1
      // 138: iload 5
      // 13a: ifeq 155
      // 13d: invokevirtual sixtwo/ks.fallFlying ()Z
      // 140: ifeq 154
      // 143: goto 14a
      // 146: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 149: athrow
      // 14a: getstatic net/minecraft/class_4050.field_18077 Lnet/minecraft/class_4050;
      // 14d: goto 158
      // 150: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 153: athrow
      // 154: aload 1
      // 155: invokevirtual sixtwo/ks.pose ()Lnet/minecraft/class_4050;
      // 158: invokevirtual net/minecraft/class_745.method_18380 (Lnet/minecraft/class_4050;)V
      // 15b: aload 1
      // 15c: invokevirtual sixtwo/ks.fallFlying ()Z
      // 15f: iload 5
      // 161: ifeq 18f
      // 164: ifeq 181
      // 167: goto 16e
      // 16a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 16d: athrow
      // 16e: aload 0
      // 16f: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 172: invokevirtual net/minecraft/class_745.method_23669 ()V
      // 175: iload 5
      // 177: ifne 1ac
      // 17a: goto 181
      // 17d: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 180: athrow
      // 181: aload 0
      // 182: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 185: invokevirtual net/minecraft/class_745.method_6128 ()Z
      // 188: goto 18f
      // 18b: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 18e: athrow
      // 18f: iload 5
      // 191: ifeq 1b0
      // 194: ifeq 1ac
      // 197: goto 19e
      // 19a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 19d: athrow
      // 19e: aload 0
      // 19f: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 1a2: invokevirtual net/minecraft/class_745.method_66281 ()V
      // 1a5: goto 1ac
      // 1a8: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1ab: athrow
      // 1ac: aload 1
      // 1ad: invokevirtual sixtwo/ks.usingItem ()Z
      // 1b0: iload 5
      // 1b2: ifeq 1f0
      // 1b5: ifeq 1d6
      // 1b8: goto 1bf
      // 1bb: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1be: athrow
      // 1bf: aload 0
      // 1c0: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 1c3: aload 1
      // 1c4: invokevirtual sixtwo/ks.usedItemHand ()Lnet/minecraft/class_1268;
      // 1c7: invokevirtual net/minecraft/class_745.method_6019 (Lnet/minecraft/class_1268;)V
      // 1ca: iload 5
      // 1cc: ifne 201
      // 1cf: goto 1d6
      // 1d2: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d5: athrow
      // 1d6: aload 0
      // 1d7: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 1da: iload 5
      // 1dc: ifeq 1fe
      // 1df: goto 1e6
      // 1e2: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1e5: athrow
      // 1e6: invokevirtual net/minecraft/class_745.method_6115 ()Z
      // 1e9: goto 1f0
      // 1ec: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1ef: athrow
      // 1f0: ifeq 201
      // 1f3: aload 0
      // 1f4: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 1f7: goto 1fe
      // 1fa: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1fd: athrow
      // 1fe: invokevirtual net/minecraft/class_745.method_6021 ()V
      // 201: return
   }

   protected kw bQW() {
      return this.KOcUS;
   }

   private static Throwable bRy(Throwable var0) {
      return var0;
   }

   public void bQQ(class_4587 param1, float param2, class_742 param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kt.Iousr J
      // 003: ldc2_w 103812271761920
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/kt.bRx ()Z
      // 00c: istore 6
      // 00e: aload 0
      // 00f: iload 6
      // 011: ifeq 027
      // 014: invokevirtual sixtwo/kt.bQX ()Z
      // 017: ifne 026
      // 01a: goto 021
      // 01d: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 020: athrow
      // 021: return
      // 022: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 025: athrow
      // 026: aload 0
      // 027: invokevirtual sixtwo/kt.bRc ()Lnet/minecraft/class_243;
      // 02a: astore 7
      // 02c: aload 1
      // 02d: ifnull 047
      // 030: aload 3
      // 031: ifnull 047
      // 034: goto 03b
      // 037: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 03a: athrow
      // 03b: aload 7
      // 03d: ifnonnull 04c
      // 040: goto 047
      // 043: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 046: athrow
      // 047: return
      // 048: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 04b: athrow
      // 04c: aload 0
      // 04d: iload 6
      // 04f: ifeq 069
      // 052: aload 3
      // 053: aload 7
      // 055: fload 2
      // 056: invokevirtual sixtwo/kt.bRd (Lnet/minecraft/class_742;Lnet/minecraft/class_243;F)Z
      // 059: ifeq 068
      // 05c: goto 063
      // 05f: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 062: athrow
      // 063: return
      // 064: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 067: athrow
      // 068: aload 0
      // 069: iload 6
      // 06b: ifeq 086
      // 06e: getfield sixtwo/kt.SAPZa Lsixtwo/ku;
      // 071: getstatic sixtwo/ku.qnXgu Lsixtwo/ku;
      // 074: if_acmpne 0a6
      // 077: goto 07e
      // 07a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 07d: athrow
      // 07e: aload 0
      // 07f: goto 086
      // 082: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 085: athrow
      // 086: getfield sixtwo/kt.SueiO Lsixtwo/ks;
      // 089: iload 6
      // 08b: ifeq 0a3
      // 08e: ifnull 0a6
      // 091: goto 098
      // 094: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 097: athrow
      // 098: aload 0
      // 099: getfield sixtwo/kt.SueiO Lsixtwo/ks;
      // 09c: goto 0a3
      // 09f: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0a2: athrow
      // 0a3: goto 0aa
      // 0a6: aload 3
      // 0a7: invokestatic sixtwo/ks.capture (Lnet/minecraft/class_742;)Lsixtwo/ks;
      // 0aa: astore 8
      // 0ac: aload 0
      // 0ad: aload 8
      // 0af: invokevirtual sixtwo/ks.modelType ()Lnet/minecraft/class_7920;
      // 0b2: invokevirtual sixtwo/kt.bRm (Lnet/minecraft/class_7920;)V
      // 0b5: aload 0
      // 0b6: aload 8
      // 0b8: aload 7
      // 0ba: invokevirtual sixtwo/kt.bRn (Lsixtwo/ks;Lnet/minecraft/class_243;)V
      // 0bd: iload 6
      // 0bf: ifeq 117
      // 0c2: getstatic sixtwo/kt$uj.HbUxc [I
      // 0c5: aload 0
      // 0c6: getfield sixtwo/kt.KOcUS Lsixtwo/kw;
      // 0c9: invokevirtual sixtwo/kw.bRX ()Lsixtwo/kv;
      // 0cc: invokevirtual sixtwo/kv.ordinal ()I
      // 0cf: iaload
      // 0d0: tableswitch 157 1 3 32 76 106
      // 0ec: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ef: athrow
      // 0f0: aload 0
      // 0f1: aload 1
      // 0f2: fload 2
      // 0f3: aload 8
      // 0f5: aload 8
      // 0f7: invokevirtual sixtwo/ks.texture ()Lnet/minecraft/class_2960;
      // 0fa: aload 8
      // 0fc: invokevirtual sixtwo/ks.capeTexture ()Lnet/minecraft/class_2960;
      // 0ff: aload 0
      // 100: getfield sixtwo/kt.KOcUS Lsixtwo/kw;
      // 103: invokevirtual sixtwo/kw.bRW ()Lsixtwo/mG;
      // 106: aload 0
      // 107: getfield sixtwo/kt.KOcUS Lsixtwo/kw;
      // 10a: invokevirtual sixtwo/kw.bRY ()F
      // 10d: invokevirtual sixtwo/kt.bRe (Lnet/minecraft/class_4587;FLsixtwo/ks;Lnet/minecraft/class_2960;Lnet/minecraft/class_2960;Lsixtwo/mG;F)V
      // 110: goto 117
      // 113: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 116: athrow
      // 117: iload 6
      // 119: ifne 16d
      // 11c: aload 0
      // 11d: aload 1
      // 11e: fload 2
      // 11f: aload 8
      // 121: aload 8
      // 123: invokevirtual sixtwo/ks.texture ()Lnet/minecraft/class_2960;
      // 126: aload 8
      // 128: invokevirtual sixtwo/ks.capeTexture ()Lnet/minecraft/class_2960;
      // 12b: invokevirtual sixtwo/kt.bRg (Lnet/minecraft/class_4587;FLsixtwo/ks;Lnet/minecraft/class_2960;Lnet/minecraft/class_2960;)V
      // 12e: iload 6
      // 130: ifne 16d
      // 133: goto 13a
      // 136: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 139: athrow
      // 13a: aload 0
      // 13b: aload 1
      // 13c: fload 2
      // 13d: aload 8
      // 13f: aload 8
      // 141: invokevirtual sixtwo/ks.texture ()Lnet/minecraft/class_2960;
      // 144: aload 8
      // 146: invokevirtual sixtwo/ks.capeTexture ()Lnet/minecraft/class_2960;
      // 149: invokevirtual sixtwo/kt.bRg (Lnet/minecraft/class_4587;FLsixtwo/ks;Lnet/minecraft/class_2960;Lnet/minecraft/class_2960;)V
      // 14c: aload 0
      // 14d: aload 1
      // 14e: fload 2
      // 14f: aload 8
      // 151: aload 8
      // 153: invokevirtual sixtwo/ks.texture ()Lnet/minecraft/class_2960;
      // 156: aload 8
      // 158: invokevirtual sixtwo/ks.capeTexture ()Lnet/minecraft/class_2960;
      // 15b: aload 0
      // 15c: getfield sixtwo/kt.KOcUS Lsixtwo/kw;
      // 15f: invokevirtual sixtwo/kw.bRW ()Lsixtwo/mG;
      // 162: fconst_0
      // 163: invokevirtual sixtwo/kt.bRe (Lnet/minecraft/class_4587;FLsixtwo/ks;Lnet/minecraft/class_2960;Lnet/minecraft/class_2960;Lsixtwo/mG;F)V
      // 166: goto 16d
      // 169: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 16c: athrow
      // 16d: return
   }

   public void bRb(class_243 var1, class_742 var2) {
      this.bRa(var1);
      this.bRr(var2);
   }

   public void bQY(class_243 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 29751846841567
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kt.bRx ()Z
      // 0b: istore 4
      // 0d: iload 4
      // 0f: ifeq 34
      // 12: aload 1
      // 13: ifnonnull 22
      // 16: goto 1d
      // 19: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: return
      // 1e: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 21: athrow
      // 22: aload 0
      // 23: aload 1
      // 24: putfield sixtwo/kt.OmUIx Lnet/minecraft/class_243;
      // 27: aload 0
      // 28: aload 1
      // 29: putfield sixtwo/kt.UScrC Lnet/minecraft/class_243;
      // 2c: aload 0
      // 2d: getfield sixtwo/kt.QrGyy Lsixtwo/rg;
      // 30: aload 1
      // 31: invokevirtual sixtwo/rg.dfE (Lnet/minecraft/class_243;)V
      // 34: return
   }

   private static CallSite bRF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bRE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kt" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void bRm(class_7920 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kt.Iousr J
      // 003: ldc2_w 72765211222205
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/kt.bRw ()Z
      // 00b: istore 4
      // 00d: aload 0
      // 00e: iload 4
      // 010: ifne 04b
      // 013: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 016: ifnull 043
      // 019: goto 020
      // 01c: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01f: athrow
      // 020: aload 0
      // 021: iload 4
      // 023: ifne 073
      // 026: goto 02d
      // 029: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 02c: athrow
      // 02d: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 030: invokevirtual net/minecraft/class_745.method_73183 ()Lnet/minecraft/class_1937;
      // 033: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 036: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 039: if_acmpeq 072
      // 03c: goto 043
      // 03f: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 042: athrow
      // 043: aload 0
      // 044: goto 04b
      // 047: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 04a: athrow
      // 04b: new net/minecraft/class_745
      // 04e: dup
      // 04f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 052: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 055: new com/mojang/authlib/GameProfile
      // 058: dup
      // 059: invokestatic java/util/UUID.randomUUID ()Ljava/util/UUID;
      // 05c: sipush 4637
      // 05f: ldc2_w 3260641129690218936
      // 062: lload 2
      // 063: lxor
      // 064: invokedynamic z (IJ)Ljava/lang/String; bsm=sixtwo/kt.bRC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 069: invokespecial com/mojang/authlib/GameProfile.<init> (Ljava/util/UUID;Ljava/lang/String;)V
      // 06c: invokespecial net/minecraft/class_745.<init> (Lnet/minecraft/class_638;Lcom/mojang/authlib/GameProfile;)V
      // 06f: putfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 072: aload 0
      // 073: iload 4
      // 075: ifne 0a4
      // 078: getfield sixtwo/kt.OhmsV Lnet/minecraft/class_9950;
      // 07b: ifnonnull 0a3
      // 07e: goto 085
      // 081: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 084: athrow
      // 085: aload 0
      // 086: new net/minecraft/class_9950
      // 089: dup
      // 08a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 08d: invokevirtual net/minecraft/class_310.method_31974 ()Lnet/minecraft/class_5599;
      // 090: getstatic net/minecraft/class_5602.field_52980 Lnet/minecraft/class_5601;
      // 093: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 096: invokespecial net/minecraft/class_9950.<init> (Lnet/minecraft/class_630;)V
      // 099: putfield sixtwo/kt.OhmsV Lnet/minecraft/class_9950;
      // 09c: goto 0a3
      // 09f: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0a2: athrow
      // 0a3: aload 0
      // 0a4: iload 4
      // 0a6: ifne 0d5
      // 0a9: getfield sixtwo/kt.bAiqA Lnet/minecraft/class_563;
      // 0ac: ifnonnull 0d4
      // 0af: goto 0b6
      // 0b2: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0b5: athrow
      // 0b6: aload 0
      // 0b7: new net/minecraft/class_563
      // 0ba: dup
      // 0bb: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0be: invokevirtual net/minecraft/class_310.method_31974 ()Lnet/minecraft/class_5599;
      // 0c1: getstatic net/minecraft/class_5602.field_27559 Lnet/minecraft/class_5601;
      // 0c4: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 0c7: invokespecial net/minecraft/class_563.<init> (Lnet/minecraft/class_630;)V
      // 0ca: putfield sixtwo/kt.bAiqA Lnet/minecraft/class_563;
      // 0cd: goto 0d4
      // 0d0: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d3: athrow
      // 0d4: aload 0
      // 0d5: iload 4
      // 0d7: ifne 106
      // 0da: getfield sixtwo/kt.LOuMD Lnet/minecraft/class_9950;
      // 0dd: ifnonnull 105
      // 0e0: goto 0e7
      // 0e3: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e6: athrow
      // 0e7: aload 0
      // 0e8: new net/minecraft/class_9950
      // 0eb: dup
      // 0ec: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0ef: invokevirtual net/minecraft/class_310.method_31974 ()Lnet/minecraft/class_5599;
      // 0f2: getstatic net/minecraft/class_5602.field_52980 Lnet/minecraft/class_5601;
      // 0f5: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 0f8: invokespecial net/minecraft/class_9950.<init> (Lnet/minecraft/class_630;)V
      // 0fb: putfield sixtwo/kt.LOuMD Lnet/minecraft/class_9950;
      // 0fe: goto 105
      // 101: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 104: athrow
      // 105: aload 0
      // 106: iload 4
      // 108: ifne 137
      // 10b: getfield sixtwo/kt.Pdzhn Lnet/minecraft/class_563;
      // 10e: ifnonnull 136
      // 111: goto 118
      // 114: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 117: athrow
      // 118: aload 0
      // 119: new net/minecraft/class_563
      // 11c: dup
      // 11d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 120: invokevirtual net/minecraft/class_310.method_31974 ()Lnet/minecraft/class_5599;
      // 123: getstatic net/minecraft/class_5602.field_27559 Lnet/minecraft/class_5601;
      // 126: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 129: invokespecial net/minecraft/class_563.<init> (Lnet/minecraft/class_630;)V
      // 12c: putfield sixtwo/kt.Pdzhn Lnet/minecraft/class_563;
      // 12f: goto 136
      // 132: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 135: athrow
      // 136: aload 0
      // 137: iload 4
      // 139: ifne 151
      // 13c: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 13f: ifnull 164
      // 142: goto 149
      // 145: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 148: athrow
      // 149: aload 0
      // 14a: goto 151
      // 14d: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 150: athrow
      // 151: getfield sixtwo/kt.CRBkx Lnet/minecraft/class_7920;
      // 154: aload 1
      // 155: iload 4
      // 157: ifne 16f
      // 15a: if_acmpeq 202
      // 15d: goto 164
      // 160: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 163: athrow
      // 164: aload 1
      // 165: getstatic net/minecraft/class_7920.field_41122 Lnet/minecraft/class_7920;
      // 168: goto 16f
      // 16b: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 16e: athrow
      // 16f: if_acmpne 17a
      // 172: bipush 1
      // 173: goto 17b
      // 176: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 179: athrow
      // 17a: bipush 0
      // 17b: istore 5
      // 17d: aload 0
      // 17e: new net/minecraft/class_591
      // 181: dup
      // 182: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 185: invokevirtual net/minecraft/class_310.method_31974 ()Lnet/minecraft/class_5599;
      // 188: iload 5
      // 18a: ifeq 197
      // 18d: getstatic net/minecraft/class_5602.field_27581 Lnet/minecraft/class_5601;
      // 190: goto 19a
      // 193: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 196: athrow
      // 197: getstatic net/minecraft/class_5602.field_27577 Lnet/minecraft/class_5601;
      // 19a: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 19d: iload 5
      // 19f: invokespecial net/minecraft/class_591.<init> (Lnet/minecraft/class_630;Z)V
      // 1a2: putfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 1a5: aload 0
      // 1a6: new net/minecraft/class_591
      // 1a9: dup
      // 1aa: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1ad: invokevirtual net/minecraft/class_310.method_31974 ()Lnet/minecraft/class_5599;
      // 1b0: iload 5
      // 1b2: ifeq 1bb
      // 1b5: getstatic net/minecraft/class_5602.field_27581 Lnet/minecraft/class_5601;
      // 1b8: goto 1be
      // 1bb: getstatic net/minecraft/class_5602.field_27577 Lnet/minecraft/class_5601;
      // 1be: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 1c1: iload 5
      // 1c3: invokespecial net/minecraft/class_591.<init> (Lnet/minecraft/class_630;Z)V
      // 1c6: putfield sixtwo/kt.HRWqQ Lnet/minecraft/class_591;
      // 1c9: aload 0
      // 1ca: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 1cd: invokevirtual net/minecraft/class_591.method_2838 ()Lnet/minecraft/class_630;
      // 1d0: new org/joml/Vector3f
      // 1d3: dup
      // 1d4: ldc_w -0.3
      // 1d7: ldc_w -0.3
      // 1da: ldc_w -0.3
      // 1dd: invokespecial org/joml/Vector3f.<init> (FFF)V
      // 1e0: invokevirtual net/minecraft/class_630.method_41924 (Lorg/joml/Vector3f;)V
      // 1e3: aload 0
      // 1e4: getfield sixtwo/kt.HRWqQ Lnet/minecraft/class_591;
      // 1e7: invokevirtual net/minecraft/class_591.method_2838 ()Lnet/minecraft/class_630;
      // 1ea: new org/joml/Vector3f
      // 1ed: dup
      // 1ee: ldc_w -0.3
      // 1f1: ldc_w -0.3
      // 1f4: ldc_w -0.3
      // 1f7: invokespecial org/joml/Vector3f.<init> (FFF)V
      // 1fa: invokevirtual net/minecraft/class_630.method_41924 (Lorg/joml/Vector3f;)V
      // 1fd: aload 0
      // 1fe: aload 1
      // 1ff: putfield sixtwo/kt.CRBkx Lnet/minecraft/class_7920;
      // 202: return
   }

   public class_243 bRc() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 9880547919880
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kt.bRw ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifne 25
      // 11: getfield sixtwo/kt.UScrC Lnet/minecraft/class_243;
      // 14: ifnonnull 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aconst_null
      // 1f: areturn
      // 20: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 23: athrow
      // 24: aload 0
      // 25: iload 3
      // 26: ifne 43
      // 29: getfield sixtwo/kt.KOcUS Lsixtwo/kw;
      // 2c: invokevirtual sixtwo/kw.bRQ ()Z
      // 2f: ifeq 42
      // 32: goto 39
      // 35: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 38: athrow
      // 39: aload 0
      // 3a: getfield sixtwo/kt.UScrC Lnet/minecraft/class_243;
      // 3d: areturn
      // 3e: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 41: athrow
      // 42: aload 0
      // 43: getfield sixtwo/kt.OmUIx Lnet/minecraft/class_243;
      // 46: iload 3
      // 47: ifne 6e
      // 4a: ifnonnull 63
      // 4d: goto 54
      // 50: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 53: athrow
      // 54: aload 0
      // 55: aload 0
      // 56: getfield sixtwo/kt.UScrC Lnet/minecraft/class_243;
      // 59: invokevirtual sixtwo/kt.bQY (Lnet/minecraft/class_243;)V
      // 5c: goto 63
      // 5f: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 62: athrow
      // 63: aload 0
      // 64: getfield sixtwo/kt.QrGyy Lsixtwo/rg;
      // 67: aload 0
      // 68: getfield sixtwo/kt.UScrC Lnet/minecraft/class_243;
      // 6b: invokevirtual sixtwo/rg.dfA (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 6e: areturn
   }

   private void bRe(class_4587 var1, float var2, ks var3, class_2960 var4, class_2960 var5, mG var6, float var7) {
      bRf(() -> this.bRg(var1, var2, var3, var4, var5), kw.bRK().bRP(var6, kv.DESOY, var7));
   }

   private void bRg(class_4587 param1, float param2, ks param3, class_2960 param4, class_2960 param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kt.Iousr J
      // 003: ldc2_w 30311059220911
      // 006: lxor
      // 007: lstore 6
      // 009: aload 0
      // 00a: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 00d: invokevirtual net/minecraft/class_745.method_73189 ()Lnet/minecraft/class_243;
      // 010: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 013: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 016: invokevirtual net/minecraft/class_757.method_19418 ()Lnet/minecraft/class_4184;
      // 019: invokevirtual net/minecraft/class_4184.method_71156 ()Lnet/minecraft/class_243;
      // 01c: invokevirtual net/minecraft/class_243.method_1020 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 01f: astore 9
      // 021: aload 1
      // 022: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 025: aload 1
      // 026: aload 9
      // 028: getfield net/minecraft/class_243.field_1352 D
      // 02b: aload 9
      // 02d: getfield net/minecraft/class_243.field_1351 D
      // 030: aload 9
      // 032: getfield net/minecraft/class_243.field_1350 D
      // 035: invokevirtual net/minecraft/class_4587.method_22904 (DDD)V
      // 038: fload 2
      // 039: aload 0
      // 03a: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 03d: getfield net/minecraft/class_745.field_6220 F
      // 040: aload 0
      // 041: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 044: getfield net/minecraft/class_745.field_6283 F
      // 047: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 04a: fstore 10
      // 04c: aload 1
      // 04d: getstatic net/minecraft/class_7833.field_40716 Lnet/minecraft/class_7833;
      // 050: ldc_w 180.0
      // 053: fload 10
      // 055: fsub
      // 056: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 05b: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 05e: aload 0
      // 05f: aload 1
      // 060: aload 3
      // 061: fload 2
      // 062: invokevirtual sixtwo/kt.bRp (Lnet/minecraft/class_4587;Lsixtwo/ks;F)V
      // 065: aload 0
      // 066: aload 1
      // 067: invokevirtual sixtwo/kt.bRo (Lnet/minecraft/class_4587;)V
      // 06a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 06d: invokevirtual net/minecraft/class_310.method_1561 ()Lnet/minecraft/class_898;
      // 070: aload 0
      // 071: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 074: invokevirtual net/minecraft/class_898.method_74405 (Lnet/minecraft/class_742;)Lnet/minecraft/class_1007;
      // 077: astore 11
      // 079: invokestatic sixtwo/kt.bRw ()Z
      // 07c: new net/minecraft/class_10055
      // 07f: dup
      // 080: invokespecial net/minecraft/class_10055.<init> ()V
      // 083: astore 12
      // 085: aload 11
      // 087: aload 0
      // 088: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 08b: aload 12
      // 08d: fload 2
      // 08e: invokevirtual net/minecraft/class_1007.method_62604 (Lnet/minecraft/class_11890;Lnet/minecraft/class_10055;F)V
      // 091: istore 8
      // 093: aload 12
      // 095: aload 3
      // 096: invokevirtual sixtwo/ks.skin ()Lnet/minecraft/class_8685;
      // 099: putfield net/minecraft/class_10055.field_53520 Lnet/minecraft/class_8685;
      // 09c: aload 12
      // 09e: aload 3
      // 09f: invokevirtual sixtwo/ks.fallFlying ()Z
      // 0a2: putfield net/minecraft/class_10055.field_53411 Z
      // 0a5: aload 12
      // 0a7: aload 3
      // 0a8: invokevirtual sixtwo/ks.fallFlying ()Z
      // 0ab: ifeq 0b8
      // 0ae: ldc_w 20.0
      // 0b1: goto 0b9
      // 0b4: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0b7: athrow
      // 0b8: fconst_0
      // 0b9: putfield net/minecraft/class_10055.field_53534 F
      // 0bc: aload 12
      // 0be: bipush 0
      // 0bf: iload 8
      // 0c1: ifne 0f4
      // 0c4: putfield net/minecraft/class_10055.field_53535 Z
      // 0c7: aload 12
      // 0c9: fconst_0
      // 0ca: putfield net/minecraft/class_10055.field_53521 F
      // 0cd: aload 12
      // 0cf: aload 3
      // 0d0: invokevirtual sixtwo/ks.chestEquipment ()Lnet/minecraft/class_1799;
      // 0d3: invokevirtual net/minecraft/class_1799.method_7972 ()Lnet/minecraft/class_1799;
      // 0d6: putfield net/minecraft/class_10055.field_53418 Lnet/minecraft/class_1799;
      // 0d9: aload 12
      // 0db: aload 3
      // 0dc: invokevirtual sixtwo/ks.skin ()Lnet/minecraft/class_8685;
      // 0df: invokevirtual net/minecraft/class_8685.comp_1627 ()Lnet/minecraft/class_12079$class_12081;
      // 0e2: ifnull 0f7
      // 0e5: goto 0ec
      // 0e8: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0eb: athrow
      // 0ec: bipush 1
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f3: athrow
      // 0f4: goto 0f8
      // 0f7: bipush 0
      // 0f8: putfield net/minecraft/class_10055.field_53532 Z
      // 0fb: aload 0
      // 0fc: aload 12
      // 0fe: aload 3
      // 0ff: invokevirtual sixtwo/kt.bRq (Lnet/minecraft/class_10055;Lsixtwo/ks;)V
      // 102: aload 0
      // 103: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 106: getfield net/minecraft/class_745.field_42108 Lnet/minecraft/class_8080;
      // 109: checkcast mixin/accessors/WalkAnimationStateAccessor
      // 10c: astore 13
      // 10e: aload 12
      // 110: aload 0
      // 111: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 114: getfield net/minecraft/class_745.field_42108 Lnet/minecraft/class_8080;
      // 117: invokevirtual net/minecraft/class_8080.method_48566 ()F
      // 11a: putfield net/minecraft/class_10055.field_53451 F
      // 11d: aload 12
      // 11f: aload 13
      // 121: invokeinterface mixin/accessors/WalkAnimationStateAccessor.getPosition ()F 1
      // 126: putfield net/minecraft/class_10055.field_53450 F
      // 129: aload 0
      // 12a: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 12d: aload 12
      // 12f: invokevirtual net/minecraft/class_591.method_62110 (Lnet/minecraft/class_10055;)V
      // 132: aload 0
      // 133: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 136: getfield net/minecraft/class_591.field_3482 Lnet/minecraft/class_630;
      // 139: bipush 1
      // 13a: putfield net/minecraft/class_630.field_3665 Z
      // 13d: aload 0
      // 13e: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 141: getfield net/minecraft/class_591.field_3479 Lnet/minecraft/class_630;
      // 144: bipush 1
      // 145: putfield net/minecraft/class_630.field_3665 Z
      // 148: aload 0
      // 149: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 14c: getfield net/minecraft/class_591.field_3484 Lnet/minecraft/class_630;
      // 14f: bipush 1
      // 150: putfield net/minecraft/class_630.field_3665 Z
      // 153: aload 0
      // 154: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 157: getfield net/minecraft/class_591.field_3486 Lnet/minecraft/class_630;
      // 15a: bipush 1
      // 15b: putfield net/minecraft/class_630.field_3665 Z
      // 15e: aload 0
      // 15f: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 162: getfield net/minecraft/class_591.field_3483 Lnet/minecraft/class_630;
      // 165: bipush 1
      // 166: putfield net/minecraft/class_630.field_3665 Z
      // 169: aload 0
      // 16a: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 16d: getfield net/minecraft/class_591.field_3394 Lnet/minecraft/class_630;
      // 170: bipush 1
      // 171: putfield net/minecraft/class_630.field_3665 Z
      // 174: aload 0
      // 175: getfield sixtwo/kt.HRWqQ Lnet/minecraft/class_591;
      // 178: getfield net/minecraft/class_591.field_3482 Lnet/minecraft/class_630;
      // 17b: bipush 1
      // 17c: putfield net/minecraft/class_630.field_3665 Z
      // 17f: aload 0
      // 180: getfield sixtwo/kt.HRWqQ Lnet/minecraft/class_591;
      // 183: getfield net/minecraft/class_591.field_3479 Lnet/minecraft/class_630;
      // 186: bipush 1
      // 187: putfield net/minecraft/class_630.field_3665 Z
      // 18a: aload 0
      // 18b: getfield sixtwo/kt.HRWqQ Lnet/minecraft/class_591;
      // 18e: getfield net/minecraft/class_591.field_3484 Lnet/minecraft/class_630;
      // 191: bipush 1
      // 192: putfield net/minecraft/class_630.field_3665 Z
      // 195: aload 0
      // 196: getfield sixtwo/kt.HRWqQ Lnet/minecraft/class_591;
      // 199: getfield net/minecraft/class_591.field_3486 Lnet/minecraft/class_630;
      // 19c: bipush 1
      // 19d: putfield net/minecraft/class_630.field_3665 Z
      // 1a0: aload 0
      // 1a1: getfield sixtwo/kt.HRWqQ Lnet/minecraft/class_591;
      // 1a4: getfield net/minecraft/class_591.field_3483 Lnet/minecraft/class_630;
      // 1a7: bipush 1
      // 1a8: putfield net/minecraft/class_630.field_3665 Z
      // 1ab: aload 0
      // 1ac: getfield sixtwo/kt.HRWqQ Lnet/minecraft/class_591;
      // 1af: getfield net/minecraft/class_591.field_3394 Lnet/minecraft/class_630;
      // 1b2: bipush 1
      // 1b3: putfield net/minecraft/class_630.field_3665 Z
      // 1b6: aload 12
      // 1b8: fconst_0
      // 1b9: invokestatic net/minecraft/class_922.method_23622 (Lnet/minecraft/class_10042;F)I
      // 1bc: istore 14
      // 1be: aload 12
      // 1c0: getfield net/minecraft/class_10055.field_61820 I
      // 1c3: istore 15
      // 1c5: aload 0
      // 1c6: aload 12
      // 1c8: invokevirtual sixtwo/kt.bRs (Lnet/minecraft/class_10055;)Lnet/minecraft/class_2960;
      // 1cb: astore 16
      // 1cd: aload 5
      // 1cf: ifnull 1fc
      // 1d2: aload 0
      // 1d3: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 1d6: getstatic net/minecraft/class_1304.field_6174 Lnet/minecraft/class_1304;
      // 1d9: invokevirtual net/minecraft/class_745.method_6118 (Lnet/minecraft/class_1304;)Lnet/minecraft/class_1799;
      // 1dc: getstatic net/minecraft/class_1802.field_8833 Lnet/minecraft/class_1792;
      // 1df: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 1e2: iload 8
      // 1e4: ifne 1f9
      // 1e7: goto 1ee
      // 1ea: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1ed: athrow
      // 1ee: ifne 1fc
      // 1f1: goto 1f8
      // 1f4: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f7: athrow
      // 1f8: bipush 1
      // 1f9: goto 1fd
      // 1fc: bipush 0
      // 1fd: istore 17
      // 1ff: aload 0
      // 200: getfield sixtwo/kt.tLzLU Lnet/minecraft/class_745;
      // 203: getstatic net/minecraft/class_1304.field_6174 Lnet/minecraft/class_1304;
      // 206: invokevirtual net/minecraft/class_745.method_6118 (Lnet/minecraft/class_1304;)Lnet/minecraft/class_1799;
      // 209: getstatic net/minecraft/class_1802.field_8833 Lnet/minecraft/class_1792;
      // 20c: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 20f: ifeq 226
      // 212: aload 16
      // 214: ifnull 226
      // 217: goto 21e
      // 21a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 21d: athrow
      // 21e: bipush 1
      // 21f: goto 227
      // 222: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 225: athrow
      // 226: bipush 0
      // 227: istore 18
      // 229: aload 0
      // 22a: getfield sixtwo/kt.KOcUS Lsixtwo/kw;
      // 22d: invokevirtual sixtwo/kw.bRR ()Z
      // 230: iload 8
      // 232: ifne 301
      // 235: ifeq 2f1
      // 238: goto 23f
      // 23b: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 23e: athrow
      // 23f: aload 0
      // 240: aload 1
      // 241: aload 0
      // 242: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 245: aload 0
      // 246: getfield sixtwo/kt.HRWqQ Lnet/minecraft/class_591;
      // 249: aload 4
      // 24b: iload 15
      // 24d: iload 14
      // 24f: invokevirtual sixtwo/kt.bRi (Lnet/minecraft/class_4587;Lnet/minecraft/class_3879;Lnet/minecraft/class_3879;Lnet/minecraft/class_2960;II)V
      // 252: aload 12
      // 254: getfield net/minecraft/class_10055.field_53333 Z
      // 257: iload 8
      // 259: ifne 2a4
      // 25c: goto 263
      // 25f: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 262: athrow
      // 263: ifne 29f
      // 266: goto 26d
      // 269: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 26c: athrow
      // 26d: iload 17
      // 26f: iload 8
      // 271: ifne 2a4
      // 274: goto 27b
      // 277: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 27a: athrow
      // 27b: ifeq 29f
      // 27e: goto 285
      // 281: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 284: athrow
      // 285: aload 0
      // 286: aload 1
      // 287: aload 0
      // 288: getfield sixtwo/kt.OhmsV Lnet/minecraft/class_9950;
      // 28b: aload 0
      // 28c: getfield sixtwo/kt.LOuMD Lnet/minecraft/class_9950;
      // 28f: aload 5
      // 291: iload 15
      // 293: iload 14
      // 295: invokevirtual sixtwo/kt.bRi (Lnet/minecraft/class_4587;Lnet/minecraft/class_3879;Lnet/minecraft/class_3879;Lnet/minecraft/class_2960;II)V
      // 298: goto 29f
      // 29b: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 29e: athrow
      // 29f: aload 12
      // 2a1: getfield net/minecraft/class_10055.field_53333 Z
      // 2a4: iload 8
      // 2a6: ifne 2b5
      // 2a9: ifne 3dd
      // 2ac: goto 2b3
      // 2af: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2b2: athrow
      // 2b3: iload 18
      // 2b5: ifeq 3dd
      // 2b8: aload 1
      // 2b9: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 2bc: aload 1
      // 2bd: fconst_0
      // 2be: fconst_0
      // 2bf: ldc_w 0.125
      // 2c2: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 2c5: aload 0
      // 2c6: getfield sixtwo/kt.bAiqA Lnet/minecraft/class_563;
      // 2c9: aload 12
      // 2cb: invokevirtual net/minecraft/class_563.method_17079 (Lnet/minecraft/class_10034;)V
      // 2ce: aload 0
      // 2cf: aload 1
      // 2d0: aload 0
      // 2d1: getfield sixtwo/kt.bAiqA Lnet/minecraft/class_563;
      // 2d4: aload 0
      // 2d5: getfield sixtwo/kt.Pdzhn Lnet/minecraft/class_563;
      // 2d8: aload 16
      // 2da: iload 15
      // 2dc: iload 14
      // 2de: invokevirtual sixtwo/kt.bRi (Lnet/minecraft/class_4587;Lnet/minecraft/class_3879;Lnet/minecraft/class_3879;Lnet/minecraft/class_2960;II)V
      // 2e1: aload 1
      // 2e2: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 2e5: iload 8
      // 2e7: ifeq 3dd
      // 2ea: goto 2f1
      // 2ed: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2f0: athrow
      // 2f1: ldc_w 0.75
      // 2f4: fconst_1
      // 2f5: fconst_1
      // 2f6: fconst_1
      // 2f7: invokestatic net/minecraft/class_9848.method_61318 (FFFF)I
      // 2fa: goto 301
      // 2fd: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 300: athrow
      // 301: istore 19
      // 303: aload 0
      // 304: invokevirtual sixtwo/kt.bRh ()Lsixtwo/jC;
      // 307: astore 20
      // 309: aload 20
      // 30b: invokevirtual sixtwo/jC.bGU ()Lnet/minecraft/class_4597$class_4598;
      // 30e: astore 21
      // 310: aload 21
      // 312: aload 0
      // 313: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 316: aload 4
      // 318: invokevirtual net/minecraft/class_591.method_23500 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1921;
      // 31b: invokevirtual net/minecraft/class_4597$class_4598.method_73477 (Lnet/minecraft/class_1921;)Lnet/minecraft/class_4588;
      // 31e: astore 22
      // 320: aload 0
      // 321: getfield sixtwo/kt.TRGbg Lnet/minecraft/class_591;
      // 324: aload 1
      // 325: aload 22
      // 327: iload 15
      // 329: iload 14
      // 32b: iload 19
      // 32d: invokevirtual net/minecraft/class_591.method_62100 (Lnet/minecraft/class_4587;Lnet/minecraft/class_4588;III)V
      // 330: aload 12
      // 332: getfield net/minecraft/class_10055.field_53333 Z
      // 335: iload 8
      // 337: ifne 381
      // 33a: ifne 37c
      // 33d: goto 344
      // 340: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 343: athrow
      // 344: iload 17
      // 346: iload 8
      // 348: ifne 381
      // 34b: goto 352
      // 34e: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 351: athrow
      // 352: ifeq 37c
      // 355: goto 35c
      // 358: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 35b: athrow
      // 35c: aload 21
      // 35e: aload 0
      // 35f: getfield sixtwo/kt.OhmsV Lnet/minecraft/class_9950;
      // 362: aload 5
      // 364: invokevirtual net/minecraft/class_9950.method_23500 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1921;
      // 367: invokevirtual net/minecraft/class_4597$class_4598.method_73477 (Lnet/minecraft/class_1921;)Lnet/minecraft/class_4588;
      // 36a: astore 23
      // 36c: aload 0
      // 36d: getfield sixtwo/kt.OhmsV Lnet/minecraft/class_9950;
      // 370: aload 1
      // 371: aload 23
      // 373: iload 15
      // 375: iload 14
      // 377: iload 19
      // 379: invokevirtual net/minecraft/class_9950.method_62100 (Lnet/minecraft/class_4587;Lnet/minecraft/class_4588;III)V
      // 37c: aload 12
      // 37e: getfield net/minecraft/class_10055.field_53333 Z
      // 381: iload 8
      // 383: ifne 392
      // 386: ifne 3cb
      // 389: goto 390
      // 38c: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 38f: athrow
      // 390: iload 18
      // 392: ifeq 3cb
      // 395: aload 1
      // 396: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 399: aload 1
      // 39a: fconst_0
      // 39b: fconst_0
      // 39c: ldc_w 0.125
      // 39f: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 3a2: aload 0
      // 3a3: getfield sixtwo/kt.bAiqA Lnet/minecraft/class_563;
      // 3a6: aload 12
      // 3a8: invokevirtual net/minecraft/class_563.method_17079 (Lnet/minecraft/class_10034;)V
      // 3ab: aload 21
      // 3ad: aload 16
      // 3af: invokestatic net/minecraft/class_12249.method_75966 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1921;
      // 3b2: invokevirtual net/minecraft/class_4597$class_4598.method_73477 (Lnet/minecraft/class_1921;)Lnet/minecraft/class_4588;
      // 3b5: astore 23
      // 3b7: aload 0
      // 3b8: getfield sixtwo/kt.bAiqA Lnet/minecraft/class_563;
      // 3bb: aload 1
      // 3bc: aload 23
      // 3be: iload 15
      // 3c0: iload 14
      // 3c2: iload 19
      // 3c4: invokevirtual net/minecraft/class_563.method_62100 (Lnet/minecraft/class_4587;Lnet/minecraft/class_4588;III)V
      // 3c7: aload 1
      // 3c8: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 3cb: aload 20
      // 3cd: invokevirtual sixtwo/jC.bGY ()V
      // 3d0: goto 3dd
      // 3d3: astore 24
      // 3d5: aload 20
      // 3d7: invokevirtual sixtwo/jC.bGY ()V
      // 3da: aload 24
      // 3dc: athrow
      // 3dd: aload 1
      // 3de: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 3e1: return
   }

   private void bRl(class_630 var1) {
      long var2 = Iousr ^ 100329691006625L;
      boolean var4 = bRx();

      class_630 var10000;
      label32: {
         try {
            var10000 = var1;
            if (!var4) {
               break label32;
            }

            if (var1 == null) {
               return;
            }
         } catch (MatchException var7) {
            throw bRy(var7);
         }

         var10000 = var1;
      }

      for (class_630 var6 : var10000.method_32088()) {
         var6.method_41923();
         if (!var4) {
            break;
         }
      }
   }

   private static Object bRB(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bRA(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String bRz(byte[] var0) {
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

   private class_2960 bRs(class_10055 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 110858342322243
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kt.bRx ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: getfield net/minecraft/class_10055.field_53520 Lnet/minecraft/class_8685;
      // 11: invokevirtual net/minecraft/class_8685.comp_1628 ()Lnet/minecraft/class_12079$class_12081;
      // 14: iload 4
      // 16: ifeq 31
      // 19: ifnull 37
      // 1c: goto 23
      // 1f: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 22: athrow
      // 23: aload 1
      // 24: getfield net/minecraft/class_10055.field_53520 Lnet/minecraft/class_8685;
      // 27: invokevirtual net/minecraft/class_8685.comp_1628 ()Lnet/minecraft/class_12079$class_12081;
      // 2a: goto 31
      // 2d: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 30: athrow
      // 31: invokeinterface net/minecraft/class_12079$class_12081.comp_3627 ()Lnet/minecraft/class_2960; 1
      // 36: areturn
      // 37: getstatic sixtwo/kt.mCJQZ Lnet/minecraft/class_2960;
      // 3a: areturn
   }

   private class_9801 bRj(class_9801 param1, class_9801 param2, class_9799 param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kt.Iousr J
      // 003: ldc2_w 46163785821653
      // 006: lxor
      // 007: lstore 4
      // 009: aload 1
      // 00a: invokevirtual net/minecraft/class_9801.method_60818 ()Ljava/nio/ByteBuffer;
      // 00d: invokevirtual java/nio/ByteBuffer.duplicate ()Ljava/nio/ByteBuffer;
      // 010: invokestatic java/nio/ByteOrder.nativeOrder ()Ljava/nio/ByteOrder;
      // 013: invokevirtual java/nio/ByteBuffer.order (Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;
      // 016: astore 7
      // 018: invokestatic sixtwo/kt.bRw ()Z
      // 01b: aload 2
      // 01c: invokevirtual net/minecraft/class_9801.method_60818 ()Ljava/nio/ByteBuffer;
      // 01f: invokevirtual java/nio/ByteBuffer.duplicate ()Ljava/nio/ByteBuffer;
      // 022: invokestatic java/nio/ByteOrder.nativeOrder ()Ljava/nio/ByteOrder;
      // 025: invokevirtual java/nio/ByteBuffer.order (Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;
      // 028: astore 8
      // 02a: aload 1
      // 02b: invokevirtual net/minecraft/class_9801.method_60822 ()Lnet/minecraft/class_9801$class_4574;
      // 02e: invokevirtual net/minecraft/class_9801$class_4574.comp_750 ()I
      // 031: istore 9
      // 033: istore 6
      // 035: iload 9
      // 037: iload 6
      // 039: ifne 059
      // 03c: aload 2
      // 03d: invokevirtual net/minecraft/class_9801.method_60822 ()Lnet/minecraft/class_9801$class_4574;
      // 040: invokevirtual net/minecraft/class_9801$class_4574.comp_750 ()I
      // 043: if_icmpeq 053
      // 046: goto 04d
      // 049: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 04c: athrow
      // 04d: aconst_null
      // 04e: areturn
      // 04f: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 052: athrow
      // 053: getstatic net/minecraft/class_290.field_1585 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 056: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 059: istore 10
      // 05b: ldc_w Infinity
      // 05e: fstore 11
      // 060: ldc_w -Infinity
      // 063: fstore 12
      // 065: bipush 0
      // 066: istore 13
      // 068: iload 13
      // 06a: iload 9
      // 06c: if_icmpge 09c
      // 06f: aload 8
      // 071: iload 13
      // 073: iload 10
      // 075: imul
      // 076: bipush 4
      // 077: iadd
      // 078: invokevirtual java/nio/ByteBuffer.getFloat (I)F
      // 07b: fstore 14
      // 07d: fload 11
      // 07f: fload 14
      // 081: invokestatic java/lang/Math.min (FF)F
      // 084: fstore 11
      // 086: fload 12
      // 088: fload 14
      // 08a: invokestatic java/lang/Math.max (FF)F
      // 08d: iload 6
      // 08f: ifne 0a7
      // 092: fstore 12
      // 094: iinc 13 1
      // 097: iload 6
      // 099: ifeq 068
      // 09c: fload 12
      // 09e: fload 11
      // 0a0: fsub
      // 0a1: ldc_w 1.0E-4
      // 0a4: invokestatic java/lang/Math.max (FF)F
      // 0a7: fstore 13
      // 0a9: new net/minecraft/class_287
      // 0ac: dup
      // 0ad: aload 3
      // 0ae: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 0b1: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 0b4: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 0b7: astore 14
      // 0b9: bipush 0
      // 0ba: istore 15
      // 0bc: iload 15
      // 0be: iload 9
      // 0c0: if_icmpge 1a8
      // 0c3: iload 15
      // 0c5: iload 10
      // 0c7: imul
      // 0c8: istore 16
      // 0ca: aload 7
      // 0cc: iload 16
      // 0ce: invokevirtual java/nio/ByteBuffer.getFloat (I)F
      // 0d1: fstore 17
      // 0d3: aload 7
      // 0d5: iload 16
      // 0d7: bipush 4
      // 0d8: iadd
      // 0d9: invokevirtual java/nio/ByteBuffer.getFloat (I)F
      // 0dc: fstore 18
      // 0de: aload 7
      // 0e0: iload 16
      // 0e2: sipush 32766
      // 0e5: ldc2_w 814801378058147903
      // 0e8: lload 4
      // 0ea: lxor
      // 0eb: invokedynamic p (IJ)I bsm=sixtwo/kt.bRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f0: iadd
      // 0f1: invokevirtual java/nio/ByteBuffer.getFloat (I)F
      // 0f4: fstore 19
      // 0f6: aload 7
      // 0f8: iload 16
      // 0fa: sipush 16515
      // 0fd: ldc2_w 3157589146326050631
      // 100: lload 4
      // 102: lxor
      // 103: invokedynamic p (IJ)I bsm=sixtwo/kt.bRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 108: iadd
      // 109: invokevirtual java/nio/ByteBuffer.getFloat (I)F
      // 10c: fstore 20
      // 10e: aload 7
      // 110: iload 16
      // 112: sipush 17469
      // 115: ldc2_w 4345872825895920634
      // 118: lload 4
      // 11a: lxor
      // 11b: invokedynamic p (IJ)I bsm=sixtwo/kt.bRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 120: iadd
      // 121: invokevirtual java/nio/ByteBuffer.getFloat (I)F
      // 124: fstore 21
      // 126: aload 8
      // 128: iload 16
      // 12a: bipush 4
      // 12b: iadd
      // 12c: invokevirtual java/nio/ByteBuffer.getFloat (I)F
      // 12f: fstore 22
      // 131: fload 22
      // 133: fload 11
      // 135: fsub
      // 136: fload 13
      // 138: fdiv
      // 139: fconst_0
      // 13a: fconst_1
      // 13b: invokestatic net/minecraft/class_3532.method_15363 (FFF)F
      // 13e: fstore 23
      // 140: fload 23
      // 142: ldc_w 255.0
      // 145: fmul
      // 146: invokestatic net/minecraft/class_3532.method_15375 (F)I
      // 149: istore 24
      // 14b: aload 14
      // 14d: iload 6
      // 14f: ifne 1aa
      // 152: fload 17
      // 154: fload 18
      // 156: fload 19
      // 158: invokevirtual net/minecraft/class_287.method_22912 (FFF)Lnet/minecraft/class_4588;
      // 15b: sipush 12645
      // 15e: ldc2_w 5421537305837360806
      // 161: lload 4
      // 163: lxor
      // 164: invokedynamic p (IJ)I bsm=sixtwo/kt.bRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 169: iload 24
      // 16b: sipush 23632
      // 16e: ldc2_w 5130382780003892117
      // 171: lload 4
      // 173: lxor
      // 174: invokedynamic p (IJ)I bsm=sixtwo/kt.bRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 179: sipush 23632
      // 17c: ldc2_w 5130382780003892117
      // 17f: lload 4
      // 181: lxor
      // 182: invokedynamic p (IJ)I bsm=sixtwo/kt.bRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 187: invokestatic net/minecraft/class_9848.method_61324 (IIII)I
      // 18a: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 18f: fload 20
      // 191: fload 21
      // 193: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 198: pop
      // 199: iinc 15 1
      // 19c: iload 6
      // 19e: ifeq 0bc
      // 1a1: goto 1a8
      // 1a4: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1a7: athrow
      // 1a8: aload 14
      // 1aa: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 1ad: areturn
   }

   private void bRq(class_10055 param1, ks param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 64451904391225
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/kt.bRx ()Z
      // 0b: istore 5
      // 0d: aload 2
      // 0e: invokevirtual sixtwo/ks.chestEquipment ()Lnet/minecraft/class_1799;
      // 11: getstatic net/minecraft/class_1802.field_8833 Lnet/minecraft/class_1792;
      // 14: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 17: ifne 1f
      // 1a: return
      // 1b: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1e: athrow
      // 1f: ldc_w 0.2617994
      // 22: fstore 6
      // 24: fconst_0
      // 25: fstore 7
      // 27: ldc_w -0.2617994
      // 2a: fstore 8
      // 2c: aload 2
      // 2d: invokevirtual sixtwo/ks.fallFlying ()Z
      // 30: iload 5
      // 32: ifeq d8
      // 35: ifeq c1
      // 38: goto 3f
      // 3b: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3e: athrow
      // 3f: fconst_1
      // 40: fstore 9
      // 42: aload 2
      // 43: invokevirtual sixtwo/ks.deltaMovement ()Lnet/minecraft/class_243;
      // 46: astore 10
      // 48: iload 5
      // 4a: ifeq bc
      // 4d: aload 10
      // 4f: getfield net/minecraft/class_243.field_1351 D
      // 52: dconst_0
      // 53: dcmpg
      // 54: ifge 9c
      // 57: goto 5e
      // 5a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 5d: athrow
      // 5e: aload 10
      // 60: iload 5
      // 62: ifeq 89
      // 65: goto 6c
      // 68: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6b: athrow
      // 6c: invokevirtual net/minecraft/class_243.method_1027 ()D
      // 6f: ldc2_w 1.0E-7
      // 72: dcmpl
      // 73: ifle 9c
      // 76: goto 7d
      // 79: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 7c: athrow
      // 7d: aload 10
      // 7f: invokevirtual net/minecraft/class_243.method_1029 ()Lnet/minecraft/class_243;
      // 82: goto 89
      // 85: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 88: athrow
      // 89: astore 11
      // 8b: fconst_1
      // 8c: aload 11
      // 8e: getfield net/minecraft/class_243.field_1351 D
      // 91: dneg
      // 92: ldc2_w 1.5
      // 95: invokestatic java/lang/Math.pow (DD)D
      // 98: d2f
      // 99: fsub
      // 9a: fstore 9
      // 9c: fload 9
      // 9e: ldc_w 0.34906584
      // a1: fmul
      // a2: fconst_1
      // a3: fload 9
      // a5: fsub
      // a6: fload 6
      // a8: fmul
      // a9: fadd
      // aa: fstore 6
      // ac: fload 9
      // ae: ldc_w -1.5707964
      // b1: fmul
      // b2: fconst_1
      // b3: fload 9
      // b5: fsub
      // b6: fload 8
      // b8: fmul
      // b9: fadd
      // ba: fstore 8
      // bc: iload 5
      // be: ifne ea
      // c1: aload 1
      // c2: iload 5
      // c4: ifeq f7
      // c7: goto ce
      // ca: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // cd: athrow
      // ce: getfield net/minecraft/class_10055.field_53410 Z
      // d1: goto d8
      // d4: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // d7: athrow
      // d8: ifeq ea
      // db: ldc_w 0.6981317
      // de: fstore 6
      // e0: ldc_w 0.08726646
      // e3: fstore 7
      // e5: ldc_w -0.7853982
      // e8: fstore 8
      // ea: aload 1
      // eb: fload 6
      // ed: putfield net/minecraft/class_10055.field_53415 F
      // f0: aload 1
      // f1: fload 7
      // f3: putfield net/minecraft/class_10055.field_53416 F
      // f6: aload 1
      // f7: fload 8
      // f9: putfield net/minecraft/class_10055.field_53417 F
      // fc: return
   }

   public static void bRf(Runnable param0, kw param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 128116436254870
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kt.bRw ()Z
      // 0b: istore 4
      // 0d: aload 0
      // 0e: ifnull 2f
      // 11: aload 1
      // 12: iload 4
      // 14: ifne 29
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: ifnull 2f
      // 21: goto 28
      // 24: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 27: athrow
      // 28: aload 1
      // 29: invokevirtual sixtwo/kw.bRW ()Lsixtwo/mG;
      // 2c: ifnonnull 34
      // 2f: return
      // 30: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 33: athrow
      // 34: aload 0
      // 35: aload 1
      // 36: invokevirtual sixtwo/kw.bRW ()Lsixtwo/mG;
      // 39: aload 1
      // 3a: invokevirtual sixtwo/kw.bRW ()Lsixtwo/mG;
      // 3d: bipush 0
      // 3e: bipush 4
      // 3f: ldc_w 2.5
      // 42: fconst_1
      // 43: fconst_1
      // 44: aload 1
      // 45: invokevirtual sixtwo/kw.bRY ()F
      // 48: fconst_1
      // 49: fconst_1
      // 4a: invokestatic sixtwo/ki.bPi (Ljava/lang/Runnable;Lsixtwo/mG;Lsixtwo/mG;IIFFFFFF)V
      // 4d: return
   }

   private void bRi(class_4587 param1, class_3879 param2, class_3879 param3, class_2960 param4, int param5, int param6) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kt.Iousr J
      // 003: ldc2_w 79452989088732
      // 006: lxor
      // 007: lstore 7
      // 009: invokestatic sixtwo/kt.bRw ()Z
      // 00c: new net/minecraft/class_9799
      // 00f: dup
      // 010: getstatic net/minecraft/class_290.field_1585 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 013: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 016: sipush 13801
      // 019: ldc2_w 7248929939533929510
      // 01c: lload 7
      // 01e: lxor
      // 01f: invokedynamic p (IJ)I bsm=sixtwo/kt.bRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 024: imul
      // 025: invokespecial net/minecraft/class_9799.<init> (I)V
      // 028: astore 10
      // 02a: istore 9
      // 02c: new net/minecraft/class_9799
      // 02f: dup
      // 030: getstatic net/minecraft/class_290.field_1585 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 033: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 036: sipush 13391
      // 039: ldc2_w 4526966054136061318
      // 03c: lload 7
      // 03e: lxor
      // 03f: invokedynamic p (IJ)I bsm=sixtwo/kt.bRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 044: imul
      // 045: invokespecial net/minecraft/class_9799.<init> (I)V
      // 048: astore 11
      // 04a: new net/minecraft/class_287
      // 04d: dup
      // 04e: aload 10
      // 050: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 053: getstatic net/minecraft/class_290.field_1585 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 056: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 059: astore 12
      // 05b: new net/minecraft/class_287
      // 05e: dup
      // 05f: aload 11
      // 061: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 064: getstatic net/minecraft/class_290.field_1585 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 067: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 06a: astore 13
      // 06c: aload 2
      // 06d: aload 1
      // 06e: aload 12
      // 070: iload 5
      // 072: iload 6
      // 074: fconst_1
      // 075: fconst_1
      // 076: fconst_1
      // 077: fconst_1
      // 078: invokestatic net/minecraft/class_9848.method_61318 (FFFF)I
      // 07b: invokevirtual net/minecraft/class_3879.method_62100 (Lnet/minecraft/class_4587;Lnet/minecraft/class_4588;III)V
      // 07e: aload 3
      // 07f: iload 9
      // 081: ifne 099
      // 084: instanceof net/minecraft/class_572
      // 087: ifeq 0a4
      // 08a: goto 091
      // 08d: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 090: athrow
      // 091: aload 3
      // 092: goto 099
      // 095: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 098: athrow
      // 099: checkcast net/minecraft/class_572
      // 09c: astore 14
      // 09e: aload 0
      // 09f: aload 14
      // 0a1: invokevirtual sixtwo/kt.bRk (Lnet/minecraft/class_572;)V
      // 0a4: new net/minecraft/class_4587
      // 0a7: dup
      // 0a8: invokespecial net/minecraft/class_4587.<init> ()V
      // 0ab: astore 14
      // 0ad: aload 0
      // 0ae: aload 14
      // 0b0: invokevirtual sixtwo/kt.bRo (Lnet/minecraft/class_4587;)V
      // 0b3: aload 3
      // 0b4: aload 14
      // 0b6: aload 13
      // 0b8: iload 5
      // 0ba: iload 6
      // 0bc: fconst_1
      // 0bd: fconst_1
      // 0be: fconst_1
      // 0bf: fconst_1
      // 0c0: invokestatic net/minecraft/class_9848.method_61318 (FFFF)I
      // 0c3: invokevirtual net/minecraft/class_3879.method_62100 (Lnet/minecraft/class_4587;Lnet/minecraft/class_4588;III)V
      // 0c6: aload 12
      // 0c8: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 0cb: astore 15
      // 0cd: aload 13
      // 0cf: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 0d2: astore 16
      // 0d4: aload 15
      // 0d6: iload 9
      // 0d8: ifne 0ff
      // 0db: ifnull 0fd
      // 0de: goto 0e5
      // 0e1: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e4: athrow
      // 0e5: aload 16
      // 0e7: iload 9
      // 0e9: ifne 0ff
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f2: athrow
      // 0f3: ifnonnull 13b
      // 0f6: goto 0fd
      // 0f9: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0fc: athrow
      // 0fd: aload 16
      // 0ff: iload 9
      // 101: ifne 11c
      // 104: ifnull 11a
      // 107: goto 10e
      // 10a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10d: athrow
      // 10e: aload 16
      // 110: invokevirtual net/minecraft/class_9801.close ()V
      // 113: goto 11a
      // 116: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 119: athrow
      // 11a: aload 15
      // 11c: iload 9
      // 11e: ifne 12d
      // 121: ifnull 130
      // 124: goto 12b
      // 127: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 12a: athrow
      // 12b: aload 15
      // 12d: invokevirtual net/minecraft/class_9801.close ()V
      // 130: aload 11
      // 132: invokevirtual net/minecraft/class_9799.close ()V
      // 135: aload 10
      // 137: invokevirtual net/minecraft/class_9799.close ()V
      // 13a: return
      // 13b: new net/minecraft/class_9799
      // 13e: dup
      // 13f: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 142: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 145: sipush 13391
      // 148: ldc2_w 4526966054136061318
      // 14b: lload 7
      // 14d: lxor
      // 14e: invokedynamic p (IJ)I bsm=sixtwo/kt.bRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 153: imul
      // 154: invokespecial net/minecraft/class_9799.<init> (I)V
      // 157: astore 17
      // 159: aload 0
      // 15a: aload 15
      // 15c: aload 16
      // 15e: aload 17
      // 160: invokevirtual sixtwo/kt.bRj (Lnet/minecraft/class_9801;Lnet/minecraft/class_9801;Lnet/minecraft/class_9799;)Lnet/minecraft/class_9801;
      // 163: astore 18
      // 165: aload 18
      // 167: iload 9
      // 169: ifne 1b4
      // 16c: ifnonnull 1b2
      // 16f: goto 176
      // 172: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 175: athrow
      // 176: aload 17
      // 178: invokevirtual net/minecraft/class_9799.close ()V
      // 17b: aload 16
      // 17d: iload 9
      // 17f: ifne 193
      // 182: ifnull 191
      // 185: aload 16
      // 187: invokevirtual net/minecraft/class_9801.close ()V
      // 18a: goto 191
      // 18d: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 190: athrow
      // 191: aload 15
      // 193: iload 9
      // 195: ifne 1a4
      // 198: ifnull 1a7
      // 19b: goto 1a2
      // 19e: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1a1: athrow
      // 1a2: aload 15
      // 1a4: invokevirtual net/minecraft/class_9801.close ()V
      // 1a7: aload 11
      // 1a9: invokevirtual net/minecraft/class_9799.close ()V
      // 1ac: aload 10
      // 1ae: invokevirtual net/minecraft/class_9799.close ()V
      // 1b1: return
      // 1b2: aload 18
      // 1b4: astore 19
      // 1b6: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1b9: invokevirtual net/minecraft/class_310.method_1531 ()Lnet/minecraft/class_1060;
      // 1bc: aload 4
      // 1be: invokevirtual net/minecraft/class_1060.method_4619 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1044;
      // 1c1: astore 20
      // 1c3: getstatic sixtwo/kR.QNsUM Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 1c6: aload 18
      // 1c8: aload 0
      // 1c9: aload 20
      // 1cb: invokedynamic accept (Lsixtwo/kt;Lnet/minecraft/class_1044;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/kt.bRt (Lnet/minecraft/class_1044;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 1d0: invokestatic sixtwo/lF.cfQ (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 1d3: iload 9
      // 1d5: ifne 215
      // 1d8: aload 19
      // 1da: ifnull 210
      // 1dd: aload 19
      // 1df: invokevirtual net/minecraft/class_9801.close ()V
      // 1e2: goto 210
      // 1e5: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1e8: athrow
      // 1e9: astore 20
      // 1eb: aload 19
      // 1ed: iload 9
      // 1ef: ifne 1fe
      // 1f2: ifnull 20d
      // 1f5: goto 1fc
      // 1f8: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1fb: athrow
      // 1fc: aload 19
      // 1fe: invokevirtual net/minecraft/class_9801.close ()V
      // 201: goto 20d
      // 204: astore 21
      // 206: aload 20
      // 208: aload 21
      // 20a: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 20d: aload 20
      // 20f: athrow
      // 210: aload 17
      // 212: invokevirtual net/minecraft/class_9799.close ()V
      // 215: goto 22e
      // 218: astore 18
      // 21a: aload 17
      // 21c: invokevirtual net/minecraft/class_9799.close ()V
      // 21f: goto 22b
      // 222: astore 19
      // 224: aload 18
      // 226: aload 19
      // 228: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 22b: aload 18
      // 22d: athrow
      // 22e: aload 16
      // 230: iload 9
      // 232: ifne 274
      // 235: ifnull 272
      // 238: goto 23f
      // 23b: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 23e: athrow
      // 23f: aload 16
      // 241: invokevirtual net/minecraft/class_9801.close ()V
      // 244: goto 272
      // 247: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 24a: athrow
      // 24b: astore 17
      // 24d: aload 16
      // 24f: iload 9
      // 251: ifne 260
      // 254: ifnull 26f
      // 257: goto 25e
      // 25a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25d: athrow
      // 25e: aload 16
      // 260: invokevirtual net/minecraft/class_9801.close ()V
      // 263: goto 26f
      // 266: astore 18
      // 268: aload 17
      // 26a: aload 18
      // 26c: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 26f: aload 17
      // 271: athrow
      // 272: aload 15
      // 274: iload 9
      // 276: ifne 285
      // 279: ifnull 2b2
      // 27c: goto 283
      // 27f: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 282: athrow
      // 283: aload 15
      // 285: invokevirtual net/minecraft/class_9801.close ()V
      // 288: goto 2b2
      // 28b: astore 16
      // 28d: aload 15
      // 28f: iload 9
      // 291: ifne 2a0
      // 294: ifnull 2af
      // 297: goto 29e
      // 29a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 29d: athrow
      // 29e: aload 15
      // 2a0: invokevirtual net/minecraft/class_9801.close ()V
      // 2a3: goto 2af
      // 2a6: astore 17
      // 2a8: aload 16
      // 2aa: aload 17
      // 2ac: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 2af: aload 16
      // 2b1: athrow
      // 2b2: aload 11
      // 2b4: invokevirtual net/minecraft/class_9799.close ()V
      // 2b7: goto 2d0
      // 2ba: astore 12
      // 2bc: aload 11
      // 2be: invokevirtual net/minecraft/class_9799.close ()V
      // 2c1: goto 2cd
      // 2c4: astore 13
      // 2c6: aload 12
      // 2c8: aload 13
      // 2ca: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 2cd: aload 12
      // 2cf: athrow
      // 2d0: aload 10
      // 2d2: invokevirtual net/minecraft/class_9799.close ()V
      // 2d5: goto 2ee
      // 2d8: astore 11
      // 2da: aload 10
      // 2dc: invokevirtual net/minecraft/class_9799.close ()V
      // 2df: goto 2eb
      // 2e2: astore 12
      // 2e4: aload 11
      // 2e6: aload 12
      // 2e8: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 2eb: aload 11
      // 2ed: athrow
      // 2ee: return
   }

   private jC bRh() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 120847663419337
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kt.bRw ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/kt.fKqfS Lsixtwo/jC;
      // 10: iload 3
      // 11: ifne 34
      // 14: ifnonnull 30
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: new sixtwo/jC
      // 22: dup
      // 23: invokespecial sixtwo/jC.<init> ()V
      // 26: putfield sixtwo/kt.fKqfS Lsixtwo/jC;
      // 29: goto 30
      // 2c: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2f: athrow
      // 30: aload 0
      // 31: getfield sixtwo/kt.fKqfS Lsixtwo/jC;
      // 34: areturn
   }

   private void bRp(class_4587 param1, ks param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kt.Iousr J
      // 03: ldc2_w 17705988068013
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/kt.bRx ()Z
      // 0c: istore 6
      // 0e: aload 2
      // 0f: invokevirtual sixtwo/ks.fallFlying ()Z
      // 12: ifne 1a
      // 15: return
      // 16: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 19: athrow
      // 1a: fload 3
      // 1b: aload 2
      // 1c: invokevirtual sixtwo/ks.xRotO ()F
      // 1f: aload 2
      // 20: invokevirtual sixtwo/ks.xRot ()F
      // 23: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 26: fstore 7
      // 28: aload 1
      // 29: getstatic net/minecraft/class_7833.field_40714 Lnet/minecraft/class_7833;
      // 2c: ldc_w -90.0
      // 2f: fload 7
      // 31: fsub
      // 32: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 37: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 3a: aload 2
      // 3b: invokevirtual sixtwo/ks.deltaMovement ()Lnet/minecraft/class_243;
      // 3e: astore 8
      // 40: aload 8
      // 42: invokevirtual net/minecraft/class_243.method_37268 ()D
      // 45: dstore 9
      // 47: dload 9
      // 49: ldc2_w 1.0E-7
      // 4c: dcmpg
      // 4d: ifgt 55
      // 50: return
      // 51: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 54: athrow
      // 55: fload 3
      // 56: aload 2
      // 57: invokevirtual sixtwo/ks.yRotO ()F
      // 5a: aload 2
      // 5b: invokevirtual sixtwo/ks.yRot ()F
      // 5e: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 61: fstore 11
      // 63: fload 7
      // 65: fload 11
      // 67: invokestatic net/minecraft/class_243.method_1030 (FF)Lnet/minecraft/class_243;
      // 6a: astore 12
      // 6c: aload 12
      // 6e: invokevirtual net/minecraft/class_243.method_37268 ()D
      // 71: dstore 13
      // 73: dload 13
      // 75: ldc2_w 1.0E-7
      // 78: iload 6
      // 7a: ifeq ac
      // 7d: dcmpg
      // 7e: ifgt 8d
      // 81: goto 88
      // 84: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 87: athrow
      // 88: return
      // 89: invokestatic sixtwo/kt.bRy (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 8c: athrow
      // 8d: aload 8
      // 8f: getfield net/minecraft/class_243.field_1352 D
      // 92: aload 12
      // 94: getfield net/minecraft/class_243.field_1352 D
      // 97: dmul
      // 98: aload 8
      // 9a: getfield net/minecraft/class_243.field_1350 D
      // 9d: aload 12
      // 9f: getfield net/minecraft/class_243.field_1350 D
      // a2: dmul
      // a3: dadd
      // a4: dload 9
      // a6: dload 13
      // a8: dmul
      // a9: invokestatic java/lang/Math.sqrt (D)D
      // ac: ddiv
      // ad: dstore 15
      // af: aload 8
      // b1: getfield net/minecraft/class_243.field_1352 D
      // b4: aload 12
      // b6: getfield net/minecraft/class_243.field_1350 D
      // b9: dmul
      // ba: aload 8
      // bc: getfield net/minecraft/class_243.field_1350 D
      // bf: aload 12
      // c1: getfield net/minecraft/class_243.field_1352 D
      // c4: dmul
      // c5: dsub
      // c6: dstore 17
      // c8: dload 17
      // ca: invokestatic java/lang/Math.signum (D)D
      // cd: dload 15
      // cf: ldc2_w -1.0
      // d2: dconst_1
      // d3: invokestatic net/minecraft/class_3532.method_15350 (DDD)D
      // d6: invokestatic java/lang/Math.acos (D)D
      // d9: dmul
      // da: d2f
      // db: fstore 19
      // dd: aload 1
      // de: getstatic net/minecraft/class_7833.field_40716 Lnet/minecraft/class_7833;
      // e1: fload 19
      // e3: invokeinterface net/minecraft/class_7833.rotation (F)Lorg/joml/Quaternionf; 2
      // e8: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // eb: return
   }

   private void bRk(class_572<?> var1) {
      this.bRl(var1.field_3398);
      this.bRl(var1.field_3394);
      this.bRl(var1.field_3391);
      this.bRl(var1.field_3401);
      this.bRl(var1.field_27433);
      this.bRl(var1.field_3392);
      this.bRl(var1.field_3397);
   }

   public static void bRv(boolean var0) {
      vuFhM = var0;
   }

   private static CallSite bRC(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bRB".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kt" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void bRo(class_4587 var1) {
      var1.method_22905(-1.0F, -1.0F, 1.0F);
      var1.method_22905(0.9375F, 0.9375F, 0.9375F);
      var1.method_46416(0.0F, -1.501F, 0.0F);
   }

   private static String bRA(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 16864;
      if (KQBfh[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])koOhD.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               koOhD.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kt", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = wINKP[var5].getBytes("ISO-8859-1");
         KQBfh[var5] = bRz(((Cipher)var4[0]).doFinal(var9));
      }

      return KQBfh[var5];
   }

   private static int bRE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bRD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int bRD(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 30954;
      if (jmxFQ[var3] == null) {
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
         long var5 = HgRhM[var3];
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
         Object[] var9 = (Object[])SwLAk.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               SwLAk.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/kt", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         jmxFQ[var3] = var15;
      }

      return jmxFQ[var3];
   }

   public kt(ku var1) {
      long var2 = Iousr ^ 126336851079644L;
      super();
      this.QrGyy = new rg(bRF<"p">(965, 7033273483555289102L ^ var2));
      this.KOcUS = kw.bRK();
      this.SAPZa = var1;
   }

   static {
      long var20 = Iousr ^ 97099914627609L;
      bRv(false);
      Cipher var11;
      Cipher var10000 = var11 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var12 = 1; var12 < 8; var12++) {
         var10003[var12] = (byte)(var20 << var12 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var18 = new String[8];
      int var16 = 0;
      String var15 = "\u008b├Ž\u0012├É┬Ą2g\u0093\u0092\u000e\u0006├ŞO\u0006l├ą,┬ó+H├Á├Éh(5┬Ę8├ü├×m\u0001├î$*├Ő&├ë├ü\u009c┬ú\u0018├Č\u0095├╣┬úna\u0010├Ľ├łR1d┬ęGqi\t├Ć\u0094┬Ž├ć├ít├ú ├ö\u0099\u0081\u009c├ś┬ÁH\u008c├Ü┬ź#N\u0017E┬ź\u0087L┬░w\n\u009e├ą7\u0097\u001d├ĚEKE_R\u008d \u009a0q-tm<├ä\u0091┬ĄQn├┐├Ä\u009a├Ě├║M\u001d┬Ž┬ę├ëR\u0011\u0017├ş$┬»├ż├ä0y \\┬Č+d┬ę\u0018Trq┬á├î^\u001f├ů\u001a\u008eE\f├Ą├áI├Á┬ž)f\u008a@├č├┤\u0011\u0002├î\u0018\n┬ÁK├ż\u0002j├ż\u0017├ż7├éixo\u009c\u000f=\nS┬«┬╣\t ├í";
      int var17 = "\u008b├Ž\u0012├É┬Ą2g\u0093\u0092\u000e\u0006├ŞO\u0006l├ą,┬ó+H├Á├Éh(5┬Ę8├ü├×m\u0001├î$*├Ő&├ë├ü\u009c┬ú\u0018├Č\u0095├╣┬úna\u0010├Ľ├łR1d┬ęGqi\t├Ć\u0094┬Ž├ć├ít├ú ├ö\u0099\u0081\u009c├ś┬ÁH\u008c├Ü┬ź#N\u0017E┬ź\u0087L┬░w\n\u009e├ą7\u0097\u001d├ĚEKE_R\u008d \u009a0q-tm<├ä\u0091┬ĄQn├┐├Ä\u009a├Ě├║M\u001d┬Ž┬ę├ëR\u0011\u0017├ş$┬»├ż├ä0y \\┬Č+d┬ę\u0018Trq┬á├î^\u001f├ů\u001a\u008eE\f├Ą├áI├Á┬ž)f\u008a@├č├┤\u0011\u0002├î\u0018\n┬ÁK├ż\u0002j├ż\u0017├ż7├éixo\u009c\u000f=\nS┬«┬╣\t ├í"
         .length();
      char var14 = '(';
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var15.substring(++var24, var24 + var14);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var11.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = bRz(var19).intern();
            switch (var10001) {
               case 0:
                  var18[var16++] = var36;
                  if ((var24 += var14) >= var17) {
                     wINKP = var18;
                     KQBfh = new String[8];
                     SwLAk = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var20 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[8];
                     int var3 = 0;
                     String var4 = "\u0098┬│├Â\u0007|\u0017├ö┬«\u0097├ŹN├í\u0089├Ä┬ę┬Ž)├Ő├Ő├é├Ö6┬«4┬╣O\u0096├┤├Ż├ź├ć├Ě├╝\u0091y\u008d├┐┬ą\u0080\u0086@├Ź┬╗┬ę\u0012T|├ş";
                     int var5 = "\u0098┬│├Â\u0007|\u0017├ö┬«\u0097├ŹN├í\u0089├Ä┬ę┬Ž)├Ő├Ő├é├Ö6┬«4┬╣O\u0096├┤├Ż├ź├ć├Ě├╝\u0091y\u008d├┐┬ą\u0080\u0086@├Ź┬╗┬ę\u0012T|├ş".length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
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
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    HgRhM = var6;
                                    jmxFQ = new Integer[8];
                                    mCJQZ = class_2960.method_60656(bRC<"z">(2355, 6903492504471941172L ^ var20));
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "├á├Ä\u0096U\u00148\u00188yn\u008c!X(\u0087N";
                                 var5 = "├á├Ä\u0096U\u00148\u00188yn\u008c!X(\u0087N".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var14 = var15.charAt(var24);
                  break;
               default:
                  var18[var16++] = var36;
                  if ((var24 += var14) < var17) {
                     var14 = var15.charAt(var24);
                     continue label54;
                  }

                  var15 = "├ÄsM9┬»\u0010\u0085\u0088├ÖbL%├Ç├¬>P\u000e-├Ĺ\u0094┬╝ ┬¬├ł3┬╝e%BQ┬╗\u0011├ż~\u009bc'\u001baaX├ů┬Č├Ź\u0081rh├Ż┬»┬║\u0090┬ĚM:m\u0080├ą┬¬├éi┬á├ő\u0006J├ż\u008dkn\bN\u0083: s├Ę┬│<=]\u008d4┬│┬▒├Ł┬ó\u0092├Ő├┐J\u0086\u001d\u008c┬íjp├ŤT\u0099@\u001f┬Č\u00ad├ć├Ö\u009e";
                  var17 = "├ÄsM9┬»\u0010\u0085\u0088├ÖbL%├Ç├¬>P\u000e-├Ĺ\u0094┬╝ ┬¬├ł3┬╝e%BQ┬╗\u0011├ż~\u009bc'\u001baaX├ů┬Č├Ź\u0081rh├Ż┬»┬║\u0090┬ĚM:m\u0080├ą┬¬├éi┬á├ő\u0006J├ż\u008dkn\bN\u0083: s├Ę┬│<=]\u008d4┬│┬▒├Ł┬ó\u0092├Ő├┐J\u0086\u001d\u008c┬íjp├ŤT\u0099@\u001f┬Č\u00ad├ć├Ö\u009e"
                     .length();
                  var14 = 'H';
                  var24 = -1;
            }

            var25 = var15.substring(++var24, var24 + var14);
            var10001 = 0;
         }
      }
   }
}
