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

public class jk {
   private static final long zumTM;
   public static mG tSRYI;
   public static mG mPXGi;
   public static mG jEkxo;
   private static final long khXTS = gb.aYR(2329779219362319924L, 2320449836084100065L, MethodHandles.lookup().lookupClass()).a(162797656028928L);
   private static final long[] HAejn;
   private static final Integer[] kyDxg;
   private static final Map kgjMD = new HashMap(13);
   private static final long[] TscJs;
   private static final Long[] pPJRe;
   private static final Map kFdBt;

   static {
      long var22 = khXTS ^ 113185465516712L;
      Cipher var11;
      Cipher var10000 = var11 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var22 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var12 = 1; var12 < 8; var12++) {
         var10003[var12] = (byte)(var22 << var12 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var17 = new long[33];
      int var14 = 0;
      String var15 = "tc\u00ad\u0005├Ś┬║t┬Ě\r\u0081k\u0083'\u009f├Ą├î┬ž9\u008fm/\u0083\u0087\r├Äy\u001d├ť1├í3├Ĺ├ć\u0094\u00897\u0006\u00903V\u001e\u001b\u0006\u0098~┬Ą\\\u0097\u000f\u008d┬ż┬ź,┬»VdA├ô├Ö┬╗U\u0089\t├ë\u0006M\u0091├ť├öA┬ž┬╝}├Ą:├ť├Č\t\u000b,├á├║├▒├Ś\u0085F┬░┬»h<k┬Ěv;├ú┬Ą\u0082By├»%├ä$\u0003|\u008c@\r├ĽB├«\u0096├░Q├Č├óg├Žv├Ź├ą├ę2\n┬ŻJ\u0087├ľ:6┬Ż8{\u0089V├ú┬┤\u000e├ľ├ľ)=├╣┬¬+├Ł┬ż├ą├žW-├ż\u0014)?├ź\u0012┬ŽJ\u0089\u001aM┬ČWl├ľ├ő┬Ę\u009e:\u008a┬Ě6┬áp├ş\u0093├Ě\u009f┬╝┬ź\u0088u\"├é)Z\u001d\u00847\u007f\u008232┬Ş├ŻF├ź*\u0002├Ś┬┤┬╝┬ž├Ç<\u008d\b├Á\u0012C├ÜS├×\u0007┬»┬Ą\u0004\f├Ć6&┬Ž\u009a\u0016├ü├ú├ë\u0086├úD\u0003\u0090Q|&┬Â\u008f├▓\u00130├îNva\u0013\u0013#";
      int var16 = "tc\u00ad\u0005├Ś┬║t┬Ě\r\u0081k\u0083'\u009f├Ą├î┬ž9\u008fm/\u0083\u0087\r├Äy\u001d├ť1├í3├Ĺ├ć\u0094\u00897\u0006\u00903V\u001e\u001b\u0006\u0098~┬Ą\\\u0097\u000f\u008d┬ż┬ź,┬»VdA├ô├Ö┬╗U\u0089\t├ë\u0006M\u0091├ť├öA┬ž┬╝}├Ą:├ť├Č\t\u000b,├á├║├▒├Ś\u0085F┬░┬»h<k┬Ěv;├ú┬Ą\u0082By├»%├ä$\u0003|\u008c@\r├ĽB├«\u0096├░Q├Č├óg├Žv├Ź├ą├ę2\n┬ŻJ\u0087├ľ:6┬Ż8{\u0089V├ú┬┤\u000e├ľ├ľ)=├╣┬¬+├Ł┬ż├ą├žW-├ż\u0014)?├ź\u0012┬ŽJ\u0089\u001aM┬ČWl├ľ├ő┬Ę\u009e:\u008a┬Ě6┬áp├ş\u0093├Ě\u009f┬╝┬ź\u0088u\"├é)Z\u001d\u00847\u007f\u008232┬Ş├ŻF├ź*\u0002├Ś┬┤┬╝┬ž├Ç<\u008d\b├Á\u0012C├ÜS├×\u0007┬»┬Ą\u0004\f├Ć6&┬Ž\u009a\u0016├ü├ú├ë\u0086├úD\u0003\u0090Q|&┬Â\u008f├▓\u00130├îNva\u0013\u0013#"
         .length();
      byte var13 = 0;

      label41:
      while (true) {
         int var10001 = var13;
         var13 += 8;
         byte[] var18 = var15.substring(var10001, var13).getBytes("ISO-8859-1");
         long[] var25 = var17;
         var10001 = var14++;
         long var31 = (var18[0] & 255L) << 56
            | (var18[1] & 255L) << 48
            | (var18[2] & 255L) << 40
            | (var18[3] & 255L) << 32
            | (var18[4] & 255L) << 24
            | (var18[5] & 255L) << 16
            | (var18[6] & 255L) << 8
            | var18[7] & 255L;
         byte var34 = -1;

         while (true) {
            long var19 = var31;
            byte[] var21 = var11.doFinal(
               new byte[]{
                  (byte)(var19 >>> 56),
                  (byte)(var19 >>> 48),
                  (byte)(var19 >>> 40),
                  (byte)(var19 >>> 32),
                  (byte)(var19 >>> 24),
                  (byte)(var19 >>> 16),
                  (byte)(var19 >>> 8),
                  (byte)var19
               }
            );
            long var38 = (var21[0] & 255L) << 56
               | (var21[1] & 255L) << 48
               | (var21[2] & 255L) << 40
               | (var21[3] & 255L) << 32
               | (var21[4] & 255L) << 24
               | (var21[5] & 255L) << 16
               | (var21[6] & 255L) << 8
               | var21[7] & 255L;
            switch (var34) {
               case 0:
                  var25[var10001] = var38;
                  if (var13 >= var16) {
                     HAejn = var17;
                     kyDxg = new Integer[33];
                     kFdBt = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var22 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var22 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[2];
                     int var3 = 0;
                     String var4 = "\t2R┬ę\u008f├ü┬»├ë(├▒├ł├Ş1┬Ş\"\u0010";
                     int var5 = "\t2R┬ę\u008f├ü┬»├ë(├▒├ł├Ş1┬Ş\"\u0010".length();
                     byte var2 = 0;

                     do {
                        int var29 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                        var29 = var3++;
                        long var8 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
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
                        var38 = (var10[0] & 255L) << 56
                           | (var10[1] & 255L) << 48
                           | (var10[2] & 255L) << 40
                           | (var10[3] & 255L) << 32
                           | (var10[4] & 255L) << 24
                           | (var10[5] & 255L) << 16
                           | (var10[6] & 255L) << 8
                           | var10[7] & 255L;
                        byte var37 = -1;
                        var6[var29] = var38;
                     } while (var2 < var5);

                     TscJs = var6;
                     pPJRe = new Long[2];
                     zumTM = System.currentTimeMillis();
                     tSRYI = mG.cnQ(bDE<"c">(9271, 1435092371162270167L ^ var22));
                     mPXGi = mG.cnQ(bDE<"c">(13768, 9103059913970685985L ^ var22));
                     jEkxo = mG.cnQ(bDE<"c">(10008, 6923302068871629549L ^ var22));
                     return;
                  }
                  break;
               default:
                  var25[var10001] = var38;
                  if (var13 < var16) {
                     continue label41;
                  }

                  var15 = ";\u000f\u0019^\u0096}├Ź\u0007W┬żR┬Ş\u0090\u00ad\n\u0098";
                  var16 = ";\u000f\u0019^\u0096}├Ź\u0007W┬żR┬Ş\u0090\u00ad\n\u0098".length();
                  var13 = 0;
            }

            byte var28 = var13;
            var13 += 8;
            var18 = var15.substring(var28, var13).getBytes("ISO-8859-1");
            var25 = var17;
            var10001 = var14++;
            var31 = (var18[0] & 255L) << 56
               | (var18[1] & 255L) << 48
               | (var18[2] & 255L) << 40
               | (var18[3] & 255L) << 32
               | (var18[4] & 255L) << 24
               | (var18[5] & 255L) << 16
               | (var18[6] & 255L) << 8
               | var18[7] & 255L;
            var34 = 0;
         }
      }
   }

   private static CallSite bDH(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bDG".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jk" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static float[] bDt(int var0) {
      return new float[]{bDp(var0) / 255.0F, bDq(var0) / 255.0F, bDr(var0) / 255.0F, bDs(var0) / 255.0F};
   }

   public static int bDs(int var0) {
      long var1 = khXTS ^ 140577563723308L;
      return var0 >> bDE<"c">(23397, 2722965481485660703L ^ var1) & bDE<"c">(25251, 8636110910894001099L ^ var1);
   }

   public static int bDp(int var0) {
      long var1 = khXTS ^ 128364991319236L;
      return var0 >> bDE<"c">(1963, 6288798195459482665L ^ var1) & bDE<"c">(25251, 8636121207910695203L ^ var1);
   }

   public static int bDr(int var0) {
      long var1 = khXTS ^ 43329822311133L;
      return var0 & bDE<"c">(19322, 9164044922682861260L ^ var1);
   }

   public static int bDq(int var0) {
      long var1 = khXTS ^ 88928120771238L;
      return var0 >> bDE<"c">(17155, 3534390813636706038L ^ var1) & bDE<"c">(25251, 8636090054286319425L ^ var1);
   }

   public static mG bDw(char var0, float var1) {
      long var2 = khXTS ^ 23883862070939L;

      try {
         switch (var0) {
            case '0':
               return mG.cnR(0.0F, 0.0F, 0.0F, var1);
            case '1':
               return mG.cnR(0.0F, 0.0F, 170.0F, var1);
            case '2':
               return mG.cnR(0.0F, 170.0F, 0.0F, var1);
            case '3':
               return mG.cnR(0.0F, 170.0F, 170.0F, var1);
            case '4':
               return mG.cnR(170.0F, 0.0F, 0.0F, var1);
            case '5':
               return mG.cnR(170.0F, 0.0F, 170.0F, var1);
            case '6':
               return mG.cnR(255.0F, 170.0F, 0.0F, var1);
            case '7':
               return mG.cnR(170.0F, 170.0F, 170.0F, var1);
            case '8':
               return mG.cnR(85.0F, 85.0F, 85.0F, var1);
            case '9':
               return mG.cnR(85.0F, 85.0F, 255.0F, var1);
            case ':':
            case ';':
            case '<':
            case '=':
            case '>':
            case '?':
            case '@':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            case '[':
            case '\\':
            case ']':
            case '^':
            case '_':
            case '`':
            default:
               return mG.hoGuU.coa(var1);
            case 'a':
               return mG.cnR(85.0F, 255.0F, 85.0F, var1);
            case 'b':
               return mG.cnR(85.0F, 255.0F, 255.0F, var1);
            case 'c':
               return mG.cnR(255.0F, 85.0F, 85.0F, var1);
            case 'd':
               return mG.cnR(255.0F, 85.0F, 255.0F, var1);
            case 'e':
               return mG.cnR(255.0F, 255.0F, 85.0F, var1);
            case 'f':
               return mG.cnR(255.0F, 255.0F, 255.0F, var1);
         }
      } catch (MatchException var4) {
         throw bDB(var4);
      }
   }

   private static int bDD(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bDC(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static mG bDl(int var0, float var1, float var2, int var3, float var4) {
      float var5 = (float)(System.currentTimeMillis() - zumTM) / var4;
      float var6 = var0 * var3 / var4;
      float var7 = Math.abs((var5 + var6) % 2.0F - 1.0F) * (var2 - var1) + var1;
      return mG.cnS(var7, 0.7F, 1.0F);
   }

   private static long bDF(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 31696;
      if (pPJRe[var3] == null) {
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
         long var5 = TscJs[var3];
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
         Object[] var9 = (Object[])kFdBt.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               kFdBt.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/jk", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         pPJRe[var3] = var15;
      }

      return pPJRe[var3];
   }

   public static mG bDn(int var0, mG var1, int var2) {
      return bDm(var0, var1, var2);
   }

   private static long bDG(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = bDF(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   public static mG bDm(int var0, mG var1, int var2) {
      mG var3 = var1.coe(0.5F);
      return bDo(var2, var0, var1, var3);
   }

   public static boolean bDz(String var0) {
      long var1 = khXTS ^ 81726770814577L;
      String[] var3 = jf.bBe();

      try {
         int var10000 = var0.indexOf(bDE<"c">(17394, 3300455319600116442L ^ var1));
         if (var3 == null) {
            return (boolean)var10000;
         }

         if (var10000 >= 0) {
            return (boolean)1;
         }
      } catch (MatchException var4) {
         throw bDB(var4);
      }

      return (boolean)0;
   }

   private static CallSite bDE(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bDD".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jk" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int bDC(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 31530;
      if (kyDxg[var3] == null) {
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
         long var5 = HAejn[var3];
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
         Object[] var9 = (Object[])kgjMD.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               kgjMD.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/jk", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         kyDxg[var3] = var15;
      }

      return kyDxg[var3];
   }

   public static boolean bDA(int[] param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jk.khXTS J
      // 03: ldc2_w 96689346520517
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: astore 4
      // 0e: aload 4
      // 10: arraylength
      // 11: istore 5
      // 13: bipush 0
      // 14: istore 6
      // 16: astore 3
      // 17: iload 6
      // 19: iload 5
      // 1b: if_icmpge 5a
      // 1e: aload 4
      // 20: iload 6
      // 22: iaload
      // 23: istore 7
      // 25: aload 3
      // 26: ifnull 56
      // 29: iload 7
      // 2b: aload 3
      // 2c: ifnull 5b
      // 2f: goto 36
      // 32: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: sipush 15359
      // 39: ldc2_w 3088943849355374964
      // 3c: lload 1
      // 3d: lxor
      // 3e: invokedynamic c (IJ)I bsm=sixtwo/jk.bDE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 43: if_icmpne 53
      // 46: goto 4d
      // 49: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: bipush 1
      // 4e: ireturn
      // 4f: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: iinc 6 1
      // 56: aload 3
      // 57: ifnonnull 17
      // 5a: bipush 0
      // 5b: ireturn
   }

   public static Character bDx(int var0) {
      long var1 = khXTS ^ 76022883398906L;
      String[] var3 = jf.bBe();

      try {
         if (var3 == null) {
            return Character.valueOf((char)var0);
         } else {
            switch (var0) {
               case 0:
                  return Character.valueOf((char)bDE<"c">(2712, 8931741584885698876L ^ var1));
               case 170:
                  return Character.valueOf((char)bDE<"c">(23376, 7126584669265592553L ^ var1));
               case 43520:
                  return Character.valueOf((char)bDE<"c">(2454, 6836223952805745204L ^ var1));
               case 43690:
                  return Character.valueOf((char)bDE<"c">(28196, 4171240892031382940L ^ var1));
               case 5592405:
                  return Character.valueOf((char)bDE<"c">(18106, 7038008272829816095L ^ var1));
               case 5592575:
                  return Character.valueOf((char)bDE<"c">(16753, 5499769290555267778L ^ var1));
               case 5635925:
                  return Character.valueOf((char)bDE<"c">(24054, 3776547647052973648L ^ var1));
               case 5636095:
                  return Character.valueOf((char)bDE<"c">(21219, 7251249371611695438L ^ var1));
               case 11141120:
                  return Character.valueOf((char)bDE<"c">(28399, 3620412094595478873L ^ var1));
               case 11141290:
                  return Character.valueOf((char)bDE<"c">(23643, 218901521598446L ^ var1));
               case 11184810:
                  return Character.valueOf((char)bDE<"c">(8392, 553822879079693176L ^ var1));
               case 16733525:
                  return Character.valueOf((char)bDE<"c">(13430, 44418181251690460L ^ var1));
               case 16733695:
                  return Character.valueOf((char)bDE<"c">(18973, 1600679749416817058L ^ var1));
               case 16755200:
                  return Character.valueOf((char)bDE<"c">(1470, 8740296862895988239L ^ var1));
               case 16777045:
                  return Character.valueOf((char)bDE<"c">(25271, 6350869116562684185L ^ var1));
               case 16777215:
                  return Character.valueOf((char)bDE<"c">(1941, 2291648465477459005L ^ var1));
               default:
                  return null;
            }
         }
      } catch (MatchException var4) {
         throw bDB(var4);
      }
   }

   public static mG bDo(int param0, int param1, mG... param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jk.khXTS J
      // 03: ldc2_w 11357095698851
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: invokestatic java/lang/System.currentTimeMillis ()J
      // 0e: iload 0
      // 0f: i2l
      // 10: ldiv
      // 11: iload 1
      // 12: i2l
      // 13: ladd
      // 14: sipush 6194
      // 17: ldc2_w 7486879851048228385
      // 1a: lload 3
      // 1b: lxor
      // 1c: invokedynamic o (IJ)J bsm=sixtwo/jk.bDH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 21: lrem
      // 22: l2i
      // 23: istore 6
      // 25: astore 5
      // 27: iload 6
      // 29: sipush 19179
      // 2c: ldc2_w 2616894344674313234
      // 2f: lload 3
      // 30: lxor
      // 31: invokedynamic c (IJ)I bsm=sixtwo/jk.bDE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 36: aload 5
      // 38: ifnull 5b
      // 3b: if_icmple 5f
      // 3e: goto 45
      // 41: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: sipush 4276
      // 48: ldc2_w 1915280933525839447
      // 4b: lload 3
      // 4c: lxor
      // 4d: invokedynamic c (IJ)I bsm=sixtwo/jk.bDE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 52: iload 6
      // 54: goto 5b
      // 57: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: isub
      // 5c: goto 61
      // 5f: iload 6
      // 61: sipush 6441
      // 64: ldc2_w 2888322174864775121
      // 67: lload 3
      // 68: lxor
      // 69: invokedynamic c (IJ)I bsm=sixtwo/jk.bDE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 6e: iadd
      // 6f: istore 6
      // 71: iload 6
      // 73: i2f
      // 74: ldc 360.0
      // 76: fdiv
      // 77: aload 2
      // 78: arraylength
      // 79: i2f
      // 7a: fmul
      // 7b: f2i
      // 7c: istore 7
      // 7e: iload 7
      // 80: aload 2
      // 81: arraylength
      // 82: if_icmpne 8f
      // 85: iinc 7 -1
      // 88: goto 8f
      // 8b: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8e: athrow
      // 8f: aload 2
      // 90: iload 7
      // 92: aaload
      // 93: astore 8
      // 95: aload 2
      // 96: iload 7
      // 98: aload 2
      // 99: arraylength
      // 9a: bipush 1
      // 9b: isub
      // 9c: aload 5
      // 9e: ifnull b6
      // a1: if_icmpne b3
      // a4: goto ab
      // a7: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // aa: athrow
      // ab: bipush 0
      // ac: goto b7
      // af: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b2: athrow
      // b3: iload 7
      // b5: bipush 1
      // b6: iadd
      // b7: aaload
      // b8: astore 9
      // ba: aload 8
      // bc: aload 9
      // be: iload 6
      // c0: i2f
      // c1: ldc 360.0
      // c3: fdiv
      // c4: aload 2
      // c5: arraylength
      // c6: i2f
      // c7: fmul
      // c8: iload 7
      // ca: i2f
      // cb: fsub
      // cc: f2d
      // cd: invokestatic sixtwo/jk.bDu (Lsixtwo/mG;Lsixtwo/mG;D)Lsixtwo/mG;
      // d0: areturn
   }

   public static int bDv(int var0, int var1) {
      return mG.cnR(bDp(var0), bDq(var0), bDr(var0), var1).coh();
   }

   private static MatchException bDB(MatchException var0) {
      return var0;
   }

   public static mG bDu(mG param0, mG param1, double param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jk.khXTS J
      // 003: ldc2_w 119503211124990
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 00c: astore 6
      // 00e: aload 1
      // 00f: aload 6
      // 011: ifnull 027
      // 014: ifnonnull 026
      // 017: goto 01e
      // 01a: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: fconst_0
      // 01f: goto 02a
      // 022: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 025: athrow
      // 026: aload 1
      // 027: invokevirtual sixtwo/mG.cor ()F
      // 02a: aload 0
      // 02b: aload 6
      // 02d: ifnull 043
      // 030: ifnonnull 042
      // 033: goto 03a
      // 036: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: fconst_0
      // 03b: goto 046
      // 03e: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 041: athrow
      // 042: aload 0
      // 043: invokevirtual sixtwo/mG.cor ()F
      // 046: dload 2
      // 047: invokestatic sixtwo/mZ.csm (FFD)I
      // 04a: istore 7
      // 04c: aload 1
      // 04d: aload 6
      // 04f: ifnull 065
      // 052: ifnonnull 064
      // 055: goto 05c
      // 058: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05b: athrow
      // 05c: fconst_0
      // 05d: goto 068
      // 060: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 063: athrow
      // 064: aload 1
      // 065: invokevirtual sixtwo/mG.cos ()F
      // 068: aload 0
      // 069: aload 6
      // 06b: ifnull 081
      // 06e: ifnonnull 080
      // 071: goto 078
      // 074: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 077: athrow
      // 078: fconst_0
      // 079: goto 084
      // 07c: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07f: athrow
      // 080: aload 0
      // 081: invokevirtual sixtwo/mG.cos ()F
      // 084: dload 2
      // 085: invokestatic sixtwo/mZ.csm (FFD)I
      // 088: istore 8
      // 08a: aload 1
      // 08b: aload 6
      // 08d: ifnull 0a3
      // 090: ifnonnull 0a2
      // 093: goto 09a
      // 096: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 099: athrow
      // 09a: fconst_0
      // 09b: goto 0a6
      // 09e: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: aload 1
      // 0a3: invokevirtual sixtwo/mG.cot ()F
      // 0a6: aload 0
      // 0a7: aload 6
      // 0a9: ifnull 0bf
      // 0ac: ifnonnull 0be
      // 0af: goto 0b6
      // 0b2: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b5: athrow
      // 0b6: fconst_0
      // 0b7: goto 0c2
      // 0ba: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bd: athrow
      // 0be: aload 0
      // 0bf: invokevirtual sixtwo/mG.cot ()F
      // 0c2: dload 2
      // 0c3: invokestatic sixtwo/mZ.csm (FFD)I
      // 0c6: istore 9
      // 0c8: aload 1
      // 0c9: aload 6
      // 0cb: ifnull 0e1
      // 0ce: ifnonnull 0e0
      // 0d1: goto 0d8
      // 0d4: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d7: athrow
      // 0d8: fconst_0
      // 0d9: goto 0e4
      // 0dc: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0df: athrow
      // 0e0: aload 1
      // 0e1: invokevirtual sixtwo/mG.cou ()F
      // 0e4: aload 0
      // 0e5: aload 6
      // 0e7: ifnull 0fd
      // 0ea: ifnonnull 0fc
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: fconst_0
      // 0f5: goto 100
      // 0f8: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fb: athrow
      // 0fc: aload 0
      // 0fd: invokevirtual sixtwo/mG.cou ()F
      // 100: dload 2
      // 101: invokestatic sixtwo/mZ.csm (FFD)I
      // 104: istore 10
      // 106: iload 7
      // 108: i2f
      // 109: iload 8
      // 10b: i2f
      // 10c: iload 9
      // 10e: i2f
      // 10f: iload 10
      // 111: i2f
      // 112: invokestatic sixtwo/mG.cnR (FFFF)Lsixtwo/mG;
      // 115: areturn
   }

   public static boolean bDy(char param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jk.khXTS J
      // 03: ldc2_w 48018563566029
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: iload 0
      // 0d: sipush 28278
      // 10: ldc2_w 5989877905058269436
      // 13: lload 1
      // 14: lxor
      // 15: invokedynamic c (IJ)I bsm=sixtwo/jk.bDE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1a: aload 3
      // 1b: ifnull 60
      // 1e: if_icmplt 4b
      // 21: goto 28
      // 24: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: iload 0
      // 29: aload 3
      // 2a: ifnull 92
      // 2d: goto 34
      // 30: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: sipush 2977
      // 37: ldc2_w 2765656337702612285
      // 3a: lload 1
      // 3b: lxor
      // 3c: invokedynamic c (IJ)I bsm=sixtwo/jk.bDE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 41: if_icmple 91
      // 44: goto 4b
      // 47: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: iload 0
      // 4c: sipush 14196
      // 4f: ldc2_w 936842636559143404
      // 52: lload 1
      // 53: lxor
      // 54: invokedynamic c (IJ)I bsm=sixtwo/jk.bDE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 59: goto 60
      // 5c: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f: athrow
      // 60: aload 3
      // 61: ifnull 8e
      // 64: if_icmplt 95
      // 67: goto 6e
      // 6a: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: iload 0
      // 6f: aload 3
      // 70: ifnull 92
      // 73: goto 7a
      // 76: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: sipush 12745
      // 7d: ldc2_w 782088946649585481
      // 80: lload 1
      // 81: lxor
      // 82: invokedynamic c (IJ)I bsm=sixtwo/jk.bDE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 87: goto 8e
      // 8a: invokestatic sixtwo/jk.bDB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8d: athrow
      // 8e: if_icmpgt 95
      // 91: bipush 1
      // 92: goto 96
      // 95: bipush 0
      // 96: ireturn
   }

   public static mG bDk() {
      long var0 = khXTS ^ 104706787362744L;
      double var2 = Math.ceil((System.currentTimeMillis() + bDH<"o">(28833, 3493960012375283880L ^ var0)) / 20.0);
      var2 %= 360.0;
      return mG.cnS((float)(var2 / 360.0), 0.5F, 1.0F);
   }
}
