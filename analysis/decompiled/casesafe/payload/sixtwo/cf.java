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

public class cf extends co {
   private final rk[] UlmqM;
   private final rk FPFaU;
   private static final long NGoqZ = gb.aYR(-5723543788386125114L, 6796361726211910234L, MethodHandles.lookup().lookupClass()).a(204007560076448L);
   private static final long[] QbRBk;
   private static final Integer[] gXJqM;
   private static final Map TolKa = new HashMap(13);

   public cf() {
      long var1 = NGoqZ ^ 29552771520205L;
      int[] var10001 = new int[Qa<"c">(21440, 1478419885393340876L ^ var1)];
      var10001[0] = Qa<"c">(31172, 9137805773204571087L ^ var1);
      var10001[1] = Qa<"c">(20836, 8219118908523768677L ^ var1);
      var10001[2] = Qa<"c">(17365, 6430019053191002579L ^ var1);
      var10001[3] = Qa<"c">(31692, 5298462745411666395L ^ var1);
      var10001[4] = Qa<"c">(6568, 8526141760768779174L ^ var1);
      var10001[5] = Qa<"c">(30177, 1457003905448955875L ^ var1);
      var10001[Qa<"c">(6381, 280708379947213545L ^ var1)] = Qa<"c">(7856, 2885818294589924533L ^ var1);
      var10001[Qa<"c">(21277, 1790751158802704656L ^ var1)] = Qa<"c">(9337, 2816716834409782897L ^ var1);
      var10001[Qa<"c">(3214, 2972347029122135689L ^ var1)] = Qa<"c">(29027, 6668588185170692960L ^ var1);
      super(var10001, lf.fEKkJ);
      boolean var10000 = ca.OY();
      this.UlmqM = new rk[Qa<"c">(16681, 1790911335480884000L ^ var1)];
      this.FPFaU = new rk(Qa<"c">(30941, 3172296704525026007L ^ var1)).dhs(rj.NJlxm);
      boolean var3 = var10000;
      int var4 = 0;

      while (var4 < this.UlmqM.length) {
         this.UlmqM[var4] = new rk(Qa<"c">(1103, 3842157668915494464L ^ var1)).dhs(rj.XzDkv);
         var4++;
         if (!var3) {
            break;
         }
      }
   }

   static {
      long var0 = NGoqZ ^ 97440077249969L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[17];
      int var5 = 0;
      String var6 = "├ş├É\\\u009a├áH\u0015+\u0015┬ú├Â\u0014~├ż3├É┬║\u0093/├Ö38N pl├Ä\u0012\u0001┬«Z├ü>├ś\nm├Ö,\u0085├ł├ŐzE├Č\u0093k|{┬Á├¬├é\u001aa>├ľ}┬ú\u008e$\u0082┬ż\u0018├Źx├ó├Ż;8\u0004┬¬├ŚyU├éL├▒┬║jT├ĺr\u0092|├Ĺ├źR\u0016├Ż\u0096p┬Á\tO├Ž\u001d┬▓lKv┬░\u009f\u009d├Ő├ą├«├Ő\u0003├╗├í!\u00845├╣\u0094)\u0084├ĺwT,";
      int var7 = "├ş├É\\\u009a├áH\u0015+\u0015┬ú├Â\u0014~├ż3├É┬║\u0093/├Ö38N pl├Ä\u0012\u0001┬«Z├ü>├ś\nm├Ö,\u0085├ł├ŐzE├Č\u0093k|{┬Á├¬├é\u001aa>├ľ}┬ú\u008e$\u0082┬ż\u0018├Źx├ó├Ż;8\u0004┬¬├ŚyU├éL├▒┬║jT├ĺr\u0092|├Ĺ├źR\u0016├Ż\u0096p┬Á\tO├Ž\u001d┬▓lKv┬░\u009f\u009d├Ő├ą├«├Ő\u0003├╗├í!\u00845├╣\u0094)\u0084├ĺwT,"
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
                     QbRBk = var8;
                     gXJqM = new Integer[17];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "a├î├ő┬ŽY├║\u0007├č├źx+\u0082\u001d├ťI\u0012";
                  var7 = "a├î├ő┬ŽY├║\u0007├č├źx+\u0082\u001d├ťI\u0012".length();
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

   private static CallSite Qa(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("PZ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cf" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException PX(MatchException var0) {
      return var0;
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
      // 000: getstatic sixtwo/cf.NGoqZ J
      // 003: ldc2_w 72799006157369
      // 006: lxor
      // 007: lstore 2
      // 008: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 00b: ldc 7.0
      // 00d: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 010: astore 5
      // 012: invokestatic sixtwo/ca.OX ()Z
      // 015: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 018: astore 6
      // 01a: aload 0
      // 01b: getfield sixtwo/cf.ormBS Lsixtwo/rk;
      // 01e: invokevirtual sixtwo/rk.dhj ()F
      // 021: fstore 7
      // 023: aload 0
      // 024: getfield sixtwo/cf.gILqY Lsixtwo/rk;
      // 027: invokevirtual sixtwo/rk.dhj ()F
      // 02a: fstore 8
      // 02c: aload 6
      // 02e: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 031: ldc 255.0
      // 033: fload 7
      // 035: fmul
      // 036: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 039: astore 9
      // 03b: aload 6
      // 03d: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 040: ldc 255.0
      // 042: fload 7
      // 044: fmul
      // 045: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 048: astore 10
      // 04a: istore 4
      // 04c: ldc 20.0
      // 04e: fstore 11
      // 050: aload 1
      // 051: aload 0
      // 052: getfield sixtwo/cf.toIeR F
      // 055: aload 0
      // 056: getfield sixtwo/cf.QWaAn F
      // 059: aload 0
      // 05a: getfield sixtwo/cf.jTsqG F
      // 05d: fload 11
      // 05f: fload 7
      // 061: fload 8
      // 063: invokevirtual sixtwo/lC.ccU (FFFFFF)V
      // 066: aload 0
      // 067: getfield sixtwo/cf.toIeR F
      // 06a: ldc 7.0
      // 06c: fadd
      // 06d: fstore 12
      // 06f: aload 0
      // 070: getfield sixtwo/cf.QWaAn F
      // 073: aload 5
      // 075: invokevirtual sixtwo/lq.cat ()F
      // 078: fload 11
      // 07a: invokestatic sixtwo/jf.bAH (FF)F
      // 07d: fadd
      // 07e: fstore 13
      // 080: aload 1
      // 081: aload 5
      // 083: aload 0
      // 084: getfield sixtwo/cf.eqWHC [I
      // 087: fload 12
      // 089: fload 13
      // 08b: aload 9
      // 08d: invokevirtual sixtwo/lC.ceA (Lsixtwo/lq;[IFFLsixtwo/mG;)V
      // 090: ldc 8.0
      // 092: fstore 14
      // 094: aload 0
      // 095: getfield sixtwo/cf.toIeR F
      // 098: aload 0
      // 099: getfield sixtwo/cf.jTsqG F
      // 09c: fadd
      // 09d: fload 14
      // 09f: fsub
      // 0a0: ldc 7.0
      // 0a2: fsub
      // 0a3: fstore 15
      // 0a5: aload 0
      // 0a6: getfield sixtwo/cf.QWaAn F
      // 0a9: fload 14
      // 0ab: fload 11
      // 0ad: invokestatic sixtwo/jf.bAH (FF)F
      // 0b0: fadd
      // 0b1: fstore 16
      // 0b3: aload 1
      // 0b4: aload 0
      // 0b5: getfield sixtwo/cf.jAncU Lsixtwo/lf;
      // 0b8: fload 15
      // 0ba: fload 16
      // 0bc: fload 14
      // 0be: aload 10
      // 0c0: invokevirtual sixtwo/lC.cem (Lsixtwo/lf;FFFLsixtwo/mG;)V
      // 0c3: aload 0
      // 0c4: getfield sixtwo/cf.FPFaU Lsixtwo/rk;
      // 0c7: aload 0
      // 0c8: getfield sixtwo/cf.ormBS Lsixtwo/rk;
      // 0cb: invokevirtual sixtwo/rk.dhj ()F
      // 0ce: aload 0
      // 0cf: getfield sixtwo/cf.KgDVz Lsixtwo/rk;
      // 0d2: invokevirtual sixtwo/rk.dhj ()F
      // 0d5: fmul
      // 0d6: fconst_1
      // 0d7: fcmpl
      // 0d8: iload 4
      // 0da: ifne 0e8
      // 0dd: iflt 0eb
      // 0e0: goto 0e7
      // 0e3: invokestatic sixtwo/cf.PX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e6: athrow
      // 0e7: bipush 1
      // 0e8: goto 0ec
      // 0eb: bipush 0
      // 0ec: invokevirtual sixtwo/rk.dhc (Z)V
      // 0ef: ldc 16.0
      // 0f1: fstore 17
      // 0f3: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f6: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0f9: invokevirtual net/minecraft/class_746.method_31548 ()Lnet/minecraft/class_1661;
      // 0fc: invokevirtual net/minecraft/class_1661.method_67533 ()Lnet/minecraft/class_2371;
      // 0ff: astore 18
      // 101: ldc 22.0
      // 103: fstore 19
      // 105: bipush 0
      // 106: istore 20
      // 108: iload 20
      // 10a: bipush 3
      // 10b: if_icmpge 287
      // 10e: aload 1
      // 10f: aload 0
      // 110: getfield sixtwo/cf.toIeR F
      // 113: aload 0
      // 114: getfield sixtwo/cf.QWaAn F
      // 117: fload 19
      // 119: fadd
      // 11a: aload 0
      // 11b: getfield sixtwo/cf.jTsqG F
      // 11e: fload 17
      // 120: fload 7
      // 122: fload 8
      // 124: invokevirtual sixtwo/lC.ccU (FFFFFF)V
      // 127: sipush 24262
      // 12a: ldc 7.0
      // 12c: fstore 21
      // 12e: ldc2_w 748752353000708146
      // 131: lload 2
      // 132: lxor
      // 133: fload 19
      // 135: ldc 8.0
      // 137: fload 17
      // 139: invokestatic sixtwo/jf.bAH (FF)F
      // 13c: fadd
      // 13d: fstore 22
      // 13f: invokedynamic c (IJ)I bsm=sixtwo/cf.Qa (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 144: iload 20
      // 146: sipush 21440
      // 149: ldc2_w 1478376777266648376
      // 14c: lload 2
      // 14d: lxor
      // 14e: invokedynamic c (IJ)I bsm=sixtwo/cf.Qa (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 153: imul
      // 154: iadd
      // 155: istore 23
      // 157: iload 23
      // 159: sipush 21440
      // 15c: ldc2_w 1478376777266648376
      // 15f: lload 2
      // 160: lxor
      // 161: invokedynamic c (IJ)I bsm=sixtwo/cf.Qa (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 166: iadd
      // 167: aload 18
      // 169: invokevirtual net/minecraft/class_2371.size ()I
      // 16c: invokestatic java/lang/Math.min (II)I
      // 16f: istore 24
      // 171: aload 18
      // 173: iload 23
      // 175: iload 24
      // 177: invokevirtual net/minecraft/class_2371.subList (II)Ljava/util/List;
      // 17a: astore 25
      // 17c: iload 4
      // 17e: ifne 28a
      // 181: bipush 0
      // 182: istore 26
      // 184: iload 26
      // 186: aload 25
      // 188: invokeinterface java/util/List.size ()I 1
      // 18d: if_icmpge 276
      // 190: iload 20
      // 192: sipush 21440
      // 195: ldc2_w 1478376777266648376
      // 198: lload 2
      // 199: lxor
      // 19a: invokedynamic c (IJ)I bsm=sixtwo/cf.Qa (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 19f: imul
      // 1a0: iload 26
      // 1a2: iadd
      // 1a3: istore 27
      // 1a5: aload 25
      // 1a7: iload 26
      // 1a9: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 1ae: checkcast net/minecraft/class_1799
      // 1b1: astore 28
      // 1b3: iload 4
      // 1b5: ifne 271
      // 1b8: aload 28
      // 1ba: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 1bd: iload 4
      // 1bf: ifne 10a
      // 1c2: goto 1c9
      // 1c5: invokestatic sixtwo/cf.PX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c8: athrow
      // 1c9: ifne 26e
      // 1cc: aload 0
      // 1cd: getfield sixtwo/cf.UlmqM [Lsixtwo/rk;
      // 1d0: iload 27
      // 1d2: aaload
      // 1d3: aload 28
      // 1d5: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 1d8: iload 4
      // 1da: ifne 1ef
      // 1dd: goto 1e4
      // 1e0: invokestatic sixtwo/cf.PX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e3: athrow
      // 1e4: ifne 1f2
      // 1e7: goto 1ee
      // 1ea: invokestatic sixtwo/cf.PX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ed: athrow
      // 1ee: bipush 1
      // 1ef: goto 1f3
      // 1f2: bipush 0
      // 1f3: invokevirtual sixtwo/rk.dhc (Z)V
      // 1f6: aload 0
      // 1f7: getfield sixtwo/cf.FPFaU Lsixtwo/rk;
      // 1fa: invokevirtual sixtwo/rk.dhj ()F
      // 1fd: aload 0
      // 1fe: getfield sixtwo/cf.UlmqM [Lsixtwo/rk;
      // 201: iload 27
      // 203: aaload
      // 204: invokevirtual sixtwo/rk.dhj ()F
      // 207: fmul
      // 208: fstore 29
      // 20a: invokestatic sixtwo/jF.bHw ()[F
      // 20d: bipush 3
      // 20e: faload
      // 20f: fstore 30
      // 211: fconst_1
      // 212: fconst_1
      // 213: fconst_1
      // 214: fload 30
      // 216: fload 29
      // 218: fmul
      // 219: invokestatic sixtwo/jF.bHz (FFFF)V
      // 21c: aload 1
      // 21d: aload 28
      // 21f: aload 0
      // 220: getfield sixtwo/cf.toIeR F
      // 223: fload 21
      // 225: fadd
      // 226: aload 0
      // 227: getfield sixtwo/cf.QWaAn F
      // 22a: fload 22
      // 22c: fadd
      // 22d: ldc_w 0.5
      // 230: invokevirtual sixtwo/lC.cea (Lnet/minecraft/class_1799;FFF)Lsixtwo/jv;
      // 233: invokevirtual sixtwo/jv.bGw ()Lsixtwo/jy;
      // 236: checkcast sixtwo/jv
      // 239: invokevirtual sixtwo/jv.bGv ()Lsixtwo/jy;
      // 23c: pop
      // 23d: aload 1
      // 23e: aload 28
      // 240: aload 0
      // 241: getfield sixtwo/cf.toIeR F
      // 244: fload 21
      // 246: fadd
      // 247: aload 0
      // 248: getfield sixtwo/cf.QWaAn F
      // 24b: fload 22
      // 24d: fadd
      // 24e: ldc_w 0.5
      // 251: invokevirtual sixtwo/lC.ceb (Lnet/minecraft/class_1799;FFF)Lsixtwo/jw;
      // 254: invokevirtual sixtwo/jw.bGw ()Lsixtwo/jy;
      // 257: checkcast sixtwo/jw
      // 25a: invokevirtual sixtwo/jw.bGv ()Lsixtwo/jy;
      // 25d: pop
      // 25e: fconst_1
      // 25f: fconst_1
      // 260: fconst_1
      // 261: fload 30
      // 263: invokestatic sixtwo/jF.bHz (FFFF)V
      // 266: fload 21
      // 268: ldc_w 15.0
      // 26b: fadd
      // 26c: fstore 21
      // 26e: iinc 26 1
      // 271: iload 4
      // 273: ifeq 184
      // 276: fload 19
      // 278: fload 17
      // 27a: fconst_2
      // 27b: fadd
      // 27c: fadd
      // 27d: fstore 19
      // 27f: iinc 20 1
      // 282: iload 4
      // 284: ifeq 108
      // 287: invokestatic sixtwo/ju.bFV ()V
      // 28a: return
   }

   @Override
   public void LX(lC var1) {
      this.jTsqG = 142.0F;
      this.Xtjvx = 74.0F;
      super.LX(var1);
   }

   private static int PZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = PY(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int PY(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 28455;
      if (gXJqM[var3] == null) {
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
         long var5 = QbRBk[var3];
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
         Object[] var9 = (Object[])TolKa.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               TolKa.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cf", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         gXJqM[var3] = var15;
      }

      return gXJqM[var3];
   }
}
