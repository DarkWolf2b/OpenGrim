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
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_640;
import net.minecraft.class_742;

public class dp extends gg implements lA, lG {
   private final cC klXSH;
   private final cJ WYPZN;
   private final ct VLWfc;
   private final cu SNclR;
   private final cu wjLCc;
   private final cG EscPj;
   private final cC ClxmS;
   private final cJ kUvkk;
   private final cD yDgej;
   private final List<class_742> FlxVs;
   private final List<class_742> mBTku;
   private final List<class_640> KrDsH;
   private final Map<UUID, kt> JTVMZ;
   private final mT YUykz;
   private static final long kiuBc = gb.aYR(2804131931845047427L, 8476271410885623961L, MethodHandles.lookup().lookupClass()).a(90035956049030L);
   private static final String[] cAXko;
   private static final String[] JGXnk;
   private static final Map GLQcs = new HashMap(13);
   private static final long[] RBCIZ;
   private static final Integer[] rpAoJ;
   private static final Map ZMhFd;

   public dp() {
      long var1 = kiuBc ^ 48347793081908L;
      super(gf.aZL(ahM<"c">(7848, 7886903879026959614L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[ahM<"c">(16223, 4023703272746009900L ^ var1)];
      var10004[0] = ahM<"c">(6618, 3771539704808104845L ^ var1);
      var10004[1] = ahM<"c">(26608, 4660192845436296584L ^ var1);
      var10004[2] = ahM<"c">(403, 6264469873559698375L ^ var1);
      var10004[3] = ahM<"c">(18149, 3370968968877161627L ^ var1);
      var10004[4] = ahM<"c">(944, 2159492620949944747L ^ var1);
      var10004[5] = ahM<"c">(1203, 4654012084798815939L ^ var1);
      var10004[ahM<"c">(3785, 4381597836733150390L ^ var1)] = ahM<"c">(8093, 5487958667494745574L ^ var1);
      var10004[ahM<"c">(25964, 4382253889703911282L ^ var1)] = ahM<"c">(19243, 1845308339694481754L ^ var1);
      var10004[ahM<"c">(6959, 5629238358820479323L ^ var1)] = ahM<"c">(25409, 4492155226423335262L ^ var1);
      var10004[ahM<"c">(20322, 5324160897299789072L ^ var1)] = ahM<"c">(15225, 1986681757075816719L ^ var1);
      var10004[ahM<"c">(6019, 6612407823931174285L ^ var1)] = ahM<"c">(3076, 7670308077218461203L ^ var1);
      var10004[ahM<"c">(9364, 5288917670126378693L ^ var1)] = ahM<"c">(944, 2159492620949944747L ^ var1);
      var10004[ahM<"c">(13781, 1400269418560901065L ^ var1)] = ahM<"c">(5810, 7719897409560833258L ^ var1);
      this.klXSH = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(100.0).VA(5.0).Vz(ahJ<"u">(17174, 2695150894858997210L ^ var1));
      var10004 = new int[ahM<"c">(25074, 8573546666472020911L ^ var1)];
      var10004[0] = ahM<"c">(24177, 7172545490021229592L ^ var1);
      var10004[1] = ahM<"c">(18401, 100100644388978093L ^ var1);
      var10004[2] = ahM<"c">(26698, 7636048148108087810L ^ var1);
      var10004[3] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[4] = ahM<"c">(16619, 3129362706962004710L ^ var1);
      var10004[5] = ahM<"c">(7074, 3328433363988603360L ^ var1);
      var10004[ahM<"c">(23285, 7780073972800266495L ^ var1)] = ahM<"c">(10429, 2323288334097568448L ^ var1);
      var10004[ahM<"c">(30404, 237536705531907289L ^ var1)] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[ahM<"c">(19582, 5751717408287241789L ^ var1)] = ahM<"c">(16385, 5794579917678492243L ^ var1);
      var10004[ahM<"c">(15968, 2200365336716657664L ^ var1)] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[ahM<"c">(26193, 77157063936711697L ^ var1)] = ahM<"c">(5953, 770820173707046171L ^ var1);
      var10004[ahM<"c">(32267, 6654635373636060240L ^ var1)] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[ahM<"c">(27339, 5636386812626276501L ^ var1)] = ahM<"c">(10633, 2564225499025232836L ^ var1);
      var10004[ahM<"c">(30940, 3682863999867519670L ^ var1)] = ahM<"c">(14215, 246672638971530688L ^ var1);
      var10004[ahM<"c">(18509, 651952171759055372L ^ var1)] = ahM<"c">(598, 4627525994099275842L ^ var1);
      var10004[ahM<"c">(17520, 6313113692442443316L ^ var1)] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[ahM<"c">(7191, 3600846267603281524L ^ var1)] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[ahM<"c">(17001, 5586445938647939086L ^ var1)] = ahM<"c">(8865, 9152062163689167089L ^ var1);
      this.WYPZN = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[ahM<"c">(5950, 274237075457142128L ^ var1)];
      var10004[0] = ahM<"c">(18701, 101364277804544834L ^ var1);
      var10004[1] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[2] = ahM<"c">(15729, 3244503692188501764L ^ var1);
      var10004[3] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[4] = ahM<"c">(598, 4627525994099275842L ^ var1);
      var10004[5] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[ahM<"c">(23285, 7780073972800266495L ^ var1)] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[ahM<"c">(30404, 237536705531907289L ^ var1)] = ahM<"c">(8865, 9152062163689167089L ^ var1);
      var10004[ahM<"c">(19582, 5751717408287241789L ^ var1)] = ahM<"c">(7074, 3328433363988603360L ^ var1);
      var10004[ahM<"c">(15968, 2200365336716657664L ^ var1)] = ahM<"c">(9829, 3271941717541411958L ^ var1);
      var10004[ahM<"c">(26193, 77157063936711697L ^ var1)] = ahM<"c">(944, 2159492620949944747L ^ var1);
      var10004[ahM<"c">(32267, 6654635373636060240L ^ var1)] = ahM<"c">(8865, 9152062163689167089L ^ var1);
      var10004[ahM<"c">(27339, 5636386812626276501L ^ var1)] = ahM<"c">(390, 8431981714926205928L ^ var1);
      var10004[ahM<"c">(30940, 3682863999867519670L ^ var1)] = ahM<"c">(944, 2159492620949944747L ^ var1);
      var10004[ahM<"c">(23853, 8005341200257296198L ^ var1)] = ahM<"c">(5810, 7719897409560833258L ^ var1);
      var10004[ahM<"c">(6718, 513518862534991922L ^ var1)] = ahM<"c">(7074, 3328433363988603360L ^ var1);
      var10004[ahM<"c">(10424, 7565713520775811796L ^ var1)] = ahM<"c">(30517, 2894653508148727145L ^ var1);
      var10004[ahM<"c">(5141, 4273422513634438720L ^ var1)] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[ahM<"c">(21541, 2371626299850698288L ^ var1)] = ahM<"c">(32185, 7044121941613545435L ^ var1);
      var10004[ahM<"c">(16049, 5390282911966676206L ^ var1)] = ahM<"c">(944, 2159492620949944747L ^ var1);
      this.VLWfc = new ct(this, mr.clS(var10004));
      ct var10003 = this.VLWfc;
      var10004 = new int[ahM<"c">(23285, 7780073972800266495L ^ var1)];
      var10004[0] = ahM<"c">(17737, 6257077566046420824L ^ var1);
      var10004[1] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[2] = ahM<"c">(25490, 1220301229461182939L ^ var1);
      var10004[3] = ahM<"c">(11590, 1508653253622912807L ^ var1);
      var10004[4] = ahM<"c">(6807, 4483642271338979548L ^ var1);
      var10004[5] = ahM<"c">(944, 2159492620949944747L ^ var1);
      this.SNclR = new cu(var10003, mr.clS(var10004));
      var10003 = this.VLWfc;
      var10004 = new int[ahM<"c">(19582, 5751717408287241789L ^ var1)];
      var10004[0] = ahM<"c">(31845, 5964891070441490026L ^ var1);
      var10004[1] = ahM<"c">(944, 2159492620949944747L ^ var1);
      var10004[2] = ahM<"c">(2822, 6632228721918570859L ^ var1);
      var10004[3] = ahM<"c">(598, 4627525994099275842L ^ var1);
      var10004[4] = ahM<"c">(27656, 8337138456190457435L ^ var1);
      var10004[5] = ahM<"c">(5810, 7719897409560833258L ^ var1);
      var10004[ahM<"c">(23285, 7780073972800266495L ^ var1)] = ahM<"c">(944, 2159492620949944747L ^ var1);
      var10004[ahM<"c">(30404, 237536705531907289L ^ var1)] = ahM<"c">(32185, 7044121941613545435L ^ var1);
      this.wjLCc = new cu(var10003, mr.clS(var10004));
      var10004 = new int[ahM<"c">(23853, 8005341200257296198L ^ var1)];
      var10004[0] = ahM<"c">(9164, 1756533059463502243L ^ var1);
      var10004[1] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[2] = ahM<"c">(15729, 3244503692188501764L ^ var1);
      var10004[3] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[4] = ahM<"c">(598, 4627525994099275842L ^ var1);
      var10004[5] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[ahM<"c">(23285, 7780073972800266495L ^ var1)] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[ahM<"c">(30404, 237536705531907289L ^ var1)] = ahM<"c">(8865, 9152062163689167089L ^ var1);
      var10004[ahM<"c">(19582, 5751717408287241789L ^ var1)] = ahM<"c">(7074, 3328433363988603360L ^ var1);
      var10004[ahM<"c">(15968, 2200365336716657664L ^ var1)] = ahM<"c">(25878, 8305769733952937740L ^ var1);
      var10004[ahM<"c">(26193, 77157063936711697L ^ var1)] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[ahM<"c">(32267, 6654635373636060240L ^ var1)] = ahM<"c">(8906, 2701721689019144367L ^ var1);
      var10004[ahM<"c">(27339, 5636386812626276501L ^ var1)] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[ahM<"c">(30940, 3682863999867519670L ^ var1)] = ahM<"c">(5810, 7719897409560833258L ^ var1);
      this.EscPj = new cG(this, mr.clS(var10004)).Uf(mG.hoGuU).Uh(false);
      var10004 = new int[ahM<"c">(23285, 7780073972800266495L ^ var1)];
      var10004[0] = ahM<"c">(28227, 4908312973695194202L ^ var1);
      var10004[1] = ahM<"c">(944, 2159492620949944747L ^ var1);
      var10004[2] = ahM<"c">(12928, 8422607519110285509L ^ var1);
      var10004[3] = ahM<"c">(32032, 5403412624879716168L ^ var1);
      var10004[4] = ahM<"c">(29677, 5554718965075118481L ^ var1);
      var10004[5] = ahM<"c">(598, 4627525994099275842L ^ var1);
      this.ClxmS = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(0.1).Vx(3.0).VA(2.8).Vz(ahJ<"u">(30958, 7463454564161861155L ^ var1));
      var10004 = new int[ahM<"c">(26193, 77157063936711697L ^ var1)];
      var10004[0] = ahM<"c">(19001, 6548893938155139136L ^ var1);
      var10004[1] = ahM<"c">(29100, 6721618551588785084L ^ var1);
      var10004[2] = ahM<"c">(10633, 2564225499025232836L ^ var1);
      var10004[3] = ahM<"c">(23194, 3345334608373588098L ^ var1);
      var10004[4] = ahM<"c">(32032, 5403412624879716168L ^ var1);
      var10004[5] = ahM<"c">(5810, 7719897409560833258L ^ var1);
      var10004[ahM<"c">(23285, 7780073972800266495L ^ var1)] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[ahM<"c">(30404, 237536705531907289L ^ var1)] = ahM<"c">(10669, 4337008677751542715L ^ var1);
      var10004[ahM<"c">(19582, 5751717408287241789L ^ var1)] = ahM<"c">(8865, 9152062163689167089L ^ var1);
      var10004[ahM<"c">(15968, 2200365336716657664L ^ var1)] = ahM<"c">(32185, 7044121941613545435L ^ var1);
      this.kUvkk = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[ahM<"c">(32267, 6654635373636060240L ^ var1)];
      var10004[0] = ahM<"c">(25285, 2908083470182586511L ^ var1);
      var10004[1] = ahM<"c">(8906, 2701721689019144367L ^ var1);
      var10004[2] = ahM<"c">(944, 2159492620949944747L ^ var1);
      var10004[3] = ahM<"c">(29100, 6721618551588785084L ^ var1);
      var10004[4] = ahM<"c">(5810, 7719897409560833258L ^ var1);
      var10004[5] = ahM<"c">(7074, 3328433363988603360L ^ var1);
      var10004[ahM<"c">(23285, 7780073972800266495L ^ var1)] = ahM<"c">(5818, 8701497428596124894L ^ var1);
      var10004[ahM<"c">(30404, 237536705531907289L ^ var1)] = ahM<"c">(21978, 520474165903306669L ^ var1);
      var10004[ahM<"c">(19582, 5751717408287241789L ^ var1)] = ahM<"c">(19412, 7192531428511199634L ^ var1);
      var10004[ahM<"c">(15968, 2200365336716657664L ^ var1)] = ahM<"c">(598, 4627525994099275842L ^ var1);
      var10004[ahM<"c">(26193, 77157063936711697L ^ var1)] = ahM<"c">(15729, 3244503692188501764L ^ var1);
      this.yDgej = new cD(this, mr.clS(var10004)).VO(ahM<"c">(28401, 4593139404556080296L ^ var1));
      this.FlxVs = new ArrayList<>();
      this.mBTku = new ArrayList<>();
      this.KrDsH = new ArrayList<>();
      this.JTVMZ = new HashMap<>();
      this.YUykz = mT.cpz();
   }

   static {
      long var11 = kiuBc ^ 34042933517339L;
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
      String var17 = "°+\u001aþ^h9G]\u0081ÂYæÍ\u0016t\u0010urrÞ\u000fF\u0003z±\u000bÔ\u0016\u0003\u0019\u008dF";
      int var19 = "°+\u001aþ^h9G]\u0081ÂYæÍ\u0016t\u0010urrÞ\u000fF\u0003z±\u000bÔ\u0016\u0003\u0019\u008dF".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = ahG(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            cAXko = var20;
            JGXnk = new String[2];
            ZMhFd = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[85];
            int var3 = 0;
            String var4 = "\u0080TÛFõ\u0090·ølM\u0000\u0019d\u009dçÞ;\\\u0094ú!Ó$mÈK\u0007?\u0012\u007fU¹´\u0013ä\u0095\u000b\u0090R'@Ï\u0017)h\u009aCSº>¹4\u0014\b\u0090\u0007nfu\u0085DqlÙJ\u0096õ3¯æ\u0093\u0002¶el\u0013N[\u0092éÄ\u000e\nÖ¼¦zMË¬\u0004ã\u009eRËõëegÇ^\u0014\u0018¼eçBy\u0004;\u0016\u001fª\u0096O\u008b½¬\u0001jâ¨ä²OS\u0015¸\u0091ªÅ¦Ó>\u009d´L\u0088[é±¯ºo[Ï\u0002y\u007f$Ú^ö\u008e¯wÀ6qïþ\u0098\u0011%\u0094§\u009d·I\\\u0005\u0097Q\u0091K,\u0097¢r»K\u0085\u0019\\ìÞßÄ\u0083Â\u0095äLÏì4\u0083mgµ\"3\u0001½u@\u0090¡ \u009f¾¥ÎÛé\u0090\u009béäñVn\u001edï}/f`\u001c\u009d\u001d\u009a1ºùåõ6ª¡\u001cWi\u001br.øÜ8O«¨xxÏ¸ Q] \u008f\u009d\u0010\u0080\u009c\u0000×\u007f\u0014¸8\u000eã%éIbfðr_Nø]Ô\tDé\u0085æú³\u0087ÃÁIõEO?\u00138\u001by\u0004¦« o\u0007VäK\u008e\u0006\u0006\u009cÐ\u008f\u008e(\u0014»åW¸³DVëK]TU§ÿ[ÔÁz\u009e\u0091\u009bdì¹«\u009f#\u008a ùÑç<Àv\u0085:Ð{pd\u0002ït§\u0086Å´®%þø¶\u001aýÏÎ\u001c~\u0093\u009c\tl\u001bfñØ:m'\u0007ö\u001dþ\u001cåNpçí\u0015à#£\u0083f\u0014\u009a;\"Ð?W¡ /\u0083xíïÖÒ*\u0019Ý\u000e\tã¬ àéQý±à\u0005RP\u009f\u009b\u001bÆU\u00125\u0096ó \u0015¨Ð\u0001\u0015\u0013\u009fÂ\f@\u001cÏæ+Ú2;\u0083\u0088@<Kç{\u007fJLâb$å\bw\u0011¡\u0093ÃÌëk6Ó\u001d?\rGqÌ\u0091ð´\bðe\u0012Ð{\u0083Ä)v\u0001ÌÝvO\u000b¿ÎèX0T\u0015Tßª\u0089\f\u001f\r\u0097Öçú2íâ08Y¨\u0083\u001c>\b\"D\u0000\"\u0086U\" @è\u0004\u0005ñ\u0014F(É\u000eçÌ<Î\u0092Ñ\u0096º>¾°Jú/íO\u0002íI®n\u001e-\u0017Æm \u008cXG½\u008c,[\u000fö{R3£8þÁÙ`Í\tÚ\u0099ÈÓL\u0087ÕX7Ã®ñ\u000bþ¼\u0092\u008aù¦\\\u0084\u008bØ\u0016«×,\u0091\u007fT+ÆçÄ¼\u0098\u0002\u0081\u001bü\u001eìù¹\u008ankà\u008ctõ";
            int var5 = "\u0080TÛFõ\u0090·ølM\u0000\u0019d\u009dçÞ;\\\u0094ú!Ó$mÈK\u0007?\u0012\u007fU¹´\u0013ä\u0095\u000b\u0090R'@Ï\u0017)h\u009aCSº>¹4\u0014\b\u0090\u0007nfu\u0085DqlÙJ\u0096õ3¯æ\u0093\u0002¶el\u0013N[\u0092éÄ\u000e\nÖ¼¦zMË¬\u0004ã\u009eRËõëegÇ^\u0014\u0018¼eçBy\u0004;\u0016\u001fª\u0096O\u008b½¬\u0001jâ¨ä²OS\u0015¸\u0091ªÅ¦Ó>\u009d´L\u0088[é±¯ºo[Ï\u0002y\u007f$Ú^ö\u008e¯wÀ6qïþ\u0098\u0011%\u0094§\u009d·I\\\u0005\u0097Q\u0091K,\u0097¢r»K\u0085\u0019\\ìÞßÄ\u0083Â\u0095äLÏì4\u0083mgµ\"3\u0001½u@\u0090¡ \u009f¾¥ÎÛé\u0090\u009béäñVn\u001edï}/f`\u001c\u009d\u001d\u009a1ºùåõ6ª¡\u001cWi\u001br.øÜ8O«¨xxÏ¸ Q] \u008f\u009d\u0010\u0080\u009c\u0000×\u007f\u0014¸8\u000eã%éIbfðr_Nø]Ô\tDé\u0085æú³\u0087ÃÁIõEO?\u00138\u001by\u0004¦« o\u0007VäK\u008e\u0006\u0006\u009cÐ\u008f\u008e(\u0014»åW¸³DVëK]TU§ÿ[ÔÁz\u009e\u0091\u009bdì¹«\u009f#\u008a ùÑç<Àv\u0085:Ð{pd\u0002ït§\u0086Å´®%þø¶\u001aýÏÎ\u001c~\u0093\u009c\tl\u001bfñØ:m'\u0007ö\u001dþ\u001cåNpçí\u0015à#£\u0083f\u0014\u009a;\"Ð?W¡ /\u0083xíïÖÒ*\u0019Ý\u000e\tã¬ àéQý±à\u0005RP\u009f\u009b\u001bÆU\u00125\u0096ó \u0015¨Ð\u0001\u0015\u0013\u009fÂ\f@\u001cÏæ+Ú2;\u0083\u0088@<Kç{\u007fJLâb$å\bw\u0011¡\u0093ÃÌëk6Ó\u001d?\rGqÌ\u0091ð´\bðe\u0012Ð{\u0083Ä)v\u0001ÌÝvO\u000b¿ÎèX0T\u0015Tßª\u0089\f\u001f\r\u0097Öçú2íâ08Y¨\u0083\u001c>\b\"D\u0000\"\u0086U\" @è\u0004\u0005ñ\u0014F(É\u000eçÌ<Î\u0092Ñ\u0096º>¾°Jú/íO\u0002íI®n\u001e-\u0017Æm \u008cXG½\u008c,[\u000fö{R3£8þÁÙ`Í\tÚ\u0099ÈÓL\u0087ÕX7Ã®ñ\u000bþ¼\u0092\u008aù¦\\\u0084\u008bØ\u0016«×,\u0091\u007fT+ÆçÄ¼\u0098\u0002\u0081\u001bü\u001eìù¹\u008ankà\u008ctõ"
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
                           RBCIZ = var6;
                           rpAoJ = new Integer[85];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "\u0099\u0083ßY\u00818Í*¶5{\u0083{\u001aww";
                        var5 = "\u0099\u0083ßY\u00818Í*¶5{\u0083{\u001aww".length();
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
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dp.kiuBc J
      // 03: ldc2_w 114168089039857
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: invokespecial sixtwo/gg.aaj ()V
      // 0f: astore 3
      // 10: aload 0
      // 11: invokevirtual sixtwo/dp.ahx ()V
      // 14: aload 3
      // 15: ifnonnull 54
      // 18: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1b: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 1e: ifnull 42
      // 21: goto 28
      // 24: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 0
      // 29: getfield sixtwo/dp.KrDsH Ljava/util/List;
      // 2c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2f: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 32: invokevirtual net/minecraft/class_634.method_2880 ()Ljava/util/Collection;
      // 35: invokeinterface java/util/List.addAll (Ljava/util/Collection;)Z 2
      // 3a: pop
      // 3b: goto 42
      // 3e: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 0
      // 43: getfield sixtwo/dp.FlxVs Ljava/util/List;
      // 46: invokeinterface java/util/List.clear ()V 1
      // 4b: aload 0
      // 4c: getfield sixtwo/dp.JTVMZ Ljava/util/Map;
      // 4f: invokeinterface java/util/Map.clear ()V 1
      // 54: return
   }

   private static CallSite ahJ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ahI".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dp" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void ahx() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dp.kiuBc J
      // 03: ldc2_w 54436546351307
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 24
      // 11: invokevirtual sixtwo/dp.bab ()Z
      // 14: ifne 23
      // 17: goto 1e
      // 1a: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: return
      // 1f: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: getfield sixtwo/dp.mBTku Ljava/util/List;
      // 27: invokeinterface java/util/List.clear ()V 1
      // 2c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2f: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 32: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 35: astore 4
      // 37: aload 4
      // 39: invokeinterface java/lang/Iterable.spliterator ()Ljava/util/Spliterator; 1
      // 3e: bipush 0
      // 3f: invokestatic java/util/stream/StreamSupport.stream (Ljava/util/Spliterator;Z)Ljava/util/stream/Stream;
      // 42: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/dp.ahz (Lnet/minecraft/class_1297;)Z, (Lnet/minecraft/class_1297;)Z ]
      // 47: invokeinterface java/util/stream/Stream.filter (Ljava/util/function/Predicate;)Ljava/util/stream/Stream; 2
      // 4c: invokedynamic apply ()Ljava/util/function/Function; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/dp.ahy (Lnet/minecraft/class_1297;)Lnet/minecraft/class_742;, (Lnet/minecraft/class_1297;)Lnet/minecraft/class_742; ]
      // 51: invokeinterface java/util/stream/Stream.map (Ljava/util/function/Function;)Ljava/util/stream/Stream; 2
      // 56: aload 0
      // 57: getfield sixtwo/dp.mBTku Ljava/util/List;
      // 5a: dup
      // 5b: invokestatic java/util/Objects.requireNonNull (Ljava/lang/Object;)Ljava/lang/Object;
      // 5e: pop
      // 5f: invokedynamic accept (Ljava/util/List;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, java/util/List.add (Ljava/lang/Object;)Z, (Lnet/minecraft/class_742;)V ]
      // 64: invokeinterface java/util/stream/Stream.forEach (Ljava/util/function/Consumer;)V 2
      // 69: return
   }

   @hG
   public void ahs(hu param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dp.kiuBc J
      // 003: ldc2_w 107865113849719
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: getfield sixtwo/dp.FlxVs Ljava/util/List;
      // 011: invokeinterface java/util/List.isEmpty ()Z 1
      // 016: ifeq 01e
      // 019: return
      // 01a: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: aload 1
      // 01f: invokevirtual sixtwo/hu.bdj ()Lnet/minecraft/class_1297;
      // 022: astore 6
      // 024: aload 6
      // 026: aload 4
      // 028: ifnonnull 041
      // 02b: instanceof net/minecraft/class_742
      // 02e: ifeq 24c
      // 031: goto 038
      // 034: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 037: athrow
      // 038: aload 6
      // 03a: goto 041
      // 03d: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 040: athrow
      // 041: checkcast net/minecraft/class_742
      // 044: astore 5
      // 046: invokestatic sixtwo/rD.dml ()Lsixtwo/fo;
      // 049: aload 5
      // 04b: invokevirtual sixtwo/fo.aLp (Lnet/minecraft/class_1657;)Z
      // 04e: aload 4
      // 050: ifnonnull 069
      // 053: ifeq 05e
      // 056: goto 05d
      // 059: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05c: athrow
      // 05d: return
      // 05e: aload 0
      // 05f: getfield sixtwo/dp.FlxVs Ljava/util/List;
      // 062: aload 5
      // 064: invokeinterface java/util/List.contains (Ljava/lang/Object;)Z 2
      // 069: aload 4
      // 06b: ifnonnull 0a1
      // 06e: ifeq 24c
      // 071: goto 078
      // 074: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 077: athrow
      // 078: aload 0
      // 079: getfield sixtwo/dp.FlxVs Ljava/util/List;
      // 07c: aload 5
      // 07e: invokeinterface java/util/List.remove (Ljava/lang/Object;)Z 2
      // 083: pop
      // 084: aload 0
      // 085: getfield sixtwo/dp.JTVMZ Ljava/util/Map;
      // 088: aload 5
      // 08a: invokevirtual net/minecraft/class_742.method_5667 ()Ljava/util/UUID;
      // 08d: invokeinterface java/util/Map.remove (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 092: pop
      // 093: aload 0
      // 094: getfield sixtwo/dp.WYPZN Lsixtwo/cJ;
      // 097: invokevirtual sixtwo/cJ.WF ()Z
      // 09a: goto 0a1
      // 09d: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a0: athrow
      // 0a1: ifeq 24c
      // 0a4: aload 5
      // 0a6: invokevirtual net/minecraft/class_742.method_7334 ()Lcom/mojang/authlib/GameProfile;
      // 0a9: invokevirtual com/mojang/authlib/GameProfile.name ()Ljava/lang/String;
      // 0ac: astore 6
      // 0ae: bipush 3
      // 0af: anewarray 493
      // 0b2: dup
      // 0b3: bipush 0
      // 0b4: sipush 30404
      // 0b7: ldc2_w 237476380908692890
      // 0ba: lload 2
      // 0bb: lxor
      // 0bc: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0c1: newarray 10
      // 0c3: dup
      // 0c4: bipush 0
      // 0c5: sipush 9164
      // 0c8: ldc2_w 1756470238784680160
      // 0cb: lload 2
      // 0cc: lxor
      // 0cd: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d2: iastore
      // 0d3: dup
      // 0d4: bipush 1
      // 0d5: sipush 8906
      // 0d8: ldc2_w 2701658868466282988
      // 0db: lload 2
      // 0dc: lxor
      // 0dd: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e2: iastore
      // 0e3: dup
      // 0e4: bipush 2
      // 0e5: sipush 29100
      // 0e8: ldc2_w 6721540630492947199
      // 0eb: lload 2
      // 0ec: lxor
      // 0ed: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f2: iastore
      // 0f3: dup
      // 0f4: bipush 3
      // 0f5: sipush 28477
      // 0f8: ldc2_w 4937710645299231852
      // 0fb: lload 2
      // 0fc: lxor
      // 0fd: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 102: iastore
      // 103: dup
      // 104: bipush 4
      // 105: sipush 944
      // 108: ldc2_w 2159554062793527528
      // 10b: lload 2
      // 10c: lxor
      // 10d: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 112: iastore
      // 113: dup
      // 114: bipush 5
      // 115: sipush 5810
      // 118: ldc2_w 7719974777159927209
      // 11b: lload 2
      // 11c: lxor
      // 11d: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 122: iastore
      // 123: dup
      // 124: sipush 23285
      // 127: ldc2_w 7780014451344181692
      // 12a: lload 2
      // 12b: lxor
      // 12c: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 131: sipush 7074
      // 134: ldc2_w 3328355154458724515
      // 137: lload 2
      // 138: lxor
      // 139: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 13e: iastore
      // 13f: aastore
      // 140: dup
      // 141: bipush 1
      // 142: aload 6
      // 144: invokestatic sixtwo/mZ.csh (Ljava/lang/String;)[I
      // 147: aastore
      // 148: dup
      // 149: bipush 2
      // 14a: sipush 32267
      // 14d: ldc2_w 6654713312062778643
      // 150: lload 2
      // 151: lxor
      // 152: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 157: newarray 10
      // 159: dup
      // 15a: bipush 0
      // 15b: sipush 7074
      // 15e: ldc2_w 3328355154458724515
      // 161: lload 2
      // 162: lxor
      // 163: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 168: iastore
      // 169: dup
      // 16a: bipush 1
      // 16b: sipush 8906
      // 16e: ldc2_w 2701658868466282988
      // 171: lload 2
      // 172: lxor
      // 173: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 178: iastore
      // 179: dup
      // 17a: bipush 2
      // 17b: sipush 19412
      // 17e: ldc2_w 7192610174937143505
      // 181: lload 2
      // 182: lxor
      // 183: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 188: iastore
      // 189: dup
      // 18a: bipush 3
      // 18b: sipush 32032
      // 18e: ldc2_w 5403350633792286219
      // 191: lload 2
      // 192: lxor
      // 193: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 198: iastore
      // 199: dup
      // 19a: bipush 4
      // 19b: sipush 32032
      // 19e: ldc2_w 5403350633792286219
      // 1a1: lload 2
      // 1a2: lxor
      // 1a3: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1a8: iastore
      // 1a9: dup
      // 1aa: bipush 5
      // 1ab: sipush 944
      // 1ae: ldc2_w 2159554062793527528
      // 1b1: lload 2
      // 1b2: lxor
      // 1b3: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1b8: iastore
      // 1b9: dup
      // 1ba: sipush 23285
      // 1bd: ldc2_w 7780014451344181692
      // 1c0: lload 2
      // 1c1: lxor
      // 1c2: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1c7: sipush 32185
      // 1ca: ldc2_w 7044182283962166936
      // 1cd: lload 2
      // 1ce: lxor
      // 1cf: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1d4: iastore
      // 1d5: dup
      // 1d6: sipush 30404
      // 1d9: ldc2_w 237476380908692890
      // 1dc: lload 2
      // 1dd: lxor
      // 1de: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1e3: sipush 7074
      // 1e6: ldc2_w 3328355154458724515
      // 1e9: lload 2
      // 1ea: lxor
      // 1eb: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1f0: iastore
      // 1f1: dup
      // 1f2: sipush 19582
      // 1f5: ldc2_w 5751797529094594430
      // 1f8: lload 2
      // 1f9: lxor
      // 1fa: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1ff: sipush 12928
      // 202: ldc2_w 8422669235990913414
      // 205: lload 2
      // 206: lxor
      // 207: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 20c: iastore
      // 20d: dup
      // 20e: sipush 15968
      // 211: ldc2_w 2200304732257873219
      // 214: lload 2
      // 215: lxor
      // 216: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 21b: sipush 8865
      // 21e: ldc2_w 9152125808314118578
      // 221: lload 2
      // 222: lxor
      // 223: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 228: iastore
      // 229: dup
      // 22a: sipush 26193
      // 22d: ldc2_w 77216581232309586
      // 230: lload 2
      // 231: lxor
      // 232: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 237: sipush 17976
      // 23a: ldc2_w 1349484495235519745
      // 23d: lload 2
      // 23e: lxor
      // 23f: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 244: iastore
      // 245: aastore
      // 246: invokestatic sixtwo/mZ.csf ([[I)[I
      // 249: invokestatic sixtwo/cN.XF ([I)V
      // 24c: return
   }

   @hG
   public void aht(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dp.kiuBc J
      // 03: ldc2_w 60520645960752
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dp.bab ()Z
      // 11: ifne 19
      // 14: return
      // 15: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18: athrow
      // 19: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1c: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 1f: astore 5
      // 21: aload 0
      // 22: getfield sixtwo/dp.klXSH Lsixtwo/cC;
      // 25: invokevirtual sixtwo/cC.VC ()I
      // 28: sipush 31105
      // 2b: ldc2_w 4721766021096858083
      // 2e: lload 2
      // 2f: lxor
      // 30: invokedynamic c (IJ)I bsm=sixtwo/dp.ahM (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 35: imul
      // 36: istore 6
      // 38: aload 5
      // 3a: ifnull 51
      // 3d: aload 0
      // 3e: getfield sixtwo/dp.YUykz Lsixtwo/mT;
      // 41: iload 6
      // 43: i2l
      // 44: invokevirtual sixtwo/mT.cpD (J)Z
      // 47: ifne 56
      // 4a: goto 51
      // 4d: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: return
      // 52: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: aload 5
      // 58: invokevirtual net/minecraft/class_634.method_2880 ()Ljava/util/Collection;
      // 5b: astore 7
      // 5d: aload 4
      // 5f: ifnonnull e4
      // 62: aload 7
      // 64: invokeinterface java/util/Collection.size ()I 1
      // 69: aload 0
      // 6a: getfield sixtwo/dp.KrDsH Ljava/util/List;
      // 6d: invokeinterface java/util/List.size ()I 1
      // 72: if_icmpeq dd
      // 75: goto 7c
      // 78: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7b: athrow
      // 7c: aload 7
      // 7e: invokeinterface java/util/Collection.stream ()Ljava/util/stream/Stream; 1
      // 83: invokedynamic apply ()Ljava/util/function/Function; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/dp.ahE (Lnet/minecraft/class_640;)Ljava/util/UUID;, (Lnet/minecraft/class_640;)Ljava/util/UUID; ]
      // 88: invokeinterface java/util/stream/Stream.map (Ljava/util/function/Function;)Ljava/util/stream/Stream; 2
      // 8d: invokestatic java/util/stream/Collectors.toSet ()Ljava/util/stream/Collector;
      // 90: invokeinterface java/util/stream/Stream.collect (Ljava/util/stream/Collector;)Ljava/lang/Object; 2
      // 95: checkcast java/util/Set
      // 98: astore 8
      // 9a: aload 0
      // 9b: getfield sixtwo/dp.mBTku Ljava/util/List;
      // 9e: invokeinterface java/util/List.stream ()Ljava/util/stream/Stream; 1
      // a3: aload 8
      // a5: invokedynamic test (Ljava/util/Set;)Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/dp.ahD (Ljava/util/Set;Lnet/minecraft/class_742;)Z, (Lnet/minecraft/class_742;)Z ]
      // aa: invokeinterface java/util/stream/Stream.filter (Ljava/util/function/Predicate;)Ljava/util/stream/Stream; 2
      // af: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/dp.ahC (Lnet/minecraft/class_742;)Z, (Lnet/minecraft/class_742;)Z ]
      // b4: invokeinterface java/util/stream/Stream.filter (Ljava/util/function/Predicate;)Ljava/util/stream/Stream; 2
      // b9: aload 0
      // ba: invokedynamic accept (Lsixtwo/dp;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/dp.ahA (Lnet/minecraft/class_742;)V, (Lnet/minecraft/class_742;)V ]
      // bf: invokeinterface java/util/stream/Stream.forEach (Ljava/util/function/Consumer;)V 2
      // c4: aload 0
      // c5: getfield sixtwo/dp.KrDsH Ljava/util/List;
      // c8: invokeinterface java/util/List.clear ()V 1
      // cd: aload 0
      // ce: getfield sixtwo/dp.KrDsH Ljava/util/List;
      // d1: aload 7
      // d3: invokeinterface java/util/List.addAll (Ljava/util/Collection;)Z 2
      // d8: pop
      // d9: aload 0
      // da: invokevirtual sixtwo/dp.ahx ()V
      // dd: aload 0
      // de: getfield sixtwo/dp.YUykz Lsixtwo/mT;
      // e1: invokevirtual sixtwo/mT.cpB ()V
      // e4: return
   }

   @hG
   public void ahv(gk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dp.kiuBc J
      // 003: ldc2_w 18476493170129
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dp.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 02a
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: aload 0
      // 022: getfield sixtwo/dp.FlxVs Ljava/util/List;
      // 025: invokeinterface java/util/List.isEmpty ()Z 1
      // 02a: ifeq 02e
      // 02d: return
      // 02e: aload 1
      // 02f: invokevirtual sixtwo/gk.baT ()Lsixtwo/lC;
      // 032: astore 5
      // 034: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 037: ldc_w 9.0
      // 03a: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 03d: astore 6
      // 03f: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 042: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 045: astore 7
      // 047: aload 0
      // 048: getfield sixtwo/dp.FlxVs Ljava/util/List;
      // 04b: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 050: astore 8
      // 052: aload 8
      // 054: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 059: ifeq 14a
      // 05c: aload 8
      // 05e: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 063: checkcast net/minecraft/class_742
      // 066: astore 9
      // 068: aload 9
      // 06a: invokevirtual net/minecraft/class_742.method_73189 ()Lnet/minecraft/class_243;
      // 06d: astore 10
      // 06f: new net/minecraft/class_243
      // 072: dup
      // 073: aload 10
      // 075: getfield net/minecraft/class_243.field_1352 D
      // 078: aload 10
      // 07a: getfield net/minecraft/class_243.field_1351 D
      // 07d: aload 0
      // 07e: getfield sixtwo/dp.ClxmS Lsixtwo/cC;
      // 081: invokevirtual sixtwo/cC.VB ()F
      // 084: f2d
      // 085: dadd
      // 086: aload 10
      // 088: getfield net/minecraft/class_243.field_1350 D
      // 08b: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 08e: invokestatic sixtwo/jI.bIw (Lnet/minecraft/class_243;)Lnet/minecraft/class_241;
      // 091: astore 11
      // 093: aload 11
      // 095: aload 4
      // 097: ifnonnull 0b2
      // 09a: ifnonnull 0b0
      // 09d: goto 0a4
      // 0a0: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a3: athrow
      // 0a4: aload 4
      // 0a6: ifnull 052
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: aload 11
      // 0b2: getfield net/minecraft/class_241.field_1343 F
      // 0b5: fstore 12
      // 0b7: aload 11
      // 0b9: getfield net/minecraft/class_241.field_1342 F
      // 0bc: fstore 13
      // 0be: aload 9
      // 0c0: invokevirtual net/minecraft/class_742.method_7334 ()Lcom/mojang/authlib/GameProfile;
      // 0c3: invokevirtual com/mojang/authlib/GameProfile.name ()Ljava/lang/String;
      // 0c6: astore 14
      // 0c8: aload 6
      // 0ca: aload 14
      // 0cc: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 0cf: fstore 15
      // 0d1: fload 15
      // 0d3: ldc_w 8.0
      // 0d6: fadd
      // 0d7: fstore 16
      // 0d9: aload 6
      // 0db: invokevirtual sixtwo/lq.cat ()F
      // 0de: ldc_w 4.0
      // 0e1: fadd
      // 0e2: fstore 17
      // 0e4: fload 12
      // 0e6: fload 15
      // 0e8: fconst_2
      // 0e9: fdiv
      // 0ea: fsub
      // 0eb: fstore 18
      // 0ed: fload 13
      // 0ef: aload 6
      // 0f1: invokevirtual sixtwo/lq.cat ()F
      // 0f4: fload 17
      // 0f6: invokestatic sixtwo/jf.bAH (FF)F
      // 0f9: fadd
      // 0fa: fstore 19
      // 0fc: aload 4
      // 0fe: ifnonnull 145
      // 101: aload 0
      // 102: getfield sixtwo/dp.kUvkk Lsixtwo/cJ;
      // 105: invokevirtual sixtwo/cJ.WF ()Z
      // 108: ifeq 136
      // 10b: goto 112
      // 10e: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 111: athrow
      // 112: aload 5
      // 114: fload 12
      // 116: fload 16
      // 118: fconst_2
      // 119: fdiv
      // 11a: fsub
      // 11b: fload 13
      // 11d: fload 16
      // 11f: fload 17
      // 121: fconst_1
      // 122: fconst_0
      // 123: ldc_w 3.0
      // 126: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 129: ldc_w 4.0
      // 12c: invokevirtual sixtwo/lC.ccW (FFFFFFLsixtwo/ld;F)V
      // 12f: goto 136
      // 132: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 135: athrow
      // 136: aload 5
      // 138: aload 6
      // 13a: aload 14
      // 13c: fload 18
      // 13e: fload 19
      // 140: aload 7
      // 142: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 145: aload 4
      // 147: ifnull 052
      // 14a: return
   }

   @hG
   public void ahu(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dp.kiuBc J
      // 03: ldc2_w 120237436349581
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dp.bab ()Z
      // 11: aload 4
      // 13: ifnonnull 2a
      // 16: ifne 21
      // 19: goto 20
      // 1c: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: aload 0
      // 22: getfield sixtwo/dp.FlxVs Ljava/util/List;
      // 25: invokeinterface java/util/List.isEmpty ()Z 1
      // 2a: ifeq 2e
      // 2d: return
      // 2e: aload 1
      // 2f: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 32: astore 5
      // 34: invokestatic sixtwo/kw.bRK ()Lsixtwo/kw;
      // 37: aload 0
      // 38: getfield sixtwo/dp.EscPj Lsixtwo/cG;
      // 3b: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 3e: aload 0
      // 3f: getfield sixtwo/dp.wjLCc Lsixtwo/cu;
      // 42: invokevirtual sixtwo/cu.SZ ()Z
      // 45: ifeq 52
      // 48: getstatic sixtwo/kv.CiCMa Lsixtwo/kv;
      // 4b: goto 55
      // 4e: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: getstatic sixtwo/kv.DESOY Lsixtwo/kv;
      // 55: aload 0
      // 56: getfield sixtwo/dp.wjLCc Lsixtwo/cu;
      // 59: invokevirtual sixtwo/cu.SZ ()Z
      // 5c: ifeq 69
      // 5f: ldc_w 0.5
      // 62: goto 6a
      // 65: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: fconst_0
      // 6a: invokevirtual sixtwo/kw.bRP (Lsixtwo/mG;Lsixtwo/kv;F)Lsixtwo/kw;
      // 6d: astore 6
      // 6f: aload 0
      // 70: getfield sixtwo/dp.FlxVs Ljava/util/List;
      // 73: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 78: astore 7
      // 7a: aload 7
      // 7c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 81: ifeq f7
      // 84: aload 7
      // 86: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 8b: checkcast net/minecraft/class_742
      // 8e: astore 8
      // 90: aload 8
      // 92: aload 4
      // 94: ifnonnull be
      // 97: invokestatic sixtwo/jJ.bIB (Lnet/minecraft/class_1297;)Z
      // 9a: ifne b0
      // 9d: goto a4
      // a0: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a3: athrow
      // a4: aload 4
      // a6: ifnull 7a
      // a9: goto b0
      // ac: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // af: athrow
      // b0: aload 0
      // b1: getfield sixtwo/dp.JTVMZ Ljava/util/Map;
      // b4: aload 8
      // b6: invokevirtual net/minecraft/class_742.method_5667 ()Ljava/util/UUID;
      // b9: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // be: checkcast sixtwo/kt
      // c1: astore 9
      // c3: aload 9
      // c5: aload 4
      // c7: ifnonnull e7
      // ca: ifnonnull e0
      // cd: goto d4
      // d0: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d3: athrow
      // d4: aload 4
      // d6: ifnull 7a
      // d9: goto e0
      // dc: invokestatic sixtwo/dp.ahF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // df: athrow
      // e0: aload 9
      // e2: aload 6
      // e4: invokevirtual sixtwo/kt.bQV (Lsixtwo/kw;)Lsixtwo/kt;
      // e7: aload 5
      // e9: aload 1
      // ea: invokevirtual sixtwo/go$sX.bbi ()F
      // ed: aload 8
      // ef: invokevirtual sixtwo/kt.bQQ (Lnet/minecraft/class_4587;FLnet/minecraft/class_742;)V
      // f2: aload 4
      // f4: ifnull 7a
      // f7: return
   }

   @hG
   public void ahw(gA var1) {
      long var2 = kiuBc ^ 130323719624729L;
      iS[] var4 = dh.afl();

      int var10000;
      label47: {
         try {
            var10000 = this.bab();
            if (var4 != null) {
               break label47;
            }

            if (var10000 == 0) {
               return;
            }
         } catch (MatchException var7) {
            throw ahF(var7);
         }

         var10000 = var1.bbQ();
      }

      int var10001;
      label37: {
         try {
            var10001 = 1;
            if (var4 != null) {
               break label37;
            }

            if (var10000 != 1) {
               return;
            }
         } catch (MatchException var6) {
            throw ahF(var6);
         }

         var10000 = var1.bbP();
         var10001 = this.yDgej.VP();
      }

      try {
         if (var10000 == var10001) {
            this.FlxVs.clear();
            this.JTVMZ.clear();
         }
      } catch (MatchException var5) {
         throw ahF(var5);
      }
   }

   private static CallSite ahM(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ahL".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dp" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @hG
   public void ahr(gM var1) {
      this.FlxVs.clear();
      this.JTVMZ.clear();
   }

   private static MatchException ahF(MatchException var0) {
      return var0;
   }

   private static String ahH(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 5268;
      if (JGXnk[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])GLQcs.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               GLQcs.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/dp", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = cAXko[var5].getBytes("ISO-8859-1");
         JGXnk[var5] = ahG(((Cipher)var4[0]).doFinal(var9));
      }

      return JGXnk[var5];
   }

   private static String ahG(byte[] var0) {
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

   private static int ahK(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 8199;
      if (rpAoJ[var3] == null) {
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
         long var5 = RBCIZ[var3];
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
         Object[] var9 = (Object[])ZMhFd.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ZMhFd.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dp", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         rpAoJ[var3] = var15;
      }

      return rpAoJ[var3];
   }

   private static int ahL(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ahK(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Object ahI(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = ahH(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
