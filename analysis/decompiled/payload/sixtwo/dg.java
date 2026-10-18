package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class dg extends gg implements lA {
   private final cJ VOBNu;
   private final List<dg$sx> ChEiM;
   private static final long QfGak = gb.aYR(-1772309155934898947L, -944120009877253470L, MethodHandles.lookup().lookupClass()).a(165083780033864L);
   private static final long[] pNdJj;
   private static final Integer[] NNFnv;
   private static final Map QMwqx = new HashMap(13);

   public dg() {
      long var1 = QfGak ^ 42222089288517L;
      super(gf.aZL(aeo<"z">(29149, 3417750203006507560L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[aeo<"z">(1356, 7641563749127663264L ^ var1)];
      var10004[0] = aeo<"z">(21504, 4236352724280999927L ^ var1);
      var10004[1] = aeo<"z">(23021, 5658198064218862086L ^ var1);
      var10004[2] = aeo<"z">(17377, 7818027662024763400L ^ var1);
      var10004[3] = aeo<"z">(22501, 2108073227154684947L ^ var1);
      var10004[4] = aeo<"z">(11125, 6956994587815280783L ^ var1);
      var10004[5] = aeo<"z">(27438, 3264460335328379073L ^ var1);
      var10004[aeo<"z">(27732, 5550142466755839911L ^ var1)] = aeo<"z">(28113, 5509852497307387432L ^ var1);
      var10004[aeo<"z">(31181, 8814333640289374783L ^ var1)] = aeo<"z">(10691, 5327407659607065144L ^ var1);
      var10004[aeo<"z">(5111, 2426697277178460191L ^ var1)] = aeo<"z">(5581, 7330007637712977468L ^ var1);
      var10004[aeo<"z">(27347, 8607727595187913021L ^ var1)] = aeo<"z">(14648, 3450444234467873490L ^ var1);
      var10004[aeo<"z">(4687, 7024607344476174779L ^ var1)] = aeo<"z">(22568, 5734964713855972309L ^ var1);
      var10004[aeo<"z">(19702, 5960571819919697672L ^ var1)] = aeo<"z">(19349, 6781789638423863405L ^ var1);
      var10004[aeo<"z">(17175, 4621675107598985451L ^ var1)] = aeo<"z">(21808, 9204922958725840593L ^ var1);
      var10004[aeo<"z">(6381, 6425311866541421312L ^ var1)] = aeo<"z">(25637, 1579127595714924506L ^ var1);
      this.VOBNu = new cJ(this, mr.clS(var10004)).WE(false);
      this.ChEiM = new ArrayList<>();
   }

   static {
      long var0 = QfGak ^ 91724781611417L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[25];
      int var5 = 0;
      String var6 = "\b\u000fÚw\u00177\u009eª$bR\u0016ô\u008exãwÂhæ¦7´ÊE\u0093\u0011\u009fö¿ñ\b\u0013§Ðóãi\u0085\u001bÔ\u008f\u0086ø¸NÛù \u0098N\u0081A§DK¦£üÙ$Ô?\u0091]{Äz±f^\u0096nV\u0011¸9\u0097hË\u0018¡êûZfNMWô\u0011Æ:^I¤\u009aú©\u0080¼t?2ùÄL\u008b\u0086$\u001e\u0082móäs^\u0004ÔØ¦Q\u009fÞ\u008d\u00029Ñ\u0083\u0081ýå-\u0098ÚCd\"`>ú\u0002Â\u008bAÉÓP²\u008dÂö\u0089\u0019\u000e\u0085<^\u0011/ÝÇ`ü.\u008b3ÎÅ\u001e\u0002æ@\u008a\u0010µQ\u0018!ÿ¸A\u008b%";
      int var7 = "\b\u000fÚw\u00177\u009eª$bR\u0016ô\u008exãwÂhæ¦7´ÊE\u0093\u0011\u009fö¿ñ\b\u0013§Ðóãi\u0085\u001bÔ\u008f\u0086ø¸NÛù \u0098N\u0081A§DK¦£üÙ$Ô?\u0091]{Äz±f^\u0096nV\u0011¸9\u0097hË\u0018¡êûZfNMWô\u0011Æ:^I¤\u009aú©\u0080¼t?2ùÄL\u008b\u0086$\u001e\u0082móäs^\u0004ÔØ¦Q\u009fÞ\u008d\u00029Ñ\u0083\u0081ýå-\u0098ÚCd\"`>ú\u0002Â\u008bAÉÓP²\u008dÂö\u0089\u0019\u000e\u0085<^\u0011/ÝÇ`ü.\u008b3ÎÅ\u001e\u0002æ@\u008a\u0010µQ\u0018!ÿ¸A\u008b%"
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
                     pNdJj = var8;
                     NNFnv = new Integer[25];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\b/Ð\u0094\fÆ~\u000b\u0091i\u0098\u007fèC\fc";
                  var7 = "\b/Ð\u0094\fÆ~\u000b\u0091i\u0098\u007fèC\fc".length();
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
   public void aeg(gk var1) {
      long var2 = QfGak ^ 47391735873797L;
      iS[] var4 = dh.afl();

      try {
         if (!this.bab()) {
            return;
         }
      } catch (MatchException var8) {
         throw ael(var8);
      }

      lC var5 = var1.baT();

      for (dg$sx var7 : this.ChEiM) {
         var7.doo(var5, this.VOBNu.WF());
         if (var4 != null) {
            break;
         }
      }
   }

   @hG
   public void aei(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dg.QfGak J
      // 003: ldc2_w 135643104794914
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dg.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 02f
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: aload 0
      // 022: getfield sixtwo/dg.ChEiM Ljava/util/List;
      // 025: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/dg$sx.dop ()Z, (Lsixtwo/dg$sx;)Z ]
      // 02a: invokeinterface java/util/List.removeIf (Ljava/util/function/Predicate;)Z 2
      // 02f: pop
      // 030: new java/util/HashSet
      // 033: dup
      // 034: invokespecial java/util/HashSet.<init> ()V
      // 037: astore 5
      // 039: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 03c: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 03f: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 042: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 047: astore 6
      // 049: aload 6
      // 04b: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 050: ifeq 09b
      // 053: aload 6
      // 055: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 05a: checkcast net/minecraft/class_1297
      // 05d: astore 7
      // 05f: aload 7
      // 061: aload 4
      // 063: ifnonnull 081
      // 066: instanceof net/minecraft/class_1684
      // 069: aload 4
      // 06b: ifnonnull 0ad
      // 06e: goto 075
      // 071: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 074: athrow
      // 075: ifeq 096
      // 078: goto 07f
      // 07b: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07e: athrow
      // 07f: aload 7
      // 081: checkcast net/minecraft/class_1684
      // 084: astore 8
      // 086: aload 5
      // 088: aload 8
      // 08a: invokevirtual net/minecraft/class_1684.method_5628 ()I
      // 08d: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 090: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 095: pop
      // 096: aload 4
      // 098: ifnull 049
      // 09b: aload 0
      // 09c: getfield sixtwo/dg.ChEiM Ljava/util/List;
      // 09f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0a4: astore 6
      // 0a6: aload 6
      // 0a8: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0ad: ifeq 102
      // 0b0: aload 6
      // 0b2: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0b7: checkcast sixtwo/dg$sx
      // 0ba: astore 7
      // 0bc: aload 4
      // 0be: ifnonnull 0f7
      // 0c1: aload 5
      // 0c3: aload 7
      // 0c5: getfield sixtwo/dg$sx.SDjuQ I
      // 0c8: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0cb: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 0d0: aload 4
      // 0d2: ifnonnull 119
      // 0d5: goto 0dc
      // 0d8: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: ifne 0fd
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e5: athrow
      // 0e6: aload 7
      // 0e8: getfield sixtwo/dg$sx.iAudN Lsixtwo/rk;
      // 0eb: fconst_0
      // 0ec: invokevirtual sixtwo/rk.dhd (F)F
      // 0ef: pop
      // 0f0: goto 0f7
      // 0f3: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f6: athrow
      // 0f7: aload 7
      // 0f9: bipush 1
      // 0fa: putfield sixtwo/dg$sx.sDPfY Z
      // 0fd: aload 4
      // 0ff: ifnull 0a6
      // 102: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 105: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 108: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 10b: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 110: astore 6
      // 112: aload 6
      // 114: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 119: ifeq 259
      // 11c: aload 6
      // 11e: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 123: checkcast net/minecraft/class_1297
      // 126: astore 7
      // 128: aload 7
      // 12a: aload 4
      // 12c: ifnonnull 145
      // 12f: instanceof net/minecraft/class_1684
      // 132: ifeq 254
      // 135: goto 13c
      // 138: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13b: athrow
      // 13c: aload 7
      // 13e: goto 145
      // 141: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 144: athrow
      // 145: checkcast net/minecraft/class_1684
      // 148: astore 8
      // 14a: aload 8
      // 14c: invokevirtual net/minecraft/class_1684.method_5628 ()I
      // 14f: istore 9
      // 151: bipush 0
      // 152: istore 10
      // 154: aload 0
      // 155: getfield sixtwo/dg.ChEiM Ljava/util/List;
      // 158: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 15d: astore 11
      // 15f: aload 11
      // 161: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 166: ifeq 1b2
      // 169: aload 11
      // 16b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 170: checkcast sixtwo/dg$sx
      // 173: astore 12
      // 175: aload 12
      // 177: getfield sixtwo/dg$sx.SDjuQ I
      // 17a: aload 4
      // 17c: ifnonnull 1b4
      // 17f: aload 4
      // 181: ifnonnull 19f
      // 184: goto 18b
      // 187: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18a: athrow
      // 18b: iload 9
      // 18d: if_icmpne 1a6
      // 190: goto 197
      // 193: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 196: athrow
      // 197: bipush 1
      // 198: goto 19f
      // 19b: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19e: athrow
      // 19f: istore 10
      // 1a1: aload 4
      // 1a3: ifnull 1b2
      // 1a6: aload 4
      // 1a8: ifnull 15f
      // 1ab: goto 1b2
      // 1ae: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b1: athrow
      // 1b2: iload 10
      // 1b4: ifne 254
      // 1b7: aload 8
      // 1b9: invokevirtual net/minecraft/class_1684.method_18798 ()Lnet/minecraft/class_243;
      // 1bc: astore 11
      // 1be: aload 8
      // 1c0: invokestatic sixtwo/mh.ckg (Lnet/minecraft/class_3857;)Lsixtwo/mh;
      // 1c3: getstatic sixtwo/md.HIkeq Lsixtwo/mj;
      // 1c6: invokevirtual sixtwo/mh.ckD (Lsixtwo/mj;)Lsixtwo/mh;
      // 1c9: aload 8
      // 1cb: invokevirtual net/minecraft/class_1684.method_5740 ()Z
      // 1ce: invokevirtual sixtwo/mh.ckF (Z)Lsixtwo/mh;
      // 1d1: aload 11
      // 1d3: invokevirtual sixtwo/mh.ckx (Lnet/minecraft/class_243;)Lsixtwo/mh;
      // 1d6: sipush 12849
      // 1d9: ldc2_w 8365883779221846950
      // 1dc: lload 2
      // 1dd: lxor
      // 1de: invokedynamic z (IJ)I bsm=sixtwo/dg.aeo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1e3: invokevirtual sixtwo/mh.cky (I)Lsixtwo/mh;
      // 1e6: ldc2_w -128.0
      // 1e9: invokevirtual sixtwo/mh.ckz (D)Lsixtwo/mh;
      // 1ec: invokestatic sixtwo/me.cjZ (Lsixtwo/mh;)Lsixtwo/mg;
      // 1ef: astore 12
      // 1f1: aload 12
      // 1f3: aload 4
      // 1f5: ifnonnull 22f
      // 1f8: invokevirtual sixtwo/mg.termination ()Lsixtwo/mf;
      // 1fb: getstatic sixtwo/mf.juSGK Lsixtwo/mf;
      // 1fe: if_acmpeq 226
      // 201: goto 208
      // 204: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 207: athrow
      // 208: aload 12
      // 20a: aload 4
      // 20c: ifnonnull 22f
      // 20f: goto 216
      // 212: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 215: athrow
      // 216: invokevirtual sixtwo/mg.termination ()Lsixtwo/mf;
      // 219: getstatic sixtwo/mf.RlLKW Lsixtwo/mf;
      // 21c: if_acmpne 254
      // 21f: goto 226
      // 222: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 225: athrow
      // 226: aload 12
      // 228: goto 22f
      // 22b: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22e: athrow
      // 22f: invokevirtual sixtwo/mg.simulatedSteps ()I
      // 232: bipush 1
      // 233: isub
      // 234: bipush 0
      // 235: invokestatic java/lang/Math.max (II)I
      // 238: istore 13
      // 23a: aload 0
      // 23b: getfield sixtwo/dg.ChEiM Ljava/util/List;
      // 23e: new sixtwo/dg$sx
      // 241: dup
      // 242: aload 12
      // 244: invokevirtual sixtwo/mg.finalPosition ()Lnet/minecraft/class_243;
      // 247: iload 9
      // 249: iload 13
      // 24b: invokespecial sixtwo/dg$sx.<init> (Lnet/minecraft/class_243;II)V
      // 24e: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 253: pop
      // 254: aload 4
      // 256: ifnull 112
      // 259: return
   }

   private static MatchException ael(MatchException var0) {
      return var0;
   }

   @hG
   public void aeh(hp param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dg.QfGak J
      // 03: ldc2_w 122055599375115
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dg.bab ()Z
      // 11: ifne 19
      // 14: return
      // 15: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18: athrow
      // 19: aload 1
      // 1a: invokevirtual sixtwo/hp.bcX ()Lnet/minecraft/class_1297;
      // 1d: astore 6
      // 1f: aload 6
      // 21: aload 4
      // 23: ifnonnull 3c
      // 26: instanceof net/minecraft/class_1684
      // 29: ifeq a7
      // 2c: goto 33
      // 2f: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: aload 6
      // 35: goto 3c
      // 38: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: checkcast net/minecraft/class_1684
      // 3f: astore 5
      // 41: aload 5
      // 43: invokevirtual net/minecraft/class_1684.method_5628 ()I
      // 46: istore 6
      // 48: aload 0
      // 49: getfield sixtwo/dg.ChEiM Ljava/util/List;
      // 4c: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 51: astore 7
      // 53: aload 7
      // 55: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 5a: ifeq a7
      // 5d: aload 7
      // 5f: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 64: checkcast sixtwo/dg$sx
      // 67: astore 8
      // 69: aload 8
      // 6b: aload 4
      // 6d: ifnonnull 92
      // 70: getfield sixtwo/dg$sx.SDjuQ I
      // 73: iload 6
      // 75: if_icmpne 9b
      // 78: goto 7f
      // 7b: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: aload 8
      // 81: getfield sixtwo/dg$sx.iAudN Lsixtwo/rk;
      // 84: fconst_0
      // 85: invokevirtual sixtwo/rk.dhd (F)F
      // 88: pop
      // 89: aload 8
      // 8b: goto 92
      // 8e: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 91: athrow
      // 92: bipush 1
      // 93: putfield sixtwo/dg$sx.sDPfY Z
      // 96: aload 4
      // 98: ifnull a7
      // 9b: aload 4
      // 9d: ifnull 53
      // a0: goto a7
      // a3: invokestatic sixtwo/dg.ael (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a6: athrow
      // a7: return
   }

   private static CallSite aeo(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aen".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dg" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public cJ aej() {
      return this.VOBNu;
   }

   public List<dg$sx> aek() {
      return this.ChEiM;
   }

   private static int aen(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aem(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int aem(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 436;
      if (NNFnv[var3] == null) {
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
         long var5 = pNdJj[var3];
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
         Object[] var9 = (Object[])QMwqx.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               QMwqx.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dg", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         NNFnv[var3] = var15;
      }

      return NNFnv[var3];
   }

   @Override
   public void YO() {
      super.YO();
      this.ChEiM.clear();
   }
}
