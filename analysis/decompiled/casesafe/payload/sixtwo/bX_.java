package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_266;
import net.minecraft.class_9011;

public class bX extends cp {
   private static final int Rtycl;
   private static final int wRANw;
   private static final int hDLMV;
   private static final int VhZzF;
   private static final Comparator<class_9011> PmBSa;
   private static boolean ckbaU;
   private static final long ueCGs = gb.aYR(-6352574835933114182L, -7086090206663917643L, MethodHandles.lookup().lookupClass()).a(125013036524319L);
   private static final String LoMwA;
   private static final long[] sJLTV;
   private static final Integer[] LWJTM;
   private static final Map HBGny;
   private static final long KkDAQ;

   public bX() {
      long var1 = ueCGs ^ 60361530914731L;
      boolean var10000 = Ou();
      int[] var10002 = new int[OA<"a">(8551, 8254241876095219080L ^ var1)];
      var10002[0] = OA<"a">(14440, 2141938888679468160L ^ var1);
      var10002[1] = OA<"a">(3833, 4205056191634053642L ^ var1);
      var10002[2] = OA<"a">(3024, 3334588232586960693L ^ var1);
      var10002[3] = OA<"a">(6135, 1603148736766542618L ^ var1);
      var10002[4] = OA<"a">(26714, 3886628696305007786L ^ var1);
      var10002[5] = OA<"a">(4603, 7666107141455021330L ^ var1);
      var10002[OA<"a">(29550, 3016745336866695050L ^ var1)] = OA<"a">(15154, 3287154120589815768L ^ var1);
      var10002[OA<"a">(8338, 6477281778622608498L ^ var1)] = OA<"a">(15546, 5161176016599459919L ^ var1);
      var10002[OA<"a">(13683, 81490849338433938L ^ var1)] = OA<"a">(30923, 2129758940031151149L ^ var1);
      var10002[OA<"a">(29975, 21732422715630053L ^ var1)] = OA<"a">(11012, 5783056976966139875L ^ var1);
      super(var10002, lf.TMFYi);
      boolean var3 = var10000;

      try {
         if (!var3) {
            iS.bwK("knyA2b");
         }
      } catch (MatchException var4) {
         throw Ow(var4);
      }
   }

   static {
      long var16 = ueCGs ^ 89947509825978L;
      Ot(true);
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var20 = var18.doFinal("├Üc`\u0019┬Â├Ź├Ç\u009f".getBytes("ISO-8859-1"));
      String var29 = Ox(var20).intern();
      int var10001 = -1;
      LoMwA = var29;
      HBGny = new HashMap(13);
      Cipher var5;
      var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var6 = 1; var6 < 8; var6++) {
         var10003[var6] = (byte)(var16 << var6 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var11 = new long[23];
      int var8 = 0;
      String var9 = "\u0015C├║├îa1Dg\u0000┬ČH┬░[┬¬├Ś\u0080Tl┬Č├Ć\u0012\u0002h├Ż\u0096y┬╗├ő\u0084\u0011\u001fe\u008e\u008d\u001c\\┬Ş\u0013r\b@┬Â\u0011\u0097S\u008e,\u0016\\<jz\u0001@├ú7├ť┬Ě\u001c┬»x├Â├é\u0005\u0089X┬ž>├źu\u009d┬Ęa├á +\u0097├íG├ô\u0093;;\u0017├ş\u009eb├á\u0012\u008c├î├¬\u007f┬Č5\u0007\t0├┐\u008dWyP,m\u007f\u0017├┤D\u008e\u001e\u000f┬Ę5Q&┬┤┬žy|n\u0017;├Ż\u0086┬ú├ä├ú\u0019*~S.├ĄsU├Č├ô\u008f├ć├╝├»{\u0088\u0091ck├č)T├│c├ő^v├ť\u0094├Ą5┬íX├ć\u0082&~├Ä\u0014├ş";
      int var10 = "\u0015C├║├îa1Dg\u0000┬ČH┬░[┬¬├Ś\u0080Tl┬Č├Ć\u0012\u0002h├Ż\u0096y┬╗├ő\u0084\u0011\u001fe\u008e\u008d\u001c\\┬Ş\u0013r\b@┬Â\u0011\u0097S\u008e,\u0016\\<jz\u0001@├ú7├ť┬Ě\u001c┬»x├Â├é\u0005\u0089X┬ž>├źu\u009d┬Ęa├á +\u0097├íG├ô\u0093;;\u0017├ş\u009eb├á\u0012\u008c├î├¬\u007f┬Č5\u0007\t0├┐\u008dWyP,m\u007f\u0017├┤D\u008e\u001e\u000f┬Ę5Q&┬┤┬žy|n\u0017;├Ż\u0086┬ú├ä├ú\u0019*~S.├ĄsU├Č├ô\u008f├ć├╝├»{\u0088\u0091ck├č)T├│c├ő^v├ť\u0094├Ą5┬íX├ć\u0082&~├Ä\u0014├ş"
         .length();
      byte var7 = 0;

      label39:
      while (true) {
         var10001 = var7;
         var7 += 8;
         byte[] var12 = var9.substring(var10001, var7).getBytes("ISO-8859-1");
         long[] var23 = var11;
         var10001 = var8++;
         long var31 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var36 = -1;

         while (true) {
            long var13 = var31;
            byte[] var15 = var5.doFinal(
               new byte[]{
                  (byte)(var13 >>> 56),
                  (byte)(var13 >>> 48),
                  (byte)(var13 >>> 40),
                  (byte)(var13 >>> 32),
                  (byte)(var13 >>> 24),
                  (byte)(var13 >>> 16),
                  (byte)(var13 >>> 8),
                  (byte)var13
               }
            );
            long var39 = (var15[0] & 255L) << 56
               | (var15[1] & 255L) << 48
               | (var15[2] & 255L) << 40
               | (var15[3] & 255L) << 32
               | (var15[4] & 255L) << 24
               | (var15[5] & 255L) << 16
               | (var15[6] & 255L) << 8
               | var15[7] & 255L;
            switch (var36) {
               case 0:
                  var23[var10001] = var39;
                  if (var7 >= var10) {
                     sJLTV = var11;
                     LWJTM = new Integer[23];
                     hDLMV = OA<"a">(13182, var16 ^ 5157849299394769293L);
                     Rtycl = OA<"a">(14090, var16 ^ 2671455856374953452L);
                     VhZzF = OA<"a">(21854, var16 ^ 8209158299869206436L);
                     wRANw = OA<"a">(20600, var16 ^ 3750981237575635591L);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long var2 = -7413647882450658063L;
                     byte[] var4 = var0.doFinal(
                        new byte[]{
                           (byte)(var2 >>> 56),
                           (byte)(var2 >>> 48),
                           (byte)(var2 >>> 40),
                           (byte)(var2 >>> 32),
                           (byte)(var2 >>> 24),
                           (byte)(var2 >>> 16),
                           (byte)(var2 >>> 8),
                           (byte)var2
                        }
                     );
                     long var34 = (var4[0] & 255L) << 56
                        | (var4[1] & 255L) << 48
                        | (var4[2] & 255L) << 40
                        | (var4[3] & 255L) << 32
                        | (var4[4] & 255L) << 24
                        | (var4[5] & 255L) << 16
                        | (var4[6] & 255L) << 8
                        | var4[7] & 255L;
                     byte var28 = -1;
                     KkDAQ = var34;
                     PmBSa = Comparator.comparing(class_9011::comp_2128).reversed().thenComparing(class_9011::comp_2127, String.CASE_INSENSITIVE_ORDER);
                     return;
                  }
                  break;
               default:
                  var23[var10001] = var39;
                  if (var7 < var10) {
                     continue label39;
                  }

                  var9 = "├ë┬á├şQ\u0097\u009f├┐\u000e!\u0011!├ÁY ├ľw";
                  var10 = "├ë┬á├şQ\u0097\u009f├┐\u000e!\u0011!├ÁY ├ľw".length();
                  var7 = 0;
            }

            byte var27 = var7;
            var7 += 8;
            var12 = var9.substring(var27, var7).getBytes("ISO-8859-1");
            var23 = var11;
            var10001 = var8++;
            var31 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            var36 = 0;
         }
      }
   }

   private void Op(lC var1, bX$sj var2) {
      long var3 = ueCGs ^ 74037842022557L;
      float var6 = this.toIeR + 7.0F;
      int var7 = Math.round(this.toIeR + var2.backgroundWidth());
      boolean var10000 = Ou();
      var1.ccU(this.toIeR, this.QWaAn, var2.backgroundWidth(), var2.backgroundHeight(), this.ormBS.dhj(), this.gILqY.dhj());
      boolean var5 = var10000;
      int var8 = Math.round(var6 + (var2.contentWidth() - var2.titleWidth()) / 2.0F);
      int var9 = Math.round(this.QWaAn + 5.0F);
      jz.bGI(var1.cfc(), rD.dlmvG.field_1772, var2.title(), var8, var9, -1, false, jz$tU.iSvaF);
      int var10 = 0;

      while (true) {
         if (var10 < var2.entries().length) {
            bX$sk var11 = var2.entries()[var10];
            int var12 = Math.round(this.QWaAn + 5.0F + 10.0F + var10 * OA<"a">(29975, 21744172751865555L ^ var3));

            try {
               jz.bGI(var1.cfc(), rD.dlmvG.field_1772, var11.name, Math.round(var6), var12, -1, false, jz$tU.iSvaF);
               jz.bGI(
                  var1.cfc(),
                  rD.dlmvG.field_1772,
                  var11.score,
                  var7 - OA<"a">(3309, 2049509420340199210L ^ var3) - var11.scoreWidth,
                  var12,
                  -1,
                  false,
                  jz$tU.iSvaF
               );
               var10++;
               if (!var5) {
                  break;
               }

               if (var5) {
                  continue;
               }
            } catch (MatchException var13) {
               throw Ow(var13);
            }
         }

         jz.bGJ();
         break;
      }
   }

   @Override
   protected void NV(lC var1) {
      long var2 = ueCGs ^ 93150474461873L;
      bX$sj var4 = this.Oo(this.On());

      try {
         if (var4 != null) {
            this.Op(var1, var4);
         }
      } catch (MatchException var5) {
         throw Ow(var5);
      }
   }

   @Override
   public void LX(lC var1) {
      long var2 = ueCGs ^ 70384363048305L;
      boolean var10000 = Ou();
      bX$sj var5 = this.Oo(this.On());
      boolean var4 = var10000;

      float var10;
      label43: {
         label42: {
            label41: {
               try {
                  var8 = this;
                  var10001 = var5;
                  if (!var4) {
                     break label42;
                  }

                  if (var5 == null) {
                     break label41;
                  }
               } catch (MatchException var7) {
                  throw Ow(var7);
               }

               var10001 = var5;
               break label42;
            }

            var10 = 0.0F;
            break label43;
         }

         var10 = var10001.backgroundWidth();
      }

      label32: {
         label31: {
            label30: {
               try {
                  var8.jTsqG = var10;
                  var9 = this;
                  var11 = var5;
                  if (!var4) {
                     break label31;
                  }

                  if (var5 == null) {
                     break label30;
                  }
               } catch (MatchException var6) {
                  throw Ow(var6);
               }

               var11 = var5;
               break label31;
            }

            var10 = 0.0F;
            break label32;
         }

         var10 = var11.backgroundHeight();
      }

      var9.Xtjvx = var10;
      super.LX(var1);
   }

   public static void Ot(boolean var0) {
      ckbaU = var0;
   }

   private static CallSite OA(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Oz".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bX" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException Ow(MatchException var0) {
      return var0;
   }

   private bX$sj Oo(class_266 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bX.ueCGs J
      // 003: ldc2_w 83170076983543
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/bX.Ov ()Z
      // 00b: istore 4
      // 00d: aload 1
      // 00e: iload 4
      // 010: ifne 024
      // 013: ifnonnull 023
      // 016: goto 01d
      // 019: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: aconst_null
      // 01e: areturn
      // 01f: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 022: athrow
      // 023: aload 1
      // 024: invokevirtual net/minecraft/class_266.method_1117 ()Lnet/minecraft/class_269;
      // 027: astore 5
      // 029: aload 1
      // 02a: getstatic net/minecraft/class_9025.field_47567 Lnet/minecraft/class_9025;
      // 02d: invokevirtual net/minecraft/class_266.method_55380 (Lnet/minecraft/class_9022;)Lnet/minecraft/class_9022;
      // 030: astore 6
      // 032: aload 5
      // 034: aload 1
      // 035: invokevirtual net/minecraft/class_269.method_1184 (Lnet/minecraft/class_266;)Ljava/util/Collection;
      // 038: invokeinterface java/util/Collection.stream ()Ljava/util/stream/Stream; 1
      // 03d: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/bX.Os (Lnet/minecraft/class_9011;)Z, (Lnet/minecraft/class_9011;)Z ]
      // 042: invokeinterface java/util/stream/Stream.filter (Ljava/util/function/Predicate;)Ljava/util/stream/Stream; 2
      // 047: getstatic sixtwo/bX.PmBSa Ljava/util/Comparator;
      // 04a: invokeinterface java/util/stream/Stream.sorted (Ljava/util/Comparator;)Ljava/util/stream/Stream; 2
      // 04f: getstatic sixtwo/bX.KkDAQ J
      // 052: invokeinterface java/util/stream/Stream.limit (J)Ljava/util/stream/Stream; 3
      // 057: aload 5
      // 059: aload 6
      // 05b: invokedynamic apply (Lnet/minecraft/class_269;Lnet/minecraft/class_9022;)Ljava/util/function/Function; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/bX.Or (Lnet/minecraft/class_269;Lnet/minecraft/class_9022;Lnet/minecraft/class_9011;)Lsixtwo/bX$sk;, (Lnet/minecraft/class_9011;)Lsixtwo/bX$sk; ]
      // 060: invokeinterface java/util/stream/Stream.map (Ljava/util/function/Function;)Ljava/util/stream/Stream; 2
      // 065: invokedynamic apply ()Ljava/util/function/IntFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (I)Ljava/lang/Object;, sixtwo/bX.Oq (I)[Lsixtwo/bX$sk;, (I)[Lsixtwo/bX$sk; ]
      // 06a: invokeinterface java/util/stream/Stream.toArray (Ljava/util/function/IntFunction;)[Ljava/lang/Object; 2
      // 06f: checkcast [Lsixtwo/bX$sk;
      // 072: astore 7
      // 074: aload 1
      // 075: invokevirtual net/minecraft/class_266.method_1114 ()Lnet/minecraft/class_2561;
      // 078: astore 8
      // 07a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 07d: getfield net/minecraft/class_310.field_1772 Lnet/minecraft/class_327;
      // 080: aload 8
      // 082: invokevirtual net/minecraft/class_327.method_27525 (Lnet/minecraft/class_5348;)I
      // 085: istore 9
      // 087: iload 9
      // 089: istore 10
      // 08b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 08e: getfield net/minecraft/class_310.field_1772 Lnet/minecraft/class_327;
      // 091: getstatic sixtwo/bX.LoMwA Ljava/lang/String;
      // 094: invokevirtual net/minecraft/class_327.method_1727 (Ljava/lang/String;)I
      // 097: istore 11
      // 099: aload 7
      // 09b: astore 12
      // 09d: aload 12
      // 09f: arraylength
      // 0a0: istore 13
      // 0a2: bipush 0
      // 0a3: istore 14
      // 0a5: iload 14
      // 0a7: iload 13
      // 0a9: if_icmpge 104
      // 0ac: aload 12
      // 0ae: iload 14
      // 0b0: aaload
      // 0b1: astore 15
      // 0b3: iload 10
      // 0b5: iload 4
      // 0b7: ifne 107
      // 0ba: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0bd: getfield net/minecraft/class_310.field_1772 Lnet/minecraft/class_327;
      // 0c0: aload 15
      // 0c2: getfield sixtwo/bX$sk.name Lnet/minecraft/class_2561;
      // 0c5: invokevirtual net/minecraft/class_327.method_27525 (Lnet/minecraft/class_5348;)I
      // 0c8: aload 15
      // 0ca: getfield sixtwo/bX$sk.scoreWidth I
      // 0cd: iload 4
      // 0cf: ifne 0f2
      // 0d2: goto 0d9
      // 0d5: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d8: athrow
      // 0d9: ifle 0f5
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: iload 11
      // 0e5: aload 15
      // 0e7: getfield sixtwo/bX$sk.scoreWidth I
      // 0ea: iadd
      // 0eb: goto 0f2
      // 0ee: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f1: athrow
      // 0f2: goto 0f6
      // 0f5: bipush 0
      // 0f6: iadd
      // 0f7: invokestatic java/lang/Math.max (II)I
      // 0fa: istore 10
      // 0fc: iinc 14 1
      // 0ff: iload 4
      // 101: ifeq 0a5
      // 104: aload 7
      // 106: arraylength
      // 107: istore 12
      // 109: iload 10
      // 10b: sipush 24047
      // 10e: ldc2_w 1510181800225537616
      // 111: lload 2
      // 112: lxor
      // 113: invokedynamic a (IJ)I bsm=sixtwo/bX.OA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 118: iadd
      // 119: istore 13
      // 11b: sipush 2723
      // 11e: ldc2_w 395943336030087443
      // 121: lload 2
      // 122: lxor
      // 123: invokedynamic a (IJ)I bsm=sixtwo/bX.OA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 128: iload 12
      // 12a: sipush 29975
      // 12d: ldc2_w 21753594645337785
      // 130: lload 2
      // 131: lxor
      // 132: invokedynamic a (IJ)I bsm=sixtwo/bX.OA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 137: imul
      // 138: iadd
      // 139: sipush 2723
      // 13c: ldc2_w 395943336030087443
      // 13f: lload 2
      // 140: lxor
      // 141: invokedynamic a (IJ)I bsm=sixtwo/bX.OA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 146: iadd
      // 147: istore 14
      // 149: new sixtwo/bX$sj
      // 14c: dup
      // 14d: aload 8
      // 14f: iload 9
      // 151: iload 10
      // 153: iload 13
      // 155: iload 14
      // 157: aload 7
      // 159: invokespecial sixtwo/bX$sj.<init> (Lnet/minecraft/class_2561;IIII[Lsixtwo/bX$sk;)V
      // 15c: areturn
   }

   private class_266 On() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bX.ueCGs J
      // 03: ldc2_w 55926620075077
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bX.Ou ()Z
      // 0b: istore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: iload 3
      // 10: ifeq 2a
      // 13: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 16: ifnull 3b
      // 19: goto 20
      // 1c: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 23: goto 2a
      // 26: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: iload 3
      // 2b: ifeq 44
      // 2e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 31: ifnonnull 41
      // 34: goto 3b
      // 37: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aconst_null
      // 3c: areturn
      // 3d: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 44: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 47: invokevirtual net/minecraft/class_638.method_8428 ()Lnet/minecraft/class_269;
      // 4a: astore 4
      // 4c: aconst_null
      // 4d: astore 5
      // 4f: aload 4
      // 51: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 54: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 57: invokevirtual net/minecraft/class_746.method_5820 ()Ljava/lang/String;
      // 5a: invokevirtual net/minecraft/class_269.method_1164 (Ljava/lang/String;)Lnet/minecraft/class_268;
      // 5d: astore 6
      // 5f: aload 6
      // 61: iload 3
      // 62: ifeq 71
      // 65: ifnull 87
      // 68: goto 6f
      // 6b: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: aload 6
      // 71: invokevirtual net/minecraft/class_268.method_1202 ()Lnet/minecraft/class_124;
      // 74: invokestatic net/minecraft/class_8646.method_52622 (Lnet/minecraft/class_124;)Lnet/minecraft/class_8646;
      // 77: astore 7
      // 79: aload 7
      // 7b: ifnull 87
      // 7e: aload 4
      // 80: aload 7
      // 82: invokevirtual net/minecraft/class_269.method_1189 (Lnet/minecraft/class_8646;)Lnet/minecraft/class_266;
      // 85: astore 5
      // 87: aload 5
      // 89: iload 3
      // 8a: ifeq 99
      // 8d: ifnull 9c
      // 90: goto 97
      // 93: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 96: athrow
      // 97: aload 5
      // 99: goto a4
      // 9c: aload 4
      // 9e: getstatic net/minecraft/class_8646.field_45157 Lnet/minecraft/class_8646;
      // a1: invokevirtual net/minecraft/class_269.method_1189 (Lnet/minecraft/class_8646;)Lnet/minecraft/class_266;
      // a4: areturn
   }

   private static int Oz(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Oy(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static boolean Ou() {
      return ckbaU;
   }

   private static String Ox(byte[] var0) {
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

   public static boolean Ov() {
      boolean var0 = Ou();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw Ow(var1);
      }
   }

   @Override
   protected void Ol() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bX.ueCGs J
      // 03: ldc2_w 134622164894098
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bX.Ov ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifne 27
      // 11: getfield sixtwo/bX.mZZzJ Lsixtwo/cJ;
      // 14: invokevirtual sixtwo/cJ.WF ()Z
      // 17: ifne 26
      // 1a: goto 21
      // 1d: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: return
      // 22: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: aload 0
      // 28: invokevirtual sixtwo/bX.On ()Lnet/minecraft/class_266;
      // 2b: invokevirtual sixtwo/bX.Oo (Lnet/minecraft/class_266;)Lsixtwo/bX$sj;
      // 2e: astore 4
      // 30: aload 4
      // 32: ifnonnull 3a
      // 35: return
      // 36: invokestatic sixtwo/bX.Ow (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: invokestatic sixtwo/rm.dip ()Lnet/minecraft/class_241;
      // 3d: astore 5
      // 3f: aload 0
      // 40: invokevirtual sixtwo/bX.RT ()F
      // 43: fstore 6
      // 45: aload 4
      // 47: invokevirtual sixtwo/bX$sj.entries ()[Lsixtwo/bX$sk;
      // 4a: arraylength
      // 4b: sipush 20943
      // 4e: ldc2_w 2303240770903356160
      // 51: lload 1
      // 52: lxor
      // 53: invokedynamic a (IJ)I bsm=sixtwo/bX.OA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 58: imul
      // 59: istore 7
      // 5b: iload 7
      // 5d: i2f
      // 5e: fload 6
      // 60: fmul
      // 61: fstore 8
      // 63: ldc 10.0
      // 65: fload 6
      // 67: fmul
      // 68: fstore 9
      // 6a: aload 0
      // 6b: aload 5
      // 6d: getfield net/minecraft/class_241.field_1343 F
      // 70: aload 0
      // 71: invokevirtual sixtwo/bX.RU ()F
      // 74: fsub
      // 75: putfield sixtwo/bX.toIeR F
      // 78: aload 0
      // 79: aload 5
      // 7b: getfield net/minecraft/class_241.field_1342 F
      // 7e: fconst_2
      // 7f: fdiv
      // 80: fload 8
      // 82: ldc 3.0
      // 84: fdiv
      // 85: fadd
      // 86: fload 8
      // 88: fsub
      // 89: fload 9
      // 8b: fsub
      // 8c: putfield sixtwo/bX.QWaAn F
      // 8f: return
   }

   private static int Oy(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 10285;
      if (LWJTM[var3] == null) {
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
         long var5 = sJLTV[var3];
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
         Object[] var9 = (Object[])HBGny.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               HBGny.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bX", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         LWJTM[var3] = var15;
      }

      return LWJTM[var3];
   }

   @Override
   public boolean Om() {
      long var1 = ueCGs ^ 95888876808091L;

      try {
         if (this.On() != null) {
            return true;
         }
      } catch (MatchException var3) {
         throw Ow(var3);
      }

      return false;
   }
}
