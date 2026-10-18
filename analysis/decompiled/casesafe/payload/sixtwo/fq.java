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
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_3966;

public class fq extends gg {
   private final ct meQED;
   private final cu ufdaw;
   private final cu zpLUV;
   private final cC zGQMR;
   private final cC TrhFC;
   private final cJ sHsoL;
   private final cJ QSPxG;
   private final cJ bLnpl;
   private final cz aucRP;
   private final cJ mEZCb;
   private final cJ ZCQrO;
   private final cC xkXFw;
   private final cJ fylmP;
   private float vzqAe;
   private float ZLJlY;
   private class_1297 NZTfz;
   private final mT obThK;
   private static final long JcqZx = gb.aYR(6722144264915263589L, 8485176403376834707L, MethodHandles.lookup().lookupClass()).a(101350568889068L);
   private static final String[] cCFLo;
   private static final String[] DrcSw;
   private static final Map dEDLA = new HashMap(13);
   private static final long[] RNFBd;
   private static final Integer[] yYxeH;
   private static final Map Hkgvx;

   public fq() {
      long var1 = JcqZx ^ 39742417660808L;
      super(gf.aZL(4, false, gh.xwjCw));
      this.meQED = new ct(
         this,
         mr.clS(
            new int[]{
               aNq<"u">(16576, 7269692636762785411L ^ var1),
               aNq<"u">(7674, 7148043153210940327L ^ var1),
               aNq<"u">(19675, 147241905533766314L ^ var1),
               aNq<"u">(17741, 5207444576712999683L ^ var1)
            }
         )
      );
      ct var10003 = this.meQED;
      int[] var10004 = new int[aNq<"u">(14521, 7479358865478631129L ^ var1)];
      var10004[0] = aNq<"u">(15485, 6648057735348894260L ^ var1);
      var10004[1] = aNq<"u">(20825, 453999950435374894L ^ var1);
      var10004[2] = aNq<"u">(18752, 1644428328332578565L ^ var1);
      var10004[3] = aNq<"u">(18702, 4820569911447113528L ^ var1);
      var10004[4] = aNq<"u">(17596, 3078877372450390781L ^ var1);
      var10004[5] = aNq<"u">(25069, 9052440558710187954L ^ var1);
      var10004[aNq<"u">(3485, 9170031770254052325L ^ var1)] = aNq<"u">(661, 965669253432378590L ^ var1);
      this.ufdaw = new cu(var10003, mr.clS(var10004)).SY();
      var10003 = this.meQED;
      var10004 = new int[aNq<"u">(11466, 2097678549715036836L ^ var1)];
      var10004[0] = aNq<"u">(18722, 8466805466691030854L ^ var1);
      var10004[1] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[2] = aNq<"u">(25069, 9052440558710187954L ^ var1);
      var10004[3] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      var10004[4] = aNq<"u">(31255, 8960210925321813038L ^ var1);
      var10004[5] = aNq<"u">(21486, 7401249408099276164L ^ var1);
      this.zpLUV = new cu(var10003, mr.clS(var10004));
      this.zGQMR = new cC(
            this,
            mr.clS(
               new int[]{
                  aNq<"u">(21890, 9181984811459826632L ^ var1),
                  aNq<"u">(19152, 3829348154816908418L ^ var1),
                  aNq<"u">(381, 3677664037822301958L ^ var1),
                  aNq<"u">(20625, 4616235026142156449L ^ var1),
                  aNq<"u">(9999, 9062296939704951115L ^ var1)
               }
            )
         )
         .Vy(0.01)
         .Vw(0.0)
         .Vx(2.0)
         .VA(0.0)
         .Vz(aNn<"n">(30950, 1769315386658157550L ^ var1));
      var10004 = new int[aNq<"u">(11466, 2097678549715036836L ^ var1)];
      var10004[0] = aNq<"u">(23237, 6201662541036412074L ^ var1);
      var10004[1] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      var10004[2] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[3] = aNq<"u">(4212, 2789960145337751082L ^ var1);
      var10004[4] = aNq<"u">(663, 4605736635279410399L ^ var1);
      var10004[5] = aNq<"u">(20625, 4616235026142156449L ^ var1);
      this.TrhFC = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(0.0).Vx(2.0).VA(0.0).Vz(aNn<"n">(11733, 354265759420065500L ^ var1));
      var10004 = new int[aNq<"u">(7353, 1061828689117846235L ^ var1)];
      var10004[0] = aNq<"u">(13927, 3676838838543167580L ^ var1);
      var10004[1] = aNq<"u">(31486, 5863789560144100525L ^ var1);
      var10004[2] = aNq<"u">(31255, 8960210925321813038L ^ var1);
      var10004[3] = aNq<"u">(20697, 2379437693850998502L ^ var1);
      var10004[4] = aNq<"u">(3826, 6433675399295633578L ^ var1);
      var10004[5] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      var10004[aNq<"u">(11466, 2097678549715036836L ^ var1)] = aNq<"u">(30446, 7122276873813258388L ^ var1);
      var10004[aNq<"u">(27878, 2372628032931883729L ^ var1)] = aNq<"u">(25652, 1962542020886553162L ^ var1);
      var10004[aNq<"u">(11594, 329264981722016538L ^ var1)] = aNq<"u">(20425, 192698016932186525L ^ var1);
      var10004[aNq<"u">(17598, 4872448777349972683L ^ var1)] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[aNq<"u">(28558, 2056436876687141363L ^ var1)] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      var10004[aNq<"u">(2587, 5657753222052875335L ^ var1)] = aNq<"u">(31255, 8960210925321813038L ^ var1);
      var10004[aNq<"u">(27090, 6473806834690748399L ^ var1)] = aNq<"u">(381, 3677664037822301958L ^ var1);
      var10004[aNq<"u">(9260, 5452509006141825552L ^ var1)] = aNq<"u">(10532, 2965208067204394773L ^ var1);
      this.sHsoL = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aNq<"u">(14861, 4403627174544915513L ^ var1)];
      var10004[0] = aNq<"u">(22637, 6343835386643242516L ^ var1);
      var10004[1] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[2] = aNq<"u">(8448, 4693067732600825724L ^ var1);
      var10004[3] = aNq<"u">(661, 965669253432378590L ^ var1);
      var10004[4] = aNq<"u">(25900, 9088490360497398649L ^ var1);
      var10004[5] = aNq<"u">(25069, 9052440558710187954L ^ var1);
      var10004[aNq<"u">(11466, 2097678549715036836L ^ var1)] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      var10004[aNq<"u">(27878, 2372628032931883729L ^ var1)] = aNq<"u">(5706, 7594704960675483675L ^ var1);
      var10004[aNq<"u">(22339, 460738330710856059L ^ var1)] = aNq<"u">(24317, 2965632233084999844L ^ var1);
      var10004[aNq<"u">(13173, 8218819727421256988L ^ var1)] = aNq<"u">(27481, 1882135638368251188L ^ var1);
      var10004[aNq<"u">(2350, 4124573931124363028L ^ var1)] = aNq<"u">(5706, 7594704960675483675L ^ var1);
      var10004[aNq<"u">(4738, 5156105572714878165L ^ var1)] = aNq<"u">(6931, 8270721686364953957L ^ var1);
      var10004[aNq<"u">(14171, 8950964935677358437L ^ var1)] = aNq<"u">(20697, 2379437693850998502L ^ var1);
      var10004[aNq<"u">(27294, 2536702969988672729L ^ var1)] = aNq<"u">(25069, 9052440558710187954L ^ var1);
      var10004[aNq<"u">(7169, 5882857218301827684L ^ var1)] = aNq<"u">(381, 3677664037822301958L ^ var1);
      var10004[aNq<"u">(757, 7557103102410359971L ^ var1)] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[aNq<"u">(21249, 8461662474363327811L ^ var1)] = aNq<"u">(31255, 8960210925321813038L ^ var1);
      var10004[aNq<"u">(1817, 8295808793919324501L ^ var1)] = aNq<"u">(31486, 5863789560144100525L ^ var1);
      var10004[aNq<"u">(2007, 6406966898463277489L ^ var1)] = aNq<"u">(5706, 7594704960675483675L ^ var1);
      var10004[aNq<"u">(16354, 131008056607324612L ^ var1)] = aNq<"u">(20403, 2767327392647858684L ^ var1);
      var10004[aNq<"u">(14235, 358406457484063169L ^ var1)] = aNq<"u">(20697, 2379437693850998502L ^ var1);
      var10004[aNq<"u">(26688, 770427930030042630L ^ var1)] = aNq<"u">(6178, 5455810484977475146L ^ var1);
      var10004[aNq<"u">(24376, 700701113017719115L ^ var1)] = aNq<"u">(18244, 6046434278973784372L ^ var1);
      var10004[aNq<"u">(28141, 3695115732494117834L ^ var1)] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      var10004[aNq<"u">(29740, 5365647999589544527L ^ var1)] = aNq<"u">(6178, 5455810484977475146L ^ var1);
      this.QSPxG = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aNq<"u">(7169, 5882857218301827684L ^ var1)];
      var10004[0] = aNq<"u">(9872, 3547354654052360443L ^ var1);
      var10004[1] = aNq<"u">(31255, 8960210925321813038L ^ var1);
      var10004[2] = aNq<"u">(25069, 9052440558710187954L ^ var1);
      var10004[3] = aNq<"u">(20681, 468820208503543428L ^ var1);
      var10004[4] = aNq<"u">(5706, 7594704960675483675L ^ var1);
      var10004[5] = aNq<"u">(21544, 6263384538757321289L ^ var1);
      var10004[aNq<"u">(11466, 2097678549715036836L ^ var1)] = aNq<"u">(20697, 2379437693850998502L ^ var1);
      var10004[aNq<"u">(27878, 2372628032931883729L ^ var1)] = aNq<"u">(20425, 192698016932186525L ^ var1);
      var10004[aNq<"u">(22339, 460738330710856059L ^ var1)] = aNq<"u">(5706, 7594704960675483675L ^ var1);
      var10004[aNq<"u">(13173, 8218819727421256988L ^ var1)] = aNq<"u">(29147, 9121785745755830254L ^ var1);
      var10004[aNq<"u">(2350, 4124573931124363028L ^ var1)] = aNq<"u">(25069, 9052440558710187954L ^ var1);
      var10004[aNq<"u">(4738, 5156105572714878165L ^ var1)] = aNq<"u">(20697, 2379437693850998502L ^ var1);
      var10004[aNq<"u">(14171, 8950964935677358437L ^ var1)] = aNq<"u">(20625, 4616235026142156449L ^ var1);
      var10004[aNq<"u">(27294, 2536702969988672729L ^ var1)] = aNq<"u">(8448, 4693067732600825724L ^ var1);
      this.bLnpl = new cJ(this, mr.clS(var10004)).WE(false);
      this.aucRP = new cz(
         this,
         mr.clS(
            new int[]{
               aNq<"u">(29147, 9121785745755830254L ^ var1),
               aNq<"u">(25069, 9052440558710187954L ^ var1),
               aNq<"u">(20697, 2379437693850998502L ^ var1),
               aNq<"u">(20625, 4616235026142156449L ^ var1),
               aNq<"u">(8448, 4693067732600825724L ^ var1)
            }
         )
      );
      var10004 = new int[aNq<"u">(13173, 8218819727421256988L ^ var1)];
      var10004[0] = aNq<"u">(24317, 2965632233084999844L ^ var1);
      var10004[1] = aNq<"u">(31255, 8960210925321813038L ^ var1);
      var10004[2] = aNq<"u">(3169, 4857651058527898170L ^ var1);
      var10004[3] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[4] = aNq<"u">(8448, 4693067732600825724L ^ var1);
      var10004[5] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[aNq<"u">(11466, 2097678549715036836L ^ var1)] = aNq<"u">(6178, 5455810484977475146L ^ var1);
      var10004[aNq<"u">(27878, 2372628032931883729L ^ var1)] = aNq<"u">(25069, 9052440558710187954L ^ var1);
      var10004[aNq<"u">(22339, 460738330710856059L ^ var1)] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      this.mEZCb = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aNq<"u">(27878, 2372628032931883729L ^ var1)];
      var10004[0] = aNq<"u">(10605, 3170487709011095341L ^ var1);
      var10004[1] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[2] = aNq<"u">(8448, 4693067732600825724L ^ var1);
      var10004[3] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[4] = aNq<"u">(6178, 5455810484977475146L ^ var1);
      var10004[5] = aNq<"u">(25069, 9052440558710187954L ^ var1);
      var10004[aNq<"u">(11466, 2097678549715036836L ^ var1)] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      this.ZCQrO = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aNq<"u">(27294, 2536702969988672729L ^ var1)];
      var10004[0] = aNq<"u">(27041, 6214642467099373517L ^ var1);
      var10004[1] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      var10004[2] = aNq<"u">(20625, 4616235026142156449L ^ var1);
      var10004[3] = aNq<"u">(20425, 192698016932186525L ^ var1);
      var10004[4] = aNq<"u">(595, 7391030954844521568L ^ var1);
      var10004[5] = aNq<"u">(5706, 7594704960675483675L ^ var1);
      var10004[aNq<"u">(11466, 2097678549715036836L ^ var1)] = aNq<"u">(29146, 3006849861299763176L ^ var1);
      var10004[aNq<"u">(27878, 2372628032931883729L ^ var1)] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[aNq<"u">(22339, 460738330710856059L ^ var1)] = aNq<"u">(23525, 2380002124336586129L ^ var1);
      var10004[aNq<"u">(13173, 8218819727421256988L ^ var1)] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      var10004[aNq<"u">(2350, 4124573931124363028L ^ var1)] = aNq<"u">(20697, 2379437693850998502L ^ var1);
      var10004[aNq<"u">(4738, 5156105572714878165L ^ var1)] = aNq<"u">(20785, 6721889843780671299L ^ var1);
      var10004[aNq<"u">(14171, 8950964935677358437L ^ var1)] = aNq<"u">(20625, 4616235026142156449L ^ var1);
      this.xkXFw = new cC(this, mr.clS(var10004)).Vy(10.0).Vw(0.0).Vx(1000.0).VA(100.0).Vz(aNn<"n">(13522, 327939874945581017L ^ var1));
      var10004 = new int[aNq<"u">(27294, 2536702969988672729L ^ var1)];
      var10004[0] = aNq<"u">(29147, 9121785745755830254L ^ var1);
      var10004[1] = aNq<"u">(20625, 4616235026142156449L ^ var1);
      var10004[2] = aNq<"u">(661, 965669253432378590L ^ var1);
      var10004[3] = aNq<"u">(20625, 4616235026142156449L ^ var1);
      var10004[4] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[5] = aNq<"u">(32167, 1438769691006434264L ^ var1);
      var10004[aNq<"u">(11466, 2097678549715036836L ^ var1)] = aNq<"u">(5706, 7594704960675483675L ^ var1);
      var10004[aNq<"u">(27878, 2372628032931883729L ^ var1)] = aNq<"u">(6931, 8270721686364953957L ^ var1);
      var10004[aNq<"u">(22339, 460738330710856059L ^ var1)] = aNq<"u">(10627, 2049690934816616420L ^ var1);
      var10004[aNq<"u">(13173, 8218819727421256988L ^ var1)] = aNq<"u">(19152, 3829348154816908418L ^ var1);
      var10004[aNq<"u">(2350, 4124573931124363028L ^ var1)] = aNq<"u">(31486, 5863789560144100525L ^ var1);
      var10004[aNq<"u">(4738, 5156105572714878165L ^ var1)] = aNq<"u">(663, 4605736635279410399L ^ var1);
      var10004[aNq<"u">(14171, 8950964935677358437L ^ var1)] = aNq<"u">(20625, 4616235026142156449L ^ var1);
      this.fylmP = new cJ(this, mr.clS(var10004)).WE(false);
      this.obThK = mT.cpA();
      this.vzqAe = this.zGQMR.VB();
      this.ZLJlY = this.TrhFC.VB();
      this.zGQMR.Vd(() -> this.vzqAe = this.zGQMR.VB());
      this.TrhFC.Vd(() -> this.ZLJlY = this.TrhFC.VB());
      this.aucRP.Vf(this.bLnpl::WF);
      this.mEZCb.Vf(this.ufdaw::SZ);
      this.ZCQrO.Vf(this.zpLUV::SZ);
      this.xkXFw.Vf(this.zpLUV::SZ);
   }

   static {
      long var11 = JcqZx ^ 34595790893839L;
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
      String var17 = "├Ąxl*\u0016├Şo├ę\u001f┬ź├Ä├Ş┬╝├ů]├Ü\u0010V├ę.├Ę┬żo├Źp├░┬║┬Ą\u000f'_r\u008a\u0010\rF[U\u000b\u000b\u0000┬ę├ü\u0002\u0088@\u0096\u009aE┬Ş";
      int var19 = "├Ąxl*\u0016├Şo├ę\u001f┬ź├Ä├Ş┬╝├ů]├Ü\u0010V├ę.├Ę┬żo├Źp├░┬║┬Ą\u000f'_r\u008a\u0010\rF[U\u000b\u000b\u0000┬ę├ü\u0002\u0088@\u0096\u009aE┬Ş".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = aNk(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            cCFLo = var20;
            DrcSw = new String[3];
            Hkgvx = new HashMap(13);
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
            String var4 = "├î├¬\"dZ├Ł┬┐k┬Ą\u0083)Rcv6\u0098├Ą\u0085├│I\u0094\u0017\u0004u7\u0018<├╣\u0091├┤v┬í\u000b\u008d\u007f├Ęl\u008eB├ç, \u008c├│y┬▓F├Â├éw^\u0087B├Ż\u0017k\u0082\u0010.\u008ccO├ĘN├«\u0005\u0017\u000e0├║8M_├â├║├ľ┬╣├Ź=4┬╣!\u0015├Á\u0086┬Ş\u00ad\u0088\u009e:A\u0006)5\\f\u001d├╝m{6uFV\u001bq\u0012?\u0015ufq├î├ą├ą┬ąu\u008e\u0001p^├şU├ś@\u009a┬»├Şp\u0002rn├Ľ┬ę├Â┬ę├ä\u008c\u0091├Ç├Ć\u00983├â\u0085├▒├Ĺ├Ő├ĺ/├│V!#├ë┬í\u0003>s├ę\u008cI├║┬║*┬ú*\u0017\u0089├Ä├Ą┬žAl6┬▒\u007f├í\u000eh\u0013┬Â\u0010h├í├ć`\u0085├ů\b\u0012u┬ÂE'\u000eI┬┤@f\"\u0096├ł├Č├Ž├ÜU#\u0094r├»\u0005s├ł6A├ž┬»\u0091├▓├ćw├ť\u001bW├║┬í\u009b\u0085├í\u0007\u0097oZ┬íw>\u008a\u0013\u0095┬▒W0├┤├Ě\u0094┬»├Ś┬║┬«┬Ž├▒├î\r^├Â)\u009e\u009c├Ž\u0011├Ě┬í├ä8├Ś\t├ć\u0088\u0085$c┬¬├ä├Ą├╝├ë\u008bSZ\u001b%\u0016├ľ\u001dh┬Á┬┐#.5&├▒,├«\nR:\u008f,4\t├Á├ł/├╗\u001f\u008a\u007f\u0086\u008e\u009fHL├ä5\u009a┬»d=├ë\u0090FQ├ëyMv\u0001\u001b├ä├Ł├ą├ťx┬Ž\u0010┬│*^[=\u0015\u0014┬┤├ŽC\b=\u0090├ŽB\u001e\u0004├¬;\u008c&4├ú├Ä┬Č├ó┬Ą\u000b┬Ż├║\u0088\u0085├ŐbE├Ľ┬«4┬Ę=\u0005├╣gL├╗\u0015$├ő\u0087rS\u0017├Ł┬ú\u0015├ć\u008f\u0007├Ł^zE\rJ├│v\u0002E┬▒├ő┬ą┬Ž\u0087\u001e1\u0090\u007f\u009c>\f\u0011┬┤┬ą\u009c\u0097#<├Ź\u009cYn├á├Ć\u008fDW├║\u009a(├▓├ĆE\u0018├î'├Ą\u0001l\u0089?v┬┤ux\u0093\u0094\u0091┬▓6\u0088e\u0004p├č\u009c├â\u001a┬▒├Ź\u009e\u008f┬Ž\u0005\u0081\u009dO\u000fX'\u008b^k\u0087\u00812┬▓J\u008b├Źz┬░┬»┬Žp1)\u00adC┬Á\u0006├Ź\u000e├ÁBmO\u0011┬Â1┬»\u009e-f\u0081 ┬╗\u001d├Ż┬ź;O\u0084\u0086@BZ-&\u008e┬Ę:\u0089┬▓+\"\\\u0085@├î\u008e├é┬╗├Ż├ź6m\u0095├ÉkQ├ů├×\u0080├ö┬Ę\u0094├úf┬ĘL\"├Ő+┬ż├¬├╝├Ľ├Ő\u008d\u0012├Ś8\u009a├ů┬Ě\u009bqW3├Ç├Ż\t1M\u0094\u0083├┐\u008f├ą\rCa├Ĺ\u0084@├Ž\u0014┬ĚH\u0011├ÁU├í├ť\u008d┬┤\u000b\u0084\u0080├ô├│b?i\u008c\u001b\u0015├▒┬│\u0085┬ó\u0092┬Á┬á\u001ftx\u0016\u001f├Ä\u0086f\u0083\u0096├ô├ę├╗├óby6j\"";
            int var5 = "├î├¬\"dZ├Ł┬┐k┬Ą\u0083)Rcv6\u0098├Ą\u0085├│I\u0094\u0017\u0004u7\u0018<├╣\u0091├┤v┬í\u000b\u008d\u007f├Ęl\u008eB├ç, \u008c├│y┬▓F├Â├éw^\u0087B├Ż\u0017k\u0082\u0010.\u008ccO├ĘN├«\u0005\u0017\u000e0├║8M_├â├║├ľ┬╣├Ź=4┬╣!\u0015├Á\u0086┬Ş\u00ad\u0088\u009e:A\u0006)5\\f\u001d├╝m{6uFV\u001bq\u0012?\u0015ufq├î├ą├ą┬ąu\u008e\u0001p^├şU├ś@\u009a┬»├Şp\u0002rn├Ľ┬ę├Â┬ę├ä\u008c\u0091├Ç├Ć\u00983├â\u0085├▒├Ĺ├Ő├ĺ/├│V!#├ë┬í\u0003>s├ę\u008cI├║┬║*┬ú*\u0017\u0089├Ä├Ą┬žAl6┬▒\u007f├í\u000eh\u0013┬Â\u0010h├í├ć`\u0085├ů\b\u0012u┬ÂE'\u000eI┬┤@f\"\u0096├ł├Č├Ž├ÜU#\u0094r├»\u0005s├ł6A├ž┬»\u0091├▓├ćw├ť\u001bW├║┬í\u009b\u0085├í\u0007\u0097oZ┬íw>\u008a\u0013\u0095┬▒W0├┤├Ě\u0094┬»├Ś┬║┬«┬Ž├▒├î\r^├Â)\u009e\u009c├Ž\u0011├Ě┬í├ä8├Ś\t├ć\u0088\u0085$c┬¬├ä├Ą├╝├ë\u008bSZ\u001b%\u0016├ľ\u001dh┬Á┬┐#.5&├▒,├«\nR:\u008f,4\t├Á├ł/├╗\u001f\u008a\u007f\u0086\u008e\u009fHL├ä5\u009a┬»d=├ë\u0090FQ├ëyMv\u0001\u001b├ä├Ł├ą├ťx┬Ž\u0010┬│*^[=\u0015\u0014┬┤├ŽC\b=\u0090├ŽB\u001e\u0004├¬;\u008c&4├ú├Ä┬Č├ó┬Ą\u000b┬Ż├║\u0088\u0085├ŐbE├Ľ┬«4┬Ę=\u0005├╣gL├╗\u0015$├ő\u0087rS\u0017├Ł┬ú\u0015├ć\u008f\u0007├Ł^zE\rJ├│v\u0002E┬▒├ő┬ą┬Ž\u0087\u001e1\u0090\u007f\u009c>\f\u0011┬┤┬ą\u009c\u0097#<├Ź\u009cYn├á├Ć\u008fDW├║\u009a(├▓├ĆE\u0018├î'├Ą\u0001l\u0089?v┬┤ux\u0093\u0094\u0091┬▓6\u0088e\u0004p├č\u009c├â\u001a┬▒├Ź\u009e\u008f┬Ž\u0005\u0081\u009dO\u000fX'\u008b^k\u0087\u00812┬▓J\u008b├Źz┬░┬»┬Žp1)\u00adC┬Á\u0006├Ź\u000e├ÁBmO\u0011┬Â1┬»\u009e-f\u0081 ┬╗\u001d├Ż┬ź;O\u0084\u0086@BZ-&\u008e┬Ę:\u0089┬▓+\"\\\u0085@├î\u008e├é┬╗├Ż├ź6m\u0095├ÉkQ├ů├×\u0080├ö┬Ę\u0094├úf┬ĘL\"├Ő+┬ż├¬├╝├Ľ├Ő\u008d\u0012├Ś8\u009a├ů┬Ě\u009bqW3├Ç├Ż\t1M\u0094\u0083├┐\u008f├ą\rCa├Ĺ\u0084@├Ž\u0014┬ĚH\u0011├ÁU├í├ť\u008d┬┤\u000b\u0084\u0080├ô├│b?i\u008c\u001b\u0015├▒┬│\u0085┬ó\u0092┬Á┬á\u001ftx\u0016\u001f├Ä\u0086f\u0083\u0096├ô├ę├╗├óby6j\""
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
                           RNFBd = var6;
                           yYxeH = new Integer[82];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "'\u0097├Ž{├ô>I┬Â├ü\u008f\u0087\u001d┬ž├Â;6";
                        var5 = "'\u0097├Ž{├ô>I┬Â├ü\u008f\u0087\u001d┬ž├Â;6".length();
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

   private static int aNo(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 27844;
      if (yYxeH[var3] == null) {
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
         long var5 = RNFBd[var3];
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
         Object[] var9 = (Object[])Hkgvx.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Hkgvx.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/fq", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         yYxeH[var3] = var15;
      }

      return yYxeH[var3];
   }

   public cJ aMZ() {
      return this.ZCQrO;
   }

   public cJ aMU() {
      return this.sHsoL;
   }

   public cJ aMY() {
      return this.mEZCb;
   }

   public class_1297 aNe() {
      return this.NZTfz;
   }

   public cJ aMW() {
      return this.bLnpl;
   }

   private static int aNp(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aNo(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public float aNc() {
      return this.vzqAe;
   }

   private static String aNk(byte[] var0) {
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

   public cJ aMV() {
      return this.QSPxG;
   }

   private static Object aNm(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = aNl(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public cz aMX() {
      return this.aucRP;
   }

   public cC aNa() {
      return this.xkXFw;
   }

   private static String aNl(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 25019;
      if (DrcSw[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])dEDLA.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               dEDLA.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/fq", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = cCFLo[var5].getBytes("ISO-8859-1");
         DrcSw[var5] = aNk(((Cipher)var4[0]).doFinal(var9));
      }

      return DrcSw[var5];
   }

   public float aNd() {
      return this.ZLJlY;
   }

   public mT aNf() {
      return this.obThK;
   }

   public cJ aNb() {
      return this.fylmP;
   }

   private void aMN() {
      this.NZTfz = null;
   }

   @hG
   public void aMD(gZ$tt param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fq.JcqZx J
      // 03: ldc2_w 123744610596222
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/fq.bab ()Z
      // 11: aload 4
      // 13: ifnonnull 2e
      // 16: ifeq 3d
      // 19: goto 20
      // 1c: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: getfield sixtwo/fq.zpLUV Lsixtwo/cu;
      // 24: invokevirtual sixtwo/cu.SZ ()Z
      // 27: goto 2e
      // 2a: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 4
      // 30: ifnonnull 57
      // 33: ifne 3e
      // 36: goto 3d
      // 39: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: return
      // 3e: aload 0
      // 3f: aload 4
      // 41: ifnonnull 5c
      // 44: invokevirtual sixtwo/fq.aMN ()V
      // 47: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 4a: getfield net/minecraft/class_310.field_1765 Lnet/minecraft/class_239;
      // 4d: instanceof net/minecraft/class_3966
      // 50: goto 57
      // 53: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: ifeq 5b
      // 5a: return
      // 5b: aload 0
      // 5c: invokevirtual sixtwo/fq.aMI ()Lnet/minecraft/class_3966;
      // 5f: astore 5
      // 61: aload 5
      // 63: aload 4
      // 65: ifnonnull 75
      // 68: ifnonnull 73
      // 6b: goto 72
      // 6e: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: return
      // 73: aload 5
      // 75: invokevirtual net/minecraft/class_3966.method_17782 ()Lnet/minecraft/class_1297;
      // 78: astore 6
      // 7a: aload 0
      // 7b: aload 6
      // 7d: invokevirtual sixtwo/fq.aMO (Lnet/minecraft/class_1297;)Lnet/minecraft/class_243;
      // 80: astore 7
      // 82: aload 7
      // 84: ifnonnull 8c
      // 87: return
      // 88: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8b: athrow
      // 8c: aload 0
      // 8d: aload 6
      // 8f: aload 4
      // 91: ifnonnull af
      // 94: invokestatic sixtwo/rD.dlX ()Lsixtwo/qL;
      // 97: invokevirtual sixtwo/qL.dbC ()Lsixtwo/ov;
      // 9a: invokevirtual sixtwo/fq.aMJ (Lnet/minecraft/class_1297;Lsixtwo/ov;)Lnet/minecraft/class_3966;
      // 9d: ifnull ac
      // a0: goto a7
      // a3: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a6: athrow
      // a7: return
      // a8: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ab: athrow
      // ac: aload 0
      // ad: aload 6
      // af: putfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // b2: aload 0
      // b3: getfield sixtwo/fq.obThK Lsixtwo/mT;
      // b6: invokevirtual sixtwo/mT.cpB ()V
      // b9: aload 1
      // ba: bipush 1
      // bb: invokevirtual sixtwo/gZ$tt.bdX (Z)V
      // be: return
   }

   private class_243 aMO(class_1297 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fq.JcqZx J
      // 03: ldc2_w 79476730928432
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 4
      // 0d: aload 1
      // 0e: ifnonnull 17
      // 11: aconst_null
      // 12: areturn
      // 13: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16: athrow
      // 17: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1a: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1d: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 20: astore 5
      // 22: aload 5
      // 24: aload 1
      // 25: invokevirtual net/minecraft/class_1297.method_5829 ()Lnet/minecraft/class_238;
      // 28: invokestatic sixtwo/jg.bBK (Lnet/minecraft/class_243;Lnet/minecraft/class_238;)Lnet/minecraft/class_243;
      // 2b: astore 6
      // 2d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 30: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 33: invokevirtual net/minecraft/class_746.method_55755 ()D
      // 36: dstore 7
      // 38: aload 5
      // 3a: aload 4
      // 3c: ifnonnull 5d
      // 3f: aload 6
      // 41: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 44: dload 7
      // 46: dload 7
      // 48: dmul
      // 49: dcmpg
      // 4a: ifgt 60
      // 4d: goto 54
      // 50: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aload 6
      // 56: goto 5d
      // 59: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: goto 61
      // 60: aconst_null
      // 61: areturn
   }

   private static CallSite aNq(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aNp".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/fq" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public boolean aMG(class_1297 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fq.JcqZx J
      // 03: ldc2_w 46615986332724
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnonnull 1e
      // 13: ifnull 27
      // 16: goto 1d
      // 19: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 21: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 24: if_acmpne 2d
      // 27: bipush 0
      // 28: ireturn
      // 29: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 0
      // 2e: getfield sixtwo/fq.QSPxG Lsixtwo/cJ;
      // 31: invokevirtual sixtwo/cJ.WF ()Z
      // 34: aload 4
      // 36: ifnonnull 72
      // 39: ifeq 6b
      // 3c: goto 43
      // 3f: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 46: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 49: getstatic net/minecraft/class_1802.field_8786 Lnet/minecraft/class_1792;
      // 4c: invokevirtual net/minecraft/class_746.method_24518 (Lnet/minecraft/class_1792;)Z
      // 4f: aload 4
      // 51: ifnonnull 72
      // 54: goto 5b
      // 57: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: ifeq 6b
      // 5e: goto 65
      // 61: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: bipush 0
      // 66: ireturn
      // 67: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a: athrow
      // 6b: aload 0
      // 6c: getfield sixtwo/fq.bLnpl Lsixtwo/cJ;
      // 6f: invokevirtual sixtwo/cJ.WF ()Z
      // 72: aload 4
      // 74: ifnonnull a8
      // 77: ifeq a4
      // 7a: goto 81
      // 7d: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: aload 0
      // 82: getfield sixtwo/fq.aucRP Lsixtwo/cz;
      // 85: invokevirtual sixtwo/cz.Uy ()Z
      // 88: aload 4
      // 8a: ifnonnull a8
      // 8d: goto 94
      // 90: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 93: athrow
      // 94: ifne a4
      // 97: goto 9e
      // 9a: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9d: athrow
      // 9e: bipush 0
      // 9f: ireturn
      // a0: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a3: athrow
      // a4: aload 1
      // a5: instanceof net/minecraft/class_1657
      // a8: aload 4
      // aa: ifnonnull f8
      // ad: ifeq f7
      // b0: goto b7
      // b3: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b6: athrow
      // b7: aload 1
      // b8: checkcast net/minecraft/class_1657
      // bb: astore 5
      // bd: aload 0
      // be: getfield sixtwo/fq.sHsoL Lsixtwo/cJ;
      // c1: invokevirtual sixtwo/cJ.WF ()Z
      // c4: aload 4
      // c6: ifnonnull f8
      // c9: ifeq f7
      // cc: goto d3
      // cf: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d2: athrow
      // d3: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // d6: aload 5
      // d8: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // db: aload 4
      // dd: ifnonnull f8
      // e0: goto e7
      // e3: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e6: athrow
      // e7: ifeq f7
      // ea: goto f1
      // ed: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // f0: athrow
      // f1: bipush 0
      // f2: ireturn
      // f3: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // f6: athrow
      // f7: bipush 1
      // f8: ireturn
   }

   public cu aMQ() {
      return this.ufdaw;
   }

   public class_238 aMH(class_1297 param1, class_238 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/fq.JcqZx J
      // 003: ldc2_w 104358365731082
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/fg.aIW ()[I
      // 00b: astore 5
      // 00d: aload 1
      // 00e: aload 5
      // 010: ifnonnull 028
      // 013: instanceof net/minecraft/class_1657
      // 016: ifeq 129
      // 019: goto 020
      // 01c: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: aload 1
      // 021: goto 028
      // 024: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 027: athrow
      // 028: checkcast net/minecraft/class_1657
      // 02b: astore 6
      // 02d: aload 0
      // 02e: getfield sixtwo/fq.fylmP Lsixtwo/cJ;
      // 031: invokevirtual sixtwo/cJ.WF ()Z
      // 034: aload 5
      // 036: ifnonnull 05b
      // 039: ifeq 129
      // 03c: goto 043
      // 03f: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 042: athrow
      // 043: aload 6
      // 045: aload 5
      // 047: ifnonnull 09c
      // 04a: goto 051
      // 04d: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 050: athrow
      // 051: invokevirtual net/minecraft/class_1657.method_6128 ()Z
      // 054: goto 05b
      // 057: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05a: athrow
      // 05b: ifne 094
      // 05e: aload 6
      // 060: aload 5
      // 062: ifnonnull 09c
      // 065: goto 06c
      // 068: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06b: athrow
      // 06c: invokevirtual net/minecraft/class_1657.method_20448 ()Z
      // 06f: ifne 094
      // 072: goto 079
      // 075: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 078: athrow
      // 079: aload 6
      // 07b: aload 5
      // 07d: ifnonnull 09c
      // 080: goto 087
      // 083: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 086: athrow
      // 087: invokevirtual net/minecraft/class_1657.method_20232 ()Z
      // 08a: ifeq 129
      // 08d: goto 094
      // 090: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 093: athrow
      // 094: aload 1
      // 095: goto 09c
      // 098: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09b: athrow
      // 09c: getstatic net/minecraft/class_4050.field_18076 Lnet/minecraft/class_4050;
      // 09f: invokevirtual net/minecraft/class_1297.method_18377 (Lnet/minecraft/class_4050;)Lnet/minecraft/class_4048;
      // 0a2: astore 7
      // 0a4: aload 7
      // 0a6: invokevirtual net/minecraft/class_4048.comp_2185 ()F
      // 0a9: aload 0
      // 0aa: getfield sixtwo/fq.vzqAe F
      // 0ad: fadd
      // 0ae: f2d
      // 0af: dstore 8
      // 0b1: aload 7
      // 0b3: invokevirtual net/minecraft/class_4048.comp_2186 ()F
      // 0b6: aload 0
      // 0b7: getfield sixtwo/fq.ZLJlY F
      // 0ba: fadd
      // 0bb: f2d
      // 0bc: dstore 10
      // 0be: aload 2
      // 0bf: getfield net/minecraft/class_238.field_1323 D
      // 0c2: aload 2
      // 0c3: getfield net/minecraft/class_238.field_1320 D
      // 0c6: dadd
      // 0c7: ldc2_w 2.0
      // 0ca: ddiv
      // 0cb: dstore 12
      // 0cd: aload 2
      // 0ce: getfield net/minecraft/class_238.field_1321 D
      // 0d1: aload 2
      // 0d2: getfield net/minecraft/class_238.field_1324 D
      // 0d5: dadd
      // 0d6: ldc2_w 2.0
      // 0d9: ddiv
      // 0da: dstore 14
      // 0dc: dload 12
      // 0de: dload 8
      // 0e0: ldc2_w 2.0
      // 0e3: ddiv
      // 0e4: dsub
      // 0e5: dstore 16
      // 0e7: dload 12
      // 0e9: dload 8
      // 0eb: ldc2_w 2.0
      // 0ee: ddiv
      // 0ef: dadd
      // 0f0: dstore 18
      // 0f2: dload 14
      // 0f4: dload 8
      // 0f6: ldc2_w 2.0
      // 0f9: ddiv
      // 0fa: dsub
      // 0fb: dstore 20
      // 0fd: dload 14
      // 0ff: dload 8
      // 101: ldc2_w 2.0
      // 104: ddiv
      // 105: dadd
      // 106: dstore 22
      // 108: aload 2
      // 109: getfield net/minecraft/class_238.field_1322 D
      // 10c: dstore 24
      // 10e: dload 24
      // 110: dload 10
      // 112: dadd
      // 113: dstore 26
      // 115: new net/minecraft/class_238
      // 118: dup
      // 119: dload 16
      // 11b: dload 24
      // 11d: dload 20
      // 11f: dload 18
      // 121: dload 26
      // 123: dload 22
      // 125: invokespecial net/minecraft/class_238.<init> (DDDDDD)V
      // 128: areturn
      // 129: new net/minecraft/class_238
      // 12c: dup
      // 12d: aload 2
      // 12e: getfield net/minecraft/class_238.field_1323 D
      // 131: aload 0
      // 132: getfield sixtwo/fq.vzqAe F
      // 135: fconst_2
      // 136: fdiv
      // 137: f2d
      // 138: dsub
      // 139: aload 2
      // 13a: getfield net/minecraft/class_238.field_1322 D
      // 13d: aload 0
      // 13e: getfield sixtwo/fq.ZLJlY F
      // 141: fconst_2
      // 142: fdiv
      // 143: f2d
      // 144: dsub
      // 145: aload 2
      // 146: getfield net/minecraft/class_238.field_1321 D
      // 149: aload 0
      // 14a: getfield sixtwo/fq.vzqAe F
      // 14d: fconst_2
      // 14e: fdiv
      // 14f: f2d
      // 150: dsub
      // 151: aload 2
      // 152: getfield net/minecraft/class_238.field_1320 D
      // 155: aload 0
      // 156: getfield sixtwo/fq.vzqAe F
      // 159: fconst_2
      // 15a: fdiv
      // 15b: f2d
      // 15c: dadd
      // 15d: aload 2
      // 15e: getfield net/minecraft/class_238.field_1325 D
      // 161: aload 0
      // 162: getfield sixtwo/fq.ZLJlY F
      // 165: fconst_2
      // 166: fdiv
      // 167: f2d
      // 168: dadd
      // 169: aload 2
      // 16a: getfield net/minecraft/class_238.field_1324 D
      // 16d: aload 0
      // 16e: getfield sixtwo/fq.vzqAe F
      // 171: fconst_2
      // 172: fdiv
      // 173: f2d
      // 174: dadd
      // 175: invokespecial net/minecraft/class_238.<init> (DDDDDD)V
      // 178: areturn
   }

   private class_243 aMK() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fq.JcqZx J
      // 03: ldc2_w 50285488346276
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 25
      // 11: invokevirtual sixtwo/fq.aML ()Z
      // 14: ifne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aconst_null
      // 1f: areturn
      // 20: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: aload 0
      // 26: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // 29: invokevirtual sixtwo/fq.aMO (Lnet/minecraft/class_1297;)Lnet/minecraft/class_243;
      // 2c: areturn
   }

   public ct aMP() {
      return this.meQED;
   }

   @hG
   public void aME(gv param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fq.JcqZx J
      // 03: ldc2_w 116712595645642
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 45
      // 13: invokevirtual sixtwo/fq.bab ()Z
      // 16: ifeq 3d
      // 19: goto 20
      // 1c: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: aload 4
      // 23: ifnonnull 4a
      // 26: goto 2d
      // 29: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getfield sixtwo/fq.zpLUV Lsixtwo/cu;
      // 30: invokevirtual sixtwo/cu.SZ ()Z
      // 33: ifne 49
      // 36: goto 3d
      // 39: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 0
      // 3e: goto 45
      // 41: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: invokevirtual sixtwo/fq.aMN ()V
      // 48: return
      // 49: aload 0
      // 4a: aload 4
      // 4c: ifnonnull 62
      // 4f: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // 52: ifnonnull 61
      // 55: goto 5c
      // 58: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: return
      // 5d: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: aload 0
      // 62: aload 4
      // 64: ifnonnull 7e
      // 67: invokevirtual sixtwo/fq.aML ()Z
      // 6a: ifne 7d
      // 6d: goto 74
      // 70: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 73: athrow
      // 74: aload 0
      // 75: invokevirtual sixtwo/fq.aMN ()V
      // 78: return
      // 79: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7c: athrow
      // 7d: aload 0
      // 7e: invokevirtual sixtwo/fq.aMK ()Lnet/minecraft/class_243;
      // 81: astore 5
      // 83: aload 4
      // 85: ifnonnull ac
      // 88: aload 5
      // 8a: ifnonnull 9d
      // 8d: goto 94
      // 90: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 93: athrow
      // 94: aload 0
      // 95: invokevirtual sixtwo/fq.aMN ()V
      // 98: return
      // 99: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9c: athrow
      // 9d: invokestatic sixtwo/rD.dlX ()Lsixtwo/qL;
      // a0: aload 5
      // a2: getstatic sixtwo/ou.kxNyl Lsixtwo/ou;
      // a5: getstatic sixtwo/mw.uWTdl Lsixtwo/mw;
      // a8: aload 0
      // a9: invokevirtual sixtwo/qL.dbI (Lnet/minecraft/class_243;Lsixtwo/ou;Lsixtwo/mw;Lsixtwo/gg;)V
      // ac: return
   }

   private class_3966 aMI() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/fq.JcqZx J
      // 003: ldc2_w 19690914317634
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/fg.aIW ()[I
      // 00b: invokestatic sixtwo/rD.dlX ()Lsixtwo/qL;
      // 00e: invokevirtual sixtwo/qL.dbC ()Lsixtwo/ov;
      // 011: astore 4
      // 013: astore 3
      // 014: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 017: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 01a: invokevirtual net/minecraft/class_746.method_55755 ()D
      // 01d: dstore 5
      // 01f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 022: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 025: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 028: astore 7
      // 02a: aload 4
      // 02c: invokevirtual sixtwo/ov.cGH ()Lnet/minecraft/class_243;
      // 02f: astore 8
      // 031: dload 5
      // 033: dload 5
      // 035: dmul
      // 036: dstore 9
      // 038: invokestatic sixtwo/ox.cGV ()Lsixtwo/ox;
      // 03b: aload 4
      // 03d: invokevirtual sixtwo/ox.cHd (Lsixtwo/ov;)Lsixtwo/ox;
      // 040: dload 5
      // 042: invokevirtual sixtwo/ox.cHe (D)Lsixtwo/ox;
      // 045: invokevirtual sixtwo/ox.cHp ()Lnet/minecraft/class_3965;
      // 048: astore 11
      // 04a: aload 11
      // 04c: invokevirtual net/minecraft/class_239.method_17783 ()Lnet/minecraft/class_239$class_240;
      // 04f: getstatic net/minecraft/class_239$class_240.field_1332 Lnet/minecraft/class_239$class_240;
      // 052: if_acmpne 066
      // 055: dload 9
      // 057: aload 7
      // 059: aload 11
      // 05b: invokevirtual net/minecraft/class_239.method_17784 ()Lnet/minecraft/class_243;
      // 05e: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 061: invokestatic java/lang/Math.min (DD)D
      // 064: dstore 9
      // 066: dload 9
      // 068: invokestatic java/lang/Math.sqrt (D)D
      // 06b: dstore 12
      // 06d: aload 7
      // 06f: aload 8
      // 071: dload 12
      // 073: invokevirtual net/minecraft/class_243.method_1021 (D)Lnet/minecraft/class_243;
      // 076: invokevirtual net/minecraft/class_243.method_1019 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 079: astore 14
      // 07b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 07e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 081: invokevirtual net/minecraft/class_746.method_5829 ()Lnet/minecraft/class_238;
      // 084: aload 8
      // 086: dload 5
      // 088: invokevirtual net/minecraft/class_243.method_1021 (D)Lnet/minecraft/class_243;
      // 08b: invokevirtual net/minecraft/class_238.method_18804 (Lnet/minecraft/class_243;)Lnet/minecraft/class_238;
      // 08e: dconst_1
      // 08f: aload 0
      // 090: getfield sixtwo/fq.vzqAe F
      // 093: f2d
      // 094: dadd
      // 095: dconst_1
      // 096: aload 0
      // 097: getfield sixtwo/fq.ZLJlY F
      // 09a: f2d
      // 09b: dadd
      // 09c: dconst_1
      // 09d: aload 0
      // 09e: getfield sixtwo/fq.vzqAe F
      // 0a1: f2d
      // 0a2: dadd
      // 0a3: invokevirtual net/minecraft/class_238.method_1009 (DDD)Lnet/minecraft/class_238;
      // 0a6: astore 15
      // 0a8: aconst_null
      // 0a9: astore 16
      // 0ab: aconst_null
      // 0ac: astore 17
      // 0ae: dload 9
      // 0b0: dstore 18
      // 0b2: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0b5: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 0b8: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0bb: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0be: aload 15
      // 0c0: aload 0
      // 0c1: invokedynamic test (Lsixtwo/fq;)Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/fq.aMM (Lnet/minecraft/class_1297;)Z, (Lnet/minecraft/class_1297;)Z ]
      // 0c6: invokevirtual net/minecraft/class_638.method_8333 (Lnet/minecraft/class_1297;Lnet/minecraft/class_238;Ljava/util/function/Predicate;)Ljava/util/List;
      // 0c9: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0ce: astore 20
      // 0d0: aload 20
      // 0d2: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0d7: ifeq 15b
      // 0da: aload 20
      // 0dc: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0e1: checkcast net/minecraft/class_1297
      // 0e4: astore 21
      // 0e6: aload 0
      // 0e7: aload 21
      // 0e9: aload 21
      // 0eb: invokevirtual net/minecraft/class_1297.method_5829 ()Lnet/minecraft/class_238;
      // 0ee: invokevirtual sixtwo/fq.aMH (Lnet/minecraft/class_1297;Lnet/minecraft/class_238;)Lnet/minecraft/class_238;
      // 0f1: aload 7
      // 0f3: aload 14
      // 0f5: invokevirtual net/minecraft/class_238.method_992 (Lnet/minecraft/class_243;Lnet/minecraft/class_243;)Ljava/util/Optional;
      // 0f8: astore 22
      // 0fa: aload 3
      // 0fb: ifnonnull 168
      // 0fe: aload 22
      // 100: invokevirtual java/util/Optional.isEmpty ()Z
      // 103: ifeq 118
      // 106: goto 10d
      // 109: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10c: athrow
      // 10d: aload 3
      // 10e: ifnull 0d0
      // 111: goto 118
      // 114: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 117: athrow
      // 118: aload 7
      // 11a: aload 22
      // 11c: invokevirtual java/util/Optional.get ()Ljava/lang/Object;
      // 11f: checkcast net/minecraft/class_243
      // 122: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 125: dstore 23
      // 127: dload 23
      // 129: aload 3
      // 12a: ifnonnull 155
      // 12d: dload 18
      // 12f: dcmpl
      // 130: iflt 145
      // 133: goto 13a
      // 136: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 139: athrow
      // 13a: aload 3
      // 13b: ifnull 0d0
      // 13e: goto 145
      // 141: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 144: athrow
      // 145: aload 21
      // 147: astore 16
      // 149: aload 22
      // 14b: invokevirtual java/util/Optional.get ()Ljava/lang/Object;
      // 14e: checkcast net/minecraft/class_243
      // 151: astore 17
      // 153: dload 23
      // 155: dstore 18
      // 157: aload 3
      // 158: ifnull 0d0
      // 15b: aload 16
      // 15d: ifnonnull 168
      // 160: aconst_null
      // 161: goto 173
      // 164: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 167: athrow
      // 168: new net/minecraft/class_3966
      // 16b: dup
      // 16c: aload 16
      // 16e: aload 17
      // 170: invokespecial net/minecraft/class_3966.<init> (Lnet/minecraft/class_1297;Lnet/minecraft/class_243;)V
      // 173: areturn
   }

   @hG
   public void aMF(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fq.JcqZx J
      // 03: ldc2_w 118738620172317
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 45
      // 13: invokevirtual sixtwo/fq.bab ()Z
      // 16: ifeq 3d
      // 19: goto 20
      // 1c: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: aload 4
      // 23: ifnonnull 4a
      // 26: goto 2d
      // 29: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getfield sixtwo/fq.zpLUV Lsixtwo/cu;
      // 30: invokevirtual sixtwo/cu.SZ ()Z
      // 33: ifne 49
      // 36: goto 3d
      // 39: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 0
      // 3e: goto 45
      // 41: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: invokevirtual sixtwo/fq.aMN ()V
      // 48: return
      // 49: aload 0
      // 4a: aload 4
      // 4c: ifnonnull 62
      // 4f: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // 52: ifnonnull 61
      // 55: goto 5c
      // 58: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: return
      // 5d: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: aload 0
      // 62: aload 4
      // 64: ifnonnull 7e
      // 67: invokevirtual sixtwo/fq.aML ()Z
      // 6a: ifne 7d
      // 6d: goto 74
      // 70: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 73: athrow
      // 74: aload 0
      // 75: invokevirtual sixtwo/fq.aMN ()V
      // 78: return
      // 79: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7c: athrow
      // 7d: aload 0
      // 7e: invokevirtual sixtwo/fq.aMK ()Lnet/minecraft/class_243;
      // 81: astore 5
      // 83: aload 5
      // 85: aload 4
      // 87: ifnonnull 9f
      // 8a: ifnonnull 9d
      // 8d: goto 94
      // 90: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 93: athrow
      // 94: aload 0
      // 95: invokevirtual sixtwo/fq.aMN ()V
      // 98: return
      // 99: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9c: athrow
      // 9d: aload 5
      // 9f: invokestatic sixtwo/ov.cGy (Lnet/minecraft/class_243;)Lsixtwo/ov;
      // a2: astore 6
      // a4: aload 0
      // a5: aload 4
      // a7: ifnonnull fa
      // aa: aload 0
      // ab: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // ae: aload 6
      // b0: invokevirtual sixtwo/fq.aMJ (Lnet/minecraft/class_1297;Lsixtwo/ov;)Lnet/minecraft/class_3966;
      // b3: ifnonnull ee
      // b6: goto bd
      // b9: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bc: athrow
      // bd: aload 0
      // be: aload 4
      // c0: ifnonnull ea
      // c3: goto ca
      // c6: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c9: athrow
      // ca: getfield sixtwo/fq.obThK Lsixtwo/mT;
      // cd: aload 0
      // ce: getfield sixtwo/fq.xkXFw Lsixtwo/cC;
      // d1: invokevirtual sixtwo/cC.VC ()I
      // d4: i2l
      // d5: invokevirtual sixtwo/mT.cpC (J)Z
      // d8: ifeq ed
      // db: goto e2
      // de: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e1: athrow
      // e2: aload 0
      // e3: goto ea
      // e6: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e9: athrow
      // ea: invokevirtual sixtwo/fq.aMN ()V
      // ed: return
      // ee: invokestatic sixtwo/rD.dlW ()Lsixtwo/qP;
      // f1: aload 0
      // f2: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // f5: invokevirtual sixtwo/qP.ddn (Lnet/minecraft/class_1297;)Z
      // f8: pop
      // f9: aload 0
      // fa: invokevirtual sixtwo/fq.aMN ()V
      // fd: return
   }

   public cu aMR() {
      return this.zpLUV;
   }

   private boolean aMM(class_1297 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fq.JcqZx J
      // 03: ldc2_w 80863328643110
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 4
      // 0d: aload 1
      // 0e: invokevirtual net/minecraft/class_1297.method_5863 ()Z
      // 11: aload 4
      // 13: ifnonnull 2b
      // 16: ifeq 59
      // 19: goto 20
      // 1c: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: invokevirtual net/minecraft/class_1297.method_7325 ()Z
      // 24: goto 2b
      // 27: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 4
      // 2d: ifnonnull 46
      // 30: ifne 59
      // 33: goto 3a
      // 36: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 0
      // 3b: aload 1
      // 3c: invokevirtual sixtwo/fq.aMG (Lnet/minecraft/class_1297;)Z
      // 3f: goto 46
      // 42: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 4
      // 48: ifnonnull 56
      // 4b: ifeq 59
      // 4e: goto 55
      // 51: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: bipush 1
      // 56: goto 5a
      // 59: bipush 0
      // 5a: ireturn
   }

   public cC aMS() {
      return this.zGQMR;
   }

   public cC aMT() {
      return this.TrhFC;
   }

   private boolean aML() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fq.JcqZx J
      // 03: ldc2_w 18968556973061
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // 10: aload 3
      // 11: ifnonnull 29
      // 14: ifnull 73
      // 17: goto 1e
      // 1a: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // 22: goto 29
      // 25: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: invokevirtual net/minecraft/class_1297.method_31481 ()Z
      // 2c: aload 3
      // 2d: ifnonnull 7b
      // 30: ifne 73
      // 33: goto 3a
      // 36: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 0
      // 3b: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // 3e: invokevirtual net/minecraft/class_1297.method_5863 ()Z
      // 41: aload 3
      // 42: ifnonnull 7b
      // 45: goto 4c
      // 48: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: ifeq 73
      // 4f: goto 56
      // 52: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: aload 0
      // 57: aload 3
      // 58: ifnonnull 7d
      // 5b: goto 62
      // 5e: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 0
      // 63: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // 66: invokevirtual sixtwo/fq.aMG (Lnet/minecraft/class_1297;)Z
      // 69: ifne 7c
      // 6c: goto 73
      // 6f: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: bipush 0
      // 74: goto 7b
      // 77: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7a: athrow
      // 7b: ireturn
      // 7c: aload 0
      // 7d: getfield sixtwo/fq.NZTfz Lnet/minecraft/class_1297;
      // 80: astore 5
      // 82: aload 5
      // 84: instanceof net/minecraft/class_1309
      // 87: aload 3
      // 88: ifnonnull b0
      // 8b: ifeq af
      // 8e: goto 95
      // 91: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 94: athrow
      // 95: aload 5
      // 97: checkcast net/minecraft/class_1309
      // 9a: astore 4
      // 9c: aload 4
      // 9e: invokevirtual net/minecraft/class_1309.method_29504 ()Z
      // a1: aload 3
      // a2: ifnonnull b0
      // a5: ifne b3
      // a8: goto af
      // ab: invokestatic sixtwo/fq.aNj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ae: athrow
      // af: bipush 1
      // b0: goto b4
      // b3: bipush 0
      // b4: ireturn
   }

   private static CallSite aNn(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aNm".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/fq" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException aNj(MatchException var0) {
      return var0;
   }

   private class_3966 aMJ(class_1297 var1, ov var2) {
      return ox.cGV().cHd(var2).cHe(rD.dlmvG.field_1724.method_55755()).cHj(var1x -> {
         long var2x = JcqZx ^ 117752068730885L;

         try {
            if (var1x == var1) {
               return true;
            }
         } catch (MatchException var4) {
            throw aNj(var4);
         }

         return false;
      }).cHn();
   }

   @Override
   public void YO() {
      super.YO();
      this.aMN();
   }
}
