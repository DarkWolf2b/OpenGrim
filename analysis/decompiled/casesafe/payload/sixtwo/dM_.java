package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_465;

public class dM extends gg implements nG {
   private final cD pdLuI;
   private final cD kUpne;
   private final cI BbKhB;
   private final nO jrTfF;
   private final nR iDodN;
   private final nP kCRjC;
   private final nM dJbpX;
   private final nE oSkIt;
   private final nC aARvb;
   private final nD pDNOf;
   private final nB gwgQF;
   private final nA RGDyH;
   private final List<nH> OgFsa;
   private final mT aAIUc;
   private iz iYEBE;
   private boolean QvQJq;
   private static final long ZAxHu = gb.aYR(-1308676650226876123L, 8082099855353200799L, MethodHandles.lookup().lookupClass()).a(119824913176558L);
   private static final String[] lSera;
   private static final String[] ozwKJ;
   private static final Map LMRQV = new HashMap(13);
   private static final long[] uqVeJ;
   private static final Integer[] krXjr;
   private static final Map WxmoL;
   private static final long[] MhAnS;
   private static final Long[] JXJSU;
   private static final Map basew;

   public dM() {
      long var1 = ZAxHu ^ 134081829735040L;
      super(gf.aZL(aoj<"u">(6852, 1269514254689875193L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[aoj<"u">(10747, 7754819613001123777L ^ var1)];
      var10004[0] = aoj<"u">(28363, 4171769809662427373L ^ var1);
      var10004[1] = aoj<"u">(4222, 2638938438191922759L ^ var1);
      var10004[2] = aoj<"u">(20684, 6577347153986780923L ^ var1);
      var10004[3] = aoj<"u">(12627, 8846196179450830661L ^ var1);
      var10004[4] = aoj<"u">(7086, 4902642757203441082L ^ var1);
      var10004[5] = aoj<"u">(31873, 6997046840441098912L ^ var1);
      var10004[aoj<"u">(2562, 8201458200579023915L ^ var1)] = aoj<"u">(5051, 9066937266403818907L ^ var1);
      var10004[aoj<"u">(4070, 6976688982904185300L ^ var1)] = aoj<"u">(28253, 7177702786843328627L ^ var1);
      var10004[aoj<"u">(31100, 6480964934383753046L ^ var1)] = aoj<"u">(932, 3924461748337585544L ^ var1);
      this.pdLuI = new cD(this, mr.clS(var10004)).VO(aoj<"u">(22296, 4568853559560730918L ^ var1));
      var10004 = new int[aoj<"u">(19855, 8094477143416497072L ^ var1)];
      var10004[0] = aoj<"u">(8376, 7196006738628546199L ^ var1);
      var10004[1] = aoj<"u">(12682, 1441925979754569663L ^ var1);
      var10004[2] = aoj<"u">(22987, 4649133916365060058L ^ var1);
      var10004[3] = aoj<"u">(15752, 7426331215000638393L ^ var1);
      var10004[4] = aoj<"u">(12367, 6440866101019319927L ^ var1);
      var10004[5] = aoj<"u">(25368, 7691499266520042763L ^ var1);
      var10004[aoj<"u">(16979, 720787797186571376L ^ var1)] = aoj<"u">(27680, 1621218617974669851L ^ var1);
      var10004[aoj<"u">(31266, 1163884393869104135L ^ var1)] = aoj<"u">(28253, 7177702786843328627L ^ var1);
      var10004[aoj<"u">(323, 4406151513297432404L ^ var1)] = aoj<"u">(15752, 7426331215000638393L ^ var1);
      var10004[aoj<"u">(23305, 6846263234873718073L ^ var1)] = aoj<"u">(25229, 8236394230962703530L ^ var1);
      var10004[aoj<"u">(26205, 444316042090989645L ^ var1)] = aoj<"u">(28253, 7177702786843328627L ^ var1);
      var10004[aoj<"u">(32633, 1485516446403875153L ^ var1)] = aoj<"u">(30095, 8805195651676298163L ^ var1);
      this.kUpne = new cD(this, mr.clS(var10004)).VO(mA.OGQHF.cmO());
      var10004 = new int[aoj<"u">(5019, 5156606948262034830L ^ var1)];
      var10004[0] = aoj<"u">(13534, 7610330159161907946L ^ var1);
      var10004[1] = aoj<"u">(22987, 4649133916365060058L ^ var1);
      var10004[2] = aoj<"u">(8430, 6226163806729506525L ^ var1);
      var10004[3] = aoj<"u">(12627, 8846196179450830661L ^ var1);
      var10004[4] = aoj<"u">(15752, 7426331215000638393L ^ var1);
      var10004[5] = aoj<"u">(31869, 4059163548838416971L ^ var1);
      var10004[aoj<"u">(16979, 720787797186571376L ^ var1)] = aoj<"u">(1954, 8681375303708748175L ^ var1);
      var10004[aoj<"u">(31266, 1163884393869104135L ^ var1)] = aoj<"u">(16221, 6096177130912616825L ^ var1);
      var10004[aoj<"u">(323, 4406151513297432404L ^ var1)] = aoj<"u">(6455, 2692093353828005669L ^ var1);
      var10004[aoj<"u">(23305, 6846263234873718073L ^ var1)] = aoj<"u">(28253, 7177702786843328627L ^ var1);
      var10004[aoj<"u">(28550, 5594109550487749028L ^ var1)] = aoj<"u">(12627, 8846196179450830661L ^ var1);
      this.BbKhB = new cI(this, mr.clS(var10004)).Wx(bz::KE);
      this.jrTfF = new nO();
      this.iDodN = new nR();
      this.kCRjC = new nP();
      this.dJbpX = new nM();
      this.oSkIt = new nE();
      this.aARvb = new nC();
      this.pDNOf = new nD();
      this.gwgQF = new nB();
      this.RGDyH = new nA();
      this.OgFsa = List.of(this.gwgQF, this.aARvb, this.pDNOf, this.RGDyH, this.oSkIt);
      this.aAIUc = mT.cpz();
   }

   static {
      long var22 = ZAxHu ^ 92842748966078L;
      Cipher var24;
      Cipher var10000 = var24 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var22 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var25 = 1; var25 < 8; var25++) {
         var10003[var25] = (byte)(var22 << var25 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var31 = new String[8];
      int var29 = 0;
      String var28 = "\u0001├╝┬ž├▓K%├č_┬ę\u008e\u0002├Ç├Łv├ö├ž├Ě\"\u001a┬Č├Ź├ä├ćzk&├Ő@┬ż├ęl├í~\u0011\u0018`├Ě┬║\nTM\u009b'6>E\u009b├ČqYk├ę├╝├Ç\u0087├ô(\u008a┬▒┬ÁN\u0085q├ą\t3\u0017├Ź_├«M┬╣}bRS├░k;9├Ě0T22┬Ą\u0004┬╗0├Ö\u0015\u001b\\├ć├î:├Ľ@┬▒l├¬\u000fv├Ť├Ş1\t\u000b\u0096q\u001d\u008ad,├Ä├Ĺ\u007fLc\u0019├şJ\u0087G├ú\u0001├â├ć├»├ôt>\u009a┬¬Gw├¬├ő&┬┤[gb/gT┬Ě\u008f┬Ę\u001a\u008f├Â├Â+x\u0085\u0086`├Ž\t\u0089Shs1\u0098;\u0007┬ž\u0081b6$p,├ĺ├Ś├ź├▒├│├Ź├▒\u0083\u0002├Ł\u009d├É├Ź\u0006s┬║├ő\fJ┬Ą\nh├ü\u0093\u0098}\u0088\u008eM├╝├▒├ż├î\u0016\u0015├Ąb\u0097\t\u0088\u0014\t\u008aP+Q\u0015<├ç┬ż├ş\u001e8\u0099z├║5┬ú)VdlI├Ę\u0096├Ą\u0012┬ż├ł├ú=\rr\u0096{c┬░Z┬╣!┬Ş┬¬├║┬Ęc┬╗c\u007f├┐├Č├ůx(├┐\u000f\u00ad┬║┬žj├ö\u001a\nlb~┬Á┬«K├Ź\\┬«├▓~\u008c├ä\u0081├┤├ú\u0080)\u001ay├Ö\fP\u001f>\u00908?7┬Ęs@!@\u0004├«\u0092+\u0099┬▒├žz\u001f\u0089├Şp├╣├░├Ě┬╗├Á\u0010├â}├Çqe┬Ą├őh┬í\u0090┬░├éo├ĺB├Ő4┬╣\u0083\"├É\u0083m├Ö\r├▓\u0086┬╗├Ł┬▓├ëgG├č├ä├ó├ł+mk├╗\u0011├Ě\u0018";
      int var30 = "\u0001├╝┬ž├▓K%├č_┬ę\u008e\u0002├Ç├Łv├ö├ž├Ě\"\u001a┬Č├Ź├ä├ćzk&├Ő@┬ż├ęl├í~\u0011\u0018`├Ě┬║\nTM\u009b'6>E\u009b├ČqYk├ę├╝├Ç\u0087├ô(\u008a┬▒┬ÁN\u0085q├ą\t3\u0017├Ź_├«M┬╣}bRS├░k;9├Ě0T22┬Ą\u0004┬╗0├Ö\u0015\u001b\\├ć├î:├Ľ@┬▒l├¬\u000fv├Ť├Ş1\t\u000b\u0096q\u001d\u008ad,├Ä├Ĺ\u007fLc\u0019├şJ\u0087G├ú\u0001├â├ć├»├ôt>\u009a┬¬Gw├¬├ő&┬┤[gb/gT┬Ě\u008f┬Ę\u001a\u008f├Â├Â+x\u0085\u0086`├Ž\t\u0089Shs1\u0098;\u0007┬ž\u0081b6$p,├ĺ├Ś├ź├▒├│├Ź├▒\u0083\u0002├Ł\u009d├É├Ź\u0006s┬║├ő\fJ┬Ą\nh├ü\u0093\u0098}\u0088\u008eM├╝├▒├ż├î\u0016\u0015├Ąb\u0097\t\u0088\u0014\t\u008aP+Q\u0015<├ç┬ż├ş\u001e8\u0099z├║5┬ú)VdlI├Ę\u0096├Ą\u0012┬ż├ł├ú=\rr\u0096{c┬░Z┬╣!┬Ş┬¬├║┬Ęc┬╗c\u007f├┐├Č├ůx(├┐\u000f\u00ad┬║┬žj├ö\u001a\nlb~┬Á┬«K├Ź\\┬«├▓~\u008c├ä\u0081├┤├ú\u0080)\u001ay├Ö\fP\u001f>\u00908?7┬Ęs@!@\u0004├«\u0092+\u0099┬▒├žz\u001f\u0089├Şp├╣├░├Ě┬╗├Á\u0010├â}├Çqe┬Ą├őh┬í\u0090┬░├éo├ĺB├Ő4┬╣\u0083\"├É\u0083m├Ö\r├▓\u0086┬╗├Ł┬▓├ëgG├č├ä├ó├ł+mk├╗\u0011├Ě\u0018"
         .length();
      char var27 = '8';
      int var35 = -1;

      label72:
      while (true) {
         String var36 = var28.substring(++var35, var35 + var27);
         int var10001 = -1;

         while (true) {
            byte[] var32 = var24.doFinal(var36.getBytes("ISO-8859-1"));
            String var50 = aod(var32).intern();
            switch (var10001) {
               case 0:
                  var31[var29++] = var50;
                  if ((var35 += var27) >= var30) {
                     lSera = var31;
                     ozwKJ = new String[8];
                     WxmoL = new HashMap(13);
                     Cipher var11;
                     var10000 = var11 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var22 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var12 = 1; var12 < 8; var12++) {
                        var10003[var12] = (byte)(var22 << var12 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var17 = new long[40];
                     int var14 = 0;
                     String var15 = "F\u009f\u0092├ź\u0010z\u008d\u000f\f)┬▓}\"\u0018E├╝B]┬┐\u0091┬á├ż\u00adm┬át\u00862├░\u001fdz\u0013┬áA┬┐├ś├¬@N┬ź├ç'├Á\u009c\u0087\u0097├Ö┬í\u001b\u000e├░\u000e├éM┬¬y├ž;q\u008a├ź├┤\u000fH┬Â├Ő$fzw├ÁDB┬Ž\t┬Â├▓\u0094xs├ů|F┬▒├Ž├ş}LBP\n├î┬╣┬ż├Ö\u008eU├ŚE\b├ÂvEZ\u008bLd├ľ├ë\u0097\u0095`├ó┬í\"\u0000\u001al\u0003\u0011\u0013y\u007f>├Ź├╝\u0002├žRP├Ľ\u000b┬í5\u001d\u0083\u0017\u0003├Ť\u0087├┐\u0011\u0083┬Ž\b\t├Ä?G┬ąq┬úw\r├śX├ť├ŹI\u009d\u0014\u0000\u0010├ę├Ä├ő├ę\u001c$├Ę\u0098\u0011`├×C`├Ľo\u0000\u0005├üHb┬»├ü├ćJ\u0096├ş├Ľ#┬╝├Ę┬┐├ť*┬╝┬│├á┬ú\u0011{grld├ś\u0087[\u001d├Ę\u0097\u0002C├ü\u00945┬Ą┬╗├ť\t8\u009dVN├Ü┬ż├Ş├░├Â├ż'k\u0087├×k├í\u0094├ş2├â\u0016^.O┬Ž4dk┬Â\u0018@$├Ő\u0010~┬┐@*\u001c├»\u008d├Ž\u0096┬╣├ů\u0016├Č+: ├»Z├ć\u0097┬▓k\u0004\"┬Ą├ł\u0095/\u001e├í\u007f\tROL:├Ľ┬ą┬╝├Ąa\u0001├Ę'\u0006\u0080├Ś\u0014";
                     int var16 = "F\u009f\u0092├ź\u0010z\u008d\u000f\f)┬▓}\"\u0018E├╝B]┬┐\u0091┬á├ż\u00adm┬át\u00862├░\u001fdz\u0013┬áA┬┐├ś├¬@N┬ź├ç'├Á\u009c\u0087\u0097├Ö┬í\u001b\u000e├░\u000e├éM┬¬y├ž;q\u008a├ź├┤\u000fH┬Â├Ő$fzw├ÁDB┬Ž\t┬Â├▓\u0094xs├ů|F┬▒├Ž├ş}LBP\n├î┬╣┬ż├Ö\u008eU├ŚE\b├ÂvEZ\u008bLd├ľ├ë\u0097\u0095`├ó┬í\"\u0000\u001al\u0003\u0011\u0013y\u007f>├Ź├╝\u0002├žRP├Ľ\u000b┬í5\u001d\u0083\u0017\u0003├Ť\u0087├┐\u0011\u0083┬Ž\b\t├Ä?G┬ąq┬úw\r├śX├ť├ŹI\u009d\u0014\u0000\u0010├ę├Ä├ő├ę\u001c$├Ę\u0098\u0011`├×C`├Ľo\u0000\u0005├üHb┬»├ü├ćJ\u0096├ş├Ľ#┬╝├Ę┬┐├ť*┬╝┬│├á┬ú\u0011{grld├ś\u0087[\u001d├Ę\u0097\u0002C├ü\u00945┬Ą┬╗├ť\t8\u009dVN├Ü┬ż├Ş├░├Â├ż'k\u0087├×k├í\u0094├ş2├â\u0016^.O┬Ž4dk┬Â\u0018@$├Ő\u0010~┬┐@*\u001c├»\u008d├Ž\u0096┬╣├ů\u0016├Č+: ├»Z├ć\u0097┬▓k\u0004\"┬Ą├ł\u0095/\u001e├í\u007f\tROL:├Ľ┬ą┬╝├Ąa\u0001├Ę'\u0006\u0080├Ś\u0014"
                        .length();
                     byte var13 = 0;

                     label54:
                     while (true) {
                        var10001 = var13;
                        var13 += 8;
                        byte[] var18 = var15.substring(var10001, var13).getBytes("ISO-8859-1");
                        long[] var39 = var17;
                        var10001 = var14++;
                        long var54 = (var18[0] & 255L) << 56
                           | (var18[1] & 255L) << 48
                           | (var18[2] & 255L) << 40
                           | (var18[3] & 255L) << 32
                           | (var18[4] & 255L) << 24
                           | (var18[5] & 255L) << 16
                           | (var18[6] & 255L) << 8
                           | var18[7] & 255L;
                        byte var58 = -1;

                        while (true) {
                           long var19 = var54;
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
                           long var62 = (var21[0] & 255L) << 56
                              | (var21[1] & 255L) << 48
                              | (var21[2] & 255L) << 40
                              | (var21[3] & 255L) << 32
                              | (var21[4] & 255L) << 24
                              | (var21[5] & 255L) << 16
                              | (var21[6] & 255L) << 8
                              | var21[7] & 255L;
                           switch (var58) {
                              case 0:
                                 var39[var10001] = var62;
                                 if (var13 >= var16) {
                                    uqVeJ = var17;
                                    krXjr = new Integer[40];
                                    basew = new HashMap(13);
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
                                    String var4 = "6\u0089w\u007f├ü┬▒\u0001'├ö┬▓\u0016\u0007├ž┬á├ł┬Č";
                                    int var5 = "6\u0089w\u007f├ü┬▒\u0001'├ö┬▓\u0016\u0007├ž┬á├ł┬Č".length();
                                    byte var2 = 0;

                                    do {
                                       int var47 = var2;
                                       var2 += 8;
                                       byte[] var7 = var4.substring(var47, var2).getBytes("ISO-8859-1");
                                       var47 = var3++;
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
                                       var62 = (var10[0] & 255L) << 56
                                          | (var10[1] & 255L) << 48
                                          | (var10[2] & 255L) << 40
                                          | (var10[3] & 255L) << 32
                                          | (var10[4] & 255L) << 24
                                          | (var10[5] & 255L) << 16
                                          | (var10[6] & 255L) << 8
                                          | var10[7] & 255L;
                                       byte var61 = -1;
                                       var6[var47] = var62;
                                    } while (var2 < var5);

                                    MhAnS = var6;
                                    JXJSU = new Long[2];
                                    return;
                                 }
                                 break;
                              default:
                                 var39[var10001] = var62;
                                 if (var13 < var16) {
                                    continue label54;
                                 }

                                 var15 = "┬Ě\u009cd├ä2\u0018├śB(┬▒lj\u0004├é\u008f├é";
                                 var16 = "┬Ě\u009cd├ä2\u0018├śB(┬▒lj\u0004├é\u008f├é".length();
                                 var13 = 0;
                           }

                           byte var46 = var13;
                           var13 += 8;
                           var18 = var15.substring(var46, var13).getBytes("ISO-8859-1");
                           var39 = var17;
                           var10001 = var14++;
                           var54 = (var18[0] & 255L) << 56
                              | (var18[1] & 255L) << 48
                              | (var18[2] & 255L) << 40
                              | (var18[3] & 255L) << 32
                              | (var18[4] & 255L) << 24
                              | (var18[5] & 255L) << 16
                              | (var18[6] & 255L) << 8
                              | var18[7] & 255L;
                           var58 = 0;
                        }
                     }
                  }

                  var27 = var28.charAt(var35);
                  break;
               default:
                  var31[var29++] = var50;
                  if ((var35 += var27) < var30) {
                     var27 = var28.charAt(var35);
                     continue label72;
                  }

                  var28 = "├Ż\u0006┬░┬¬├ązSj┬▒┬┐\u0090├ů\u0091\u000b\u0017┬│├ô├╣┬ę:N%\u0002\f├│┬Ě.├Ĺ6┬ą├çM\u0080├║\u0092┬Ż\u0007?\u0097\u0001?┬«├Ü\u000eh├║\u0013iS├ą├╗\u0096├öW\u008bc(\u009c├Ĺ\u0083Fc├ä\u0099\u001cL\u0086O\f\u0003\u0085├│,$-\u008e^M\u0090eeZ\u0090┬¬\u0084\u0007\u0098t┬Ą\u008c├ą┬╗Y├Ž\u0099K\u00ad";
                  var30 = "├Ż\u0006┬░┬¬├ązSj┬▒┬┐\u0090├ů\u0091\u000b\u0017┬│├ô├╣┬ę:N%\u0002\f├│┬Ě.├Ĺ6┬ą├çM\u0080├║\u0092┬Ż\u0007?\u0097\u0001?┬«├Ü\u000eh├║\u0013iS├ą├╗\u0096├öW\u008bc(\u009c├Ĺ\u0083Fc├ä\u0099\u001cL\u0086O\f\u0003\u0085├│,$-\u008e^M\u0090eeZ\u0090┬¬\u0084\u0007\u0098t┬Ą\u008c├ą┬╗Y├Ž\u0099K\u00ad"
                     .length();
                  var27 = '8';
                  var35 = -1;
            }

            var36 = var28.substring(++var35, var35 + var27);
            var10001 = 0;
         }
      }
   }

   @hG
   public void any(gM param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 1064686637356
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 38
      // 13: getfield sixtwo/dM.QvQJq Z
      // 16: ifeq 30
      // 19: goto 20
      // 1c: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: invokevirtual sixtwo/dM.pauseSession ()V
      // 24: aload 4
      // 26: ifnull 3b
      // 29: goto 30
      // 2c: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: aload 0
      // 31: goto 38
      // 34: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: invokevirtual sixtwo/dM.anD ()V
      // 3b: return
   }

   private static CallSite aog(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aof".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dM" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @Override
   public void aaj() {
      super.aaj();
      this.anD();
      rD.dlO().bpW();
   }

   @Override
   public void runMarketOpenCommand(iy var1) {
      long var2 = ZAxHu ^ 56990780529228L;
      int[] var4 = ee.arS();

      iy var10000;
      label22: {
         try {
            var10000 = var1;
            if (var4 != null) {
               break label22;
            }

            if (var1 == null) {
               return;
            }
         } catch (MatchException var5) {
            throw aoc(var5);
         }

         var10000 = var1;
      }

      jd.bAn(var10000.bon());
   }

   @Override
   public long updateFallbackTimeout() {
      long var1 = ZAxHu ^ 128822565102220L;
      int var3 = Math.max(0, jg.bBx(rD.dlmvG.field_1724));
      long var4 = var3 * aom<"q">(29691, 6457567755127404913L ^ var1);
      return Math.max(aom<"q">(17688, 2927303424330633107L ^ var1), var4);
   }

   private static CallSite aoj(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aoi".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dM" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @hG
   public void anx(gN var1) {
      rD.dlO().bpW();
   }

   @hG
   public void anz(gA param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dM.ZAxHu J
      // 003: ldc2_w 134327160227993
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ee.arS ()[I
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dM.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 025
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: aload 1
      // 022: invokevirtual sixtwo/gA.bbQ ()I
      // 025: aload 4
      // 027: ifnonnull 043
      // 02a: bipush 1
      // 02b: if_icmpeq 03a
      // 02e: goto 035
      // 031: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 034: athrow
      // 035: return
      // 036: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 03d: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 040: instanceof sixtwo/av
      // 043: aload 4
      // 045: ifnonnull 057
      // 048: ifeq 053
      // 04b: goto 052
      // 04e: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 051: athrow
      // 052: return
      // 053: aload 1
      // 054: invokevirtual sixtwo/gA.bbP ()I
      // 057: sipush 27464
      // 05a: ldc2_w 6530881706820601722
      // 05d: lload 2
      // 05e: lxor
      // 05f: invokedynamic u (IJ)I bsm=sixtwo/dM.aoj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 064: aload 4
      // 066: ifnonnull 0c0
      // 069: if_icmpne 0b5
      // 06c: goto 073
      // 06f: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 072: athrow
      // 073: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 076: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 079: instanceof net/minecraft/class_465
      // 07c: aload 4
      // 07e: ifnonnull 0b9
      // 081: goto 088
      // 084: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 087: athrow
      // 088: ifeq 0b5
      // 08b: goto 092
      // 08e: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 091: athrow
      // 092: aload 0
      // 093: getfield sixtwo/dM.QvQJq Z
      // 096: aload 4
      // 098: ifnonnull 0b9
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: ifeq 0b5
      // 0a5: goto 0ac
      // 0a8: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ab: athrow
      // 0ac: aload 0
      // 0ad: invokevirtual sixtwo/dM.pauseAndNotify ()V
      // 0b0: return
      // 0b1: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b4: athrow
      // 0b5: aload 1
      // 0b6: invokevirtual sixtwo/gA.bbP ()I
      // 0b9: aload 0
      // 0ba: getfield sixtwo/dM.kUpne Lsixtwo/cD;
      // 0bd: invokevirtual sixtwo/cD.VP ()I
      // 0c0: aload 4
      // 0c2: ifnonnull 128
      // 0c5: if_icmpne 111
      // 0c8: goto 0cf
      // 0cb: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ce: athrow
      // 0cf: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0d2: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 0d5: astore 6
      // 0d7: aload 6
      // 0d9: instanceof net/minecraft/class_465
      // 0dc: aload 4
      // 0de: ifnonnull 115
      // 0e1: ifeq 111
      // 0e4: goto 0eb
      // 0e7: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ea: athrow
      // 0eb: aload 6
      // 0ed: checkcast net/minecraft/class_465
      // 0f0: astore 5
      // 0f2: aload 0
      // 0f3: aload 5
      // 0f5: invokevirtual sixtwo/dM.anK (Lnet/minecraft/class_465;)Z
      // 0f8: aload 4
      // 0fa: ifnonnull 115
      // 0fd: ifeq 111
      // 100: goto 107
      // 103: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 106: athrow
      // 107: aload 1
      // 108: bipush 1
      // 109: invokevirtual sixtwo/gA.bdX (Z)V
      // 10c: return
      // 10d: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 110: athrow
      // 111: aload 1
      // 112: invokevirtual sixtwo/gA.bbP ()I
      // 115: aload 4
      // 117: ifnonnull 13c
      // 11a: aload 0
      // 11b: getfield sixtwo/dM.pdLuI Lsixtwo/cD;
      // 11e: invokevirtual sixtwo/cD.VP ()I
      // 121: goto 128
      // 124: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 127: athrow
      // 128: if_icmpeq 12c
      // 12b: return
      // 12c: aload 0
      // 12d: aload 4
      // 12f: ifnonnull 1a8
      // 132: getfield sixtwo/dM.QvQJq Z
      // 135: goto 13c
      // 138: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13b: athrow
      // 13c: ifne 1a7
      // 13f: aload 0
      // 140: invokevirtual sixtwo/dM.anJ ()Lsixtwo/iy;
      // 143: astore 5
      // 145: aload 4
      // 147: ifnonnull 18d
      // 14a: aload 5
      // 14c: ifnonnull 16b
      // 14f: goto 156
      // 152: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 155: athrow
      // 156: sipush 26575
      // 159: ldc2_w 2072235272600828959
      // 15c: lload 2
      // 15d: lxor
      // 15e: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/dM.aog (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 163: invokestatic sixtwo/cN.XI (Ljava/lang/String;)V
      // 166: return
      // 167: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16a: athrow
      // 16b: aload 0
      // 16c: aload 5
      // 16e: aload 4
      // 170: ifnonnull 1a3
      // 173: invokevirtual sixtwo/dM.anC (Lsixtwo/iy;)V
      // 176: sipush 22685
      // 179: ldc2_w 279073995642995528
      // 17c: lload 2
      // 17d: lxor
      // 17e: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/dM.aog (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 183: invokestatic sixtwo/cN.XJ (Ljava/lang/String;)V
      // 186: goto 18d
      // 189: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18c: athrow
      // 18d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 190: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 193: instanceof net/minecraft/class_465
      // 196: ifne 1a6
      // 199: aload 0
      // 19a: aload 5
      // 19c: goto 1a3
      // 19f: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a2: athrow
      // 1a3: invokevirtual sixtwo/dM.reopenMarket (Lsixtwo/iy;)V
      // 1a6: return
      // 1a7: aload 0
      // 1a8: invokevirtual sixtwo/dM.pauseAndNotify ()V
      // 1ab: return
   }

   private nK anE(iy var1) {
      return nK.cxC(this, var1, this.jrTfF, this.iDodN, this.kCRjC, this.dJbpX, this.iYEBE);
   }

   @hG
   public void anA(gL$tk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 118189790804514
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 26
      // 13: getfield sixtwo/dM.QvQJq Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: invokevirtual sixtwo/dM.anJ ()Lsixtwo/iy;
      // 29: astore 5
      // 2b: aload 4
      // 2d: ifnonnull 4c
      // 30: aload 5
      // 32: ifnonnull 41
      // 35: goto 3c
      // 38: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: return
      // 3d: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: aload 0
      // 42: aload 0
      // 43: aload 5
      // 45: invokevirtual sixtwo/dM.anE (Lsixtwo/iy;)Lsixtwo/nK;
      // 48: aload 1
      // 49: invokevirtual sixtwo/dM.anH (Lsixtwo/nK;Lsixtwo/gL$tk;)V
      // 4c: return
   }

   private void anH(nK var1, gL$tk var2) {
      long var3 = ZAxHu ^ 49549931794585L;
      int[] var10000 = ee.arS();
      Iterator var6 = this.OgFsa.iterator();
      int[] var5 = var10000;

      while (var6.hasNext()) {
         nH var7 = (nH)var6.next();
         nJ var8 = var7.cwv(var1, var2);

         try {
            if (var8.cxz()) {
               return;
            }
         } catch (MatchException var9) {
            throw aoc(var9);
         }

         if (var5 != null) {
            break;
         }
      }
   }

   private void anD() {
      long var1 = ZAxHu ^ 54684582407483L;
      int[] var10000 = ee.arS();
      this.jrTfF.cyq();
      int[] var3 = var10000;
      this.iDodN.czb();

      for (nH var5 : this.OgFsa) {
         var5.cwq();
         if (var3 != null) {
            break;
         }
      }
   }

   @hG
   public void anB(gP param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 17090905159807
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 26
      // 13: getfield sixtwo/dM.QvQJq Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: invokevirtual sixtwo/dM.anJ ()Lsixtwo/iy;
      // 29: astore 5
      // 2b: aload 4
      // 2d: ifnonnull 4c
      // 30: aload 5
      // 32: ifnonnull 41
      // 35: goto 3c
      // 38: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: return
      // 3d: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: aload 0
      // 42: aload 0
      // 43: aload 5
      // 45: invokevirtual sixtwo/dM.anE (Lsixtwo/iy;)Lsixtwo/nK;
      // 48: aload 1
      // 49: invokevirtual sixtwo/dM.anI (Lsixtwo/nK;Lsixtwo/gP;)V
      // 4c: return
   }

   private static MatchException aoc(MatchException var0) {
      return var0;
   }

   private iy anJ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 78652904272529
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: invokestatic sixtwo/rD.dlV ()Lsixtwo/iv;
      // 0e: invokevirtual sixtwo/iv.bnM ()Lsixtwo/iu;
      // 11: astore 4
      // 13: astore 3
      // 14: aload 4
      // 16: aload 3
      // 17: ifnonnull 33
      // 1a: ifnonnull 2a
      // 1d: goto 24
      // 20: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aconst_null
      // 25: areturn
      // 26: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 4
      // 2c: invokevirtual sixtwo/iu.bmP ()Ljava/util/Optional;
      // 2f: aconst_null
      // 30: invokevirtual java/util/Optional.orElse (Ljava/lang/Object;)Ljava/lang/Object;
      // 33: checkcast sixtwo/iy
      // 36: areturn
   }

   private boolean anK(class_465<?> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dM.ZAxHu J
      // 003: ldc2_w 13213963763312
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ee.arS ()[I
      // 00b: aload 1
      // 00c: checkcast mixin/accessors/AbstractContainerScreenAccessor
      // 00f: astore 5
      // 011: aload 5
      // 013: invokeinterface mixin/accessors/AbstractContainerScreenAccessor.getHoveredSlot ()Lnet/minecraft/class_1735; 1
      // 018: astore 6
      // 01a: astore 4
      // 01c: aload 6
      // 01e: aload 4
      // 020: ifnonnull 02f
      // 023: ifnull 041
      // 026: goto 02d
      // 029: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02c: athrow
      // 02d: aload 6
      // 02f: aload 4
      // 031: ifnonnull 049
      // 034: invokevirtual net/minecraft/class_1735.method_7681 ()Z
      // 037: ifne 047
      // 03a: goto 041
      // 03d: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 040: athrow
      // 041: bipush 0
      // 042: ireturn
      // 043: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 046: athrow
      // 047: aload 6
      // 049: invokevirtual net/minecraft/class_1735.method_7677 ()Lnet/minecraft/class_1799;
      // 04c: astore 7
      // 04e: aload 7
      // 050: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 053: aload 4
      // 055: ifnonnull 063
      // 058: ifeq 064
      // 05b: goto 062
      // 05e: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 061: athrow
      // 062: bipush 0
      // 063: ireturn
      // 064: aload 0
      // 065: invokevirtual sixtwo/dM.anJ ()Lsixtwo/iy;
      // 068: ifnonnull 081
      // 06b: sipush 9269
      // 06e: ldc2_w 8818367411608914186
      // 071: lload 2
      // 072: lxor
      // 073: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/dM.aog (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 078: invokestatic sixtwo/cN.XI (Ljava/lang/String;)V
      // 07b: bipush 1
      // 07c: ireturn
      // 07d: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 080: athrow
      // 081: new sixtwo/nf
      // 084: dup
      // 085: invokespecial sixtwo/nf.<init> ()V
      // 088: astore 8
      // 08a: aload 8
      // 08c: aload 7
      // 08e: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 091: invokevirtual net/minecraft/class_1792.method_7876 ()Ljava/lang/String;
      // 094: invokevirtual sixtwo/nf.cud (Ljava/lang/String;)V
      // 097: new sixtwo/nc
      // 09a: dup
      // 09b: invokespecial sixtwo/nc.<init> ()V
      // 09e: astore 9
      // 0a0: aload 7
      // 0a2: aload 4
      // 0a4: ifnonnull 0dd
      // 0a7: getstatic net/minecraft/class_9334.field_49631 Lnet/minecraft/class_9331;
      // 0aa: invokevirtual net/minecraft/class_1799.method_57826 (Lnet/minecraft/class_9331;)Z
      // 0ad: ifeq 0c8
      // 0b0: goto 0b7
      // 0b3: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b6: athrow
      // 0b7: aload 9
      // 0b9: aload 7
      // 0bb: invokestatic sixtwo/jc.bzE (Lnet/minecraft/class_1799;)Ljava/lang/String;
      // 0be: invokevirtual sixtwo/nc.csL (Ljava/lang/String;)V
      // 0c1: goto 0c8
      // 0c4: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c7: athrow
      // 0c8: aload 9
      // 0ca: bipush 0
      // 0cb: invokevirtual sixtwo/nc.csM (Z)V
      // 0ce: aload 9
      // 0d0: bipush 0
      // 0d1: invokevirtual sixtwo/nc.csN (Z)V
      // 0d4: aload 8
      // 0d6: aload 9
      // 0d8: invokevirtual sixtwo/nf.cue (Lsixtwo/nc;)V
      // 0db: aload 7
      // 0dd: invokevirtual net/minecraft/class_1799.method_58657 ()Lnet/minecraft/class_9304;
      // 0e0: invokevirtual net/minecraft/class_9304.method_57539 ()Ljava/util/Set;
      // 0e3: invokeinterface java/util/Set.iterator ()Ljava/util/Iterator; 1
      // 0e8: astore 10
      // 0ea: aload 10
      // 0ec: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0f1: ifeq 16b
      // 0f4: aload 10
      // 0f6: aload 4
      // 0f8: ifnonnull 0ec
      // 0fb: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 100: checkcast java/util/Map$Entry
      // 103: astore 11
      // 105: aload 11
      // 107: invokeinterface java/util/Map$Entry.getKey ()Ljava/lang/Object; 1
      // 10c: checkcast net/minecraft/class_6880
      // 10f: astore 12
      // 111: aload 11
      // 113: invokeinterface java/util/Map$Entry.getValue ()Ljava/lang/Object; 1
      // 118: checkcast java/lang/Integer
      // 11b: astore 13
      // 11d: aload 4
      // 11f: ifnonnull 17c
      // 122: aload 12
      // 124: ifnull 0ea
      // 127: goto 12e
      // 12a: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12d: athrow
      // 12e: aload 13
      // 130: aload 4
      // 132: ifnonnull 141
      // 135: ifnull 0ea
      // 138: goto 13f
      // 13b: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13e: athrow
      // 13f: aload 13
      // 141: invokevirtual java/lang/Integer.intValue ()I
      // 144: ifgt 153
      // 147: aload 4
      // 149: ifnull 0ea
      // 14c: goto 153
      // 14f: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 152: athrow
      // 153: aload 12
      // 155: invokeinterface net/minecraft/class_6880.method_40230 ()Ljava/util/Optional; 1
      // 15a: aload 8
      // 15c: aload 13
      // 15e: invokedynamic accept (Lsixtwo/nf;Ljava/lang/Integer;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/dM.aob (Lsixtwo/nf;Ljava/lang/Integer;Lnet/minecraft/class_5321;)V, (Lnet/minecraft/class_5321;)V ]
      // 163: invokevirtual java/util/Optional.ifPresent (Ljava/util/function/Consumer;)V
      // 166: aload 4
      // 168: ifnull 0ea
      // 16b: aload 0
      // 16c: sipush 2663
      // 16f: ldc2_w 2591254834541274969
      // 172: lload 2
      // 173: lxor
      // 174: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/dM.aog (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 179: invokevirtual sixtwo/dM.pauseAndNotify (Ljava/lang/String;)V
      // 17c: aload 4
      // 17e: ifnonnull 1ac
      // 181: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 184: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 187: ifnull 1a1
      // 18a: goto 191
      // 18d: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 190: athrow
      // 191: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 194: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 197: invokevirtual net/minecraft/class_746.method_7346 ()V
      // 19a: goto 1a1
      // 19d: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a0: athrow
      // 1a1: invokestatic sixtwo/bz.KE ()V
      // 1a4: invokestatic sixtwo/bz.KH ()Lsixtwo/bz;
      // 1a7: aload 8
      // 1a9: invokevirtual sixtwo/bz.KD (Lsixtwo/nf;)V
      // 1ac: bipush 1
      // 1ad: ireturn
   }

   private void anC(iy param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 32563192539387
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/dM.anD ()V
      // 0f: astore 4
      // 11: invokestatic sixtwo/jd.bAk ()Ljava/lang/String;
      // 14: astore 5
      // 16: invokestatic sixtwo/rD.dlO ()Lsixtwo/iB;
      // 19: invokevirtual sixtwo/iB.bqh ()Lsixtwo/iC;
      // 1c: astore 6
      // 1e: aload 4
      // 20: ifnonnull 54
      // 23: aload 6
      // 25: aload 5
      // 27: invokevirtual sixtwo/iC.bqK (Ljava/lang/String;)Z
      // 2a: ifeq 49
      // 2d: goto 34
      // 30: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: sipush 2202
      // 37: ldc2_w 4755297394413056811
      // 3a: lload 2
      // 3b: lxor
      // 3c: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/dM.aog (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 41: invokestatic sixtwo/cN.XI (Ljava/lang/String;)V
      // 44: return
      // 45: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: aload 0
      // 4a: aload 6
      // 4c: aload 5
      // 4e: invokevirtual sixtwo/iC.bqI (Ljava/lang/String;)Lsixtwo/iz;
      // 51: putfield sixtwo/dM.iYEBE Lsixtwo/iz;
      // 54: aload 0
      // 55: aload 4
      // 57: ifnonnull 8a
      // 5a: getfield sixtwo/dM.iYEBE Lsixtwo/iz;
      // 5d: ifnonnull 7c
      // 60: goto 67
      // 63: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: sipush 16040
      // 6a: ldc2_w 8124672527499199774
      // 6d: lload 2
      // 6e: lxor
      // 6f: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/dM.aog (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 74: invokestatic sixtwo/cN.XI (Ljava/lang/String;)V
      // 77: return
      // 78: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7b: athrow
      // 7c: aload 0
      // 7d: bipush 1
      // 7e: putfield sixtwo/dM.QvQJq Z
      // 81: aload 0
      // 82: getfield sixtwo/dM.dJbpX Lsixtwo/nM;
      // 85: aload 1
      // 86: invokevirtual sixtwo/nM.cxS (Lsixtwo/iy;)V
      // 89: aload 0
      // 8a: aload 1
      // 8b: invokevirtual sixtwo/dM.anE (Lsixtwo/iy;)Lsixtwo/nK;
      // 8e: astore 7
      // 90: aload 0
      // 91: getfield sixtwo/dM.OgFsa Ljava/util/List;
      // 94: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 99: astore 8
      // 9b: aload 8
      // 9d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // a2: ifeq bd
      // a5: aload 8
      // a7: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // ac: checkcast sixtwo/nH
      // af: astore 9
      // b1: aload 9
      // b3: aload 7
      // b5: invokevirtual sixtwo/nH.cwy (Lsixtwo/nK;)V
      // b8: aload 4
      // ba: ifnull 9b
      // bd: return
   }

   private void anI(nK var1, gP var2) {
      long var3 = ZAxHu ^ 27974933869060L;
      int[] var10000 = ee.arS();
      Iterator var6 = this.OgFsa.iterator();
      int[] var5 = var10000;

      while (var6.hasNext()) {
         nH var7 = (nH)var6.next();
         nJ var8 = var7.cxc(var1, var2);

         try {
            if (var8.cxz()) {
               return;
            }
         } catch (MatchException var9) {
            throw aoc(var9);
         }

         if (var5 != null) {
            break;
         }
      }
   }

   private void anG(nK var1, gq var2) {
      long var3 = ZAxHu ^ 100218594687604L;
      int[] var10000 = ee.arS();
      Iterator var6 = this.OgFsa.iterator();
      int[] var5 = var10000;

      while (var6.hasNext()) {
         nH var7 = (nH)var6.next();
         nJ var8 = var7.cwp(var1, var2);

         try {
            if (var8.cxz()) {
               return;
            }
         } catch (MatchException var9) {
            throw aoc(var9);
         }

         if (var5 != null) {
            break;
         }
      }
   }

   private void anF(nK var1) {
      long var2 = ZAxHu ^ 71750940541094L;
      int[] var10000 = ee.arS();
      Iterator var5 = this.OgFsa.iterator();
      int[] var4 = var10000;

      while (var5.hasNext()) {
         nH var6 = (nH)var5.next();
         nJ var7 = var6.cwm(var1);

         try {
            if (var7.cxz()) {
               return;
            }
         } catch (MatchException var8) {
            throw aoc(var8);
         }

         if (var4 != null) {
            break;
         }
      }
   }

   @hG
   public void anw(gq param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 34999803623778
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dM.bab ()Z
      // 11: aload 4
      // 13: ifnonnull 2b
      // 16: ifeq 3a
      // 19: goto 20
      // 1c: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: getfield sixtwo/dM.QvQJq Z
      // 24: goto 2b
      // 27: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 4
      // 2d: ifnonnull 4e
      // 30: ifne 3b
      // 33: goto 3a
      // 36: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: return
      // 3b: aload 0
      // 3c: aload 4
      // 3e: ifnonnull 53
      // 41: getfield sixtwo/dM.pDNOf Lsixtwo/nD;
      // 44: invokevirtual sixtwo/nD.cxv ()Z
      // 47: goto 4e
      // 4a: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: ifne 52
      // 51: return
      // 52: aload 0
      // 53: invokevirtual sixtwo/dM.anJ ()Lsixtwo/iy;
      // 56: astore 5
      // 58: aload 4
      // 5a: ifnonnull 79
      // 5d: aload 5
      // 5f: ifnonnull 6e
      // 62: goto 69
      // 65: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: return
      // 6a: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: aload 0
      // 6f: aload 0
      // 70: aload 5
      // 72: invokevirtual sixtwo/dM.anE (Lsixtwo/iy;)Lsixtwo/nK;
      // 75: aload 1
      // 76: invokevirtual sixtwo/dM.anG (Lsixtwo/nK;Lsixtwo/gq;)V
      // 79: return
   }

   @hG
   public void anv(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 69437015078282
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dM.bab ()Z
      // 11: aload 4
      // 13: ifnonnull 37
      // 16: ifeq 3a
      // 19: goto 20
      // 1c: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: aload 4
      // 23: ifnonnull 3c
      // 26: goto 2d
      // 29: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getfield sixtwo/dM.QvQJq Z
      // 30: goto 37
      // 33: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: ifne 3b
      // 3a: return
      // 3b: aload 0
      // 3c: invokevirtual sixtwo/dM.anJ ()Lsixtwo/iy;
      // 3f: astore 5
      // 41: aload 4
      // 43: ifnonnull 61
      // 46: aload 5
      // 48: ifnonnull 57
      // 4b: goto 52
      // 4e: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: return
      // 53: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: aload 0
      // 58: aload 0
      // 59: aload 5
      // 5b: invokevirtual sixtwo/dM.anE (Lsixtwo/iy;)Lsixtwo/nK;
      // 5e: invokevirtual sixtwo/dM.anF (Lsixtwo/nK;)V
      // 61: return
   }

   public nM anR() {
      return this.dJbpX;
   }

   public nB anV() {
      return this.gwgQF;
   }

   public cI anN() {
      return this.BbKhB;
   }

   private static String aod(byte[] var0) {
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

   private static int aoi(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aoh(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public mT anY() {
      return this.aAIUc;
   }

   public List<nH> anX() {
      return this.OgFsa;
   }

   public cD anL() {
      return this.pdLuI;
   }

   private static CallSite aom(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aol".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dM" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int aoh(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 30791;
      if (krXjr[var3] == null) {
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
         long var5 = uqVeJ[var3];
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
         Object[] var9 = (Object[])WxmoL.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               WxmoL.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dM", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         krXjr[var3] = var15;
      }

      return krXjr[var3];
   }

   private static long aok(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29939;
      if (JXJSU[var3] == null) {
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
         long var5 = MhAnS[var3];
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
         Object[] var9 = (Object[])basew.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               basew.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dM", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         JXJSU[var3] = var15;
      }

      return JXJSU[var3];
   }

   public nR anP() {
      return this.iDodN;
   }

   public boolean aoa() {
      return this.QvQJq;
   }

   public cD anM() {
      return this.kUpne;
   }

   public nP anQ() {
      return this.kCRjC;
   }

   public nE anS() {
      return this.oSkIt;
   }

   private static long aol(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = aok(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   public nD anU() {
      return this.pDNOf;
   }

   private static String aoe(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 20413;
      if (ozwKJ[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])LMRQV.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               LMRQV.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/dM", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = lSera[var5].getBytes("ISO-8859-1");
         ozwKJ[var5] = aod(((Cipher)var4[0]).doFinal(var9));
      }

      return ozwKJ[var5];
   }

   public iz anZ() {
      return this.iYEBE;
   }

   private static Object aof(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = aoe(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public nA anW() {
      return this.RGDyH;
   }

   public nC anT() {
      return this.aARvb;
   }

   public nO anO() {
      return this.jrTfF;
   }

   @Override
   public void pauseAndNotify(String param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 76314988246009
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 26
      // 13: getfield sixtwo/dM.QvQJq Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: invokevirtual sixtwo/dM.pauseSession ()V
      // 29: aload 1
      // 2a: aload 4
      // 2c: ifnonnull 67
      // 2f: ifnull 53
      // 32: goto 39
      // 35: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 1
      // 3a: aload 4
      // 3c: ifnonnull 78
      // 3f: goto 46
      // 42: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: invokevirtual java/lang/String.isBlank ()Z
      // 49: ifeq 6b
      // 4c: goto 53
      // 4f: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: sipush 26618
      // 56: ldc2_w 476906497541343048
      // 59: lload 2
      // 5a: lxor
      // 5b: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/dM.aog (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 60: goto 67
      // 63: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: invokestatic sixtwo/cN.XJ (Ljava/lang/String;)V
      // 6a: return
      // 6b: sipush 5494
      // 6e: ldc2_w 6523501166405252551
      // 71: lload 2
      // 72: lxor
      // 73: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/dM.aog (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 78: aload 1
      // 79: invokestatic sixtwo/cN.XQ (Ljava/lang/String;Ljava/lang/String;)V
      // 7c: return
   }

   @Override
   public void reopenMarket(iy param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 46994834663406
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 4
      // 0f: ifnonnull 5a
      // 12: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 15: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 18: ifnull 4e
      // 1b: goto 22
      // 1e: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 25: aload 4
      // 27: ifnonnull 48
      // 2a: goto 31
      // 2d: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 34: ifnull 4e
      // 37: goto 3e
      // 3a: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 41: goto 48
      // 44: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 4b: invokevirtual net/minecraft/class_746.method_7346 ()V
      // 4e: aload 0
      // 4f: invokevirtual sixtwo/dM.anD ()V
      // 52: aload 0
      // 53: getfield sixtwo/dM.jrTfF Lsixtwo/nO;
      // 56: bipush 1
      // 57: invokevirtual sixtwo/nO.cyH (Z)V
      // 5a: return
   }

   @Override
   public void pauseSession() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dM.ZAxHu J
      // 03: ldc2_w 107799843002747
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 24
      // 11: getfield sixtwo/dM.QvQJq Z
      // 14: ifne 23
      // 17: goto 1e
      // 1a: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: return
      // 1f: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: invokevirtual sixtwo/dM.anJ ()Lsixtwo/iy;
      // 27: astore 4
      // 29: aload 3
      // 2a: ifnonnull 8a
      // 2d: aload 4
      // 2f: ifnull 81
      // 32: goto 39
      // 35: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 0
      // 3a: aload 4
      // 3c: invokevirtual sixtwo/dM.anE (Lsixtwo/iy;)Lsixtwo/nK;
      // 3f: astore 5
      // 41: aload 0
      // 42: getfield sixtwo/dM.OgFsa Ljava/util/List;
      // 45: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 4a: astore 6
      // 4c: aload 6
      // 4e: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 53: ifeq 78
      // 56: aload 6
      // 58: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 5d: checkcast sixtwo/nH
      // 60: astore 7
      // 62: aload 7
      // 64: aload 5
      // 66: invokevirtual sixtwo/nH.cwz (Lsixtwo/nK;)V
      // 69: aload 3
      // 6a: ifnonnull 8a
      // 6d: aload 3
      // 6e: ifnull 4c
      // 71: goto 78
      // 74: invokestatic sixtwo/dM.aoc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 77: athrow
      // 78: aload 0
      // 79: getfield sixtwo/dM.dJbpX Lsixtwo/nM;
      // 7c: aload 4
      // 7e: invokevirtual sixtwo/nM.cxS (Lsixtwo/iy;)V
      // 81: aload 0
      // 82: bipush 0
      // 83: putfield sixtwo/dM.QvQJq Z
      // 86: aload 0
      // 87: invokevirtual sixtwo/dM.anD ()V
      // 8a: return
   }
}
