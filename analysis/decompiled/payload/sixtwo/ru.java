package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class ru {
   private static final Map<Character, Character> cxxgt;
   private static final Map<Character, Character> sRJBt;
   private static final Map<Character, Character> VkWRj;
   private static final long JJddW = gb.aYR(6858533336557237871L, -3491188305010024190L, MethodHandles.lookup().lookupClass()).a(21138919510032L);
   private static final long[] UzssG;
   private static final Integer[] TwbYR;
   private static final Map edNag = new HashMap(13);

   static {
      long var11 = JJddW ^ 32211457875616L;
      Cipher var0;
      Cipher var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[149];
      int var3 = 0;
      String var4 = "Þ\u008f§\u0085®`N¹h<\u001dÿºs\u009e¦\u0019Pu\u0006\u000b\u0002\u0095h1\u0096c#É\f,Ý\u0017\u0081\u009c}åå²÷È\u0012-u\u007fD\u0004g\u0018y\\I\u0092\u000fmázH9§r2\u0098Ry*\u0080G\u000bð/g]È[Û´\u0006\u009fÑÓGÉä$ºý\"þùU#$\u00850ûÔJ4Ò¡¡ÞwçP@\u009bãµ¿\u00947\u0085\u0083\r6ÎÈ\u008cRq ùNø\u0007Ìn&\u0086\u007fm£ù\bnÓFÄ\u0090³1äÿrE\u009bXòrqºDRY\u000f\u001cÚ\u0012\u001b·ú;þ±E¢_¸BL¶Ê\u0091\u0088ÏIîMJ\r\u0098\u0095ùg%á¸R¾ª}\u001eæv\u001b\u009bçºØ\u008d\u0085+ÞÞ\u008cÞ\u001c¹Õuþ®Nþ:c.åË~÷©E^\u0005\u008bM´Ël\u0090áY\fEG÷Ù\u0086`ú\u009cTìËÝüþg\b\u001e¸»\ry¡¦µ\b\u0001!µMy'àtùr§ÍSÐ\u0080ñuT_ÚÒ\u0083Ï_¹ \u000fõ\u0014\nw}\f@\töÄ\u00953?öÈÇ¦êÊÀq\u0011eÍz.\u0014ë\u0012Â_ÈÄ}6°Ûâ\u001d²¶nVT\u000b?ëýÄÀ\u0089\u000f\u0094½³ä`\u0083\u0014®\u001eJ\u0016¨;ZuC\u0011íÅ\u0090\t$y\f\u0090\u0090\u008b\u0088S¡¶s09k\u0081>!\u000eÔ[^Û`!\u000fMcs7\u009eÑs%\u0083s çÚ\u008cDã\tÝEbü\fMÞ.R;?¤½è<\u0006ëh\u0098Ý<%B\u0014<ôl\u001b\u001eê\u0096EÖ\u0016a\u001eÆ'q+}5ù$h/\u0094f\u009b±{\r¦¸\u0012ÍBÐ{w\u0014JyÂSäá&ºª¿ò\u0099\u001f\u0001\u001cE\u0007.ò§mÛY=l1ð´`Éï×\u0084´\u0013¼¬ìÎFü\u0082I\u0088YÍBO\u008dÒtÔÐ]\r,guDµ\u008eÏø¶R\u0080t}×\n\u008a\u001f°\u0097k#\"\u0092uU]w¸\u0098Ý\u000eqk?éEÛX¯÷\u0005¶\u008d\u00ad1\u00adD\\\u001f\u000b½;µ11\u0016\u0086»fûðïò¦\u009fÑpÛÁÓþÙ\r¾¸³\u0092x¤«\u008e\u001fdÂ8\u000496¡<¹V\u0014H9\u008aUÄôÿ\u0093èO\u009b\u009a\u0082|â\u0092\u008cÓ\u0006S4Ñ\u0003V\u0019\u008f\t\u0015-ß®Ð\u001f\u008a\u0083Ê\u009d\u001a\r)í\u0098Ú¤ÜÏG\u0006³®Ü¢\u0014\u0002\u0091<\u0090\u0006\u0083\u008aÕzéG\u0006#m^)ui²c}º\u000f\u0096>d\fÞü\u009f\u001f» eÌá¾9QÓ\u0000×S\u0085¯ö}#\u001dk\u0088ø\u00ad\"Í\u008e-Yª×5@ü=\u0013Ã½ZffÉ¨ò\u0007\u001bÉ[\u0016zäO\u008a*Û\u0087Ù¨ Âü\u009b\u009aTøñµXÏw¥\u0016L\u001bö\rc}RvoêX:¯-\u008eà\u009c*ÿ\u0090eA5/\u007fõÿ[k\u009az_Á\u001cJc\u0014>\u0088¤ûj¶ùï\u008f¶\u0019\u0099'sUÆÓ\\¥µøH\u0010ÓÈ/\u0094Ã\u0001y=\u0016MyÚ?Á¿åã4¡Ù{\u008eúâ\u0086@¾©\u009eõÐ\u008bÚ\u001b\u0083ccwn¬ê\u009b\u001f\u0094ÞrÞ\u0091_}\u00ad)Ø¼be'\u0007)Y\\Û¦ð)Õä{ã~\u000bwæwd\u007fp¿b\u0000îúÇWø#»äî\u0088éÛ\u0000ñí\u007f$^\u008a[e\u008aTþ\u000f²O¬ðÙ\u008bÜ¶ê\u0013\u009c\u0018\u0003\u001eÄ\\V:·\u0014¬S\u009e\u001d\u00adõ/\u009938Lñ·³·¥\u0099ÒëSÑ\u0099\r]â\u0000^³0\u0002¶\u000fË5\u00adTRß\u001d\u00939Z¼\u0094]\u0013x\u0093ò\u008f½³\f\u0018ÌÝYXXN\u0006«3\u0091rê-¢Rá6Écæ\u0003a\u0002O\u007f¨ ÜùüN {Ó¢¸\u0083\u0017(í/oí\u0006ò6u,â\u0012{Sì\u0096mý7UÎ«àmø\u0019çæÀÂiª^\u0011@\u008c\u009f(5Ó\u009f]ú\u008a\n¹P\u000fÆüî¥nØýäx«ý¹(×\u00ad\u00ad\u0082ð§\fÞV]Õ$ã6û¯X\r\u0090¼ô\u0086Ö\u000e\u00064FA\rw\u008e+¤ \u008fÝ\u00857YÅ}\u009b\u0013T\u0083\u0017Î\u001e\u0004\u0010\\¶\u009b\u0096§ç!\u0080\u0000\u0001;¸\u0012\u009b\u0004\u009cM\u0080·ðý¤";
      int var5 = "Þ\u008f§\u0085®`N¹h<\u001dÿºs\u009e¦\u0019Pu\u0006\u000b\u0002\u0095h1\u0096c#É\f,Ý\u0017\u0081\u009c}åå²÷È\u0012-u\u007fD\u0004g\u0018y\\I\u0092\u000fmázH9§r2\u0098Ry*\u0080G\u000bð/g]È[Û´\u0006\u009fÑÓGÉä$ºý\"þùU#$\u00850ûÔJ4Ò¡¡ÞwçP@\u009bãµ¿\u00947\u0085\u0083\r6ÎÈ\u008cRq ùNø\u0007Ìn&\u0086\u007fm£ù\bnÓFÄ\u0090³1äÿrE\u009bXòrqºDRY\u000f\u001cÚ\u0012\u001b·ú;þ±E¢_¸BL¶Ê\u0091\u0088ÏIîMJ\r\u0098\u0095ùg%á¸R¾ª}\u001eæv\u001b\u009bçºØ\u008d\u0085+ÞÞ\u008cÞ\u001c¹Õuþ®Nþ:c.åË~÷©E^\u0005\u008bM´Ël\u0090áY\fEG÷Ù\u0086`ú\u009cTìËÝüþg\b\u001e¸»\ry¡¦µ\b\u0001!µMy'àtùr§ÍSÐ\u0080ñuT_ÚÒ\u0083Ï_¹ \u000fõ\u0014\nw}\f@\töÄ\u00953?öÈÇ¦êÊÀq\u0011eÍz.\u0014ë\u0012Â_ÈÄ}6°Ûâ\u001d²¶nVT\u000b?ëýÄÀ\u0089\u000f\u0094½³ä`\u0083\u0014®\u001eJ\u0016¨;ZuC\u0011íÅ\u0090\t$y\f\u0090\u0090\u008b\u0088S¡¶s09k\u0081>!\u000eÔ[^Û`!\u000fMcs7\u009eÑs%\u0083s çÚ\u008cDã\tÝEbü\fMÞ.R;?¤½è<\u0006ëh\u0098Ý<%B\u0014<ôl\u001b\u001eê\u0096EÖ\u0016a\u001eÆ'q+}5ù$h/\u0094f\u009b±{\r¦¸\u0012ÍBÐ{w\u0014JyÂSäá&ºª¿ò\u0099\u001f\u0001\u001cE\u0007.ò§mÛY=l1ð´`Éï×\u0084´\u0013¼¬ìÎFü\u0082I\u0088YÍBO\u008dÒtÔÐ]\r,guDµ\u008eÏø¶R\u0080t}×\n\u008a\u001f°\u0097k#\"\u0092uU]w¸\u0098Ý\u000eqk?éEÛX¯÷\u0005¶\u008d\u00ad1\u00adD\\\u001f\u000b½;µ11\u0016\u0086»fûðïò¦\u009fÑpÛÁÓþÙ\r¾¸³\u0092x¤«\u008e\u001fdÂ8\u000496¡<¹V\u0014H9\u008aUÄôÿ\u0093èO\u009b\u009a\u0082|â\u0092\u008cÓ\u0006S4Ñ\u0003V\u0019\u008f\t\u0015-ß®Ð\u001f\u008a\u0083Ê\u009d\u001a\r)í\u0098Ú¤ÜÏG\u0006³®Ü¢\u0014\u0002\u0091<\u0090\u0006\u0083\u008aÕzéG\u0006#m^)ui²c}º\u000f\u0096>d\fÞü\u009f\u001f» eÌá¾9QÓ\u0000×S\u0085¯ö}#\u001dk\u0088ø\u00ad\"Í\u008e-Yª×5@ü=\u0013Ã½ZffÉ¨ò\u0007\u001bÉ[\u0016zäO\u008a*Û\u0087Ù¨ Âü\u009b\u009aTøñµXÏw¥\u0016L\u001bö\rc}RvoêX:¯-\u008eà\u009c*ÿ\u0090eA5/\u007fõÿ[k\u009az_Á\u001cJc\u0014>\u0088¤ûj¶ùï\u008f¶\u0019\u0099'sUÆÓ\\¥µøH\u0010ÓÈ/\u0094Ã\u0001y=\u0016MyÚ?Á¿åã4¡Ù{\u008eúâ\u0086@¾©\u009eõÐ\u008bÚ\u001b\u0083ccwn¬ê\u009b\u001f\u0094ÞrÞ\u0091_}\u00ad)Ø¼be'\u0007)Y\\Û¦ð)Õä{ã~\u000bwæwd\u007fp¿b\u0000îúÇWø#»äî\u0088éÛ\u0000ñí\u007f$^\u008a[e\u008aTþ\u000f²O¬ðÙ\u008bÜ¶ê\u0013\u009c\u0018\u0003\u001eÄ\\V:·\u0014¬S\u009e\u001d\u00adõ/\u009938Lñ·³·¥\u0099ÒëSÑ\u0099\r]â\u0000^³0\u0002¶\u000fË5\u00adTRß\u001d\u00939Z¼\u0094]\u0013x\u0093ò\u008f½³\f\u0018ÌÝYXXN\u0006«3\u0091rê-¢Rá6Écæ\u0003a\u0002O\u007f¨ ÜùüN {Ó¢¸\u0083\u0017(í/oí\u0006ò6u,â\u0012{Sì\u0096mý7UÎ«àmø\u0019çæÀÂiª^\u0011@\u008c\u009f(5Ó\u009f]ú\u008a\n¹P\u000fÆüî¥nØýäx«ý¹(×\u00ad\u00ad\u0082ð§\fÞV]Õ$ã6û¯X\r\u0090¼ô\u0086Ö\u000e\u00064FA\rw\u008e+¤ \u008fÝ\u00857YÅ}\u009b\u0013T\u0083\u0017Î\u001e\u0004\u0010\\¶\u009b\u0096§ç!\u0080\u0000\u0001;¸\u0012\u009b\u0004\u009cM\u0080·ðý¤"
         .length();
      byte var2 = 0;

      label55:
      while (true) {
         int var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var22 = var6;
         var10001 = var3++;
         long var27 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var29 = -1;

         while (true) {
            long var8 = var27;
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
            long var31 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var29) {
               case 0:
                  var22[var10001] = var31;
                  if (var2 >= var5) {
                     UzssG = var6;
                     TwbYR = new Integer[149];
                     cxxgt = new HashMap<>();
                     sRJBt = new HashMap<>();
                     VkWRj = new HashMap<>();
                     Entry[] var23 = new Entry[djO<"e">(15401, 8787217822199415189L ^ var11)];
                     var23[0] = Map.entry(
                        Character.valueOf((char)djO<"e">(13336, 2974774229054360051L ^ var11)),
                        Character.valueOf((char)djO<"e">(3313, 8815335064999571764L ^ var11))
                     );
                     var23[1] = Map.entry(
                        Character.valueOf((char)djO<"e">(22803, 1198724050758951952L ^ var11)),
                        Character.valueOf((char)djO<"e">(13060, 5783756970301918869L ^ var11))
                     );
                     var23[2] = Map.entry(
                        Character.valueOf((char)djO<"e">(15709, 1424927075383902442L ^ var11)),
                        Character.valueOf((char)djO<"e">(32075, 5652469432612339908L ^ var11))
                     );
                     var23[3] = Map.entry(
                        Character.valueOf((char)djO<"e">(14717, 7391172544529007803L ^ var11)),
                        Character.valueOf((char)djO<"e">(22085, 6397116108465597439L ^ var11))
                     );
                     var23[4] = Map.entry(
                        Character.valueOf((char)djO<"e">(1659, 3103822350937963512L ^ var11)),
                        Character.valueOf((char)djO<"e">(9402, 7168364097939315005L ^ var11))
                     );
                     var23[5] = Map.entry(
                        Character.valueOf((char)djO<"e">(31097, 5980334053038867679L ^ var11)),
                        Character.valueOf((char)djO<"e">(32383, 6497926836047627166L ^ var11))
                     );
                     var23[djO<"e">(772, 3248473137231380154L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(14779, 6031841993442624625L ^ var11)),
                        Character.valueOf((char)djO<"e">(32309, 7542654488850842585L ^ var11))
                     );
                     var23[djO<"e">(17275, 8021100854844522215L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(30580, 6486142702113934000L ^ var11)),
                        Character.valueOf((char)djO<"e">(14227, 4140910711943498317L ^ var11))
                     );
                     var23[djO<"e">(8016, 4680533194481574529L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(20876, 3475946279822978075L ^ var11)),
                        Character.valueOf((char)djO<"e">(31957, 3655613600116392255L ^ var11))
                     );
                     var23[djO<"e">(54, 5898910066042387946L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(6726, 2729694440838080441L ^ var11)),
                        Character.valueOf((char)djO<"e">(20480, 6736626898184498651L ^ var11))
                     );
                     var23[djO<"e">(6009, 3116504057056504527L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(8116, 1765744495416975956L ^ var11)),
                        Character.valueOf((char)djO<"e">(32440, 936604488918450970L ^ var11))
                     );
                     var23[djO<"e">(29254, 2628643837892710356L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(17888, 1942786804838463564L ^ var11)),
                        Character.valueOf((char)djO<"e">(6836, 4680374548782032829L ^ var11))
                     );
                     var23[djO<"e">(27718, 1770459982348439966L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(30403, 3591968102576769862L ^ var11)),
                        Character.valueOf((char)djO<"e">(8114, 8712358679073333808L ^ var11))
                     );
                     var23[djO<"e">(2728, 3126685452874790690L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(6522, 8774473606169896062L ^ var11)),
                        Character.valueOf((char)djO<"e">(21770, 1665428508031740130L ^ var11))
                     );
                     var23[djO<"e">(19382, 1285716671348668024L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(22271, 3600156611780864894L ^ var11)),
                        Character.valueOf((char)djO<"e">(11198, 5436001243959039612L ^ var11))
                     );
                     var23[djO<"e">(29508, 63851144467205847L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(32221, 2514367491904552967L ^ var11)),
                        Character.valueOf((char)djO<"e">(17467, 2767355026434718173L ^ var11))
                     );
                     var23[djO<"e">(18136, 4486344910669249491L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(23954, 4631667077389607066L ^ var11)),
                        Character.valueOf((char)djO<"e">(31968, 8301695966436081971L ^ var11))
                     );
                     var23[djO<"e">(24115, 5470343539219686297L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(1343, 4923063137933080815L ^ var11)),
                        Character.valueOf((char)djO<"e">(3292, 1930983586847240653L ^ var11))
                     );
                     var23[djO<"e">(4751, 5861388607843807078L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(8269, 1347420888594455956L ^ var11)),
                        Character.valueOf((char)djO<"e">(22947, 6586940143443797051L ^ var11))
                     );
                     var23[djO<"e">(13220, 8891794073290706460L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(23945, 5309597300418502782L ^ var11)),
                        Character.valueOf((char)djO<"e">(279, 9185283706974616705L ^ var11))
                     );
                     var23[djO<"e">(3555, 39542263392579627L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(8988, 1496231153608695550L ^ var11)),
                        Character.valueOf((char)djO<"e">(18016, 6598581896018852863L ^ var11))
                     );
                     var23[djO<"e">(28920, 899040023384247806L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(21515, 987318924867201444L ^ var11)),
                        Character.valueOf((char)djO<"e">(16185, 3192179252341342777L ^ var11))
                     );
                     var23[djO<"e">(18883, 512412501913498832L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(5178, 2012223345769818511L ^ var11)),
                        Character.valueOf((char)djO<"e">(15036, 849790342247941967L ^ var11))
                     );
                     var23[djO<"e">(4944, 5675162084431113792L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(495, 6831991615745309794L ^ var11)),
                        Character.valueOf((char)djO<"e">(3963, 4137610375367373547L ^ var11))
                     );
                     var23[djO<"e">(22011, 6283446233008531536L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(8519, 7444895989465554064L ^ var11)),
                        Character.valueOf((char)djO<"e">(30060, 9117201738171238636L ^ var11))
                     );
                     Map var13 = Map.ofEntries(var23);
                     Entry[] var24 = new Entry[djO<"e">(19559, 8696388145146786266L ^ var11)];
                     var24[0] = Map.entry(
                        Character.valueOf((char)djO<"e">(5814, 5456911264110455732L ^ var11)),
                        Character.valueOf((char)djO<"e">(23590, 5741515655751983395L ^ var11))
                     );
                     var24[1] = Map.entry(
                        Character.valueOf((char)djO<"e">(25696, 5746650703444236663L ^ var11)),
                        Character.valueOf((char)djO<"e">(27750, 1657089131670295016L ^ var11))
                     );
                     var24[2] = Map.entry(
                        Character.valueOf((char)djO<"e">(275, 7297577145859325180L ^ var11)),
                        Character.valueOf((char)djO<"e">(3043, 9083442218981438993L ^ var11))
                     );
                     var24[3] = Map.entry(
                        Character.valueOf((char)djO<"e">(26349, 8550614676620565267L ^ var11)),
                        Character.valueOf((char)djO<"e">(19371, 1207663916223559173L ^ var11))
                     );
                     var24[4] = Map.entry(
                        Character.valueOf((char)djO<"e">(9851, 213195177716358068L ^ var11)),
                        Character.valueOf((char)djO<"e">(2024, 7017164777785113318L ^ var11))
                     );
                     var24[5] = Map.entry(
                        Character.valueOf((char)djO<"e">(23057, 8063739840613935066L ^ var11)),
                        Character.valueOf((char)djO<"e">(5733, 8285608608241429460L ^ var11))
                     );
                     var24[djO<"e">(15474, 6786035574985458131L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(19242, 4868647052103218923L ^ var11)),
                        Character.valueOf((char)djO<"e">(26758, 6102690700603938149L ^ var11))
                     );
                     var24[djO<"e">(24994, 8479873341899201704L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(15413, 9207709958004212114L ^ var11)),
                        Character.valueOf((char)djO<"e">(22994, 6997317101112255527L ^ var11))
                     );
                     var24[djO<"e">(1435, 3175018180042962946L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(28625, 5687581494221656583L ^ var11)),
                        Character.valueOf((char)djO<"e">(5212, 3333486348189149679L ^ var11))
                     );
                     var24[djO<"e">(28225, 6152969907299832712L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(28525, 4421276600970236524L ^ var11)),
                        Character.valueOf((char)djO<"e">(30145, 2573671341701220450L ^ var11))
                     );
                     var24[djO<"e">(251, 6270329958351650175L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(20629, 1061934881796582709L ^ var11)),
                        Character.valueOf((char)djO<"e">(17600, 5213119293815814439L ^ var11))
                     );
                     var24[djO<"e">(674, 5543233331362807640L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(7226, 4596960375262781827L ^ var11)),
                        Character.valueOf((char)djO<"e">(21908, 3568969384902551656L ^ var11))
                     );
                     var24[djO<"e">(24252, 7377976552958845736L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(21606, 7471958431079688545L ^ var11)),
                        Character.valueOf((char)djO<"e">(3700, 4423905441070232450L ^ var11))
                     );
                     var24[djO<"e">(18894, 3072487401754653715L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(4451, 8495417113176583379L ^ var11)),
                        Character.valueOf((char)djO<"e">(25965, 2525136103789320402L ^ var11))
                     );
                     var24[djO<"e">(29519, 3821394843118653072L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(2095, 4402809347574511011L ^ var11)),
                        Character.valueOf((char)djO<"e">(29071, 8198336222187637866L ^ var11))
                     );
                     var24[djO<"e">(10473, 8042917968285078808L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(24053, 5363111898531454989L ^ var11)),
                        Character.valueOf((char)djO<"e">(8383, 9010677573309472178L ^ var11))
                     );
                     var24[djO<"e">(30840, 8326018212825187811L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(25606, 2119534334813624754L ^ var11)),
                        Character.valueOf((char)djO<"e">(15457, 3937807015736803693L ^ var11))
                     );
                     var24[djO<"e">(6767, 6538583182371235770L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(9541, 3219031786542667850L ^ var11)),
                        Character.valueOf((char)djO<"e">(30946, 4623273418527360271L ^ var11))
                     );
                     var24[djO<"e">(15242, 1734782655832491633L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(32765, 2396973879494427161L ^ var11)),
                        Character.valueOf((char)djO<"e">(20613, 1524633665119251836L ^ var11))
                     );
                     var24[djO<"e">(1740, 3357886259029818180L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(32711, 7650911285246804586L ^ var11)),
                        Character.valueOf((char)djO<"e">(14576, 1730147520273843566L ^ var11))
                     );
                     var24[djO<"e">(7780, 8200528972635349929L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(990, 1551125943465819756L ^ var11)),
                        Character.valueOf((char)djO<"e">(1978, 1782295842178775623L ^ var11))
                     );
                     var24[djO<"e">(29279, 1453117743870857116L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(21169, 792539195065855800L ^ var11)),
                        Character.valueOf((char)djO<"e">(29942, 6576598062229571965L ^ var11))
                     );
                     var24[djO<"e">(22354, 8461487903927331540L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(8489, 7542027059804413166L ^ var11)),
                        Character.valueOf((char)djO<"e">(1453, 3959072386679683165L ^ var11))
                     );
                     var24[djO<"e">(29047, 3060599659852680379L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(21381, 41042552929742487L ^ var11)),
                        Character.valueOf((char)djO<"e">(8109, 364410725153022468L ^ var11))
                     );
                     var24[djO<"e">(392, 7590490718551456870L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(17478, 2702630594769648018L ^ var11)),
                        Character.valueOf((char)djO<"e">(383, 5776657959090502847L ^ var11))
                     );
                     var24[djO<"e">(28898, 7754464490963258743L ^ var11)] = Map.entry(
                        Character.valueOf((char)djO<"e">(13540, 1789294792998488446L ^ var11)),
                        Character.valueOf((char)djO<"e">(28639, 790511414342472258L ^ var11))
                     );
                     Map var14 = Map.ofEntries(var24);

                     for (Entry var16 : var13.entrySet()) {
                        sRJBt.put((Character)var16.getKey(), (Character)var16.getValue());
                        cxxgt.put((Character)var16.getValue(), (Character)var16.getKey());
                        VkWRj.putAll(var14);
                     }

                     for (int var20 = djO<"e">(9554, 8902895932662782202L ^ var11);
                        var20 <= djO<"e">(20684, 2740112972112489832L ^ var11);
                        var20 = (char)(var20 + 1)
                     ) {
                        char var21 = Character.toUpperCase((char)var20);
                        Character var17 = cxxgt.get(var21);

                        try {
                           if (var17 != null) {
                              cxxgt.put(Character.valueOf((char)var20), var17);
                           }
                        } catch (MatchException var18) {
                           throw djL(var18);
                        }
                     }

                     return;
                  }
                  break;
               default:
                  var22[var10001] = var31;
                  if (var2 < var5) {
                     continue label55;
                  }

                  var4 = "\u007fP\u0006\u0000\u00911\u0088ÚÏ\u0083g\u0093\u0004´Æ\u009a";
                  var5 = "\u007fP\u0006\u0000\u00911\u0088ÚÏ\u0083g\u0093\u0004´Æ\u009a".length();
                  var2 = 0;
            }

            byte var26 = var2;
            var2 += 8;
            var7 = var4.substring(var26, var2).getBytes("ISO-8859-1");
            var22 = var6;
            var10001 = var3++;
            var27 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var29 = 0;
         }
      }
   }

   public static String djG(String param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ru.JJddW J
      // 003: ldc2_w 16449451479
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 00b: astore 3
      // 00c: aload 0
      // 00d: aload 3
      // 00e: ifnull 03c
      // 011: ifnull 034
      // 014: goto 01b
      // 017: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01a: athrow
      // 01b: aload 0
      // 01c: aload 3
      // 01d: ifnull 03c
      // 020: goto 027
      // 023: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 026: athrow
      // 027: invokevirtual java/lang/String.isEmpty ()Z
      // 02a: ifeq 03d
      // 02d: goto 034
      // 030: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 033: athrow
      // 034: aload 0
      // 035: goto 03c
      // 038: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03b: athrow
      // 03c: areturn
      // 03d: new java/lang/StringBuilder
      // 040: dup
      // 041: aload 0
      // 042: invokevirtual java/lang/String.length ()I
      // 045: invokespecial java/lang/StringBuilder.<init> (I)V
      // 048: astore 4
      // 04a: bipush 0
      // 04b: istore 5
      // 04d: iload 5
      // 04f: aload 0
      // 050: invokevirtual java/lang/String.length ()I
      // 053: if_icmpge 092
      // 056: aload 0
      // 057: iload 5
      // 059: invokevirtual java/lang/String.charAt (I)C
      // 05c: istore 6
      // 05e: getstatic sixtwo/ru.sRJBt Ljava/util/Map;
      // 061: iload 6
      // 063: invokestatic java/lang/Character.valueOf (C)Ljava/lang/Character;
      // 066: iload 6
      // 068: invokestatic java/lang/Character.valueOf (C)Ljava/lang/Character;
      // 06b: invokeinterface java/util/Map.getOrDefault (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 070: checkcast java/lang/Character
      // 073: invokevirtual java/lang/Character.charValue ()C
      // 076: istore 6
      // 078: aload 4
      // 07a: iload 6
      // 07c: invokevirtual java/lang/StringBuilder.append (C)Ljava/lang/StringBuilder;
      // 07f: aload 3
      // 080: ifnull 094
      // 083: pop
      // 084: iinc 5 1
      // 087: aload 3
      // 088: ifnonnull 04d
      // 08b: goto 092
      // 08e: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 091: athrow
      // 092: aload 4
      // 094: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // 097: astore 5
      // 099: aload 5
      // 09b: invokestatic sixtwo/ru.djI (Ljava/lang/String;)Z
      // 09e: istore 6
      // 0a0: iload 6
      // 0a2: ifne 0ac
      // 0a5: aload 5
      // 0a7: areturn
      // 0a8: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ab: athrow
      // 0ac: new java/lang/StringBuilder
      // 0af: dup
      // 0b0: aload 5
      // 0b2: invokevirtual java/lang/String.length ()I
      // 0b5: invokespecial java/lang/StringBuilder.<init> (I)V
      // 0b8: astore 7
      // 0ba: bipush 0
      // 0bb: istore 8
      // 0bd: iload 8
      // 0bf: aload 5
      // 0c1: invokevirtual java/lang/String.length ()I
      // 0c4: if_icmpge 104
      // 0c7: aload 5
      // 0c9: iload 8
      // 0cb: invokevirtual java/lang/String.charAt (I)C
      // 0ce: istore 9
      // 0d0: getstatic sixtwo/ru.VkWRj Ljava/util/Map;
      // 0d3: iload 9
      // 0d5: invokestatic java/lang/Character.valueOf (C)Ljava/lang/Character;
      // 0d8: iload 9
      // 0da: invokestatic java/lang/Character.valueOf (C)Ljava/lang/Character;
      // 0dd: invokeinterface java/util/Map.getOrDefault (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0e2: checkcast java/lang/Character
      // 0e5: invokevirtual java/lang/Character.charValue ()C
      // 0e8: istore 9
      // 0ea: aload 7
      // 0ec: iload 9
      // 0ee: invokevirtual java/lang/StringBuilder.append (C)Ljava/lang/StringBuilder;
      // 0f1: aload 3
      // 0f2: ifnull 106
      // 0f5: pop
      // 0f6: iinc 8 1
      // 0f9: aload 3
      // 0fa: ifnonnull 0bd
      // 0fd: goto 104
      // 100: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 103: athrow
      // 104: aload 7
      // 106: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // 109: areturn
   }

   public static String djF(String param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ru.JJddW J
      // 03: ldc2_w 16169366810056
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 3c
      // 11: ifnull 34
      // 14: goto 1b
      // 17: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aload 0
      // 1c: aload 3
      // 1d: ifnull 3c
      // 20: goto 27
      // 23: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: invokevirtual java/lang/String.isEmpty ()Z
      // 2a: ifeq 3d
      // 2d: goto 34
      // 30: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: aload 0
      // 35: goto 3c
      // 38: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: areturn
      // 3d: new java/lang/StringBuilder
      // 40: dup
      // 41: aload 0
      // 42: invokevirtual java/lang/String.length ()I
      // 45: invokespecial java/lang/StringBuilder.<init> (I)V
      // 48: astore 4
      // 4a: bipush 0
      // 4b: istore 5
      // 4d: iload 5
      // 4f: aload 0
      // 50: invokevirtual java/lang/String.length ()I
      // 53: if_icmpge 88
      // 56: aload 0
      // 57: iload 5
      // 59: invokevirtual java/lang/String.charAt (I)C
      // 5c: istore 6
      // 5e: aload 4
      // 60: getstatic sixtwo/ru.cxxgt Ljava/util/Map;
      // 63: iload 6
      // 65: invokestatic java/lang/Character.valueOf (C)Ljava/lang/Character;
      // 68: iload 6
      // 6a: invokestatic java/lang/Character.valueOf (C)Ljava/lang/Character;
      // 6d: invokeinterface java/util/Map.getOrDefault (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 72: invokevirtual java/lang/StringBuilder.append (Ljava/lang/Object;)Ljava/lang/StringBuilder;
      // 75: aload 3
      // 76: ifnull 8a
      // 79: pop
      // 7a: iinc 5 1
      // 7d: aload 3
      // 7e: ifnonnull 4d
      // 81: goto 88
      // 84: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: aload 4
      // 8a: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // 8d: areturn
   }

   private static MatchException djL(MatchException var0) {
      return var0;
   }

   private static boolean djI(String param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ru.JJddW J
      // 03: ldc2_w 27353482632088
      // 06: lxor
      // 07: lstore 1
      // 08: bipush 0
      // 09: istore 4
      // 0b: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0e: bipush 0
      // 0f: istore 5
      // 11: astore 3
      // 12: bipush 0
      // 13: istore 6
      // 15: iload 6
      // 17: aload 0
      // 18: invokevirtual java/lang/String.length ()I
      // 1b: if_icmpge 6b
      // 1e: aload 0
      // 1f: iload 6
      // 21: invokevirtual java/lang/String.charAt (I)C
      // 24: istore 7
      // 26: iload 7
      // 28: invokestatic sixtwo/ru.djJ (C)Z
      // 2b: aload 3
      // 2c: ifnull 6d
      // 2f: aload 3
      // 30: ifnull 5e
      // 33: goto 3a
      // 36: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: ifeq 52
      // 3d: goto 44
      // 40: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: iinc 4 1
      // 47: aload 3
      // 48: ifnonnull 64
      // 4b: goto 52
      // 4e: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: iload 7
      // 54: invokestatic sixtwo/ru.djK (C)Z
      // 57: goto 5e
      // 5a: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: ifeq 64
      // 61: iinc 5 1
      // 64: iinc 6 1
      // 67: aload 3
      // 68: ifnonnull 15
      // 6b: iload 4
      // 6d: aload 3
      // 6e: ifnull 85
      // 71: iload 5
      // 73: if_icmplt 88
      // 76: goto 7d
      // 79: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7c: athrow
      // 7d: bipush 1
      // 7e: goto 85
      // 81: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 84: athrow
      // 85: goto 89
      // 88: bipush 0
      // 89: ireturn
   }

   private static boolean djJ(char param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ru.JJddW J
      // 03: ldc2_w 106581961848652
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: iload 0
      // 0d: sipush 27750
      // 10: ldc2_w 1657136016183982084
      // 13: lload 1
      // 14: lxor
      // 15: invokedynamic e (IJ)I bsm=sixtwo/ru.djO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1a: aload 3
      // 1b: ifnull 60
      // 1e: if_icmplt 4b
      // 21: goto 28
      // 24: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: iload 0
      // 29: aload 3
      // 2a: ifnull 92
      // 2d: goto 34
      // 30: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: sipush 3734
      // 37: ldc2_w 745227982149327528
      // 3a: lload 1
      // 3b: lxor
      // 3c: invokedynamic e (IJ)I bsm=sixtwo/ru.djO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 41: if_icmple 91
      // 44: goto 4b
      // 47: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: iload 0
      // 4c: sipush 9554
      // 4f: ldc2_w 8902786375952773398
      // 52: lload 1
      // 53: lxor
      // 54: invokedynamic e (IJ)I bsm=sixtwo/ru.djO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 59: goto 60
      // 5c: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f: athrow
      // 60: aload 3
      // 61: ifnull 8e
      // 64: if_icmplt 95
      // 67: goto 6e
      // 6a: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: iload 0
      // 6f: aload 3
      // 70: ifnull 92
      // 73: goto 7a
      // 76: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: sipush 12907
      // 7d: ldc2_w 1433770424109049404
      // 80: lload 1
      // 81: lxor
      // 82: invokedynamic e (IJ)I bsm=sixtwo/ru.djO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 87: goto 8e
      // 8a: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8d: athrow
      // 8e: if_icmpgt 95
      // 91: bipush 1
      // 92: goto 96
      // 95: bipush 0
      // 96: ireturn
   }

   private static CallSite djO(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("djN".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ru" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static boolean djK(char param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ru.JJddW J
      // 03: ldc2_w 19670145152764
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: iload 0
      // 0d: sipush 12553
      // 10: ldc2_w 5691292282957636848
      // 13: lload 1
      // 14: lxor
      // 15: invokedynamic e (IJ)I bsm=sixtwo/ru.djO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1a: aload 3
      // 1b: ifnull 48
      // 1e: if_icmplt 4f
      // 21: goto 28
      // 24: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: iload 0
      // 29: aload 3
      // 2a: ifnull 4c
      // 2d: goto 34
      // 30: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: sipush 25164
      // 37: ldc2_w 1080740092638853092
      // 3a: lload 1
      // 3b: lxor
      // 3c: invokedynamic e (IJ)I bsm=sixtwo/ru.djO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 41: goto 48
      // 44: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: if_icmpgt 4f
      // 4b: bipush 1
      // 4c: goto 50
      // 4f: bipush 0
      // 50: ireturn
   }

   private static int djN(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = djM(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static boolean djH(String param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ru.JJddW J
      // 03: ldc2_w 80169231379272
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 1c
      // 11: ifnull 2d
      // 14: goto 1b
      // 17: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aload 0
      // 1c: invokevirtual java/lang/String.isEmpty ()Z
      // 1f: aload 3
      // 20: ifnull 34
      // 23: ifeq 33
      // 26: goto 2d
      // 29: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: bipush 0
      // 2e: ireturn
      // 2f: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: bipush 0
      // 34: istore 4
      // 36: iload 4
      // 38: aload 0
      // 39: invokevirtual java/lang/String.length ()I
      // 3c: if_icmpge 72
      // 3f: getstatic sixtwo/ru.sRJBt Ljava/util/Map;
      // 42: aload 0
      // 43: iload 4
      // 45: invokevirtual java/lang/String.charAt (I)C
      // 48: invokestatic java/lang/Character.valueOf (C)Ljava/lang/Character;
      // 4b: invokeinterface java/util/Map.containsKey (Ljava/lang/Object;)Z 2
      // 50: aload 3
      // 51: ifnull 73
      // 54: aload 3
      // 55: ifnull 6a
      // 58: goto 5f
      // 5b: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: ifeq 6b
      // 62: goto 69
      // 65: invokestatic sixtwo/ru.djL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: bipush 1
      // 6a: ireturn
      // 6b: iinc 4 1
      // 6e: aload 3
      // 6f: ifnonnull 36
      // 72: bipush 0
      // 73: ireturn
   }

   private static int djM(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 11900;
      if (TwbYR[var3] == null) {
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
         long var5 = UzssG[var3];
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
         Object[] var9 = (Object[])edNag.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               edNag.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ru", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         TwbYR[var3] = var15;
      }

      return TwbYR[var3];
   }
}
