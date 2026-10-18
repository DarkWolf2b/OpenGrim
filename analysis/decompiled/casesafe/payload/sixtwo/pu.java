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

public class pu extends py implements pC {
   private final cG dHEYi;
   private final ct GQSSu;
   private final cu cMfeG;
   private final cu TcPdF;
   private final cu Ctvgb;
   private final ct lmATQ;
   private final cu LHfJY;
   private final cu Liubb;
   private final cC rOtpK;
   private final cC nRHCQ;
   private static final long LjaCw = gb.aYR(1926760471040805563L, 1609519778113622229L, MethodHandles.lookup().lookupClass()).a(158934905412581L);
   private static final String[] loRxD;
   private static final String[] PmeuG;
   private static final Map WkgJD = new HashMap(13);
   private static final long[] unsKt;
   private static final Integer[] RMyPr;
   private static final Map rpuQu;

   public pu() {
      long var1 = LjaCw ^ 65807610117623L;
      super(cPD<"y">(29015, 1436781698714147869L ^ var1), cPD<"y">(12697, 1810301557215812818L ^ var1), 2.0);
      this.dHEYi = new cG(
         this,
         mr.clS(
            new int[]{
               cPG<"v">(7984, 247757526764403140L ^ var1),
               cPG<"v">(2900, 7019090947303812497L ^ var1),
               cPG<"v">(4339, 4044027124801353218L ^ var1),
               cPG<"v">(25977, 3266158666215474060L ^ var1),
               cPG<"v">(7086, 8311822894303362375L ^ var1)
            }
         )
      );
      this.GQSSu = new ct(
         this,
         mr.clS(
            new int[]{
               cPG<"v">(16231, 685326013119863171L ^ var1),
               cPG<"v">(3857, 3484681285698529736L ^ var1),
               cPG<"v">(15947, 5817159583276439726L ^ var1),
               cPG<"v">(22627, 5045897627931082381L ^ var1),
               cPG<"v">(14913, 1485599460687322278L ^ var1)
            }
         )
      );
      String var10000 = pv.cPR();
      this.cMfeG = new cu(
         this.GQSSu,
         mr.clS(
            new int[]{
               cPG<"v">(32316, 4878709849223190721L ^ var1),
               cPG<"v">(25977, 3266158666215474060L ^ var1),
               cPG<"v">(22627, 5045897627931082381L ^ var1),
               cPG<"v">(25984, 431079538730943322L ^ var1),
               cPG<"v">(6861, 4156107504887184415L ^ var1)
            }
         )
      );
      this.TcPdF = new cu(
         this.GQSSu,
         mr.clS(
            new int[]{
               cPG<"v">(16826, 5692990132767811439L ^ var1),
               cPG<"v">(22627, 5045897627931082381L ^ var1),
               cPG<"v">(10329, 6413901370030886552L ^ var1),
               cPG<"v">(5267, 1387410846482248284L ^ var1)
            }
         )
      );
      ct var10004 = this.GQSSu;
      int[] var10005 = new int[cPG<"v">(19015, 5245234996026600588L ^ var1)];
      var10005[0] = cPG<"v">(8810, 3821704135445349528L ^ var1);
      var10005[1] = cPG<"v">(20583, 3402634839884822181L ^ var1);
      var10005[2] = cPG<"v">(18030, 4053639645747044485L ^ var1);
      var10005[3] = cPG<"v">(11134, 4435833322112552367L ^ var1);
      var10005[4] = cPG<"v">(20583, 3402634839884822181L ^ var1);
      var10005[5] = cPG<"v">(14403, 550040505649766027L ^ var1);
      var10005[cPG<"v">(15627, 3725395299230096370L ^ var1)] = cPG<"v">(18046, 4722087684633387194L ^ var1);
      var10005[cPG<"v">(29814, 8031604662242235066L ^ var1)] = cPG<"v">(5861, 2966015069530042424L ^ var1);
      var10005[cPG<"v">(6003, 6418254679886049715L ^ var1)] = cPG<"v">(22627, 5045897627931082381L ^ var1);
      var10005[cPG<"v">(3189, 8278474936203389588L ^ var1)] = cPG<"v">(19936, 5778033768362011447L ^ var1);
      var10005[cPG<"v">(10457, 4682120137656176174L ^ var1)] = cPG<"v">(32743, 7182743398150166804L ^ var1);
      var10005[cPG<"v">(29552, 8707152589388305849L ^ var1)] = cPG<"v">(23126, 1435673822585420930L ^ var1);
      this.Ctvgb = new cu(var10004, mr.clS(var10005));
      var10005 = new int[cPG<"v">(10940, 5877261431554804854L ^ var1)];
      var10005[0] = cPG<"v">(29925, 1978822284455957002L ^ var1);
      var10005[1] = cPG<"v">(25977, 3266158666215474060L ^ var1);
      var10005[2] = cPG<"v">(11134, 4435833322112552367L ^ var1);
      var10005[3] = cPG<"v">(8944, 7425481674566206526L ^ var1);
      var10005[4] = cPG<"v">(14403, 550040505649766027L ^ var1);
      var10005[5] = cPG<"v">(20583, 3402634839884822181L ^ var1);
      var10005[cPG<"v">(6827, 1106268277871852637L ^ var1)] = cPG<"v">(22467, 7367766037634412847L ^ var1);
      var10005[cPG<"v">(5120, 7934426921228251872L ^ var1)] = cPG<"v">(21790, 3847931459126588385L ^ var1);
      var10005[cPG<"v">(14225, 5371894440452591977L ^ var1)] = cPG<"v">(14965, 8840061379006307471L ^ var1);
      var10005[cPG<"v">(14873, 4171057084630932709L ^ var1)] = cPG<"v">(32316, 4878709849223190721L ^ var1);
      var10005[cPG<"v">(28445, 8929347901021473271L ^ var1)] = cPG<"v">(248, 8802474228801218078L ^ var1);
      var10005[cPG<"v">(21467, 6650394737340249387L ^ var1)] = cPG<"v">(10601, 3572451570470129537L ^ var1);
      var10005[cPG<"v">(16995, 7012474954235602109L ^ var1)] = cPG<"v">(22627, 5045897627931082381L ^ var1);
      var10005[cPG<"v">(4809, 1327755282550043666L ^ var1)] = cPG<"v">(2190, 2607618994646527597L ^ var1);
      this.lmATQ = new ct(this, mr.clS(var10005));
      var10004 = this.lmATQ;
      var10005 = new int[cPG<"v">(6827, 1106268277871852637L ^ var1)];
      var10005[0] = cPG<"v">(32316, 4878709849223190721L ^ var1);
      var10005[1] = cPG<"v">(31182, 3486631681016127250L ^ var1);
      var10005[2] = cPG<"v">(11134, 4435833322112552367L ^ var1);
      var10005[3] = cPG<"v">(23119, 1521928264484060313L ^ var1);
      var10005[4] = cPG<"v">(5267, 1387410846482248284L ^ var1);
      var10005[5] = cPG<"v">(2190, 2607618994646527597L ^ var1);
      this.LHfJY = new cu(var10004, mr.clS(var10005));
      var10004 = this.lmATQ;
      var10005 = new int[cPG<"v">(14225, 5371894440452591977L ^ var1)];
      var10005[0] = cPG<"v">(32316, 4878709849223190721L ^ var1);
      var10005[1] = cPG<"v">(31182, 3486631681016127250L ^ var1);
      var10005[2] = cPG<"v">(11134, 4435833322112552367L ^ var1);
      var10005[3] = cPG<"v">(20583, 3402634839884822181L ^ var1);
      var10005[4] = cPG<"v">(5267, 1387410846482248284L ^ var1);
      var10005[5] = cPG<"v">(24264, 7792232919965628440L ^ var1);
      var10005[cPG<"v">(6827, 1106268277871852637L ^ var1)] = cPG<"v">(22627, 5045897627931082381L ^ var1);
      var10005[cPG<"v">(5120, 7934426921228251872L ^ var1)] = cPG<"v">(2190, 2607618994646527597L ^ var1);
      this.Liubb = new cu(var10004, mr.clS(var10005));
      String var3 = var10000;

      try {
         int[] var7 = new int[cPG<"v">(14225, 5371894440452591977L ^ var1)];
         var7[0] = cPG<"v">(1967, 8497145791808184642L ^ var1);
         var7[1] = cPG<"v">(25977, 3266158666215474060L ^ var1);
         var7[2] = cPG<"v">(11134, 4435833322112552367L ^ var1);
         var7[3] = cPG<"v">(22467, 7367766037634412847L ^ var1);
         var7[4] = cPG<"v">(14403, 550040505649766027L ^ var1);
         var7[5] = cPG<"v">(20583, 3402634839884822181L ^ var1);
         var7[cPG<"v">(6827, 1106268277871852637L ^ var1)] = cPG<"v">(22467, 7367766037634412847L ^ var1);
         var7[cPG<"v">(5120, 7934426921228251872L ^ var1)] = cPG<"v">(3023, 1930879616212053300L ^ var1);
         this.rOtpK = new cC(this, mr.clS(var7)).Vw(0.0).Vx(50.0).Vy(1.0).Vz("%").VA(10.0);
         int[] var8 = new int[cPG<"v">(5721, 6779257002449580191L ^ var1)];
         var8[0] = cPG<"v">(1967, 8497145791808184642L ^ var1);
         var8[1] = cPG<"v">(25977, 3266158666215474060L ^ var1);
         var8[2] = cPG<"v">(11134, 4435833322112552367L ^ var1);
         var8[3] = cPG<"v">(22467, 7367766037634412847L ^ var1);
         var8[4] = cPG<"v">(14403, 550040505649766027L ^ var1);
         var8[5] = cPG<"v">(20583, 3402634839884822181L ^ var1);
         var8[cPG<"v">(6827, 1106268277871852637L ^ var1)] = cPG<"v">(22467, 7367766037634412847L ^ var1);
         var8[cPG<"v">(5120, 7934426921228251872L ^ var1)] = cPG<"v">(3023, 1930879616212053300L ^ var1);
         var8[cPG<"v">(14225, 5371894440452591977L ^ var1)] = cPG<"v">(14965, 8840061379006307471L ^ var1);
         var8[cPG<"v">(14873, 4171057084630932709L ^ var1)] = cPG<"v">(32316, 4878709849223190721L ^ var1);
         var8[cPG<"v">(28445, 8929347901021473271L ^ var1)] = cPG<"v">(5092, 2803665820693968187L ^ var1);
         var8[cPG<"v">(21467, 6650394737340249387L ^ var1)] = cPG<"v">(25977, 3266158666215474060L ^ var1);
         var8[cPG<"v">(16995, 7012474954235602109L ^ var1)] = cPG<"v">(25977, 3266158666215474060L ^ var1);
         var8[cPG<"v">(2111, 8635250891863994087L ^ var1)] = cPG<"v">(248, 8802474228801218078L ^ var1);
         var8[cPG<"v">(8424, 975548275391694373L ^ var1)] = cPG<"v">(18768, 7175363458139254679L ^ var1);
         var8[cPG<"v">(4821, 2246144323354997766L ^ var1)] = cPG<"v">(22467, 7367766037634412847L ^ var1);
         var8[cPG<"v">(12247, 481636112206133L ^ var1)] = cPG<"v">(2190, 2607618994646527597L ^ var1);
         var8[cPG<"v">(14866, 194005738676100332L ^ var1)] = cPG<"v">(23126, 1435673822585420930L ^ var1);
         var8[cPG<"v">(30844, 7866296166883647167L ^ var1)] = cPG<"v">(23126, 1435673822585420930L ^ var1);
         this.nRHCQ = new cC(this, mr.clS(var8)).Vw(20.0).Vy(1.0).Vx(100.0).Vz("%").VA(70.0);
         this.nRHCQ.Vf(this.Liubb::SZ);
         if (var3 != null) {
            iS.bwK("OTiCpc");
         }
      } catch (MatchException var4) {
         throw cPz(var4);
      }
   }

   static {
      long var11 = LjaCw ^ 11747633981791L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "├ä├Ç├Ž\u0017/\u0087\u000e\u0091\\\u0093I┬ż┬«┬Áp┬Ż\u0010\rT├┤├Á┬┤├»├Ąx\u000b\u001b┬¬\u0013├┐├ü┬Ě\u0094";
      int var19 = "├ä├Ç├Ž\u0017/\u0087\u000e\u0091\\\u0093I┬ż┬«┬Áp┬Ż\u0010\rT├┤├Á┬┤├»├Ąx\u000b\u001b┬¬\u0013├┐├ü┬Ě\u0094".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = cPA(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            loRxD = var20;
            PmeuG = new String[2];
            rpuQu = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[64];
            int var3 = 0;
            String var4 = "E┬│G├çJ~p\u0087┬░├║\u0015├ź\n\u009a┬░\u0000┬Ž├ę├Ä┬ąh:p┬Ş\u0013\fz├Çh├ęw\u008aw┬Á├Őv\u008f:├Ě1(\u0014a\u0083├ę├äx┬▒zc├ő\u0004├»^+├ś+├łLX*┬┐C├¬├ł├Ä├ëo├śx├î├║├ż\u001cz\u0001fy3\u009e├░a\u0092$\u001bY┬Č├ô├Ę├éJ\u0014├» ├á┬ę6├ş\u0080Ay├Ö├ź{├ë├ś.├ťlN┬žw\u008e├Ş*├ů-├ä├Ż├Ş\u0092├Ľ├╣├ť\u0083Y\u0082s├▒├×├ž┬╗\u001e@┬ĄCb\u000b├ölE├ą\u0096\u0084F)┬í\u0093├ť├č\u0016├żH)\u000e@d\u0011├Ü\\hqJ)\u000f\u000f\u000fs\u0081\u001c00X┬źM├ŻRe7\u009d├ş\u00849\u008fIm├╝├¬L├Ż\u00831>├▒├â\u0088\u001a^A\u009d-├ĽW\u00940├ęx├╝\u008c\u0017\u0093├┐┬«\u0085P|+'├ąC├╗]├×├┐┬íD┬ú`k\u0090K├Ä#\u0016├ć\u009c┬╗>┬óN'?├â├Á├ÄS\u0083Z\u0010C$┬│├ł├Ź\u0000W┬ź├é├ŁV\u0004├ö├Ć\u0018\t├Ż?\u009a*├│~\u008fI├Á┬ĄWHGc\u0017<├Ě├Ż\"X\u00ad\u0093┬▓u[I┬»r├Ľ├ł>u\u0091\u0092├¬P┬¬bbVS├Ž$\u000e┬│\u0089├Ł\f┬┐\u0005G├ä\u000b├żF\u0012W├║\u008f├Ç├Ś\u0019%├×┬│┬▒├á\u0012├žX\u0015┬Ż┬┤D┬Č\u008a\u009c3├ő\u0081├Čm\u009b├▓├é\f├Éy\u008d\u0097┬Ą├ŁU├ż├Ś \u0001F\u0085├Ę├Ć\u001d*├Ĺ├ź%\u001a├ő┬Ž\b\u0014┬¬\u0018┬¬├ľ┬│┬»:\u0081├í┬╝\u008b\u000e\b'S\u00804w \u001b\u0017z┬óG├Éy├ô*\u007f├ÁA\u009b\u0091├Ç2┬¬T\u008d├»F#├ó\u0012┬Ę├╣S\n├ľIJ1+p┬ą├Ö)├┤\u0096├ą├ť┬▒\u0092\n├╣\u0099├ž)\f\u0019k├ž\u0007\u009c9*├ü┬░\u0097├Ĺ@├Čn┬ż\u0097sU\"a├ę├ä\u0084s];\u009bx┬ęw┬Ę├ë┬Â\u0080├╗┬╗├śZN\u0091┬┐├Ç\u008e\r\u0088┬ž\u000e_I├Á1\u0096";
            int var5 = "E┬│G├çJ~p\u0087┬░├║\u0015├ź\n\u009a┬░\u0000┬Ž├ę├Ä┬ąh:p┬Ş\u0013\fz├Çh├ęw\u008aw┬Á├Őv\u008f:├Ě1(\u0014a\u0083├ę├äx┬▒zc├ő\u0004├»^+├ś+├łLX*┬┐C├¬├ł├Ä├ëo├śx├î├║├ż\u001cz\u0001fy3\u009e├░a\u0092$\u001bY┬Č├ô├Ę├éJ\u0014├» ├á┬ę6├ş\u0080Ay├Ö├ź{├ë├ś.├ťlN┬žw\u008e├Ş*├ů-├ä├Ż├Ş\u0092├Ľ├╣├ť\u0083Y\u0082s├▒├×├ž┬╗\u001e@┬ĄCb\u000b├ölE├ą\u0096\u0084F)┬í\u0093├ť├č\u0016├żH)\u000e@d\u0011├Ü\\hqJ)\u000f\u000f\u000fs\u0081\u001c00X┬źM├ŻRe7\u009d├ş\u00849\u008fIm├╝├¬L├Ż\u00831>├▒├â\u0088\u001a^A\u009d-├ĽW\u00940├ęx├╝\u008c\u0017\u0093├┐┬«\u0085P|+'├ąC├╗]├×├┐┬íD┬ú`k\u0090K├Ä#\u0016├ć\u009c┬╗>┬óN'?├â├Á├ÄS\u0083Z\u0010C$┬│├ł├Ź\u0000W┬ź├é├ŁV\u0004├ö├Ć\u0018\t├Ż?\u009a*├│~\u008fI├Á┬ĄWHGc\u0017<├Ě├Ż\"X\u00ad\u0093┬▓u[I┬»r├Ľ├ł>u\u0091\u0092├¬P┬¬bbVS├Ž$\u000e┬│\u0089├Ł\f┬┐\u0005G├ä\u000b├żF\u0012W├║\u008f├Ç├Ś\u0019%├×┬│┬▒├á\u0012├žX\u0015┬Ż┬┤D┬Č\u008a\u009c3├ő\u0081├Čm\u009b├▓├é\f├Éy\u008d\u0097┬Ą├ŁU├ż├Ś \u0001F\u0085├Ę├Ć\u001d*├Ĺ├ź%\u001a├ő┬Ž\b\u0014┬¬\u0018┬¬├ľ┬│┬»:\u0081├í┬╝\u008b\u000e\b'S\u00804w \u001b\u0017z┬óG├Éy├ô*\u007f├ÁA\u009b\u0091├Ç2┬¬T\u008d├»F#├ó\u0012┬Ę├╣S\n├ľIJ1+p┬ą├Ö)├┤\u0096├ą├ť┬▒\u0092\n├╣\u0099├ž)\f\u0019k├ž\u0007\u009c9*├ü┬░\u0097├Ĺ@├Čn┬ż\u0097sU\"a├ę├ä\u0084s];\u009bx┬ęw┬Ę├ë┬Â\u0080├╗┬╗├śZN\u0091┬┐├Ç\u008e\r\u0088┬ž\u000e_I├Á1\u0096"
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
                           unsKt = var6;
                           RMyPr = new Integer[64];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "├Ľ┬║\u0006l\u001d┬Â├╣┬░*w.├×├Č@\u0097┬░";
                        var5 = "├Ľ┬║\u0006l\u001d┬Â├╣┬░*w.├×├Č@\u0097┬░".length();
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
   public void drawFrame(lC param1, lc param2, class_1297 param3, boolean param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pu.LjaCw J
      // 003: ldc2_w 94790743275001
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 00c: astore 8
      // 00e: invokestatic sixtwo/pv.cPR ()Ljava/lang/String;
      // 011: aload 2
      // 012: invokevirtual sixtwo/lc.bXH ()F
      // 015: fstore 9
      // 017: aload 2
      // 018: invokevirtual sixtwo/lc.bXI ()F
      // 01b: fstore 10
      // 01d: aload 0
      // 01e: fconst_1
      // 01f: invokevirtual sixtwo/pu.cQH (F)F
      // 022: fstore 11
      // 024: aload 8
      // 026: invokevirtual sixtwo/ii.bjo ()F
      // 029: fstore 12
      // 02b: astore 7
      // 02d: fload 11
      // 02f: fload 12
      // 031: fadd
      // 032: fstore 13
      // 034: aload 0
      // 035: getfield sixtwo/pu.Ctvgb Lsixtwo/cu;
      // 038: invokevirtual sixtwo/cu.SZ ()Z
      // 03b: ifeq 047
      // 03e: fload 13
      // 040: goto 049
      // 043: invokestatic sixtwo/pu.cPz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 046: athrow
      // 047: fload 11
      // 049: fstore 14
      // 04b: fload 9
      // 04d: fload 14
      // 04f: fconst_2
      // 050: fmul
      // 051: fcmpg
      // 052: aload 7
      // 054: ifnonnull 07b
      // 057: ifle 07e
      // 05a: goto 061
      // 05d: invokestatic sixtwo/pu.cPz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 060: athrow
      // 061: fload 10
      // 063: aload 7
      // 065: ifnonnull 085
      // 068: goto 06f
      // 06b: invokestatic sixtwo/pu.cPz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06e: athrow
      // 06f: fload 14
      // 071: fconst_2
      // 072: fmul
      // 073: fcmpg
      // 074: goto 07b
      // 077: invokestatic sixtwo/pu.cPz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07a: athrow
      // 07b: ifgt 07f
      // 07e: return
      // 07f: aload 0
      // 080: iload 4
      // 082: invokevirtual sixtwo/pu.cQM (Z)F
      // 085: fstore 15
      // 087: fconst_0
      // 088: fload 9
      // 08a: fload 10
      // 08c: invokestatic java/lang/Math.min (FF)F
      // 08f: ldc_w 0.5
      // 092: fmul
      // 093: fload 14
      // 095: fsub
      // 096: invokestatic java/lang/Math.max (FF)F
      // 099: fstore 16
      // 09b: fload 16
      // 09d: aload 0
      // 09e: getfield sixtwo/pu.rOtpK Lsixtwo/cC;
      // 0a1: invokevirtual sixtwo/cC.VB ()F
      // 0a4: fmul
      // 0a5: ldc_w 100.0
      // 0a8: fdiv
      // 0a9: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 0ac: astore 17
      // 0ae: aload 0
      // 0af: getfield sixtwo/pu.dHEYi Lsixtwo/cG;
      // 0b2: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 0b5: fload 15
      // 0b7: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0ba: astore 18
      // 0bc: aload 0
      // 0bd: getfield sixtwo/pu.LHfJY Lsixtwo/cu;
      // 0c0: invokevirtual sixtwo/cu.SZ ()Z
      // 0c3: ifeq 0d0
      // 0c6: getstatic sixtwo/kd.AhlXN Lsixtwo/kd;
      // 0c9: goto 0d3
      // 0cc: invokestatic sixtwo/pu.cPz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cf: athrow
      // 0d0: getstatic sixtwo/kd.sQVlR Lsixtwo/kd;
      // 0d3: astore 19
      // 0d5: aload 0
      // 0d6: getfield sixtwo/pu.nRHCQ Lsixtwo/cC;
      // 0d9: invokevirtual sixtwo/cC.VB ()F
      // 0dc: ldc_w 10.0
      // 0df: fdiv
      // 0e0: fstore 20
      // 0e2: aload 0
      // 0e3: getfield sixtwo/pu.Ctvgb Lsixtwo/cu;
      // 0e6: invokevirtual sixtwo/cu.SZ ()Z
      // 0e9: aload 7
      // 0eb: ifnonnull 188
      // 0ee: ifeq 17a
      // 0f1: goto 0f8
      // 0f4: invokestatic sixtwo/pu.cPz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f7: athrow
      // 0f8: aload 8
      // 0fa: invokevirtual sixtwo/ii.bji ()F
      // 0fd: fstore 21
      // 0ff: aload 8
      // 101: invokevirtual sixtwo/ii.bjj ()F
      // 104: fstore 22
      // 106: aload 8
      // 108: invokevirtual sixtwo/ii.bjk ()F
      // 10b: fstore 23
      // 10d: aload 8
      // 10f: invokevirtual sixtwo/ii.bjl ()F
      // 112: fstore 24
      // 114: aload 8
      // 116: invokevirtual sixtwo/ii.bjm ()F
      // 119: fstore 25
      // 11b: aload 8
      // 11d: invokevirtual sixtwo/ii.bjp ()Lsixtwo/mG;
      // 120: astore 26
      // 122: aload 1
      // 123: getstatic sixtwo/kd.sQVlR Lsixtwo/kd;
      // 126: aload 2
      // 127: invokevirtual sixtwo/lC.ccT (Lsixtwo/kd;Lsixtwo/lc;)Lsixtwo/kg;
      // 12a: fload 14
      // 12c: invokevirtual sixtwo/kg.bOA (F)Lsixtwo/kg;
      // 12f: aload 17
      // 131: fload 12
      // 133: invokevirtual sixtwo/ld.inflate (F)Lsixtwo/ld;
      // 136: invokevirtual sixtwo/kg.bOu (Lsixtwo/ld;)Lsixtwo/kg;
      // 139: fload 20
      // 13b: invokevirtual sixtwo/kg.bOE (F)Lsixtwo/kg;
      // 13e: fload 21
      // 140: invokevirtual sixtwo/kg.bOO (F)Lsixtwo/kg;
      // 143: fload 22
      // 145: invokevirtual sixtwo/kg.bOP (F)Lsixtwo/kg;
      // 148: fload 23
      // 14a: invokevirtual sixtwo/kg.bOQ (F)Lsixtwo/kg;
      // 14d: fload 24
      // 14f: invokevirtual sixtwo/kg.bOR (F)Lsixtwo/kg;
      // 152: fload 25
      // 154: invokevirtual sixtwo/kg.bON (F)Lsixtwo/kg;
      // 157: aload 18
      // 159: invokevirtual sixtwo/kg.bOW (Lsixtwo/mG;)Lsixtwo/kg;
      // 15c: fload 12
      // 15e: invokevirtual sixtwo/kg.bOU (F)Lsixtwo/kg;
      // 161: aload 26
      // 163: invokevirtual sixtwo/kg.bOV (Lsixtwo/mG;)Lsixtwo/kg;
      // 166: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 169: fload 15
      // 16b: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 16e: invokevirtual sixtwo/kg.bOv (Lsixtwo/mG;)Lsixtwo/kg;
      // 171: invokevirtual sixtwo/kg.bPc ()Lsixtwo/kg;
      // 174: pop
      // 175: aload 7
      // 177: ifnull 1dc
      // 17a: aload 0
      // 17b: getfield sixtwo/pu.TcPdF Lsixtwo/cu;
      // 17e: invokevirtual sixtwo/cu.SZ ()Z
      // 181: goto 188
      // 184: invokestatic sixtwo/pu.cPz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 187: athrow
      // 188: ifeq 1b6
      // 18b: aload 1
      // 18c: aload 19
      // 18e: aload 2
      // 18f: invokevirtual sixtwo/lC.ccT (Lsixtwo/kd;Lsixtwo/lc;)Lsixtwo/kg;
      // 192: fload 11
      // 194: invokevirtual sixtwo/kg.bOA (F)Lsixtwo/kg;
      // 197: fload 20
      // 199: invokevirtual sixtwo/kg.bOE (F)Lsixtwo/kg;
      // 19c: aload 17
      // 19e: invokevirtual sixtwo/kg.bOu (Lsixtwo/ld;)Lsixtwo/kg;
      // 1a1: aload 18
      // 1a3: invokevirtual sixtwo/kg.bOv (Lsixtwo/mG;)Lsixtwo/kg;
      // 1a6: invokevirtual sixtwo/kg.bOY ()Lsixtwo/kg;
      // 1a9: pop
      // 1aa: aload 7
      // 1ac: ifnull 1dc
      // 1af: goto 1b6
      // 1b2: invokestatic sixtwo/pu.cPz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b5: athrow
      // 1b6: aload 1
      // 1b7: aload 19
      // 1b9: aload 2
      // 1ba: invokevirtual sixtwo/lC.ccT (Lsixtwo/kd;Lsixtwo/lc;)Lsixtwo/kg;
      // 1bd: fload 11
      // 1bf: invokevirtual sixtwo/kg.bOA (F)Lsixtwo/kg;
      // 1c2: fload 20
      // 1c4: invokevirtual sixtwo/kg.bOE (F)Lsixtwo/kg;
      // 1c7: aload 17
      // 1c9: invokevirtual sixtwo/kg.bOu (Lsixtwo/ld;)Lsixtwo/kg;
      // 1cc: aload 18
      // 1ce: invokevirtual sixtwo/kg.bOv (Lsixtwo/mG;)Lsixtwo/kg;
      // 1d1: invokevirtual sixtwo/kg.bOX ()Lsixtwo/kg;
      // 1d4: pop
      // 1d5: goto 1dc
      // 1d8: invokestatic sixtwo/pu.cPz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1db: athrow
      // 1dc: return
   }

   private static CallSite cPD(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cPC".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pu" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int cPE(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29345;
      if (RMyPr[var3] == null) {
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
         long var5 = unsKt[var3];
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
         Object[] var9 = (Object[])rpuQu.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               rpuQu.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/pu", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         RMyPr[var3] = var15;
      }

      return RMyPr[var3];
   }

   private static int cPF(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cPE(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Object cPC(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cPB(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite cPG(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cPF".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pu" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String cPA(byte[] var0) {
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

   private static MatchException cPz(MatchException var0) {
      return var0;
   }

   private static String cPB(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 14618;
      if (PmeuG[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])WkgJD.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               WkgJD.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/pu", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = loRxD[var5].getBytes("ISO-8859-1");
         PmeuG[var5] = cPA(((Cipher)var4[0]).doFinal(var9));
      }

      return PmeuG[var5];
   }
}
