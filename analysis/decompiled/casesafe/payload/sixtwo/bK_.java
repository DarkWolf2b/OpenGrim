package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Queue;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class bK extends bS {
   private static final float FRaUS = 8.0F;
   private static final float kTtrC = 1.0F;
   private static final float UroMw = 0.5F;
   private static final float mIPnc = -90.0F;
   private static final float NWvmX = 359.9F;
   private static final long nhctd = gb.aYR(3629796645314585096L, 6822008410071727314L, MethodHandles.lookup().lookupClass()).a(78699892015733L);
   private static final String QDzxA;
   private static final long[] VUKvH;
   private static final Integer[] bbEiG;
   private static final Map UAJdn;

   public bK(cv var1) {
      long var2 = nhctd ^ 34958931782524L;
      int[] var10002 = new int[MY<"d">(21953, 1054248144749021095L ^ var2)];
      var10002[0] = MY<"d">(26202, 5011161269495559231L ^ var2);
      var10002[1] = MY<"d">(29187, 5961721851713609828L ^ var2);
      var10002[2] = MY<"d">(9270, 1088817446297941574L ^ var2);
      var10002[3] = MY<"d">(23634, 8770718946895318561L ^ var2);
      var10002[4] = MY<"d">(30293, 8512457548855206964L ^ var2);
      var10002[5] = MY<"d">(31120, 5512319900196727805L ^ var2);
      var10002[MY<"d">(14922, 1985314261830772795L ^ var2)] = MY<"d">(30638, 7905732963345393108L ^ var2);
      var10002[MY<"d">(21738, 7045230542952449681L ^ var2)] = MY<"d">(13141, 7176267062441025825L ^ var2);
      var10002[MY<"d">(22877, 6145430905612487464L ^ var2)] = MY<"d">(20012, 1483213175050689608L ^ var2);
      var10002[MY<"d">(20950, 4101533383486653359L ^ var2)] = MY<"d">(31120, 5512319900196727805L ^ var2);
      var10002[MY<"d">(2164, 7848812332707420696L ^ var2)] = MY<"d">(28941, 2432178451371877237L ^ var2);
      var10002[MY<"d">(29443, 3137954889444188522L ^ var2)] = MY<"d">(19020, 6640647004727138353L ^ var2);
      var10002[MY<"d">(12747, 1763213082392470437L ^ var2)] = MY<"d">(11877, 1814960899660004379L ^ var2);
      var10002[MY<"d">(14008, 7676005668346832091L ^ var2)] = MY<"d">(9387, 7616609653741336259L ^ var2);
      var10002[MY<"d">(32021, 4439979120258445161L ^ var2)] = MY<"d">(20012, 1483213175050689608L ^ var2);
      var10002[MY<"d">(7987, 391445607918701913L ^ var2)] = MY<"d">(11905, 980019773199203566L ^ var2);
      var10002[MY<"d">(9071, 7425841215969800452L ^ var2)] = MY<"d">(20012, 1483213175050689608L ^ var2);
      var10002[MY<"d">(8135, 7594132228960882104L ^ var2)] = MY<"d">(13685, 8272860800010856213L ^ var2);
      var10002[MY<"d">(7547, 1781713487348928281L ^ var2)] = MY<"d">(19578, 4854095291249745416L ^ var2);
      super(var1, mr.clS(var10002));
   }

   static {
      long var11 = nhctd ^ 12031310180318L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("\u001fn9┬ź\u008eF[\u0096\u0089aS├ú┬Á\u0001\u008e\u008c".getBytes("ISO-8859-1"));
      String var22 = MV(var15).intern();
      int var10001 = -1;
      QDzxA = var22;
      UAJdn = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[30];
      int var3 = 0;
      String var4 = "\t\u0007\u008b:┬žJL├Á\u009d├ź\u0090.┬í├Ö1K\u008b├║\u0017O├ą┬╗&├ł?)├Ő\u008e┬║B├╣├çr├ł├Ę├Ü┬┐\u0016\u000b+~3Gv├ÂoT_H ├śK\"$├░a├╗\u0087┬í d:\u008dB├│\n\u000fi\u0013├á\u0013\u0007;\u000e\u0011Y├Ć├ü├ąe├Ź┬│.1├Ž┬ĄJ\u001f\u001d├╝├Ľ\u0093├ü├ş\u0096\u0013\u0095@yt^\u0097\u0099\u008f├Ą\u008b├č┬┤┬Ż┬úd┬Â├ĺ\u0093g┬ą\u0093e}\u008d])K1├ž5\u0095├Ľ\u001f├Ş├Ą├Ť\u0091a┬ó┬▓|┬ž\u00ad┬ę┬╝\b┬»\u0013├Ç\u0019/├Ć├ős├×\u0082\u0083├░\u0012\u00ad├ę├á├ç┬«\u008a├î\u0018Y┬Şj\u0011\u000b\u009e├î\u0086├Ç4\u0013├┤\u0016├║┬ą4├ó┬Ě\u0090┬í(┬á\u0097├▒├ş\b\u001bP='bK<}├║Q├Ż┬ą#\\x┬╝\f\u008e├Ć├łr\u0091\u0091├ç$├Ü├ś*j'%F_├Ť├╝";
      int var5 = "\t\u0007\u008b:┬žJL├Á\u009d├ź\u0090.┬í├Ö1K\u008b├║\u0017O├ą┬╗&├ł?)├Ő\u008e┬║B├╣├çr├ł├Ę├Ü┬┐\u0016\u000b+~3Gv├ÂoT_H ├śK\"$├░a├╗\u0087┬í d:\u008dB├│\n\u000fi\u0013├á\u0013\u0007;\u000e\u0011Y├Ć├ü├ąe├Ź┬│.1├Ž┬ĄJ\u001f\u001d├╝├Ľ\u0093├ü├ş\u0096\u0013\u0095@yt^\u0097\u0099\u008f├Ą\u008b├č┬┤┬Ż┬úd┬Â├ĺ\u0093g┬ą\u0093e}\u008d])K1├ž5\u0095├Ľ\u001f├Ş├Ą├Ť\u0091a┬ó┬▓|┬ž\u00ad┬ę┬╝\b┬»\u0013├Ç\u0019/├Ć├ős├×\u0082\u0083├░\u0012\u00ad├ę├á├ç┬«\u008a├î\u0018Y┬Şj\u0011\u000b\u009e├î\u0086├Ç4\u0013├┤\u0016├║┬ą4├ó┬Ě\u0090┬í(┬á\u0097├▒├ş\b\u001bP='bK<}├║Q├Ż┬ą#\\x┬╝\f\u008e├Ć├łr\u0091\u0091├ç$├Ü├ś*j'%F_├Ť├╝"
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
                     VUKvH = var6;
                     bbEiG = new Integer[30];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "\u0015@┬ž\u009a>├╝$Q1├Är├ą├╣tUA";
                  var5 = "\u0015@┬ž\u009a>├╝$Q1├Är├ą├╣tUA".length();
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
   public boolean MH() {
      long var1 = nhctd ^ 64238026381580L;

      try {
         if (this.MS(cN.YyPjC) != null) {
            return true;
         }
      } catch (MatchException var3) {
         throw MU(var3);
      }

      return false;
   }

   @Override
   public void MG(lC param1, ii param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bK.nhctd J
      // 003: ldc2_w 58741137630147
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 00b: invokevirtual sixtwo/cq.RC ()Lsixtwo/bU;
      // 00e: astore 6
      // 010: getstatic sixtwo/cN.YyPjC Ljava/util/Queue;
      // 013: astore 7
      // 015: invokestatic sixtwo/bJ.MM ()Z
      // 018: aload 0
      // 019: aload 7
      // 01b: invokevirtual sixtwo/bK.MS (Ljava/util/Queue;)Lsixtwo/cO;
      // 01e: astore 8
      // 020: istore 5
      // 022: aload 8
      // 024: ifnonnull 02c
      // 027: return
      // 028: invokestatic sixtwo/bK.MU (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02b: athrow
      // 02c: aload 7
      // 02e: invokeinterface java/util/Queue.iterator ()Ljava/util/Iterator; 1
      // 033: astore 9
      // 035: aload 9
      // 037: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 03c: ifeq 061
      // 03f: aload 9
      // 041: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 046: checkcast sixtwo/cO
      // 049: astore 10
      // 04b: aload 10
      // 04d: invokevirtual sixtwo/cO.XW ()V
      // 050: iload 5
      // 052: ifeq 06e
      // 055: iload 5
      // 057: ifne 035
      // 05a: goto 061
      // 05d: invokestatic sixtwo/bK.MU (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 060: athrow
      // 061: aload 7
      // 063: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/cO.XX ()Z, (Lsixtwo/cO;)Z ]
      // 068: invokeinterface java/util/Queue.removeIf (Ljava/util/function/Predicate;)Z 2
      // 06d: pop
      // 06e: aload 6
      // 070: invokevirtual sixtwo/bU.RW ()F
      // 073: fstore 9
      // 075: aload 6
      // 077: invokevirtual sixtwo/bU.RX ()F
      // 07a: fstore 10
      // 07c: aload 0
      // 07d: aload 8
      // 07f: invokevirtual sixtwo/bK.MT (Lsixtwo/cO;)[I
      // 082: astore 11
      // 084: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 087: ldc 7.0
      // 089: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 08c: astore 12
      // 08e: aload 8
      // 090: invokevirtual sixtwo/cO.Ye ()Lsixtwo/rk;
      // 093: invokevirtual sixtwo/rk.dhj ()F
      // 096: fstore 13
      // 098: aload 0
      // 099: getfield sixtwo/bK.fGWTH Lsixtwo/bT;
      // 09c: ldc 20.0
      // 09e: aload 12
      // 0a0: aload 11
      // 0a2: invokevirtual sixtwo/lq.cap ([I)F
      // 0a5: fadd
      // 0a6: ldc 15.0
      // 0a8: invokevirtual sixtwo/bT.NU (FF)V
      // 0ab: aload 8
      // 0ad: invokevirtual sixtwo/cO.Yd ()Lsixtwo/cM;
      // 0b0: invokevirtual sixtwo/cM.XC ()Lsixtwo/mG;
      // 0b3: fload 13
      // 0b5: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0b8: astore 14
      // 0ba: fload 9
      // 0bc: ldc_w 2.5
      // 0bf: fsub
      // 0c0: ldc_w 10.0
      // 0c3: aload 0
      // 0c4: getfield sixtwo/bK.dExGi Lsixtwo/rk;
      // 0c7: invokevirtual sixtwo/rk.dhj ()F
      // 0ca: fmul
      // 0cb: fadd
      // 0cc: fstore 15
      // 0ce: fload 10
      // 0d0: ldc_w 7.5
      // 0d3: fadd
      // 0d4: fstore 16
      // 0d6: fload 15
      // 0d8: ldc_w 4.0
      // 0db: fsub
      // 0dc: fstore 17
      // 0de: fload 16
      // 0e0: ldc_w 4.0
      // 0e3: fsub
      // 0e4: fstore 18
      // 0e6: aload 8
      // 0e8: invokevirtual sixtwo/cO.Ya ()Lsixtwo/mT;
      // 0eb: invokevirtual sixtwo/mT.cpF ()J
      // 0ee: l2f
      // 0ef: aload 8
      // 0f1: invokevirtual sixtwo/cO.Yb ()J
      // 0f4: l2f
      // 0f5: fdiv
      // 0f6: fconst_0
      // 0f7: fconst_1
      // 0f8: invokestatic net/minecraft/class_3532.method_15363 (FFF)F
      // 0fb: fstore 19
      // 0fd: ldc 359.9
      // 0ff: fconst_1
      // 100: fload 19
      // 102: fsub
      // 103: fmul
      // 104: fstore 20
      // 106: aload 2
      // 107: invokevirtual sixtwo/ii.bjd ()Lsixtwo/mG;
      // 10a: ldc_w 0.3
      // 10d: fload 13
      // 10f: fmul
      // 110: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 113: astore 21
      // 115: aload 1
      // 116: fload 17
      // 118: fload 18
      // 11a: ldc 8.0
      // 11c: fconst_1
      // 11d: fconst_0
      // 11e: ldc 359.9
      // 120: aload 21
      // 122: ldc 0.5
      // 124: iload 5
      // 126: ifeq 154
      // 129: invokevirtual sixtwo/lC.cdw (FFFFFFLsixtwo/mG;F)V
      // 12c: fload 20
      // 12e: fconst_1
      // 12f: fcmpl
      // 130: ifle 157
      // 133: goto 13a
      // 136: invokestatic sixtwo/bK.MU (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 139: athrow
      // 13a: aload 1
      // 13b: fload 17
      // 13d: fload 18
      // 13f: ldc 8.0
      // 141: fconst_1
      // 142: ldc -90.0
      // 144: fload 20
      // 146: fsub
      // 147: ldc -90.0
      // 149: aload 14
      // 14b: ldc 0.5
      // 14d: goto 154
      // 150: invokestatic sixtwo/bK.MU (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 153: athrow
      // 154: invokevirtual sixtwo/lC.cdw (FFFFFFLsixtwo/mG;F)V
      // 157: aload 2
      // 158: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 15b: ldc_w 255.0
      // 15e: fload 13
      // 160: fmul
      // 161: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 164: astore 22
      // 166: fload 9
      // 168: ldc_w 25.0
      // 16b: fadd
      // 16c: ldc_w 10.0
      // 16f: aload 0
      // 170: getfield sixtwo/bK.dExGi Lsixtwo/rk;
      // 173: invokevirtual sixtwo/rk.dhj ()F
      // 176: fmul
      // 177: fload 13
      // 179: fmul
      // 17a: fsub
      // 17b: fstore 23
      // 17d: fload 10
      // 17f: ldc_w 5.0
      // 182: fadd
      // 183: fstore 24
      // 185: aload 1
      // 186: aload 12
      // 188: aload 11
      // 18a: fload 23
      // 18c: fload 24
      // 18e: aload 22
      // 190: invokevirtual sixtwo/lC.ceA (Lsixtwo/lq;[IFFLsixtwo/mG;)V
      // 193: return
   }

   private static CallSite MY(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("MX".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bK" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private cO MS(Queue<cO> var1) {
      long var2 = nhctd ^ 137039238484383L;
      cO var5 = null;
      boolean var10000 = bJ.MN();
      Iterator var6 = var1.iterator();
      boolean var4 = var10000;

      while (true) {
         if (var6.hasNext()) {
            cO var7 = (cO)var6.next();
            var8 = var7;
            if (var4) {
               break;
            }

            var5 = var7;
            if (!var4) {
               continue;
            }
         }

         var8 = var5;
         break;
      }

      return var8;
   }

   private int[] MT(cO var1) {
      long var2 = nhctd ^ 119417794565767L;

      try {
         if (QDzxA.equals(mZ.cse(var1.XY()))) {
            return var1.XZ();
         }
      } catch (MatchException var4) {
         throw MU(var4);
      }

      return var1.XY();
   }

   private static MatchException MU(MatchException var0) {
      return var0;
   }

   private static int MW(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 14366;
      if (bbEiG[var3] == null) {
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
         long var5 = VUKvH[var3];
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
         Object[] var9 = (Object[])UAJdn.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               UAJdn.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bK", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         bbEiG[var3] = var15;
      }

      return bbEiG[var3];
   }

   private static String MV(byte[] var0) {
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

   private static int MX(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = MW(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
