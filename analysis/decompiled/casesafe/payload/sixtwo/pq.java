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
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_1799;
import net.minecraft.class_241;

public abstract class pq extends pA {
   private final cv okhpJ;
   private final cw qKiYk;
   private final cw tFmEh;
   private final cJ xMinI;
   private static String NccWs;
   private static final long sNDqe = gb.aYR(2524453690485969358L, -1159569558750976372L, MethodHandles.lookup().lookupClass()).a(170799594305898L);
   private static final String mFTBG;
   private static final long[] npRVy;
   private static final Integer[] FAvNE;
   private static final Map fPhTB;

   protected pq(String var1, String var2, pM var3) {
      long var4 = sNDqe ^ 52326282035767L;
      super(var1, var2);
      int[] var10004 = new int[cOR<"u">(30689, 2334650647169457363L ^ var4)];
      var10004[0] = cOR<"u">(326, 6680583664701254248L ^ var4);
      var10004[1] = cOR<"u">(24077, 2002730439518549308L ^ var4);
      var10004[2] = cOR<"u">(19746, 7039949063235823148L ^ var4);
      var10004[3] = cOR<"u">(26668, 3577075690410525451L ^ var4);
      var10004[4] = cOR<"u">(10501, 4313051729062068780L ^ var4);
      var10004[5] = cOR<"u">(8307, 1667271527958186829L ^ var4);
      var10004[cOR<"u">(27355, 7097925946952630756L ^ var4)] = cOR<"u">(19617, 3575394545843955597L ^ var4);
      var10004[cOR<"u">(19574, 8220487745114793820L ^ var4)] = cOR<"u">(20489, 2866927575876664122L ^ var4);
      this.okhpJ = new cv(this, mr.clS(var10004)).Tm(1).Tl(true);
      this.qKiYk = new cw(
            this.okhpJ,
            mr.clS(
               new int[]{
                  cOR<"u">(1579, 1197602128648187163L ^ var4),
                  cOR<"u">(16780, 5922170062446160570L ^ var4),
                  cOR<"u">(12, 7977083997091474180L ^ var4),
                  cOR<"u">(4453, 7243087915502582353L ^ var4)
               }
            )
         )
         .Tz();
      this.tFmEh = new cw(
            this.okhpJ,
            mr.clS(
               new int[]{
                  cOR<"u">(15743, 4950315222720484934L ^ var4),
                  cOR<"u">(1724, 1417084611223170432L ^ var4),
                  cOR<"u">(32428, 6069986422502675857L ^ var4),
                  cOR<"u">(10501, 4313051729062068780L ^ var4)
               }
            )
         )
         .Tz();
      String var10000 = cOM();
      int[] var10005 = new int[cOR<"u">(17877, 1644456701531418357L ^ var4)];
      var10005[0] = cOR<"u">(31168, 3299355000698032845L ^ var4);
      var10005[1] = cOR<"u">(2274, 154694465112515566L ^ var4);
      var10005[2] = cOR<"u">(21537, 4305265360164814595L ^ var4);
      var10005[3] = cOR<"u">(10501, 4313051729062068780L ^ var4);
      var10005[4] = cOR<"u">(28348, 3846379453072197001L ^ var4);
      var10005[5] = cOR<"u">(27261, 85426572047204699L ^ var4);
      var10005[cOR<"u">(11189, 5683457605395120258L ^ var4)] = cOR<"u">(25971, 3981096552788119164L ^ var4);
      var10005[cOR<"u">(23939, 2488053138118309561L ^ var4)] = cOR<"u">(15390, 6437673217373640486L ^ var4);
      var10005[cOR<"u">(7075, 4210972727860637826L ^ var4)] = cOR<"u">(19228, 7265983492889862183L ^ var4);
      var10005[cOR<"u">(12566, 5955015102036580925L ^ var4)] = cOR<"u">(32428, 6069986422502675857L ^ var4);
      var10005[cOR<"u">(20702, 6065936946053643254L ^ var4)] = cOR<"u">(17719, 5931725036041399832L ^ var4);
      var10005[cOR<"u">(5381, 4761798610559548968L ^ var4)] = cOR<"u">(480, 1176698663499770563L ^ var4);
      var10005[cOR<"u">(13128, 6562726055891245164L ^ var4)] = cOR<"u">(7421, 7234021311412811736L ^ var4);
      this.xMinI = new cJ(this, mr.clS(var10005));
      String var6 = var10000;

      try {
         this.position(var3);
         if (var6 != null) {
            iS.bwK("rXBnrb");
         }
      } catch (MatchException var7) {
         throw cON(var7);
      }
   }

   static {
      long var11 = sNDqe ^ 35150551477529L;
      cOL(null);
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("├Ż\u0083l\b├┤h\u009d├É".getBytes("ISO-8859-1"));
      String var22 = cOO(var15).intern();
      int var10001 = -1;
      mFTBG = var22;
      fPhTB = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[37];
      int var3 = 0;
      String var4 = "T^4├ë┬»┬ž┬┐\u009f&=~\u0094├í\u0090\u001d\u0080w├ę'┬źYO┬ża\r!+├ł├╗├ą├ę├ód├ĺE\u000f$o%c┬źB┬│\u0091 \u0082\u009f\u0007?f├ć\u0088\u0082├«├Ł=5F/X\u0004<\u0091\u0084x*\u0019k\u001c\u001d\u0085├Ü├Ć├é├č&├ł\u009f\u008d\"┬ż\u009e\t\u001bH'\u000e\u0012\u0089├Ś┬╣├Ś\u0012├ş├╝\u0010x┬┐\u00966Lmdk\u0095├╝\u0019├ÂXt%├Ä├░├«X\u0083┬íZ├á7┬ú\u009eC\u001c$├ÜiO┬╣\u008f├Â(├ĄO\u008c\n├ů\u008f├ĘL├áf├▓┬ó├Ä┬Ę\r┬Ą\u0011~e*┬ź\u0080┬¬:8\u0086├Ś\u00ad\"\f├╝.┬Á\u001c├ĺr├ú├ö┬ú\u0093-\u008f\u001b\u0002u├Ěf┬┤-%┬Ż┬▒\n4├Ľ├é\u00ad4├Â├Ľ┬ž\n\u0092├Ü\u0012├ĆI\u0011\u0096├ő\u008f├«\u009c├ž\u0093i!\u001d#┬Ż\u0099┬║├Ł)\u008f├ő├Ą\u0001├ęh&e0X┬ęL\u0006\u008b├ä7┬┐qW┬Á\u0098\u0085\u0084┬íu┬╣%\u007f├¬0C\u0096K├ö\u0015\u0005KJF┬╗┬úb┬á├ž0G├┐5\u0001T┬┤├╝┬Á\\┬ź4├Ĺf├│┬ą>\u007f*Z";
      int var5 = "T^4├ë┬»┬ž┬┐\u009f&=~\u0094├í\u0090\u001d\u0080w├ę'┬źYO┬ża\r!+├ł├╗├ą├ę├ód├ĺE\u000f$o%c┬źB┬│\u0091 \u0082\u009f\u0007?f├ć\u0088\u0082├«├Ł=5F/X\u0004<\u0091\u0084x*\u0019k\u001c\u001d\u0085├Ü├Ć├é├č&├ł\u009f\u008d\"┬ż\u009e\t\u001bH'\u000e\u0012\u0089├Ś┬╣├Ś\u0012├ş├╝\u0010x┬┐\u00966Lmdk\u0095├╝\u0019├ÂXt%├Ä├░├«X\u0083┬íZ├á7┬ú\u009eC\u001c$├ÜiO┬╣\u008f├Â(├ĄO\u008c\n├ů\u008f├ĘL├áf├▓┬ó├Ä┬Ę\r┬Ą\u0011~e*┬ź\u0080┬¬:8\u0086├Ś\u00ad\"\f├╝.┬Á\u001c├ĺr├ú├ö┬ú\u0093-\u008f\u001b\u0002u├Ěf┬┤-%┬Ż┬▒\n4├Ľ├é\u00ad4├Â├Ľ┬ž\n\u0092├Ü\u0012├ĆI\u0011\u0096├ő\u008f├«\u009c├ž\u0093i!\u001d#┬Ż\u0099┬║├Ł)\u008f├ő├Ą\u0001├ęh&e0X┬ęL\u0006\u008b├ä7┬┐qW┬Á\u0098\u0085\u0084┬íu┬╣%\u007f├¬0C\u0096K├ö\u0015\u0005KJF┬╗┬úb┬á├ž0G├┐5\u0001T┬┤├╝┬Á\\┬ź4├Ĺf├│┬ą>\u007f*Z"
         .length();
      byte var2 = 0;

      label29:
      while (true) {
         var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var18 = var6;
         var10001 = var3++;
         long var24 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var27 = -1;

         while (true) {
            long var8 = var24;
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
            long var29 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var27) {
               case 0:
                  var18[var10001] = var29;
                  if (var2 >= var5) {
                     npRVy = var6;
                     FAvNE = new Integer[37];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "jW┬▓┬ę├┤├▒(-├┐F\u008f├ł\u0006├ů,l";
                  var5 = "jW┬▓┬ę├┤├▒(-├┐F\u008f├ł\u0006├ů,l".length();
                  var2 = 0;
            }

            byte var21 = var2;
            var2 += 8;
            var7 = var4.substring(var21, var2).getBytes("ISO-8859-1");
            var18 = var6;
            var10001 = var3++;
            var24 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var27 = 0;
         }
      }
   }

   @Override
   public class_241 measure(lC param1, lc param2, class_1297 param3, boolean param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pq.sNDqe J
      // 003: ldc2_w 86163784439001
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 00c: aload 0
      // 00d: aload 2
      // 00e: aload 3
      // 00f: iload 4
      // 011: invokevirtual sixtwo/pq.cOI (Lsixtwo/lc;Lnet/minecraft/class_1297;Z)Lsixtwo/pq$vw;
      // 014: astore 8
      // 016: astore 7
      // 018: aload 8
      // 01a: ifnonnull 026
      // 01d: aload 0
      // 01e: invokevirtual sixtwo/pq.cQL ()Lnet/minecraft/class_241;
      // 021: areturn
      // 022: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 025: athrow
      // 026: fconst_0
      // 027: fstore 9
      // 029: fconst_0
      // 02a: fstore 10
      // 02c: fconst_0
      // 02d: fstore 11
      // 02f: aload 0
      // 030: getfield sixtwo/pq.okhpJ Lsixtwo/cv;
      // 033: invokevirtual sixtwo/cv.Ts ()Ljava/util/List;
      // 036: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 03b: astore 12
      // 03d: aload 12
      // 03f: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 044: ifeq 176
      // 047: aload 12
      // 049: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 04e: checkcast sixtwo/cw
      // 051: astore 13
      // 053: aload 13
      // 055: aload 0
      // 056: getfield sixtwo/pq.qKiYk Lsixtwo/cw;
      // 059: aload 7
      // 05b: ifnonnull 0f4
      // 05e: if_acmpne 0e7
      // 061: goto 068
      // 064: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 067: athrow
      // 068: aload 8
      // 06a: aload 7
      // 06c: ifnonnull 08c
      // 06f: goto 076
      // 072: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: invokevirtual sixtwo/pq$vw.hasIcon ()Z
      // 079: ifeq 0e7
      // 07c: goto 083
      // 07f: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 082: athrow
      // 083: aload 8
      // 085: goto 08c
      // 088: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08b: athrow
      // 08c: invokevirtual sixtwo/pq$vw.iconOutput ()F
      // 08f: fstore 14
      // 091: fload 14
      // 093: fconst_0
      // 094: aload 7
      // 096: ifnonnull 0d9
      // 099: fcmpl
      // 09a: ifne 0b0
      // 09d: goto 0a4
      // 0a0: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a3: athrow
      // 0a4: aload 7
      // 0a6: ifnull 03d
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: fload 9
      // 0b2: aload 0
      // 0b3: aload 8
      // 0b5: invokevirtual sixtwo/pq$vw.renderScale ()F
      // 0b8: fload 11
      // 0ba: fload 14
      // 0bc: invokevirtual sixtwo/pq.cOK (FFF)F
      // 0bf: fadd
      // 0c0: fstore 9
      // 0c2: fload 9
      // 0c4: aload 8
      // 0c6: invokevirtual sixtwo/pq$vw.itemSize ()F
      // 0c9: fload 14
      // 0cb: fmul
      // 0cc: fadd
      // 0cd: fstore 9
      // 0cf: fload 10
      // 0d1: aload 8
      // 0d3: invokevirtual sixtwo/pq$vw.itemSize ()F
      // 0d6: fload 14
      // 0d8: fmul
      // 0d9: invokestatic java/lang/Math.max (FF)F
      // 0dc: fstore 10
      // 0de: fload 14
      // 0e0: fstore 11
      // 0e2: aload 7
      // 0e4: ifnull 171
      // 0e7: aload 13
      // 0e9: aload 0
      // 0ea: getfield sixtwo/pq.tFmEh Lsixtwo/cw;
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: if_acmpne 171
      // 0f7: aload 8
      // 0f9: aload 7
      // 0fb: ifnonnull 11b
      // 0fe: goto 105
      // 101: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 104: athrow
      // 105: invokevirtual sixtwo/pq$vw.hasName ()Z
      // 108: ifeq 171
      // 10b: goto 112
      // 10e: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 111: athrow
      // 112: aload 8
      // 114: goto 11b
      // 117: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11a: athrow
      // 11b: invokevirtual sixtwo/pq$vw.nameOutput ()F
      // 11e: fstore 14
      // 120: fload 14
      // 122: fconst_0
      // 123: aload 7
      // 125: ifnonnull 168
      // 128: fcmpl
      // 129: ifne 13f
      // 12c: goto 133
      // 12f: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 132: athrow
      // 133: aload 7
      // 135: ifnull 03d
      // 138: goto 13f
      // 13b: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13e: athrow
      // 13f: fload 9
      // 141: aload 0
      // 142: aload 8
      // 144: invokevirtual sixtwo/pq$vw.renderScale ()F
      // 147: fload 11
      // 149: fload 14
      // 14b: invokevirtual sixtwo/pq.cOK (FFF)F
      // 14e: fadd
      // 14f: fstore 9
      // 151: fload 9
      // 153: aload 8
      // 155: invokevirtual sixtwo/pq$vw.textWidth ()F
      // 158: fload 14
      // 15a: fmul
      // 15b: fadd
      // 15c: fstore 9
      // 15e: fload 10
      // 160: aload 8
      // 162: invokevirtual sixtwo/pq$vw.textHeight ()F
      // 165: fload 14
      // 167: fmul
      // 168: invokestatic java/lang/Math.max (FF)F
      // 16b: fstore 10
      // 16d: fload 14
      // 16f: fstore 11
      // 171: aload 7
      // 173: ifnull 03d
      // 176: new net/minecraft/class_241
      // 179: dup
      // 17a: fload 9
      // 17c: aload 8
      // 17e: invokevirtual sixtwo/pq$vw.paddingX ()F
      // 181: fconst_2
      // 182: fmul
      // 183: fadd
      // 184: fload 10
      // 186: aload 8
      // 188: invokevirtual sixtwo/pq$vw.paddingY ()F
      // 18b: fconst_2
      // 18c: fmul
      // 18d: fadd
      // 18e: invokespecial net/minecraft/class_241.<init> (FF)V
      // 191: areturn
   }

   @Override
   public void drawBox(lC param1, lc param2, lc param3, class_1297 param4, boolean param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pq.sNDqe J
      // 003: ldc2_w 87796408245908
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 00c: aload 0
      // 00d: aload 3
      // 00e: aload 4
      // 010: iload 5
      // 012: invokevirtual sixtwo/pq.cOI (Lsixtwo/lc;Lnet/minecraft/class_1297;Z)Lsixtwo/pq$vw;
      // 015: astore 9
      // 017: astore 8
      // 019: aload 8
      // 01b: ifnonnull 03f
      // 01e: aload 9
      // 020: ifnonnull 02f
      // 023: goto 02a
      // 026: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 029: athrow
      // 02a: return
      // 02b: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02e: athrow
      // 02f: aload 0
      // 030: aload 1
      // 031: aload 2
      // 032: aload 9
      // 034: invokevirtual sixtwo/pq$vw.renderScale ()F
      // 037: aload 9
      // 039: invokevirtual sixtwo/pq$vw.alpha ()F
      // 03c: invokevirtual sixtwo/pq.cRI (Lsixtwo/lC;Lsixtwo/lc;FF)V
      // 03f: aload 2
      // 040: invokevirtual sixtwo/lc.bXF ()F
      // 043: aload 9
      // 045: invokevirtual sixtwo/pq$vw.paddingX ()F
      // 048: fadd
      // 049: fstore 10
      // 04b: fconst_0
      // 04c: fstore 11
      // 04e: aload 0
      // 04f: getfield sixtwo/pq.okhpJ Lsixtwo/cv;
      // 052: invokevirtual sixtwo/cv.Ts ()Ljava/util/List;
      // 055: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 05a: astore 12
      // 05c: aload 12
      // 05e: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 063: ifeq 1d3
      // 066: aload 12
      // 068: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 06d: checkcast sixtwo/cw
      // 070: astore 13
      // 072: aload 13
      // 074: aload 0
      // 075: getfield sixtwo/pq.qKiYk Lsixtwo/cw;
      // 078: aload 8
      // 07a: ifnonnull 132
      // 07d: if_acmpne 125
      // 080: goto 087
      // 083: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 086: athrow
      // 087: aload 9
      // 089: aload 8
      // 08b: ifnonnull 0ab
      // 08e: goto 095
      // 091: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 094: athrow
      // 095: invokevirtual sixtwo/pq$vw.hasIcon ()Z
      // 098: ifeq 125
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: aload 9
      // 0a4: goto 0ab
      // 0a7: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0aa: athrow
      // 0ab: invokevirtual sixtwo/pq$vw.iconOutput ()F
      // 0ae: fstore 14
      // 0b0: fload 14
      // 0b2: fconst_0
      // 0b3: aload 8
      // 0b5: ifnonnull 0f1
      // 0b8: fcmpl
      // 0b9: ifne 0cf
      // 0bc: goto 0c3
      // 0bf: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c2: athrow
      // 0c3: aload 8
      // 0c5: ifnull 05c
      // 0c8: goto 0cf
      // 0cb: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ce: athrow
      // 0cf: fload 10
      // 0d1: aload 0
      // 0d2: aload 9
      // 0d4: invokevirtual sixtwo/pq$vw.renderScale ()F
      // 0d7: fload 11
      // 0d9: fload 14
      // 0db: invokevirtual sixtwo/pq.cOK (FFF)F
      // 0de: fadd
      // 0df: fstore 10
      // 0e1: aload 2
      // 0e2: invokevirtual sixtwo/lc.bXG ()F
      // 0e5: aload 9
      // 0e7: invokevirtual sixtwo/pq$vw.itemSize ()F
      // 0ea: aload 2
      // 0eb: invokevirtual sixtwo/lc.bXI ()F
      // 0ee: invokestatic sixtwo/jf.bAH (FF)F
      // 0f1: fadd
      // 0f2: fstore 15
      // 0f4: aload 0
      // 0f5: aload 1
      // 0f6: aload 9
      // 0f8: invokevirtual sixtwo/pq$vw.stack ()Lnet/minecraft/class_1799;
      // 0fb: fload 10
      // 0fd: fload 15
      // 0ff: aload 9
      // 101: invokevirtual sixtwo/pq$vw.itemScale ()F
      // 104: aload 9
      // 106: invokevirtual sixtwo/pq$vw.alpha ()F
      // 109: fload 14
      // 10b: fmul
      // 10c: invokevirtual sixtwo/pq.cQK (Lsixtwo/lC;Lnet/minecraft/class_1799;FFFF)V
      // 10f: fload 10
      // 111: aload 9
      // 113: invokevirtual sixtwo/pq$vw.itemSize ()F
      // 116: fload 14
      // 118: fmul
      // 119: fadd
      // 11a: fstore 10
      // 11c: fload 14
      // 11e: fstore 11
      // 120: aload 8
      // 122: ifnull 1ce
      // 125: aload 13
      // 127: aload 0
      // 128: getfield sixtwo/pq.tFmEh Lsixtwo/cw;
      // 12b: goto 132
      // 12e: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 131: athrow
      // 132: if_acmpne 1ce
      // 135: aload 9
      // 137: aload 8
      // 139: ifnonnull 159
      // 13c: goto 143
      // 13f: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 142: athrow
      // 143: invokevirtual sixtwo/pq$vw.hasName ()Z
      // 146: ifeq 1ce
      // 149: goto 150
      // 14c: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14f: athrow
      // 150: aload 9
      // 152: goto 159
      // 155: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 158: athrow
      // 159: invokevirtual sixtwo/pq$vw.nameOutput ()F
      // 15c: fstore 14
      // 15e: fload 14
      // 160: fconst_0
      // 161: aload 8
      // 163: ifnonnull 19f
      // 166: fcmpl
      // 167: ifne 17d
      // 16a: goto 171
      // 16d: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 170: athrow
      // 171: aload 8
      // 173: ifnull 05c
      // 176: goto 17d
      // 179: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17c: athrow
      // 17d: fload 10
      // 17f: aload 0
      // 180: aload 9
      // 182: invokevirtual sixtwo/pq$vw.renderScale ()F
      // 185: fload 11
      // 187: fload 14
      // 189: invokevirtual sixtwo/pq.cOK (FFF)F
      // 18c: fadd
      // 18d: fstore 10
      // 18f: aload 2
      // 190: invokevirtual sixtwo/lc.bXG ()F
      // 193: aload 9
      // 195: invokevirtual sixtwo/pq$vw.textHeight ()F
      // 198: aload 2
      // 199: invokevirtual sixtwo/lc.bXI ()F
      // 19c: invokestatic sixtwo/jf.bAH (FF)F
      // 19f: fadd
      // 1a0: fstore 15
      // 1a2: aload 0
      // 1a3: aload 1
      // 1a4: aload 9
      // 1a6: invokevirtual sixtwo/pq$vw.font ()Lsixtwo/lq;
      // 1a9: aload 9
      // 1ab: invokevirtual sixtwo/pq$vw.text ()Ljava/lang/String;
      // 1ae: fload 10
      // 1b0: fload 15
      // 1b2: aload 9
      // 1b4: invokevirtual sixtwo/pq$vw.alpha ()F
      // 1b7: fload 14
      // 1b9: fmul
      // 1ba: invokevirtual sixtwo/pq.cRG (Lsixtwo/lC;Lsixtwo/lq;Ljava/lang/String;FFF)V
      // 1bd: fload 10
      // 1bf: aload 9
      // 1c1: invokevirtual sixtwo/pq$vw.textWidth ()F
      // 1c4: fload 14
      // 1c6: fmul
      // 1c7: fadd
      // 1c8: fstore 10
      // 1ca: fload 14
      // 1cc: fstore 11
      // 1ce: aload 8
      // 1d0: ifnull 05c
      // 1d3: return
   }

   public static void cOL(String var0) {
      NccWs = var0;
   }

   public static String cOM() {
      return NccWs;
   }

   @Override
   protected String cNC(class_1297 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pq.sNDqe J
      // 03: ldc2_w 96371376423516
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: iload 2
      // 0e: aload 5
      // 10: ifnonnull 36
      // 13: ifeq 26
      // 16: goto 1d
      // 19: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: invokevirtual sixtwo/pq.cOl ()Ljava/lang/String;
      // 21: areturn
      // 22: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 1
      // 27: aload 5
      // 29: ifnonnull 3a
      // 2c: instanceof net/minecraft/class_1309
      // 2f: goto 36
      // 32: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: ifeq 44
      // 39: aload 1
      // 3a: checkcast net/minecraft/class_1309
      // 3d: astore 6
      // 3f: aload 5
      // 41: ifnull 4a
      // 44: aconst_null
      // 45: areturn
      // 46: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 0
      // 4b: aload 6
      // 4d: invokevirtual sixtwo/pq.cOk (Lnet/minecraft/class_1309;)Lnet/minecraft/class_1799;
      // 50: astore 7
      // 52: aload 7
      // 54: aload 5
      // 56: ifnonnull 85
      // 59: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 5c: ifeq 83
      // 5f: goto 66
      // 62: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: aload 0
      // 67: getfield sixtwo/pq.xMinI Lsixtwo/cJ;
      // 6a: invokevirtual sixtwo/cJ.WF ()Z
      // 6d: ifeq 7f
      // 70: goto 77
      // 73: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: aconst_null
      // 78: goto 82
      // 7b: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: getstatic sixtwo/pq.mFTBG Ljava/lang/String;
      // 82: areturn
      // 83: aload 7
      // 85: invokevirtual net/minecraft/class_1799.method_7964 ()Lnet/minecraft/class_2561;
      // 88: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 8d: areturn
   }

   private pq$vw cOI(lc param1, class_1297 param2, boolean param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pq.sNDqe J
      // 003: ldc2_w 129040857243631
      // 006: lxor
      // 007: lstore 4
      // 009: aload 0
      // 00a: aload 2
      // 00b: iload 3
      // 00c: invokevirtual sixtwo/pq.cOJ (Lnet/minecraft/class_1297;Z)Lnet/minecraft/class_1799;
      // 00f: astore 7
      // 011: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 014: aload 0
      // 015: aload 2
      // 016: iload 3
      // 017: invokevirtual sixtwo/pq.cRJ (Lnet/minecraft/class_1297;Z)Ljava/lang/String;
      // 01a: astore 8
      // 01c: astore 6
      // 01e: aload 7
      // 020: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 023: aload 6
      // 025: ifnonnull 033
      // 028: ifne 036
      // 02b: goto 032
      // 02e: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 031: athrow
      // 032: bipush 1
      // 033: goto 037
      // 036: bipush 0
      // 037: istore 9
      // 039: aload 8
      // 03b: aload 6
      // 03d: ifnonnull 04c
      // 040: ifnull 062
      // 043: goto 04a
      // 046: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 049: athrow
      // 04a: aload 8
      // 04c: invokevirtual java/lang/String.isBlank ()Z
      // 04f: aload 6
      // 051: ifnonnull 05f
      // 054: ifne 062
      // 057: goto 05e
      // 05a: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05d: athrow
      // 05e: bipush 1
      // 05f: goto 063
      // 062: bipush 0
      // 063: istore 10
      // 065: aload 0
      // 066: getfield sixtwo/pq.qKiYk Lsixtwo/cw;
      // 069: invokevirtual sixtwo/cw.TI ()Lsixtwo/rk;
      // 06c: aload 0
      // 06d: getfield sixtwo/pq.qKiYk Lsixtwo/cw;
      // 070: invokevirtual sixtwo/cw.TC ()Z
      // 073: invokevirtual sixtwo/rk.dhc (Z)V
      // 076: aload 0
      // 077: getfield sixtwo/pq.tFmEh Lsixtwo/cw;
      // 07a: invokevirtual sixtwo/cw.TI ()Lsixtwo/rk;
      // 07d: aload 0
      // 07e: getfield sixtwo/pq.tFmEh Lsixtwo/cw;
      // 081: invokevirtual sixtwo/cw.TC ()Z
      // 084: invokevirtual sixtwo/rk.dhc (Z)V
      // 087: aload 0
      // 088: getfield sixtwo/pq.qKiYk Lsixtwo/cw;
      // 08b: invokevirtual sixtwo/cw.TI ()Lsixtwo/rk;
      // 08e: invokevirtual sixtwo/rk.dhj ()F
      // 091: fstore 11
      // 093: aload 0
      // 094: getfield sixtwo/pq.tFmEh Lsixtwo/cw;
      // 097: invokevirtual sixtwo/cw.TI ()Lsixtwo/rk;
      // 09a: invokevirtual sixtwo/rk.dhj ()F
      // 09d: fstore 12
      // 09f: iload 9
      // 0a1: aload 6
      // 0a3: ifnonnull 0d3
      // 0a6: ifeq 0ca
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: fload 11
      // 0b2: aload 6
      // 0b4: ifnonnull 108
      // 0b7: goto 0be
      // 0ba: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bd: athrow
      // 0be: fconst_0
      // 0bf: fcmpl
      // 0c0: ifne 102
      // 0c3: goto 0ca
      // 0c6: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c9: athrow
      // 0ca: iload 10
      // 0cc: goto 0d3
      // 0cf: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d2: athrow
      // 0d3: aload 6
      // 0d5: ifnonnull 0f9
      // 0d8: ifeq 0fc
      // 0db: goto 0e2
      // 0de: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e1: athrow
      // 0e2: fload 12
      // 0e4: aload 6
      // 0e6: ifnonnull 108
      // 0e9: goto 0f0
      // 0ec: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ef: athrow
      // 0f0: fconst_0
      // 0f1: fcmpl
      // 0f2: goto 0f9
      // 0f5: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f8: athrow
      // 0f9: ifne 102
      // 0fc: aconst_null
      // 0fd: areturn
      // 0fe: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 101: athrow
      // 102: aload 0
      // 103: aload 1
      // 104: iload 3
      // 105: invokevirtual sixtwo/pq.cQJ (Lsixtwo/lc;Z)F
      // 108: fstore 13
      // 10a: aload 0
      // 10b: fload 13
      // 10d: invokevirtual sixtwo/pq.cRL (F)Lsixtwo/lq;
      // 110: astore 14
      // 112: aload 0
      // 113: fconst_1
      // 114: fload 13
      // 116: invokevirtual sixtwo/pq.cQI (FF)F
      // 119: fstore 15
      // 11b: aload 0
      // 11c: ldc_w 0.5
      // 11f: fload 13
      // 121: invokevirtual sixtwo/pq.cQI (FF)F
      // 124: fstore 16
      // 126: new sixtwo/pq$vw
      // 129: dup
      // 12a: aload 7
      // 12c: aload 8
      // 12e: aload 14
      // 130: fload 13
      // 132: aload 0
      // 133: iload 3
      // 134: invokevirtual sixtwo/pq.cQM (Z)F
      // 137: fload 15
      // 139: fload 15
      // 13b: fload 16
      // 13d: ldc_w 16.0
      // 140: fload 16
      // 142: fmul
      // 143: iload 9
      // 145: iload 10
      // 147: fload 11
      // 149: fload 12
      // 14b: invokespecial sixtwo/pq$vw.<init> (Lnet/minecraft/class_1799;Ljava/lang/String;Lsixtwo/lq;FFFFFFZZFF)V
      // 14e: areturn
   }

   protected abstract String cOl();

   private static CallSite cOR(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cOQ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pq" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int cOQ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cOP(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   protected abstract class_1799 cOk(class_1309 var1);

   private class_1799 cOJ(class_1297 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pq.sNDqe J
      // 03: ldc2_w 40594338515413
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: iload 2
      // 0e: aload 5
      // 10: ifnonnull 36
      // 13: ifeq 26
      // 16: goto 1d
      // 19: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: invokevirtual sixtwo/pq.cOm ()Lnet/minecraft/class_1799;
      // 21: areturn
      // 22: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 1
      // 27: aload 5
      // 29: ifnonnull 3a
      // 2c: instanceof net/minecraft/class_1309
      // 2f: goto 36
      // 32: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: ifeq 44
      // 39: aload 1
      // 3a: checkcast net/minecraft/class_1309
      // 3d: astore 6
      // 3f: aload 5
      // 41: ifnull 4c
      // 44: getstatic net/minecraft/class_1799.field_8037 Lnet/minecraft/class_1799;
      // 47: areturn
      // 48: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: aload 0
      // 4d: aload 6
      // 4f: invokevirtual sixtwo/pq.cOk (Lnet/minecraft/class_1309;)Lnet/minecraft/class_1799;
      // 52: areturn
   }

   private static MatchException cON(MatchException var0) {
      return var0;
   }

   private static String cOO(byte[] var0) {
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

   private float cOK(float param1, float param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pq.sNDqe J
      // 03: ldc2_w 91504915830418
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0c: astore 6
      // 0e: fload 2
      // 0f: fconst_0
      // 10: aload 6
      // 12: ifnonnull 31
      // 15: fcmpl
      // 16: ifne 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: fconst_0
      // 21: freturn
      // 22: invokestatic sixtwo/pq.cON (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: fconst_2
      // 28: fload 1
      // 29: invokevirtual sixtwo/pq.cQI (FF)F
      // 2c: fload 2
      // 2d: fload 3
      // 2e: invokestatic java/lang/Math.min (FF)F
      // 31: fmul
      // 32: freturn
   }

   private static int cOP(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 32254;
      if (FAvNE[var3] == null) {
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
         long var5 = npRVy[var3];
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
         Object[] var9 = (Object[])fPhTB.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               fPhTB.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/pq", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         FAvNE[var3] = var15;
      }

      return FAvNE[var3];
   }

   protected abstract class_1799 cOm();
}
