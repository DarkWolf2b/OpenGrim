package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public abstract class cr extends iS implements cs, lA, lG {
   protected float toIeR;
   protected float QWaAn;
   protected float jTsqG;
   protected float Xtjvx;
   protected final rk ormBS;
   protected final rk KgDVz;
   protected final rk gILqY;
   protected final rk OsbYH;
   protected final rk AyAnj;
   protected final rk iArvU;
   protected boolean LkpAS;
   protected boolean vCMYc;
   protected boolean pAjuu;
   protected float lGacw;
   protected float WjFpo;
   protected float TSvLw;
   protected float VngMS;
   protected int[] eqWHC;
   protected lf jAncU;
   protected final cC WUOUc;
   private static iS[] vFBld;
   private static final long yIaJZ = gb.aYR(-5607814429691454069L, 3264665966983370356L, MethodHandles.lookup().lookupClass()).a(110351274464627L);
   private static final String[] tsSMY;
   private static final String[] FmiwT;
   private static final Map cSkUg = new HashMap(13);
   private static final long[] pSShx;
   private static final Integer[] pIOSJ;
   private static final Map wWYME;

   public cr(int[] var1, lf var2) {
      long var3 = yIaJZ ^ 128131482753333L;
      super();
      this.ormBS = new rk(SK<"h">(1477, 8608146953831370447L ^ var3)).dhs(rj.NJlxm);
      this.KgDVz = new rk(SK<"h">(18508, 4983615012341089093L ^ var3)).dhs(rj.NJlxm);
      this.gILqY = new rk(SK<"h">(18508, 4983615012341089093L ^ var3)).dhs(rj.UPXqT);
      this.OsbYH = new rk(SK<"h">(18508, 4983615012341089093L ^ var3)).dhs(rj.NJlxm);
      this.AyAnj = new rk(SK<"h">(24503, 6620255654544544952L ^ var3)).dhs(rj.yiIHY);
      this.iArvU = new rk(SK<"h">(18508, 4983615012341089093L ^ var3)).dhs(rj.NJlxm);
      this.WUOUc = new cC(
            mr.clS(
               new int[]{
                  SK<"h">(16150, 666873537198191640L ^ var3),
                  SK<"h">(30109, 369152753789288081L ^ var3),
                  SK<"h">(32371, 4685975267280008574L ^ var3),
                  SK<"h">(6674, 2697767513730273562L ^ var3)
               }
            )
         )
         .Vy(1.0)
         .Vw(50.0)
         .Vx(200.0)
         .VA(100.0)
         .Vz("%");
      this.eqWHC = var1;
      this.jAncU = var2;
      this.oZllQ.add(this.WUOUc);
   }

   static {
      iS[] var10000 = new iS[3];
      SB(var10000);
      long var11 = yIaJZ ^ 46570476029976L;
      Cipher var13;
      Cipher var24 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var24.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[3];
      int var18 = 0;
      String var17 = "f|\u0098├ö\u0091\u001e\u0014x├ö┬«0.├Ľ├üYX1\u0096,\u0012├č\u0019-C┬Ş├ł├â\f├Ę\u0093\u0087O\u0010\u0081\u0016┬│├╣GRS├Ľ\u0083├ë┬í\u0095┬źZ┬ŽR\u0010\u009a\u0006├ş\u0018┬│\u007fm3├Ö┬żi├┐7\u009c├Ĺ\u0007";
      int var19 = "f|\u0098├ö\u0091\u001e\u0014x├ö┬«0.├Ľ├üYX1\u0096,\u0012├č\u0019-C┬Ş├ł├â\f├Ę\u0093\u0087O\u0010\u0081\u0016┬│├╣GRS├Ľ\u0083├ë┬í\u0095┬źZ┬ŽR\u0010\u009a\u0006├ş\u0018┬│\u007fm3├Ö┬żi├┐7\u009c├Ĺ\u0007"
         .length();
      char var16 = ' ';
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var31 = SE(var21).intern();
         int var10001 = -1;
         var20[var18++] = var31;
         if ((var15 += var16) >= var19) {
            tsSMY = var20;
            FmiwT = new String[3];
            wWYME = new HashMap(13);
            Cipher var0;
            Cipher var25 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var25.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[8];
            int var3 = 0;
            String var4 = "┬ís├çE┬Ą┬Ş├ç\u0003\u0013├║├Č├│M┬«┬áya\u001f┬¬U.\"┬╗┬Ž\u0091P,\u0014Z├▓\fH\u0088├ť├ť┬Č├âf├║┬«\u0095├ő┬«\fcR├ć┬┐";
            int var5 = "┬ís├çE┬Ą┬Ş├ç\u0003\u0013├║├Č├│M┬«┬áya\u001f┬¬U.\"┬╗┬Ž\u0091P,\u0014Z├▓\fH\u0088├ť├ť┬Č├âf├║┬«\u0095├ő┬«\fcR├ć┬┐".length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var26 = var6;
               var10001 = var3++;
               long var34 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var37 = -1;

               while (true) {
                  long var8 = var34;
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
                  long var39 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var37) {
                     case 0:
                        var26[var10001] = var39;
                        if (var2 >= var5) {
                           pSShx = var6;
                           pIOSJ = new Integer[8];
                           return;
                        }
                        break;
                     default:
                        var26[var10001] = var39;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "\u00adpGB├Üg\u009ed├Ö├Ž[┬«├╝7├▒\u00ad";
                        var5 = "\u00adpGB├Üg\u009ed├Ö├Ž[┬«├╝7├▒\u00ad".length();
                        var2 = 0;
                  }

                  byte var30 = var2;
                  var2 += 8;
                  var7 = var4.substring(var30, var2).getBytes("ISO-8859-1");
                  var26 = var6;
                  var10001 = var3++;
                  var34 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var37 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   private static Object SG(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = SF(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public lf Sm() {
      return this.jAncU;
   }

   public rk Sc() {
      return this.AyAnj;
   }

   public float Sk() {
      return this.VngMS;
   }

   public cr So(float var1) {
      this.toIeR = var1;
      return this;
   }

   private static CallSite SH(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("SG".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cr" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public float Si() {
      return this.WjFpo;
   }

   public float Sj() {
      return this.TSvLw;
   }

   public void Ph(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cr.yIaJZ J
      // 03: ldc2_w 101598879568395
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/cr.SC ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: invokevirtual sixtwo/cr.LX (Lsixtwo/lC;)V
      // 10: aload 0
      // 11: getfield sixtwo/cr.ormBS Lsixtwo/rk;
      // 14: invokevirtual sixtwo/rk.dhj ()F
      // 17: aload 0
      // 18: getfield sixtwo/cr.KgDVz Lsixtwo/rk;
      // 1b: invokevirtual sixtwo/rk.dhj ()F
      // 1e: fmul
      // 1f: fstore 5
      // 21: astore 4
      // 23: fload 5
      // 25: fconst_0
      // 26: aload 4
      // 28: ifnull 59
      // 2b: fcmpl
      // 2c: ifne 3b
      // 2f: goto 36
      // 32: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: return
      // 37: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: fconst_1
      // 3c: fconst_1
      // 3d: fconst_1
      // 3e: fconst_1
      // 3f: fload 5
      // 41: invokestatic java/lang/Math.min (FF)F
      // 44: invokestatic sixtwo/jF.bHz (FFFF)V
      // 47: ldc 0.5
      // 49: fload 5
      // 4b: ldc 0.5
      // 4d: fmul
      // 4e: fadd
      // 4f: ldc 0.05
      // 51: aload 0
      // 52: getfield sixtwo/cr.OsbYH Lsixtwo/rk;
      // 55: invokevirtual sixtwo/rk.dhj ()F
      // 58: fmul
      // 59: fsub
      // 5a: fstore 6
      // 5c: aload 0
      // 5d: invokevirtual sixtwo/cr.RT ()F
      // 60: fstore 7
      // 62: aload 1
      // 63: aload 0
      // 64: getfield sixtwo/cr.toIeR F
      // 67: aload 0
      // 68: invokevirtual sixtwo/cr.RU ()F
      // 6b: fconst_2
      // 6c: fdiv
      // 6d: fadd
      // 6e: aload 0
      // 6f: getfield sixtwo/cr.QWaAn F
      // 72: aload 0
      // 73: invokevirtual sixtwo/cr.RV ()F
      // 76: fconst_2
      // 77: fdiv
      // 78: fadd
      // 79: fload 6
      // 7b: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // 7e: fload 7
      // 80: fconst_1
      // 81: fcmpl
      // 82: aload 4
      // 84: ifnull bb
      // 87: ifeq a6
      // 8a: goto 91
      // 8d: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: aload 1
      // 92: aload 0
      // 93: getfield sixtwo/cr.toIeR F
      // 96: aload 0
      // 97: getfield sixtwo/cr.QWaAn F
      // 9a: fload 7
      // 9c: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // 9f: goto a6
      // a2: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a5: athrow
      // a6: aload 0
      // a7: aload 1
      // a8: invokevirtual sixtwo/cr.NV (Lsixtwo/lC;)V
      // ab: fload 7
      // ad: fconst_1
      // ae: aload 4
      // b0: ifnull c6
      // b3: fcmpl
      // b4: goto bb
      // b7: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ba: athrow
      // bb: ifeq c1
      // be: invokestatic sixtwo/jH.bIf ()V
      // c1: invokestatic sixtwo/jH.bIf ()V
      // c4: fconst_1
      // c5: fconst_1
      // c6: fconst_1
      // c7: fconst_1
      // c8: invokestatic sixtwo/jF.bHz (FFFF)V
      // cb: return
   }

   public float RT() {
      return this.WUOUc.VB() / 100.0F;
   }

   public static iS[] SC() {
      return vFBld;
   }

   public cr Sz(int[] var1) {
      this.eqWHC = var1;
      return this;
   }

   private static CallSite SK(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("SJ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cr" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static void SB(iS[] var0) {
      vFBld = var0;
   }

   private static String SE(byte[] var0) {
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

   public cr SA(lf var1) {
      this.jAncU = var1;
      return this;
   }

   private static String SF(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 14583;
      if (FmiwT[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])cSkUg.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               cSkUg.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cr", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = tsSMY[var5].getBytes("ISO-8859-1");
         FmiwT[var5] = SE(((Cipher)var4[0]).doFinal(var9));
      }

      return FmiwT[var5];
   }

   private static int SI(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 5517;
      if (pIOSJ[var3] == null) {
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
         long var5 = pSShx[var3];
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
         Object[] var9 = (Object[])wWYME.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               wWYME.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cr", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         pIOSJ[var3] = var15;
      }

      return pIOSJ[var3];
   }

   private float RN(ck param1, float param2, List<Float> param3, List<Float> param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cr.yIaJZ J
      // 03: ldc2_w 45498840092319
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/cr.SC ()[Lsixtwo/iS;
      // 0c: bipush 0
      // 0d: istore 8
      // 0f: astore 7
      // 11: iload 8
      // 13: aload 3
      // 14: invokeinterface java/util/List.size ()I 1
      // 19: if_icmpge 9d
      // 1c: fload 2
      // 1d: aload 3
      // 1e: iload 8
      // 20: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 25: checkcast java/lang/Float
      // 28: invokevirtual java/lang/Float.floatValue ()F
      // 2b: fadd
      // 2c: aload 1
      // 2d: invokevirtual sixtwo/ck.QG ()F
      // 30: fsub
      // 31: invokestatic java/lang/Math.abs (F)F
      // 34: fstore 9
      // 36: fload 9
      // 38: aload 7
      // 3a: ifnull 9e
      // 3d: ldc_w 25.0
      // 40: fcmpg
      // 41: aload 7
      // 43: ifnull 76
      // 46: goto 4d
      // 49: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: ifge 64
      // 50: goto 57
      // 53: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: aload 1
      // 58: bipush 1
      // 59: invokevirtual sixtwo/ck.QI (Z)Lsixtwo/ck;
      // 5c: pop
      // 5d: goto 64
      // 60: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: fload 9
      // 66: ldc_w 5.0
      // 69: aload 7
      // 6b: ifnull 93
      // 6e: fcmpg
      // 6f: goto 76
      // 72: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 75: athrow
      // 76: ifge 95
      // 79: aload 1
      // 7a: invokevirtual sixtwo/ck.QG ()F
      // 7d: aload 4
      // 7f: iload 8
      // 81: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 86: checkcast java/lang/Float
      // 89: invokevirtual java/lang/Float.floatValue ()F
      // 8c: goto 93
      // 8f: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 92: athrow
      // 93: fadd
      // 94: fstore 2
      // 95: iinc 8 1
      // 98: aload 7
      // 9a: ifnonnull 11
      // 9d: fload 2
      // 9e: freturn
   }

   public rk Sb() {
      return this.OsbYH;
   }

   public float RW() {
      return this.toIeR;
   }

   public double RR(double var1) {
      return this.toIeR + (var1 - this.toIeR) / this.RT();
   }

   public boolean RP(double var1, double var3) {
      return jf.bAE(var1, var3, this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx);
   }

   public rk RY() {
      return this.ormBS;
   }

   public rk RZ() {
      return this.KgDVz;
   }

   public boolean Sf() {
      return this.vCMYc;
   }

   public float Sh() {
      return this.lGacw;
   }

   public cC Sn() {
      return this.WUOUc;
   }

   public cr Sp(float var1) {
      this.QWaAn = var1;
      return this;
   }

   public cr Sq(float var1) {
      this.jTsqG = var1;
      return this;
   }

   protected abstract void NV(lC var1);

   public boolean RQ(lC var1) {
      return this.RP(this.RR(var1.cff()), this.RS(var1.cfg()));
   }

   public rk Sa() {
      return this.gILqY;
   }

   public double RS(double var1) {
      return this.QWaAn + (var1 - this.QWaAn) / this.RT();
   }

   public rk Sd() {
      return this.iArvU;
   }

   public int[] Sl() {
      return this.eqWHC;
   }

   public cr Sr(float var1) {
      this.Xtjvx = var1;
      return this;
   }

   public void LX(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cr.yIaJZ J
      // 003: ldc2_w 106457892864423
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/cr.SC ()[Lsixtwo/iS;
      // 00b: invokestatic sixtwo/rm.dip ()Lnet/minecraft/class_241;
      // 00e: astore 5
      // 010: astore 4
      // 012: aload 0
      // 013: getfield sixtwo/cr.iArvU Lsixtwo/rk;
      // 016: aload 0
      // 017: getfield sixtwo/cr.jTsqG F
      // 01a: invokevirtual sixtwo/rk.dhd (F)F
      // 01d: fstore 6
      // 01f: aload 0
      // 020: invokevirtual sixtwo/cr.RT ()F
      // 023: fstore 7
      // 025: fload 6
      // 027: fload 7
      // 029: fmul
      // 02a: fstore 8
      // 02c: aload 0
      // 02d: getfield sixtwo/cr.Xtjvx F
      // 030: fload 7
      // 032: fmul
      // 033: fstore 9
      // 035: aload 0
      // 036: fload 6
      // 038: putfield sixtwo/cr.jTsqG F
      // 03b: aload 0
      // 03c: getfield sixtwo/cr.gILqY Lsixtwo/rk;
      // 03f: aload 0
      // 040: getfield sixtwo/cr.pAjuu Z
      // 043: invokevirtual sixtwo/rk.dhc (Z)V
      // 046: aload 0
      // 047: getfield sixtwo/cr.ormBS Lsixtwo/rk;
      // 04a: aload 0
      // 04b: getfield sixtwo/cr.LkpAS Z
      // 04e: ifeq 05b
      // 051: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 054: goto 05e
      // 057: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05a: athrow
      // 05b: getstatic sixtwo/rj.AYqck Lsixtwo/rj;
      // 05e: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 061: pop
      // 062: aload 0
      // 063: getfield sixtwo/cr.ormBS Lsixtwo/rk;
      // 066: aload 0
      // 067: getfield sixtwo/cr.LkpAS Z
      // 06a: invokevirtual sixtwo/rk.dhc (Z)V
      // 06d: aload 0
      // 06e: getfield sixtwo/cr.KgDVz Lsixtwo/rk;
      // 071: aload 0
      // 072: invokevirtual sixtwo/cr.Om ()Z
      // 075: ifeq 082
      // 078: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 07b: goto 085
      // 07e: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 081: athrow
      // 082: getstatic sixtwo/rj.AYqck Lsixtwo/rj;
      // 085: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 088: pop
      // 089: aload 0
      // 08a: getfield sixtwo/cr.KgDVz Lsixtwo/rk;
      // 08d: aload 0
      // 08e: invokevirtual sixtwo/cr.Om ()Z
      // 091: invokevirtual sixtwo/rk.dhc (Z)V
      // 094: aload 0
      // 095: getfield sixtwo/cr.OsbYH Lsixtwo/rk;
      // 098: aload 0
      // 099: getfield sixtwo/cr.vCMYc Z
      // 09c: invokevirtual sixtwo/rk.dhc (Z)V
      // 09f: aload 0
      // 0a0: getfield sixtwo/cr.pAjuu Z
      // 0a3: aload 4
      // 0a5: ifnull 0fd
      // 0a8: ifeq 1d6
      // 0ab: goto 0b2
      // 0ae: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b1: athrow
      // 0b2: aload 0
      // 0b3: aload 1
      // 0b4: invokevirtual sixtwo/lC.cff ()D
      // 0b7: d2f
      // 0b8: aload 0
      // 0b9: getfield sixtwo/cr.lGacw F
      // 0bc: fsub
      // 0bd: fconst_0
      // 0be: aload 5
      // 0c0: getfield net/minecraft/class_241.field_1343 F
      // 0c3: fload 8
      // 0c5: fsub
      // 0c6: invokestatic net/minecraft/class_3532.method_15363 (FFF)F
      // 0c9: putfield sixtwo/cr.toIeR F
      // 0cc: sipush 5942
      // 0cf: aload 0
      // 0d0: aload 1
      // 0d1: invokevirtual sixtwo/lC.cfg ()D
      // 0d4: d2f
      // 0d5: aload 0
      // 0d6: getfield sixtwo/cr.WjFpo F
      // 0d9: fsub
      // 0da: fconst_0
      // 0db: aload 5
      // 0dd: getfield net/minecraft/class_241.field_1342 F
      // 0e0: fload 9
      // 0e2: fsub
      // 0e3: invokestatic net/minecraft/class_3532.method_15363 (FFF)F
      // 0e6: putfield sixtwo/cr.QWaAn F
      // 0e9: ldc2_w 8219736879361819823
      // 0ec: lload 2
      // 0ed: lxor
      // 0ee: invokedynamic h (IJ)I bsm=sixtwo/cr.SK (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f3: invokestatic sixtwo/rr.diY (I)Z
      // 0f6: goto 0fd
      // 0f9: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fc: athrow
      // 0fd: istore 10
      // 0ff: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 102: invokevirtual sixtwo/cq.RB ()Lsixtwo/cm;
      // 105: invokevirtual sixtwo/cm.QQ ()Lsixtwo/rk;
      // 108: iload 10
      // 10a: aload 4
      // 10c: ifnull 11a
      // 10f: ifne 11d
      // 112: goto 119
      // 115: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 118: athrow
      // 119: bipush 1
      // 11a: goto 11e
      // 11d: bipush 0
      // 11e: invokevirtual sixtwo/rk.dhc (Z)V
      // 121: iload 10
      // 123: ifeq 12b
      // 126: return
      // 127: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12a: athrow
      // 12b: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 12e: invokevirtual sixtwo/cq.RB ()Lsixtwo/cm;
      // 131: invokevirtual sixtwo/cm.QP ()Ljava/util/List;
      // 134: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 139: astore 11
      // 13b: aload 11
      // 13d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 142: ifeq 1d6
      // 145: aload 11
      // 147: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 14c: checkcast sixtwo/ck
      // 14f: astore 12
      // 151: aload 4
      // 153: ifnull 1d1
      // 156: aload 12
      // 158: invokevirtual sixtwo/ck.QF ()Lsixtwo/cl;
      // 15b: getstatic sixtwo/cl.zjBim Lsixtwo/cl;
      // 15e: if_acmpne 1aa
      // 161: goto 168
      // 164: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 167: athrow
      // 168: aload 0
      // 169: aload 0
      // 16a: aload 12
      // 16c: aload 0
      // 16d: getfield sixtwo/cr.toIeR F
      // 170: fconst_0
      // 171: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 174: fload 8
      // 176: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 179: fload 8
      // 17b: fconst_2
      // 17c: fdiv
      // 17d: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 180: invokestatic java/util/List.of (Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;
      // 183: fconst_0
      // 184: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 187: fload 8
      // 189: fneg
      // 18a: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 18d: fload 8
      // 18f: fneg
      // 190: fconst_2
      // 191: fdiv
      // 192: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 195: invokestatic java/util/List.of (Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;
      // 198: invokevirtual sixtwo/cr.RN (Lsixtwo/ck;FLjava/util/List;Ljava/util/List;)F
      // 19b: putfield sixtwo/cr.toIeR F
      // 19e: aload 4
      // 1a0: ifnonnull 13b
      // 1a3: goto 1aa
      // 1a6: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a9: athrow
      // 1aa: aload 0
      // 1ab: aload 0
      // 1ac: aload 12
      // 1ae: aload 0
      // 1af: getfield sixtwo/cr.QWaAn F
      // 1b2: fconst_0
      // 1b3: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 1b6: fload 9
      // 1b8: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 1bb: invokestatic java/util/List.of (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;
      // 1be: fconst_0
      // 1bf: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 1c2: fload 9
      // 1c4: fneg
      // 1c5: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 1c8: invokestatic java/util/List.of (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;
      // 1cb: invokevirtual sixtwo/cr.RN (Lsixtwo/ck;FLjava/util/List;Ljava/util/List;)F
      // 1ce: putfield sixtwo/cr.QWaAn F
      // 1d1: aload 4
      // 1d3: ifnonnull 13b
      // 1d6: return
   }

   public cr RO(float var1, float var2) {
      this.toIeR = var1;
      this.QWaAn = var2;
      return this;
   }

   private static MatchException SD(MatchException var0) {
      return var0;
   }

   public cr Ss(boolean var1) {
      this.LkpAS = var1;
      return this;
   }

   public cr St(boolean var1) {
      this.vCMYc = var1;
      return this;
   }

   public cr Su(boolean var1) {
      this.pAjuu = var1;
      return this;
   }

   public boolean Sg() {
      return this.pAjuu;
   }

   public cr Sv(float var1) {
      this.lGacw = var1;
      return this;
   }

   public cr Sw(float var1) {
      this.WjFpo = var1;
      return this;
   }

   public cr Sx(float var1) {
      this.TSvLw = var1;
      return this;
   }

   public cr Sy(float var1) {
      this.VngMS = var1;
      return this;
   }

   public float RX() {
      return this.QWaAn;
   }

   private static int SJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = SI(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public float RU() {
      return this.jTsqG * this.RT();
   }

   public boolean Om() {
      return true;
   }

   public boolean Se() {
      return this.LkpAS;
   }

   public float RV() {
      return this.Xtjvx * this.RT();
   }

   @Override
   public boolean onMouseClicked(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cr.yIaJZ J
      // 003: ldc2_w 139752635374671
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/cr.SC ()[Lsixtwo/iS;
      // 00c: aload 0
      // 00d: dload 1
      // 00e: dload 3
      // 00f: invokevirtual sixtwo/cr.RP (DD)Z
      // 012: istore 9
      // 014: astore 8
      // 016: iload 9
      // 018: aload 8
      // 01a: ifnull 1b1
      // 01d: ifeq 1b0
      // 020: goto 027
      // 023: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 026: athrow
      // 027: aload 0
      // 028: getfield sixtwo/cr.LkpAS Z
      // 02b: aload 8
      // 02d: ifnull 1b1
      // 030: goto 037
      // 033: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 036: athrow
      // 037: ifeq 1b0
      // 03a: goto 041
      // 03d: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 040: athrow
      // 041: aload 5
      // 043: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 046: aload 8
      // 048: ifnull 0bc
      // 04b: goto 052
      // 04e: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 051: athrow
      // 052: if_acmpne 0b7
      // 055: goto 05c
      // 058: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05b: athrow
      // 05c: aload 0
      // 05d: aload 8
      // 05f: ifnull 082
      // 062: goto 069
      // 065: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 068: athrow
      // 069: instanceof sixtwo/bU
      // 06c: ifeq 07c
      // 06f: goto 076
      // 072: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: bipush 0
      // 077: ireturn
      // 078: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07b: athrow
      // 07c: aload 0
      // 07d: bipush 1
      // 07e: putfield sixtwo/cr.pAjuu Z
      // 081: aload 0
      // 082: invokevirtual sixtwo/cr.RT ()F
      // 085: fstore 10
      // 087: aload 0
      // 088: dload 1
      // 089: aload 0
      // 08a: getfield sixtwo/cr.toIeR F
      // 08d: f2d
      // 08e: dsub
      // 08f: d2f
      // 090: fload 10
      // 092: fmul
      // 093: putfield sixtwo/cr.lGacw F
      // 096: aload 0
      // 097: dload 3
      // 098: aload 0
      // 099: getfield sixtwo/cr.QWaAn F
      // 09c: f2d
      // 09d: dsub
      // 09e: d2f
      // 09f: fload 10
      // 0a1: fmul
      // 0a2: putfield sixtwo/cr.WjFpo F
      // 0a5: aload 0
      // 0a6: aload 0
      // 0a7: getfield sixtwo/cr.toIeR F
      // 0aa: putfield sixtwo/cr.TSvLw F
      // 0ad: aload 0
      // 0ae: aload 0
      // 0af: getfield sixtwo/cr.QWaAn F
      // 0b2: putfield sixtwo/cr.VngMS F
      // 0b5: bipush 1
      // 0b6: ireturn
      // 0b7: aload 5
      // 0b9: getstatic sixtwo/mA.frWTZ Lsixtwo/mA;
      // 0bc: if_acmpne 1b0
      // 0bf: aload 0
      // 0c0: bipush 0
      // 0c1: putfield sixtwo/cr.pAjuu Z
      // 0c4: aload 0
      // 0c5: bipush 1
      // 0c6: putfield sixtwo/cr.vCMYc Z
      // 0c9: aload 0
      // 0ca: getfield sixtwo/cr.AyAnj Lsixtwo/rk;
      // 0cd: invokevirtual sixtwo/rk.dhg ()V
      // 0d0: aload 0
      // 0d1: getfield sixtwo/cr.toIeR F
      // 0d4: dload 1
      // 0d5: aload 0
      // 0d6: getfield sixtwo/cr.toIeR F
      // 0d9: f2d
      // 0da: dsub
      // 0db: d2f
      // 0dc: aload 0
      // 0dd: invokevirtual sixtwo/cr.RT ()F
      // 0e0: fmul
      // 0e1: fadd
      // 0e2: fstore 10
      // 0e4: aload 0
      // 0e5: getfield sixtwo/cr.QWaAn F
      // 0e8: dload 3
      // 0e9: aload 0
      // 0ea: getfield sixtwo/cr.QWaAn F
      // 0ed: f2d
      // 0ee: dsub
      // 0ef: d2f
      // 0f0: aload 0
      // 0f1: invokevirtual sixtwo/cr.RT ()F
      // 0f4: fmul
      // 0f5: fadd
      // 0f6: fstore 11
      // 0f8: new sixtwo/ap
      // 0fb: dup
      // 0fc: fload 10
      // 0fe: fload 11
      // 100: ldc_w 110.0
      // 103: ldc_w 6.0
      // 106: invokespecial sixtwo/ap.<init> (FFFF)V
      // 109: aload 0
      // 10a: getfield sixtwo/cr.oZllQ Ljava/util/List;
      // 10d: invokeinterface java/util/List.isEmpty ()Z 1
      // 112: ifeq 12a
      // 115: sipush 31643
      // 118: ldc2_w 6867435939297302673
      // 11b: lload 6
      // 11d: lxor
      // 11e: invokedynamic u (IJ)Ljava/lang/String; bsm=sixtwo/cr.SH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 123: goto 138
      // 126: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 129: athrow
      // 12a: sipush 3802
      // 12d: ldc2_w 3233954928348032465
      // 130: lload 6
      // 132: lxor
      // 133: invokedynamic u (IJ)Ljava/lang/String; bsm=sixtwo/cr.SH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 138: invokevirtual sixtwo/ap.pW (Ljava/lang/String;)Lsixtwo/ap;
      // 13b: invokevirtual sixtwo/ap.qq ()Lsixtwo/ap;
      // 13e: astore 12
      // 140: aload 0
      // 141: getfield sixtwo/cr.oZllQ Ljava/util/List;
      // 144: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 149: astore 13
      // 14b: aload 13
      // 14d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 152: ifeq 17a
      // 155: aload 13
      // 157: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 15c: checkcast sixtwo/cB
      // 15f: astore 14
      // 161: aload 12
      // 163: aload 14
      // 165: invokevirtual sixtwo/ap.pU (Lsixtwo/cB;)Lsixtwo/ap;
      // 168: pop
      // 169: aload 8
      // 16b: ifnull 1ae
      // 16e: aload 8
      // 170: ifnonnull 14b
      // 173: goto 17a
      // 176: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 179: athrow
      // 17a: aload 12
      // 17c: sipush 6072
      // 17f: ldc2_w 6415833251046421681
      // 182: lload 6
      // 184: lxor
      // 185: invokedynamic u (IJ)Ljava/lang/String; bsm=sixtwo/cr.SH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 18a: getstatic sixtwo/lf.JHGge Lsixtwo/lf;
      // 18d: getstatic sixtwo/jk.mPXGi Lsixtwo/mG;
      // 190: getstatic sixtwo/jk.mPXGi Lsixtwo/mG;
      // 193: aload 0
      // 194: invokedynamic run (Lsixtwo/cr;)Lsixtwo/ai; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lsixtwo/aj;)V, sixtwo/cr.Pn (Lsixtwo/aj;)V, (Lsixtwo/aj;)V ]
      // 199: invokevirtual sixtwo/ap.qn (Ljava/lang/String;Lsixtwo/lf;Lsixtwo/mG;Lsixtwo/mG;Lsixtwo/ai;)Lsixtwo/ap;
      // 19c: aload 0
      // 19d: invokedynamic run (Lsixtwo/cr;)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/cr.Pm ()V, ()V ]
      // 1a2: invokevirtual sixtwo/ap.qo (Ljava/lang/Runnable;)Lsixtwo/ap;
      // 1a5: pop
      // 1a6: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 1a9: aload 12
      // 1ab: invokevirtual sixtwo/cq.Rs (Lsixtwo/ap;)V
      // 1ae: bipush 1
      // 1af: ireturn
      // 1b0: bipush 0
      // 1b1: ireturn
   }

   @Override
   public boolean onMouseReleased(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cr.yIaJZ J
      // 03: ldc2_w 24685273522658
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/cr.SC ()[Lsixtwo/iS;
      // 0c: astore 8
      // 0e: aload 0
      // 0f: getfield sixtwo/cr.pAjuu Z
      // 12: aload 8
      // 14: ifnull 3d
      // 17: ifeq 3c
      // 1a: goto 21
      // 1d: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 5
      // 23: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 26: if_acmpne 3c
      // 29: goto 30
      // 2c: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: aload 0
      // 31: bipush 0
      // 32: putfield sixtwo/cr.pAjuu Z
      // 35: goto 3c
      // 38: invokestatic sixtwo/cr.SD (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 0
      // 3d: ireturn
   }
}
