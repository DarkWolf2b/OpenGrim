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
import net.minecraft.class_2586;
import net.minecraft.class_2680;

public class dG extends gg {
   private final cv gMmLp;
   private final cw DsCRe;
   private final cw gpExe;
   private final cw ZJUtT;
   private final cw tXJgP;
   private final cw IJUZj;
   private final cw WygqV;
   private final cw lejDU;
   private final cw LGsCc;
   private final cw TNPUn;
   private static final long nALOH = gb.aYR(-647804287976443572L, 5813691354337543833L, MethodHandles.lookup().lookupClass()).a(33225061346093L);
   private static final long[] nmNyF;
   private static final Integer[] CelqF;
   private static final Map zJQww = new HashMap(13);

   @hG
   public void als(hf var1) {
      class_2586 var2 = var1.bcy();
      var1.bdX(this.alw(var2));
   }

   public dG() {
      long var1 = nALOH ^ 36991065533471L;
      super(gf.aZL(alB<"x">(31367, 3602436794897599456L ^ var1), false, gh.qBzlZ));
      this.gMmLp = new cv(
         this,
         mr.clS(
            new int[]{
               alB<"x">(12127, 8819075887631326764L ^ var1),
               alB<"x">(28431, 2644901743164333684L ^ var1),
               alB<"x">(30691, 8874045168319301290L ^ var1),
               alB<"x">(523, 1082550340893012862L ^ var1)
            }
         )
      );
      cv var10003 = this.gMmLp;
      int[] var10004 = new int[alB<"x">(7751, 6918975479012945707L ^ var1)];
      var10004[0] = alB<"x">(102, 7302121426257768735L ^ var1);
      var10004[1] = alB<"x">(17584, 4862091004601873888L ^ var1);
      var10004[2] = alB<"x">(15391, 630362974521314658L ^ var1);
      var10004[3] = alB<"x">(9123, 47636186094686925L ^ var1);
      var10004[4] = alB<"x">(13162, 6983000924055290373L ^ var1);
      var10004[5] = alB<"x">(15391, 630362974521314658L ^ var1);
      var10004[alB<"x">(13423, 4245045382796231989L ^ var1)] = alB<"x">(6587, 8806001171101837505L ^ var1);
      var10004[alB<"x">(13374, 506399519853430102L ^ var1)] = alB<"x">(18986, 246934131093977942L ^ var1);
      var10004[alB<"x">(16072, 6101646000895250341L ^ var1)] = alB<"x">(23629, 6610099548436802826L ^ var1);
      this.DsCRe = new cw(var10003, mr.clS(var10004)).Tz();
      this.gpExe = new cw(
            this.gMmLp,
            mr.clS(
               new int[]{
                  alB<"x">(11893, 3792248260220673805L ^ var1),
                  alB<"x">(15391, 630362974521314658L ^ var1),
                  alB<"x">(14127, 846745945512789573L ^ var1),
                  alB<"x">(6587, 8806001171101837505L ^ var1),
                  alB<"x">(449, 576951078393573514L ^ var1)
               }
            )
         )
         .Tz();
      var10003 = this.gMmLp;
      var10004 = new int[alB<"x">(3807, 7808715367391952784L ^ var1)];
      var10004[0] = alB<"x">(3261, 2369883140025843195L ^ var1);
      var10004[1] = alB<"x">(14807, 4054092652177180811L ^ var1);
      var10004[2] = alB<"x">(27271, 5443310701479369713L ^ var1);
      var10004[3] = alB<"x">(27271, 5443310701479369713L ^ var1);
      var10004[4] = alB<"x">(10282, 7591940633516792190L ^ var1);
      var10004[5] = alB<"x">(6587, 8806001171101837505L ^ var1);
      var10004[alB<"x">(14146, 5663673025745438262L ^ var1)] = alB<"x">(449, 576951078393573514L ^ var1);
      this.ZJUtT = new cw(var10003, mr.clS(var10004));
      var10003 = this.gMmLp;
      var10004 = new int[alB<"x">(14146, 5663673025745438262L ^ var1)];
      var10004[0] = alB<"x">(19261, 9003192446462442084L ^ var1);
      var10004[1] = alB<"x">(6485, 8329865286898771988L ^ var1);
      var10004[2] = alB<"x">(7997, 4334418219722468960L ^ var1);
      var10004[3] = alB<"x">(6485, 8329865286898771988L ^ var1);
      var10004[4] = alB<"x">(4440, 8009031523626410010L ^ var1);
      var10004[5] = alB<"x">(449, 576951078393573514L ^ var1);
      this.tXJgP = new cw(var10003, mr.clS(var10004));
      var10003 = this.gMmLp;
      var10004 = new int[alB<"x">(3807, 7808715367391952784L ^ var1)];
      var10004[0] = alB<"x">(12960, 2267052740179215355L ^ var1);
      var10004[1] = alB<"x">(1265, 7279733629628904895L ^ var1);
      var10004[2] = alB<"x">(6587, 8806001171101837505L ^ var1);
      var10004[3] = alB<"x">(6587, 8806001171101837505L ^ var1);
      var10004[4] = alB<"x">(6485, 8329865286898771988L ^ var1);
      var10004[5] = alB<"x">(3204, 399077390774926788L ^ var1);
      var10004[alB<"x">(14146, 5663673025745438262L ^ var1)] = alB<"x">(449, 576951078393573514L ^ var1);
      this.IJUZj = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.gMmLp;
      var10004 = new int[alB<"x">(27196, 3687432349162150722L ^ var1)];
      var10004[0] = alB<"x">(23402, 6135691228030085685L ^ var1);
      var10004[1] = alB<"x">(3204, 399077390774926788L ^ var1);
      var10004[2] = alB<"x">(16944, 6220012275050001255L ^ var1);
      var10004[3] = alB<"x">(3026, 73556786214632087L ^ var1);
      var10004[4] = alB<"x">(3204, 399077390774926788L ^ var1);
      var10004[5] = alB<"x">(9305, 6941247695035487548L ^ var1);
      var10004[alB<"x">(14146, 5663673025745438262L ^ var1)] = alB<"x">(29946, 5843931673373967780L ^ var1);
      var10004[alB<"x">(3807, 7808715367391952784L ^ var1)] = alB<"x">(27271, 5443310701479369713L ^ var1);
      var10004[alB<"x">(12892, 7570422402530853654L ^ var1)] = alB<"x">(1265, 7279733629628904895L ^ var1);
      var10004[alB<"x">(23349, 7685705188084886118L ^ var1)] = alB<"x">(6587, 8806001171101837505L ^ var1);
      var10004[alB<"x">(16828, 4716201407178617087L ^ var1)] = alB<"x">(17445, 5356598816102888771L ^ var1);
      var10004[alB<"x">(20058, 2850714151307853627L ^ var1)] = alB<"x">(449, 576951078393573514L ^ var1);
      this.WygqV = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.gMmLp;
      var10004 = new int[alB<"x">(23349, 7685705188084886118L ^ var1)];
      var10004[0] = alB<"x">(17110, 103507647266501567L ^ var1);
      var10004[1] = alB<"x">(15391, 630362974521314658L ^ var1);
      var10004[2] = alB<"x">(6587, 8806001171101837505L ^ var1);
      var10004[3] = alB<"x">(6485, 8329865286898771988L ^ var1);
      var10004[4] = alB<"x">(3503, 2125529685188934872L ^ var1);
      var10004[5] = alB<"x">(1265, 7279733629628904895L ^ var1);
      var10004[alB<"x">(14146, 5663673025745438262L ^ var1)] = alB<"x">(3204, 399077390774926788L ^ var1);
      var10004[alB<"x">(3807, 7808715367391952784L ^ var1)] = alB<"x">(27271, 5443310701479369713L ^ var1);
      var10004[alB<"x">(12892, 7570422402530853654L ^ var1)] = alB<"x">(449, 576951078393573514L ^ var1);
      this.lejDU = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.gMmLp;
      var10004 = new int[alB<"x">(15798, 4792816407415409862L ^ var1)];
      var10004[0] = alB<"x">(24699, 2984012076805165358L ^ var1);
      var10004[1] = alB<"x">(1265, 7279733629628904895L ^ var1);
      var10004[2] = alB<"x">(16505, 132652411692921121L ^ var1);
      var10004[3] = alB<"x">(11669, 5593495114827586801L ^ var1);
      var10004[4] = alB<"x">(15391, 630362974521314658L ^ var1);
      var10004[5] = alB<"x">(6587, 8806001171101837505L ^ var1);
      var10004[alB<"x">(14146, 5663673025745438262L ^ var1)] = alB<"x">(14127, 846745945512789573L ^ var1);
      var10004[alB<"x">(3807, 7808715367391952784L ^ var1)] = alB<"x">(16446, 7287263390747308373L ^ var1);
      var10004[alB<"x">(12892, 7570422402530853654L ^ var1)] = alB<"x">(12960, 2267052740179215355L ^ var1);
      var10004[alB<"x">(23349, 7685705188084886118L ^ var1)] = alB<"x">(11669, 5593495114827586801L ^ var1);
      var10004[alB<"x">(5622, 8954934742138643616L ^ var1)] = alB<"x">(3026, 73556786214632087L ^ var1);
      var10004[alB<"x">(17551, 6715205812779005424L ^ var1)] = alB<"x">(27800, 2332037553609842132L ^ var1);
      var10004[alB<"x">(12509, 4597078996951024015L ^ var1)] = alB<"x">(6876, 5753455182434528148L ^ var1);
      var10004[alB<"x">(29157, 4804279449993380001L ^ var1)] = alB<"x">(449, 576951078393573514L ^ var1);
      this.LGsCc = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.gMmLp;
      var10004 = new int[alB<"x">(18885, 4131087165343316133L ^ var1)];
      var10004[0] = alB<"x">(3897, 2093310699965120075L ^ var1);
      var10004[1] = alB<"x">(6485, 8329865286898771988L ^ var1);
      var10004[2] = alB<"x">(27800, 2332037553609842132L ^ var1);
      var10004[3] = alB<"x">(3026, 73556786214632087L ^ var1);
      var10004[4] = alB<"x">(3204, 399077390774926788L ^ var1);
      var10004[5] = alB<"x">(1265, 7279733629628904895L ^ var1);
      var10004[alB<"x">(14146, 5663673025745438262L ^ var1)] = alB<"x">(27271, 5443310701479369713L ^ var1);
      var10004[alB<"x">(3807, 7808715367391952784L ^ var1)] = alB<"x">(15391, 630362974521314658L ^ var1);
      var10004[alB<"x">(12892, 7570422402530853654L ^ var1)] = alB<"x">(3026, 73556786214632087L ^ var1);
      var10004[alB<"x">(23349, 7685705188084886118L ^ var1)] = alB<"x">(6587, 8806001171101837505L ^ var1);
      var10004[alB<"x">(5622, 8954934742138643616L ^ var1)] = alB<"x">(16446, 7287263390747308373L ^ var1);
      var10004[alB<"x">(17551, 6715205812779005424L ^ var1)] = alB<"x">(31399, 3479636412290206678L ^ var1);
      var10004[alB<"x">(12509, 4597078996951024015L ^ var1)] = alB<"x">(3026, 73556786214632087L ^ var1);
      var10004[alB<"x">(17000, 8531413236244722489L ^ var1)] = alB<"x">(27271, 5443310701479369713L ^ var1);
      var10004[alB<"x">(24212, 4723537642296946649L ^ var1)] = alB<"x">(449, 576951078393573514L ^ var1);
      this.TNPUn = new cw(var10003, mr.clS(var10004));
      this.gMmLp.Vd(ja::byJ);
   }

   static {
      long var0 = nALOH ^ 10961117698119L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[62];
      int var5 = 0;
      String var6 = "┬«<k├▓L\u0001>\u009a6┬ź├│!\u001e6*%┬ž7├Ź├Ą\f\u0015├âoZ├╣├Ś\u0015├Ĺ├Żv├Ł┬╝w┬╝G\u008a┬▒┬ą&┬¬nv┬Ą\u0098\u008b\u001c├Á┬á\u009a\u0000 \u001e├áLJ{)├á3\u0019\u0016├░c^Q\\A├ô┬ód\u001c├░'├Ź├č\u0095\u001e\u001e\u008e┬Ž\u0007├¬\u0086[├Ş\u0084├╗9\u0094┬ÂB├Â├Ż}┬»a\u001a\r┬╣\u0095n├ó\nz\u001e├Ż@├┐'/j├Ç\u001b├ąwq,P├»┬│├â\u0096├ô\t+l├ë;┬╗o┬Á├┐2m\u0099├ć%\u0013A\u009c┬ó_x├»n\u0000┬ą├┐\u009a\u000f\u0098A\r├Ć├Ľ├áY\u00941├ůr├ů\u000b├öa\u0093┬▓┬▒\f\u0087\u009f\u0000┬Č┬í├ë\u0090\u0015┬│┬║├Ö\u0093N├«┬»├║pX\u009c\u0092xI├ŐB!\u008b6├ž┬╣\u001a\u008a\r\u0004├ô┬ú\u0080├Ć\u0018├îod┬ę┬Ż|├▓\u0089\u001d\u008b├ä|\u008d├Ü\u001a┬Č├ż^\u0003\u00054┬░_├╗├Ćp┬┐┬│├ż├¬┬┐V\u0083+s├Ź┬ź├ůvB├Ľ├ž\u00ad┬▒/├Ö\u001e┬Ş\u0014├¬//\u009d\u0089\u009dX├č┬¬┬░\u009b├╝┬Č\u008b├Ť\u009bfg\f├Â├║├ő\u0082\"├ś/:\u0016\r\u0003V }├╝R├║┬Ż6├┤/#>├Ä┬żu┬Şv┬Ş┬╝┬«┬áe├║5}F\u0096y├«\n\u0004<~┬ŽE\u0005/e\u008b├Ę\u0019Z┬Ę├Ćm\u009d├│├Ü\u0094\u008es┬Á├Â├ä├ĽI<┬║H\u0016├í>├Ő┬Ą┬áz├ĺ├ľ├Ť\u009c├áUH├┤\u0006┬║x├ő\u0012┬ż┬▒┬╣\u0002├│\u0086\u0095N\u0090i┬│\u008fH0┬╝├«\u0082.├ĺ-\u0005?├ő┬░├ŐM\u001a\u0087\u001c├Á┬«\u0096\"+\u0015\u0011\u0011├ž7┬Ě\u0086P├ć\u0005┬ę&├ó\u009e├ę3\u0088+4├▒a\u0089├á├ÄmR\u0089├ę├║G6├á9├äKtP├Ťr~\u009f:\b┬í3\u0090├â\u0082├«t=>\u008d┬╗\u0013┬║\rw├áK┬ąvf\u001e┬á\u0000\u001dw├ź\u00ad\\hz├Ź\u009d├Ö7├ő┬┐l";
      int var7 = "┬«<k├▓L\u0001>\u009a6┬ź├│!\u001e6*%┬ž7├Ź├Ą\f\u0015├âoZ├╣├Ś\u0015├Ĺ├Żv├Ł┬╝w┬╝G\u008a┬▒┬ą&┬¬nv┬Ą\u0098\u008b\u001c├Á┬á\u009a\u0000 \u001e├áLJ{)├á3\u0019\u0016├░c^Q\\A├ô┬ód\u001c├░'├Ź├č\u0095\u001e\u001e\u008e┬Ž\u0007├¬\u0086[├Ş\u0084├╗9\u0094┬ÂB├Â├Ż}┬»a\u001a\r┬╣\u0095n├ó\nz\u001e├Ż@├┐'/j├Ç\u001b├ąwq,P├»┬│├â\u0096├ô\t+l├ë;┬╗o┬Á├┐2m\u0099├ć%\u0013A\u009c┬ó_x├»n\u0000┬ą├┐\u009a\u000f\u0098A\r├Ć├Ľ├áY\u00941├ůr├ů\u000b├öa\u0093┬▓┬▒\f\u0087\u009f\u0000┬Č┬í├ë\u0090\u0015┬│┬║├Ö\u0093N├«┬»├║pX\u009c\u0092xI├ŐB!\u008b6├ž┬╣\u001a\u008a\r\u0004├ô┬ú\u0080├Ć\u0018├îod┬ę┬Ż|├▓\u0089\u001d\u008b├ä|\u008d├Ü\u001a┬Č├ż^\u0003\u00054┬░_├╗├Ćp┬┐┬│├ż├¬┬┐V\u0083+s├Ź┬ź├ůvB├Ľ├ž\u00ad┬▒/├Ö\u001e┬Ş\u0014├¬//\u009d\u0089\u009dX├č┬¬┬░\u009b├╝┬Č\u008b├Ť\u009bfg\f├Â├║├ő\u0082\"├ś/:\u0016\r\u0003V }├╝R├║┬Ż6├┤/#>├Ä┬żu┬Şv┬Ş┬╝┬«┬áe├║5}F\u0096y├«\n\u0004<~┬ŽE\u0005/e\u008b├Ę\u0019Z┬Ę├Ćm\u009d├│├Ü\u0094\u008es┬Á├Â├ä├ĽI<┬║H\u0016├í>├Ő┬Ą┬áz├ĺ├ľ├Ť\u009c├áUH├┤\u0006┬║x├ő\u0012┬ż┬▒┬╣\u0002├│\u0086\u0095N\u0090i┬│\u008fH0┬╝├«\u0082.├ĺ-\u0005?├ő┬░├ŐM\u001a\u0087\u001c├Á┬«\u0096\"+\u0015\u0011\u0011├ž7┬Ě\u0086P├ć\u0005┬ę&├ó\u009e├ę3\u0088+4├▒a\u0089├á├ÄmR\u0089├ę├║G6├á9├äKtP├Ťr~\u009f:\b┬í3\u0090├â\u0082├«t=>\u008d┬╗\u0013┬║\rw├áK┬ąvf\u001e┬á\u0000\u001dw├ź\u00ad\\hz├Ź\u009d├Ö7├ő┬┐l"
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
                     nmNyF = var8;
                     CelqF = new Integer[62];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "┬▒>V\u001fZ#├┤├ż'H├▓├ę;┬ż;├ť";
                  var7 = "┬▒>V\u001fZ#├┤├ż'H├▓├ę;┬ż;├ť".length();
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

   @hG
   public void alt(hl var1) {
      class_1297 var2 = var1.bcM();
      var1.bdX(this.alv(var2));
   }

   @Override
   public void aaj() {
      super.aaj();
      ja.byJ();
   }

   private static CallSite alB(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("alA".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dG" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @hG
   public void alr(gr var1) {
      long var2 = nALOH ^ 71870053498310L;

      try {
         if (this.alx(var1.bbr())) {
            var1.bdX(true);
         }
      } catch (MatchException var4) {
         throw aly(var4);
      }
   }

   @hG
   public void alu(hm param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dG.nALOH J
      // 03: ldc2_w 87251768222164
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 4
      // 0f: ifnonnull 30
      // 12: aload 0
      // 13: aload 1
      // 14: invokevirtual sixtwo/hm.bcN ()Lnet/minecraft/class_2680;
      // 17: invokevirtual sixtwo/dG.alx (Lnet/minecraft/class_2680;)Z
      // 1a: ifeq 37
      // 1d: goto 24
      // 20: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 1
      // 25: bipush 1
      // 26: invokevirtual sixtwo/hm.bdX (Z)V
      // 29: goto 30
      // 2c: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: aload 1
      // 31: invokestatic net/minecraft/class_259.method_1073 ()Lnet/minecraft/class_265;
      // 34: invokevirtual sixtwo/hm.bcS (Lnet/minecraft/class_265;)V
      // 37: return
   }

   private static int alA(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = alz(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private boolean alv(class_1297 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dG.nALOH J
      // 03: ldc2_w 61148512635923
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/dG.DsCRe Lsixtwo/cw;
      // 11: invokevirtual sixtwo/cw.TC ()Z
      // 14: aload 4
      // 16: ifnonnull 4a
      // 19: ifeq 43
      // 1c: goto 23
      // 1f: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 1
      // 24: instanceof net/minecraft/class_1530
      // 27: aload 4
      // 29: ifnonnull 4a
      // 2c: goto 33
      // 2f: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: ifeq 43
      // 36: goto 3d
      // 39: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: bipush 1
      // 3e: ireturn
      // 3f: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 0
      // 44: getfield sixtwo/dG.WygqV Lsixtwo/cw;
      // 47: invokevirtual sixtwo/cw.TC ()Z
      // 4a: aload 4
      // 4c: ifnonnull 80
      // 4f: ifeq 79
      // 52: goto 59
      // 55: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 58: athrow
      // 59: aload 1
      // 5a: instanceof net/minecraft/class_1531
      // 5d: aload 4
      // 5f: ifnonnull 80
      // 62: goto 69
      // 65: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: ifeq 79
      // 6c: goto 73
      // 6f: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: bipush 1
      // 74: ireturn
      // 75: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: aload 0
      // 7a: getfield sixtwo/dG.lejDU Lsixtwo/cw;
      // 7d: invokevirtual sixtwo/cw.TC ()Z
      // 80: aload 4
      // 82: ifnonnull b6
      // 85: ifeq af
      // 88: goto 8f
      // 8b: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8e: athrow
      // 8f: aload 1
      // 90: instanceof net/minecraft/class_1688
      // 93: aload 4
      // 95: ifnonnull b6
      // 98: goto 9f
      // 9b: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9e: athrow
      // 9f: ifeq af
      // a2: goto a9
      // a5: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a8: athrow
      // a9: bipush 1
      // aa: ireturn
      // ab: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ae: athrow
      // af: aload 0
      // b0: getfield sixtwo/dG.LGsCc Lsixtwo/cw;
      // b3: invokevirtual sixtwo/cw.TC ()Z
      // b6: aload 4
      // b8: ifnonnull e6
      // bb: ifeq e5
      // be: goto c5
      // c1: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c4: athrow
      // c5: aload 1
      // c6: instanceof net/minecraft/class_1540
      // c9: aload 4
      // cb: ifnonnull e6
      // ce: goto d5
      // d1: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d4: athrow
      // d5: ifeq e5
      // d8: goto df
      // db: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // de: athrow
      // df: bipush 1
      // e0: ireturn
      // e1: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e4: athrow
      // e5: bipush 0
      // e6: ireturn
   }

   private static int alz(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 27900;
      if (CelqF[var3] == null) {
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
         long var5 = nmNyF[var3];
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
         Object[] var9 = (Object[])zJQww.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               zJQww.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dG", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         CelqF[var3] = var15;
      }

      return CelqF[var3];
   }

   public boolean alx(class_2680 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dG.nALOH J
      // 003: ldc2_w 16928073544028
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ee.arS ()[I
      // 00b: aload 1
      // 00c: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 00f: astore 5
      // 011: astore 4
      // 013: aload 0
      // 014: getfield sixtwo/dG.gpExe Lsixtwo/cw;
      // 017: invokevirtual sixtwo/cw.TC ()Z
      // 01a: aload 4
      // 01c: ifnonnull 051
      // 01f: ifeq 04a
      // 022: goto 029
      // 025: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 028: athrow
      // 029: aload 5
      // 02b: instanceof net/minecraft/class_2478
      // 02e: aload 4
      // 030: ifnonnull 051
      // 033: goto 03a
      // 036: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: ifeq 04a
      // 03d: goto 044
      // 040: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 043: athrow
      // 044: bipush 1
      // 045: ireturn
      // 046: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 049: athrow
      // 04a: aload 0
      // 04b: getfield sixtwo/dG.IJUZj Lsixtwo/cw;
      // 04e: invokevirtual sixtwo/cw.TC ()Z
      // 051: aload 4
      // 053: ifnonnull 088
      // 056: ifeq 081
      // 059: goto 060
      // 05c: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05f: athrow
      // 060: aload 5
      // 062: instanceof net/minecraft/class_2185
      // 065: aload 4
      // 067: ifnonnull 088
      // 06a: goto 071
      // 06d: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 070: athrow
      // 071: ifeq 081
      // 074: goto 07b
      // 077: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07a: athrow
      // 07b: bipush 1
      // 07c: ireturn
      // 07d: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 080: athrow
      // 081: aload 0
      // 082: getfield sixtwo/dG.tXJgP Lsixtwo/cw;
      // 085: invokevirtual sixtwo/cw.TC ()Z
      // 088: aload 4
      // 08a: ifnonnull 0bf
      // 08d: ifeq 0b8
      // 090: goto 097
      // 093: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 096: athrow
      // 097: aload 5
      // 099: instanceof net/minecraft/class_2401
      // 09c: aload 4
      // 09e: ifnonnull 0bf
      // 0a1: goto 0a8
      // 0a4: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a7: athrow
      // 0a8: ifeq 0b8
      // 0ab: goto 0b2
      // 0ae: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b1: athrow
      // 0b2: bipush 1
      // 0b3: ireturn
      // 0b4: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b7: athrow
      // 0b8: aload 0
      // 0b9: getfield sixtwo/dG.ZJUtT Lsixtwo/cw;
      // 0bc: invokevirtual sixtwo/cw.TC ()Z
      // 0bf: aload 4
      // 0c1: ifnonnull 0f6
      // 0c4: ifeq 0ef
      // 0c7: goto 0ce
      // 0ca: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cd: athrow
      // 0ce: aload 5
      // 0d0: instanceof net/minecraft/class_2269
      // 0d3: aload 4
      // 0d5: ifnonnull 0f6
      // 0d8: goto 0df
      // 0db: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0de: athrow
      // 0df: ifeq 0ef
      // 0e2: goto 0e9
      // 0e5: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e8: athrow
      // 0e9: bipush 1
      // 0ea: ireturn
      // 0eb: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ee: athrow
      // 0ef: aload 0
      // 0f0: getfield sixtwo/dG.TNPUn Lsixtwo/cw;
      // 0f3: invokevirtual sixtwo/cw.TC ()Z
      // 0f6: aload 4
      // 0f8: ifnonnull 127
      // 0fb: ifeq 126
      // 0fe: goto 105
      // 101: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 104: athrow
      // 105: aload 5
      // 107: instanceof net/minecraft/class_8168
      // 10a: aload 4
      // 10c: ifnonnull 127
      // 10f: goto 116
      // 112: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 115: athrow
      // 116: ifeq 126
      // 119: goto 120
      // 11c: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11f: athrow
      // 120: bipush 1
      // 121: ireturn
      // 122: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 125: athrow
      // 126: bipush 0
      // 127: ireturn
   }

   @hG
   public void alq(he var1) {
      class_1297 var2 = var1.bcx();
      var1.bdX(this.alv(var2));
   }

   private static MatchException aly(MatchException var0) {
      return var0;
   }

   private boolean alw(class_2586 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dG.nALOH J
      // 03: ldc2_w 112037664997289
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/dG.gpExe Lsixtwo/cw;
      // 11: invokevirtual sixtwo/cw.TC ()Z
      // 14: aload 4
      // 16: ifnonnull 4a
      // 19: ifeq 43
      // 1c: goto 23
      // 1f: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 1
      // 24: instanceof net/minecraft/class_2625
      // 27: aload 4
      // 29: ifnonnull 4a
      // 2c: goto 33
      // 2f: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: ifeq 43
      // 36: goto 3d
      // 39: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: bipush 1
      // 3e: ireturn
      // 3f: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 0
      // 44: getfield sixtwo/dG.IJUZj Lsixtwo/cw;
      // 47: invokevirtual sixtwo/cw.TC ()Z
      // 4a: aload 4
      // 4c: ifnonnull 7a
      // 4f: ifeq 79
      // 52: goto 59
      // 55: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 58: athrow
      // 59: aload 1
      // 5a: instanceof net/minecraft/class_2573
      // 5d: aload 4
      // 5f: ifnonnull 7a
      // 62: goto 69
      // 65: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: ifeq 79
      // 6c: goto 73
      // 6f: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: bipush 1
      // 74: ireturn
      // 75: invokestatic sixtwo/dG.aly (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: bipush 0
      // 7a: ireturn
   }

   @Override
   public void YO() {
      super.YO();
      ja.byJ();
   }
}
