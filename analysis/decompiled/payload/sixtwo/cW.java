package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_243;
import net.minecraft.class_2680;

public class cW extends gg {
   private final cv SEHkS;
   private final cw PEUjg;
   private final cw eomCv;
   private final cw IcGgS;
   private final cw WtLkJ;
   private final cw YRSFN;
   private final cw dVboG;
   private final cw sZCWO;
   private final cw XQhcG;
   private final cw TkcsS;
   private final cC RjLgn;
   private final cC BAskS;
   private final cC inyHV;
   private final List<cW$sr> TjXAG;
   private final List<cW$sr> hUpkY;
   private final rl NkSiv;
   private static final long TMUaI = gb.aYR(-7049798968253227656L, -3398100917983016162L, MethodHandles.lookup().lookupClass()).a(130037379353153L);
   private static final String[] ScVGK;
   private static final String[] kXkmN;
   private static final Map IaTZt = new HashMap(13);
   private static final long[] TVPsE;
   private static final Integer[] MGxMm;
   private static final Map vzSDy;
   private static final long UBtqj;

   public cW() {
      long var1 = TMUaI ^ 37462510944247L;
      super(gf.aZL(aai<"h">(29437, 7818684242036693509L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[aai<"h">(21582, 6202875970422488233L ^ var1)];
      var10004[0] = aai<"h">(10851, 3709199362599797420L ^ var1);
      var10004[1] = aai<"h">(2873, 3300363596519564231L ^ var1);
      var10004[2] = aai<"h">(449, 1856389643829831941L ^ var1);
      var10004[3] = aai<"h">(30829, 1458621661533343874L ^ var1);
      var10004[4] = aai<"h">(8403, 7625015605274363942L ^ var1);
      var10004[5] = aai<"h">(1938, 4316566149992902519L ^ var1);
      var10004[aai<"h">(6460, 520069139559051723L ^ var1)] = aai<"h">(10127, 5684740671443554143L ^ var1);
      var10004[aai<"h">(23932, 7227272595415381419L ^ var1)] = aai<"h">(2803, 660181459679470110L ^ var1);
      this.SEHkS = new cv(this, mr.clS(var10004));
      cv var10003 = this.SEHkS;
      var10004 = new int[aai<"h">(5440, 8797084987921726899L ^ var1)];
      var10004[0] = aai<"h">(19093, 1692153671964861046L ^ var1);
      var10004[1] = aai<"h">(28220, 6020834762126788308L ^ var1);
      var10004[2] = aai<"h">(16943, 7075535206810364663L ^ var1);
      var10004[3] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[4] = aai<"h">(10803, 6947850795265934040L ^ var1);
      var10004[5] = aai<"h">(6928, 6230465957579879386L ^ var1);
      var10004[aai<"h">(26429, 6929277209300504541L ^ var1)] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[aai<"h">(25572, 5924690465493027632L ^ var1)] = aai<"h">(7563, 7492938702600271189L ^ var1);
      var10004[aai<"h">(10916, 3515942626375484002L ^ var1)] = aai<"h">(31371, 1626012526274581110L ^ var1);
      this.PEUjg = new cw(var10003, mr.clS(var10004)).Tz();
      this.eomCv = new cw(
            this.SEHkS,
            mr.clS(
               new int[]{
                  aai<"h">(29819, 5952034807837891767L ^ var1),
                  aai<"h">(6928, 6230465957579879386L ^ var1),
                  aai<"h">(10416, 3580047602349523052L ^ var1),
                  aai<"h">(3882, 6683598500399802320L ^ var1),
                  aai<"h">(6873, 4114749627924345407L ^ var1)
               }
            )
         )
         .Tz();
      var10003 = this.SEHkS;
      var10004 = new int[aai<"h">(25572, 5924690465493027632L ^ var1)];
      var10004[0] = aai<"h">(22375, 606173082583482302L ^ var1);
      var10004[1] = aai<"h">(20420, 5080981020569085718L ^ var1);
      var10004[2] = aai<"h">(5971, 5190528085550759830L ^ var1);
      var10004[3] = aai<"h">(5971, 5190528085550759830L ^ var1);
      var10004[4] = aai<"h">(6200, 9113769736568008933L ^ var1);
      var10004[5] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[aai<"h">(26429, 6929277209300504541L ^ var1)] = aai<"h">(6873, 4114749627924345407L ^ var1);
      this.IcGgS = new cw(var10003, mr.clS(var10004));
      var10003 = this.SEHkS;
      var10004 = new int[aai<"h">(26429, 6929277209300504541L ^ var1)];
      var10004[0] = aai<"h">(3109, 1341971914593887487L ^ var1);
      var10004[1] = aai<"h">(21030, 62405614068120276L ^ var1);
      var10004[2] = aai<"h">(5248, 206497226187930705L ^ var1);
      var10004[3] = aai<"h">(13811, 7077606440009489689L ^ var1);
      var10004[4] = aai<"h">(69, 6926818647540197509L ^ var1);
      var10004[5] = aai<"h">(6873, 4114749627924345407L ^ var1);
      this.WtLkJ = new cw(var10003, mr.clS(var10004));
      var10003 = this.SEHkS;
      var10004 = new int[aai<"h">(25572, 5924690465493027632L ^ var1)];
      var10004[0] = aai<"h">(5289, 3316678115437313104L ^ var1);
      var10004[1] = aai<"h">(28220, 6020834762126788308L ^ var1);
      var10004[2] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[3] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[4] = aai<"h">(13811, 7077606440009489689L ^ var1);
      var10004[5] = aai<"h">(69, 6926818647540197509L ^ var1);
      var10004[aai<"h">(26429, 6929277209300504541L ^ var1)] = aai<"h">(6873, 4114749627924345407L ^ var1);
      this.YRSFN = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.SEHkS;
      var10004 = new int[aai<"h">(4972, 2795287264772422528L ^ var1)];
      var10004[0] = aai<"h">(19120, 8445118164703289982L ^ var1);
      var10004[1] = aai<"h">(69, 6926818647540197509L ^ var1);
      var10004[2] = aai<"h">(16030, 3403058550968047231L ^ var1);
      var10004[3] = aai<"h">(6200, 9113769736568008933L ^ var1);
      var10004[4] = aai<"h">(69, 6926818647540197509L ^ var1);
      var10004[5] = aai<"h">(22501, 6472773711822831405L ^ var1);
      var10004[aai<"h">(26429, 6929277209300504541L ^ var1)] = aai<"h">(29819, 5952034807837891767L ^ var1);
      var10004[aai<"h">(25572, 5924690465493027632L ^ var1)] = aai<"h">(5971, 5190528085550759830L ^ var1);
      var10004[aai<"h">(10916, 3515942626375484002L ^ var1)] = aai<"h">(28220, 6020834762126788308L ^ var1);
      var10004[aai<"h">(5889, 1749055795774357446L ^ var1)] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[aai<"h">(29560, 364182027811822509L ^ var1)] = aai<"h">(21889, 2877097007631318373L ^ var1);
      var10004[aai<"h">(18619, 9166579444295704685L ^ var1)] = aai<"h">(6873, 4114749627924345407L ^ var1);
      this.dVboG = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.SEHkS;
      var10004 = new int[aai<"h">(5889, 1749055795774357446L ^ var1)];
      var10004[0] = aai<"h">(24789, 1468489238175385642L ^ var1);
      var10004[1] = aai<"h">(6928, 6230465957579879386L ^ var1);
      var10004[2] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[3] = aai<"h">(13811, 7077606440009489689L ^ var1);
      var10004[4] = aai<"h">(982, 8485782683433298715L ^ var1);
      var10004[5] = aai<"h">(28220, 6020834762126788308L ^ var1);
      var10004[aai<"h">(26429, 6929277209300504541L ^ var1)] = aai<"h">(69, 6926818647540197509L ^ var1);
      var10004[aai<"h">(25572, 5924690465493027632L ^ var1)] = aai<"h">(5971, 5190528085550759830L ^ var1);
      var10004[aai<"h">(10916, 3515942626375484002L ^ var1)] = aai<"h">(6873, 4114749627924345407L ^ var1);
      this.sZCWO = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.SEHkS;
      var10004 = new int[aai<"h">(27826, 5731045405303178310L ^ var1)];
      var10004[0] = aai<"h">(16050, 2147010553112778361L ^ var1);
      var10004[1] = aai<"h">(28220, 6020834762126788308L ^ var1);
      var10004[2] = aai<"h">(4979, 2898230689186282426L ^ var1);
      var10004[3] = aai<"h">(26532, 6056132278888632187L ^ var1);
      var10004[4] = aai<"h">(6928, 6230465957579879386L ^ var1);
      var10004[5] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[aai<"h">(26429, 6929277209300504541L ^ var1)] = aai<"h">(10416, 3580047602349523052L ^ var1);
      var10004[aai<"h">(25572, 5924690465493027632L ^ var1)] = aai<"h">(22501, 6472773711822831405L ^ var1);
      var10004[aai<"h">(10916, 3515942626375484002L ^ var1)] = aai<"h">(5289, 3316678115437313104L ^ var1);
      var10004[aai<"h">(5889, 1749055795774357446L ^ var1)] = aai<"h">(26532, 6056132278888632187L ^ var1);
      var10004[aai<"h">(731, 196992943364860459L ^ var1)] = aai<"h">(6200, 9113769736568008933L ^ var1);
      var10004[aai<"h">(8965, 4214694761116191702L ^ var1)] = aai<"h">(982, 8485782683433298715L ^ var1);
      var10004[aai<"h">(27773, 5286568175849932007L ^ var1)] = aai<"h">(10803, 8884347007629181608L ^ var1);
      var10004[aai<"h">(1817, 2270230985861885915L ^ var1)] = aai<"h">(6873, 4114749627924345407L ^ var1);
      this.XQhcG = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.SEHkS;
      var10004 = new int[aai<"h">(2783, 4614502138740269609L ^ var1)];
      var10004[0] = aai<"h">(1452, 491699162853371223L ^ var1);
      var10004[1] = aai<"h">(13811, 7077606440009489689L ^ var1);
      var10004[2] = aai<"h">(982, 8485782683433298715L ^ var1);
      var10004[3] = aai<"h">(6200, 9113769736568008933L ^ var1);
      var10004[4] = aai<"h">(69, 6926818647540197509L ^ var1);
      var10004[5] = aai<"h">(28220, 6020834762126788308L ^ var1);
      var10004[aai<"h">(26429, 6929277209300504541L ^ var1)] = aai<"h">(5971, 5190528085550759830L ^ var1);
      var10004[aai<"h">(25572, 5924690465493027632L ^ var1)] = aai<"h">(6928, 6230465957579879386L ^ var1);
      var10004[aai<"h">(10916, 3515942626375484002L ^ var1)] = aai<"h">(6200, 9113769736568008933L ^ var1);
      var10004[aai<"h">(5889, 1749055795774357446L ^ var1)] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[aai<"h">(731, 196992943364860459L ^ var1)] = aai<"h">(22501, 6472773711822831405L ^ var1);
      var10004[aai<"h">(8965, 4214694761116191702L ^ var1)] = aai<"h">(23199, 2283789971205730817L ^ var1);
      var10004[aai<"h">(27773, 5286568175849932007L ^ var1)] = aai<"h">(6200, 9113769736568008933L ^ var1);
      var10004[aai<"h">(11800, 8739048159649777402L ^ var1)] = aai<"h">(5971, 5190528085550759830L ^ var1);
      var10004[aai<"h">(8683, 5648844550515607856L ^ var1)] = aai<"h">(6873, 4114749627924345407L ^ var1);
      this.TkcsS = new cw(var10003, mr.clS(var10004));
      var10004 = new int[aai<"h">(11800, 8739048159649777402L ^ var1)];
      var10004[0] = aai<"h">(9196, 6071534697846262557L ^ var1);
      var10004[1] = aai<"h">(6928, 6230465957579879386L ^ var1);
      var10004[2] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[3] = aai<"h">(6928, 6230465957579879386L ^ var1);
      var10004[4] = aai<"h">(11545, 3497695617877427585L ^ var1);
      var10004[5] = aai<"h">(28220, 6020834762126788308L ^ var1);
      var10004[aai<"h">(26429, 6929277209300504541L ^ var1)] = aai<"h">(26532, 6056132278888632187L ^ var1);
      var10004[aai<"h">(25572, 5924690465493027632L ^ var1)] = aai<"h">(22501, 6472773711822831405L ^ var1);
      var10004[aai<"h">(10916, 3515942626375484002L ^ var1)] = aai<"h">(22030, 3248286197172354767L ^ var1);
      var10004[aai<"h">(5889, 1749055795774357446L ^ var1)] = aai<"h">(6200, 9113769736568008933L ^ var1);
      var10004[aai<"h">(731, 196992943364860459L ^ var1)] = aai<"h">(21802, 7780486948588273129L ^ var1);
      var10004[aai<"h">(8965, 4214694761116191702L ^ var1)] = aai<"h">(3882, 6683598500399802320L ^ var1);
      var10004[aai<"h">(27773, 5286568175849932007L ^ var1)] = aai<"h">(5971, 5190528085550759830L ^ var1);
      this.RjLgn = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(6.0);
      var10004 = new int[aai<"h">(8683, 5648844550515607856L ^ var1)];
      var10004[0] = aai<"h">(29624, 1023124949046598433L ^ var1);
      var10004[1] = aai<"h">(26532, 6056132278888632187L ^ var1);
      var10004[2] = aai<"h">(21802, 7780486948588273129L ^ var1);
      var10004[3] = aai<"h">(6873, 4114749627924345407L ^ var1);
      var10004[4] = aai<"h">(5971, 5190528085550759830L ^ var1);
      var10004[5] = aai<"h">(13811, 7077606440009489689L ^ var1);
      var10004[aai<"h">(26429, 6929277209300504541L ^ var1)] = aai<"h">(69, 6926818647540197509L ^ var1);
      var10004[aai<"h">(25572, 5924690465493027632L ^ var1)] = aai<"h">(22501, 6472773711822831405L ^ var1);
      var10004[aai<"h">(10916, 3515942626375484002L ^ var1)] = aai<"h">(31131, 6068847290352570727L ^ var1);
      var10004[aai<"h">(5889, 1749055795774357446L ^ var1)] = aai<"h">(28220, 6020834762126788308L ^ var1);
      var10004[aai<"h">(731, 196992943364860459L ^ var1)] = aai<"h">(12323, 1739553770214840522L ^ var1);
      var10004[aai<"h">(8965, 4214694761116191702L ^ var1)] = aai<"h">(6928, 6230465957579879386L ^ var1);
      var10004[aai<"h">(27773, 5286568175849932007L ^ var1)] = aai<"h">(21802, 7780486948588273129L ^ var1);
      var10004[aai<"h">(11800, 8739048159649777402L ^ var1)] = aai<"h">(6873, 4114749627924345407L ^ var1);
      this.BAskS = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(8.0).Vx(32.0).VA(16.0);
      this.inyHV = new cC(
            this,
            mr.clS(
               new int[]{
                  aai<"h">(20514, 1431908641636890828L ^ var1),
                  aai<"h">(28220, 6020834762126788308L ^ var1),
                  aai<"h">(3882, 6683598500399802320L ^ var1),
                  aai<"h">(10416, 3580047602349523052L ^ var1),
                  aai<"h">(13811, 7077606440009489689L ^ var1)
               }
            )
         )
         .Vy(1.0)
         .Vw(1.0)
         .Vx(128.0)
         .VA(100.0)
         .Vz(aaf<"y">(31572, 3994664705027981804L ^ var1));
      this.TjXAG = new ArrayList<>();
      this.hUpkY = new ArrayList<>();
      this.NkSiv = new rl();
   }

   static {
      long var16 = TMUaI ^ 94883728457398L;
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var25 = new String[3];
      int var23 = 0;
      String var22 = "ç\u0016L:\u0099Ô|8?\u000eºÛ\u008b)F\u0000\u0010Þ¡´é\u0081´2jç\u0007îl\u009eõÆº ÚD¥\u0013$2®Ý\u0080E4Å\u009f\u008b¨\u0084\u0094Ú\u001e\u0001?\u000fÏ\u001f«j>\u0001¥lûÿ";
      int var24 = "ç\u0016L:\u0099Ô|8?\u000eºÛ\u008b)F\u0000\u0010Þ¡´é\u0081´2jç\u0007îl\u009eõÆº ÚD¥\u0013$2®Ý\u0080E4Å\u009f\u008b¨\u0084\u0094Ú\u001e\u0001?\u000fÏ\u001f«j>\u0001¥lûÿ"
         .length();
      char var21 = 16;
      int var20 = -1;

      while (true) {
         byte[] var26 = var18.doFinal(var22.substring(++var20, var20 + var21).getBytes("ISO-8859-1"));
         String var37 = aac(var26).intern();
         int var10001 = -1;
         var25[var23++] = var37;
         if ((var20 += var21) >= var24) {
            ScVGK = var25;
            kXkmN = new String[3];
            vzSDy = new HashMap(13);
            Cipher var5;
            var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var6 = 1; var6 < 8; var6++) {
               var10003[var6] = (byte)(var16 << var6 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var11 = new long[69];
            int var8 = 0;
            String var9 = "´kå#Á\u0095¸Üã\u009cé\u008fu\u000f$E¾Ëä\f\u009c¤¼[çª\u000fxÃ\u001fîÌr.ò{\u009ap1$ú?©*ê®¿ñé¯\u001d\u000bÆW²®a\u0083\u0001\u008dXFÆ\u001fÎx°§`%Ä|4K#üX_n!ÙØ#xÌºq\u0017\u001b|ÈÚ\u0098w/L\u0092\u001aÑ=\u00185\u0019Ó)\u0092\u0007\u0012´D¡\u0014X\u008d\u0086ð¢EÏÀ\u008b\"u{¬J¬/é,îQ¼#¤×\u0018q§;ÅEI£\u0001\u0098\u0097ûb¯\u0003ø9â~\u000eD\u009eG\u008aørsÇç¯c&\u008c\u0007TAßsò\u0082ñ'8Ïbhrè\u0004^Øró\u000fµÝ\u008c7~úéö\u008a?\"\u0018´w\u0094\u0011å¶·÷Më¯ï_IÕôZ\rò=Ý\r0\u00077¦cÉËË\u0001ÞºE¶ä\u0016¹Æ©s\u0000]©ÿÒK;\u0088&züÚÌ\u009fs\u0006ê\u0081·Q¢ú½\u0098³>teå\u00ad\u0099&\u0018!W\u0084\u009b\u008f\u0086÷¶°\u000eD\u007f\u008dG\u0007Ïl\u0088\u0011\fp,²¨\f\u0096x¾Ì\u0084·\u000f¬+O\u000bz\u001bf-\u0080 ¢Yã\r|ñÞt§8|\u0088\u009fÑ\u00ad\u0089§´\u0085#\u0014\u0012l¤`T\u0099±ðHäÂ\u0080\u0091H\u0092·\u0082N\u0003>£\u008e÷ï#\u009b \u0092¡µZ\u0010\u0086k«æÁá¦\u0000kád\u009e×P[c}Á\bj%äâ¹\u0003ö \u0010F\u000f\u0005Ý\u0001òx²'\u0095~&öèëfÎ6i\u0006q¦Ê\u0011ü$¢åª,yN\u008d¿¶\u0099¨a\u008cNB\u0010*\u001e\u009aö^\u0082»0í\u0097cNÃ±®¡käÐ¸Q7ã\u0084ÌBûÎ±E>Ü¦a?U\u008a ì\u008bzªûJ<wÒ|y½é_ó]S¾?ò#X\u0013\u008aq&\u008b×\u0080vÁ8\u001eÑyLÄÿ\u0017ZgO\u008bK4q¨ÓÃëp\u008cÉ\u0098Ò%ð";
            int var10 = "´kå#Á\u0095¸Üã\u009cé\u008fu\u000f$E¾Ëä\f\u009c¤¼[çª\u000fxÃ\u001fîÌr.ò{\u009ap1$ú?©*ê®¿ñé¯\u001d\u000bÆW²®a\u0083\u0001\u008dXFÆ\u001fÎx°§`%Ä|4K#üX_n!ÙØ#xÌºq\u0017\u001b|ÈÚ\u0098w/L\u0092\u001aÑ=\u00185\u0019Ó)\u0092\u0007\u0012´D¡\u0014X\u008d\u0086ð¢EÏÀ\u008b\"u{¬J¬/é,îQ¼#¤×\u0018q§;ÅEI£\u0001\u0098\u0097ûb¯\u0003ø9â~\u000eD\u009eG\u008aørsÇç¯c&\u008c\u0007TAßsò\u0082ñ'8Ïbhrè\u0004^Øró\u000fµÝ\u008c7~úéö\u008a?\"\u0018´w\u0094\u0011å¶·÷Më¯ï_IÕôZ\rò=Ý\r0\u00077¦cÉËË\u0001ÞºE¶ä\u0016¹Æ©s\u0000]©ÿÒK;\u0088&züÚÌ\u009fs\u0006ê\u0081·Q¢ú½\u0098³>teå\u00ad\u0099&\u0018!W\u0084\u009b\u008f\u0086÷¶°\u000eD\u007f\u008dG\u0007Ïl\u0088\u0011\fp,²¨\f\u0096x¾Ì\u0084·\u000f¬+O\u000bz\u001bf-\u0080 ¢Yã\r|ñÞt§8|\u0088\u009fÑ\u00ad\u0089§´\u0085#\u0014\u0012l¤`T\u0099±ðHäÂ\u0080\u0091H\u0092·\u0082N\u0003>£\u008e÷ï#\u009b \u0092¡µZ\u0010\u0086k«æÁá¦\u0000kád\u009e×P[c}Á\bj%äâ¹\u0003ö \u0010F\u000f\u0005Ý\u0001òx²'\u0095~&öèëfÎ6i\u0006q¦Ê\u0011ü$¢åª,yN\u008d¿¶\u0099¨a\u008cNB\u0010*\u001e\u009aö^\u0082»0í\u0097cNÃ±®¡käÐ¸Q7ã\u0084ÌBûÎ±E>Ü¦a?U\u008a ì\u008bzªûJ<wÒ|y½é_ó]S¾?ò#X\u0013\u008aq&\u008b×\u0080vÁ8\u001eÑyLÄÿ\u0017ZgO\u008bK4q¨ÓÃëp\u008cÉ\u0098Ò%ð"
               .length();
            byte var7 = 0;

            label42:
            while (true) {
               var10001 = var7;
               var7 += 8;
               byte[] var12 = var9.substring(var10001, var7).getBytes("ISO-8859-1");
               long[] var30 = var11;
               var10001 = var8++;
               long var40 = (var12[0] & 255L) << 56
                  | (var12[1] & 255L) << 48
                  | (var12[2] & 255L) << 40
                  | (var12[3] & 255L) << 32
                  | (var12[4] & 255L) << 24
                  | (var12[5] & 255L) << 16
                  | (var12[6] & 255L) << 8
                  | var12[7] & 255L;
               byte var45 = -1;

               while (true) {
                  long var13 = var40;
                  byte[] var15 = var5.doFinal(
                     new byte[]{
                        (byte)(var13 >>> 56),
                        (byte)(var13 >>> 48),
                        (byte)(var13 >>> 40),
                        (byte)(var13 >>> 32),
                        (byte)(var13 >>> 24),
                        (byte)(var13 >>> 16),
                        (byte)(var13 >>> 8),
                        (byte)var13
                     }
                  );
                  long var48 = (var15[0] & 255L) << 56
                     | (var15[1] & 255L) << 48
                     | (var15[2] & 255L) << 40
                     | (var15[3] & 255L) << 32
                     | (var15[4] & 255L) << 24
                     | (var15[5] & 255L) << 16
                     | (var15[6] & 255L) << 8
                     | var15[7] & 255L;
                  switch (var45) {
                     case 0:
                        var30[var10001] = var48;
                        if (var7 >= var10) {
                           TVPsE = var11;
                           MGxMm = new Integer[69];
                           Cipher var0;
                           var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                           var10002 = SecretKeyFactory.getInstance("DES");
                           var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                           for (int var1 = 1; var1 < 8; var1++) {
                              var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                           }

                           var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                           long var2 = -58831678818083236L;
                           byte[] var4 = var0.doFinal(
                              new byte[]{
                                 (byte)(var2 >>> 56),
                                 (byte)(var2 >>> 48),
                                 (byte)(var2 >>> 40),
                                 (byte)(var2 >>> 32),
                                 (byte)(var2 >>> 24),
                                 (byte)(var2 >>> 16),
                                 (byte)(var2 >>> 8),
                                 (byte)var2
                              }
                           );
                           long var43 = (var4[0] & 255L) << 56
                              | (var4[1] & 255L) << 48
                              | (var4[2] & 255L) << 40
                              | (var4[3] & 255L) << 32
                              | (var4[4] & 255L) << 24
                              | (var4[5] & 255L) << 16
                              | (var4[6] & 255L) << 8
                              | var4[7] & 255L;
                           byte var36 = -1;
                           UBtqj = var43;
                           return;
                        }
                        break;
                     default:
                        var30[var10001] = var48;
                        if (var7 < var10) {
                           continue label42;
                        }

                        var9 = "Áß\u0012»0\u0013¢d\u0083\u0085åq\u00867ì\u0094";
                        var10 = "Áß\u0012»0\u0013¢d\u0083\u0085åq\u00867ì\u0094".length();
                        var7 = 0;
                  }

                  byte var35 = var7;
                  var7 += 8;
                  var12 = var9.substring(var35, var7).getBytes("ISO-8859-1");
                  var30 = var11;
                  var10001 = var8++;
                  var40 = (var12[0] & 255L) << 56
                     | (var12[1] & 255L) << 48
                     | (var12[2] & 255L) << 40
                     | (var12[3] & 255L) << 32
                     | (var12[4] & 255L) << 24
                     | (var12[5] & 255L) << 16
                     | (var12[6] & 255L) << 8
                     | var12[7] & 255L;
                  var45 = 0;
               }
            }
         }

         var21 = var22.charAt(var20);
      }
   }

   private static String aad(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 16397;
      if (kXkmN[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])IaTZt.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               IaTZt.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cW", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = ScVGK[var5].getBytes("ISO-8859-1");
         kXkmN[var5] = aac(((Cipher)var4[0]).doFinal(var9));
      }

      return kXkmN[var5];
   }

   private static MatchException aab(MatchException var0) {
      return var0;
   }

   private static CallSite aai(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aah".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cW" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite aaf(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aae".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cW" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int aah(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aag(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Object aae(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = aad(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String aac(byte[] var0) {
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

   private static int aag(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 4719;
      if (MGxMm[var3] == null) {
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
         long var5 = TVPsE[var3];
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
         Object[] var9 = (Object[])vzSDy.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               vzSDy.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cW", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         MGxMm[var3] = var15;
      }

      return MGxMm[var3];
   }

   private List<cW$sq> ZZ(List<class_243> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cW.TMUaI J
      // 03: ldc2_w 70030651749005
      // 06: lxor
      // 07: lstore 2
      // 08: aload 0
      // 09: getfield sixtwo/cW.BAskS Lsixtwo/cC;
      // 0c: invokevirtual sixtwo/cC.VB ()F
      // 0f: fstore 5
      // 11: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 14: new java/util/ArrayList
      // 17: dup
      // 18: invokespecial java/util/ArrayList.<init> ()V
      // 1b: astore 6
      // 1d: aload 1
      // 1e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 23: astore 7
      // 25: astore 4
      // 27: aload 7
      // 29: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 2e: ifeq e8
      // 31: aload 7
      // 33: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 38: checkcast net/minecraft/class_243
      // 3b: astore 8
      // 3d: aconst_null
      // 3e: astore 9
      // 40: fload 5
      // 42: fload 5
      // 44: fmul
      // 45: f2d
      // 46: dstore 10
      // 48: aload 6
      // 4a: aload 4
      // 4c: ifnonnull ea
      // 4f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 54: astore 12
      // 56: aload 12
      // 58: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 5d: ifeq 9e
      // 60: aload 12
      // 62: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 67: checkcast sixtwo/cW$sq
      // 6a: astore 13
      // 6c: aload 13
      // 6e: invokevirtual sixtwo/cW$sq.dnH ()Lnet/minecraft/class_243;
      // 71: aload 8
      // 73: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 76: dstore 14
      // 78: dload 14
      // 7a: aload 4
      // 7c: ifnonnull 97
      // 7f: dload 10
      // 81: dcmpg
      // 82: aload 4
      // 84: ifnonnull 2e
      // 87: goto 8e
      // 8a: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8d: athrow
      // 8e: ifge 99
      // 91: aload 13
      // 93: astore 9
      // 95: dload 14
      // 97: dstore 10
      // 99: aload 4
      // 9b: ifnull 56
      // 9e: aload 9
      // a0: aload 4
      // a2: ifnonnull d0
      // a5: ifnull c2
      // a8: goto af
      // ab: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ae: athrow
      // af: aload 9
      // b1: aload 8
      // b3: invokevirtual sixtwo/cW$sq.dnG (Lnet/minecraft/class_243;)V
      // b6: aload 4
      // b8: ifnull e3
      // bb: goto c2
      // be: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c1: athrow
      // c2: new sixtwo/cW$sq
      // c5: dup
      // c6: invokespecial sixtwo/cW$sq.<init> ()V
      // c9: goto d0
      // cc: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // cf: athrow
      // d0: astore 12
      // d2: aload 12
      // d4: aload 8
      // d6: invokevirtual sixtwo/cW$sq.dnG (Lnet/minecraft/class_243;)V
      // d9: aload 6
      // db: aload 12
      // dd: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // e2: pop
      // e3: aload 4
      // e5: ifnull 27
      // e8: aload 6
      // ea: areturn
   }

   @hG
   public void ZU(gM var1) {
      this.TjXAG.clear();
      this.hUpkY.clear();
      this.NkSiv.dhH();
   }

   @hG
   public void ZV(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cW.TMUaI J
      // 003: ldc2_w 88495612642709
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/cW.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 063
      // 016: ifne 03e
      // 019: goto 020
      // 01c: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: aload 0
      // 021: getfield sixtwo/cW.TjXAG Ljava/util/List;
      // 024: invokeinterface java/util/List.clear ()V 1
      // 029: aload 0
      // 02a: getfield sixtwo/cW.hUpkY Ljava/util/List;
      // 02d: invokeinterface java/util/List.clear ()V 1
      // 032: aload 0
      // 033: getfield sixtwo/cW.NkSiv Lsixtwo/rl;
      // 036: invokevirtual sixtwo/rl.dhH ()V
      // 039: return
      // 03a: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03d: athrow
      // 03e: aload 0
      // 03f: getfield sixtwo/cW.NkSiv Lsixtwo/rl;
      // 042: getstatic sixtwo/cW.UBtqj J
      // 045: aload 0
      // 046: getfield sixtwo/cW.inyHV Lsixtwo/cC;
      // 049: invokevirtual sixtwo/cC.VC ()I
      // 04c: aload 0
      // 04d: invokedynamic test (Lsixtwo/cW;)Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/cW.ZX (Lnet/minecraft/class_2680;)Z, (Lnet/minecraft/class_2680;)Z ]
      // 052: aload 0
      // 053: invokedynamic test (Lsixtwo/cW;)Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/cW.ZY (Lnet/minecraft/class_1297;)Z, (Lnet/minecraft/class_1297;)Z ]
      // 058: invokevirtual sixtwo/rl.dhL (JILjava/util/function/Predicate;Ljava/util/function/Predicate;)Z
      // 05b: pop
      // 05c: aload 0
      // 05d: getfield sixtwo/cW.RjLgn Lsixtwo/cC;
      // 060: invokevirtual sixtwo/cC.VC ()I
      // 063: istore 5
      // 065: aload 0
      // 066: getfield sixtwo/cW.BAskS Lsixtwo/cC;
      // 069: invokevirtual sixtwo/cC.VB ()F
      // 06c: fstore 6
      // 06e: aload 0
      // 06f: getfield sixtwo/cW.NkSiv Lsixtwo/rl;
      // 072: invokevirtual sixtwo/rl.dhG ()Ljava/util/List;
      // 075: astore 7
      // 077: aload 0
      // 078: aload 7
      // 07a: invokevirtual sixtwo/cW.ZZ (Ljava/util/List;)Ljava/util/List;
      // 07d: astore 8
      // 07f: new java/util/HashSet
      // 082: dup
      // 083: invokespecial java/util/HashSet.<init> ()V
      // 086: astore 9
      // 088: aload 8
      // 08a: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 08f: astore 10
      // 091: aload 10
      // 093: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 098: ifeq 1bc
      // 09b: aload 10
      // 09d: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0a2: checkcast sixtwo/cW$sq
      // 0a5: astore 11
      // 0a7: aload 11
      // 0a9: aload 4
      // 0ab: ifnonnull 0d7
      // 0ae: getfield sixtwo/cW$sq.YJdti I
      // 0b1: aload 4
      // 0b3: ifnonnull 1ce
      // 0b6: goto 0bd
      // 0b9: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bc: athrow
      // 0bd: iload 5
      // 0bf: if_icmpge 0d5
      // 0c2: goto 0c9
      // 0c5: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c8: athrow
      // 0c9: aload 4
      // 0cb: ifnull 091
      // 0ce: goto 0d5
      // 0d1: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d4: athrow
      // 0d5: aload 11
      // 0d7: invokevirtual sixtwo/cW$sq.dnH ()Lnet/minecraft/class_243;
      // 0da: astore 12
      // 0dc: aconst_null
      // 0dd: astore 13
      // 0df: fload 6
      // 0e1: fload 6
      // 0e3: fmul
      // 0e4: f2d
      // 0e5: dstore 14
      // 0e7: aload 0
      // 0e8: getfield sixtwo/cW.TjXAG Ljava/util/List;
      // 0eb: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0f0: astore 16
      // 0f2: aload 16
      // 0f4: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0f9: ifeq 152
      // 0fc: aload 16
      // 0fe: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 103: checkcast sixtwo/cW$sr
      // 106: astore 17
      // 108: aload 9
      // 10a: aload 17
      // 10c: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 111: aload 4
      // 113: ifnonnull 098
      // 116: ifeq 125
      // 119: aload 4
      // 11b: ifnull 0f2
      // 11e: goto 125
      // 121: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 124: athrow
      // 125: aload 17
      // 127: getfield sixtwo/cW$sr.AqODg Lnet/minecraft/class_243;
      // 12a: aload 12
      // 12c: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 12f: dstore 18
      // 131: dload 18
      // 133: aload 4
      // 135: ifnonnull 14b
      // 138: dload 14
      // 13a: dcmpg
      // 13b: ifge 14d
      // 13e: goto 145
      // 141: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 144: athrow
      // 145: aload 17
      // 147: astore 13
      // 149: dload 18
      // 14b: dstore 14
      // 14d: aload 4
      // 14f: ifnull 0f2
      // 152: aload 13
      // 154: aload 4
      // 156: ifnonnull 193
      // 159: ifnull 185
      // 15c: goto 163
      // 15f: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 162: athrow
      // 163: aload 13
      // 165: aload 11
      // 167: getfield sixtwo/cW$sq.YJdti I
      // 16a: aload 12
      // 16c: invokevirtual sixtwo/cW$sr.dnJ (ILnet/minecraft/class_243;)V
      // 16f: aload 9
      // 171: aload 13
      // 173: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 178: pop
      // 179: aload 4
      // 17b: ifnull 1b7
      // 17e: goto 185
      // 181: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 184: athrow
      // 185: new sixtwo/cW$sr
      // 188: dup
      // 189: invokespecial sixtwo/cW$sr.<init> ()V
      // 18c: goto 193
      // 18f: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 192: athrow
      // 193: astore 16
      // 195: aload 16
      // 197: aload 11
      // 199: getfield sixtwo/cW$sq.YJdti I
      // 19c: aload 12
      // 19e: invokevirtual sixtwo/cW$sr.dnJ (ILnet/minecraft/class_243;)V
      // 1a1: aload 0
      // 1a2: getfield sixtwo/cW.TjXAG Ljava/util/List;
      // 1a5: aload 16
      // 1a7: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1ac: pop
      // 1ad: aload 9
      // 1af: aload 16
      // 1b1: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 1b6: pop
      // 1b7: aload 4
      // 1b9: ifnull 091
      // 1bc: aload 0
      // 1bd: getfield sixtwo/cW.TjXAG Ljava/util/List;
      // 1c0: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1c5: astore 10
      // 1c7: aload 10
      // 1c9: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1ce: ifeq 21c
      // 1d1: aload 10
      // 1d3: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 1d8: checkcast sixtwo/cW$sr
      // 1db: astore 11
      // 1dd: aload 9
      // 1df: aload 11
      // 1e1: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 1e6: aload 4
      // 1e8: ifnonnull 206
      // 1eb: ifne 201
      // 1ee: goto 1f5
      // 1f1: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f4: athrow
      // 1f5: aload 11
      // 1f7: invokevirtual sixtwo/cW$sr.dnK ()V
      // 1fa: goto 201
      // 1fd: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 200: athrow
      // 201: aload 11
      // 203: invokevirtual sixtwo/cW$sr.dnN ()Z
      // 206: ifeq 217
      // 209: aload 10
      // 20b: invokeinterface java/util/Iterator.remove ()V 1
      // 210: goto 217
      // 213: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 216: athrow
      // 217: aload 4
      // 219: ifnull 1c7
      // 21c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 21f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 222: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 225: astore 11
      // 227: aload 0
      // 228: getfield sixtwo/cW.hUpkY Ljava/util/List;
      // 22b: invokeinterface java/util/List.clear ()V 1
      // 230: aload 0
      // 231: getfield sixtwo/cW.hUpkY Ljava/util/List;
      // 234: aload 0
      // 235: getfield sixtwo/cW.TjXAG Ljava/util/List;
      // 238: invokeinterface java/util/List.addAll (Ljava/util/Collection;)Z 2
      // 23d: pop
      // 23e: aload 0
      // 23f: getfield sixtwo/cW.hUpkY Ljava/util/List;
      // 242: aload 11
      // 244: invokedynamic compare (Lnet/minecraft/class_243;)Ljava/util/Comparator; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)I, sixtwo/cW.aaa (Lnet/minecraft/class_243;Lsixtwo/cW$sr;Lsixtwo/cW$sr;)I, (Lsixtwo/cW$sr;Lsixtwo/cW$sr;)I ]
      // 249: invokeinterface java/util/List.sort (Ljava/util/Comparator;)V 2
      // 24e: return
   }

   private boolean ZX(class_2680 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cW.TMUaI J
      // 003: ldc2_w 72444066878990
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 1
      // 00e: aload 4
      // 010: ifnonnull 01e
      // 013: ifnull 030
      // 016: goto 01d
      // 019: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: aload 1
      // 01e: aload 4
      // 020: ifnonnull 037
      // 023: invokevirtual net/minecraft/class_2680.method_26215 ()Z
      // 026: ifeq 036
      // 029: goto 030
      // 02c: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02f: athrow
      // 030: bipush 0
      // 031: ireturn
      // 032: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 035: athrow
      // 036: aload 1
      // 037: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 03a: astore 5
      // 03c: aload 0
      // 03d: getfield sixtwo/cW.eomCv Lsixtwo/cw;
      // 040: invokevirtual sixtwo/cw.TC ()Z
      // 043: aload 4
      // 045: ifnonnull 07b
      // 048: ifeq 06d
      // 04b: goto 052
      // 04e: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 051: athrow
      // 052: aload 5
      // 054: instanceof net/minecraft/class_2478
      // 057: aload 4
      // 059: ifnonnull 14e
      // 05c: goto 063
      // 05f: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 062: athrow
      // 063: ifne 14d
      // 066: goto 06d
      // 069: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06c: athrow
      // 06d: aload 0
      // 06e: getfield sixtwo/cW.IcGgS Lsixtwo/cw;
      // 071: invokevirtual sixtwo/cw.TC ()Z
      // 074: goto 07b
      // 077: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07a: athrow
      // 07b: aload 4
      // 07d: ifnonnull 0b3
      // 080: ifeq 0a5
      // 083: goto 08a
      // 086: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 089: athrow
      // 08a: aload 5
      // 08c: instanceof net/minecraft/class_2269
      // 08f: aload 4
      // 091: ifnonnull 14e
      // 094: goto 09b
      // 097: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09a: athrow
      // 09b: ifne 14d
      // 09e: goto 0a5
      // 0a1: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a4: athrow
      // 0a5: aload 0
      // 0a6: getfield sixtwo/cW.WtLkJ Lsixtwo/cw;
      // 0a9: invokevirtual sixtwo/cw.TC ()Z
      // 0ac: goto 0b3
      // 0af: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b2: athrow
      // 0b3: aload 4
      // 0b5: ifnonnull 0eb
      // 0b8: ifeq 0dd
      // 0bb: goto 0c2
      // 0be: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c1: athrow
      // 0c2: aload 5
      // 0c4: instanceof net/minecraft/class_2401
      // 0c7: aload 4
      // 0c9: ifnonnull 14e
      // 0cc: goto 0d3
      // 0cf: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d2: athrow
      // 0d3: ifne 14d
      // 0d6: goto 0dd
      // 0d9: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dc: athrow
      // 0dd: aload 0
      // 0de: getfield sixtwo/cW.YRSFN Lsixtwo/cw;
      // 0e1: invokevirtual sixtwo/cw.TC ()Z
      // 0e4: goto 0eb
      // 0e7: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ea: athrow
      // 0eb: aload 4
      // 0ed: ifnonnull 123
      // 0f0: ifeq 115
      // 0f3: goto 0fa
      // 0f6: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f9: athrow
      // 0fa: aload 5
      // 0fc: instanceof net/minecraft/class_2185
      // 0ff: aload 4
      // 101: ifnonnull 14e
      // 104: goto 10b
      // 107: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10a: athrow
      // 10b: ifne 14d
      // 10e: goto 115
      // 111: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 114: athrow
      // 115: aload 0
      // 116: getfield sixtwo/cW.TkcsS Lsixtwo/cw;
      // 119: invokevirtual sixtwo/cw.TC ()Z
      // 11c: goto 123
      // 11f: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 122: athrow
      // 123: aload 4
      // 125: ifnonnull 13e
      // 128: ifeq 151
      // 12b: goto 132
      // 12e: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 131: athrow
      // 132: aload 5
      // 134: instanceof net/minecraft/class_8168
      // 137: goto 13e
      // 13a: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13d: athrow
      // 13e: aload 4
      // 140: ifnonnull 14e
      // 143: ifeq 151
      // 146: goto 14d
      // 149: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14c: athrow
      // 14d: bipush 1
      // 14e: goto 152
      // 151: bipush 0
      // 152: ireturn
   }

   private boolean ZY(class_1297 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cW.TMUaI J
      // 003: ldc2_w 93272107449698
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 1
      // 00e: aload 4
      // 010: ifnonnull 01e
      // 013: ifnull 027
      // 016: goto 01d
      // 019: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: aload 1
      // 01e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 021: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 024: if_acmpne 02d
      // 027: bipush 0
      // 028: ireturn
      // 029: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02c: athrow
      // 02d: aload 0
      // 02e: getfield sixtwo/cW.PEUjg Lsixtwo/cw;
      // 031: invokevirtual sixtwo/cw.TC ()Z
      // 034: aload 4
      // 036: ifnonnull 06b
      // 039: ifeq 05d
      // 03c: goto 043
      // 03f: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 042: athrow
      // 043: aload 1
      // 044: instanceof net/minecraft/class_1530
      // 047: aload 4
      // 049: ifnonnull 103
      // 04c: goto 053
      // 04f: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 052: athrow
      // 053: ifne 102
      // 056: goto 05d
      // 059: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05c: athrow
      // 05d: aload 0
      // 05e: getfield sixtwo/cW.dVboG Lsixtwo/cw;
      // 061: invokevirtual sixtwo/cw.TC ()Z
      // 064: goto 06b
      // 067: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06a: athrow
      // 06b: aload 4
      // 06d: ifnonnull 0a2
      // 070: ifeq 094
      // 073: goto 07a
      // 076: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 079: athrow
      // 07a: aload 1
      // 07b: instanceof net/minecraft/class_1531
      // 07e: aload 4
      // 080: ifnonnull 103
      // 083: goto 08a
      // 086: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 089: athrow
      // 08a: ifne 102
      // 08d: goto 094
      // 090: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 093: athrow
      // 094: aload 0
      // 095: getfield sixtwo/cW.sZCWO Lsixtwo/cw;
      // 098: invokevirtual sixtwo/cw.TC ()Z
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: aload 4
      // 0a4: ifnonnull 0d9
      // 0a7: ifeq 0cb
      // 0aa: goto 0b1
      // 0ad: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b0: athrow
      // 0b1: aload 1
      // 0b2: instanceof net/minecraft/class_1688
      // 0b5: aload 4
      // 0b7: ifnonnull 103
      // 0ba: goto 0c1
      // 0bd: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c0: athrow
      // 0c1: ifne 102
      // 0c4: goto 0cb
      // 0c7: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ca: athrow
      // 0cb: aload 0
      // 0cc: getfield sixtwo/cW.XQhcG Lsixtwo/cw;
      // 0cf: invokevirtual sixtwo/cw.TC ()Z
      // 0d2: goto 0d9
      // 0d5: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d8: athrow
      // 0d9: aload 4
      // 0db: ifnonnull 0f3
      // 0de: ifeq 106
      // 0e1: goto 0e8
      // 0e4: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e7: athrow
      // 0e8: aload 1
      // 0e9: instanceof net/minecraft/class_1540
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: aload 4
      // 0f5: ifnonnull 103
      // 0f8: ifeq 106
      // 0fb: goto 102
      // 0fe: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 101: athrow
      // 102: bipush 1
      // 103: goto 107
      // 106: bipush 0
      // 107: ireturn
   }

   @hG
   public void ZW(gk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cW.TMUaI J
      // 003: ldc2_w 65743196347209
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/cW.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 030
      // 016: ifeq 033
      // 019: goto 020
      // 01c: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: aload 0
      // 021: getfield sixtwo/cW.hUpkY Ljava/util/List;
      // 024: invokeinterface java/util/List.isEmpty ()Z 1
      // 029: goto 030
      // 02c: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02f: athrow
      // 030: ifeq 034
      // 033: return
      // 034: aload 1
      // 035: invokevirtual sixtwo/gk.baT ()Lsixtwo/lC;
      // 038: astore 5
      // 03a: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 03d: astore 6
      // 03f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 042: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 045: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 048: astore 7
      // 04a: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 04d: ldc_w 7.0
      // 050: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 053: astore 8
      // 055: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 058: ldc_w 6.0
      // 05b: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 05e: astore 9
      // 060: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 063: ldc_w 5.0
      // 066: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 069: astore 10
      // 06b: aload 0
      // 06c: getfield sixtwo/cW.hUpkY Ljava/util/List;
      // 06f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 074: astore 11
      // 076: aload 11
      // 078: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 07d: ifeq 2f7
      // 080: aload 11
      // 082: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 087: checkcast sixtwo/cW$sr
      // 08a: astore 12
      // 08c: aload 12
      // 08e: invokevirtual sixtwo/cW$sr.dnM ()F
      // 091: fstore 13
      // 093: fload 13
      // 095: fconst_0
      // 096: fcmpl
      // 097: ifne 0a6
      // 09a: aload 4
      // 09c: ifnull 076
      // 09f: goto 0a6
      // 0a2: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a5: athrow
      // 0a6: aload 12
      // 0a8: invokevirtual sixtwo/cW$sr.dnL ()Lnet/minecraft/class_243;
      // 0ab: invokestatic sixtwo/jI.bIw (Lnet/minecraft/class_243;)Lnet/minecraft/class_241;
      // 0ae: astore 14
      // 0b0: aload 14
      // 0b2: ifnonnull 0c1
      // 0b5: aload 4
      // 0b7: ifnull 076
      // 0ba: goto 0c1
      // 0bd: invokestatic sixtwo/cW.aab (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c0: athrow
      // 0c1: aload 12
      // 0c3: getfield sixtwo/cW$sr.AqODg Lnet/minecraft/class_243;
      // 0c6: astore 15
      // 0c8: sipush 18913
      // 0cb: aload 7
      // 0cd: aload 15
      // 0cf: invokevirtual net/minecraft/class_243.method_1022 (Lnet/minecraft/class_243;)D
      // 0d2: dstore 16
      // 0d4: ldc2_w 8667307357774288869
      // 0d7: lload 2
      // 0d8: lxor
      // 0d9: invokedynamic y (IJ)Ljava/lang/String; bsm=sixtwo/cW.aaf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0de: astore 18
      // 0e0: dload 16
      // 0e2: invokestatic java/lang/Math.round (D)J
      // 0e5: invokedynamic makeConcatWithConstants (J)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001m" ]
      // 0ea: astore 19
      // 0ec: ldc_w 5.0
      // 0ef: fstore 20
      // 0f1: ldc_w 4.0
      // 0f4: fstore 21
      // 0f6: ldc_w 70.0
      // 0f9: fload 20
      // 0fb: fconst_2
      // 0fc: fmul
      // 0fd: fadd
      // 0fe: fstore 22
      // 100: ldc_w 40.0
      // 103: fstore 23
      // 105: aload 14
      // 107: getfield net/minecraft/class_241.field_1343 F
      // 10a: fload 22
      // 10c: fconst_2
      // 10d: fdiv
      // 10e: fsub
      // 10f: fstore 24
      // 111: aload 14
      // 113: getfield net/minecraft/class_241.field_1342 F
      // 116: fstore 25
      // 118: fload 24
      // 11a: fload 22
      // 11c: fconst_2
      // 11d: fdiv
      // 11e: fadd
      // 11f: fstore 26
      // 121: fload 25
      // 123: fload 23
      // 125: fconst_2
      // 126: fdiv
      // 127: fadd
      // 128: fstore 27
      // 12a: aload 5
      // 12c: fload 26
      // 12e: fload 27
      // 130: ldc_w 0.5
      // 133: ldc_w 0.5
      // 136: fload 13
      // 138: fmul
      // 139: fadd
      // 13a: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // 13d: aload 5
      // 13f: fload 24
      // 141: fload 25
      // 143: fload 22
      // 145: fload 23
      // 147: fload 13
      // 149: fconst_0
      // 14a: ldc_w 4.0
      // 14d: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 150: ldc_w 5.0
      // 153: invokevirtual sixtwo/lC.ccW (FFFFFFLsixtwo/ld;F)V
      // 156: aload 6
      // 158: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 15b: ldc_w 255.0
      // 15e: fload 13
      // 160: fmul
      // 161: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 164: astore 28
      // 166: aload 6
      // 168: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 16b: ldc_w 0.5
      // 16e: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 171: astore 29
      // 173: aload 6
      // 175: invokevirtual sixtwo/ii.bjf ()Lsixtwo/mG;
      // 178: ldc_w 220.0
      // 17b: fload 13
      // 17d: fmul
      // 17e: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 181: astore 30
      // 183: aload 6
      // 185: invokevirtual sixtwo/ii.bje ()Lsixtwo/mG;
      // 188: ldc_w 255.0
      // 18b: ldc_w 100.0
      // 18e: invokestatic sixtwo/fX.aYh ()F
      // 191: fmul
      // 192: fsub
      // 193: ldc_w 0.7
      // 196: fmul
      // 197: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 19a: fload 13
      // 19c: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 19f: astore 31
      // 1a1: fload 24
      // 1a3: fload 20
      // 1a5: fadd
      // 1a6: fstore 32
      // 1a8: fload 25
      // 1aa: fload 21
      // 1ac: fadd
      // 1ad: fstore 33
      // 1af: aload 5
      // 1b1: aload 8
      // 1b3: aload 18
      // 1b5: fload 32
      // 1b7: fload 33
      // 1b9: aload 28
      // 1bb: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 1be: aload 5
      // 1c0: aload 9
      // 1c2: aload 19
      // 1c4: fload 24
      // 1c6: fload 22
      // 1c8: fadd
      // 1c9: fload 20
      // 1cb: fsub
      // 1cc: fload 33
      // 1ce: aload 29
      // 1d0: invokevirtual sixtwo/lC.ceP (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 1d3: fload 24
      // 1d5: fload 20
      // 1d7: fadd
      // 1d8: fstore 34
      // 1da: fload 33
      // 1dc: ldc_w 18.0
      // 1df: fadd
      // 1e0: fstore 35
      // 1e2: fload 35
      // 1e4: ldc_w 7.0
      // 1e7: fsub
      // 1e8: fstore 36
      // 1ea: aload 5
      // 1ec: aload 10
      // 1ee: sipush 29610
      // 1f1: ldc2_w 5466654454538186157
      // 1f4: lload 2
      // 1f5: lxor
      // 1f6: invokedynamic y (IJ)Ljava/lang/String; bsm=sixtwo/cW.aaf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1fb: fload 32
      // 1fd: fload 36
      // 1ff: aload 29
      // 201: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 204: fload 22
      // 206: fconst_2
      // 207: fload 20
      // 209: fmul
      // 20a: fsub
      // 20b: fstore 37
      // 20d: ldc_w 2.5
      // 210: fstore 38
      // 212: fload 34
      // 214: fload 37
      // 216: fadd
      // 217: fstore 39
      // 219: fload 35
      // 21b: ldc_w 7.5
      // 21e: fsub
      // 21f: fstore 40
      // 221: aload 5
      // 223: aload 9
      // 225: aload 12
      // 227: getfield sixtwo/cW$sr.hRZdA I
      // 22a: invokestatic java/lang/String.valueOf (I)Ljava/lang/String;
      // 22d: fload 39
      // 22f: fload 40
      // 231: aload 28
      // 233: invokevirtual sixtwo/lC.ceP (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 236: aload 5
      // 238: fload 34
      // 23a: fload 35
      // 23c: fload 37
      // 23e: fload 38
      // 240: ldc_w 0.25
      // 243: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 246: aload 31
      // 248: invokevirtual sixtwo/lC.cdg (FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 24b: fload 37
      // 24d: aload 12
      // 24f: getfield sixtwo/cW$sr.hRZdA I
      // 252: i2f
      // 253: fconst_0
      // 254: aload 0
      // 255: getfield sixtwo/cW.RjLgn Lsixtwo/cC;
      // 258: invokevirtual sixtwo/cC.VG ()D
      // 25b: d2f
      // 25c: invokestatic sixtwo/jf.bAI (FFF)F
      // 25f: fconst_1
      // 260: invokestatic java/lang/Math.min (FF)F
      // 263: fmul
      // 264: fstore 41
      // 266: aload 5
      // 268: fload 34
      // 26a: fload 35
      // 26c: fload 41
      // 26e: fload 38
      // 270: ldc_w 0.25
      // 273: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 276: aload 30
      // 278: invokevirtual sixtwo/lC.cdg (FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 27b: fload 35
      // 27d: fload 38
      // 27f: fadd
      // 280: ldc_w 5.0
      // 283: fadd
      // 284: fstore 42
      // 286: ldc_w 6.0
      // 289: fstore 43
      // 28b: aload 5
      // 28d: getstatic sixtwo/lf.GHxLj Lsixtwo/lf;
      // 290: fload 32
      // 292: fload 42
      // 294: fload 43
      // 296: aload 29
      // 298: invokevirtual sixtwo/lC.cem (Lsixtwo/lf;FFFLsixtwo/mG;)V
      // 29b: fload 32
      // 29d: fload 43
      // 29f: fadd
      // 2a0: ldc_w 3.0
      // 2a3: fadd
      // 2a4: fstore 44
      // 2a6: fload 42
      // 2a8: aload 9
      // 2aa: invokevirtual sixtwo/lq.cat ()F
      // 2ad: fload 43
      // 2af: invokestatic sixtwo/jf.bAH (FF)F
      // 2b2: fadd
      // 2b3: fstore 45
      // 2b5: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2b8: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2bb: invokevirtual net/minecraft/class_746.method_23317 ()D
      // 2be: invokestatic java/lang/Math.round (D)J
      // 2c1: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2c4: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2c7: invokevirtual net/minecraft/class_746.method_23318 ()D
      // 2ca: invokestatic java/lang/Math.round (D)J
      // 2cd: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2d0: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2d3: invokevirtual net/minecraft/class_746.method_23321 ()D
      // 2d6: invokestatic java/lang/Math.round (D)J
      // 2d9: invokedynamic makeConcatWithConstants (JJJ)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001 \u0001 \u0001" ]
      // 2de: astore 46
      // 2e0: aload 5
      // 2e2: aload 9
      // 2e4: aload 46
      // 2e6: fload 44
      // 2e8: fload 45
      // 2ea: aload 29
      // 2ec: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 2ef: invokestatic sixtwo/jH.bIf ()V
      // 2f2: aload 4
      // 2f4: ifnull 076
      // 2f7: return
   }

   @Override
   public void YO() {
      super.YO();
      this.TjXAG.clear();
      this.hUpkY.clear();
      this.NkSiv.dhH();
   }
}
