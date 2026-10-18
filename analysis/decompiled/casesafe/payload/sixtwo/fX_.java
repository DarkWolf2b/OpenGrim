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

public class fX extends gg {
   private final cD jGdAR;
   private final ct nJAFn;
   private final cu hltCm;
   private final cu OzuKt;
   private final cu seKrG;
   private final cI HevkM;
   static fX JUwUO;
   private static int[] CgnEr;
   private static final long vDBBc = gb.aYR(-4192842004149834572L, -234981683376439731L, MethodHandles.lookup().lookupClass()).a(28209348577956L);
   private static final long[] mKhNu;
   private static final Integer[] vnJEn;
   private static final Map yuueo = new HashMap(13);

   public fX() {
      long var1 = vDBBc ^ 110569702359045L;
      super(gf.aZL(aYy<"u">(25366, 3683495280317333454L ^ var1), true, gh.KfAlY).aZQ(aYy<"u">(3054, 863671452846495509L ^ var1)).aZS(false).aZU(true).aZW(true));
      int[] var10004 = new int[aYy<"u">(21604, 3120532035598141584L ^ var1)];
      var10004[0] = aYy<"u">(30725, 7759436744461477082L ^ var1);
      var10004[1] = aYy<"u">(20973, 1512129359006992L ^ var1);
      var10004[2] = aYy<"u">(12239, 1342610777012908849L ^ var1);
      var10004[3] = aYy<"u">(28814, 7582205851322805348L ^ var1);
      var10004[4] = aYy<"u">(27760, 9081956830484656293L ^ var1);
      var10004[5] = aYy<"u">(7654, 8200820335198339386L ^ var1);
      var10004[aYy<"u">(28773, 8490346989880765617L ^ var1)] = aYy<"u">(22505, 1519647297816808197L ^ var1);
      var10004[aYy<"u">(17862, 1593092681197410588L ^ var1)] = aYy<"u">(13225, 3758222648707231560L ^ var1);
      var10004[aYy<"u">(25131, 8007158784426213117L ^ var1)] = aYy<"u">(32427, 703893736116019820L ^ var1);
      this.jGdAR = new cD(this, mr.clS(var10004)).VO(aYy<"u">(26541, 2544721543226260317L ^ var1));
      this.nJAFn = new ct(
         this,
         mr.clS(
            new int[]{
               aYy<"u">(1900, 3014440474189011901L ^ var1),
               aYy<"u">(20179, 1976299231656563254L ^ var1),
               aYy<"u">(8087, 4121180444067136338L ^ var1),
               aYy<"u">(18753, 2139148719657309627L ^ var1),
               aYy<"u">(13225, 3758222648707231560L ^ var1)
            }
         )
      );
      ct var10003 = this.nJAFn;
      var10004 = new int[aYy<"u">(5707, 3767290624924453525L ^ var1)];
      var10004[0] = aYy<"u">(8755, 3227194454033481424L ^ var1);
      var10004[1] = aYy<"u">(1623, 4481109619451468450L ^ var1);
      var10004[2] = aYy<"u">(31943, 8986877879612366889L ^ var1);
      var10004[3] = aYy<"u">(29665, 1316740701285871376L ^ var1);
      var10004[4] = aYy<"u">(30255, 6180741543878093528L ^ var1);
      var10004[5] = aYy<"u">(30833, 7791121796883342486L ^ var1);
      var10004[aYy<"u">(27254, 7564494800574150301L ^ var1)] = aYy<"u">(22387, 276619061442988964L ^ var1);
      var10004[aYy<"u">(26611, 7445723123835370251L ^ var1)] = aYy<"u">(5571, 8178367017673885985L ^ var1);
      var10004[aYy<"u">(1027, 2826649473355815164L ^ var1)] = aYy<"u">(28786, 4989619723612122244L ^ var1);
      var10004[aYy<"u">(24731, 9009738057735896169L ^ var1)] = aYy<"u">(28330, 1030192475208512108L ^ var1);
      var10004[aYy<"u">(9378, 7780922056098101342L ^ var1)] = aYy<"u">(28510, 1914606505471112077L ^ var1);
      var10004[aYy<"u">(28035, 5739109673060790622L ^ var1)] = aYy<"u">(20091, 841736517238641300L ^ var1);
      this.hltCm = new cu(var10003, mr.clS(var10004));
      this.OzuKt = new cu(
            this.nJAFn,
            mr.clS(
               new int[]{
                  aYy<"u">(32179, 3461914585567027539L ^ var1),
                  aYy<"u">(28786, 4989619723612122244L ^ var1),
                  aYy<"u">(29792, 6267256165597341830L ^ var1),
                  aYy<"u">(6441, 531863316767147506L ^ var1)
               }
            )
         )
         .SY();
      this.seKrG = new cu(
         this.nJAFn,
         mr.clS(
            new int[]{
               aYy<"u">(7530, 2266627194129613187L ^ var1),
               aYy<"u">(10123, 3597868806513245010L ^ var1),
               aYy<"u">(28786, 4989619723612122244L ^ var1),
               aYy<"u">(30255, 6180741543878093528L ^ var1),
               aYy<"u">(30937, 3860238070802998314L ^ var1)
            }
         )
      );
      var10004 = new int[aYy<"u">(11656, 7794459303833055578L ^ var1)];
      var10004[0] = aYy<"u">(30215, 6185114224057412350L ^ var1);
      var10004[1] = aYy<"u">(30937, 3860238070802998314L ^ var1);
      var10004[2] = aYy<"u">(30255, 6180741543878093528L ^ var1);
      var10004[3] = aYy<"u">(20179, 1976299231656563254L ^ var1);
      var10004[4] = aYy<"u">(22387, 276619061442988964L ^ var1);
      var10004[5] = aYy<"u">(16651, 4847312775221632475L ^ var1);
      var10004[aYy<"u">(27254, 7564494800574150301L ^ var1)] = aYy<"u">(6393, 2320977542709380116L ^ var1);
      var10004[aYy<"u">(26611, 7445723123835370251L ^ var1)] = aYy<"u">(13225, 3758222648707231560L ^ var1);
      var10004[aYy<"u">(1027, 2826649473355815164L ^ var1)] = aYy<"u">(8100, 6101548182053159744L ^ var1);
      var10004[aYy<"u">(24731, 9009738057735896169L ^ var1)] = aYy<"u">(13225, 3758222648707231560L ^ var1);
      this.HevkM = new cI(this, mr.clS(var10004)).Wx(() -> {
         aZ var0 = new aZ(2.0F);
         lc var1x = bl.Ex().Ey();
         float var2 = var1x.bXF() - var0.kN() - 10.0F;
         float var3x = var1x.bXG();
         var0.sW(var2, var3x);
         aw.route(var0);
      });
   }

   static {
      int[] var10000 = new int[2];
      aYt(var10000);
      long var0 = vDBBc ^ 120548145183980L;
      Cipher var2;
      Cipher var14 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var14.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[51];
      int var5 = 0;
      String var6 = "┬á\u0013Q┬ź\u0090M\u0099┬Ż`\u0085\u0019├Ç3\u009dt├ü\u001asNt┬▓├▓\r~-9'mI\r9@├ő├é┬Ě\u00adK!r\u007f├╗\u0098┬╝9├Ż├░├ťJ┬║\u0095%2┬╝\u000bA ├ů├şt\u009d\u009ds~\u0094┬▓O┬Ě\u0097├Ža\u0015/├┤\u0016/\u0087xX8├Ć├Ąg(\u0083\u001be\u0015┬í\u0097Y0├Ě├¬;├ś├Ás├Żg\u0007\u0004\"~V\u008e\u0086|\u0085Q\u000ff├Ś\u001b\"\u0019\u0003├»\u0002cy$\"├║H\u0098up\t├╝ ├Ç6\u0094├Ę├«\u0013\u0084\u0081\u0006CK&├┤├╗s┬á┬Ż├áv\u0090{a5~├ä├╣├Ö┬Ár├┤├Ę4os/\u001b,-'\u0003/OQ├ž├ëxD@┬úi├ó2\u0098}N├öB\u0019├ŞR~d}_├×┬ž┬░┬Ż\u0012kD├úp\u0091\fTV├ç\u0012g├»├Ž┬ó\u001c\u000e├ő ├»├╝\u0002\u000eE├Âp┬¬\u009a \\\u00112┬Á├╗6├éy\u001e┬┐├Á┬»┬│┬Ę├ë\u0098├ž,├Ö├Č}┬│\u0095┬▓├ę├ú<├ö-├░├Ź\u009a{┬ą┬ż.\u0007I├ő{D├Č├će├Č├Ż\u009c\u0093\u008b&6┬║├á├Ä\u0086t?|\u001cd├ë\u0001>├Ć├ü┬Ě┬╗├Ś?\u0084M\u008d┬┤[\u009c├»├č>\u00845\u0098\u0095|├Ž9├Ş.├ś┬Ż├î\u0087┬Án?┬Č├žK~├×I┬║\u0017h├▒┬ŞI\u009f\u001d┬Čf\u0090\u001e├Ą?├źij┬│\u00973┬úR*9\u0087g├ël├Â┬╗├Ő ┬╝\u008f\u009dOoJ┬Á├Ź/\u0095\u0011FU┬╝\u0080├Ç\u00ad\u007f├Ś┬┤├Ż├ů=├é\u0004├ü\b\u0097E┬¬`\u008aT";
      int var7 = "┬á\u0013Q┬ź\u0090M\u0099┬Ż`\u0085\u0019├Ç3\u009dt├ü\u001asNt┬▓├▓\r~-9'mI\r9@├ő├é┬Ě\u00adK!r\u007f├╗\u0098┬╝9├Ż├░├ťJ┬║\u0095%2┬╝\u000bA ├ů├şt\u009d\u009ds~\u0094┬▓O┬Ě\u0097├Ža\u0015/├┤\u0016/\u0087xX8├Ć├Ąg(\u0083\u001be\u0015┬í\u0097Y0├Ě├¬;├ś├Ás├Żg\u0007\u0004\"~V\u008e\u0086|\u0085Q\u000ff├Ś\u001b\"\u0019\u0003├»\u0002cy$\"├║H\u0098up\t├╝ ├Ç6\u0094├Ę├«\u0013\u0084\u0081\u0006CK&├┤├╗s┬á┬Ż├áv\u0090{a5~├ä├╣├Ö┬Ár├┤├Ę4os/\u001b,-'\u0003/OQ├ž├ëxD@┬úi├ó2\u0098}N├öB\u0019├ŞR~d}_├×┬ž┬░┬Ż\u0012kD├úp\u0091\fTV├ç\u0012g├»├Ž┬ó\u001c\u000e├ő ├»├╝\u0002\u000eE├Âp┬¬\u009a \\\u00112┬Á├╗6├éy\u001e┬┐├Á┬»┬│┬Ę├ë\u0098├ž,├Ö├Č}┬│\u0095┬▓├ę├ú<├ö-├░├Ź\u009a{┬ą┬ż.\u0007I├ő{D├Č├će├Č├Ż\u009c\u0093\u008b&6┬║├á├Ä\u0086t?|\u001cd├ë\u0001>├Ć├ü┬Ě┬╗├Ś?\u0084M\u008d┬┤[\u009c├»├č>\u00845\u0098\u0095|├Ž9├Ş.├ś┬Ż├î\u0087┬Án?┬Č├žK~├×I┬║\u0017h├▒┬ŞI\u009f\u001d┬Čf\u0090\u001e├Ą?├źij┬│\u00973┬úR*9\u0087g├ël├Â┬╗├Ő ┬╝\u008f\u009dOoJ┬Á├Ź/\u0095\u0011FU┬╝\u0080├Ç\u00ad\u007f├Ś┬┤├Ż├ů=├é\u0004├ü\b\u0097E┬¬`\u008aT"
         .length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var15 = var8;
         var10001 = var5++;
         long var18 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var20 = -1;

         while (true) {
            long var10 = var18;
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
            long var22 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var20) {
               case 0:
                  var15[var10001] = var22;
                  if (var4 >= var7) {
                     mKhNu = var8;
                     vnJEn = new Integer[51];
                     return;
                  }
                  break;
               default:
                  var15[var10001] = var22;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "├┤├ľ┬á.├ť<A\u0086\b├Č┬Č├ÄA\bA\u0000";
                  var7 = "├┤├ľ┬á.├ť<A\u0086\b├Č┬Č├ÄA\bA\u0000".length();
                  var4 = 0;
            }

            byte var17 = var4;
            var4 += 8;
            var9 = var6.substring(var17, var4).getBytes("ISO-8859-1");
            var15 = var8;
            var10001 = var5++;
            var18 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var20 = 0;
         }
      }
   }

   public static float aYh() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fX.vDBBc J
      // 03: ldc2_w 109783235321343
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/fX.aYu ()[I
      // 0b: astore 2
      // 0c: invokestatic sixtwo/fX.aYe ()Z
      // 0f: aload 2
      // 10: ifnull 28
      // 13: ifeq 25
      // 16: goto 1d
      // 19: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: invokestatic sixtwo/fX.aYk ()F
      // 20: freturn
      // 21: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: invokestatic sixtwo/fX.aYf ()Z
      // 28: ifeq 33
      // 2b: invokestatic sixtwo/fX.aYi ()F
      // 2e: freturn
      // 2f: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: invokestatic sixtwo/fX.aYj ()F
      // 36: freturn
   }

   public static int[] aYu() {
      return CgnEr;
   }

   @Override
   public void YO() {
      this.baa(true);
   }

   @hG
   public void aYc(gA param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fX.vDBBc J
      // 03: ldc2_w 60671378779787
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fX.aYu ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/fX.bab ()Z
      // 11: aload 4
      // 13: ifnull 25
      // 16: ifne 21
      // 19: goto 20
      // 1c: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: aload 1
      // 22: invokevirtual sixtwo/gA.bbQ ()I
      // 25: bipush 1
      // 26: if_icmpeq 2e
      // 29: return
      // 2a: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 31: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 34: ifnonnull 69
      // 37: aload 1
      // 38: invokevirtual sixtwo/gA.bbP ()I
      // 3b: aload 4
      // 3d: ifnull 63
      // 40: goto 47
      // 43: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 0
      // 48: getfield sixtwo/fX.jGdAR Lsixtwo/cD;
      // 4b: invokevirtual sixtwo/cD.VP ()I
      // 4e: if_icmpne 69
      // 51: goto 58
      // 54: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: aload 0
      // 59: invokevirtual sixtwo/fX.aYd ()Z
      // 5c: goto 63
      // 5f: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: ifne 69
      // 66: invokestatic sixtwo/bD.LD ()V
      // 69: return
   }

   private static MatchException aYv(MatchException var0) {
      return var0;
   }

   public static boolean aYe() {
      return aYl().aYn().SQ(0);
   }

   public static float aYk() {
      return 0.2F;
   }

   public cu aYo() {
      return this.hltCm;
   }

   public cu aYp() {
      return this.OzuKt;
   }

   public cI aYr() {
      return this.HevkM;
   }

   public static void aYt(int[] var0) {
      CgnEr = var0;
   }

   private static int aYw(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 20429;
      if (vnJEn[var3] == null) {
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
         long var5 = mKhNu[var3];
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
         Object[] var9 = (Object[])yuueo.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               yuueo.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/fX", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         vnJEn[var3] = var15;
      }

      return vnJEn[var3];
   }

   public static float aYj() {
      return 0.85F;
   }

   public static boolean aYg() {
      return aYl().aYn().SQ(2);
   }

   private static CallSite aYy(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aYx".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/fX" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public cu aYq() {
      return this.seKrG;
   }

   private static int aYx(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aYw(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static fX aYl() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fX.vDBBc J
      // 03: ldc2_w 60529288440918
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/fX.aYu ()[I
      // 0b: astore 2
      // 0c: getstatic sixtwo/fX.JUwUO Lsixtwo/fX;
      // 0f: aload 2
      // 10: ifnull 35
      // 13: ifnonnull 32
      // 16: goto 1d
      // 19: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 20: ldc sixtwo/fX
      // 22: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 25: checkcast sixtwo/fX
      // 28: putstatic sixtwo/fX.JUwUO Lsixtwo/fX;
      // 2b: goto 32
      // 2e: invokestatic sixtwo/fX.aYv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: getstatic sixtwo/fX.JUwUO Lsixtwo/fX;
      // 35: areturn
   }

   private boolean aYd() {
      long var1 = vDBBc ^ 12646757149866L;
      return rr.diY(aYy<"u">(7549, 5253537402481519930L ^ var1));
   }

   public ct aYn() {
      return this.nJAFn;
   }

   public static boolean aYf() {
      return aYl().aYn().SQ(1);
   }

   public static float aYi() {
      return 0.75F;
   }

   public cD aYm() {
      return this.jGdAR;
   }
}
