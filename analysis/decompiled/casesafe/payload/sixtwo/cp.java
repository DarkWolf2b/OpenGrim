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

public abstract class cp extends cr {
   protected final cJ PZQaG;
   protected final cJ mZZzJ;
   private static final long lPXre = gb.aYR(6251626579645607516L, 1059593378214187852L, MethodHandles.lookup().lookupClass()).a(249904087944549L);
   private static final String[] lyUbR;
   private static final String[] PpKyU;
   private static final Map exTwJ = new HashMap(13);
   private static final long[] wLRHx;
   private static final Integer[] dgufU;
   private static final Map meWuI;

   public cp(int[] var1, lf var2) {
      long var3 = lPXre ^ 61360800319324L;
      super(var1, var2);
      iS[] var10000 = cr.SC();
      int[] var10005 = new int[Ri<"l">(3550, 924249237900537303L ^ var3)];
      var10005[0] = Ri<"l">(32274, 5639873660443057678L ^ var3);
      var10005[1] = Ri<"l">(584, 4474348402709570137L ^ var3);
      var10005[2] = Ri<"l">(14203, 6226317708051126128L ^ var3);
      var10005[3] = Ri<"l">(22341, 1233548916726003582L ^ var3);
      var10005[4] = Ri<"l">(3771, 3396600503110250117L ^ var3);
      var10005[5] = Ri<"l">(6211, 8815829968924457041L ^ var3);
      var10005[Ri<"l">(20096, 6360901111611715208L ^ var3)] = Ri<"l">(25387, 2048596556400214847L ^ var3);
      var10005[Ri<"l">(29779, 4120422037711410276L ^ var3)] = Ri<"l">(19879, 2072845288718790040L ^ var3);
      var10005[Ri<"l">(15774, 2565512238547770790L ^ var3)] = Ri<"l">(423, 5779588220013748637L ^ var3);
      var10005[Ri<"l">(6749, 2353280234498308689L ^ var3)] = Ri<"l">(25783, 3849944472270390406L ^ var3);
      var10005[Ri<"l">(21922, 977644918455662007L ^ var3)] = Ri<"l">(32680, 7244603673154346942L ^ var3);
      var10005[Ri<"l">(1213, 4998337101137880230L ^ var3)] = Ri<"l">(18559, 3010951937882777704L ^ var3);
      var10005[Ri<"l">(26323, 6642106840857364190L ^ var3)] = Ri<"l">(28665, 2376935289566646270L ^ var3);
      var10005[Ri<"l">(26460, 1504145462955165546L ^ var3)] = Ri<"l">(32293, 3460844193194466832L ^ var3);
      var10005[Ri<"l">(28374, 4722546066832117468L ^ var3)] = Ri<"l">(1342, 3774089489482851587L ^ var3);
      this.PZQaG = new cJ(this, mr.clS(var10005)).WE(true);
      iS[] var5 = var10000;

      try {
         int[] var10004 = new int[Ri<"l">(16385, 150020306330673182L ^ var3)];
         var10004[0] = Ri<"l">(32680, 7244603673154346942L ^ var3);
         var10004[1] = Ri<"l">(13938, 4653458855979193921L ^ var3);
         var10004[2] = Ri<"l">(16121, 581921411430063864L ^ var3);
         var10004[3] = Ri<"l">(18559, 3010951937882777704L ^ var3);
         var10004[4] = Ri<"l">(25783, 3849944472270390406L ^ var3);
         var10004[5] = Ri<"l">(3096, 9104435897690663964L ^ var3);
         var10004[Ri<"l">(14863, 485774616552446487L ^ var3)] = Ri<"l">(27602, 6562990174312057810L ^ var3);
         var10004[Ri<"l">(17242, 6776342859486913369L ^ var3)] = Ri<"l">(1840, 5800992652816951082L ^ var3);
         var10004[Ri<"l">(5610, 8849919966109218284L ^ var3)] = Ri<"l">(9739, 6873196727077864978L ^ var3);
         var10004[Ri<"l">(18937, 3617332870063319524L ^ var3)] = Ri<"l">(25783, 3849944472270390406L ^ var3);
         var10004[Ri<"l">(4260, 621480867771363472L ^ var3)] = Ri<"l">(7793, 5810299436594183752L ^ var3);
         var10004[Ri<"l">(15131, 3878026312646302512L ^ var3)] = Ri<"l">(25834, 3191868247409378553L ^ var3);
         var10004[Ri<"l">(1920, 736145530435774352L ^ var3)] = Ri<"l">(30960, 712901836777117950L ^ var3);
         var10004[Ri<"l">(26305, 1294391591195428605L ^ var3)] = Ri<"l">(27602, 6562990174312057810L ^ var3);
         var10004[Ri<"l">(19096, 4092933222912715398L ^ var3)] = Ri<"l">(1840, 5800992652816951082L ^ var3);
         var10004[Ri<"l">(30309, 140889230968870496L ^ var3)] = Ri<"l">(27602, 6562990174312057810L ^ var3);
         var10004[Ri<"l">(8277, 6629498663302201445L ^ var3)] = Ri<"l">(7467, 2979940815173401897L ^ var3);
         var10004[Ri<"l">(5780, 3502117186450175643L ^ var3)] = Ri<"l">(16121, 581921411430063864L ^ var3);
         this.mZZzJ = new cJ(this, mr.clS(var10004)).WE(true);
         this.WUOUc.Vf(() -> {
            long var1x = lPXre ^ 109464364406790L;
            iS[] var3x = cr.SC();

            try {
               boolean var10000x = this.PZQaG.WF();
               if (var3x == null) {
                  return var10000x;
               }

               if (!var10000x) {
                  return true;
               }
            } catch (MatchException var4) {
               throw Rb(var4);
            }

            return false;
         });
         if (var5 == null) {
            iS.bwK("Z80V6b");
         }
      } catch (MatchException var6) {
         throw Rb(var6);
      }
   }

   static {
      long var11 = lPXre ^ 136900541908350L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[3];
      int var18 = 0;
      String var17 = "t\u0082\u0083\u0085├ż ^P┬ę┬¬8=\u0095\u009c├ĘW%├»├Ş\u0099\u0012\u0011├▒\u009b├ć\u0083\u000e\u008cyT├ö`\u0010┬á├╗\u0015├ż├ć2├ądA90\u0081\u0001├ž┬║d\u0010├ć├Ě├│\u001b├Ś\u000b\u0091A├Ä\u0014┬í\t├Ł├ť├ć;";
      int var19 = "t\u0082\u0083\u0085├ż ^P┬ę┬¬8=\u0095\u009c├ĘW%├»├Ş\u0099\u0012\u0011├▒\u009b├ć\u0083\u000e\u008cyT├ö`\u0010┬á├╗\u0015├ż├ć2├ądA90\u0081\u0001├ž┬║d\u0010├ć├Ě├│\u001b├Ś\u000b\u0091A├Ä\u0014┬í\t├Ł├ť├ć;"
         .length();
      char var16 = ' ';
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = Rc(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            lyUbR = var20;
            PpKyU = new String[3];
            meWuI = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[49];
            int var3 = 0;
            String var4 = "A├ş:\u0019\u009bZ%>\u000e\u0098\b┬í\u008e\u0083N├öT\u0088├Ľ{┬ź\u0007\u0091\u009b\"j├│^C\bv(┬╣├Ě┬Č\u009c.├¬\n├Ác├če\u0019t┬«┬ĄR├Ć\fn├Ę\u008c├Ö├¬┬ą3X\u0090<gC\u008a\u001c┬ž┬áG\u009e+\u008d\u0012a├ş\t\n\u0004├ó┬▓\u0094├ż├íJ>?┬Ę\u0089zt\u0088┬Ą\u0094\u007f┬╣{\"\u001d=\u0014┬żw\u0003<├ĺd┬ęf\"\u000b\u0019wwC┬Şp┬╣├▓i├Ş|k├á\u0010┬ź├ä\u0084\u008c├łTG├×:;\u009e\b#┬¬├ÇW_a├ó\u009b\u001b├ş├╗e\u0017┬Ż?M\u0003\u0099┬Ą\u0001\b\u0017T├╣├ü├ź\u0091N\u0088├ë\u000f┬¬├▓\u001c├Ĺ4\u0001├▓\u001f├ů7├ą\r├ź\u0089┬úq├»├ô\u0090N\u0095>F┬Ż├Ç├âom\u0083{<├Č├«5├╗┬Ş\u0089O\u0095┬┤_}J\u009c\u008efG├ü\u009c┬Á@<├ť-\u0015├î├ů├ä\u0086n\u007fi\u0089.├ť├Ş\u0010\u0005-┬┤\u001b├ż\u001d├î\u0011\u0006gz^\u0006\u0018├ú├ą├ç├őq┬Ę┬Ě┬žrL\u000b├ŐT\n\u0012┬Ęd#&├ĽLe┬Ž├é┬┤├Ź├│\u0085├Ż i\u009d├ő\u0097\u0001?├í\u0017┬┐\u0081├ÇG\u0005├ç\u0089├î├▓l_\u0003├í\u0015xt\u001a\u0089\u009a┬ęB├îc├Č\"[\u00127\u0018K7├ť+┬ó\n├Ź├▓\u009e├▓at├Ě-\u0083├ů├ç<├ä\u0018\u001b\u000b├É┬ę┬ą\\├î2AG\u008a├║├ź5v┬┤MTJyc\u0081├Ć┬Ěb -┬│\u001d┬»[H┬╝4\f{├Ż├«\u0096├ç┬ú%b";
            int var5 = "A├ş:\u0019\u009bZ%>\u000e\u0098\b┬í\u008e\u0083N├öT\u0088├Ľ{┬ź\u0007\u0091\u009b\"j├│^C\bv(┬╣├Ě┬Č\u009c.├¬\n├Ác├če\u0019t┬«┬ĄR├Ć\fn├Ę\u008c├Ö├¬┬ą3X\u0090<gC\u008a\u001c┬ž┬áG\u009e+\u008d\u0012a├ş\t\n\u0004├ó┬▓\u0094├ż├íJ>?┬Ę\u0089zt\u0088┬Ą\u0094\u007f┬╣{\"\u001d=\u0014┬żw\u0003<├ĺd┬ęf\"\u000b\u0019wwC┬Şp┬╣├▓i├Ş|k├á\u0010┬ź├ä\u0084\u008c├łTG├×:;\u009e\b#┬¬├ÇW_a├ó\u009b\u001b├ş├╗e\u0017┬Ż?M\u0003\u0099┬Ą\u0001\b\u0017T├╣├ü├ź\u0091N\u0088├ë\u000f┬¬├▓\u001c├Ĺ4\u0001├▓\u001f├ů7├ą\r├ź\u0089┬úq├»├ô\u0090N\u0095>F┬Ż├Ç├âom\u0083{<├Č├«5├╗┬Ş\u0089O\u0095┬┤_}J\u009c\u008efG├ü\u009c┬Á@<├ť-\u0015├î├ů├ä\u0086n\u007fi\u0089.├ť├Ş\u0010\u0005-┬┤\u001b├ż\u001d├î\u0011\u0006gz^\u0006\u0018├ú├ą├ç├őq┬Ę┬Ě┬žrL\u000b├ŐT\n\u0012┬Ęd#&├ĽLe┬Ž├é┬┤├Ź├│\u0085├Ż i\u009d├ő\u0097\u0001?├í\u0017┬┐\u0081├ÇG\u0005├ç\u0089├î├▓l_\u0003├í\u0015xt\u001a\u0089\u009a┬ęB├îc├Č\"[\u00127\u0018K7├ť+┬ó\n├Ź├▓\u009e├▓at├Ě-\u0083├ů├ç<├ä\u0018\u001b\u000b├É┬ę┬ą\\├î2AG\u008a├║├ź5v┬┤MTJyc\u0081├Ć┬Ěb -┬│\u001d┬»[H┬╝4\f{├Ż├«\u0096├ç┬ú%b"
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
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
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           wLRHx = var6;
                           dgufU = new Integer[49];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "3G├¬Y├»├č├╣┬│=u\u0099├ä├É┬»┬▓\u0092";
                        var5 = "3G├¬Y├»├č├╣┬│=u\u0099├ä├É┬»┬▓\u0092".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   @Override
   public void LX(lC var1) {
      super.LX(var1);
      this.QX();
      this.Ol();
   }

   private static CallSite Ri(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Rh".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cp" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException Rb(MatchException var0) {
      return var0;
   }

   private static String Rc(byte[] var0) {
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

   private static String Rd(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 14853;
      if (PpKyU[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])exTwJ.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               exTwJ.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cp", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = lyUbR[var5].getBytes("ISO-8859-1");
         PpKyU[var5] = Rc(((Cipher)var4[0]).doFinal(var9));
      }

      return PpKyU[var5];
   }

   private static Object Re(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Rd(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int Rh(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Rg(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   protected void QX() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cp.lPXre J
      // 03: ldc2_w 101554440097841
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/cr.SC ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 29
      // 11: getfield sixtwo/cp.PZQaG Lsixtwo/cJ;
      // 14: invokevirtual sixtwo/cJ.WF ()Z
      // 17: ifeq 48
      // 1a: goto 21
      // 1d: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: goto 29
      // 25: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: getfield sixtwo/cp.WUOUc Lsixtwo/cC;
      // 2c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2f: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // 32: invokevirtual net/minecraft/class_1041.method_4495 ()I
      // 35: sipush 29184
      // 38: ldc2_w 6097897723752334687
      // 3b: lload 1
      // 3c: lxor
      // 3d: invokedynamic l (IJ)I bsm=sixtwo/cp.Ri (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 42: imul
      // 43: i2d
      // 44: invokevirtual sixtwo/cC.VA (D)Lsixtwo/cC;
      // 47: pop
      // 48: return
   }

   private static int Rg(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24171;
      if (dgufU[var3] == null) {
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
         long var5 = wLRHx[var3];
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
         Object[] var9 = (Object[])meWuI.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               meWuI.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cp", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         dgufU[var3] = var15;
      }

      return dgufU[var3];
   }

   private static CallSite Rf(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Re".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cp" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   protected abstract void Ol();

   @Override
   public boolean onMouseClicked(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cp.lPXre J
      // 003: ldc2_w 106264258831056
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/cr.SC ()[Lsixtwo/iS;
      // 00c: aload 0
      // 00d: dload 1
      // 00e: dload 3
      // 00f: invokevirtual sixtwo/cp.RP (DD)Z
      // 012: istore 9
      // 014: astore 8
      // 016: iload 9
      // 018: aload 8
      // 01a: ifnull 1ae
      // 01d: ifeq 1ad
      // 020: goto 027
      // 023: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 026: athrow
      // 027: aload 0
      // 028: getfield sixtwo/cp.LkpAS Z
      // 02b: aload 8
      // 02d: ifnull 1ae
      // 030: goto 037
      // 033: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 036: athrow
      // 037: ifeq 1ad
      // 03a: goto 041
      // 03d: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 040: athrow
      // 041: aload 5
      // 043: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 046: aload 8
      // 048: ifnull 0b9
      // 04b: goto 052
      // 04e: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 051: athrow
      // 052: if_acmpne 0b4
      // 055: goto 05c
      // 058: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05b: athrow
      // 05c: aload 0
      // 05d: getfield sixtwo/cp.mZZzJ Lsixtwo/cJ;
      // 060: invokevirtual sixtwo/cJ.WF ()Z
      // 063: aload 8
      // 065: ifnull 1ae
      // 068: goto 06f
      // 06b: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06e: athrow
      // 06f: ifne 1ad
      // 072: goto 079
      // 075: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 078: athrow
      // 079: aload 0
      // 07a: bipush 1
      // 07b: putfield sixtwo/cp.pAjuu Z
      // 07e: aload 0
      // 07f: invokevirtual sixtwo/cp.RT ()F
      // 082: fstore 10
      // 084: aload 0
      // 085: dload 1
      // 086: aload 0
      // 087: getfield sixtwo/cp.toIeR F
      // 08a: f2d
      // 08b: dsub
      // 08c: d2f
      // 08d: fload 10
      // 08f: fmul
      // 090: putfield sixtwo/cp.lGacw F
      // 093: aload 0
      // 094: dload 3
      // 095: aload 0
      // 096: getfield sixtwo/cp.QWaAn F
      // 099: f2d
      // 09a: dsub
      // 09b: d2f
      // 09c: fload 10
      // 09e: fmul
      // 09f: putfield sixtwo/cp.WjFpo F
      // 0a2: aload 0
      // 0a3: aload 0
      // 0a4: getfield sixtwo/cp.toIeR F
      // 0a7: putfield sixtwo/cp.TSvLw F
      // 0aa: aload 0
      // 0ab: aload 0
      // 0ac: getfield sixtwo/cp.QWaAn F
      // 0af: putfield sixtwo/cp.VngMS F
      // 0b2: bipush 1
      // 0b3: ireturn
      // 0b4: aload 5
      // 0b6: getstatic sixtwo/mA.frWTZ Lsixtwo/mA;
      // 0b9: if_acmpne 1ad
      // 0bc: aload 0
      // 0bd: bipush 0
      // 0be: putfield sixtwo/cp.pAjuu Z
      // 0c1: aload 0
      // 0c2: bipush 1
      // 0c3: putfield sixtwo/cp.vCMYc Z
      // 0c6: aload 0
      // 0c7: getfield sixtwo/cp.AyAnj Lsixtwo/rk;
      // 0ca: invokevirtual sixtwo/rk.dhg ()V
      // 0cd: aload 0
      // 0ce: getfield sixtwo/cp.toIeR F
      // 0d1: dload 1
      // 0d2: aload 0
      // 0d3: getfield sixtwo/cp.toIeR F
      // 0d6: f2d
      // 0d7: dsub
      // 0d8: d2f
      // 0d9: aload 0
      // 0da: invokevirtual sixtwo/cp.RT ()F
      // 0dd: fmul
      // 0de: fadd
      // 0df: fstore 10
      // 0e1: aload 0
      // 0e2: getfield sixtwo/cp.QWaAn F
      // 0e5: dload 3
      // 0e6: aload 0
      // 0e7: getfield sixtwo/cp.QWaAn F
      // 0ea: f2d
      // 0eb: dsub
      // 0ec: d2f
      // 0ed: aload 0
      // 0ee: invokevirtual sixtwo/cp.RT ()F
      // 0f1: fmul
      // 0f2: fadd
      // 0f3: fstore 11
      // 0f5: new sixtwo/ap
      // 0f8: dup
      // 0f9: fload 10
      // 0fb: fload 11
      // 0fd: ldc_w 110.0
      // 100: ldc_w 6.0
      // 103: invokespecial sixtwo/ap.<init> (FFFF)V
      // 106: aload 0
      // 107: getfield sixtwo/cp.oZllQ Ljava/util/List;
      // 10a: invokeinterface java/util/List.isEmpty ()Z 1
      // 10f: ifeq 127
      // 112: sipush 10182
      // 115: ldc2_w 2113776816669541950
      // 118: lload 6
      // 11a: lxor
      // 11b: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/cp.Rf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 120: goto 135
      // 123: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 126: athrow
      // 127: sipush 15704
      // 12a: ldc2_w 163017477475654817
      // 12d: lload 6
      // 12f: lxor
      // 130: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/cp.Rf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 135: invokevirtual sixtwo/ap.pW (Ljava/lang/String;)Lsixtwo/ap;
      // 138: invokevirtual sixtwo/ap.qq ()Lsixtwo/ap;
      // 13b: astore 12
      // 13d: aload 0
      // 13e: getfield sixtwo/cp.oZllQ Ljava/util/List;
      // 141: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 146: astore 13
      // 148: aload 13
      // 14a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 14f: ifeq 177
      // 152: aload 13
      // 154: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 159: checkcast sixtwo/cB
      // 15c: astore 14
      // 15e: aload 12
      // 160: aload 14
      // 162: invokevirtual sixtwo/ap.pU (Lsixtwo/cB;)Lsixtwo/ap;
      // 165: pop
      // 166: aload 8
      // 168: ifnull 1ab
      // 16b: aload 8
      // 16d: ifnonnull 148
      // 170: goto 177
      // 173: invokestatic sixtwo/cp.Rb (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 176: athrow
      // 177: aload 12
      // 179: sipush 28654
      // 17c: ldc2_w 7603522800943402517
      // 17f: lload 6
      // 181: lxor
      // 182: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/cp.Rf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 187: getstatic sixtwo/lf.JHGge Lsixtwo/lf;
      // 18a: getstatic sixtwo/jk.mPXGi Lsixtwo/mG;
      // 18d: getstatic sixtwo/jk.mPXGi Lsixtwo/mG;
      // 190: aload 0
      // 191: invokedynamic run (Lsixtwo/cp;)Lsixtwo/ai; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lsixtwo/aj;)V, sixtwo/cp.QZ (Lsixtwo/aj;)V, (Lsixtwo/aj;)V ]
      // 196: invokevirtual sixtwo/ap.qn (Ljava/lang/String;Lsixtwo/lf;Lsixtwo/mG;Lsixtwo/mG;Lsixtwo/ai;)Lsixtwo/ap;
      // 199: aload 0
      // 19a: invokedynamic run (Lsixtwo/cp;)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/cp.QY ()V, ()V ]
      // 19f: invokevirtual sixtwo/ap.qo (Ljava/lang/Runnable;)Lsixtwo/ap;
      // 1a2: pop
      // 1a3: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 1a6: aload 12
      // 1a8: invokevirtual sixtwo/cq.Rs (Lsixtwo/ap;)V
      // 1ab: bipush 1
      // 1ac: ireturn
      // 1ad: bipush 0
      // 1ae: ireturn
   }
}
