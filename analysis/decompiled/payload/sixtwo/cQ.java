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
import net.minecraft.class_1799;

public class cQ extends gg {
   private final cI YVeeN;
   private static final long dIDwx = gb.aYR(-8313343678422209238L, 1666382798646072226L, MethodHandles.lookup().lookupClass()).a(48702971064512L);
   private static final long[] ATwKC;
   private static final Integer[] uEcFa;
   private static final Map IPLYZ = new HashMap(13);

   public cQ() {
      long var1 = dIDwx ^ 115012061447096L;
      super(gf.aZL(YN<"u">(16928, 8463750756780363513L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[YN<"u">(11156, 7187003841001498446L ^ var1)];
      var10004[0] = YN<"u">(20607, 8569792296895929506L ^ var1);
      var10004[1] = YN<"u">(12924, 1455733373678829227L ^ var1);
      var10004[2] = YN<"u">(24586, 1693988386480909504L ^ var1);
      var10004[3] = YN<"u">(20205, 1171426315142709810L ^ var1);
      var10004[4] = YN<"u">(872, 4628430147079999419L ^ var1);
      var10004[5] = YN<"u">(25926, 2281275169084074384L ^ var1);
      var10004[YN<"u">(14732, 6129223670013474132L ^ var1)] = YN<"u">(28751, 4480212431312649374L ^ var1);
      var10004[YN<"u">(918, 565640435496128326L ^ var1)] = YN<"u">(10433, 4378956225841472532L ^ var1);
      var10004[YN<"u">(3932, 5149953867591811987L ^ var1)] = YN<"u">(11984, 163604969887703582L ^ var1);
      var10004[YN<"u">(15172, 1149626803597588368L ^ var1)] = YN<"u">(23119, 1118819049987626644L ^ var1);
      var10004[YN<"u">(18632, 6358486864628990996L ^ var1)] = YN<"u">(18130, 4362672075005282828L ^ var1);
      var10004[YN<"u">(12233, 6995384473076867845L ^ var1)] = YN<"u">(10433, 4378956225841472532L ^ var1);
      var10004[YN<"u">(27013, 5034897753464202574L ^ var1)] = YN<"u">(3354, 1929246537919791560L ^ var1);
      var10004[YN<"u">(5925, 4066593603432586216L ^ var1)] = YN<"u">(25414, 5834885085602541455L ^ var1);
      this.YVeeN = new cI(this, mr.clS(var10004)).Wx(sixtwo.c::z);
   }

   static {
      long var0 = dIDwx ^ 132742873231512L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[23];
      int var5 = 0;
      String var6 = "Èuçè\u0000\u0099xõùÊ¢\u00adQ,ý~Ê9\u001c_\u0019p\u008cocàõ@ä\u009d¥&¯W+\u000bnÖv\u0018\u0000F¾è[\u000bÚË\u008aZ\u0092\u008a#Ø7ÃLÉç\u008b\u0099ÕF\u0013Ó\tÜ¨\u008f«þMLÇ¨\u0012zÐÚÑ õáÆaÿÇ#c°\u001dmpñ¯\u001f\u001a\u0082þq±\u0003Ùg;þ\u0099#àôt\bÓ¨ðvK\f\u0086\u001e¢c£\u008bf`9ç\u0018nºæ'>÷ÊÄ\u009aDëfB\\\n\u0093ìZ\u009961\u0095Ï\u0087Ò\u0013\u0097\u0093[xMÇfS8[\u0084Cî";
      int var7 = "Èuçè\u0000\u0099xõùÊ¢\u00adQ,ý~Ê9\u001c_\u0019p\u008cocàõ@ä\u009d¥&¯W+\u000bnÖv\u0018\u0000F¾è[\u000bÚË\u008aZ\u0092\u008a#Ø7ÃLÉç\u008b\u0099ÕF\u0013Ó\tÜ¨\u008f«þMLÇ¨\u0012zÐÚÑ õáÆaÿÇ#c°\u001dmpñ¯\u001f\u001a\u0082þq±\u0003Ùg;þ\u0099#àôt\bÓ¨ðvK\f\u0086\u001e¢c£\u008bf`9ç\u0018nºæ'>÷ÊÄ\u009aDëfB\\\n\u0093ìZ\u009961\u0095Ï\u0087Ò\u0013\u0097\u0093[xMÇfS8[\u0084Cî"
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
                     ATwKC = var8;
                     uEcFa = new Integer[23];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "j\u0016Î¯Sèrãâ\u001aËõÉÌl*";
                  var7 = "j\u0016Î¯Sèrãâ\u001aËõÉÌl*".length();
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

   public boolean YI() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cQ.dIDwx J
      // 03: ldc2_w 129122946949163
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: invokestatic sixtwo/rD.dlU ()Lsixtwo/iq;
      // 0e: invokevirtual sixtwo/iq.bmd ()Lsixtwo/in;
      // 11: astore 4
      // 13: astore 3
      // 14: aload 0
      // 15: getfield sixtwo/cQ.RliRe Z
      // 18: ifeq 49
      // 1b: aload 4
      // 1d: aload 3
      // 1e: ifnonnull 34
      // 21: goto 28
      // 24: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: ifnull 49
      // 2b: goto 32
      // 2e: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 4
      // 34: invokevirtual sixtwo/in.bkZ ()Z
      // 37: aload 3
      // 38: ifnonnull 46
      // 3b: ifeq 49
      // 3e: goto 45
      // 41: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: bipush 1
      // 46: goto 4a
      // 49: bipush 0
      // 4a: ireturn
   }

   @hG
   public void YF(hc param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cQ.dIDwx J
      // 03: ldc2_w 104670927655486
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/cQ.bab ()Z
      // 11: ifne 19
      // 14: return
      // 15: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18: athrow
      // 19: invokestatic sixtwo/rD.dlU ()Lsixtwo/iq;
      // 1c: invokevirtual sixtwo/iq.bmd ()Lsixtwo/in;
      // 1f: astore 5
      // 21: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 24: invokevirtual net/minecraft/class_310.method_1561 ()Lnet/minecraft/class_898;
      // 27: invokevirtual net/minecraft/class_898.method_43336 ()Lnet/minecraft/class_759;
      // 2a: checkcast mixin/accessors/ItemInHandRendererAccessor
      // 2d: astore 6
      // 2f: aload 5
      // 31: invokevirtual sixtwo/in.bkX ()Z
      // 34: aload 4
      // 36: ifnonnull 86
      // 39: ifeq 81
      // 3c: goto 43
      // 3f: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 6
      // 45: invokeinterface mixin/accessors/ItemInHandRendererAccessor.getEquippedProgressMainHand ()F 1
      // 4a: fconst_1
      // 4b: fcmpg
      // 4c: aload 4
      // 4e: ifnonnull 86
      // 51: goto 58
      // 54: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: ifgt 81
      // 5b: goto 62
      // 5e: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 6
      // 64: fconst_1
      // 65: invokeinterface mixin/accessors/ItemInHandRendererAccessor.setEquippedProgressMainHand (F)V 2
      // 6a: aload 6
      // 6c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 6f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 72: invokevirtual net/minecraft/class_746.method_6047 ()Lnet/minecraft/class_1799;
      // 75: invokeinterface mixin/accessors/ItemInHandRendererAccessor.setItemStackMainHand (Lnet/minecraft/class_1799;)V 2
      // 7a: goto 81
      // 7d: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: aload 5
      // 83: invokevirtual sixtwo/in.bkY ()Z
      // 86: aload 4
      // 88: ifnonnull b1
      // 8b: ifeq d3
      // 8e: goto 95
      // 91: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 94: athrow
      // 95: aload 6
      // 97: aload 4
      // 99: ifnonnull c5
      // 9c: goto a3
      // 9f: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a2: athrow
      // a3: invokeinterface mixin/accessors/ItemInHandRendererAccessor.getEquippedProgressOffHand ()F 1
      // a8: fconst_1
      // a9: fcmpg
      // aa: goto b1
      // ad: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b0: athrow
      // b1: ifgt d3
      // b4: aload 6
      // b6: fconst_1
      // b7: invokeinterface mixin/accessors/ItemInHandRendererAccessor.setEquippedProgressOffHand (F)V 2
      // bc: aload 6
      // be: goto c5
      // c1: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c4: athrow
      // c5: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // c8: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // cb: invokevirtual net/minecraft/class_746.method_6079 ()Lnet/minecraft/class_1799;
      // ce: invokeinterface mixin/accessors/ItemInHandRendererAccessor.setItemStackOffHand (Lnet/minecraft/class_1799;)V 2
      // d3: return
   }

   public cI YJ() {
      return this.YVeeN;
   }

   private static int YM(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = YL(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public boolean YH(class_1799 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cQ.dIDwx J
      // 03: ldc2_w 122078836079198
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: aload 1
      // 0c: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 0f: astore 5
      // 11: astore 4
      // 13: aload 1
      // 14: invokevirtual net/minecraft/class_1799.method_7976 ()Lnet/minecraft/class_1839;
      // 17: astore 6
      // 19: aload 5
      // 1b: getstatic net/minecraft/class_1802.field_8162 Lnet/minecraft/class_1792;
      // 1e: aload 4
      // 20: ifnonnull 39
      // 23: if_acmpeq bf
      // 26: goto 2d
      // 29: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 5
      // 2f: getstatic net/minecraft/class_1802.field_8204 Lnet/minecraft/class_1792;
      // 32: goto 39
      // 35: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 4
      // 3b: ifnonnull 54
      // 3e: if_acmpeq bf
      // 41: goto 48
      // 44: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 5
      // 4a: getstatic net/minecraft/class_1802.field_8399 Lnet/minecraft/class_1792;
      // 4d: goto 54
      // 50: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aload 4
      // 56: ifnonnull 6f
      // 59: if_acmpeq bf
      // 5c: goto 63
      // 5f: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: aload 5
      // 65: getstatic net/minecraft/class_1802.field_8102 Lnet/minecraft/class_1792;
      // 68: goto 6f
      // 6b: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: aload 4
      // 71: ifnonnull 8a
      // 74: if_acmpeq bf
      // 77: goto 7e
      // 7a: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7d: athrow
      // 7e: aload 5
      // 80: getstatic net/minecraft/class_1802.field_8547 Lnet/minecraft/class_1792;
      // 83: goto 8a
      // 86: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 89: athrow
      // 8a: if_acmpeq bf
      // 8d: aload 6
      // 8f: getstatic net/minecraft/class_1839.field_8946 Lnet/minecraft/class_1839;
      // 92: aload 4
      // 94: ifnonnull b4
      // 97: goto 9e
      // 9a: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9d: athrow
      // 9e: if_acmpeq bf
      // a1: goto a8
      // a4: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a7: athrow
      // a8: aload 6
      // aa: getstatic net/minecraft/class_1839.field_8950 Lnet/minecraft/class_1839;
      // ad: goto b4
      // b0: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b3: athrow
      // b4: if_acmpeq bf
      // b7: bipush 1
      // b8: goto c0
      // bb: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // be: athrow
      // bf: bipush 0
      // c0: ireturn
   }

   @hG
   public void YG(gm param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cQ.dIDwx J
      // 003: ldc2_w 28555848657661
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: aload 1
      // 00f: invokevirtual sixtwo/gm.bbd ()Lnet/minecraft/class_1799;
      // 012: invokevirtual sixtwo/cQ.YH (Lnet/minecraft/class_1799;)Z
      // 015: ifeq 166
      // 018: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 01b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 01e: aload 4
      // 020: ifnonnull 041
      // 023: goto 02a
      // 026: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 029: athrow
      // 02a: ifnull 0ad
      // 02d: goto 034
      // 030: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 033: athrow
      // 034: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 037: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 03a: goto 041
      // 03d: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 040: athrow
      // 041: aload 4
      // 043: ifnonnull 060
      // 046: invokevirtual net/minecraft/class_746.method_6115 ()Z
      // 049: ifeq 0ad
      // 04c: goto 053
      // 04f: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 052: athrow
      // 053: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 056: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 059: goto 060
      // 05c: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05f: athrow
      // 060: aload 4
      // 062: ifnonnull 08b
      // 065: invokevirtual net/minecraft/class_746.method_6058 ()Lnet/minecraft/class_1268;
      // 068: getstatic net/minecraft/class_1268.field_5808 Lnet/minecraft/class_1268;
      // 06b: if_acmpne 085
      // 06e: goto 075
      // 071: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 074: athrow
      // 075: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 078: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 07b: invokevirtual net/minecraft/class_746.method_6068 ()Lnet/minecraft/class_1306;
      // 07e: goto 091
      // 081: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 084: athrow
      // 085: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 088: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 08b: invokevirtual net/minecraft/class_746.method_6068 ()Lnet/minecraft/class_1306;
      // 08e: invokevirtual net/minecraft/class_1306.method_5928 ()Lnet/minecraft/class_1306;
      // 091: astore 5
      // 093: aload 1
      // 094: aload 4
      // 096: ifnonnull 0ae
      // 099: invokevirtual sixtwo/gm.bbb ()Lnet/minecraft/class_1306;
      // 09c: aload 5
      // 09e: if_acmpne 0ad
      // 0a1: goto 0a8
      // 0a4: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a7: athrow
      // 0a8: return
      // 0a9: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ac: athrow
      // 0ad: aload 1
      // 0ae: invokevirtual sixtwo/gm.bbf ()Lnet/minecraft/class_4587;
      // 0b1: astore 5
      // 0b3: aload 1
      // 0b4: invokevirtual sixtwo/gm.bbc ()F
      // 0b7: fstore 6
      // 0b9: invokestatic sixtwo/rD.dlU ()Lsixtwo/iq;
      // 0bc: fload 6
      // 0be: invokevirtual sixtwo/iq.blR (F)Lsixtwo/im;
      // 0c1: astore 7
      // 0c3: aload 1
      // 0c4: invokevirtual sixtwo/gm.bbb ()Lnet/minecraft/class_1306;
      // 0c7: getstatic net/minecraft/class_1306.field_6183 Lnet/minecraft/class_1306;
      // 0ca: if_acmpne 0d5
      // 0cd: bipush 1
      // 0ce: goto 0d6
      // 0d1: invokestatic sixtwo/cQ.YK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d4: athrow
      // 0d5: bipush -1
      // 0d6: istore 8
      // 0d8: aload 7
      // 0da: invokevirtual sixtwo/im.bky ()F
      // 0dd: iload 8
      // 0df: i2f
      // 0e0: fmul
      // 0e1: fstore 9
      // 0e3: aload 7
      // 0e5: invokevirtual sixtwo/im.bkB ()F
      // 0e8: iload 8
      // 0ea: i2f
      // 0eb: fmul
      // 0ec: fstore 10
      // 0ee: aload 7
      // 0f0: invokevirtual sixtwo/im.bkF ()F
      // 0f3: iload 8
      // 0f5: i2f
      // 0f6: fmul
      // 0f7: fstore 11
      // 0f9: aload 7
      // 0fb: invokevirtual sixtwo/im.bkG ()F
      // 0fe: iload 8
      // 100: i2f
      // 101: fmul
      // 102: fstore 12
      // 104: aload 5
      // 106: fload 9
      // 108: aload 7
      // 10a: invokevirtual sixtwo/im.bkz ()F
      // 10d: aload 7
      // 10f: invokevirtual sixtwo/im.bkA ()F
      // 112: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 115: aload 5
      // 117: fload 10
      // 119: aload 7
      // 11b: invokevirtual sixtwo/im.bkC ()F
      // 11e: aload 7
      // 120: invokevirtual sixtwo/im.bkD ()F
      // 123: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 126: aload 5
      // 128: new org/joml/Quaternionf
      // 12b: dup
      // 12c: invokespecial org/joml/Quaternionf.<init> ()V
      // 12f: aload 7
      // 131: invokevirtual sixtwo/im.bkE ()F
      // 134: f2d
      // 135: invokestatic java/lang/Math.toRadians (D)D
      // 138: d2f
      // 139: fload 11
      // 13b: f2d
      // 13c: invokestatic java/lang/Math.toRadians (D)D
      // 13f: d2f
      // 140: fload 12
      // 142: f2d
      // 143: invokestatic java/lang/Math.toRadians (D)D
      // 146: d2f
      // 147: invokevirtual org/joml/Quaternionf.rotationXYZ (FFF)Lorg/joml/Quaternionf;
      // 14a: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 14d: aload 5
      // 14f: fload 9
      // 151: fneg
      // 152: aload 7
      // 154: invokevirtual sixtwo/im.bkz ()F
      // 157: fneg
      // 158: aload 7
      // 15a: invokevirtual sixtwo/im.bkA ()F
      // 15d: fneg
      // 15e: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 161: aload 1
      // 162: bipush 1
      // 163: invokevirtual sixtwo/gm.bdX (Z)V
      // 166: return
   }

   private static int YL(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 30488;
      if (uEcFa[var3] == null) {
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
         long var5 = ATwKC[var3];
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
         Object[] var9 = (Object[])IPLYZ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               IPLYZ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cQ", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         uEcFa[var3] = var15;
      }

      return uEcFa[var3];
   }

   private static CallSite YN(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("YM".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cQ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException YK(MatchException var0) {
      return var0;
   }
}
