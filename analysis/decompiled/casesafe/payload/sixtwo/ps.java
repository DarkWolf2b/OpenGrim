package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.WeakHashMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_3532;

public class ps extends py implements pE {
   private final cG YdMAz;
   private final cx yhAPl;
   private final cJ qSNJW;
   private final ct TFVHL;
   private final cu hxkaD;
   private final cu dvDHT;
   private final ct hyruU;
   private final cu jtfIJ;
   private final cu QYkdO;
   private final cC HSZnj;
   private final cC HWVIb;
   private final Map<class_1297, pt> xNjAY;
   private static final long sBiZg = gb.aYR(-7864155151665324352L, 4348451550296227746L, MethodHandles.lookup().lookupClass()).a(56669524836135L);
   private static final String[] icFkS;
   private static final String[] DEViU;
   private static final Map ppHRw = new HashMap(13);
   private static final long[] agHIE;
   private static final Integer[] lHgPv;
   private static final Map lOrqU;

   public ps() {
      long var1 = sBiZg ^ 80888815768410L;
      super(cPr<"i">(27878, 1088994668224458751L ^ var1), cPr<"i">(24677, 7881069883053220734L ^ var1), 2.0);
      int[] var10004 = new int[cPu<"n">(26646, 2709585802812764094L ^ var1)];
      var10004[0] = cPu<"n">(28204, 4142119727141530031L ^ var1);
      var10004[1] = cPu<"n">(2610, 6156024486583422367L ^ var1);
      var10004[2] = cPu<"n">(30302, 7959842140426056140L ^ var1);
      var10004[3] = cPu<"n">(24359, 799319209774487715L ^ var1);
      var10004[4] = cPu<"n">(7497, 865128197599779566L ^ var1);
      var10004[5] = cPu<"n">(12553, 8768566146940335767L ^ var1);
      var10004[cPu<"n">(11752, 2158016122997336689L ^ var1)] = cPu<"n">(25408, 7812782962132198641L ^ var1);
      var10004[cPu<"n">(5387, 2358028925037400708L ^ var1)] = cPu<"n">(11398, 4526349709482322713L ^ var1);
      this.YdMAz = new cG(this, mr.clS(var10004)).Uf(mG.hoGuU).Ue(rD.dlM().bjf()).Ug(true);
      var10004 = new int[cPu<"n">(18459, 8872513015911747469L ^ var1)];
      var10004[0] = cPu<"n">(27516, 817919772335189187L ^ var1);
      var10004[1] = cPu<"n">(3932, 8721949110695643391L ^ var1);
      var10004[2] = cPu<"n">(25266, 3691376959499707699L ^ var1);
      var10004[3] = cPu<"n">(8448, 1070503243669366446L ^ var1);
      var10004[4] = cPu<"n">(15154, 2181471911758593209L ^ var1);
      var10004[5] = cPu<"n">(22038, 8673137611185262981L ^ var1);
      var10004[cPu<"n">(9932, 188889289670353216L ^ var1)] = cPu<"n">(8322, 4380935725000058626L ^ var1);
      var10004[cPu<"n">(349, 4761799027601262333L ^ var1)] = cPu<"n">(15142, 8491081023401557120L ^ var1);
      var10004[cPu<"n">(30261, 4907112999175795120L ^ var1)] = cPu<"n">(22002, 1444277902398624328L ^ var1);
      var10004[cPu<"n">(28562, 3359498382496376876L ^ var1)] = cPu<"n">(29431, 7322789932795278657L ^ var1);
      this.yhAPl = new cx(this, mr.clS(var10004)).TX(mG.QHTxQ.coa(120.0F)).TT(true);
      int[] var10000 = pr.cOX();
      this.qSNJW = new cJ(
            this,
            mr.clS(
               new int[]{
                  cPu<"n">(5405, 7952072645092430511L ^ var1),
                  cPu<"n">(3932, 8721949110695643391L ^ var1),
                  cPu<"n">(26776, 6056383126413586206L ^ var1),
                  cPu<"n">(19322, 5479845694532586721L ^ var1),
                  cPu<"n">(16952, 3593712601261278612L ^ var1)
               }
            )
         )
         .WE(true);
      int[] var10005 = new int[cPu<"n">(9932, 188889289670353216L ^ var1)];
      var10005[0] = cPu<"n">(6974, 3904073426879044741L ^ var1);
      var10005[1] = cPu<"n">(9700, 952961708265005612L ^ var1);
      var10005[2] = cPu<"n">(22038, 8673137611185262981L ^ var1);
      var10005[3] = cPu<"n">(18038, 7956837488803938751L ^ var1);
      var10005[4] = cPu<"n">(3932, 8721949110695643391L ^ var1);
      var10005[5] = cPu<"n">(25259, 7205700006291481880L ^ var1);
      this.TFVHL = new ct(this, mr.clS(var10005));
      ct var6 = this.TFVHL;
      var10005 = new int[cPu<"n">(30261, 4907112999175795120L ^ var1)];
      var10005[0] = cPu<"n">(25379, 619953457966425242L ^ var1);
      var10005[1] = cPu<"n">(32216, 9172956386205645393L ^ var1);
      var10005[2] = cPu<"n">(16482, 4932506861009995715L ^ var1);
      var10005[3] = cPu<"n">(9700, 952961708265005612L ^ var1);
      var10005[4] = cPu<"n">(3156, 1884267469546802078L ^ var1);
      var10005[5] = cPu<"n">(19322, 5479845694532586721L ^ var1);
      var10005[cPu<"n">(9932, 188889289670353216L ^ var1)] = cPu<"n">(25259, 7205700006291481880L ^ var1);
      var10005[cPu<"n">(349, 4761799027601262333L ^ var1)] = cPu<"n">(16952, 3593712601261278612L ^ var1);
      this.hxkaD = new cu(var6, mr.clS(var10005));
      ct var7 = this.TFVHL;
      var10005 = new int[cPu<"n">(23222, 7719753130444070158L ^ var1)];
      var10005[0] = cPu<"n">(8086, 7739365851759794178L ^ var1);
      var10005[1] = cPu<"n">(16952, 3593712601261278612L ^ var1);
      var10005[2] = cPu<"n">(22038, 8673137611185262981L ^ var1);
      var10005[3] = cPu<"n">(6352, 8789106790202662759L ^ var1);
      var10005[4] = cPu<"n">(16952, 3593712601261278612L ^ var1);
      var10005[5] = cPu<"n">(22002, 1444277902398624328L ^ var1);
      var10005[cPu<"n">(9932, 188889289670353216L ^ var1)] = cPu<"n">(25259, 7205700006291481880L ^ var1);
      var10005[cPu<"n">(349, 4761799027601262333L ^ var1)] = cPu<"n">(3932, 8721949110695643391L ^ var1);
      var10005[cPu<"n">(30261, 4907112999175795120L ^ var1)] = cPu<"n">(15826, 3154088211429259895L ^ var1);
      var10005[cPu<"n">(29060, 2901372657987892782L ^ var1)] = cPu<"n">(16952, 3593712601261278612L ^ var1);
      this.dvDHT = new cu(var7, mr.clS(var10005));
      var10005 = new int[cPu<"n">(4142, 3034737718560446390L ^ var1)];
      var10005[0] = cPu<"n">(2212, 949278640526774065L ^ var1);
      var10005[1] = cPu<"n">(9700, 952961708265005612L ^ var1);
      var10005[2] = cPu<"n">(19322, 5479845694532586721L ^ var1);
      var10005[3] = cPu<"n">(22002, 1444277902398624328L ^ var1);
      var10005[4] = cPu<"n">(29431, 7322789932795278657L ^ var1);
      var10005[5] = cPu<"n">(30324, 5498836907605799411L ^ var1);
      var10005[cPu<"n">(9932, 188889289670353216L ^ var1)] = cPu<"n">(22002, 1444277902398624328L ^ var1);
      var10005[cPu<"n">(349, 4761799027601262333L ^ var1)] = cPu<"n">(15826, 3154088211429259895L ^ var1);
      var10005[cPu<"n">(30261, 4907112999175795120L ^ var1)] = cPu<"n">(5771, 6377257534646374665L ^ var1);
      var10005[cPu<"n">(29060, 2901372657987892782L ^ var1)] = cPu<"n">(28474, 6325961868693088398L ^ var1);
      var10005[cPu<"n">(23222, 7719753130444070158L ^ var1)] = cPu<"n">(25259, 7205700006291481880L ^ var1);
      var10005[cPu<"n">(968, 6533640462315013186L ^ var1)] = cPu<"n">(5670, 288385817825759625L ^ var1);
      var10005[cPu<"n">(21613, 1965410267553305553L ^ var1)] = cPu<"n">(3156, 1884267469546802078L ^ var1);
      var10005[cPu<"n">(17856, 7277435677250060872L ^ var1)] = cPu<"n">(16952, 3593712601261278612L ^ var1);
      this.hyruU = new ct(this, mr.clS(var10005));
      ct var8 = this.hyruU;
      var10005 = new int[cPu<"n">(9932, 188889289670353216L ^ var1)];
      var10005[0] = cPu<"n">(16808, 8285545914297091605L ^ var1);
      var10005[1] = cPu<"n">(9232, 6264783194908812192L ^ var1);
      var10005[2] = cPu<"n">(19322, 5479845694532586721L ^ var1);
      var10005[3] = cPu<"n">(3932, 8721949110695643391L ^ var1);
      var10005[4] = cPu<"n">(22038, 8673137611185262981L ^ var1);
      var10005[5] = cPu<"n">(16952, 3593712601261278612L ^ var1);
      this.jtfIJ = new cu(var8, mr.clS(var10005));
      ct var9 = this.hyruU;
      var10005 = new int[cPu<"n">(30261, 4907112999175795120L ^ var1)];
      var10005[0] = cPu<"n">(16808, 8285545914297091605L ^ var1);
      var10005[1] = cPu<"n">(29657, 6860576575717684293L ^ var1);
      var10005[2] = cPu<"n">(19322, 5479845694532586721L ^ var1);
      var10005[3] = cPu<"n">(30324, 5498836907605799411L ^ var1);
      var10005[4] = cPu<"n">(22038, 8673137611185262981L ^ var1);
      var10005[5] = cPu<"n">(6352, 8789106790202662759L ^ var1);
      var10005[cPu<"n">(9932, 188889289670353216L ^ var1)] = cPu<"n">(3156, 1884267469546802078L ^ var1);
      var10005[cPu<"n">(349, 4761799027601262333L ^ var1)] = cPu<"n">(16952, 3593712601261278612L ^ var1);
      this.QYkdO = new cu(var9, mr.clS(var10005));
      int[] var3 = var10000;

      try {
         var10004 = new int[cPu<"n">(30261, 4907112999175795120L ^ var1)];
         var10004[0] = cPu<"n">(9488, 8122855024232227508L ^ var1);
         var10004[1] = cPu<"n">(9700, 952961708265005612L ^ var1);
         var10004[2] = cPu<"n">(19322, 5479845694532586721L ^ var1);
         var10004[3] = cPu<"n">(22002, 1444277902398624328L ^ var1);
         var10004[4] = cPu<"n">(29431, 7322789932795278657L ^ var1);
         var10004[5] = cPu<"n">(30324, 5498836907605799411L ^ var1);
         var10004[cPu<"n">(9932, 188889289670353216L ^ var1)] = cPu<"n">(22002, 1444277902398624328L ^ var1);
         var10004[cPu<"n">(349, 4761799027601262333L ^ var1)] = cPu<"n">(15826, 3154088211429259895L ^ var1);
         this.HSZnj = new cC(this, mr.clS(var10004)).Vw(0.0).Vx(50.0).Vy(1.0).Vz("%").VA(10.0);
         var10004 = new int[cPu<"n">(27507, 7395897043273624804L ^ var1)];
         var10004[0] = cPu<"n">(9488, 8122855024232227508L ^ var1);
         var10004[1] = cPu<"n">(9700, 952961708265005612L ^ var1);
         var10004[2] = cPu<"n">(19322, 5479845694532586721L ^ var1);
         var10004[3] = cPu<"n">(22002, 1444277902398624328L ^ var1);
         var10004[4] = cPu<"n">(29431, 7322789932795278657L ^ var1);
         var10004[5] = cPu<"n">(30324, 5498836907605799411L ^ var1);
         var10004[cPu<"n">(9932, 188889289670353216L ^ var1)] = cPu<"n">(22002, 1444277902398624328L ^ var1);
         var10004[cPu<"n">(349, 4761799027601262333L ^ var1)] = cPu<"n">(15826, 3154088211429259895L ^ var1);
         var10004[cPu<"n">(30261, 4907112999175795120L ^ var1)] = cPu<"n">(3120, 1261566516631849901L ^ var1);
         var10004[cPu<"n">(29060, 2901372657987892782L ^ var1)] = cPu<"n">(16808, 8285545914297091605L ^ var1);
         var10004[cPu<"n">(23222, 7719753130444070158L ^ var1)] = cPu<"n">(22677, 6894229482479591195L ^ var1);
         var10004[cPu<"n">(10292, 8139410788327583645L ^ var1)] = cPu<"n">(9700, 952961708265005612L ^ var1);
         var10004[cPu<"n">(7203, 6467198965514722287L ^ var1)] = cPu<"n">(9700, 952961708265005612L ^ var1);
         var10004[cPu<"n">(24373, 5308903696822605975L ^ var1)] = cPu<"n">(25259, 7205700006291481880L ^ var1);
         var10004[cPu<"n">(10990, 896122838813535587L ^ var1)] = cPu<"n">(29597, 8117550927732782120L ^ var1);
         var10004[cPu<"n">(11452, 7151566522413181815L ^ var1)] = cPu<"n">(22002, 1444277902398624328L ^ var1);
         var10004[cPu<"n">(24845, 7833402940813518487L ^ var1)] = cPu<"n">(16952, 3593712601261278612L ^ var1);
         var10004[cPu<"n">(18298, 2184240376246829290L ^ var1)] = cPu<"n">(4969, 7233242035489363192L ^ var1);
         var10004[cPu<"n">(19615, 2317717543560448820L ^ var1)] = cPu<"n">(4969, 7233242035489363192L ^ var1);
         this.HWVIb = new cC(this, mr.clS(var10004)).Vw(20.0).Vy(1.0).Vx(100.0).Vz("%").VA(70.0);
         this.xNjAY = new WeakHashMap<>();
         this.position(pM.DXMaR);
         this.TFVHL.Vf(this.qSNJW::WF);
         this.HWVIb.Vf(this.QYkdO::SZ);
         if (var3 != null) {
            iS.bwK("ji2nd");
         }
      } catch (MatchException var4) {
         throw cPn(var4);
      }
   }

   static {
      long var11 = sBiZg ^ 19301603611271L;
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
      String var17 = "├ö\u0014┬▓\u0011├ĺ├ş├Ą\u0099\u0003\u0082}├îR\u0014├Á.\t\u0018┬żg├▒*├Źf├ż┬á├«=#+8├ż\u0010yu)`P\u009f├║├ş\u0005├ł├«o'\\\u0006\b\u0018\u0097┬Ę┬╗\u009d\u0084\u008du\u008a<r├Ü\u0017├Ź├ó├áE┬ę├┐\u00adsu┬ú\u0097├ź";
      int var19 = "├ö\u0014┬▓\u0011├ĺ├ş├Ą\u0099\u0003\u0082}├îR\u0014├Á.\t\u0018┬żg├▒*├Źf├ż┬á├«=#+8├ż\u0010yu)`P\u009f├║├ş\u0005├ł├«o'\\\u0006\b\u0018\u0097┬Ę┬╗\u009d\u0084\u008du\u008a<r├Ü\u0017├Ź├ó├áE┬ę├┐\u00adsu┬ú\u0097├ź"
         .length();
      char var16 = ' ';
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = cPo(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            icFkS = var20;
            DEViU = new String[3];
            lOrqU = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[69];
            int var3 = 0;
            String var4 = ",├Ş9├ú├ô├Ę├╗A┬«┬▒4]\u001a\u0019cW^\u008a├Ő├║cz*┬│rm\b├ę┬ź├░┬┤\u0082l├Ä\u0096┬║R├ô%6wLwc&Ny@}\u0011├ĽoX\u0005\u0007\u0097L├ůxQa\u0094\u0012\u00147\u009b\u0013v\u008e6Zs├ş\u009f├Â\u0004┬┤\u008e8├ľ├╝<├╣b├ť┬╝\u0006P├║├Ö├â├ť\u008e\u0002\u008d├á\u0097\n\u000b├ş┬Čw7lB├Ł├ů4\u0000\u0098H┬╣e\u0005\u008d┬Ż┬Čba\u0088┬»\u0088,├Ć┬Ě├ön├ŐQ;2├é┬ź.Rm├ĺ\u008e├«├Ä\u009c├É├Â├▒├▒0k├ŹP\"\u0011v┬│├▒┬žn├ó\nV\u0011R├Â┬Â\u0016\u0088\u0082├Ü├ćq\u0080_\u0000\u0088i├Üq├Ö\u0011(\u0007\u0017\u008al├ů7\u0002G├Ě┬Ş┬á┬Ž\u0082\u000e\n┬Ž\u008fDeR┬Čb├í├Ö├¬├ç┬▒\u0086\u0001l.├żI├«├Ť\u0095├│├ç├│@0├ž3├ë├Ä\u00022\r@L\f├Č┬«\u0006H\u0013\u008b@a┬á\u0086 kA├ë$\u0004~%e,├╗\u001aZ├ĄMR┬źh\u000e\u0099├úI├äm\u008e%[fo+H├ä├ş\u009bJ┬╗├Ź\u0087\u0082├žQ┬ż┬╣┬žY\u0004┬úQ\u0095Q├Ĺ\tC┬»┬ú9\u001b├á\u00118├äP├ś├ç├ž\u00ad\u0094\u0005┬│>┬ą┬┤├╗├Ż}├ťh\u0010\u0088v1\u0090!┬╣%X┬Á\u0000├ĘC┬íX├Ĺq\u0019\u0090W\u0013:}\u0007\u0007\u009a^k\u0084#\u0003!\u0003├║┬Ę├ŹdI^├×\u009e┬ž'u\u008b\u0088┬Żm├É7L┬Ż?├Ág\n┬┐P├»├łc\u0012├ó├Ľ┬▒R\u0019┬ĄdD\u0098┬ž\rG\u009bE}├Â┬╝\u001a┬┐\u00124\u0082\u0002E├Ľ'mT├Ľj┬▓├Č\u0015G|\u008fun[├ŤB\u0001├Ä;├┤5┬ż\u000b\u009f:├ťs┬¬├«├Ä├Á├Ő├Ą]┬Ż$-├×l├â├Ĺ├║\u009a$├ó├┤\u0087m┬Čf┬źP├Ő├ó┬¬\u0015├ż\u0089\u0081-^├ź┬▓├î├é/#;lA\u001d$┬¬├ë├Ö├ťn├é├╝├×├┤I├á├Ľ\u007f├ü\u0010\u0013├ś┬Â┬«\u0099┬▓R\u0019├Ł\u0098├Ć┬▓\u0004F\u0000\u0084┬ó\r├í├▒D├▒!├ó-t┬ź┬▒├╗pAg├î[\u0085+┬»\u00026p├┤D\u0015\u0091├Ĺ";
            int var5 = ",├Ş9├ú├ô├Ę├╗A┬«┬▒4]\u001a\u0019cW^\u008a├Ő├║cz*┬│rm\b├ę┬ź├░┬┤\u0082l├Ä\u0096┬║R├ô%6wLwc&Ny@}\u0011├ĽoX\u0005\u0007\u0097L├ůxQa\u0094\u0012\u00147\u009b\u0013v\u008e6Zs├ş\u009f├Â\u0004┬┤\u008e8├ľ├╝<├╣b├ť┬╝\u0006P├║├Ö├â├ť\u008e\u0002\u008d├á\u0097\n\u000b├ş┬Čw7lB├Ł├ů4\u0000\u0098H┬╣e\u0005\u008d┬Ż┬Čba\u0088┬»\u0088,├Ć┬Ě├ön├ŐQ;2├é┬ź.Rm├ĺ\u008e├«├Ä\u009c├É├Â├▒├▒0k├ŹP\"\u0011v┬│├▒┬žn├ó\nV\u0011R├Â┬Â\u0016\u0088\u0082├Ü├ćq\u0080_\u0000\u0088i├Üq├Ö\u0011(\u0007\u0017\u008al├ů7\u0002G├Ě┬Ş┬á┬Ž\u0082\u000e\n┬Ž\u008fDeR┬Čb├í├Ö├¬├ç┬▒\u0086\u0001l.├żI├«├Ť\u0095├│├ç├│@0├ž3├ë├Ä\u00022\r@L\f├Č┬«\u0006H\u0013\u008b@a┬á\u0086 kA├ë$\u0004~%e,├╗\u001aZ├ĄMR┬źh\u000e\u0099├úI├äm\u008e%[fo+H├ä├ş\u009bJ┬╗├Ź\u0087\u0082├žQ┬ż┬╣┬žY\u0004┬úQ\u0095Q├Ĺ\tC┬»┬ú9\u001b├á\u00118├äP├ś├ç├ž\u00ad\u0094\u0005┬│>┬ą┬┤├╗├Ż}├ťh\u0010\u0088v1\u0090!┬╣%X┬Á\u0000├ĘC┬íX├Ĺq\u0019\u0090W\u0013:}\u0007\u0007\u009a^k\u0084#\u0003!\u0003├║┬Ę├ŹdI^├×\u009e┬ž'u\u008b\u0088┬Żm├É7L┬Ż?├Ág\n┬┐P├»├łc\u0012├ó├Ľ┬▒R\u0019┬ĄdD\u0098┬ž\rG\u009bE}├Â┬╝\u001a┬┐\u00124\u0082\u0002E├Ľ'mT├Ľj┬▓├Č\u0015G|\u008fun[├ŤB\u0001├Ä;├┤5┬ż\u000b\u009f:├ťs┬¬├«├Ä├Á├Ő├Ą]┬Ż$-├×l├â├Ĺ├║\u009a$├ó├┤\u0087m┬Čf┬źP├Ő├ó┬¬\u0015├ż\u0089\u0081-^├ź┬▓├î├é/#;lA\u001d$┬¬├ë├Ö├ťn├é├╝├×├┤I├á├Ľ\u007f├ü\u0010\u0013├ś┬Â┬«\u0099┬▓R\u0019├Ł\u0098├Ć┬▓\u0004F\u0000\u0084┬ó\r├í├▒D├▒!├ó-t┬ź┬▒├╗pAg├î[\u0085+┬»\u00026p├┤D\u0015\u0091├Ĺ"
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
                           agHIE = var6;
                           lHgPv = new Integer[69];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "0@\u0001┬Ę:P├Ą├┤Q\u0095├Ő_\"u\u0099;";
                        var5 = "0@\u0001┬Ę:P├Ą├┤Q\u0095├Ő_\"u\u0099;".length();
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
   public float thickness(lC var1, lc var2, class_1297 var3, boolean var4) {
      return 2.5F * this.cQJ(var2, var4);
   }

   private pr cOZ(class_1297 param1, boolean param2, pr param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ps.sBiZg J
      // 03: ldc2_w 13904692454367
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/pr.cOX ()[I
      // 0c: astore 6
      // 0e: iload 2
      // 0f: ifne 29
      // 12: aload 1
      // 13: aload 6
      // 15: ifnonnull 3f
      // 18: goto 1f
      // 1b: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: ifnonnull 2f
      // 22: goto 29
      // 25: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 3
      // 2a: areturn
      // 2b: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e: athrow
      // 2f: aload 0
      // 30: getfield sixtwo/ps.xNjAY Ljava/util/Map;
      // 33: aload 1
      // 34: aload 3
      // 35: invokedynamic apply (Lsixtwo/pr;)Ljava/util/function/Function; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/ps.cPm (Lsixtwo/pr;Lnet/minecraft/class_1297;)Lsixtwo/pt;, (Lnet/minecraft/class_1297;)Lsixtwo/pt; ]
      // 3a: invokeinterface java/util/Map.computeIfAbsent (Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object; 3
      // 3f: checkcast sixtwo/pt
      // 42: astore 7
      // 44: aload 7
      // 46: aload 3
      // 47: invokevirtual sixtwo/pt.cPv (Lsixtwo/pr;)Lsixtwo/pr;
      // 4a: areturn
   }

   private void cPi(lC var1, lc var2, pr var3, boolean var4, float var5, float var6) {
      String var10;
      lq var11;
      mG var12;
      float var17;
      float var18;
      label11: {
         long var7 = sBiZg ^ 7359156747798L;
         int[] var10000 = pr.cOX();
         var10 = this.cPk(var3);
         var11 = lE.SVnNc.bYM(this.cQI(5.0F, var5));
         var12 = mG.hoGuU.cob(var6);
         float var13 = var11.cao(var10);
         int[] var9 = var10000;
         float var14 = var11.cat();
         float var15 = var3.cOV();
         float var16 = this.cQI(1.5F, var5);
         if (var4) {
            float var19 = var2.bXA() - var2.bXI() * var15;
            var17 = var2.bXF() + (var2.bXH() - var13) * 0.5F;
            var18 = var19 - var14 - var16;
            if (var9 == null) {
               break label11;
            }
         }

         float var20 = var2.bXF() + var2.bXH() * var15;
         var17 = this.cPj(var20, var13, var2.bXF(), var2.bXz());
         var18 = var2.bXG() - var14 - var16;
      }

      var1.cez(var11, var10, var17, var18, var12);
   }

   private String cPk(pr param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ps.sBiZg J
      // 03: ldc2_w 8610489630142
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/pr.cOX ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 35
      // 13: getfield sixtwo/ps.dvDHT Lsixtwo/cu;
      // 16: invokevirtual sixtwo/cu.SZ ()Z
      // 19: ifeq 34
      // 1c: goto 23
      // 1f: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 1
      // 24: invokevirtual sixtwo/pr.cOU ()F
      // 27: invokestatic java/lang/Math.round (F)I
      // 2a: invokedynamic makeConcatWithConstants (I)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001%" ]
      // 2f: areturn
      // 30: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: aload 0
      // 35: aload 1
      // 36: invokevirtual sixtwo/pr.cOS ()F
      // 39: invokevirtual sixtwo/ps.cPl (F)Ljava/lang/String;
      // 3c: areturn
   }

   private float cPh() {
      return this.HWVIb.VB() / 10.0F;
   }

   @Override
   public void drawBar(lC param1, lc param2, lc param3, class_1297 param4, boolean param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ps.sBiZg J
      // 03: ldc2_w 58135599325713
      // 06: lxor
      // 07: lstore 6
      // 09: aload 0
      // 0a: aload 4
      // 0c: iload 5
      // 0e: aload 0
      // 0f: aload 4
      // 11: iload 5
      // 13: invokevirtual sixtwo/ps.cOY (Lnet/minecraft/class_1297;Z)Lsixtwo/pr;
      // 16: invokevirtual sixtwo/ps.cOZ (Lnet/minecraft/class_1297;ZLsixtwo/pr;)Lsixtwo/pr;
      // 19: astore 9
      // 1b: aload 9
      // 1d: invokevirtual sixtwo/pr.cOV ()F
      // 20: fstore 10
      // 22: invokestatic sixtwo/pr.cOX ()[I
      // 25: aload 0
      // 26: iload 5
      // 28: invokevirtual sixtwo/ps.cQM (Z)F
      // 2b: fstore 11
      // 2d: astore 8
      // 2f: aload 0
      // 30: aload 3
      // 31: iload 5
      // 33: invokevirtual sixtwo/ps.cQJ (Lsixtwo/lc;Z)F
      // 36: fstore 12
      // 38: aload 2
      // 39: invokevirtual sixtwo/lc.bXI ()F
      // 3c: aload 2
      // 3d: invokevirtual sixtwo/lc.bXH ()F
      // 40: fcmpl
      // 41: aload 8
      // 43: ifnonnull 51
      // 46: ifle 54
      // 49: goto 50
      // 4c: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: bipush 1
      // 51: goto 55
      // 54: bipush 0
      // 55: istore 13
      // 57: aload 0
      // 58: aload 1
      // 59: aload 2
      // 5a: fload 11
      // 5c: invokevirtual sixtwo/ps.cPa (Lsixtwo/lC;Lsixtwo/lc;F)V
      // 5f: iload 13
      // 61: ifeq 8d
      // 64: aload 2
      // 65: invokevirtual sixtwo/lc.bXI ()F
      // 68: fload 10
      // 6a: fmul
      // 6b: fstore 14
      // 6d: aload 0
      // 6e: aload 1
      // 6f: aload 2
      // 70: invokevirtual sixtwo/lc.bXF ()F
      // 73: aload 2
      // 74: invokevirtual sixtwo/lc.bXA ()F
      // 77: fload 14
      // 79: fsub
      // 7a: aload 2
      // 7b: invokevirtual sixtwo/lc.bXH ()F
      // 7e: fload 14
      // 80: bipush 1
      // 81: fload 10
      // 83: fload 11
      // 85: invokevirtual sixtwo/ps.cPb (Lsixtwo/lC;FFFFZFF)V
      // 88: aload 8
      // 8a: ifnull ae
      // 8d: aload 2
      // 8e: invokevirtual sixtwo/lc.bXH ()F
      // 91: fload 10
      // 93: fmul
      // 94: fstore 14
      // 96: aload 0
      // 97: aload 1
      // 98: aload 2
      // 99: invokevirtual sixtwo/lc.bXF ()F
      // 9c: aload 2
      // 9d: invokevirtual sixtwo/lc.bXG ()F
      // a0: fload 14
      // a2: aload 2
      // a3: invokevirtual sixtwo/lc.bXI ()F
      // a6: bipush 0
      // a7: fload 10
      // a9: fload 11
      // ab: invokevirtual sixtwo/ps.cPb (Lsixtwo/lC;FFFFZFF)V
      // ae: aload 0
      // af: aload 8
      // b1: ifnonnull cc
      // b4: getfield sixtwo/ps.qSNJW Lsixtwo/cJ;
      // b7: invokevirtual sixtwo/cJ.WF ()Z
      // ba: ifeq d9
      // bd: goto c4
      // c0: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c3: athrow
      // c4: aload 0
      // c5: goto cc
      // c8: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // cb: athrow
      // cc: aload 1
      // cd: aload 2
      // ce: aload 9
      // d0: iload 13
      // d2: fload 12
      // d4: fload 11
      // d6: invokevirtual sixtwo/ps.cPi (Lsixtwo/lC;Lsixtwo/lc;Lsixtwo/pr;ZFF)V
      // d9: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // dc: ifnonnull ec
      // df: bipush 3
      // e0: newarray 10
      // e2: invokestatic sixtwo/pr.cOW ([I)V
      // e5: goto ec
      // e8: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // eb: athrow
      // ec: return
   }

   private float cPj(float param1, float param2, float param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ps.sBiZg J
      // 03: ldc2_w 320559358156
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/pr.cOX ()[I
      // 0c: fload 4
      // 0e: fload 2
      // 0f: fsub
      // 10: fstore 8
      // 12: astore 7
      // 14: fload 8
      // 16: fload 3
      // 17: aload 7
      // 19: ifnonnull 40
      // 1c: fcmpg
      // 1d: ifge 38
      // 20: goto 27
      // 23: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: fload 3
      // 28: fload 4
      // 2a: fload 3
      // 2b: fsub
      // 2c: fload 2
      // 2d: fsub
      // 2e: ldc_w 0.5
      // 31: fmul
      // 32: fadd
      // 33: freturn
      // 34: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: fload 1
      // 39: fload 2
      // 3a: ldc_w 0.5
      // 3d: fmul
      // 3e: fsub
      // 3f: fload 3
      // 40: fload 8
      // 42: invokestatic net/minecraft/class_3532.method_15363 (FFF)F
      // 45: freturn
   }

   private static Object cPq(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cPp(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private void cPe(lC var1, lc var2, la var3) {
      var1.ccT(this.cPf(), var2).bOu(this.cPg(var2)).bOE(this.cPh()).bOw(var3).bOX();
   }

   private static int cPt(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cPs(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private void cPd(lC var1, lc var2, mG var3) {
      var1.ccT(this.cPf(), var2).bOu(this.cPg(var2)).bOE(this.cPh()).bOv(var3).bOX();
   }

   private mG cPc(mG var1, mG var2, float var3) {
      return var1.coc(var2, class_3532.method_15363(var3, 0.0F, 1.0F));
   }

   private kd cPf() {
      long var1 = sBiZg ^ 65874823648420L;

      try {
         if (this.jtfIJ.SZ()) {
            return kd.AhlXN;
         }
      } catch (MatchException var3) {
         throw cPn(var3);
      }

      return kd.sQVlR;
   }

   private ld cPg(lc var1) {
      float var2 = Math.max(0.0F, Math.min(var1.bXH(), var1.bXI()) * 0.5F);
      return ld.all(var2 * this.HSZnj.VB() / 100.0F);
   }

   private static CallSite cPr(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cPq".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ps" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private pr cOY(class_1297 var1, boolean var2) {
      long var3 = sBiZg ^ 111890516954916L;
      int[] var5 = pr.cOX();

      label49: {
         class_1309 var14;
         label48: {
            label53: {
               class_1297 var17;
               label54: {
                  label45: {
                     try {
                        var10000 = var2;
                        if (var5 != null) {
                           break label45;
                        }

                        if (var2) {
                           break label49;
                        }
                     } catch (MatchException var13) {
                        throw cPn(var13);
                     }

                     try {
                        var17 = var1;
                        if (var5 != null) {
                           break label54;
                        }

                        var10000 = var1 instanceof class_1309;
                     } catch (MatchException var12) {
                        throw cPn(var12);
                     }
                  }

                  if (!var10000) {
                     break label53;
                  }

                  var17 = var1;
               }

               var14 = (class_1309)var17;

               try {
                  if (var5 == null) {
                     break label48;
                  }
               } catch (MatchException var11) {
                  throw cPn(var11);
               }
            }

            try {
               return new pr(0.0F, 1.0F, 0.0F);
            } catch (MatchException var10) {
               throw cPn(var10);
            }
         }

         float var15 = Math.max(1.0F, var14.method_6063() + var14.method_6067());
         float var16 = class_3532.method_15363(var14.method_6032() + var14.method_6067(), 0.0F, var15);
         float var9 = jg.bBv(var14, var16);
         return new pr(var16, var15, var9);
      }

      float var6 = 15.6F;
      float var7 = 20.0F;
      float var8 = var6 / var7 * 100.0F;
      return new pr(var6, var7, var8);
   }

   private void cPb(lC param1, float param2, float param3, float param4, float param5, boolean param6, float param7, float param8) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ps.sBiZg J
      // 03: ldc2_w 80381467756657
      // 06: lxor
      // 07: lstore 9
      // 09: invokestatic sixtwo/pr.cOX ()[I
      // 0c: astore 11
      // 0e: fload 4
      // 10: fconst_0
      // 11: fcmpg
      // 12: aload 11
      // 14: ifnonnull 2c
      // 17: ifle 2f
      // 1a: goto 21
      // 1d: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: fload 5
      // 23: fconst_0
      // 24: fcmpg
      // 25: goto 2c
      // 28: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: ifgt 30
      // 2f: return
      // 30: aload 0
      // 31: getfield sixtwo/ps.YdMAz Lsixtwo/cG;
      // 34: invokevirtual sixtwo/cG.Wg ()Lsixtwo/mG;
      // 37: fload 8
      // 39: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 3c: astore 12
      // 3e: aload 0
      // 3f: getfield sixtwo/ps.YdMAz Lsixtwo/cG;
      // 42: invokevirtual sixtwo/cG.Wi ()Lsixtwo/mG;
      // 45: fload 8
      // 47: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 4a: astore 13
      // 4c: aload 0
      // 4d: getfield sixtwo/ps.YdMAz Lsixtwo/cG;
      // 50: invokevirtual sixtwo/cG.Wj ()Z
      // 53: aload 11
      // 55: ifnonnull 87
      // 58: ifne 85
      // 5b: goto 62
      // 5e: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 0
      // 63: aload 1
      // 64: new sixtwo/lc
      // 67: dup
      // 68: fload 2
      // 69: fload 3
      // 6a: fload 4
      // 6c: fload 5
      // 6e: invokespecial sixtwo/lc.<init> (FFFF)V
      // 71: aload 0
      // 72: getfield sixtwo/ps.YdMAz Lsixtwo/cG;
      // 75: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 78: fload 8
      // 7a: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 7d: invokevirtual sixtwo/ps.cPd (Lsixtwo/lC;Lsixtwo/lc;Lsixtwo/mG;)V
      // 80: return
      // 81: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 84: athrow
      // 85: iload 6
      // 87: ifeq 95
      // 8a: fconst_1
      // 8b: fload 7
      // 8d: fsub
      // 8e: goto 96
      // 91: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 94: athrow
      // 95: fconst_0
      // 96: fstore 14
      // 98: iload 6
      // 9a: ifeq a5
      // 9d: fconst_1
      // 9e: goto a7
      // a1: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a4: athrow
      // a5: fload 7
      // a7: fstore 15
      // a9: aload 0
      // aa: aload 12
      // ac: aload 13
      // ae: fload 14
      // b0: invokevirtual sixtwo/ps.cPc (Lsixtwo/mG;Lsixtwo/mG;F)Lsixtwo/mG;
      // b3: astore 16
      // b5: aload 0
      // b6: aload 12
      // b8: aload 13
      // ba: fload 15
      // bc: invokevirtual sixtwo/ps.cPc (Lsixtwo/mG;Lsixtwo/mG;F)Lsixtwo/mG;
      // bf: astore 17
      // c1: iload 6
      // c3: ifeq d8
      // c6: new sixtwo/kW
      // c9: dup
      // ca: aload 16
      // cc: aload 17
      // ce: invokespecial sixtwo/kW.<init> (Lsixtwo/mG;Lsixtwo/mG;)V
      // d1: goto e3
      // d4: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d7: athrow
      // d8: new sixtwo/kX
      // db: dup
      // dc: aload 16
      // de: aload 17
      // e0: invokespecial sixtwo/kX.<init> (Lsixtwo/mG;Lsixtwo/mG;)V
      // e3: astore 18
      // e5: aload 0
      // e6: aload 1
      // e7: new sixtwo/lc
      // ea: dup
      // eb: fload 2
      // ec: fload 3
      // ed: fload 4
      // ef: fload 5
      // f1: invokespecial sixtwo/lc.<init> (FFFF)V
      // f4: aload 18
      // f6: invokevirtual sixtwo/ps.cPe (Lsixtwo/lC;Lsixtwo/lc;Lsixtwo/la;)V
      // f9: return
   }

   private String cPl(float param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ps.sBiZg J
      // 03: ldc2_w 23739145590850
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/pr.cOX ()[I
      // 0b: fload 1
      // 0c: invokestatic java/lang/Math.round (F)I
      // 0f: i2f
      // 10: fstore 5
      // 12: astore 4
      // 14: fload 1
      // 15: fload 5
      // 17: fsub
      // 18: invokestatic java/lang/Math.abs (F)F
      // 1b: ldc_w 0.05
      // 1e: fcmpg
      // 1f: aload 4
      // 21: ifnonnull 38
      // 24: ifge 3c
      // 27: goto 2e
      // 2a: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: fload 5
      // 30: f2i
      // 31: goto 38
      // 34: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: invokestatic java/lang/String.valueOf (I)Ljava/lang/String;
      // 3b: areturn
      // 3c: getstatic java/util/Locale.US Ljava/util/Locale;
      // 3f: sipush 31604
      // 42: ldc2_w 3430809844951118708
      // 45: lload 2
      // 46: lxor
      // 47: invokedynamic i (IJ)Ljava/lang/String; bsm=sixtwo/ps.cPr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4c: bipush 1
      // 4d: anewarray 549
      // 50: dup
      // 51: bipush 0
      // 52: fload 1
      // 53: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 56: aastore
      // 57: invokestatic java/lang/String.format (Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
      // 5a: areturn
   }

   private static String cPo(byte[] var0) {
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

   private static String cPp(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 644;
      if (DEViU[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])ppHRw.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ppHRw.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ps", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = icFkS[var5].getBytes("ISO-8859-1");
         DEViU[var5] = cPo(((Cipher)var4[0]).doFinal(var9));
      }

      return DEViU[var5];
   }

   private static int cPs(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 1557;
      if (lHgPv[var3] == null) {
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
         long var5 = agHIE[var3];
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
         Object[] var9 = (Object[])lOrqU.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               lOrqU.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ps", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         lHgPv[var3] = var15;
      }

      return lHgPv[var3];
   }

   private void cPa(lC param1, lc param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ps.sBiZg J
      // 03: ldc2_w 93026765747329
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/pr.cOX ()[I
      // 0c: astore 6
      // 0e: aload 0
      // 0f: aload 6
      // 11: ifnonnull 2a
      // 14: getfield sixtwo/ps.yhAPl Lsixtwo/cx;
      // 17: invokevirtual sixtwo/cx.TR ()Z
      // 1a: ifne 29
      // 1d: goto 24
      // 20: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: return
      // 25: invokestatic sixtwo/ps.cPn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 0
      // 2a: aload 1
      // 2b: aload 2
      // 2c: aload 0
      // 2d: getfield sixtwo/ps.yhAPl Lsixtwo/cx;
      // 30: invokevirtual sixtwo/cx.Wf ()Lsixtwo/mG;
      // 33: fload 3
      // 34: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 37: invokevirtual sixtwo/ps.cPd (Lsixtwo/lC;Lsixtwo/lc;Lsixtwo/mG;)V
      // 3a: return
   }

   private static CallSite cPu(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cPt".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ps" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException cPn(MatchException var0) {
      return var0;
   }
}
