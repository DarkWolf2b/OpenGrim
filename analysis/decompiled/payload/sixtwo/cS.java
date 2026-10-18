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

public class cS extends gg {
   private final cv PDKAy;
   private final cw mjpkN;
   private final cw OHlmP;
   private final cG Ccjvo;
   private final cC BdlMa;
   private static final long NdBwP = gb.aYR(-3814145772088858924L, 6326010710559167094L, MethodHandles.lookup().lookupClass()).a(251371214361616L);
   private static final long[] ksYsi;
   private static final Integer[] ztFIW;
   private static final Map MaoMC = new HashMap(13);

   public cS() {
      long var1 = NdBwP ^ 125989171087881L;
      super(gf.aZL(Zh<"g">(6729, 3096924784091491991L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[Zh<"g">(23537, 5557175543041929019L ^ var1)];
      var10004[0] = Zh<"g">(8352, 2598064544593531980L ^ var1);
      var10004[1] = Zh<"g">(13938, 4119004460585796276L ^ var1);
      var10004[2] = Zh<"g">(5997, 7658809328723551164L ^ var1);
      var10004[3] = Zh<"g">(24198, 5188623652022921836L ^ var1);
      var10004[4] = Zh<"g">(2773, 307813577232907792L ^ var1);
      var10004[5] = Zh<"g">(26498, 7267992432768422763L ^ var1);
      var10004[Zh<"g">(29691, 62588446323181351L ^ var1)] = Zh<"g">(23718, 8489229230061856894L ^ var1);
      var10004[Zh<"g">(6750, 7878105364733488784L ^ var1)] = Zh<"g">(19238, 3761103140441538555L ^ var1);
      this.PDKAy = new cv(this, mr.clS(var10004));
      this.mjpkN = new cw(
            this.PDKAy,
            mr.clS(
               new int[]{
                  Zh<"g">(19131, 6200046140172222045L ^ var1),
                  Zh<"g">(26494, 1971051432321979286L ^ var1),
                  Zh<"g">(4558, 2609549553526531338L ^ var1),
                  Zh<"g">(24734, 4003978856841024593L ^ var1)
               }
            )
         )
         .Tz();
      cv var10003 = this.PDKAy;
      var10004 = new int[Zh<"g">(30316, 1506698623755256495L ^ var1)];
      var10004[0] = Zh<"g">(32410, 5982087041272384125L ^ var1);
      var10004[1] = Zh<"g">(23545, 6936205067990085398L ^ var1);
      var10004[2] = Zh<"g">(3808, 6971967516774234679L ^ var1);
      var10004[3] = Zh<"g">(19370, 7783292221562994500L ^ var1);
      var10004[4] = Zh<"g">(25847, 5431668942762741788L ^ var1);
      var10004[5] = Zh<"g">(2670, 41131466838343340L ^ var1);
      var10004[Zh<"g">(15213, 7928838350990626732L ^ var1)] = Zh<"g">(1499, 3897754303161594166L ^ var1);
      this.OHlmP = new cw(var10003, mr.clS(var10004));
      this.Ccjvo = new cG(
            this,
            mr.clS(
               new int[]{
                  Zh<"g">(4976, 6341425785371912096L ^ var1),
                  Zh<"g">(23718, 8489229230061856894L ^ var1),
                  Zh<"g">(18965, 4370530564864360135L ^ var1),
                  Zh<"g">(23718, 8489229230061856894L ^ var1),
                  Zh<"g">(23545, 6936205067990085398L ^ var1)
               }
            )
         )
         .Uf(rD.dlM().bjG().bis());
      var10004 = new int[Zh<"g">(31721, 2056340915783962429L ^ var1)];
      var10004[0] = Zh<"g">(27187, 2122016280907357932L ^ var1);
      var10004[1] = Zh<"g">(23545, 6936205067990085398L ^ var1);
      var10004[2] = Zh<"g">(8620, 3189470723592344950L ^ var1);
      var10004[3] = Zh<"g">(27739, 8094521710928140418L ^ var1);
      var10004[4] = Zh<"g">(10206, 8299610299003917086L ^ var1);
      var10004[5] = Zh<"g">(19370, 7783292221562994500L ^ var1);
      var10004[Zh<"g">(15213, 7928838350990626732L ^ var1)] = Zh<"g">(1962, 6514661749461447527L ^ var1);
      var10004[Zh<"g">(30316, 1506698623755256495L ^ var1)] = Zh<"g">(7427, 6086397780802496964L ^ var1);
      var10004[Zh<"g">(13558, 451631384383897635L ^ var1)] = Zh<"g">(29249, 4546446023083230856L ^ var1);
      var10004[Zh<"g">(20177, 5519028748257606154L ^ var1)] = Zh<"g">(19131, 6200046140172222045L ^ var1);
      var10004[Zh<"g">(21660, 9155081913711829066L ^ var1)] = Zh<"g">(14995, 3694061124240100955L ^ var1);
      var10004[Zh<"g">(12130, 891234611913874353L ^ var1)] = Zh<"g">(19370, 7783292221562994500L ^ var1);
      var10004[Zh<"g">(12672, 8666989435488126284L ^ var1)] = Zh<"g">(19370, 7783292221562994500L ^ var1);
      var10004[Zh<"g">(19842, 8993703857410816329L ^ var1)] = Zh<"g">(27739, 8094521710928140418L ^ var1);
      this.BdlMa = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(10.0).VA(5.0);
   }

   static {
      long var0 = NdBwP ^ 35834966713517L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[42];
      int var5 = 0;
      String var6 = "åVÕ\u0085\u0004¾\u009c[î\u00903á!ôÎÖR6Óà\u0084#µ\u0016\u0010\u0080½\u0001\u0099í)o&Ø \u0007\u0007Ã\u0090{ÔÞêY\u008f\u0013?éà|\u009d£\u009efMUïvQ£\u0099\u008dRJÁ9%ó\r'Ñ{2\u008dÃÿí¤Ý!^\u0088\u001f\u000f(Ñup{\u0002\u0091jzÀCy?:Dá¶Mv\u0098\u0089¨\u008d\u000fJý\u0082'\u000eTï\u009fymÆb\u008c\u0016\u0015×\u0018Ó\u0000\u0014\u000fÚ\u0015¬?8R<@¥>Í1\u0017NG~\u009f\u001bz#9a45C\u0016\u0096\u0002\u0004åá\u001eáÖ\u0090¾{B\u009c&\u0086ÉéSãÝC¨!¨\u0099\b\u0093b\u001d?ý.\u009bcï%\u000b\u0014E\u0087É\td;¤0\b`\u0082*\u0003.t?ºÞFÏÅÐ[\u001cÆi\u009fn:o\u0015ÍÇÜ\u009a&-ä\u0083øÄ\u000bà\u007f\u009c*\u000f2û\u0011VËÏT=\u0005Ï¨\u0015ô\u0094NÇÀÐ×2Tm\u0000·¯÷\u001aîÜâËs\u00ad{¶|Ù\u0082r\u0003Õc\u00950\u008cÁ\u0092ù<\u0015.T_\u001b¡û\u008c\u0017s2\u0019?ÍèÓo\u007f1\u0080\u0013\u00ad\nøà{ß©\u001e]¿";
      int var7 = "åVÕ\u0085\u0004¾\u009c[î\u00903á!ôÎÖR6Óà\u0084#µ\u0016\u0010\u0080½\u0001\u0099í)o&Ø \u0007\u0007Ã\u0090{ÔÞêY\u008f\u0013?éà|\u009d£\u009efMUïvQ£\u0099\u008dRJÁ9%ó\r'Ñ{2\u008dÃÿí¤Ý!^\u0088\u001f\u000f(Ñup{\u0002\u0091jzÀCy?:Dá¶Mv\u0098\u0089¨\u008d\u000fJý\u0082'\u000eTï\u009fymÆb\u008c\u0016\u0015×\u0018Ó\u0000\u0014\u000fÚ\u0015¬?8R<@¥>Í1\u0017NG~\u009f\u001bz#9a45C\u0016\u0096\u0002\u0004åá\u001eáÖ\u0090¾{B\u009c&\u0086ÉéSãÝC¨!¨\u0099\b\u0093b\u001d?ý.\u009bcï%\u000b\u0014E\u0087É\td;¤0\b`\u0082*\u0003.t?ºÞFÏÅÐ[\u001cÆi\u009fn:o\u0015ÍÇÜ\u009a&-ä\u0083øÄ\u000bà\u007f\u009c*\u000f2û\u0011VËÏT=\u0005Ï¨\u0015ô\u0094NÇÀÐ×2Tm\u0000·¯÷\u001aîÜâËs\u00ad{¶|Ù\u0082r\u0003Õc\u00950\u008cÁ\u0092ù<\u0015.T_\u001b¡û\u008c\u0017s2\u0019?ÍèÓo\u007f1\u0080\u0013\u00ad\nøà{ß©\u001e]¿"
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
                     ksYsi = var8;
                     ztFIW = new Integer[42];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = ")ó\u0017©Ú\u009e8GZg\u0085=nÎÜ=";
                  var7 = ")ó\u0017©Ú\u009e8GZg\u0085=nÎÜ=".length();
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

   public cC Ze() {
      return this.BdlMa;
   }

   public cw Zc() {
      return this.OHlmP;
   }

   public cw Zb() {
      return this.mjpkN;
   }

   public cG Zd() {
      return this.Ccjvo;
   }

   public cv Za() {
      return this.PDKAy;
   }

   private static int Zf(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 26300;
      if (ztFIW[var3] == null) {
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
         long var5 = ksYsi[var3];
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
         Object[] var9 = (Object[])MaoMC.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               MaoMC.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cS", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ztFIW[var3] = var15;
      }

      return ztFIW[var3];
   }

   private static CallSite Zh(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Zg".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cS" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int Zg(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Zf(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
