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

public abstract class cn extends cr implements lG {
   protected cv ZpVra;
   protected boolean bwIta;
   private static final long pgClt = gb.aYR(-7849409131986101059L, 8932095221979411149L, MethodHandles.lookup().lookupClass()).a(272723144141615L);
   private static final long[] wCpej;
   private static final Integer[] Xqssr;
   private static final Map myifd = new HashMap(13);

   public cn(int[] var1, lf var2) {
      long var3 = pgClt ^ 130859238377221L;
      super(var1, var2);
      int[] var10004 = new int[QV<"x">(23009, 5138514473923617163L ^ var3)];
      var10004[0] = QV<"x">(26978, 2042243314540908800L ^ var3);
      var10004[1] = QV<"x">(31218, 8975060880325607827L ^ var3);
      var10004[2] = QV<"x">(32758, 576379473934387096L ^ var3);
      var10004[3] = QV<"x">(28964, 2117447667732547930L ^ var3);
      var10004[4] = QV<"x">(7278, 4696008092971557899L ^ var3);
      var10004[5] = QV<"x">(13797, 3553068225338658200L ^ var3);
      var10004[QV<"x">(3400, 5002858055677343031L ^ var3)] = QV<"x">(25201, 122247049201752601L ^ var3);
      var10004[QV<"x">(28162, 7585355037871773285L ^ var3)] = QV<"x">(21034, 3023437244200200777L ^ var3);
      this.ZpVra = new cv(this, mr.clS(var10004)).Tm(1).Tl(true);
   }

   public cn(int[] var1, lf var2, boolean var3) {
      long var4 = pgClt ^ 12546291366743L;
      super(var1, var2);
      int[] var10004 = new int[QV<"x">(12655, 4069828556804584793L ^ var4)];
      var10004[0] = QV<"x">(14497, 6275870501276875919L ^ var4);
      var10004[1] = QV<"x">(12842, 3580828508986832401L ^ var4);
      var10004[2] = QV<"x">(7278, 4696108822249068633L ^ var4);
      var10004[3] = QV<"x">(27754, 6649437926570141781L ^ var4);
      var10004[4] = QV<"x">(7278, 4696108822249068633L ^ var4);
      var10004[5] = QV<"x">(30522, 6583463142350435079L ^ var4);
      var10004[QV<"x">(21400, 9148825032867059622L ^ var4)] = QV<"x">(1591, 5678522064334144005L ^ var4);
      var10004[QV<"x">(9741, 3045313104228704820L ^ var4)] = QV<"x">(29654, 7673158928800921570L ^ var4);
      this.ZpVra = new cv(this, mr.clS(var10004)).Tm(1).Tl(true);
      this.bwIta = var3;
   }

   static {
      long var0 = pgClt ^ 35969654478808L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[20];
      int var5 = 0;
      String var6 = "\u0086}\u0014\u0082>\u000ea├ą├Ż├▒\u0010Q┬¬├ó\u0019\u008c┬¬0Q├Ě┬Ě\u008d├┐├Ü\u001dX├Â├î|├â├Ä\u0016\u0007Q#f\u008a├ů\u0000\u0014├╣┬║6├Â├ź├í├Ä├«*\u00886\n┬Ál├ÇZ┬»F\u008b├┤A~├▒\u009b1>├éL├ź├Ę$M├Śg┬▓├»├ú\u0085\b┬╝\u0011├ő(u*├║8J2\u0095\u0001%kV\u0091┬Ę├╝\u0016`VTC\u0018K├łv\u0000┬ŻYC7├ĺ1>\"├Ć┬Á\u0086\u001f\u0091\u0012~\u0002\u008c├×┬ú\"\u000e┬ŻnHr,|\u009akD>\rT├ő┬┤\\\u008c";
      int var7 = "\u0086}\u0014\u0082>\u000ea├ą├Ż├▒\u0010Q┬¬├ó\u0019\u008c┬¬0Q├Ě┬Ě\u008d├┐├Ü\u001dX├Â├î|├â├Ä\u0016\u0007Q#f\u008a├ů\u0000\u0014├╣┬║6├Â├ź├í├Ä├«*\u00886\n┬Ál├ÇZ┬»F\u008b├┤A~├▒\u009b1>├éL├ź├Ę$M├Śg┬▓├»├ú\u0085\b┬╝\u0011├ő(u*├║8J2\u0095\u0001%kV\u0091┬Ę├╝\u0016`VTC\u0018K├łv\u0000┬ŻYC7├ĺ1>\"├Ć┬Á\u0086\u001f\u0091\u0012~\u0002\u008c├×┬ú\"\u000e┬ŻnHr,|\u009akD>\rT├ő┬┤\\\u008c"
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
                     wCpej = var8;
                     Xqssr = new Integer[20];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "┬ą\u0005\u008f├Ť┬Ą<├¬W┬Ě:A┬║┬ę┬Ąx\u0099";
                  var7 = "┬ą\u0005\u008f├Ť┬Ą<├¬W┬Ě:A┬║┬ę┬Ąx\u0099".length();
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

   private static int QU(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = QT(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   protected void NV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cn.pgClt J
      // 003: ldc2_w 77747976203884
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/cr.SC ()[Lsixtwo/iS;
      // 00b: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 00e: ldc 8.0
      // 010: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 013: astore 5
      // 015: astore 4
      // 017: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 01a: ldc 7.0
      // 01c: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 01f: astore 6
      // 021: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 024: astore 7
      // 026: aload 0
      // 027: getfield sixtwo/cn.ormBS Lsixtwo/rk;
      // 02a: invokevirtual sixtwo/rk.dhj ()F
      // 02d: fstore 8
      // 02f: aload 0
      // 030: getfield sixtwo/cn.gILqY Lsixtwo/rk;
      // 033: invokevirtual sixtwo/rk.dhj ()F
      // 036: fstore 9
      // 038: aload 7
      // 03a: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 03d: ldc 255.0
      // 03f: fload 8
      // 041: fmul
      // 042: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 045: astore 10
      // 047: aload 7
      // 049: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 04c: ldc 255.0
      // 04e: fload 8
      // 050: fmul
      // 051: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 054: astore 11
      // 056: aload 11
      // 058: ldc 0.5
      // 05a: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 05d: astore 12
      // 05f: getstatic sixtwo/mG.QHTxQ Lsixtwo/mG;
      // 062: ldc 0.3
      // 064: fload 9
      // 066: fmul
      // 067: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 06a: astore 13
      // 06c: aload 1
      // 06d: aload 0
      // 06e: getfield sixtwo/cn.toIeR F
      // 071: ldc 5.0
      // 073: fsub
      // 074: aload 0
      // 075: getfield sixtwo/cn.QWaAn F
      // 078: ldc 5.0
      // 07a: fsub
      // 07b: aload 0
      // 07c: getfield sixtwo/cn.jTsqG F
      // 07f: ldc 10.0
      // 081: fadd
      // 082: aload 0
      // 083: getfield sixtwo/cn.Xtjvx F
      // 086: ldc 10.0
      // 088: fadd
      // 089: ldc 15.0
      // 08b: ldc 6.0
      // 08d: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 090: aload 13
      // 092: invokevirtual sixtwo/lC.ccY (FFFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 095: aload 1
      // 096: aload 0
      // 097: getfield sixtwo/cn.toIeR F
      // 09a: aload 0
      // 09b: getfield sixtwo/cn.QWaAn F
      // 09e: aload 0
      // 09f: getfield sixtwo/cn.jTsqG F
      // 0a2: aload 0
      // 0a3: getfield sixtwo/cn.Xtjvx F
      // 0a6: fload 8
      // 0a8: fload 9
      // 0aa: invokevirtual sixtwo/lC.ccU (FFFFFF)V
      // 0ad: aload 1
      // 0ae: aload 0
      // 0af: getfield sixtwo/cn.toIeR F
      // 0b2: aload 0
      // 0b3: getfield sixtwo/cn.QWaAn F
      // 0b6: aload 0
      // 0b7: getfield sixtwo/cn.jTsqG F
      // 0ba: aload 0
      // 0bb: getfield sixtwo/cn.Xtjvx F
      // 0be: invokestatic sixtwo/jG.bHK (Lsixtwo/lC;FFFF)V
      // 0c1: getstatic sixtwo/cn.zXCXX Lsixtwo/kJ;
      // 0c4: aload 5
      // 0c6: invokevirtual sixtwo/kJ.bUa (Lsixtwo/lq;)V
      // 0c9: aload 0
      // 0ca: aload 4
      // 0cc: ifnull 0e4
      // 0cf: getfield sixtwo/cn.bwIta Z
      // 0d2: ifeq 0f1
      // 0d5: goto 0dc
      // 0d8: invokestatic sixtwo/cn.QS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: aload 0
      // 0dd: goto 0e4
      // 0e0: invokestatic sixtwo/cn.QS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e3: athrow
      // 0e4: getfield sixtwo/cn.toIeR F
      // 0e7: ldc 7.0
      // 0e9: fadd
      // 0ea: fstore 14
      // 0ec: aload 4
      // 0ee: ifnonnull 12d
      // 0f1: ldc 8.0
      // 0f3: fstore 15
      // 0f5: aload 0
      // 0f6: getfield sixtwo/cn.toIeR F
      // 0f9: ldc 7.0
      // 0fb: fadd
      // 0fc: fstore 16
      // 0fe: aload 0
      // 0ff: getfield sixtwo/cn.QWaAn F
      // 102: fload 15
      // 104: aload 0
      // 105: getfield sixtwo/cn.Xtjvx F
      // 108: invokestatic sixtwo/jf.bAH (FF)F
      // 10b: fadd
      // 10c: fstore 17
      // 10e: aload 1
      // 10f: aload 0
      // 110: getfield sixtwo/cn.jAncU Lsixtwo/lf;
      // 113: fload 16
      // 115: fload 17
      // 117: fload 15
      // 119: aload 11
      // 11b: invokevirtual sixtwo/lC.cem (Lsixtwo/lf;FFFLsixtwo/mG;)V
      // 11e: aload 0
      // 11f: getfield sixtwo/cn.toIeR F
      // 122: ldc 7.0
      // 124: fadd
      // 125: fload 15
      // 127: fadd
      // 128: ldc 7.0
      // 12a: fadd
      // 12b: fstore 14
      // 12d: aload 0
      // 12e: getfield sixtwo/cn.QWaAn F
      // 131: fconst_2
      // 132: aload 0
      // 133: getfield sixtwo/cn.Xtjvx F
      // 136: invokestatic sixtwo/jf.bAH (FF)F
      // 139: fadd
      // 13a: fstore 15
      // 13c: bipush 0
      // 13d: istore 16
      // 13f: aload 0
      // 140: getfield sixtwo/cn.ZpVra Lsixtwo/cv;
      // 143: invokevirtual sixtwo/cv.Ts ()Ljava/util/List;
      // 146: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14b: astore 17
      // 14d: aload 17
      // 14f: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 154: ifeq 281
      // 157: aload 17
      // 159: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 15e: checkcast sixtwo/cw
      // 161: astore 18
      // 163: aload 4
      // 165: ifnull 2a1
      // 168: aload 18
      // 16a: aload 4
      // 16c: ifnull 191
      // 16f: goto 176
      // 172: invokestatic sixtwo/cn.QS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 175: athrow
      // 176: invokevirtual sixtwo/cw.TC ()Z
      // 179: ifne 18f
      // 17c: goto 183
      // 17f: invokestatic sixtwo/cn.QS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 182: athrow
      // 183: aload 4
      // 185: ifnonnull 14d
      // 188: goto 18f
      // 18b: invokestatic sixtwo/cn.QS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18e: athrow
      // 18f: aload 18
      // 191: checkcast sixtwo/bH
      // 194: astore 19
      // 196: aload 0
      // 197: getfield sixtwo/cn.bwIta Z
      // 19a: aload 4
      // 19c: ifnull 1ab
      // 19f: ifeq 1be
      // 1a2: goto 1a9
      // 1a5: invokestatic sixtwo/cn.QS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a8: athrow
      // 1a9: iload 16
      // 1ab: aload 4
      // 1ad: ifnull 1bb
      // 1b0: ifne 1be
      // 1b3: goto 1ba
      // 1b6: invokestatic sixtwo/cn.QS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b9: athrow
      // 1ba: bipush 1
      // 1bb: goto 1bf
      // 1be: bipush 0
      // 1bf: istore 20
      // 1c1: aload 4
      // 1c3: ifnull 1ec
      // 1c6: iload 20
      // 1c8: ifeq 1db
      // 1cb: goto 1d2
      // 1ce: invokestatic sixtwo/cn.QS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d1: athrow
      // 1d2: fload 14
      // 1d4: fstore 21
      // 1d6: aload 4
      // 1d8: ifnonnull 1f5
      // 1db: aload 1
      // 1dc: fload 14
      // 1de: fload 15
      // 1e0: aload 12
      // 1e2: invokevirtual sixtwo/lC.cdc (FFLsixtwo/mG;)V
      // 1e5: goto 1ec
      // 1e8: invokestatic sixtwo/cn.QS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1eb: athrow
      // 1ec: fload 14
      // 1ee: fconst_2
      // 1ef: fadd
      // 1f0: ldc 7.0
      // 1f2: fadd
      // 1f3: fstore 21
      // 1f5: aload 0
      // 1f6: getfield sixtwo/cn.QWaAn F
      // 1f9: aload 5
      // 1fb: invokevirtual sixtwo/lq.cat ()F
      // 1fe: aload 0
      // 1ff: getfield sixtwo/cn.Xtjvx F
      // 202: invokestatic sixtwo/jf.bAH (FF)F
      // 205: fadd
      // 206: fstore 22
      // 208: aload 19
      // 20a: invokevirtual sixtwo/bH.Mq ()[I
      // 20d: astore 23
      // 20f: aload 1
      // 210: aload 5
      // 212: aload 23
      // 214: fload 21
      // 216: fload 22
      // 218: aload 10
      // 21a: invokevirtual sixtwo/lC.ces (Lsixtwo/lq;[IFFLsixtwo/mG;)V
      // 21d: aload 19
      // 21f: invokevirtual sixtwo/bH.Mr ()Ljava/lang/String;
      // 222: astore 24
      // 224: aload 24
      // 226: invokevirtual java/lang/String.isBlank ()Z
      // 229: ifne 26a
      // 22c: fload 21
      // 22e: aload 5
      // 230: aload 23
      // 232: invokevirtual sixtwo/lq.cap ([I)F
      // 235: fadd
      // 236: fconst_1
      // 237: fadd
      // 238: fstore 25
      // 23a: aload 0
      // 23b: getfield sixtwo/cn.QWaAn F
      // 23e: ldc 7.0
      // 240: fadd
      // 241: fstore 26
      // 243: aload 1
      // 244: aload 6
      // 246: aload 24
      // 248: fload 25
      // 24a: fload 26
      // 24c: aload 10
      // 24e: ldc 0.5
      // 250: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 253: invokevirtual sixtwo/lC.cer (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 256: fload 25
      // 258: aload 6
      // 25a: aload 24
      // 25c: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 25f: fadd
      // 260: ldc 7.0
      // 262: fadd
      // 263: fstore 14
      // 265: aload 4
      // 267: ifnonnull 279
      // 26a: fload 21
      // 26c: aload 5
      // 26e: aload 23
      // 270: invokevirtual sixtwo/lq.cap ([I)F
      // 273: fadd
      // 274: ldc 7.0
      // 276: fadd
      // 277: fstore 14
      // 279: iinc 16 1
      // 27c: aload 4
      // 27e: ifnonnull 14d
      // 281: getstatic sixtwo/cn.zXCXX Lsixtwo/kJ;
      // 284: invokevirtual sixtwo/kJ.endBatch ()V
      // 287: invokestatic sixtwo/jG.bHN ()V
      // 28a: aload 0
      // 28b: fload 14
      // 28d: aload 0
      // 28e: getfield sixtwo/cn.toIeR F
      // 291: fsub
      // 292: putfield sixtwo/cn.jTsqG F
      // 295: aload 0
      // 296: getfield sixtwo/cn.iArvU Lsixtwo/rk;
      // 299: aload 0
      // 29a: getfield sixtwo/cn.jTsqG F
      // 29d: invokevirtual sixtwo/rk.dhd (F)F
      // 2a0: pop
      // 2a1: return
   }

   @Override
   public void LX(lC var1) {
      this.Xtjvx = 18.0F;
      super.LX(var1);
   }

   private static MatchException QS(MatchException var0) {
      return var0;
   }

   private static int QT(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 14546;
      if (Xqssr[var3] == null) {
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
         long var5 = wCpej[var3];
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
         Object[] var9 = (Object[])myifd.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               myifd.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cn", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         Xqssr[var3] = var15;
      }

      return Xqssr[var3];
   }

   private static CallSite QV(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("QU".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cn" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
