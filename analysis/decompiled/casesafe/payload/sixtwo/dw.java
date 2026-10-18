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
import net.minecraft.class_1044;
import net.minecraft.class_1297;
import net.minecraft.class_1299;
import net.minecraft.class_243;
import net.minecraft.class_4587;

public class dw extends gg {
   private final cF ZIRir;
   private final cJ DVJWE;
   private final cC RPJuT;
   private final cC zqiDq;
   private final cG xeAup;
   private final ct OrinU;
   private final cu CkUcI;
   private final cu ZTyjv;
   private final cy DRApN;
   private final ct JxSnN;
   private final cu GLHXM;
   private final cu eSXTX;
   private final cJ CIvYl;
   private final mT WHKNh;
   private class_1044 pjPhF;
   private String GViCt;
   private static final long gqfIk = gb.aYR(2033088185607127675L, 2682329882007313000L, MethodHandles.lookup().lookupClass()).a(98852061267588L);
   private static final String[] xFYqD;
   private static final String[] jzQfA;
   private static final Map vAoCj = new HashMap(13);
   private static final long[] GENnk;
   private static final Integer[] ezWXb;
   private static final Map gFGcY;
   private static final long[] FjxvB;
   private static final Long[] mkXFq;
   private static final Map VJtHn;

   public dw() {
      long var1 = gqfIk ^ 92264036022168L;
      super(gf.aZL(ajg<"s">(14257, 1746962796606869149L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[ajg<"s">(17480, 4933290295636049265L ^ var1)];
      var10004[0] = ajg<"s">(8994, 5427256235453012508L ^ var1);
      var10004[1] = ajg<"s">(19644, 6833787933326390659L ^ var1);
      var10004[2] = ajg<"s">(13297, 4211042874815695514L ^ var1);
      var10004[3] = ajg<"s">(29421, 1839006788128345050L ^ var1);
      var10004[4] = ajg<"s">(17369, 333769036540590817L ^ var1);
      var10004[5] = ajg<"s">(24115, 5894876271686068014L ^ var1);
      var10004[ajg<"s">(28741, 8302430228122110304L ^ var1)] = ajg<"s">(12180, 5442923172856092306L ^ var1);
      var10004[ajg<"s">(23068, 2351037671092855597L ^ var1)] = ajg<"s">(23098, 3146801065344049929L ^ var1);
      this.ZIRir = new cF(this, mr.clS(var10004)).VS(jg$tJ.OCdZM).VT(class_1299.field_6052);
      var10004 = new int[ajg<"s">(3395, 4657822434172499011L ^ var1)];
      var10004[0] = ajg<"s">(26161, 6366403577550806811L ^ var1);
      var10004[1] = ajg<"s">(15801, 4359495590705743027L ^ var1);
      var10004[2] = ajg<"s">(24115, 5894876271686068014L ^ var1);
      var10004[3] = ajg<"s">(5117, 3389849098217843426L ^ var1);
      var10004[4] = ajg<"s">(24270, 4655904033927243759L ^ var1);
      var10004[5] = ajg<"s">(17369, 333769036540590817L ^ var1);
      var10004[ajg<"s">(7661, 7033049336161330390L ^ var1)] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[ajg<"s">(19759, 6403231523365729291L ^ var1)] = ajg<"s">(25486, 8791450234871814802L ^ var1);
      this.DVJWE = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[ajg<"s">(11813, 1791668323019544343L ^ var1)];
      var10004[0] = ajg<"s">(16811, 4273415099736537252L ^ var1);
      var10004[1] = ajg<"s">(24115, 5894876271686068014L ^ var1);
      var10004[2] = ajg<"s">(10276, 2781026406860640532L ^ var1);
      var10004[3] = ajg<"s">(11674, 8949317279139681459L ^ var1);
      var10004[4] = ajg<"s">(4687, 3797581024177122132L ^ var1);
      var10004[5] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[ajg<"s">(7661, 7033049336161330390L ^ var1)] = ajg<"s">(24913, 5473084800568694899L ^ var1);
      var10004[ajg<"s">(19759, 6403231523365729291L ^ var1)] = ajg<"s">(19939, 1083832996495996149L ^ var1);
      var10004[ajg<"s">(3395, 4657822434172499011L ^ var1)] = ajg<"s">(3519, 6575935768910787723L ^ var1);
      var10004[ajg<"s">(2919, 3841432620274086413L ^ var1)] = ajg<"s">(21071, 7696484529041288010L ^ var1);
      var10004[ajg<"s">(36, 7035277371345500465L ^ var1)] = ajg<"s">(9306, 6721748423293492602L ^ var1);
      var10004[ajg<"s">(23629, 1695908870242084175L ^ var1)] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      this.RPJuT = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(0.5).Vx(5.0).VA(1.0);
      this.zqiDq = new cC(
            this,
            mr.clS(
               new int[]{
                  ajg<"s">(23067, 863818514626093876L ^ var1),
                  ajg<"s">(18452, 753126199839437107L ^ var1),
                  ajg<"s">(30117, 5703798962534321286L ^ var1),
                  ajg<"s">(30117, 5703798962534321286L ^ var1),
                  ajg<"s">(25621, 8728989472432004367L ^ var1)
               }
            )
         )
         .Vy(1.0)
         .Vw(10.0)
         .Vx(40.0)
         .VA(20.0);
      this.xeAup = new cG(
            this,
            mr.clS(
               new int[]{
                  ajg<"s">(29605, 2828150349555370667L ^ var1),
                  ajg<"s">(23295, 290099313840628732L ^ var1),
                  ajg<"s">(9306, 6721748423293492602L ^ var1),
                  ajg<"s">(23200, 1920625521500660621L ^ var1),
                  ajg<"s">(20022, 6558674373291390758L ^ var1)
               }
            )
         )
         .Uf(rD.dlM().bjG().bis());
      var10004 = new int[ajg<"s">(10236, 4676944912059916021L ^ var1)];
      var10004[0] = ajg<"s">(29605, 2828150349555370667L ^ var1);
      var10004[1] = ajg<"s">(24115, 5894876271686068014L ^ var1);
      var10004[2] = ajg<"s">(20022, 6558674373291390758L ^ var1);
      var10004[3] = ajg<"s">(3519, 6575935768910787723L ^ var1);
      var10004[4] = ajg<"s">(9306, 6721748423293492602L ^ var1);
      var10004[5] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[ajg<"s">(7661, 7033049336161330390L ^ var1)] = ajg<"s">(14430, 2892547477605007728L ^ var1);
      var10004[ajg<"s">(19759, 6403231523365729291L ^ var1)] = ajg<"s">(26836, 1993790337309053369L ^ var1);
      var10004[ajg<"s">(3395, 4657822434172499011L ^ var1)] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[ajg<"s">(5982, 4191078119050309174L ^ var1)] = ajg<"s">(16406, 1019673230132492559L ^ var1);
      var10004[ajg<"s">(3044, 8430213618242941676L ^ var1)] = ajg<"s">(17369, 333769036540590817L ^ var1);
      var10004[ajg<"s">(2330, 9026555090330316814L ^ var1)] = ajg<"s">(5950, 4709133593280671243L ^ var1);
      var10004[ajg<"s">(23109, 6937505250005132125L ^ var1)] = ajg<"s">(20022, 6558674373291390758L ^ var1);
      var10004[ajg<"s">(5685, 6638879329047473954L ^ var1)] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      this.OrinU = new ct(this, mr.clS(var10004));
      ct var10003 = this.OrinU;
      var10004 = new int[ajg<"s">(19759, 6403231523365729291L ^ var1)];
      var10004[0] = ajg<"s">(16560, 7779459757559560611L ^ var1);
      var10004[1] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[2] = ajg<"s">(16019, 489369681749395381L ^ var1);
      var10004[3] = ajg<"s">(21071, 7696484529041288010L ^ var1);
      var10004[4] = ajg<"s">(19897, 1648240533652255889L ^ var1);
      var10004[5] = ajg<"s">(9306, 6721748423293492602L ^ var1);
      var10004[ajg<"s">(7661, 7033049336161330390L ^ var1)] = ajg<"s">(17369, 333769036540590817L ^ var1);
      this.CkUcI = new cu(var10003, mr.clS(var10004));
      var10003 = this.OrinU;
      var10004 = new int[ajg<"s">(7661, 7033049336161330390L ^ var1)];
      var10004[0] = ajg<"s">(29605, 2828150349555370667L ^ var1);
      var10004[1] = ajg<"s">(19897, 1648240533652255889L ^ var1);
      var10004[2] = ajg<"s">(8482, 1539404724113463334L ^ var1);
      var10004[3] = ajg<"s">(17369, 333769036540590817L ^ var1);
      var10004[4] = ajg<"s">(23200, 1920625521500660621L ^ var1);
      var10004[5] = ajg<"s">(27438, 4803715592324878868L ^ var1);
      this.ZTyjv = new cu(var10003, mr.clS(var10004));
      var10004 = new int[ajg<"s">(2330, 9026555090330316814L ^ var1)];
      var10004[0] = ajg<"s">(26836, 1993790337309053369L ^ var1);
      var10004[1] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[2] = ajg<"s">(18942, 8664023690896421107L ^ var1);
      var10004[3] = ajg<"s">(17369, 333769036540590817L ^ var1);
      var10004[4] = ajg<"s">(19897, 1648240533652255889L ^ var1);
      var10004[5] = ajg<"s">(20022, 6558674373291390758L ^ var1);
      var10004[ajg<"s">(7661, 7033049336161330390L ^ var1)] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[ajg<"s">(19759, 6403231523365729291L ^ var1)] = ajg<"s">(14430, 2892547477605007728L ^ var1);
      var10004[ajg<"s">(3395, 4657822434172499011L ^ var1)] = ajg<"s">(11475, 2217329731977696717L ^ var1);
      var10004[ajg<"s">(5982, 4191078119050309174L ^ var1)] = ajg<"s">(31675, 6003758381446038199L ^ var1);
      var10004[ajg<"s">(3044, 8430213618242941676L ^ var1)] = ajg<"s">(30636, 2687347863713124007L ^ var1);
      this.DRApN = new cy(this, mr.clS(var10004)).Un(ajg<"s">(2489, 7629151091787100350L ^ var1)).Up("");
      var10004 = new int[ajg<"s">(23109, 6937505250005132125L ^ var1)];
      var10004[0] = ajg<"s">(29605, 2828150349555370667L ^ var1);
      var10004[1] = ajg<"s">(24115, 5894876271686068014L ^ var1);
      var10004[2] = ajg<"s">(20022, 6558674373291390758L ^ var1);
      var10004[3] = ajg<"s">(3519, 6575935768910787723L ^ var1);
      var10004[4] = ajg<"s">(9306, 6721748423293492602L ^ var1);
      var10004[5] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[ajg<"s">(7661, 7033049336161330390L ^ var1)] = ajg<"s">(14430, 2892547477605007728L ^ var1);
      var10004[ajg<"s">(19759, 6403231523365729291L ^ var1)] = ajg<"s">(23067, 863818514626093876L ^ var1);
      var10004[ajg<"s">(3395, 4657822434172499011L ^ var1)] = ajg<"s">(17369, 333769036540590817L ^ var1);
      var10004[ajg<"s">(5982, 4191078119050309174L ^ var1)] = ajg<"s">(15291, 4111667034762134150L ^ var1);
      var10004[ajg<"s">(3044, 8430213618242941676L ^ var1)] = ajg<"s">(9306, 6721748423293492602L ^ var1);
      var10004[ajg<"s">(2330, 9026555090330316814L ^ var1)] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      this.JxSnN = new ct(this, mr.clS(var10004)).SO(1);
      var10003 = this.JxSnN;
      var10004 = new int[ajg<"s">(3395, 4657822434172499011L ^ var1)];
      var10004[0] = ajg<"s">(26836, 1993790337309053369L ^ var1);
      var10004[1] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[2] = ajg<"s">(18942, 8664023690896421107L ^ var1);
      var10004[3] = ajg<"s">(17369, 333769036540590817L ^ var1);
      var10004[4] = ajg<"s">(19897, 1648240533652255889L ^ var1);
      var10004[5] = ajg<"s">(20022, 6558674373291390758L ^ var1);
      var10004[ajg<"s">(7661, 7033049336161330390L ^ var1)] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[ajg<"s">(19759, 6403231523365729291L ^ var1)] = ajg<"s">(25621, 8728989472432004367L ^ var1);
      this.GLHXM = new cu(var10003, mr.clS(var10004));
      this.eSXTX = new cu(
         this.JxSnN,
         mr.clS(
            new int[]{
               ajg<"s">(23067, 863818514626093876L ^ var1),
               ajg<"s">(23200, 1920625521500660621L ^ var1),
               ajg<"s">(9306, 6721748423293492602L ^ var1),
               ajg<"s">(24115, 5894876271686068014L ^ var1),
               ajg<"s">(25621, 8728989472432004367L ^ var1)
            }
         )
      );
      var10004 = new int[ajg<"s">(8205, 5454457850903681292L ^ var1)];
      var10004[0] = ajg<"s">(13586, 3430711038481124409L ^ var1);
      var10004[1] = ajg<"s">(15801, 4359495590705743027L ^ var1);
      var10004[2] = ajg<"s">(9306, 6721748423293492602L ^ var1);
      var10004[3] = ajg<"s">(15297, 1395337397161444008L ^ var1);
      var10004[4] = ajg<"s">(14430, 2892547477605007728L ^ var1);
      var10004[5] = ajg<"s">(20793, 4162013480584194063L ^ var1);
      var10004[ajg<"s">(7661, 7033049336161330390L ^ var1)] = ajg<"s">(23200, 1920625521500660621L ^ var1);
      var10004[ajg<"s">(19759, 6403231523365729291L ^ var1)] = ajg<"s">(20022, 6558674373291390758L ^ var1);
      var10004[ajg<"s">(3395, 4657822434172499011L ^ var1)] = ajg<"s">(14430, 2892547477605007728L ^ var1);
      var10004[ajg<"s">(5982, 4191078119050309174L ^ var1)] = ajg<"s">(26836, 1993790337309053369L ^ var1);
      var10004[ajg<"s">(3044, 8430213618242941676L ^ var1)] = ajg<"s">(21071, 7696484529041288010L ^ var1);
      var10004[ajg<"s">(2330, 9026555090330316814L ^ var1)] = ajg<"s">(20022, 6558674373291390758L ^ var1);
      var10004[ajg<"s">(23109, 6937505250005132125L ^ var1)] = ajg<"s">(11537, 5912657867863086083L ^ var1);
      var10004[ajg<"s">(28240, 6550501748253103980L ^ var1)] = ajg<"s">(30117, 5703798962534321286L ^ var1);
      var10004[ajg<"s">(10961, 3124064518096376768L ^ var1)] = ajg<"s">(17369, 333769036540590817L ^ var1);
      this.CIvYl = new cJ(this, mr.clS(var10004)).WE(false);
      this.WHKNh = mT.cpA();
      this.GViCt = "";
   }

   static {
      long var22 = gqfIk ^ 117424999850624L;
      Cipher var24;
      Cipher var10000 = var24 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var22 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var25 = 1; var25 < 8; var25++) {
         var10003[var25] = (byte)(var22 << var25 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var31 = new String[2];
      int var29 = 0;
      String var28 = "├É\u0096x4a├┐\u008a\u0086┬▓8\u0086├Ś-2├Śr\u0010┬╝┬Čw├ąx\u0006├ú\u0018K┬░i├Žm├çQ├á";
      int var30 = "├É\u0096x4a├┐\u008a\u0086┬▓8\u0086├Ś-2├Śr\u0010┬╝┬Čw├ąx\u0006├ú\u0018K┬░i├Žm├çQ├á".length();
      char var27 = 16;
      int var26 = -1;

      while (true) {
         byte[] var32 = var24.doFinal(var28.substring(++var26, var26 + var27).getBytes("ISO-8859-1"));
         String var44 = aja(var32).intern();
         int var10001 = -1;
         var31[var29++] = var44;
         if ((var26 += var27) >= var30) {
            xFYqD = var31;
            jzQfA = new String[2];
            gFGcY = new HashMap(13);
            Cipher var11;
            var10000 = var11 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var22 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var12 = 1; var12 < 8; var12++) {
               var10003[var12] = (byte)(var22 << var12 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var17 = new long[69];
            int var14 = 0;
            String var15 = "├Ž%├Ť\u001a├Ź\u00adzT\u000f(├Ě├É├»├Ç,\u0083┬«├Ć%\u000b5┬ąY├łzk8 \u001c├Ľ├Ç\u0085┬á├╝4\u0013├▓=\u0098{├â\u008c0\u0004\u001cJ_\u000b┬Čp\u00179/uH]\u0084├╣├É\u009e┬Ě\u0011├ż4├ő\u0081┬í\u008c├äTj\u0091T┬║┬¬┬ĚQI├Â├ö(├ş\u0001├┤/\u009e\u0089k┬ú├ó┬Ę[;┬┤┬Ž├Ö├«├ë\u0011├ŽY├ČV├ť├í\u0011\u0005├ů\u001b:┬ęr├â┬ę├î├Ĺt├ů\u0086┬║┬░D┬┤┬Ą├ĺ┬╗M├║VhZ\u0095r\u0017\u0082├╝\u0086:├ž├öPi(├â_>┬Ě├Ä\u009aE\u008b├Ž┬ž├ćQ\u0012'\u0085\u001d├ž\u0000├»\u009a┬¬\u008e┬Á┬▒ ┬│┬Ą<x├Ĺ\bTh┬¬├ë{\u0086\u0012R6├ĺF├┤┬║H\u0097\u0011┬Â\"├í+J\u000fp\b├Ä\u00ad<y.┬│p├ęy\u0015FN┬Ą\u008e.\u009e┬á┬ž├á\u0088zd├ö^\u00814┬▒├│?\f├┐\\ht┬Ě├»n├Ś├ő┬áT├ŚV\u009e┬á┬ú\u009c┬ž(┬Ş┬¬h┬Â\u008f├áP├ç~|-├Ĺ├üz┬╣┬í\u008b\ba├Ą-├Ä├ťU7>┬ż)├▒├Ő\u009e\u0082├î$├ëH├▒├ş\u0006pB┬ź=k├│aQ<┬╝W?\u00855├ó┬Ą|d\\G\u0013M├Ť\u008bS+\u0005\u0086\u0007├▒\u008eT├Áo├ô\u008f┬ż┬╗├ŚD├┤\u008d├á\u00853\u008c\u0088&D\u001b├Á\u0087\u0090┬żV\u0095\f\u0003\u00ad┬¬\u0002┬ÁJ+\f\u0017Y├Ádm^\u0085┬Ş┬Ę\u0001c\u0097├║sX┬Ę├Ą┬┐├ś\u0007├ź├çE\u0081`Sa\u00018\u0004{\u009f/┬¬.┬Ą├▓\u0003├░\u008d├ŚF├ť\"\u001f├śx\u0094├ü├Ěu\u0002┬Ák├śTp├ż+┬ó├ë1\bGY'\f3\u0002=\nc\u001b\u000f\rX/E\u008c├Ő├É├Ś\u0085├ľ\u0098┬¬2\u000f├░Qjh\"├Ąa*V ├Öh┬╗\u0096├ô├╣[┬Ż%├Ě ├ů?├▒\u0096├░<|\u0084├Ö├ľG├Ç\u0093├ş├ĄFviM├ç\u0007R├Ę\u001bL\u0093├Ś├«\u0091r[?├¬g├á.|├Čf\u0091┬Ş├┐<\u001d├Čl\u00032┬»S)[VZ├Ź├ĺ├ä├ş├á.b8x├ź\u0083x\rj├ó├ç6\u0095\u0014├Ç\bE";
            int var16 = "├Ž%├Ť\u001a├Ź\u00adzT\u000f(├Ě├É├»├Ç,\u0083┬«├Ć%\u000b5┬ąY├łzk8 \u001c├Ľ├Ç\u0085┬á├╝4\u0013├▓=\u0098{├â\u008c0\u0004\u001cJ_\u000b┬Čp\u00179/uH]\u0084├╣├É\u009e┬Ě\u0011├ż4├ő\u0081┬í\u008c├äTj\u0091T┬║┬¬┬ĚQI├Â├ö(├ş\u0001├┤/\u009e\u0089k┬ú├ó┬Ę[;┬┤┬Ž├Ö├«├ë\u0011├ŽY├ČV├ť├í\u0011\u0005├ů\u001b:┬ęr├â┬ę├î├Ĺt├ů\u0086┬║┬░D┬┤┬Ą├ĺ┬╗M├║VhZ\u0095r\u0017\u0082├╝\u0086:├ž├öPi(├â_>┬Ě├Ä\u009aE\u008b├Ž┬ž├ćQ\u0012'\u0085\u001d├ž\u0000├»\u009a┬¬\u008e┬Á┬▒ ┬│┬Ą<x├Ĺ\bTh┬¬├ë{\u0086\u0012R6├ĺF├┤┬║H\u0097\u0011┬Â\"├í+J\u000fp\b├Ä\u00ad<y.┬│p├ęy\u0015FN┬Ą\u008e.\u009e┬á┬ž├á\u0088zd├ö^\u00814┬▒├│?\f├┐\\ht┬Ě├»n├Ś├ő┬áT├ŚV\u009e┬á┬ú\u009c┬ž(┬Ş┬¬h┬Â\u008f├áP├ç~|-├Ĺ├üz┬╣┬í\u008b\ba├Ą-├Ä├ťU7>┬ż)├▒├Ő\u009e\u0082├î$├ëH├▒├ş\u0006pB┬ź=k├│aQ<┬╝W?\u00855├ó┬Ą|d\\G\u0013M├Ť\u008bS+\u0005\u0086\u0007├▒\u008eT├Áo├ô\u008f┬ż┬╗├ŚD├┤\u008d├á\u00853\u008c\u0088&D\u001b├Á\u0087\u0090┬żV\u0095\f\u0003\u00ad┬¬\u0002┬ÁJ+\f\u0017Y├Ádm^\u0085┬Ş┬Ę\u0001c\u0097├║sX┬Ę├Ą┬┐├ś\u0007├ź├çE\u0081`Sa\u00018\u0004{\u009f/┬¬.┬Ą├▓\u0003├░\u008d├ŚF├ť\"\u001f├śx\u0094├ü├Ěu\u0002┬Ák├śTp├ż+┬ó├ë1\bGY'\f3\u0002=\nc\u001b\u000f\rX/E\u008c├Ő├É├Ś\u0085├ľ\u0098┬¬2\u000f├░Qjh\"├Ąa*V ├Öh┬╗\u0096├ô├╣[┬Ż%├Ě ├ů?├▒\u0096├░<|\u0084├Ö├ľG├Ç\u0093├ş├ĄFviM├ç\u0007R├Ę\u001bL\u0093├Ś├«\u0091r[?├¬g├á.|├Čf\u0091┬Ş├┐<\u001d├Čl\u00032┬»S)[VZ├Ź├ĺ├ä├ş├á.b8x├ź\u0083x\rj├ó├ç6\u0095\u0014├Ç\bE"
               .length();
            byte var13 = 0;

            label50:
            while (true) {
               var10001 = var13;
               var13 += 8;
               byte[] var18 = var15.substring(var10001, var13).getBytes("ISO-8859-1");
               long[] var36 = var17;
               var10001 = var14++;
               long var47 = (var18[0] & 255L) << 56
                  | (var18[1] & 255L) << 48
                  | (var18[2] & 255L) << 40
                  | (var18[3] & 255L) << 32
                  | (var18[4] & 255L) << 24
                  | (var18[5] & 255L) << 16
                  | (var18[6] & 255L) << 8
                  | var18[7] & 255L;
               byte var51 = -1;

               while (true) {
                  long var19 = var47;
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
                  long var55 = (var21[0] & 255L) << 56
                     | (var21[1] & 255L) << 48
                     | (var21[2] & 255L) << 40
                     | (var21[3] & 255L) << 32
                     | (var21[4] & 255L) << 24
                     | (var21[5] & 255L) << 16
                     | (var21[6] & 255L) << 8
                     | var21[7] & 255L;
                  switch (var51) {
                     case 0:
                        var36[var10001] = var55;
                        if (var13 >= var16) {
                           GENnk = var17;
                           ezWXb = new Integer[69];
                           VJtHn = new HashMap(13);
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
                           String var4 = "\u009c\u0081┬ąp├»H┬│4├îG\u0089├╣┬╣┬Č┬Ě#";
                           int var5 = "\u009c\u0081┬ąp├»H┬│4├îG\u0089├╣┬╣┬Č┬Ě#".length();
                           byte var2 = 0;

                           do {
                              int var42 = var2;
                              var2 += 8;
                              byte[] var7 = var4.substring(var42, var2).getBytes("ISO-8859-1");
                              var42 = var3++;
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
                              var55 = (var10[0] & 255L) << 56
                                 | (var10[1] & 255L) << 48
                                 | (var10[2] & 255L) << 40
                                 | (var10[3] & 255L) << 32
                                 | (var10[4] & 255L) << 24
                                 | (var10[5] & 255L) << 16
                                 | (var10[6] & 255L) << 8
                                 | var10[7] & 255L;
                              byte var54 = -1;
                              var6[var42] = var55;
                           } while (var2 < var5);

                           FjxvB = var6;
                           mkXFq = new Long[2];
                           return;
                        }
                        break;
                     default:
                        var36[var10001] = var55;
                        if (var13 < var16) {
                           continue label50;
                        }

                        var15 = "├şB┬Ş\u000f>┬╝l├ş\u0095\u007f┬░├ş7a├â┬Á";
                        var16 = "├şB┬Ş\u000f>┬╝l├ş\u0095\u007f┬░├ş7a├â┬Á".length();
                        var13 = 0;
                  }

                  byte var41 = var13;
                  var13 += 8;
                  var18 = var15.substring(var41, var13).getBytes("ISO-8859-1");
                  var36 = var17;
                  var10001 = var14++;
                  var47 = (var18[0] & 255L) << 56
                     | (var18[1] & 255L) << 48
                     | (var18[2] & 255L) << 40
                     | (var18[3] & 255L) << 32
                     | (var18[4] & 255L) << 24
                     | (var18[5] & 255L) << 16
                     | (var18[6] & 255L) << 8
                     | var18[7] & 255L;
                  var51 = 0;
               }
            }
         }

         var27 = var28.charAt(var26);
      }
   }

   private List<class_1297> aiV() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dw.gqfIk J
      // 03: ldc2_w 102163068546030
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: new java/util/ArrayList
      // 0e: dup
      // 0f: invokespecial java/util/ArrayList.<init> ()V
      // 12: astore 4
      // 14: astore 3
      // 15: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 18: ldc_w sixtwo/fr
      // 1b: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 1e: checkcast sixtwo/fr
      // 21: astore 5
      // 23: aload 0
      // 24: getfield sixtwo/dw.CIvYl Lsixtwo/cJ;
      // 27: invokevirtual sixtwo/cJ.WF ()Z
      // 2a: ifeq 4e
      // 2d: aload 5
      // 2f: invokevirtual sixtwo/fr.aOQ ()Lnet/minecraft/class_1309;
      // 32: astore 6
      // 34: aload 6
      // 36: ifnull 4a
      // 39: aload 4
      // 3b: aload 6
      // 3d: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 42: pop
      // 43: goto 4a
      // 46: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 3
      // 4b: ifnull d8
      // 4e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 51: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 54: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 57: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 5c: astore 6
      // 5e: aload 6
      // 60: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 65: ifeq d8
      // 68: aload 6
      // 6a: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 6f: checkcast net/minecraft/class_1297
      // 72: astore 7
      // 74: aload 7
      // 76: aload 3
      // 77: ifnonnull 8c
      // 7a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 7d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 80: if_acmpeq 5e
      // 83: goto 8a
      // 86: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 89: athrow
      // 8a: aload 7
      // 8c: invokestatic sixtwo/jJ.bIB (Lnet/minecraft/class_1297;)Z
      // 8f: aload 3
      // 90: ifnonnull b1
      // 93: ifne a8
      // 96: goto 9d
      // 99: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9c: athrow
      // 9d: aload 3
      // 9e: ifnull 5e
      // a1: goto a8
      // a4: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a7: athrow
      // a8: aload 0
      // a9: getfield sixtwo/dw.ZIRir Lsixtwo/cF;
      // ac: aload 7
      // ae: invokevirtual sixtwo/cF.VX (Lnet/minecraft/class_1297;)Z
      // b1: aload 3
      // b2: ifnonnull d3
      // b5: ifne ca
      // b8: goto bf
      // bb: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // be: athrow
      // bf: aload 3
      // c0: ifnull 5e
      // c3: goto ca
      // c6: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c9: athrow
      // ca: aload 4
      // cc: aload 7
      // ce: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // d3: pop
      // d4: aload 3
      // d5: ifnull 5e
      // d8: aload 4
      // da: areturn
   }

   private static Object ajc(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = ajb(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int ajf(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aje(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String ajb(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 24338;
      if (jzQfA[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])vAoCj.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               vAoCj.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/dw", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = xFYqD[var5].getBytes("ISO-8859-1");
         jzQfA[var5] = aja(((Cipher)var4[0]).doFinal(var9));
      }

      return jzQfA[var5];
   }

   private static int aje(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 7093;
      if (ezWXb[var3] == null) {
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
         long var5 = GENnk[var3];
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
         Object[] var9 = (Object[])gFGcY.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               gFGcY.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dw", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ezWXb[var3] = var15;
      }

      return ezWXb[var3];
   }

   @hG
   public void aiT(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dw.gqfIk J
      // 003: ldc2_w 89305688834828
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dw.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 029
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: aload 0
      // 022: getfield sixtwo/dw.JxSnN Lsixtwo/ct;
      // 025: bipush 1
      // 026: invokevirtual sixtwo/ct.SQ (I)Z
      // 029: aload 4
      // 02b: ifnonnull 053
      // 02e: ifeq 04b
      // 031: goto 038
      // 034: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 037: athrow
      // 038: aload 0
      // 039: getfield sixtwo/dw.zqiDq Lsixtwo/cC;
      // 03c: invokevirtual sixtwo/cC.VB ()F
      // 03f: ldc_w 100.0
      // 042: fdiv
      // 043: invokestatic sixtwo/kA.bSs (F)V
      // 046: return
      // 047: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04a: athrow
      // 04b: aload 0
      // 04c: getfield sixtwo/dw.OrinU Lsixtwo/ct;
      // 04f: bipush 0
      // 050: invokevirtual sixtwo/ct.SQ (I)Z
      // 053: aload 4
      // 055: ifnonnull 0da
      // 058: ifeq 0b3
      // 05b: goto 062
      // 05e: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 061: athrow
      // 062: aload 0
      // 063: getfield sixtwo/dw.WHKNh Lsixtwo/mT;
      // 066: aload 4
      // 068: ifnonnull 0ab
      // 06b: goto 072
      // 06e: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 071: athrow
      // 072: sipush 25394
      // 075: ldc2_w 7009976904502001650
      // 078: lload 2
      // 079: lxor
      // 07a: invokedynamic j (IJ)J bsm=sixtwo/dw.ajj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 07f: invokevirtual sixtwo/mT.cpC (J)Z
      // 082: ifeq 13d
      // 085: goto 08c
      // 088: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08b: athrow
      // 08c: aload 0
      // 08d: sipush 32507
      // 090: ldc2_w 2023217945813678048
      // 093: lload 2
      // 094: lxor
      // 095: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/dw.ajd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09a: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // 09d: putfield sixtwo/dw.pjPhF Lnet/minecraft/class_1044;
      // 0a0: aload 0
      // 0a1: getfield sixtwo/dw.WHKNh Lsixtwo/mT;
      // 0a4: goto 0ab
      // 0a7: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0aa: athrow
      // 0ab: invokevirtual sixtwo/mT.cpB ()V
      // 0ae: aload 4
      // 0b0: ifnull 13d
      // 0b3: aload 0
      // 0b4: aload 4
      // 0b6: ifnonnull 0de
      // 0b9: goto 0c0
      // 0bc: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bf: athrow
      // 0c0: getfield sixtwo/dw.WHKNh Lsixtwo/mT;
      // 0c3: sipush 23465
      // 0c6: ldc2_w 5099736661602371432
      // 0c9: lload 2
      // 0ca: lxor
      // 0cb: invokedynamic j (IJ)J bsm=sixtwo/dw.ajj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d0: invokevirtual sixtwo/mT.cpC (J)Z
      // 0d3: goto 0da
      // 0d6: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d9: athrow
      // 0da: ifeq 13d
      // 0dd: aload 0
      // 0de: getfield sixtwo/dw.DRApN Lsixtwo/cy;
      // 0e1: invokevirtual sixtwo/cy.Us ()Ljava/lang/String;
      // 0e4: astore 5
      // 0e6: aload 5
      // 0e8: invokestatic sixtwo/jd.bAm (Ljava/lang/String;)Z
      // 0eb: aload 4
      // 0ed: ifnonnull 116
      // 0f0: ifeq 12f
      // 0f3: goto 0fa
      // 0f6: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f9: athrow
      // 0fa: aload 5
      // 0fc: aload 4
      // 0fe: ifnonnull 11b
      // 101: goto 108
      // 104: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 107: athrow
      // 108: aload 0
      // 109: getfield sixtwo/dw.GViCt Ljava/lang/String;
      // 10c: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 10f: goto 116
      // 112: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 115: athrow
      // 116: ifne 12f
      // 119: aload 5
      // 11b: invokestatic sixtwo/oe.cCd (Ljava/lang/String;)Ljava/util/concurrent/CompletableFuture;
      // 11e: aload 0
      // 11f: aload 5
      // 121: invokedynamic accept (Lsixtwo/dw;Ljava/lang/String;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/dw.aiY (Ljava/lang/String;Lsixtwo/lv;)V, (Lsixtwo/lv;)V ]
      // 126: invokevirtual java/util/concurrent/CompletableFuture.thenAccept (Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;
      // 129: pop
      // 12a: aload 4
      // 12c: ifnull 13d
      // 12f: aload 0
      // 130: getfield sixtwo/dw.WHKNh Lsixtwo/mT;
      // 133: invokevirtual sixtwo/mT.cpB ()V
      // 136: goto 13d
      // 139: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13c: athrow
      // 13d: return
   }

   @hG
   public void aiU(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dw.gqfIk J
      // 003: ldc2_w 5496859251344
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dw.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 029
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: aload 0
      // 022: getfield sixtwo/dw.JxSnN Lsixtwo/ct;
      // 025: bipush 0
      // 026: invokevirtual sixtwo/ct.SQ (I)Z
      // 029: istore 5
      // 02b: iload 5
      // 02d: ifeq 066
      // 030: aload 0
      // 031: aload 4
      // 033: ifnonnull 052
      // 036: goto 03d
      // 039: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03c: athrow
      // 03d: getfield sixtwo/dw.pjPhF Lnet/minecraft/class_1044;
      // 040: ifnonnull 066
      // 043: goto 04a
      // 046: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 049: athrow
      // 04a: aload 0
      // 04b: goto 052
      // 04e: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 051: athrow
      // 052: sipush 7901
      // 055: ldc2_w 683697414791120475
      // 058: lload 2
      // 059: lxor
      // 05a: invokedynamic j (IJ)Ljava/lang/String; bsm=sixtwo/dw.ajd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05f: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // 062: putfield sixtwo/dw.pjPhF Lnet/minecraft/class_1044;
      // 065: return
      // 066: aload 1
      // 067: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 06a: astore 6
      // 06c: aload 1
      // 06d: invokevirtual sixtwo/go$sX.bbi ()F
      // 070: fstore 7
      // 072: aload 0
      // 073: getfield sixtwo/dw.RPJuT Lsixtwo/cC;
      // 076: invokevirtual sixtwo/cC.VB ()F
      // 079: fstore 8
      // 07b: aload 0
      // 07c: getfield sixtwo/dw.zqiDq Lsixtwo/cC;
      // 07f: invokevirtual sixtwo/cC.VC ()I
      // 082: sipush 25621
      // 085: ldc2_w 8729047806992414727
      // 088: lload 2
      // 089: lxor
      // 08a: invokedynamic s (IJ)I bsm=sixtwo/dw.ajg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 08f: imul
      // 090: istore 9
      // 092: aload 0
      // 093: invokevirtual sixtwo/dw.aiV ()Ljava/util/List;
      // 096: astore 10
      // 098: aload 10
      // 09a: aload 4
      // 09c: ifnonnull 0b5
      // 09f: invokeinterface java/util/List.isEmpty ()Z 1
      // 0a4: ifeq 0b3
      // 0a7: goto 0ae
      // 0aa: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ad: athrow
      // 0ae: return
      // 0af: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b2: athrow
      // 0b3: aload 10
      // 0b5: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0ba: astore 11
      // 0bc: aload 11
      // 0be: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0c3: ifeq 115
      // 0c6: aload 11
      // 0c8: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0cd: checkcast net/minecraft/class_1297
      // 0d0: astore 12
      // 0d2: aload 4
      // 0d4: ifnonnull 0f8
      // 0d7: iload 5
      // 0d9: ifeq 0fd
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: aload 0
      // 0e4: aload 12
      // 0e6: aload 6
      // 0e8: fload 7
      // 0ea: fload 8
      // 0ec: iload 9
      // 0ee: invokevirtual sixtwo/dw.aiX (Lnet/minecraft/class_1297;Lnet/minecraft/class_4587;FFI)V
      // 0f1: goto 0f8
      // 0f4: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f7: athrow
      // 0f8: aload 4
      // 0fa: ifnull 110
      // 0fd: aload 0
      // 0fe: aload 12
      // 100: aload 6
      // 102: fload 7
      // 104: fload 8
      // 106: invokevirtual sixtwo/dw.aiW (Lnet/minecraft/class_1297;Lnet/minecraft/class_4587;FF)V
      // 109: goto 110
      // 10c: invokestatic sixtwo/dw.aiZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10f: athrow
      // 110: aload 4
      // 112: ifnull 0bc
      // 115: return
   }

   private void aiX(class_1297 var1, class_4587 var2, float var3, float var4, int var5) {
      long var6 = gqfIk ^ 45918937950558L;
      iS[] var10000 = dh.afl();
      class_243 var9 = var1.method_30950(var3);
      double var10 = System.currentTimeMillis() % var5;
      iS[] var8 = var10000;
      double var12 = Math.sin(var10 / var5 * Math.PI) * var1.method_17682();

      label20: {
         try {
            if (var8 != null) {
               return;
            }

            if (!this.DVJWE.WF()) {
               break label20;
            }
         } catch (MatchException var14) {
            throw aiZ(var14);
         }

         var9 = var9.method_1031(0.0, var12, 0.0);
      }

      kz.bSh(var9, var2, var4, this.xeAup.Wh(), this.pjPhF);
   }

   private static String aja(byte[] var0) {
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

   private static long ajh(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 2761;
      if (mkXFq[var3] == null) {
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
         long var5 = FjxvB[var3];
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
         Object[] var9 = (Object[])VJtHn.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               VJtHn.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dw", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         mkXFq[var3] = var15;
      }

      return mkXFq[var3];
   }

   private void aiW(class_1297 var1, class_4587 var2, float var3, float var4) {
      kz.bSi(var2, var1, this.xeAup.Wh(), var4, var3);
   }

   private static long aji(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = ajh(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   private static CallSite ajj(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aji".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dw" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite ajg(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ajf".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dw" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException aiZ(MatchException var0) {
      return var0;
   }

   private static CallSite ajd(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ajc".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dw" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
