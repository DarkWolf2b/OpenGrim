package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1309;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_2596;

public class ff extends gg {
   private final ct cehgg;
   private final cu dYwpF;
   private final cu NuoRm;
   private final cA qWnBv;
   private final cA FUqia;
   private final cJ bAadz;
   private final cC qyvvJ;
   private final cJ fFKwZ;
   private final cJ Bfvhw;
   private final kx AhpMu;
   private final Queue<class_2596<?>> zkfXg;
   private final mT uiKAR;
   private class_243 qBKIn;
   private boolean IydTB;
   private int lseaG;
   private class_238 Stryf;
   private boolean nlYuR;
   private static final long ikRrf = gb.aYR(8458180115173624693L, 9118909756170962521L, MethodHandles.lookup().lookupClass()).a(27814350386545L);
   private static final String[] qVORx;
   private static final String[] snpFS;
   private static final Map mIJyD = new HashMap(13);
   private static final long[] HcwIb;
   private static final Integer[] maZct;
   private static final Map yGhuZ;

   public ff() {
      long var1 = ikRrf ^ 68023302531376L;
      super(gf.aZL(aIR<"g">(205, 6167788781053116918L ^ var1), false, gh.xwjCw).aZS(false));
      this.cehgg = new ct(
         this,
         mr.clS(
            new int[]{
               aIR<"g">(23993, 8994436616081497222L ^ var1),
               aIR<"g">(7097, 41422964198873775L ^ var1),
               aIR<"g">(12841, 3073404526872703869L ^ var1),
               aIR<"g">(25650, 4045308674831901964L ^ var1)
            }
         )
      );
      ct var10003 = this.cehgg;
      int[] var10004 = new int[aIR<"g">(12452, 4852564711895150977L ^ var1)];
      var10004[0] = aIR<"g">(9114, 1717254231080870560L ^ var1);
      var10004[1] = aIR<"g">(21789, 5514643106494731330L ^ var1);
      var10004[2] = aIR<"g">(8138, 5817810718557642395L ^ var1);
      var10004[3] = aIR<"g">(5495, 1913262348429956200L ^ var1);
      var10004[4] = aIR<"g">(2879, 989996487625312815L ^ var1);
      var10004[5] = aIR<"g">(11574, 7179985872324078629L ^ var1);
      this.dYwpF = new cu(var10003, mr.clS(var10004));
      var10003 = this.cehgg;
      var10004 = new int[aIR<"g">(30188, 5061666476495467750L ^ var1)];
      var10004[0] = aIR<"g">(17609, 393128189943105008L ^ var1);
      var10004[1] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[2] = aIR<"g">(18709, 9119688327026526258L ^ var1);
      var10004[3] = aIR<"g">(32752, 7238490176390299371L ^ var1);
      var10004[4] = aIR<"g">(19767, 2966082705515564082L ^ var1);
      var10004[5] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[aIR<"g">(9728, 8144649416615995139L ^ var1)] = aIR<"g">(9843, 1330454578656061310L ^ var1);
      var10004[aIR<"g">(29987, 43024531427554365L ^ var1)] = aIR<"g">(14706, 2809061894458325026L ^ var1);
      var10004[aIR<"g">(16187, 3991073718485237257L ^ var1)] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      this.NuoRm = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aIR<"g">(22711, 7998851617680972266L ^ var1)];
      var10004[0] = aIR<"g">(4502, 2340705855058874514L ^ var1);
      var10004[1] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[2] = aIR<"g">(11566, 7582102899448884335L ^ var1);
      var10004[3] = aIR<"g">(28861, 3839430001338872212L ^ var1);
      var10004[4] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[5] = aIR<"g">(26873, 6159543110999206357L ^ var1);
      var10004[aIR<"g">(9728, 8144649416615995139L ^ var1)] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(6296, 4268813018234755504L ^ var1)] = aIR<"g">(3059, 5062168956905327307L ^ var1);
      var10004[aIR<"g">(25328, 2585648153434579920L ^ var1)] = aIR<"g">(21005, 5637823417200497449L ^ var1);
      var10004[aIR<"g">(30666, 997244085040576252L ^ var1)] = aIR<"g">(22032, 7218451877640558348L ^ var1);
      var10004[aIR<"g">(6943, 3493787064816704050L ^ var1)] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[aIR<"g">(18280, 6162700822536308317L ^ var1)] = aIR<"g">(24976, 4780242078542061701L ^ var1);
      var10004[aIR<"g">(27410, 7893878092149189135L ^ var1)] = aIR<"g">(8622, 2481605416009867515L ^ var1);
      var10004[aIR<"g">(18206, 6271414919051134468L ^ var1)] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[aIR<"g">(30261, 3199599924946597671L ^ var1)] = aIR<"g">(29284, 7772939109525943094L ^ var1);
      this.qWnBv = new cA(this, mr.clS(var10004)).UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0).UH(aIO<"a">(28664, 555906691334491896L ^ var1));
      var10004 = new int[aIR<"g">(11148, 1898976123577215675L ^ var1)];
      var10004[0] = aIR<"g">(608, 7860842057003271020L ^ var1);
      var10004[1] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[2] = aIR<"g">(14706, 2809061894458325026L ^ var1);
      var10004[3] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[4] = aIR<"g">(29602, 8956823563861258898L ^ var1);
      var10004[5] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[aIR<"g">(9728, 8144649416615995139L ^ var1)] = aIR<"g">(21005, 5637823417200497449L ^ var1);
      var10004[aIR<"g">(6296, 4268813018234755504L ^ var1)] = aIR<"g">(14706, 2809061894458325026L ^ var1);
      var10004[aIR<"g">(25328, 2585648153434579920L ^ var1)] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[aIR<"g">(30666, 997244085040576252L ^ var1)] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(11058, 7674381246086130224L ^ var1)] = aIR<"g">(17109, 1890595762444551043L ^ var1);
      var10004[aIR<"g">(7339, 6785908908805823903L ^ var1)] = aIR<"g">(30856, 71953330883787189L ^ var1);
      var10004[aIR<"g">(25887, 3894844591027119169L ^ var1)] = aIR<"g">(22285, 7989100553972962865L ^ var1);
      var10004[aIR<"g">(26917, 4600299468157347860L ^ var1)] = aIR<"g">(22032, 7218451877640558348L ^ var1);
      var10004[aIR<"g">(27431, 2411071400418470527L ^ var1)] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[aIR<"g">(26355, 8864064570618800100L ^ var1)] = aIR<"g">(21005, 5637823417200497449L ^ var1);
      var10004[aIR<"g">(6389, 5626439769014835631L ^ var1)] = aIR<"g">(11006, 2820401716696165350L ^ var1);
      var10004[aIR<"g">(30790, 3190688261296191750L ^ var1)] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      this.FUqia = new cA(this, mr.clS(var10004)).UG(0.1).UE(1.0).UF(6.0).UI(1.0, 3.6).UH(aIO<"a">(18884, 41709544864803013L ^ var1));
      var10004 = new int[aIR<"g">(11148, 1898976123577215675L ^ var1)];
      var10004[0] = aIR<"g">(29602, 8956823563861258898L ^ var1);
      var10004[1] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[2] = aIR<"g">(32764, 6884795592962146003L ^ var1);
      var10004[3] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[4] = aIR<"g">(22032, 7218451877640558348L ^ var1);
      var10004[5] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(9728, 8144649416615995139L ^ var1)] = aIR<"g">(28951, 7241448490133254168L ^ var1);
      var10004[aIR<"g">(6296, 4268813018234755504L ^ var1)] = aIR<"g">(21005, 5637823417200497449L ^ var1);
      var10004[aIR<"g">(25328, 2585648153434579920L ^ var1)] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(30666, 997244085040576252L ^ var1)] = aIR<"g">(18155, 3703618245040850922L ^ var1);
      var10004[aIR<"g">(11058, 7674381246086130224L ^ var1)] = aIR<"g">(21005, 5637823417200497449L ^ var1);
      var10004[aIR<"g">(7339, 6785908908805823903L ^ var1)] = aIR<"g">(21789, 5514643106494731330L ^ var1);
      var10004[aIR<"g">(25887, 3894844591027119169L ^ var1)] = aIR<"g">(11006, 2820401716696165350L ^ var1);
      var10004[aIR<"g">(26917, 4600299468157347860L ^ var1)] = aIR<"g">(16425, 7641603473511530778L ^ var1);
      var10004[aIR<"g">(27431, 2411071400418470527L ^ var1)] = aIR<"g">(9589, 546449862440199293L ^ var1);
      var10004[aIR<"g">(26355, 8864064570618800100L ^ var1)] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[aIR<"g">(17732, 1650770407396754456L ^ var1)] = aIR<"g">(11006, 2820401716696165350L ^ var1);
      var10004[aIR<"g">(5674, 7807993334676723489L ^ var1)] = aIR<"g">(16425, 7641603473511530778L ^ var1);
      this.bAadz = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aIR<"g">(11058, 7674381246086130224L ^ var1)];
      var10004[0] = aIR<"g">(29602, 8956823563861258898L ^ var1);
      var10004[1] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[2] = aIR<"g">(32764, 6884795592962146003L ^ var1);
      var10004[3] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[4] = aIR<"g">(22032, 7218451877640558348L ^ var1);
      var10004[5] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(9728, 8144649416615995139L ^ var1)] = aIR<"g">(5193, 4240234713794942288L ^ var1);
      var10004[aIR<"g">(6296, 4268813018234755504L ^ var1)] = aIR<"g">(28071, 7234192650954370292L ^ var1);
      var10004[aIR<"g">(25328, 2585648153434579920L ^ var1)] = aIR<"g">(11417, 394861734042086847L ^ var1);
      var10004[aIR<"g">(30666, 997244085040576252L ^ var1)] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      this.qyvvJ = new cC(this, mr.clS(var10004)).Vy(5.0).Vw(0.0).Vx(1000.0).VA(100.0).Vz(aIO<"a">(29179, 6790137186664829176L ^ var1));
      var10004 = new int[aIR<"g">(11148, 1898976123577215675L ^ var1)];
      var10004[0] = aIR<"g">(29602, 8956823563861258898L ^ var1);
      var10004[1] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[2] = aIR<"g">(32764, 6884795592962146003L ^ var1);
      var10004[3] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[4] = aIR<"g">(22032, 7218451877640558348L ^ var1);
      var10004[5] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(9728, 8144649416615995139L ^ var1)] = aIR<"g">(28792, 7466345157081264497L ^ var1);
      var10004[aIR<"g">(6296, 4268813018234755504L ^ var1)] = aIR<"g">(21005, 5637823417200497449L ^ var1);
      var10004[aIR<"g">(25328, 2585648153434579920L ^ var1)] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(30666, 997244085040576252L ^ var1)] = aIR<"g">(13457, 6996207848030516630L ^ var1);
      var10004[aIR<"g">(11058, 7674381246086130224L ^ var1)] = aIR<"g">(1749, 6100274570750297996L ^ var1);
      var10004[aIR<"g">(7339, 6785908908805823903L ^ var1)] = aIR<"g">(28840, 2253006747225715112L ^ var1);
      var10004[aIR<"g">(25887, 3894844591027119169L ^ var1)] = aIR<"g">(29284, 7772939109525943094L ^ var1);
      var10004[aIR<"g">(26917, 4600299468157347860L ^ var1)] = aIR<"g">(21789, 5514643106494731330L ^ var1);
      var10004[aIR<"g">(27431, 2411071400418470527L ^ var1)] = aIR<"g">(32764, 6884795592962146003L ^ var1);
      var10004[aIR<"g">(26355, 8864064570618800100L ^ var1)] = aIR<"g">(28071, 7234192650954370292L ^ var1);
      var10004[aIR<"g">(17732, 1650770407396754456L ^ var1)] = aIR<"g">(21789, 5514643106494731330L ^ var1);
      var10004[aIR<"g">(5674, 7807993334676723489L ^ var1)] = aIR<"g">(21005, 5637823417200497449L ^ var1);
      this.fFKwZ = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[aIR<"g">(14377, 5025489683013122306L ^ var1)];
      var10004[0] = aIR<"g">(29602, 8956823563861258898L ^ var1);
      var10004[1] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[2] = aIR<"g">(32764, 6884795592962146003L ^ var1);
      var10004[3] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[4] = aIR<"g">(22032, 7218451877640558348L ^ var1);
      var10004[5] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(9728, 8144649416615995139L ^ var1)] = aIR<"g">(28792, 7466345157081264497L ^ var1);
      var10004[aIR<"g">(6296, 4268813018234755504L ^ var1)] = aIR<"g">(21005, 5637823417200497449L ^ var1);
      var10004[aIR<"g">(25328, 2585648153434579920L ^ var1)] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(30666, 997244085040576252L ^ var1)] = aIR<"g">(11240, 2006360262048066251L ^ var1);
      var10004[aIR<"g">(11058, 7674381246086130224L ^ var1)] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      var10004[aIR<"g">(7339, 6785908908805823903L ^ var1)] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[aIR<"g">(25887, 3894844591027119169L ^ var1)] = aIR<"g">(29284, 7772939109525943094L ^ var1);
      var10004[aIR<"g">(26917, 4600299468157347860L ^ var1)] = aIR<"g">(22032, 7218451877640558348L ^ var1);
      var10004[aIR<"g">(27431, 2411071400418470527L ^ var1)] = aIR<"g">(27708, 8535780111159160094L ^ var1);
      var10004[aIR<"g">(26355, 8864064570618800100L ^ var1)] = aIR<"g">(13742, 7693421274809611392L ^ var1);
      var10004[aIR<"g">(17732, 1650770407396754456L ^ var1)] = aIR<"g">(31370, 4454969610610473888L ^ var1);
      var10004[aIR<"g">(5674, 7807993334676723489L ^ var1)] = aIR<"g">(6863, 6594491304576293851L ^ var1);
      var10004[aIR<"g">(11148, 1898976123577215675L ^ var1)] = aIR<"g">(10038, 5961137461630051879L ^ var1);
      var10004[aIR<"g">(23437, 7066761933574756995L ^ var1)] = aIR<"g">(8206, 5202840981622989103L ^ var1);
      var10004[aIR<"g">(16967, 1301257082192839452L ^ var1)] = aIR<"g">(22032, 7218451877640558348L ^ var1);
      var10004[aIR<"g">(10851, 3161159324095621989L ^ var1)] = aIR<"g">(19423, 4158595443030968968L ^ var1);
      this.Bfvhw = new cJ(this, mr.clS(var10004)).WE(false);
      this.AhpMu = new kx(this, ku.qnXgu);
      this.zkfXg = new ConcurrentLinkedQueue<>();
      this.uiKAR = mT.cpz();
      this.qBKIn = class_243.field_1353;
      this.FUqia.Vf(this.NuoRm::SZ);
   }

   static {
      long var11 = ikRrf ^ 99109528719947L;
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
      String var17 = "\u009cqi\u00adnÂw\u001f\u0003ó\u009eó4è\u00ad)\u0010\u007f,(ûþØ´ðè\u000bÃ \u00adî<ÿ\u0010ä\u009bÒÓ_\u008dýê(6Å\u001e4~\u000f¸";
      int var19 = "\u009cqi\u00adnÂw\u001f\u0003ó\u009eó4è\u00ad)\u0010\u007f,(ûþØ´ðè\u000bÃ \u00adî<ÿ\u0010ä\u009bÒÓ_\u008dýê(6Å\u001e4~\u000f¸".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = aIL(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            qVORx = var20;
            snpFS = new String[3];
            yGhuZ = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[82];
            int var3 = 0;
            String var4 = "ÞHÈ¦ê_7|dÙ\u0086çË\u008bÚ;*]`~Û\u007fmhb?&ìÇÅ\u0093\u0084\rõ9¾Ãóìâ¨ñ©NN\u00174q\u0091³vðïks%\u0018\u0018\u0091~ë*\b\u0010®b;\u0019Ý\u0085\u0080Å\u009c\u008a\u001a¦\u00919\u008a\u0094èQÁ\u009e\u0088-\u008e\u008fvåzøG´\u0004\u001fýÜláV]Ã\u0004ÿ`\u0088·ª\u0080ìO9\u008a¤Î'e\u008bCs\u0098N¤ùe\u0004'Ö¾*\u001fÅ\b\rgà¢L¨cC\fÞæ\u0083\u0091\f§\u0003Ý'Ö×8¬}[·KÃ{9{\u0005Ø3s|©¸#[¶$®ûÃ\u0011L2Læ`ªÒU5\u0083*bé9\u0097\u0094Öm7&å/Íº\"[¯\u0004\u008dê=¹ÙÄÍ^ì]r}Î5³\u0092´\u001fÌ8\u001c4\u0013»af¡µ\røÅ}r\u0006ÿm¦~Âè¸\u001fTÒÝ¿¢\u0005u]a¨R8\u0086\u008d8\u001d\u001c9\u008e_ývhß·\u0080`\u0091ÍkÆ_\u0084\u009e´æY®¢ù'\u009eÞW\u0087y¨oæD\faJëÑ_kM÷]\u0091T¯\u0004\u001eá\rù\u0098³\u008cï\u001c/ýG®¸;\u0007ÝhL\u0081xH¿´\u0013\u0088ÃL¿ÍE\u0001|\"\u0002\u001aÓå`£Ú\u000bÍ/{\u0095j\u0001\u0013?:ãc>\u00110\u008f.Êõ-\u0083|Ý@\u0080A\"HI\u0012;8\u009f^L¶\u001e \u0015DM²®t\u0012t\u0089ÀÊ½÷Ãuhì£7´êX\u0000)ÄÍ»Ó*Ý\\«\fü\u0085ý\u001a])s\u0083Ô!äçÿÌkÌDI\t±UÂ\u0018ð\u0012xÓvÁ\u001býó`rÈ@vä~º\u0086ñ\fôÂ¤zUr#\u0098ºE=ùzµIp\u0001ÌI®ÔÚã\u0088Ë¿(\u0011Ò`\u0016.ÌpW=\u0005\u0018 Cz§{óbÍÆ\u0093\u0005m0\u008fîû.Ê²º\u0088\u001e\u0091Åµ\bR1\u008a'þC0ËpIg2³\u0092\u007f\u008b \u000fåTrJ\u008eD×ôÞLÊïLþgÆÏ\u008c`&2¬ªó\u001fTå\u0013£îlø>\u009dZÊZáÂ\u001b\u0090-ÜëÕÞ\u0017\u0002¿ö?\u0003R[U6Ä)Ûóá{hÑ\u0096\tì¸\u00ad\u000bafÚ\u00104\u001d\u00117¿Þ\u00195x°4\u0080»Á2\u008c";
            int var5 = "ÞHÈ¦ê_7|dÙ\u0086çË\u008bÚ;*]`~Û\u007fmhb?&ìÇÅ\u0093\u0084\rõ9¾Ãóìâ¨ñ©NN\u00174q\u0091³vðïks%\u0018\u0018\u0091~ë*\b\u0010®b;\u0019Ý\u0085\u0080Å\u009c\u008a\u001a¦\u00919\u008a\u0094èQÁ\u009e\u0088-\u008e\u008fvåzøG´\u0004\u001fýÜláV]Ã\u0004ÿ`\u0088·ª\u0080ìO9\u008a¤Î'e\u008bCs\u0098N¤ùe\u0004'Ö¾*\u001fÅ\b\rgà¢L¨cC\fÞæ\u0083\u0091\f§\u0003Ý'Ö×8¬}[·KÃ{9{\u0005Ø3s|©¸#[¶$®ûÃ\u0011L2Læ`ªÒU5\u0083*bé9\u0097\u0094Öm7&å/Íº\"[¯\u0004\u008dê=¹ÙÄÍ^ì]r}Î5³\u0092´\u001fÌ8\u001c4\u0013»af¡µ\røÅ}r\u0006ÿm¦~Âè¸\u001fTÒÝ¿¢\u0005u]a¨R8\u0086\u008d8\u001d\u001c9\u008e_ývhß·\u0080`\u0091ÍkÆ_\u0084\u009e´æY®¢ù'\u009eÞW\u0087y¨oæD\faJëÑ_kM÷]\u0091T¯\u0004\u001eá\rù\u0098³\u008cï\u001c/ýG®¸;\u0007ÝhL\u0081xH¿´\u0013\u0088ÃL¿ÍE\u0001|\"\u0002\u001aÓå`£Ú\u000bÍ/{\u0095j\u0001\u0013?:ãc>\u00110\u008f.Êõ-\u0083|Ý@\u0080A\"HI\u0012;8\u009f^L¶\u001e \u0015DM²®t\u0012t\u0089ÀÊ½÷Ãuhì£7´êX\u0000)ÄÍ»Ó*Ý\\«\fü\u0085ý\u001a])s\u0083Ô!äçÿÌkÌDI\t±UÂ\u0018ð\u0012xÓvÁ\u001býó`rÈ@vä~º\u0086ñ\fôÂ¤zUr#\u0098ºE=ùzµIp\u0001ÌI®ÔÚã\u0088Ë¿(\u0011Ò`\u0016.ÌpW=\u0005\u0018 Cz§{óbÍÆ\u0093\u0005m0\u008fîû.Ê²º\u0088\u001e\u0091Åµ\bR1\u008a'þC0ËpIg2³\u0092\u007f\u008b \u000fåTrJ\u008eD×ôÞLÊïLþgÆÏ\u008c`&2¬ªó\u001fTå\u0013£îlø>\u009dZÊZáÂ\u001b\u0090-ÜëÕÞ\u0017\u0002¿ö?\u0003R[U6Ä)Ûóá{hÑ\u0096\tì¸\u00ad\u000bafÚ\u00104\u001d\u00117¿Þ\u00195x°4\u0080»Á2\u008c"
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
                           HcwIb = var6;
                           maZct = new Integer[82];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "µæ*\u009a\u0016ïtqË\u0089öÎÏ-\u0002°";
                        var5 = "µæ*\u009a\u0016ïtqË\u0089öÎÏ-\u0002°".length();
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
   public void aaj() {
      super.aaj();
      this.zkfXg.clear();
      this.qBKIn = rD.dlmvG.field_1724.method_73189();
      this.AhpMu.bQZ(this.qBKIn, rD.dlmvG.field_1724);
      this.lseaG = this.qWnBv.UN().intValue();
      this.uiKAR.cpB();
      this.Stryf = null;
      this.nlYuR = false;
   }

   @Override
   public void YO() {
      super.YO();
      this.aIp();
   }

   private static int aIQ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aIP(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public cC aIz() {
      return this.qyvvJ;
   }

   private static String aIL(byte[] var0) {
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

   public ct aIt() {
      return this.cehgg;
   }

   public cu aIu() {
      return this.dYwpF;
   }

   public class_238 aII() {
      return this.Stryf;
   }

   public cu aIv() {
      return this.NuoRm;
   }

   @hG
   public void aIo(go$sX var1) {
      long var2 = ikRrf ^ 67534788073021L;
      int[] var4 = fg.aIW();

      int var10000;
      label59: {
         try {
            var10000 = this.bab();
            if (var4 != null) {
               break label59;
            }

            if (var10000 == 0) {
               return;
            }
         } catch (MatchException var10) {
            throw aIK(var10);
         }

         var10000 = this.AhpMu.bQX();
      }

      label49: {
         label64: {
            label47: {
               try {
                  if (var4 != null) {
                     break label47;
                  }

                  if (var10000 == 0) {
                     return;
                  }
               } catch (MatchException var9) {
                  throw aIK(var9);
               }

               try {
                  var11 = this;
                  if (var4 != null) {
                     break label64;
                  }

                  var10000 = this.lseaG;
               } catch (MatchException var7) {
                  throw aIK(var7);
               }
            }

            try {
               if (var10000 <= 0) {
                  var12 = 1.0F;
                  break label49;
               }
            } catch (MatchException var8) {
               throw aIK(var8);
            }

            var11 = this;
         }

         var12 = (float)Math.min(var11.uiKAR.cpF(), (long)this.lseaG) / this.lseaG;
      }

      float var5 = var12;
      kw var6 = kw.bRK().bRO(var5, 1.0F, 0.5F, 0.0F);
      this.AhpMu.bQV(var6).bQQ(var1.bbh(), var1.bbi(), rD.dlmvG.field_1724);
   }

   private static CallSite aIR(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aIQ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ff" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public cA aIw() {
      return this.qWnBv;
   }

   public cJ aIy() {
      return this.bAadz;
   }

   public kx aIC() {
      return this.AhpMu;
   }

   public class_243 aIF() {
      return this.qBKIn;
   }

   private void aIp() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ff.ikRrf J
      // 03: ldc2_w 54806806508842
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 24
      // 11: invokevirtual sixtwo/ff.bab ()Z
      // 14: ifne 23
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: return
      // 1f: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: bipush 1
      // 25: putfield sixtwo/ff.IydTB Z
      // 28: aload 0
      // 29: getfield sixtwo/ff.zkfXg Ljava/util/Queue;
      // 2c: invokeinterface java/util/Queue.isEmpty ()Z 1
      // 31: ifne 58
      // 34: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 37: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 3a: aload 0
      // 3b: getfield sixtwo/ff.zkfXg Ljava/util/Queue;
      // 3e: invokeinterface java/util/Queue.poll ()Ljava/lang/Object; 1
      // 43: checkcast net/minecraft/class_2596
      // 46: invokevirtual net/minecraft/class_634.method_52787 (Lnet/minecraft/class_2596;)V
      // 49: aload 3
      // 4a: ifnonnull 82
      // 4d: aload 3
      // 4e: ifnull 28
      // 51: goto 58
      // 54: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: aload 0
      // 59: bipush 0
      // 5a: putfield sixtwo/ff.IydTB Z
      // 5d: aload 0
      // 5e: getfield sixtwo/ff.uiKAR Lsixtwo/mT;
      // 61: invokevirtual sixtwo/mT.cpB ()V
      // 64: aload 0
      // 65: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 68: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 6b: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 6e: putfield sixtwo/ff.qBKIn Lnet/minecraft/class_243;
      // 71: aload 0
      // 72: getfield sixtwo/ff.AhpMu Lsixtwo/kx;
      // 75: aload 0
      // 76: getfield sixtwo/ff.qBKIn Lnet/minecraft/class_243;
      // 79: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 7c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 7f: invokevirtual sixtwo/kx.bRb (Lnet/minecraft/class_243;Lnet/minecraft/class_742;)V
      // 82: return
   }

   private boolean aIq() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ff.ikRrf J
      // 03: ldc2_w 117457773799224
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/ff.aIr ()Lnet/minecraft/class_1309;
      // 0f: astore 4
      // 11: astore 3
      // 12: aload 4
      // 14: ifnonnull 1d
      // 17: bipush 1
      // 18: ireturn
      // 19: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 20: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 23: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 26: aload 4
      // 28: invokevirtual net/minecraft/class_1309.method_5829 ()Lnet/minecraft/class_238;
      // 2b: invokestatic sixtwo/jg.bBJ (Lnet/minecraft/class_243;Lnet/minecraft/class_238;)D
      // 2e: dstore 5
      // 30: aload 0
      // 31: getfield sixtwo/ff.FUqia Lsixtwo/cA;
      // 34: dload 5
      // 36: invokevirtual sixtwo/cA.UM (D)Z
      // 39: aload 3
      // 3a: ifnonnull 61
      // 3d: ifne 52
      // 40: goto 47
      // 43: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 0
      // 48: bipush 0
      // 49: putfield sixtwo/ff.nlYuR Z
      // 4c: bipush 1
      // 4d: ireturn
      // 4e: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: aload 0
      // 53: aload 3
      // 54: ifnonnull 6b
      // 57: getfield sixtwo/ff.nlYuR Z
      // 5a: goto 61
      // 5d: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: ifeq 6a
      // 64: bipush 1
      // 65: ireturn
      // 66: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 69: athrow
      // 6a: aload 0
      // 6b: getfield sixtwo/ff.Stryf Lnet/minecraft/class_238;
      // 6e: aload 3
      // 6f: ifnonnull 86
      // 72: ifnonnull 82
      // 75: goto 7c
      // 78: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7b: athrow
      // 7c: bipush 0
      // 7d: ireturn
      // 7e: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 81: athrow
      // 82: aload 0
      // 83: getfield sixtwo/ff.Stryf Lnet/minecraft/class_238;
      // 86: invokevirtual net/minecraft/class_238.method_1005 ()Lnet/minecraft/class_243;
      // 89: aload 4
      // 8b: invokevirtual net/minecraft/class_1309.method_5829 ()Lnet/minecraft/class_238;
      // 8e: invokestatic sixtwo/jg.bBJ (Lnet/minecraft/class_243;Lnet/minecraft/class_238;)D
      // 91: dstore 7
      // 93: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 96: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 99: invokevirtual net/minecraft/class_746.method_5829 ()Lnet/minecraft/class_238;
      // 9c: invokevirtual net/minecraft/class_238.method_1005 ()Lnet/minecraft/class_243;
      // 9f: aload 4
      // a1: invokevirtual net/minecraft/class_1309.method_5829 ()Lnet/minecraft/class_238;
      // a4: invokestatic sixtwo/jg.bBJ (Lnet/minecraft/class_243;Lnet/minecraft/class_238;)D
      // a7: dstore 9
      // a9: dload 7
      // ab: dload 9
      // ad: dcmpg
      // ae: aload 3
      // af: ifnonnull bd
      // b2: ifge c0
      // b5: goto bc
      // b8: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bb: athrow
      // bc: bipush 1
      // bd: goto c1
      // c0: bipush 0
      // c1: ireturn
   }

   private static MatchException aIK(MatchException var0) {
      return var0;
   }

   @hG
   public void aIm(gL$tj param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ff.ikRrf J
      // 003: ldc2_w 61692911259975
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/fg.aIW ()[I
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/ff.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 018: athrow
      // 019: aload 1
      // 01a: aload 4
      // 01c: ifnonnull 03b
      // 01f: invokevirtual sixtwo/gL$tj.dpm ()Lnet/minecraft/class_2535;
      // 022: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 025: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 028: invokevirtual net/minecraft/class_634.method_48296 ()Lnet/minecraft/class_2535;
      // 02b: if_acmpeq 03a
      // 02e: goto 035
      // 031: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 034: athrow
      // 035: return
      // 036: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: aload 1
      // 03b: invokevirtual sixtwo/gL$tj.bcf ()Lnet/minecraft/class_2596;
      // 03e: astore 5
      // 040: aload 0
      // 041: getfield sixtwo/ff.IydTB Z
      // 044: aload 4
      // 046: ifnonnull 059
      // 049: ifeq 054
      // 04c: goto 053
      // 04f: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 052: athrow
      // 053: return
      // 054: aload 5
      // 056: instanceof net/minecraft/class_2824
      // 059: aload 4
      // 05b: ifnonnull 074
      // 05e: ifne 0d4
      // 061: goto 068
      // 064: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 067: athrow
      // 068: aload 5
      // 06a: instanceof net/minecraft/class_2879
      // 06d: goto 074
      // 070: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 073: athrow
      // 074: aload 4
      // 076: ifnonnull 08f
      // 079: ifne 0d4
      // 07c: goto 083
      // 07f: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 082: athrow
      // 083: aload 5
      // 085: instanceof net/minecraft/class_2885
      // 088: goto 08f
      // 08b: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08e: athrow
      // 08f: aload 4
      // 091: ifnonnull 0aa
      // 094: ifne 0d4
      // 097: goto 09e
      // 09a: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09d: athrow
      // 09e: aload 5
      // 0a0: instanceof net/minecraft/class_2886
      // 0a3: goto 0aa
      // 0a6: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a9: athrow
      // 0aa: aload 4
      // 0ac: ifnonnull 0c5
      // 0af: ifne 0d4
      // 0b2: goto 0b9
      // 0b5: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b8: athrow
      // 0b9: aload 5
      // 0bb: instanceof net/minecraft/class_2813
      // 0be: goto 0c5
      // 0c1: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c4: athrow
      // 0c5: aload 4
      // 0c7: ifnonnull 0e4
      // 0ca: ifeq 0dd
      // 0cd: goto 0d4
      // 0d0: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d3: athrow
      // 0d4: aload 0
      // 0d5: invokevirtual sixtwo/ff.aIp ()V
      // 0d8: return
      // 0d9: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dc: athrow
      // 0dd: aload 0
      // 0de: getfield sixtwo/ff.NuoRm Lsixtwo/cu;
      // 0e1: invokevirtual sixtwo/cu.SZ ()Z
      // 0e4: aload 4
      // 0e6: ifnonnull 16a
      // 0e9: ifeq 15f
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: aload 0
      // 0f4: aload 4
      // 0f6: ifnonnull 11b
      // 0f9: goto 100
      // 0fc: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ff: athrow
      // 100: invokevirtual sixtwo/ff.aIq ()Z
      // 103: ifeq 11a
      // 106: goto 10d
      // 109: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10c: athrow
      // 10d: aload 0
      // 10e: invokevirtual sixtwo/ff.aIp ()V
      // 111: aload 0
      // 112: invokevirtual sixtwo/ff.aIs ()V
      // 115: return
      // 116: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 119: athrow
      // 11a: aload 0
      // 11b: aload 4
      // 11d: ifnonnull 160
      // 120: getfield sixtwo/ff.Stryf Lnet/minecraft/class_238;
      // 123: ifnonnull 15f
      // 126: goto 12d
      // 129: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12c: athrow
      // 12d: aload 0
      // 12e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 131: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 134: invokevirtual net/minecraft/class_746.method_5829 ()Lnet/minecraft/class_238;
      // 137: putfield sixtwo/ff.Stryf Lnet/minecraft/class_238;
      // 13a: aload 0
      // 13b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 13e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 141: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 144: putfield sixtwo/ff.qBKIn Lnet/minecraft/class_243;
      // 147: aload 0
      // 148: getfield sixtwo/ff.AhpMu Lsixtwo/kx;
      // 14b: aload 0
      // 14c: getfield sixtwo/ff.qBKIn Lnet/minecraft/class_243;
      // 14f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 152: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 155: invokevirtual sixtwo/kx.bQZ (Lnet/minecraft/class_243;Lnet/minecraft/class_742;)V
      // 158: goto 15f
      // 15b: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15e: athrow
      // 15f: aload 0
      // 160: getfield sixtwo/ff.zkfXg Ljava/util/Queue;
      // 163: aload 5
      // 165: invokeinterface java/util/Queue.add (Ljava/lang/Object;)Z 2
      // 16a: pop
      // 16b: aload 1
      // 16c: bipush 1
      // 16d: invokevirtual sixtwo/gL$tj.bdX (Z)V
      // 170: return
   }

   @hG
   public void aIl(gL$tk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ff.ikRrf J
      // 003: ldc2_w 13300609092160
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/fg.aIW ()[I
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/ff.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 031
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: aload 1
      // 022: aload 4
      // 024: ifnonnull 036
      // 027: invokevirtual sixtwo/gL$tk.bdW ()Z
      // 02a: goto 031
      // 02d: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: ifeq 035
      // 034: return
      // 035: aload 1
      // 036: invokevirtual sixtwo/gL$tk.bcf ()Lnet/minecraft/class_2596;
      // 039: astore 5
      // 03b: aload 5
      // 03d: dup
      // 03e: invokestatic java/util/Objects.requireNonNull (Ljava/lang/Object;)Ljava/lang/Object;
      // 041: pop
      // 042: astore 6
      // 044: bipush 0
      // 045: istore 7
      // 047: aload 6
      // 049: aload 4
      // 04b: ifnonnull 07d
      // 04e: iload 7
      // 050: invokedynamic typeSwitch (Ljava/lang/Object;I)I bsm=java/lang/runtime/SwitchBootstraps.typeSwitch (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ net/minecraft/class_2664, net/minecraft/class_2743, net/minecraft/class_2749 ]
      // 055: tableswitch 246 0 2 31 97 189
      // 070: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 073: athrow
      // 074: aload 6
      // 076: goto 07d
      // 079: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07c: athrow
      // 07d: checkcast net/minecraft/class_2664
      // 080: astore 8
      // 082: aload 0
      // 083: aload 4
      // 085: ifnonnull 0a4
      // 088: getfield sixtwo/ff.fFKwZ Lsixtwo/cJ;
      // 08b: invokevirtual sixtwo/cJ.WF ()Z
      // 08e: ifeq 14b
      // 091: goto 098
      // 094: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 097: athrow
      // 098: aload 0
      // 099: invokevirtual sixtwo/ff.aIp ()V
      // 09c: aload 0
      // 09d: goto 0a4
      // 0a0: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a3: athrow
      // 0a4: aload 0
      // 0a5: getfield sixtwo/ff.qWnBv Lsixtwo/cA;
      // 0a8: invokevirtual sixtwo/cA.UN ()Ljava/lang/Number;
      // 0ab: invokevirtual java/lang/Number.intValue ()I
      // 0ae: putfield sixtwo/ff.lseaG I
      // 0b1: aload 4
      // 0b3: ifnull 14b
      // 0b6: aload 6
      // 0b8: checkcast net/minecraft/class_2743
      // 0bb: astore 9
      // 0bd: aload 9
      // 0bf: invokevirtual net/minecraft/class_2743.method_11818 ()I
      // 0c2: aload 4
      // 0c4: ifnonnull 0f4
      // 0c7: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0ca: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0cd: invokevirtual net/minecraft/class_746.method_5628 ()I
      // 0d0: if_icmpne 14b
      // 0d3: goto 0da
      // 0d6: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d9: athrow
      // 0da: aload 0
      // 0db: aload 4
      // 0dd: ifnonnull 103
      // 0e0: goto 0e7
      // 0e3: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e6: athrow
      // 0e7: getfield sixtwo/ff.bAadz Lsixtwo/cJ;
      // 0ea: invokevirtual sixtwo/cJ.WF ()Z
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: ifeq 14b
      // 0f7: aload 0
      // 0f8: invokevirtual sixtwo/ff.aIp ()V
      // 0fb: aload 0
      // 0fc: goto 103
      // 0ff: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 102: athrow
      // 103: aload 0
      // 104: getfield sixtwo/ff.qyvvJ Lsixtwo/cC;
      // 107: invokevirtual sixtwo/cC.VC ()I
      // 10a: putfield sixtwo/ff.lseaG I
      // 10d: aload 4
      // 10f: ifnull 14b
      // 112: aload 6
      // 114: checkcast net/minecraft/class_2749
      // 117: astore 10
      // 119: aload 0
      // 11a: aload 4
      // 11c: ifnonnull 13b
      // 11f: getfield sixtwo/ff.Bfvhw Lsixtwo/cJ;
      // 122: invokevirtual sixtwo/cJ.WF ()Z
      // 125: ifeq 14b
      // 128: goto 12f
      // 12b: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12e: athrow
      // 12f: aload 0
      // 130: invokevirtual sixtwo/ff.aIp ()V
      // 133: aload 0
      // 134: goto 13b
      // 137: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13a: athrow
      // 13b: aload 0
      // 13c: getfield sixtwo/ff.qWnBv Lsixtwo/cA;
      // 13f: invokevirtual sixtwo/cA.UN ()Ljava/lang/Number;
      // 142: invokevirtual java/lang/Number.intValue ()I
      // 145: putfield sixtwo/ff.lseaG I
      // 148: goto 14b
      // 14b: return
   }

   public cA aIx() {
      return this.FUqia;
   }

   private static CallSite aIO(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aIN".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ff" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public cJ aIA() {
      return this.fFKwZ;
   }

   public cJ aIB() {
      return this.Bfvhw;
   }

   public Queue<class_2596<?>> aID() {
      return this.zkfXg;
   }

   public mT aIE() {
      return this.uiKAR;
   }

   public boolean aIG() {
      return this.IydTB;
   }

   private class_1309 aIr() {
      return oh.cCY().cDb(this.FUqia).cDg(of.ahXwo).cDm();
   }

   private void aIs() {
      this.Stryf = null;
      this.nlYuR = false;
   }

   @hG
   public void aIn(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ff.ikRrf J
      // 03: ldc2_w 15917065573756
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/ff.bab ()Z
      // 11: aload 4
      // 13: ifnonnull 28
      // 16: ifne 21
      // 19: goto 20
      // 1c: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: aload 0
      // 22: getfield sixtwo/ff.NuoRm Lsixtwo/cu;
      // 25: invokevirtual sixtwo/cu.SZ ()Z
      // 28: aload 4
      // 2a: ifnonnull 84
      // 2d: ifeq 6c
      // 30: goto 37
      // 33: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 0
      // 38: invokevirtual sixtwo/ff.aIq ()Z
      // 3b: aload 4
      // 3d: ifnonnull 84
      // 40: goto 47
      // 43: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: ifeq 6c
      // 4a: goto 51
      // 4d: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: aload 0
      // 52: invokevirtual sixtwo/ff.aIp ()V
      // 55: aload 0
      // 56: invokevirtual sixtwo/ff.aIs ()V
      // 59: aload 0
      // 5a: aload 0
      // 5b: getfield sixtwo/ff.qWnBv Lsixtwo/cA;
      // 5e: invokevirtual sixtwo/cA.UN ()Ljava/lang/Number;
      // 61: invokevirtual java/lang/Number.intValue ()I
      // 64: putfield sixtwo/ff.lseaG I
      // 67: return
      // 68: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: aload 0
      // 6d: aload 4
      // 6f: ifnonnull 97
      // 72: getfield sixtwo/ff.uiKAR Lsixtwo/mT;
      // 75: aload 0
      // 76: getfield sixtwo/ff.lseaG I
      // 79: i2l
      // 7a: invokevirtual sixtwo/mT.cpC (J)Z
      // 7d: goto 84
      // 80: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 83: athrow
      // 84: ifeq a4
      // 87: aload 0
      // 88: invokevirtual sixtwo/ff.aIp ()V
      // 8b: aload 0
      // 8c: invokevirtual sixtwo/ff.aIs ()V
      // 8f: aload 0
      // 90: goto 97
      // 93: invokestatic sixtwo/ff.aIK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 96: athrow
      // 97: aload 0
      // 98: getfield sixtwo/ff.qWnBv Lsixtwo/cA;
      // 9b: invokevirtual sixtwo/cA.UN ()Ljava/lang/Number;
      // 9e: invokevirtual java/lang/Number.intValue ()I
      // a1: putfield sixtwo/ff.lseaG I
      // a4: return
   }

   @hG
   public void aIj(gM var1) {
      this.zkfXg.clear();
      this.baa(false);
   }

   @hG
   public void aIk(hw$tw var1) {
      long var2 = ikRrf ^ 114281256687600L;
      int[] var4 = fg.aIW();

      ff var7;
      label37: {
         label32: {
            try {
               var10000 = this.bab();
               if (var4 != null) {
                  break label32;
               }

               if (!var10000) {
                  return;
               }
            } catch (MatchException var6) {
               throw aIK(var6);
            }

            try {
               var7 = this;
               if (var4 != null) {
                  break label37;
               }

               var10000 = this.NuoRm.SZ();
            } catch (MatchException var5) {
               throw aIK(var5);
            }
         }

         if (!var10000) {
            return;
         }

         var7 = this;
      }

      var7.nlYuR = true;
   }

   public int aIH() {
      return this.lseaG;
   }

   public boolean aIJ() {
      return this.nlYuR;
   }

   private static String aIM(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 15328;
      if (snpFS[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])mIJyD.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               mIJyD.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ff", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = qVORx[var5].getBytes("ISO-8859-1");
         snpFS[var5] = aIL(((Cipher)var4[0]).doFinal(var9));
      }

      return snpFS[var5];
   }

   private static Object aIN(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = aIM(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int aIP(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 7152;
      if (maZct[var3] == null) {
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
         long var5 = HcwIb[var3];
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
         Object[] var9 = (Object[])yGhuZ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               yGhuZ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ff", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         maZct[var3] = var15;
      }

      return maZct[var3];
   }
}
