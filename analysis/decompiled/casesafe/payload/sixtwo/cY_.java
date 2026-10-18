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
import net.minecraft.class_1657;

public class cY extends gg {
   private final on ReCrR;
   cJ BDssA;
   cJ SnGMi;
   cG VBZRj;
   cG iZEwm;
   cG ykbJL;
   private static final long jEhYF = gb.aYR(6307880368235759829L, -8201853478232182540L, MethodHandles.lookup().lookupClass()).a(257204623582375L);
   private static final String qnaeb;
   private static final long[] bBsDb;
   private static final Integer[] IzHcV;
   private static final Map nwtEu;

   public cY() {
      long var1 = jEhYF ^ 47937061764989L;
      super(gf.aZL(aaV<"r">(13891, 4173695562503445768L ^ var1), false, gh.nOCvV));
      this.ReCrR = new on();
      int[] var10004 = new int[aaV<"r">(18851, 6772738239821652724L ^ var1)];
      var10004[0] = aaV<"r">(12463, 5754275989820136423L ^ var1);
      var10004[1] = aaV<"r">(4546, 1807653956531157652L ^ var1);
      var10004[2] = aaV<"r">(14470, 4423998352902018015L ^ var1);
      var10004[3] = aaV<"r">(19707, 97636546458331015L ^ var1);
      var10004[4] = aaV<"r">(2937, 7255851014552674332L ^ var1);
      var10004[5] = aaV<"r">(14407, 5510950757809050399L ^ var1);
      var10004[aaV<"r">(21379, 5421726134792960228L ^ var1)] = aaV<"r">(31348, 3048581043123163397L ^ var1);
      var10004[aaV<"r">(28601, 1139366676967458028L ^ var1)] = aaV<"r">(3734, 4268786313199543754L ^ var1);
      var10004[aaV<"r">(6504, 9068396858436284942L ^ var1)] = aaV<"r">(25917, 3470648667446283842L ^ var1);
      this.BDssA = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aaV<"r">(916, 7356102128170690761L ^ var1)];
      var10004[0] = aaV<"r">(10653, 2910069451398922989L ^ var1);
      var10004[1] = aaV<"r">(32307, 7873389804489282881L ^ var1);
      var10004[2] = aaV<"r">(3734, 4268786313199543754L ^ var1);
      var10004[3] = aaV<"r">(5608, 5173538106207993502L ^ var1);
      var10004[4] = aaV<"r">(9592, 3336813772225039889L ^ var1);
      var10004[5] = aaV<"r">(19426, 2048689703183327360L ^ var1);
      var10004[aaV<"r">(24451, 288727981333951709L ^ var1)] = aaV<"r">(14093, 780791439436897388L ^ var1);
      var10004[aaV<"r">(20775, 4010496793140083324L ^ var1)] = aaV<"r">(19826, 5650896682897679883L ^ var1);
      var10004[aaV<"r">(12470, 1680707699742530504L ^ var1)] = aaV<"r">(25143, 445978016146884957L ^ var1);
      var10004[aaV<"r">(3918, 8337632608996418577L ^ var1)] = aaV<"r">(27161, 2561203240846164349L ^ var1);
      var10004[aaV<"r">(14383, 4771814070609990471L ^ var1)] = aaV<"r">(692, 7630788927790934476L ^ var1);
      var10004[aaV<"r">(2774, 8134489059099959687L ^ var1)] = aaV<"r">(32390, 6021499753241581030L ^ var1);
      var10004[aaV<"r">(29328, 2599467995583683008L ^ var1)] = aaV<"r">(21951, 3352312589760020211L ^ var1);
      var10004[aaV<"r">(7839, 3126314367299220933L ^ var1)] = aaV<"r">(26956, 6887888952129094183L ^ var1);
      var10004[aaV<"r">(14397, 1246190907924796224L ^ var1)] = aaV<"r">(5608, 5173538106207993502L ^ var1);
      var10004[aaV<"r">(11233, 225008810737549483L ^ var1)] = aaV<"r">(27161, 2561203240846164349L ^ var1);
      this.SnGMi = new cJ(this, mr.clS(var10004));
      var10004 = new int[aaV<"r">(27412, 3230508236954173529L ^ var1)];
      var10004[0] = aaV<"r">(31719, 12546681812521092L ^ var1);
      var10004[1] = aaV<"r">(27161, 2561203240846164349L ^ var1);
      var10004[2] = aaV<"r">(20758, 2612551680055687749L ^ var1);
      var10004[3] = aaV<"r">(28221, 6585591656056620359L ^ var1);
      var10004[4] = aaV<"r">(3734, 4268786313199543754L ^ var1);
      var10004[5] = aaV<"r">(30832, 4921768856609624866L ^ var1);
      var10004[aaV<"r">(24451, 288727981333951709L ^ var1)] = aaV<"r">(16396, 1151785126313601890L ^ var1);
      var10004[aaV<"r">(20775, 4010496793140083324L ^ var1)] = aaV<"r">(19426, 2048689703183327360L ^ var1);
      var10004[aaV<"r">(12470, 1680707699742530504L ^ var1)] = aaV<"r">(5671, 3492474847965281646L ^ var1);
      var10004[aaV<"r">(3918, 8337632608996418577L ^ var1)] = aaV<"r">(5608, 5173538106207993502L ^ var1);
      var10004[aaV<"r">(7892, 1125157301591668155L ^ var1)] = aaV<"r">(3734, 4268786313199543754L ^ var1);
      var10004[aaV<"r">(17747, 5010635771585441342L ^ var1)] = aaV<"r">(5608, 5173538106207993502L ^ var1);
      var10004[aaV<"r">(9150, 6066017587255429322L ^ var1)] = aaV<"r">(19826, 5650896682897679883L ^ var1);
      this.VBZRj = new cG(this, mr.clS(var10004)).Uf(mG.rxCUH);
      var10004 = new int[aaV<"r">(17747, 5010635771585441342L ^ var1)];
      var10004[0] = aaV<"r">(31205, 1671299874367115934L ^ var1);
      var10004[1] = aaV<"r">(23208, 4882250008677691871L ^ var1);
      var10004[2] = aaV<"r">(26956, 6887888952129094183L ^ var1);
      var10004[3] = aaV<"r">(27161, 2561203240846164349L ^ var1);
      var10004[4] = aaV<"r">(7098, 1381732853983637718L ^ var1);
      var10004[5] = aaV<"r">(19426, 2048689703183327360L ^ var1);
      var10004[aaV<"r">(24451, 288727981333951709L ^ var1)] = aaV<"r">(5671, 3492474847965281646L ^ var1);
      var10004[aaV<"r">(20775, 4010496793140083324L ^ var1)] = aaV<"r">(5608, 5173538106207993502L ^ var1);
      var10004[aaV<"r">(12470, 1680707699742530504L ^ var1)] = aaV<"r">(3734, 4268786313199543754L ^ var1);
      var10004[aaV<"r">(3918, 8337632608996418577L ^ var1)] = aaV<"r">(5608, 5173538106207993502L ^ var1);
      var10004[aaV<"r">(7892, 1125157301591668155L ^ var1)] = aaV<"r">(19826, 5650896682897679883L ^ var1);
      this.iZEwm = new cG(this, mr.clS(var10004)).Uf(mG.rxCUH);
      var10004 = new int[aaV<"r">(20350, 6472626792837129229L ^ var1)];
      var10004[0] = aaV<"r">(13300, 8411763259291654331L ^ var1);
      var10004[1] = aaV<"r">(26956, 6887888952129094183L ^ var1);
      var10004[2] = aaV<"r">(23208, 4882250008677691871L ^ var1);
      var10004[3] = aaV<"r">(20758, 2612551680055687749L ^ var1);
      var10004[4] = aaV<"r">(28518, 2354666367457068082L ^ var1);
      var10004[5] = aaV<"r">(3734, 4268786313199543754L ^ var1);
      var10004[aaV<"r">(24451, 288727981333951709L ^ var1)] = aaV<"r">(30832, 4921768856609624866L ^ var1);
      var10004[aaV<"r">(20775, 4010496793140083324L ^ var1)] = aaV<"r">(22426, 387037404010036463L ^ var1);
      var10004[aaV<"r">(12470, 1680707699742530504L ^ var1)] = aaV<"r">(19426, 2048689703183327360L ^ var1);
      var10004[aaV<"r">(3918, 8337632608996418577L ^ var1)] = aaV<"r">(5671, 3492474847965281646L ^ var1);
      var10004[aaV<"r">(7892, 1125157301591668155L ^ var1)] = aaV<"r">(5608, 5173538106207993502L ^ var1);
      var10004[aaV<"r">(17747, 5010635771585441342L ^ var1)] = aaV<"r">(3734, 4268786313199543754L ^ var1);
      var10004[aaV<"r">(9150, 6066017587255429322L ^ var1)] = aaV<"r">(5608, 5173538106207993502L ^ var1);
      var10004[aaV<"r">(27412, 3230508236954173529L ^ var1)] = aaV<"r">(19826, 5650896682897679883L ^ var1);
      this.ykbJL = new cG(this, mr.clS(var10004)).Uf(mG.vuAhq);
   }

   static {
      long var11 = jEhYF ^ 21789502550078L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("├ô\u001e\u0087s\r\u008e}H├Ő├Ö┬á\"-├Ę├ľ=".getBytes("ISO-8859-1"));
      String var22 = aaS(var15).intern();
      int var10001 = -1;
      qnaeb = var22;
      nwtEu = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[55];
      int var3 = 0;
      String var4 = "\u0004┬╗\u0001X\u00ad┬ór1;31├Á\u008f\u0096├É┬Ž\u0086G\u00ad├Ż\u0088\u0084O├ç┬żs\u009d├ęG\u001dJO├î. n\"├émfQ\u00965├Çm├ĺ├ą┬ítl├Żr\u008a`e├│\u0001├ą\u0084├»\u0098\u008c├Ł\u000e^\u0001Pg',]\u008c\u00ad┬║L\u0091├┤├×\u0004├ü?┬Ą┬Ż\u0085\f├śZW┬│8\u0097\u0014w\u0096\u008eHs\u0011\u0080\u009f├Ł*}\\├╝\u0001\u0088├á*/┬ż1├╝g\u0001\u0081├â┬┤Y├şh\u0018W\"├┐{T├Ż\u0094 ├ČDM\u008fNtq\u001b┬»\u0017├É\u008f ├ť\u000b\u0019\"\u009b\u008a├ô@┬Â\u0005\u000e├ż0@-┬╣z├░├¬\t├▓├ĺ}├┐\u001a~┬»\u0081\u0095\rZ\u0007|E\u0095├║├ä\u009d\u0003=├Ź├ľ_\u008dT┬¬2`Z\u0013\u001dB{v/j\u0015gEkY\b┬┤\u0015├ůx├Ś]\u009f├Á\u0017a┬Ą\u001dI┬Á\u0017├┤\u0014├ę┬▒>├«\r┬║dC\u0083├┤t3+├é┬ž┬┐\u001a4G┬╝\u0095\u0095├źi1lwY┬▒├ąSu\u008c├»\u008d\u0005├ťjpvI!\u0015├»├č┬┐┬ę\u0005\u0082^┬Ž├Ś├É┬ŻIX\u0095├č├▓\u001b┬░|\u008e├ž┬┤├Ç\u0098├Ž┬ę\u00ad.┬Ę├üp┬ž\u008c┬▓)=\bt~┬│\u009d\u0096<[├í├žM#0├Ě├×=├žL)\u001d├┐@├Ś<├Ä\u008b├Á\t9\u0093┬Ě\u0002IV┬Ę├â\u009c\u008c├ú!\u001cc├É*V\"├▓├ĺ\u0013\u0015┬ĄNTx9├Ž├Ł├ť├▒W\u0088├ż\u0013\u0005L┬║Ji\u007f.├ů├ä\rp├¬f┬ą\u001c\u0098┬║?├ę├Ě$├żZ┬¬┬Č├╣\u0019┬▒┬┤\u0005\u009e┬»%┬Ž8d\u008b┬ČSU┬Ş├Ő%)┬í]├║]├Ş#\u0084┬«JX\u0081\u009f\u001e\f\u008e├ô";
      int var5 = "\u0004┬╗\u0001X\u00ad┬ór1;31├Á\u008f\u0096├É┬Ž\u0086G\u00ad├Ż\u0088\u0084O├ç┬żs\u009d├ęG\u001dJO├î. n\"├émfQ\u00965├Çm├ĺ├ą┬ítl├Żr\u008a`e├│\u0001├ą\u0084├»\u0098\u008c├Ł\u000e^\u0001Pg',]\u008c\u00ad┬║L\u0091├┤├×\u0004├ü?┬Ą┬Ż\u0085\f├śZW┬│8\u0097\u0014w\u0096\u008eHs\u0011\u0080\u009f├Ł*}\\├╝\u0001\u0088├á*/┬ż1├╝g\u0001\u0081├â┬┤Y├şh\u0018W\"├┐{T├Ż\u0094 ├ČDM\u008fNtq\u001b┬»\u0017├É\u008f ├ť\u000b\u0019\"\u009b\u008a├ô@┬Â\u0005\u000e├ż0@-┬╣z├░├¬\t├▓├ĺ}├┐\u001a~┬»\u0081\u0095\rZ\u0007|E\u0095├║├ä\u009d\u0003=├Ź├ľ_\u008dT┬¬2`Z\u0013\u001dB{v/j\u0015gEkY\b┬┤\u0015├ůx├Ś]\u009f├Á\u0017a┬Ą\u001dI┬Á\u0017├┤\u0014├ę┬▒>├«\r┬║dC\u0083├┤t3+├é┬ž┬┐\u001a4G┬╝\u0095\u0095├źi1lwY┬▒├ąSu\u008c├»\u008d\u0005├ťjpvI!\u0015├»├č┬┐┬ę\u0005\u0082^┬Ž├Ś├É┬ŻIX\u0095├č├▓\u001b┬░|\u008e├ž┬┤├Ç\u0098├Ž┬ę\u00ad.┬Ę├üp┬ž\u008c┬▓)=\bt~┬│\u009d\u0096<[├í├žM#0├Ě├×=├žL)\u001d├┐@├Ś<├Ä\u008b├Á\t9\u0093┬Ě\u0002IV┬Ę├â\u009c\u008c├ú!\u001cc├É*V\"├▓├ĺ\u0013\u0015┬ĄNTx9├Ž├Ł├ť├▒W\u0088├ż\u0013\u0005L┬║Ji\u007f.├ů├ä\rp├¬f┬ą\u001c\u0098┬║?├ę├Ě$├żZ┬¬┬Č├╣\u0019┬▒┬┤\u0005\u009e┬»%┬Ž8d\u008b┬ČSU┬Ş├Ő%)┬í]├║]├Ş#\u0084┬«JX\u0081\u009f\u001e\f\u008e├ô"
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
                     bBsDb = var6;
                     IzHcV = new Integer[55];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "D:├ë├őd\u0006}├ľ1┬Č┬╣?\u000ey\u001ak";
                  var5 = "D:├ë├őd\u0006}├ľ1┬Č┬╣?\u000ey\u001ak".length();
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

   @hG
   public void aaO(gM var1) {
      this.ReCrR.cFG();
   }

   private static CallSite aaV(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aaU".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cY" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public mG aaK(class_1657 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cY.jEhYF J
      // 03: ldc2_w 131718150580151
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: ifnull 3f
      // 11: aload 0
      // 12: getfield sixtwo/cY.BDssA Lsixtwo/cJ;
      // 15: invokevirtual sixtwo/cJ.WF ()Z
      // 18: aload 4
      // 1a: ifnonnull 4f
      // 1d: goto 24
      // 20: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: ifeq 47
      // 27: goto 2e
      // 2a: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 1
      // 2f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 32: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 35: if_acmpeq 47
      // 38: goto 3f
      // 3b: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: getstatic sixtwo/mG.UhgnI Lsixtwo/mG;
      // 42: areturn
      // 43: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 0
      // 48: getfield sixtwo/cY.ReCrR Lsixtwo/on;
      // 4b: aload 1
      // 4c: invokevirtual sixtwo/on.cFA (Lnet/minecraft/class_1657;)Z
      // 4f: istore 5
      // 51: aload 0
      // 52: getfield sixtwo/cY.ReCrR Lsixtwo/on;
      // 55: aload 1
      // 56: invokevirtual sixtwo/on.cFC (Lnet/minecraft/class_1657;)Z
      // 59: istore 6
      // 5b: iload 6
      // 5d: aload 4
      // 5f: ifnonnull 7f
      // 62: ifeq 78
      // 65: goto 6c
      // 68: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: aload 0
      // 6d: getfield sixtwo/cY.iZEwm Lsixtwo/cG;
      // 70: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 73: areturn
      // 74: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 77: athrow
      // 78: aload 0
      // 79: getfield sixtwo/cY.SnGMi Lsixtwo/cJ;
      // 7c: invokevirtual sixtwo/cJ.WF ()Z
      // 7f: aload 4
      // 81: ifnonnull b2
      // 84: ifne b0
      // 87: goto 8e
      // 8a: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8d: athrow
      // 8e: iload 5
      // 90: ifeq a8
      // 93: goto 9a
      // 96: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 99: athrow
      // 9a: aload 0
      // 9b: getfield sixtwo/cY.ykbJL Lsixtwo/cG;
      // 9e: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // a1: goto af
      // a4: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a7: athrow
      // a8: aload 0
      // a9: getfield sixtwo/cY.VBZRj Lsixtwo/cG;
      // ac: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // af: areturn
      // b0: iload 5
      // b2: ifeq c4
      // b5: aload 0
      // b6: getfield sixtwo/cY.ReCrR Lsixtwo/on;
      // b9: aload 1
      // ba: invokevirtual sixtwo/on.cFB (Lnet/minecraft/class_1657;)F
      // bd: goto c5
      // c0: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c3: athrow
      // c4: fconst_0
      // c5: fstore 7
      // c7: aload 0
      // c8: getfield sixtwo/cY.VBZRj Lsixtwo/cG;
      // cb: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // ce: aload 0
      // cf: getfield sixtwo/cY.ykbJL Lsixtwo/cG;
      // d2: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // d5: fload 7
      // d7: f2d
      // d8: invokestatic sixtwo/jk.bDu (Lsixtwo/mG;Lsixtwo/mG;D)Lsixtwo/mG;
      // db: areturn
   }

   @hG
   public void aaL(gH$ti var1) {
      this.ReCrR.cFv();
   }

   private static MatchException aaR(MatchException var0) {
      return var0;
   }

   @hG
   public void aaM(hw$tv param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cY.jEhYF J
      // 03: ldc2_w 119581145172018
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: aload 1
      // 0c: invokevirtual sixtwo/hw$tv.bdm ()Lnet/minecraft/class_1297;
      // 0f: astore 6
      // 11: astore 4
      // 13: aload 6
      // 15: aload 4
      // 17: ifnonnull 30
      // 1a: instanceof net/minecraft/class_1657
      // 1d: ifeq 3e
      // 20: goto 27
      // 23: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 6
      // 29: goto 30
      // 2c: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: checkcast net/minecraft/class_1657
      // 33: astore 5
      // 35: aload 0
      // 36: getfield sixtwo/cY.ReCrR Lsixtwo/on;
      // 39: aload 5
      // 3b: invokevirtual sixtwo/on.cFz (Lnet/minecraft/class_1657;)V
      // 3e: return
   }

   @hG
   public void aaN(gL$tk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cY.jEhYF J
      // 03: ldc2_w 77359039777576
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 13: ifnonnull 1b
      // 16: return
      // 17: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aload 1
      // 1c: invokevirtual sixtwo/gL$tk.bcf ()Lnet/minecraft/class_2596;
      // 1f: astore 6
      // 21: aload 6
      // 23: instanceof net/minecraft/class_2663
      // 26: aload 4
      // 28: ifnonnull 91
      // 2b: ifeq 7a
      // 2e: goto 35
      // 31: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: aload 6
      // 37: checkcast net/minecraft/class_2663
      // 3a: astore 5
      // 3c: aload 5
      // 3e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 41: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 44: invokevirtual net/minecraft/class_2663.method_11469 (Lnet/minecraft/class_1937;)Lnet/minecraft/class_1297;
      // 47: astore 6
      // 49: aload 6
      // 4b: aload 4
      // 4d: ifnonnull 66
      // 50: instanceof net/minecraft/class_1657
      // 53: ifeq 79
      // 56: goto 5d
      // 59: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 6
      // 5f: goto 66
      // 62: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: checkcast net/minecraft/class_1657
      // 69: astore 7
      // 6b: aload 0
      // 6c: getfield sixtwo/cY.ReCrR Lsixtwo/on;
      // 6f: aload 7
      // 71: aload 5
      // 73: invokevirtual net/minecraft/class_2663.method_11470 ()B
      // 76: invokevirtual sixtwo/on.cFy (Lnet/minecraft/class_1657;B)V
      // 79: return
      // 7a: aload 1
      // 7b: invokevirtual sixtwo/gL$tk.bcf ()Lnet/minecraft/class_2596;
      // 7e: astore 6
      // 80: aload 6
      // 82: aload 4
      // 84: ifnonnull 96
      // 87: instanceof net/minecraft/class_2767
      // 8a: goto 91
      // 8d: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: ifeq cb
      // 94: aload 6
      // 96: checkcast net/minecraft/class_2767
      // 99: astore 5
      // 9b: aload 5
      // 9d: invokevirtual net/minecraft/class_2767.method_11894 ()Lnet/minecraft/class_6880;
      // a0: invokeinterface net/minecraft/class_6880.method_55840 ()Ljava/lang/String; 1
      // a5: getstatic sixtwo/cY.qnaeb Ljava/lang/String;
      // a8: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // ab: ifeq cb
      // ae: aload 0
      // af: getfield sixtwo/cY.ReCrR Lsixtwo/on;
      // b2: aload 5
      // b4: invokevirtual net/minecraft/class_2767.method_11890 ()D
      // b7: aload 5
      // b9: invokevirtual net/minecraft/class_2767.method_11889 ()D
      // bc: aload 5
      // be: invokevirtual net/minecraft/class_2767.method_11893 ()D
      // c1: invokevirtual sixtwo/on.cFw (DDD)V
      // c4: goto cb
      // c7: invokestatic sixtwo/cY.aaR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ca: athrow
      // cb: return
   }

   private static int aaU(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aaT(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int aaT(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 1528;
      if (IzHcV[var3] == null) {
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
         long var5 = bBsDb[var3];
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
         Object[] var9 = (Object[])nwtEu.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               nwtEu.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cY", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         IzHcV[var3] = var15;
      }

      return IzHcV[var3];
   }

   @hG
   public void aaP(go$sX var1) {
      jD.bHl();
   }

   private static String aaS(byte[] var0) {
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

   @hG(
      priority = mw.LOWEST
   )
   public void aaQ(go$sY var1) {
      jD.bHl();
   }

   @Override
   public void YO() {
      super.YO();
      this.ReCrR.cFG();
      jD.bHm();
      jD.bHj();
   }
}
