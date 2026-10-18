package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10055;
import net.minecraft.class_11659;
import net.minecraft.class_3883;
import net.minecraft.class_3887;
import net.minecraft.class_4587;
import net.minecraft.class_591;

public class qD extends class_3887<class_10055, class_591> {
   private static final long YijCR = gb.aYR(8156976936887596683L, -6150078433035784067L, MethodHandles.lookup().lookupClass()).a(182193575313587L);
   private static final long tRFrF;

   public qD(class_3883<class_10055, class_591> var1) {
      super(var1);
   }

   static {
      long var0 = YijCR ^ 17297729517945L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -5095854130532000521L;
      byte[] var6 = var2.doFinal(
         new byte[]{
            (byte)(var4 >>> 56),
            (byte)(var4 >>> 48),
            (byte)(var4 >>> 40),
            (byte)(var4 >>> 32),
            (byte)(var4 >>> 24),
            (byte)(var4 >>> 16),
            (byte)(var4 >>> 8),
            (byte)var4
         }
      );
      long var7 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      tRFrF = var7;
   }

   private static MatchException cZG(MatchException var0) {
      return var0;
   }

   public void cZE(class_4587 param1, class_11659 param2, int param3, class_10055 param4, float param5, float param6) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/qD.YijCR J
      // 003: ldc2_w 9647052389088
      // 006: lxor
      // 007: lstore 7
      // 009: invokestatic sixtwo/qC.cZy ()Z
      // 00c: istore 9
      // 00e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 011: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 014: ifnonnull 01c
      // 017: return
      // 018: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01b: athrow
      // 01c: getstatic sixtwo/qu.cmARD Ljava/util/concurrent/atomic/AtomicBoolean;
      // 01f: invokevirtual java/util/concurrent/atomic/AtomicBoolean.get ()Z
      // 022: iload 9
      // 024: ifeq 034
      // 027: ifne 037
      // 02a: goto 031
      // 02d: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: getstatic sixtwo/hF.BQuMu Z
      // 034: ifne 038
      // 037: return
      // 038: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 03b: ldc sixtwo/cS
      // 03d: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 040: checkcast sixtwo/cS
      // 043: astore 10
      // 045: aload 10
      // 047: invokevirtual sixtwo/cS.bag ()Z
      // 04a: ifne 052
      // 04d: return
      // 04e: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 051: athrow
      // 052: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 055: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 058: aload 4
      // 05a: getfield net/minecraft/class_10055.field_53528 I
      // 05d: invokevirtual net/minecraft/class_638.method_8469 (I)Lnet/minecraft/class_1297;
      // 060: astore 11
      // 062: aload 11
      // 064: iload 9
      // 066: ifeq 07f
      // 069: instanceof net/minecraft/class_742
      // 06c: ifeq 089
      // 06f: goto 076
      // 072: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: aload 11
      // 078: goto 07f
      // 07b: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07e: athrow
      // 07f: checkcast net/minecraft/class_742
      // 082: astore 12
      // 084: iload 9
      // 086: ifne 08e
      // 089: return
      // 08a: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08d: athrow
      // 08e: aload 12
      // 090: iload 9
      // 092: ifeq 0a9
      // 095: invokevirtual net/minecraft/class_742.method_5767 ()Z
      // 098: ifeq 0a7
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: return
      // 0a3: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a6: athrow
      // 0a7: aload 12
      // 0a9: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0ac: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0af: if_acmpne 0f3
      // 0b2: aload 10
      // 0b4: invokevirtual sixtwo/cS.Zb ()Lsixtwo/cw;
      // 0b7: invokevirtual sixtwo/cw.TC ()Z
      // 0ba: iload 9
      // 0bc: ifeq 0e3
      // 0bf: goto 0c6
      // 0c2: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c5: athrow
      // 0c6: ifeq 0f2
      // 0c9: goto 0d0
      // 0cc: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cf: athrow
      // 0d0: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0d3: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 0d6: invokevirtual net/minecraft/class_315.method_31044 ()Lnet/minecraft/class_5498;
      // 0d9: invokevirtual net/minecraft/class_5498.method_31034 ()Z
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: iload 9
      // 0e5: ifeq 12c
      // 0e8: ifeq 129
      // 0eb: goto 0f2
      // 0ee: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f1: athrow
      // 0f2: return
      // 0f3: aload 10
      // 0f5: invokevirtual sixtwo/cS.Zc ()Lsixtwo/cw;
      // 0f8: invokevirtual sixtwo/cw.TC ()Z
      // 0fb: iload 9
      // 0fd: ifeq 119
      // 100: ifeq 128
      // 103: goto 10a
      // 106: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 109: athrow
      // 10a: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 10d: aload 12
      // 10f: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 112: goto 119
      // 115: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 118: athrow
      // 119: iload 9
      // 11b: ifeq 12c
      // 11e: ifne 129
      // 121: goto 128
      // 124: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 127: athrow
      // 128: return
      // 129: getstatic sixtwo/kn.YNOIY Z
      // 12c: iload 9
      // 12e: ifeq 13f
      // 131: ifeq 13c
      // 134: goto 13b
      // 137: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13a: athrow
      // 13b: return
      // 13c: invokestatic sixtwo/js.bFC ()Z
      // 13f: iload 9
      // 141: ifeq 150
      // 144: ifeq 14f
      // 147: goto 14e
      // 14a: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14d: athrow
      // 14e: return
      // 14f: iload 3
      // 150: iload 9
      // 152: ifeq 172
      // 155: getstatic sixtwo/qD.tRFrF J
      // 158: l2i
      // 159: if_icmpne 168
      // 15c: goto 163
      // 15f: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 162: athrow
      // 163: return
      // 164: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 167: athrow
      // 168: aload 1
      // 169: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 16c: invokestatic sixtwo/oR.cJN ()Lsixtwo/oJ;
      // 16f: invokevirtual sixtwo/oJ.cIT ()Z
      // 172: ifeq 17e
      // 175: ldc -0.43
      // 177: goto 180
      // 17a: invokestatic sixtwo/qD.cZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17d: athrow
      // 17e: ldc -0.5
      // 180: fstore 13
      // 182: aload 0
      // 183: invokevirtual sixtwo/qD.method_17165 ()Lnet/minecraft/class_583;
      // 186: checkcast net/minecraft/class_591
      // 189: invokevirtual net/minecraft/class_591.method_2838 ()Lnet/minecraft/class_630;
      // 18c: aload 1
      // 18d: invokevirtual net/minecraft/class_630.method_22703 (Lnet/minecraft/class_4587;)V
      // 190: aload 1
      // 191: fconst_0
      // 192: fload 13
      // 194: fconst_0
      // 195: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 198: aload 1
      // 199: getstatic net/minecraft/class_7833.field_40717 Lnet/minecraft/class_7833;
      // 19c: ldc 180.0
      // 19e: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 1a3: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 1a6: aload 1
      // 1a7: getstatic net/minecraft/class_7833.field_40716 Lnet/minecraft/class_7833;
      // 1aa: ldc 90.0
      // 1ac: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 1b1: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 1b4: aload 10
      // 1b6: invokevirtual sixtwo/cS.Zd ()Lsixtwo/cG;
      // 1b9: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 1bc: astore 14
      // 1be: aload 10
      // 1c0: invokevirtual sixtwo/cS.Ze ()Lsixtwo/cC;
      // 1c3: invokevirtual sixtwo/cC.VC ()I
      // 1c6: istore 15
      // 1c8: aload 1
      // 1c9: aload 12
      // 1cb: aload 14
      // 1cd: iload 15
      // 1cf: invokedynamic run (Lnet/minecraft/class_4587;Lnet/minecraft/class_742;Lsixtwo/mG;I)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/qD.cZF (Lnet/minecraft/class_4587;Lnet/minecraft/class_742;Lsixtwo/mG;I)V, ()V ]
      // 1d4: invokestatic sixtwo/jo.bEt (Ljava/lang/Runnable;)V
      // 1d7: aload 1
      // 1d8: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 1db: return
   }
}
