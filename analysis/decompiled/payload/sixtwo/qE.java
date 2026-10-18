package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_10055;
import net.minecraft.class_10186;
import net.minecraft.class_10192;
import net.minecraft.class_10201;
import net.minecraft.class_11659;
import net.minecraft.class_1799;
import net.minecraft.class_3883;
import net.minecraft.class_3887;
import net.minecraft.class_4587;
import net.minecraft.class_5321;
import net.minecraft.class_5599;
import net.minecraft.class_5602;
import net.minecraft.class_572;
import net.minecraft.class_591;
import net.minecraft.class_9334;
import net.minecraft.class_9950;
import net.minecraft.class_10186.class_10190;

public class qE extends class_3887<class_10055, class_591> {
   private final class_572<class_10055> jmbPO;
   private final class_10201 VDPZF;
   private static final long gmDen = gb.aYR(1610285853023546737L, 3427000863365390479L, MethodHandles.lookup().lookupClass()).a(189872680527603L);

   public qE(class_3883<class_10055, class_591> var1, class_5599 var2, class_10201 var3) {
      long var4 = gmDen ^ 104356839820319L;
      super(var1);
      boolean var10000 = qC.cZy();
      this.jmbPO = new class_9950(var2.method_32072(class_5602.field_52980));
      boolean var6 = var10000;

      try {
         this.VDPZF = var3;
         if (!var6) {
            iS.bwK("Ujbrd");
         }
      } catch (MatchException var7) {
         throw cZJ(var7);
      }
   }

   public void cZI(class_4587 param1, class_11659 param2, int param3, class_10055 param4, float param5, float param6) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/qE.gmDen J
      // 003: ldc2_w 34628549208267
      // 006: lxor
      // 007: lstore 7
      // 009: invokestatic sixtwo/qC.cZz ()Z
      // 00c: istore 9
      // 00e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 011: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 014: ifnonnull 01c
      // 017: return
      // 018: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01b: athrow
      // 01c: getstatic sixtwo/qu.cmARD Ljava/util/concurrent/atomic/AtomicBoolean;
      // 01f: invokevirtual java/util/concurrent/atomic/AtomicBoolean.get ()Z
      // 022: iload 9
      // 024: ifne 034
      // 027: ifne 037
      // 02a: goto 031
      // 02d: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: getstatic sixtwo/hF.BQuMu Z
      // 034: ifne 038
      // 037: return
      // 038: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 03b: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 03e: aload 4
      // 040: getfield net/minecraft/class_10055.field_53528 I
      // 043: invokevirtual net/minecraft/class_638.method_8469 (I)Lnet/minecraft/class_1297;
      // 046: astore 10
      // 048: aload 10
      // 04a: iload 9
      // 04c: ifne 065
      // 04f: instanceof net/minecraft/class_742
      // 052: ifeq 06f
      // 055: goto 05c
      // 058: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05b: athrow
      // 05c: aload 10
      // 05e: goto 065
      // 061: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 064: athrow
      // 065: checkcast net/minecraft/class_742
      // 068: astore 11
      // 06a: iload 9
      // 06c: ifeq 074
      // 06f: return
      // 070: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 073: athrow
      // 074: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 077: ldc sixtwo/ee
      // 079: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 07c: checkcast sixtwo/ee
      // 07f: astore 12
      // 081: aload 4
      // 083: getfield net/minecraft/class_10055.field_53333 Z
      // 086: iload 9
      // 088: ifne 0a1
      // 08b: ifne 147
      // 08e: goto 095
      // 091: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 094: athrow
      // 095: aload 12
      // 097: invokevirtual sixtwo/ee.bag ()Z
      // 09a: goto 0a1
      // 09d: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a0: athrow
      // 0a1: iload 9
      // 0a3: ifne 0bc
      // 0a6: ifeq 147
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: aload 4
      // 0b2: getfield net/minecraft/class_10055.field_53532 Z
      // 0b5: goto 0bc
      // 0b8: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bb: athrow
      // 0bc: ifeq 147
      // 0bf: invokestatic sixtwo/rD.dlT ()Lsixtwo/qG;
      // 0c2: aload 11
      // 0c4: invokevirtual sixtwo/qG.daj (Lnet/minecraft/class_742;)Lnet/minecraft/class_2960;
      // 0c7: astore 13
      // 0c9: aload 13
      // 0cb: ifnonnull 0d3
      // 0ce: return
      // 0cf: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d2: athrow
      // 0d3: aload 0
      // 0d4: aload 4
      // 0d6: getfield net/minecraft/class_10055.field_53418 Lnet/minecraft/class_1799;
      // 0d9: getstatic net/minecraft/class_10186$class_10190.field_54127 Lnet/minecraft/class_10186$class_10190;
      // 0dc: invokevirtual sixtwo/qE.cZH (Lnet/minecraft/class_1799;Lnet/minecraft/class_10186$class_10190;)Z
      // 0df: iload 9
      // 0e1: ifne 111
      // 0e4: ifne 147
      // 0e7: goto 0ee
      // 0ea: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ed: athrow
      // 0ee: aload 1
      // 0ef: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 0f2: iload 9
      // 0f4: ifne 143
      // 0f7: goto 0fe
      // 0fa: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fd: athrow
      // 0fe: aload 0
      // 0ff: aload 4
      // 101: getfield net/minecraft/class_10055.field_53418 Lnet/minecraft/class_1799;
      // 104: getstatic net/minecraft/class_10186$class_10190.field_54125 Lnet/minecraft/class_10186$class_10190;
      // 107: invokevirtual sixtwo/qE.cZH (Lnet/minecraft/class_1799;Lnet/minecraft/class_10186$class_10190;)Z
      // 10a: goto 111
      // 10d: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 110: athrow
      // 111: ifeq 124
      // 114: aload 1
      // 115: fconst_0
      // 116: ldc -0.053125
      // 118: ldc 0.06875
      // 11a: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 11d: goto 124
      // 120: invokestatic sixtwo/qE.cZJ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 123: athrow
      // 124: aload 2
      // 125: aload 0
      // 126: getfield sixtwo/qE.jmbPO Lnet/minecraft/class_572;
      // 129: aload 4
      // 12b: aload 1
      // 12c: aload 13
      // 12e: invokestatic net/minecraft/class_12249.method_75982 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1921;
      // 131: iload 3
      // 132: getstatic net/minecraft/class_4608.field_21444 I
      // 135: aload 4
      // 137: getfield net/minecraft/class_10055.field_61821 I
      // 13a: aconst_null
      // 13b: checkcast net/minecraft/class_11683$class_11792
      // 13e: invokeinterface net/minecraft/class_11659.method_73489 (Lnet/minecraft/class_3879;Ljava/lang/Object;Lnet/minecraft/class_4587;Lnet/minecraft/class_1921;IIILnet/minecraft/class_11683$class_11792;)V 9
      // 143: aload 1
      // 144: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 147: return
   }

   private boolean cZH(class_1799 var1, class_10190 var2) {
      long var3 = gmDen ^ 4543607227282L;
      boolean var10000 = qC.cZy();
      class_10192 var6 = (class_10192)var1.method_58694(class_9334.field_54196);
      boolean var5 = var10000;

      label72: {
         label52: {
            try {
               var11 = var6;
               if (!var5) {
                  break label52;
               }

               if (var6 == null) {
                  return false;
               }
            } catch (MatchException var10) {
               throw cZJ(var10);
            }

            var11 = var6;
         }

         try {
            var10000 = var11.comp_3176().isPresent();
            if (!var5) {
               return var10000;
            }

            if (var10000) {
               break label72;
            }
         } catch (MatchException var9) {
            throw cZJ(var9);
         }

         return false;
      }

      class_10186 var7 = this.VDPZF.method_64087((class_5321)var6.comp_3176().get());

      try {
         var10000 = var7.method_63996(var2).isEmpty();
         if (!var5) {
            return var10000;
         }

         if (!var10000) {
            return true;
         }
      } catch (MatchException var8) {
         throw cZJ(var8);
      }

      return false;
   }

   private static MatchException cZJ(MatchException var0) {
      return var0;
   }
}
