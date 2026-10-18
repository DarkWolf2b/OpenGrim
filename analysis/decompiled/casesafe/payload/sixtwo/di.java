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
import net.minecraft.class_1007;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_4587;
import net.minecraft.class_591;
import net.minecraft.class_742;
import net.minecraft.class_630.class_628;
import org.joml.Matrix4f;

public class di extends gg {
   cI TLppV;
   cE ewpSI;
   private class_591 VPirC;
   private class_591 pwusN;
   private static final long GXYJi = gb.aYR(-5591434420050671696L, 5569277507217008856L, MethodHandles.lookup().lookupClass()).a(117880245901184L);
   private static final long[] NvTrW;
   private static final Integer[] AuasL;
   private static final Map xMVly = new HashMap(13);

   public di() {
      long var1 = GXYJi ^ 36827359685288L;
      super(gf.aZL(afQ<"m">(26253, 6764530411512513956L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[afQ<"m">(13471, 3385975074117228469L ^ var1)];
      var10004[0] = afQ<"m">(9929, 1367566077078898156L ^ var1);
      var10004[1] = afQ<"m">(30766, 7301576936887606045L ^ var1);
      var10004[2] = afQ<"m">(18033, 8485216346712237388L ^ var1);
      var10004[3] = afQ<"m">(14766, 466476792101247633L ^ var1);
      var10004[4] = afQ<"m">(1742, 3793935523859998202L ^ var1);
      var10004[5] = afQ<"m">(9173, 1530756226342158586L ^ var1);
      var10004[afQ<"m">(10346, 1412012257921993544L ^ var1)] = afQ<"m">(16823, 6239870161549681305L ^ var1);
      var10004[afQ<"m">(17524, 6816190745287092063L ^ var1)] = afQ<"m">(29690, 5371415015640453340L ^ var1);
      this.TLppV = new cI(this, mr.clS(var10004)).Wx(aR::yc);
      var10004 = new int[afQ<"m">(4388, 8986846692517687808L ^ var1)];
      var10004[0] = afQ<"m">(9173, 1530756226342158586L ^ var1);
      var10004[1] = afQ<"m">(7727, 273750123794971934L ^ var1);
      var10004[2] = afQ<"m">(20579, 5960492419103847252L ^ var1);
      var10004[3] = afQ<"m">(21968, 7142664585183295228L ^ var1);
      var10004[4] = afQ<"m">(20579, 5960492419103847252L ^ var1);
      var10004[5] = afQ<"m">(22339, 1041369922197746815L ^ var1);
      var10004[afQ<"m">(10346, 1412012257921993544L ^ var1)] = afQ<"m">(16893, 8445444392566022854L ^ var1);
      var10004[afQ<"m">(17524, 6816190745287092063L ^ var1)] = afQ<"m">(27670, 2934841098635595582L ^ var1);
      var10004[afQ<"m">(13471, 3385975074117228469L ^ var1)] = afQ<"m">(13802, 729658236581189336L ^ var1);
      var10004[afQ<"m">(3009, 3694493035092683000L ^ var1)] = afQ<"m">(25727, 4242353717542012743L ^ var1);
      var10004[afQ<"m">(16169, 5354542235208686623L ^ var1)] = afQ<"m">(11399, 9108289225181564842L ^ var1);
      var10004[afQ<"m">(18751, 51409225664621071L ^ var1)] = afQ<"m">(29525, 7902804811802759275L ^ var1);
      this.ewpSI = new cE(this, mr.clS(var10004)).Vf(() -> false);
   }

   static {
      long var0 = GXYJi ^ 98725604236388L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[29];
      int var5 = 0;
      String var6 = "\u000e├ôD├ŁB├Éu\u009eH├ü\u000bh\"y\u0082\u0010├ą├Čq├ž>v┬│_\u0013├░7t┬░>┬Ş \u009c┬║\u008d\u001a├És\u0086l├Ł\u0018├Ż\u0094\b├»├×\u0091├ľ├Ş\\├Ć\u0092 \u008e\u001d┬úEv┬»\u0086┬Ě├Ě┬╣┬¬\u0088g\u0095├é├Ç├╝\u0002Xu├Üe\u0002#%\n\u000b\u009e├▓Y\u009d├łQ├ő├ą36F\u009e┬á$├ľ\u0000\u009e├Ő.p ├«├é┬╝┬▒@├ć├óf\u001fpi\u0090├ŁO├ë!\u0087├ćqS┬░8t\u008dC├┐q\u0093\u007f├Ę \u0013B\u0017o├Ę\n┬Ş┬Žy├Á├ÄhkI┬╝\u0006}n┬ą┬░\u001b\u0080\u0013├ü\u0015Gc├úu┬Ž├žeE$┬╗┬ó%┬╣\u0081\u0099W├Ç,C├é,├Ĺ`┬Č_\u0095├║\u000f\u008c(#┬│\u0090├Ľ├Ş┬░\u009e┬žq\u0098├ć\u0098|+├łs├«├»4!\u001f├▓,\u0087Ai_├Ą";
      int var7 = "\u000e├ôD├ŁB├Éu\u009eH├ü\u000bh\"y\u0082\u0010├ą├Čq├ž>v┬│_\u0013├░7t┬░>┬Ş \u009c┬║\u008d\u001a├És\u0086l├Ł\u0018├Ż\u0094\b├»├×\u0091├ľ├Ş\\├Ć\u0092 \u008e\u001d┬úEv┬»\u0086┬Ě├Ě┬╣┬¬\u0088g\u0095├é├Ç├╝\u0002Xu├Üe\u0002#%\n\u000b\u009e├▓Y\u009d├łQ├ő├ą36F\u009e┬á$├ľ\u0000\u009e├Ő.p ├«├é┬╝┬▒@├ć├óf\u001fpi\u0090├ŁO├ë!\u0087├ćqS┬░8t\u008dC├┐q\u0093\u007f├Ę \u0013B\u0017o├Ę\n┬Ş┬Žy├Á├ÄhkI┬╝\u0006}n┬ą┬░\u001b\u0080\u0013├ü\u0015Gc├úu┬Ž├žeE$┬╗┬ó%┬╣\u0081\u0099W├Ç,C├é,├Ĺ`┬Č_\u0095├║\u000f\u008c(#┬│\u0090├Ľ├Ş┬░\u009e┬žq\u0098├ć\u0098|+├łs├«├»4!\u001f├▓,\u0087Ai_├Ą"
         .length();
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
                     NvTrW = var8;
                     AuasL = new Integer[29];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u0010┬╝\u008ct├ľ├äq├ëw┬│\r┬«┬┤=f\n";
                  var7 = "\u0010┬╝\u008ct├ľ├äq├ëw┬│\r┬«┬┤=f\n".length();
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

   @hG
   public void afx(gL$tk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/di.GXYJi J
      // 03: ldc2_w 10098743633303
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 4
      // 0f: ifnonnull 2b
      // 12: aload 0
      // 13: invokevirtual sixtwo/di.bab ()Z
      // 16: ifeq 2f
      // 19: goto 20
      // 1c: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: invokestatic sixtwo/pv.cPH (Lsixtwo/gL$tk;)V
      // 24: goto 2b
      // 27: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 1
      // 2c: invokestatic sixtwo/pl.cNJ (Lsixtwo/gL$tk;)V
      // 2f: return
   }

   @hG
   public void afy(gM var1) {
      pv.cPJ();
      pl.cNN();
   }

   @hG
   public void afz(gN var1) {
      pv.cPJ();
      pl.cNN();
   }

   @hG
   public void afA(gi param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/di.GXYJi J
      // 03: ldc2_w 30270019359604
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/di.bab ()Z
      // 11: ifne 19
      // 14: return
      // 15: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18: athrow
      // 19: aload 1
      // 1a: invokevirtual sixtwo/gi.baL ()Lnet/minecraft/class_1297;
      // 1d: astore 5
      // 1f: aload 5
      // 21: aload 4
      // 23: ifnonnull 3c
      // 26: instanceof net/minecraft/class_1657
      // 29: ifeq 4c
      // 2c: goto 33
      // 2f: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: aload 5
      // 35: goto 3c
      // 38: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: checkcast net/minecraft/class_1657
      // 3f: astore 6
      // 41: aload 6
      // 43: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 46: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 49: if_acmpne 51
      // 4c: return
      // 4d: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: invokestatic sixtwo/rD.dml ()Lsixtwo/fo;
      // 54: aload 6
      // 56: invokevirtual sixtwo/fo.aLp (Lnet/minecraft/class_1657;)Z
      // 59: aload 4
      // 5b: ifnonnull 6f
      // 5e: ifeq 69
      // 61: goto 68
      // 64: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: return
      // 69: aload 0
      // 6a: aload 6
      // 6c: invokevirtual sixtwo/di.afK (Lnet/minecraft/class_1657;)Z
      // 6f: ifeq 7e
      // 72: aload 1
      // 73: bipush 1
      // 74: invokevirtual sixtwo/gi.bdX (Z)V
      // 77: goto 7e
      // 7a: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7d: athrow
      // 7e: return
   }

   @hG
   public void afB(gk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/di.GXYJi J
      // 003: ldc2_w 101769820254661
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 4
      // 00f: ifnonnull 028
      // 012: aload 0
      // 013: invokevirtual sixtwo/di.bab ()Z
      // 016: ifne 025
      // 019: goto 020
      // 01c: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 024: athrow
      // 025: invokestatic sixtwo/pv.cPI ()V
      // 028: aload 1
      // 029: invokevirtual sixtwo/gk.baT ()Lsixtwo/lC;
      // 02c: astore 5
      // 02e: aload 5
      // 030: invokevirtual sixtwo/lC.cfh ()F
      // 033: fstore 6
      // 035: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 038: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 03b: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 03e: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 043: astore 7
      // 045: aload 7
      // 047: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 04c: ifeq 114
      // 04f: aload 7
      // 051: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 056: checkcast net/minecraft/class_1297
      // 059: astore 8
      // 05b: aload 8
      // 05d: aload 4
      // 05f: ifnonnull 071
      // 062: instanceof net/minecraft/class_1657
      // 065: ifeq 045
      // 068: goto 06f
      // 06b: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06e: athrow
      // 06f: aload 8
      // 071: checkcast net/minecraft/class_1657
      // 074: astore 9
      // 076: aload 9
      // 078: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 07b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 07e: if_acmpne 08d
      // 081: aload 4
      // 083: ifnull 045
      // 086: goto 08d
      // 089: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08c: athrow
      // 08d: invokestatic sixtwo/rD.dml ()Lsixtwo/fo;
      // 090: aload 9
      // 092: invokevirtual sixtwo/fo.aLp (Lnet/minecraft/class_1657;)Z
      // 095: aload 4
      // 097: ifnonnull 0b5
      // 09a: ifeq 0b0
      // 09d: goto 0a4
      // 0a0: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a3: athrow
      // 0a4: aload 4
      // 0a6: ifnull 045
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: aload 9
      // 0b2: invokestatic sixtwo/pl.cNK (Lnet/minecraft/class_1657;)Z
      // 0b5: ifeq 0c4
      // 0b8: aload 4
      // 0ba: ifnull 045
      // 0bd: goto 0c4
      // 0c0: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c3: athrow
      // 0c4: aload 0
      // 0c5: aload 9
      // 0c7: fload 6
      // 0c9: invokevirtual sixtwo/di.afC (Lnet/minecraft/class_1657;F)Lsixtwo/lc;
      // 0cc: astore 10
      // 0ce: aload 10
      // 0d0: ifnonnull 0df
      // 0d3: aload 4
      // 0d5: ifnull 045
      // 0d8: goto 0df
      // 0db: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0de: athrow
      // 0df: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 0e2: aload 9
      // 0e4: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 0e7: ifeq 0f4
      // 0ea: getstatic sixtwo/pF.bnwqC Lsixtwo/pF;
      // 0ed: goto 0f7
      // 0f0: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: getstatic sixtwo/pF.JMCCO Lsixtwo/pF;
      // 0f7: astore 11
      // 0f9: invokestatic sixtwo/rD.dlS ()Lsixtwo/pI;
      // 0fc: aload 11
      // 0fe: invokevirtual sixtwo/pI.cSP (Lsixtwo/pF;)Ljava/util/List;
      // 101: astore 12
      // 103: aload 5
      // 105: aload 10
      // 107: aload 9
      // 109: aload 12
      // 10b: bipush 0
      // 10c: invokestatic sixtwo/pj.cNs (Lsixtwo/lC;Lsixtwo/lc;Lnet/minecraft/class_1297;Ljava/util/List;Z)V
      // 10f: aload 4
      // 111: ifnull 045
      // 114: return
   }

   private lc afJ(class_1657 param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/di.GXYJi J
      // 003: ldc2_w 86348320948434
      // 006: lxor
      // 007: lstore 3
      // 008: aload 1
      // 009: fload 2
      // 00a: invokevirtual net/minecraft/class_1657.method_30950 (F)Lnet/minecraft/class_243;
      // 00d: astore 6
      // 00f: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 012: aload 1
      // 013: aload 6
      // 015: invokestatic sixtwo/jg.bBB (Lnet/minecraft/class_1297;Lnet/minecraft/class_243;)Lnet/minecraft/class_238;
      // 018: astore 7
      // 01a: sipush 15959
      // 01d: ldc2_w 2105578051774773015
      // 020: lload 3
      // 021: lxor
      // 022: invokedynamic m (IJ)I bsm=sixtwo/di.afQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 027: anewarray 457
      // 02a: dup
      // 02b: bipush 0
      // 02c: new net/minecraft/class_243
      // 02f: dup
      // 030: aload 7
      // 032: getfield net/minecraft/class_238.field_1323 D
      // 035: aload 7
      // 037: getfield net/minecraft/class_238.field_1322 D
      // 03a: aload 7
      // 03c: getfield net/minecraft/class_238.field_1321 D
      // 03f: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 042: aastore
      // 043: dup
      // 044: bipush 1
      // 045: new net/minecraft/class_243
      // 048: dup
      // 049: aload 7
      // 04b: getfield net/minecraft/class_238.field_1323 D
      // 04e: aload 7
      // 050: getfield net/minecraft/class_238.field_1325 D
      // 053: aload 7
      // 055: getfield net/minecraft/class_238.field_1321 D
      // 058: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 05b: aastore
      // 05c: dup
      // 05d: bipush 2
      // 05e: new net/minecraft/class_243
      // 061: dup
      // 062: aload 7
      // 064: getfield net/minecraft/class_238.field_1320 D
      // 067: aload 7
      // 069: getfield net/minecraft/class_238.field_1322 D
      // 06c: aload 7
      // 06e: getfield net/minecraft/class_238.field_1321 D
      // 071: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 074: aastore
      // 075: dup
      // 076: bipush 3
      // 077: new net/minecraft/class_243
      // 07a: dup
      // 07b: aload 7
      // 07d: getfield net/minecraft/class_238.field_1320 D
      // 080: aload 7
      // 082: getfield net/minecraft/class_238.field_1325 D
      // 085: aload 7
      // 087: getfield net/minecraft/class_238.field_1321 D
      // 08a: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 08d: aastore
      // 08e: dup
      // 08f: bipush 4
      // 090: new net/minecraft/class_243
      // 093: dup
      // 094: aload 7
      // 096: getfield net/minecraft/class_238.field_1323 D
      // 099: aload 7
      // 09b: getfield net/minecraft/class_238.field_1322 D
      // 09e: aload 7
      // 0a0: getfield net/minecraft/class_238.field_1324 D
      // 0a3: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 0a6: aastore
      // 0a7: dup
      // 0a8: bipush 5
      // 0a9: new net/minecraft/class_243
      // 0ac: dup
      // 0ad: aload 7
      // 0af: getfield net/minecraft/class_238.field_1323 D
      // 0b2: aload 7
      // 0b4: getfield net/minecraft/class_238.field_1325 D
      // 0b7: aload 7
      // 0b9: getfield net/minecraft/class_238.field_1324 D
      // 0bc: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 0bf: aastore
      // 0c0: dup
      // 0c1: sipush 14051
      // 0c4: ldc2_w 2384609308447670206
      // 0c7: lload 3
      // 0c8: lxor
      // 0c9: invokedynamic m (IJ)I bsm=sixtwo/di.afQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ce: new net/minecraft/class_243
      // 0d1: dup
      // 0d2: aload 7
      // 0d4: getfield net/minecraft/class_238.field_1320 D
      // 0d7: aload 7
      // 0d9: getfield net/minecraft/class_238.field_1322 D
      // 0dc: aload 7
      // 0de: getfield net/minecraft/class_238.field_1324 D
      // 0e1: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 0e4: aastore
      // 0e5: dup
      // 0e6: sipush 24380
      // 0e9: ldc2_w 1597567475443471987
      // 0ec: lload 3
      // 0ed: lxor
      // 0ee: invokedynamic m (IJ)I bsm=sixtwo/di.afQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f3: new net/minecraft/class_243
      // 0f6: dup
      // 0f7: aload 7
      // 0f9: getfield net/minecraft/class_238.field_1320 D
      // 0fc: aload 7
      // 0fe: getfield net/minecraft/class_238.field_1325 D
      // 101: aload 7
      // 103: getfield net/minecraft/class_238.field_1324 D
      // 106: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 109: aastore
      // 10a: astore 8
      // 10c: ldc_w Infinity
      // 10f: fstore 9
      // 111: ldc_w Infinity
      // 114: fstore 10
      // 116: ldc_w -Infinity
      // 119: fstore 11
      // 11b: ldc_w -Infinity
      // 11e: fstore 12
      // 120: aload 8
      // 122: astore 13
      // 124: astore 5
      // 126: aload 13
      // 128: arraylength
      // 129: istore 14
      // 12b: bipush 0
      // 12c: istore 15
      // 12e: iload 15
      // 130: iload 14
      // 132: if_icmpge 192
      // 135: aload 13
      // 137: iload 15
      // 139: aaload
      // 13a: astore 16
      // 13c: aload 16
      // 13e: invokestatic sixtwo/jI.bIw (Lnet/minecraft/class_243;)Lnet/minecraft/class_241;
      // 141: astore 17
      // 143: aload 5
      // 145: ifnonnull 18d
      // 148: aload 17
      // 14a: ifnonnull 15a
      // 14d: goto 154
      // 150: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 153: athrow
      // 154: aconst_null
      // 155: areturn
      // 156: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 159: athrow
      // 15a: fload 9
      // 15c: aload 17
      // 15e: getfield net/minecraft/class_241.field_1343 F
      // 161: invokestatic java/lang/Math.min (FF)F
      // 164: fstore 9
      // 166: fload 10
      // 168: aload 17
      // 16a: getfield net/minecraft/class_241.field_1342 F
      // 16d: invokestatic java/lang/Math.min (FF)F
      // 170: fstore 10
      // 172: fload 11
      // 174: aload 17
      // 176: getfield net/minecraft/class_241.field_1343 F
      // 179: invokestatic java/lang/Math.max (FF)F
      // 17c: fstore 11
      // 17e: fload 12
      // 180: aload 17
      // 182: getfield net/minecraft/class_241.field_1342 F
      // 185: invokestatic java/lang/Math.max (FF)F
      // 188: fstore 12
      // 18a: iinc 15 1
      // 18d: aload 5
      // 18f: ifnull 12e
      // 192: fload 11
      // 194: fload 9
      // 196: fsub
      // 197: fstore 13
      // 199: fload 12
      // 19b: fload 10
      // 19d: fsub
      // 19e: fstore 14
      // 1a0: fload 13
      // 1a2: fconst_1
      // 1a3: fcmpg
      // 1a4: aload 5
      // 1a6: ifnonnull 1be
      // 1a9: ifle 1c1
      // 1ac: goto 1b3
      // 1af: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b2: athrow
      // 1b3: fload 14
      // 1b5: fconst_1
      // 1b6: fcmpg
      // 1b7: goto 1be
      // 1ba: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1bd: athrow
      // 1be: ifgt 1c7
      // 1c1: aconst_null
      // 1c2: areturn
      // 1c3: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c6: athrow
      // 1c7: new sixtwo/lc
      // 1ca: dup
      // 1cb: fload 9
      // 1cd: fload 10
      // 1cf: fload 13
      // 1d1: fload 14
      // 1d3: invokespecial sixtwo/lc.<init> (FFFF)V
      // 1d6: areturn
   }

   private lc afF(class_591 var1, class_10055 var2, class_1309 var3, float var4, class_243 var5) {
      var1.method_63514();
      class_4587 var6 = new class_4587();
      class_243 var7 = var3.method_30950(var4).method_1019(var5);
      float var8 = var2.field_53446;
      var6.method_22904(var7.field_1352, var7.field_1351, var7.field_1350);
      var6.method_22905(var2.field_53453, var2.field_53453, var2.field_53453);
      this.afG(var6, var2, var8);
      var6.method_22905(-1.0F, -1.0F, 1.0F);
      var6.method_22905(0.9375F, 0.9375F, 0.9375F);
      var6.method_46416(0.0F, -1.501F, 0.0F);
      di$sA var9 = new di$sA();
      var1.method_63512().method_35745(var6, (var2x, var3x, var4x, var5x) -> this.afH(var9, var2x.method_23761(), var5x));
      return var9.doD();
   }

   private void afG(class_4587 param1, class_10055 param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/di.GXYJi J
      // 03: ldc2_w 47557923012103
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0c: aload 1
      // 0d: getstatic net/minecraft/class_7833.field_40716 Lnet/minecraft/class_7833;
      // 10: ldc_w 180.0
      // 13: fload 3
      // 14: fsub
      // 15: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 1a: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 1d: astore 6
      // 1f: aload 2
      // 20: getfield net/minecraft/class_10055.field_53411 Z
      // 23: aload 6
      // 25: ifnonnull 91
      // 28: ifeq 8b
      // 2b: goto 32
      // 2e: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 2
      // 33: getfield net/minecraft/class_10055.field_53459 Z
      // 36: aload 6
      // 38: ifnonnull 70
      // 3b: goto 42
      // 3e: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: ifne 6c
      // 45: goto 4c
      // 48: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: aload 1
      // 4d: getstatic net/minecraft/class_7833.field_40714 Lnet/minecraft/class_7833;
      // 50: aload 2
      // 51: invokevirtual net/minecraft/class_10055.method_64259 ()F
      // 54: ldc_w -90.0
      // 57: aload 2
      // 58: getfield net/minecraft/class_10055.field_53448 F
      // 5b: fsub
      // 5c: fmul
      // 5d: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 62: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 65: goto 6c
      // 68: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: aload 2
      // 6d: getfield net/minecraft/class_10055.field_53535 Z
      // 70: ifeq 8a
      // 73: aload 1
      // 74: getstatic net/minecraft/class_7833.field_40716 Lnet/minecraft/class_7833;
      // 77: aload 2
      // 78: getfield net/minecraft/class_10055.field_53521 F
      // 7b: invokeinterface net/minecraft/class_7833.rotation (F)Lorg/joml/Quaternionf; 2
      // 80: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 83: goto 8a
      // 86: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 89: athrow
      // 8a: return
      // 8b: aload 2
      // 8c: getfield net/minecraft/class_10055.field_53403 F
      // 8f: fconst_0
      // 90: fcmpg
      // 91: aload 6
      // 93: ifnonnull a5
      // 96: ifgt a1
      // 99: goto a0
      // 9c: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9f: athrow
      // a0: return
      // a1: aload 2
      // a2: getfield net/minecraft/class_10055.field_53458 Z
      // a5: ifeq b7
      // a8: ldc_w -90.0
      // ab: aload 2
      // ac: getfield net/minecraft/class_10055.field_53448 F
      // af: fsub
      // b0: goto ba
      // b3: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b6: athrow
      // b7: ldc_w -90.0
      // ba: fstore 7
      // bc: aload 1
      // bd: aload 6
      // bf: ifnonnull ed
      // c2: getstatic net/minecraft/class_7833.field_40714 Lnet/minecraft/class_7833;
      // c5: aload 2
      // c6: getfield net/minecraft/class_10055.field_53403 F
      // c9: fconst_0
      // ca: fload 7
      // cc: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // cf: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // d4: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // d7: aload 2
      // d8: getfield net/minecraft/class_10055.field_53412 Z
      // db: ifeq f7
      // de: goto e5
      // e1: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e4: athrow
      // e5: aload 1
      // e6: goto ed
      // e9: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ec: athrow
      // ed: fconst_0
      // ee: ldc_w -1.0
      // f1: ldc_w 0.3
      // f4: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // f7: return
   }

   private boolean afK(class_1657 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/di.GXYJi J
      // 03: ldc2_w 55135245729899
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 10: aload 1
      // 11: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 14: ifeq 21
      // 17: getstatic sixtwo/pF.bnwqC Lsixtwo/pF;
      // 1a: goto 24
      // 1d: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: getstatic sixtwo/pF.JMCCO Lsixtwo/pF;
      // 24: astore 5
      // 26: invokestatic sixtwo/rD.dlS ()Lsixtwo/pI;
      // 29: aload 5
      // 2b: invokevirtual sixtwo/pI.cSP (Lsixtwo/pF;)Ljava/util/List;
      // 2e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 33: astore 6
      // 35: aload 6
      // 37: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 3c: ifeq ac
      // 3f: aload 6
      // 41: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 46: checkcast sixtwo/py
      // 49: astore 7
      // 4b: aload 7
      // 4d: aload 4
      // 4f: ifnonnull 6d
      // 52: instanceof sixtwo/po
      // 55: aload 4
      // 57: ifnonnull ad
      // 5a: goto 61
      // 5d: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: ifeq a7
      // 64: goto 6b
      // 67: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a: athrow
      // 6b: aload 7
      // 6d: checkcast sixtwo/po
      // 70: astore 8
      // 72: aload 8
      // 74: invokevirtual sixtwo/po.active ()Z
      // 77: aload 4
      // 79: ifnonnull 92
      // 7c: ifeq a5
      // 7f: goto 86
      // 82: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 85: athrow
      // 86: aload 8
      // 88: invokevirtual sixtwo/po.cOt ()Z
      // 8b: goto 92
      // 8e: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 91: athrow
      // 92: aload 4
      // 94: ifnonnull a2
      // 97: ifeq a5
      // 9a: goto a1
      // 9d: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a0: athrow
      // a1: bipush 1
      // a2: goto a6
      // a5: bipush 0
      // a6: ireturn
      // a7: aload 4
      // a9: ifnull 35
      // ac: bipush 0
      // ad: ireturn
   }

   private void afH(di$sA var1, Matrix4f var2, class_628 var3) {
      this.afI(var1, var2, var3.field_3645, var3.field_3644, var3.field_3643);
      this.afI(var1, var2, var3.field_3645, var3.field_3644, var3.field_3646);
      this.afI(var1, var2, var3.field_3645, var3.field_3647, var3.field_3643);
      this.afI(var1, var2, var3.field_3645, var3.field_3647, var3.field_3646);
      this.afI(var1, var2, var3.field_3648, var3.field_3644, var3.field_3643);
      this.afI(var1, var2, var3.field_3648, var3.field_3644, var3.field_3646);
      this.afI(var1, var2, var3.field_3648, var3.field_3647, var3.field_3643);
      this.afI(var1, var2, var3.field_3648, var3.field_3647, var3.field_3646);
   }

   private void afI(di$sA var1, Matrix4f var2, float var3, float var4, float var5) {
      long var6 = GXYJi ^ 124438496625417L;
      float var8 = var3 / 16.0F;
      float var9 = var4 / 16.0F;
      float var10 = var5 / 16.0F;
      class_241 var11 = jI.bIw(
         new class_243(
            var2.m30() + var2.m00() * var8 + var2.m10() * var9 + var2.m20() * var10,
            var2.m31() + var2.m01() * var8 + var2.m11() * var9 + var2.m21() * var10,
            var2.m32() + var2.m02() * var8 + var2.m12() * var9 + var2.m22() * var10
         )
      );

      try {
         if (var11 != null) {
            var1.doC(var11);
         }
      } catch (MatchException var12) {
         throw afN(var12);
      }
   }

   private class_591 afE(class_742 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/di.GXYJi J
      // 03: ldc2_w 97322265575738
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: aload 1
      // 0c: invokevirtual net/minecraft/class_742.method_52814 ()Lnet/minecraft/class_8685;
      // 0f: invokevirtual net/minecraft/class_8685.comp_1629 ()Lnet/minecraft/class_7920;
      // 12: astore 5
      // 14: astore 4
      // 16: aload 5
      // 18: getstatic net/minecraft/class_7920.field_41122 Lnet/minecraft/class_7920;
      // 1b: if_acmpne 26
      // 1e: bipush 1
      // 1f: goto 27
      // 22: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: bipush 0
      // 27: istore 6
      // 29: iload 6
      // 2b: ifeq 6c
      // 2e: aload 0
      // 2f: getfield sixtwo/di.pwusN Lnet/minecraft/class_591;
      // 32: aload 4
      // 34: ifnonnull 6b
      // 37: goto 3e
      // 3a: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: ifnonnull 67
      // 41: goto 48
      // 44: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 0
      // 49: new net/minecraft/class_591
      // 4c: dup
      // 4d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 50: invokevirtual net/minecraft/class_310.method_31974 ()Lnet/minecraft/class_5599;
      // 53: getstatic net/minecraft/class_5602.field_27581 Lnet/minecraft/class_5601;
      // 56: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 59: bipush 1
      // 5a: invokespecial net/minecraft/class_591.<init> (Lnet/minecraft/class_630;Z)V
      // 5d: putfield sixtwo/di.pwusN Lnet/minecraft/class_591;
      // 60: goto 67
      // 63: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: aload 0
      // 68: getfield sixtwo/di.pwusN Lnet/minecraft/class_591;
      // 6b: areturn
      // 6c: aload 0
      // 6d: getfield sixtwo/di.VPirC Lnet/minecraft/class_591;
      // 70: aload 4
      // 72: ifnonnull a2
      // 75: ifnonnull 9e
      // 78: goto 7f
      // 7b: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: aload 0
      // 80: new net/minecraft/class_591
      // 83: dup
      // 84: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 87: invokevirtual net/minecraft/class_310.method_31974 ()Lnet/minecraft/class_5599;
      // 8a: getstatic net/minecraft/class_5602.field_27577 Lnet/minecraft/class_5601;
      // 8d: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 90: bipush 0
      // 91: invokespecial net/minecraft/class_591.<init> (Lnet/minecraft/class_630;Z)V
      // 94: putfield sixtwo/di.VPirC Lnet/minecraft/class_591;
      // 97: goto 9e
      // 9a: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9d: athrow
      // 9e: aload 0
      // 9f: getfield sixtwo/di.VPirC Lnet/minecraft/class_591;
      // a2: areturn
   }

   private lc afC(class_1657 param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/di.GXYJi J
      // 03: ldc2_w 91480251006744
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: aload 1
      // 0e: aload 5
      // 10: ifnonnull 28
      // 13: instanceof net/minecraft/class_742
      // 16: ifeq 4e
      // 19: goto 20
      // 1c: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: goto 28
      // 24: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: checkcast net/minecraft/class_742
      // 2b: astore 6
      // 2d: aload 0
      // 2e: aload 6
      // 30: fload 2
      // 31: invokevirtual sixtwo/di.afD (Lnet/minecraft/class_742;F)Lsixtwo/lc;
      // 34: astore 7
      // 36: aload 7
      // 38: aload 5
      // 3a: ifnonnull 54
      // 3d: ifnull 4e
      // 40: goto 47
      // 43: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 7
      // 49: areturn
      // 4a: invokestatic sixtwo/di.afN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: aload 0
      // 4f: aload 1
      // 50: fload 2
      // 51: invokevirtual sixtwo/di.afJ (Lnet/minecraft/class_1657;F)Lsixtwo/lc;
      // 54: areturn
   }

   private lc afD(class_742 var1, float var2) {
      long var3 = GXYJi ^ 127117523854106L;
      class_1007 var5 = rD.dlmvG.method_1561().method_74405(var1);
      class_591 var6 = this.afE(var1);

      try {
         if (var6 == null) {
            return null;
         }
      } catch (MatchException var8) {
         throw afN(var8);
      }

      class_10055 var7 = new class_10055();
      var5.method_62604(var1, var7, var2);
      return this.afF(var6, var7, var1, var2, var5.method_23206(var7));
   }

   private static MatchException afN(MatchException var0) {
      return var0;
   }

   private static CallSite afQ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("afP".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/di" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int afO(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 27059;
      if (AuasL[var3] == null) {
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
         long var5 = NvTrW[var3];
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
         Object[] var9 = (Object[])xMVly.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               xMVly.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/di", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         AuasL[var3] = var15;
      }

      return AuasL[var3];
   }

   private static int afP(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = afO(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
