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

public class bN extends bW {
   private static final long QtOLO = gb.aYR(-2473864786023251727L, 2366648308828434796L, MethodHandles.lookup().lookupClass()).a(190608559322180L);
   private static final long[] GPNOW;
   private static final Integer[] OhOEC;
   private static final Map iaAGG = new HashMap(13);

   public bN(cv var1) {
      long var2 = QtOLO ^ 7948085751112L;
      int[] var10002 = new int[Nw<"z">(31185, 9046090436148355342L ^ var2)];
      var10002[0] = Nw<"z">(339, 9116941763097860500L ^ var2);
      var10002[1] = Nw<"z">(6538, 8413528727815455041L ^ var2);
      var10002[2] = Nw<"z">(24280, 5607878748503721507L ^ var2);
      var10002[3] = Nw<"z">(5911, 7407732107990306797L ^ var2);
      var10002[4] = Nw<"z">(29569, 5600608968691477323L ^ var2);
      var10002[5] = Nw<"z">(25782, 2388094746910293091L ^ var2);
      var10002[Nw<"z">(30521, 7660443316189196256L ^ var2)] = Nw<"z">(32461, 1160977100216198677L ^ var2);
      var10002[Nw<"z">(10708, 6301593559742755109L ^ var2)] = Nw<"z">(1805, 4596259358414479339L ^ var2);
      var10002[Nw<"z">(30827, 4752549908812751016L ^ var2)] = Nw<"z">(7455, 8458590230886155678L ^ var2);
      var10002[Nw<"z">(31676, 6689316026519184239L ^ var2)] = Nw<"z">(24812, 5180692629646505995L ^ var2);
      var10002[Nw<"z">(28141, 8902193589370975539L ^ var2)] = Nw<"z">(1029, 9036136886863961291L ^ var2);
      var10002[Nw<"z">(11673, 7872484350267078001L ^ var2)] = Nw<"z">(28293, 1313815352660948485L ^ var2);
      var10002[Nw<"z">(3329, 2340748980349375987L ^ var2)] = Nw<"z">(32498, 2702229905638811147L ^ var2);
      var10002[Nw<"z">(9156, 7566955864024005427L ^ var2)] = Nw<"z">(27074, 5720701596666032415L ^ var2);
      var10002[Nw<"z">(12206, 5851397009608587074L ^ var2)] = Nw<"z">(305, 4468746912964516326L ^ var2);
      var10002[Nw<"z">(7297, 3036712684867552369L ^ var2)] = Nw<"z">(15282, 9059953316907754342L ^ var2);
      var10002[Nw<"z">(703, 8600288737640421998L ^ var2)] = Nw<"z">(1805, 4596259358414479339L ^ var2);
      var10002[Nw<"z">(19766, 1512174557824439763L ^ var2)] = Nw<"z">(14344, 705550454329024714L ^ var2);
      var10002[Nw<"z">(10905, 3028994461846385221L ^ var2)] = Nw<"z">(12573, 5070911509886577055L ^ var2);
      var10002[Nw<"z">(28819, 4103268437844355193L ^ var2)] = Nw<"z">(26992, 9123290874888515988L ^ var2);
      var10002[Nw<"z">(31083, 3665720875759034786L ^ var2)] = Nw<"z">(14735, 5828362136254390625L ^ var2);
      var10002[Nw<"z">(24788, 8041809477222135841L ^ var2)] = Nw<"z">(24043, 2672027504281503012L ^ var2);
      var10002[Nw<"z">(26796, 6436316997259423863L ^ var2)] = Nw<"z">(30269, 6734134205231918784L ^ var2);
      var10002[Nw<"z">(27575, 7801592501414163290L ^ var2)] = Nw<"z">(9984, 3572289918211407871L ^ var2);
      var10002[Nw<"z">(15837, 2072380315960190237L ^ var2)] = Nw<"z">(14735, 5828362136254390625L ^ var2);
      var10002[Nw<"z">(23197, 8640552766540431951L ^ var2)] = Nw<"z">(15044, 8024487767918125607L ^ var2);
      var10002[Nw<"z">(31360, 7933431182522901068L ^ var2)] = Nw<"z">(10510, 4851833930145640940L ^ var2);
      var10002[Nw<"z">(23368, 238053638742393737L ^ var2)] = Nw<"z">(26992, 9123290874888515988L ^ var2);
      super(var1, mr.clS(var10002));
   }

   static {
      long var0 = QtOLO ^ 100674683477274L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[69];
      int var5 = 0;
      String var6 = "\u0088s\r┬┤i@├ľ\"\u0086I├ť├ĺlxh├Ü\u0096├ş\u007f\u008ex┬Ż┬ż\u001ax\bW\u0001d%t\u009e├ůu!├ż \u0083] ├ö├»├Ş3\u0016r├Öz\u009e\u008d\u0004├»├á=\u0019├éj├░5PE├Ç┬Ż┬ži/uJ┬ż\u008ba\u001e:\u008bM;├ź┬Č┬┤├ä├┤\u0099\u0007\u001a\u0095|\u0088├▒U\u0015┬ž├äo<D\u0004\"=KJ\u009d├Ž├│\u0082Z2\t├ľ\u008c├«├Ę├Ť├Ö\t┬ž\u0004┬╝┬ą┬í\u008cM┬╣N\u0017├ü8\b\u009c├│\u0086fkT┬Ę\u0017I┬ž┬┐├Ą├ĄG┬Č\u0016├ą├Ö\u0088├│├ó├ą├▓┬ż<_Q├╗\u0084\u008cy├ëm\u0011'\u00ad├Ä4┬╝┬Ę┬╣$├Ł├░\u0094├ö┬Ą├ç!├¬\u00982\f\u00ad\u009d<├│├Ł)├ô>L┬Ą┬ó]├│E\u001f8┬»├Ä├ź┬░F\u009a\u0007\u009b├ćqF\u008e'├║\u0092\u0012├ö\"┬»├╗\u000b├žF├ö\u0094\u0094|'7\u0001├Ź+(├ę\u009e\u0082\u0001`\u009a\u0016fx├č├╗cFOg\u0089\u008f\u001a┬Ş\u0081~┬╣├║\u0015\u000b\u008e┬ź]~B├É\n├żV┬ÂI\u009a\u0001o\u0085\u008b┬▒\u0082├Ś├▓\u008d├×├ü<\u0017q┬▓k├Ĺ\u000f┬Ş\u0017%├É*0├ł┬▒j\u0014zVI\u008cPim5┬¬┬ą├í├ÄJ┬╣P├ő\u0080\u0091#(\u008b%TUoWY\u0099&ftbY├ôk┬Ě\u0011├×\u0019├┐H\u008a1├¬├î├ł├ĆWd├Â├Ć├Ç\u0099\u007f├á\n\b┬żZ├ĺw├ş├Ç├▒\u000b\u0014y\u0096,├ůz\u0006\u0001y\u0099┬│┬░\u0013$\u0011\u001c\u0094\u00021t├É├ť├Ł├Ĺh{w.├â├áS\u0095├í├ć\u000bf├Ľ/~\\\u0017├ů\u009b├ś\u0000\u0093├ö├ís├čA\u000e├Ü\u0003├Ü\u0091p \u0014|┬¬├î\u0083\u0016z\u0099├Ç\u0001\u0004\u0095o\u0083O1S\"yi\u0005┬Ż\u0000┬Â┬»FB\u009b9\u0087\u0095┬Ż┬▒w├ľ\u008f\u0092├ż\u0003\u0014c6├ů\u0098\u0012┬Č? ┬ą├Ä\r\u008d├ą\u0002\u0099├î├Ł\u0089\u0096├ŻK:R\u0091@├ö\u0086├Ľ_\u0014├Ľ[\u008a!9\u000e├á\"\bdju\u0080├á\u0085G├Ě\ru┬Ż)\u0080m├Á├Ź\b\u0085├»\u0011┬Â=├éi┬ú'}!├╣F\u008d2┬á\u000e┬¬├Ź├ö\u0081\u007f\r";
      int var7 = "\u0088s\r┬┤i@├ľ\"\u0086I├ť├ĺlxh├Ü\u0096├ş\u007f\u008ex┬Ż┬ż\u001ax\bW\u0001d%t\u009e├ůu!├ż \u0083] ├ö├»├Ş3\u0016r├Öz\u009e\u008d\u0004├»├á=\u0019├éj├░5PE├Ç┬Ż┬ži/uJ┬ż\u008ba\u001e:\u008bM;├ź┬Č┬┤├ä├┤\u0099\u0007\u001a\u0095|\u0088├▒U\u0015┬ž├äo<D\u0004\"=KJ\u009d├Ž├│\u0082Z2\t├ľ\u008c├«├Ę├Ť├Ö\t┬ž\u0004┬╝┬ą┬í\u008cM┬╣N\u0017├ü8\b\u009c├│\u0086fkT┬Ę\u0017I┬ž┬┐├Ą├ĄG┬Č\u0016├ą├Ö\u0088├│├ó├ą├▓┬ż<_Q├╗\u0084\u008cy├ëm\u0011'\u00ad├Ä4┬╝┬Ę┬╣$├Ł├░\u0094├ö┬Ą├ç!├¬\u00982\f\u00ad\u009d<├│├Ł)├ô>L┬Ą┬ó]├│E\u001f8┬»├Ä├ź┬░F\u009a\u0007\u009b├ćqF\u008e'├║\u0092\u0012├ö\"┬»├╗\u000b├žF├ö\u0094\u0094|'7\u0001├Ź+(├ę\u009e\u0082\u0001`\u009a\u0016fx├č├╗cFOg\u0089\u008f\u001a┬Ş\u0081~┬╣├║\u0015\u000b\u008e┬ź]~B├É\n├żV┬ÂI\u009a\u0001o\u0085\u008b┬▒\u0082├Ś├▓\u008d├×├ü<\u0017q┬▓k├Ĺ\u000f┬Ş\u0017%├É*0├ł┬▒j\u0014zVI\u008cPim5┬¬┬ą├í├ÄJ┬╣P├ő\u0080\u0091#(\u008b%TUoWY\u0099&ftbY├ôk┬Ě\u0011├×\u0019├┐H\u008a1├¬├î├ł├ĆWd├Â├Ć├Ç\u0099\u007f├á\n\b┬żZ├ĺw├ş├Ç├▒\u000b\u0014y\u0096,├ůz\u0006\u0001y\u0099┬│┬░\u0013$\u0011\u001c\u0094\u00021t├É├ť├Ł├Ĺh{w.├â├áS\u0095├í├ć\u000bf├Ľ/~\\\u0017├ů\u009b├ś\u0000\u0093├ö├ís├čA\u000e├Ü\u0003├Ü\u0091p \u0014|┬¬├î\u0083\u0016z\u0099├Ç\u0001\u0004\u0095o\u0083O1S\"yi\u0005┬Ż\u0000┬Â┬»FB\u009b9\u0087\u0095┬Ż┬▒w├ľ\u008f\u0092├ż\u0003\u0014c6├ů\u0098\u0012┬Č? ┬ą├Ä\r\u008d├ą\u0002\u0099├î├Ł\u0089\u0096├ŻK:R\u0091@├ö\u0086├Ľ_\u0014├Ľ[\u008a!9\u000e├á\"\bdju\u0080├á\u0085G├Ě\ru┬Ż)\u0080m├Á├Ź\b\u0085├»\u0011┬Â=├éi┬ú'}!├╣F\u008d2┬á\u000e┬¬├Ź├ö\u0081\u007f\r"
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
                     GPNOW = var8;
                     OhOEC = new Integer[69];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\r\u000f]├Ä&\u00867┬Ž\u001e\u0005├«├čl├░\u0093\u0091";
                  var7 = "\r\u000f]├Ä&\u00867┬Ž\u001e\u0005├«├čl├░\u0093\u0091".length();
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

   @Override
   public boolean MH() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bN.QtOLO J
      // 03: ldc2_w 79698064230172
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bJ.MN ()Z
      // 0b: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 0e: ldc sixtwo/fs
      // 10: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 13: checkcast sixtwo/fs
      // 16: astore 4
      // 18: istore 3
      // 19: aload 4
      // 1b: invokevirtual sixtwo/fs.bag ()Z
      // 1e: iload 3
      // 1f: ifne 3b
      // 22: ifeq 4d
      // 25: goto 2c
      // 28: invokestatic sixtwo/bN.Nt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: aload 4
      // 2e: invokevirtual sixtwo/fs.aPz ()Lsixtwo/cu;
      // 31: invokevirtual sixtwo/cu.SZ ()Z
      // 34: goto 3b
      // 37: invokestatic sixtwo/bN.Nt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: iload 3
      // 3c: ifne 4a
      // 3f: ifeq 4d
      // 42: goto 49
      // 45: invokestatic sixtwo/bN.Nt (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: bipush 1
      // 4a: goto 4e
      // 4d: bipush 0
      // 4e: ireturn
   }

   @Override
   public void MG(lC var1, ii var2) {
      long var3 = QtOLO ^ 78598150356435L;
      fs var5 = rD.dlJ().aZx(fs.class);
      float var10001 = var5.aPF();
      int[] var10002 = new int[Nw<"z">(27877, 4845884730696787089L ^ var3)];
      var10002[0] = Nw<"z">(5934, 5214121299907157854L ^ var3);
      var10002[1] = Nw<"z">(1135, 3028553098857614338L ^ var3);
      var10002[2] = Nw<"z">(4487, 8424820692719081952L ^ var3);
      var10002[3] = Nw<"z">(21972, 3699595448880258463L ^ var3);
      var10002[4] = Nw<"z">(10510, 4851904047634162039L ^ var3);
      var10002[5] = Nw<"z">(15282, 9059883233779364861L ^ var3);
      var10002[Nw<"z">(3413, 4714013871760704788L ^ var3)] = Nw<"z">(1805, 4596330025658814320L ^ var3);
      var10002[Nw<"z">(23813, 441662378057160063L ^ var3)] = Nw<"z">(26992, 9123220753105150223L ^ var3);
      var10002[Nw<"z">(19114, 3027472508287664841L ^ var3)] = Nw<"z">(15612, 2241396891897115810L ^ var3);
      var10002[Nw<"z">(13909, 2768614995845627398L ^ var3)] = Nw<"z">(26992, 9123220753105150223L ^ var3);
      var10002[Nw<"z">(3303, 1227839429315724539L ^ var3)] = Nw<"z">(14735, 5828432236562657786L ^ var3);
      var10002[Nw<"z">(5433, 2235283646329658710L ^ var3)] = Nw<"z">(22123, 5978964719305252390L ^ var3);
      var10002[Nw<"z">(4205, 8555999778047137814L ^ var3)] = Nw<"z">(30269, 6734063589526666843L ^ var3);
      var10002[Nw<"z">(23953, 7529320351704503756L ^ var3)] = Nw<"z">(32467, 2257065950699124357L ^ var3);
      var10002[Nw<"z">(4919, 4480153407814376239L ^ var3)] = Nw<"z">(14735, 5828432236562657786L ^ var3);
      var10002[Nw<"z">(8478, 6925300891145447788L ^ var3)] = Nw<"z">(3020, 7707060795602404243L ^ var3);
      var10002[Nw<"z">(3433, 2407662224262268172L ^ var3)] = Nw<"z">(10510, 4851904047634162039L ^ var3);
      var10002[Nw<"z">(7949, 6725311464412157797L ^ var3)] = Nw<"z">(26992, 9123220753105150223L ^ var3);
      this.Oj(var10001, var10002, mG.cnP(185.0F, 28.0F, 28.0F));
      super.MG(var1, var2);
   }

   private static int Nv(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Nu(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite Nw(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Nv".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bN" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException Nt(MatchException var0) {
      return var0;
   }

   private static int Nu(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 10896;
      if (OhOEC[var3] == null) {
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
         long var5 = GPNOW[var3];
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
         Object[] var9 = (Object[])iaAGG.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               iaAGG.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bN", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         OhOEC[var3] = var15;
      }

      return OhOEC[var3];
   }
}
