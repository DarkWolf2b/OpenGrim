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
import org.joml.Matrix3x2fStack;

public class jR$uc {
   private Matrix3x2fStack MnDqG;
   private float xlwkp;
   private float UNuPf;
   private float gUwlx;
   private float AAVcs;
   private float dIauD;
   private float rssKu;
   private float AnQCx;
   private float hhNPD;
   private boolean cwgvR;
   private mG qFbWj;
   private boolean KGMmK;
   private float udULP;
   private static final long sOzSQ = gb.aYR(4596910150742697019L, -2553292493622331109L, MethodHandles.lookup().lookupClass()).a(205466779026466L);
   private static final String[] MCHMT;
   private static final String[] ohPkh;
   private static final Map juLjc = new HashMap(13);

   jR$uc() {
   }

   static {
      long var0 = sOzSQ ^ 57051395425030L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[11];
      int var7 = 0;
      String var6 = ",\u0017á \u0016?Ù(¢¯Ô\u000e\u007fT$0%cÃ\u0019\u0085ì«¥ÔêûSBé\u0002J(<Pã!\u0084\u0099Ì,ÄºÚ\u001a¬r\u0099#\u0083Ë¦gý³ï\u0002Cä\u000fÓrîyÏ]\u0016\u000f,è²$3 ÿÇÆÌú$Q2¯A\u0018ï\u008c\u0007z¶T\u008bS\",bfÙ¦ÏÞ9Ý¸rã\u0010\"d>K\u0002{,hq\t¨v\u001f\u008aü\u0099\u0010\u0090ßÜsÀ'§µf¥S\u000báö?m Ô\u008e\u0097\u000föº/MÛC¸Ê\u0094\u0092yºgDäc¼]Òò\u0094ô.\u009aÁ®,ÈP%«\u0004u2I\u0085°\u0084r-I¨\u000bx$1X9E\u0082ðØEÆË}b\u000b\f\u0091Ö\tm\u008d\u001e§Ìâ\u0003\frö¬\u0086¶\u000fK\u0091\u009b·æAC£C·W{\u0086\u0095g@\u0083/6Ð£ÇiKÝ\u0087¥\u0095¶&\u0000\u001d)\u0018\u0098àsÕ²hz\u0018Ìªæ¶ÞØ\u009eÈ6\u0003ê½[+æ© ð#Êª¥W\u009ce¤\u0082\u001b'À3\u0092©iû-Z'Í3\u0088oL\u001dsV\u0088s\u001e";
      int var8 = ",\u0017á \u0016?Ù(¢¯Ô\u000e\u007fT$0%cÃ\u0019\u0085ì«¥ÔêûSBé\u0002J(<Pã!\u0084\u0099Ì,ÄºÚ\u001a¬r\u0099#\u0083Ë¦gý³ï\u0002Cä\u000fÓrîyÏ]\u0016\u000f,è²$3 ÿÇÆÌú$Q2¯A\u0018ï\u008c\u0007z¶T\u008bS\",bfÙ¦ÏÞ9Ý¸rã\u0010\"d>K\u0002{,hq\t¨v\u001f\u008aü\u0099\u0010\u0090ßÜsÀ'§µf¥S\u000báö?m Ô\u008e\u0097\u000föº/MÛC¸Ê\u0094\u0092yºgDäc¼]Òò\u0094ô.\u009aÁ®,ÈP%«\u0004u2I\u0085°\u0084r-I¨\u000bx$1X9E\u0082ðØEÆË}b\u000b\f\u0091Ö\tm\u008d\u001e§Ìâ\u0003\frö¬\u0086¶\u000fK\u0091\u009b·æAC£C·W{\u0086\u0095g@\u0083/6Ð£ÇiKÝ\u0087¥\u0095¶&\u0000\u001d)\u0018\u0098àsÕ²hz\u0018Ìªæ¶ÞØ\u009eÈ6\u0003ê½[+æ© ð#Êª¥W\u009ce¤\u0082\u001b'À3\u0092©iû-Z'Í3\u0088oL\u001dsV\u0088s\u001e"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = drN(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     MCHMT = var9;
                     ohPkh = new String[11];
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = "s\u0016z\u008a\u008d\u001c\u0098ñ\u0003Ku:`Ù¯çzÀ\u0000\u0089!ã\u0095¥åï9\u0017\ny(ú ü\u0089ª?÷¯$Ä·ûmu\u009dtód´-\u0082Zdÿ\u0004¥NßÞ\\ÐÞMÃ";
                  var8 = "s\u0016z\u008a\u008d\u001c\u0098ñ\u0003Ku:`Ù¯çzÀ\u0000\u0089!ã\u0095¥åï9\u0017\ny(ú ü\u0089ª?÷¯$Ä·ûmu\u009dtód´-\u0082Zdÿ\u0004¥NßÞ\\ÐÞMÃ"
                     .length();
                  var5 = ' ';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public String toString() {
      long var1 = sOzSQ ^ 87530883116816L;
      String var10000 = String.valueOf(this.MnDqG);
      float var10001 = this.xlwkp;
      float var10002 = this.UNuPf;
      float var10003 = this.gUwlx;
      float var10004 = this.AAVcs;
      float var10005 = this.dIauD;
      float var10006 = this.rssKu;
      float var10007 = this.AnQCx;
      float var10008 = this.hhNPD;
      String var10009 = String.valueOf(this.qFbWj);
      float var3 = this.udULP;
      String var4 = var10009;
      float var5 = var10008;
      float var6 = var10007;
      float var7 = var10006;
      float var8 = var10005;
      float var9 = var10004;
      float var10 = var10003;
      float var11 = var10002;
      float var12 = var10001;
      String var13 = var10000;
      return drQ<"w">(28970, 3461069496787540191L ^ var1)
         + var13
         + drQ<"w">(216, 5340623262844250415L ^ var1)
         + var12
         + drQ<"w">(11941, 4271719985648387925L ^ var1)
         + var11
         + drQ<"w">(169, 4422706281700452690L ^ var1)
         + var10
         + drQ<"w">(14509, 1358405590159446364L ^ var1)
         + var9
         + drQ<"w">(29911, 974681227210333473L ^ var1)
         + var8
         + drQ<"w">(25664, 8615850022914297267L ^ var1)
         + var7
         + drQ<"w">(17920, 89890993952010234L ^ var1)
         + var6
         + drQ<"w">(12830, 5915646230691765226L ^ var1)
         + var5
         + drQ<"w">(28167, 8222197368125130750L ^ var1)
         + var4
         + drQ<"w">(23554, 8282844993082045936L ^ var1)
         + var3
         + ")";
   }

   public jR$uc drF(float var1) {
      this.dIauD = var1;
      return this;
   }

   private static MatchException drM(MatchException var0) {
      return var0;
   }

   private static CallSite drQ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("drP".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jR$uc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String drN(byte[] var0) {
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

   private static String drO(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 24564;
      if (ohPkh[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])juLjc.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               juLjc.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jR$uc", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = MCHMT[var5].getBytes("ISO-8859-1");
         ohPkh[var5] = drN(((Cipher)var4[0]).doFinal(var9));
      }

      return ohPkh[var5];
   }

   private static Object drP(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = drO(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public jR$uc drI(float var1) {
      this.hhNPD = var1;
      return this;
   }

   public jR drL() {
      long var1 = sOzSQ ^ 25929262516932L;
      String var10000 = jO.bKy();
      mG var4 = this.qFbWj;
      String var3 = var10000;

      label25: {
         label24: {
            try {
               var7 = this;
               if (var3 == null) {
                  break label25;
               }

               if (this.cwgvR) {
                  break label24;
               }
            } catch (MatchException var6) {
               throw drM(var6);
            }

            var4 = jR.bLN();
         }

         var7 = this;
      }

      float var5 = var7.udULP;
      if (!this.KGMmK) {
         var5 = jR.bLO();
      }

      return new jR(this.MnDqG, this.xlwkp, this.UNuPf, this.gUwlx, this.AAVcs, this.dIauD, this.rssKu, this.AnQCx, this.hhNPD, var4, var5);
   }

   public jR$uc drJ(mG var1) {
      this.qFbWj = var1;
      this.cwgvR = true;
      return this;
   }

   public jR$uc drH(float var1) {
      this.AnQCx = var1;
      return this;
   }

   public jR$uc drG(float var1) {
      this.rssKu = var1;
      return this;
   }

   public jR$uc drK(float var1) {
      this.udULP = var1;
      this.KGMmK = true;
      return this;
   }

   public jR$uc drD(float var1) {
      this.gUwlx = var1;
      return this;
   }

   public jR$uc drE(float var1) {
      this.AAVcs = var1;
      return this;
   }

   public jR$uc drA(Matrix3x2fStack var1) {
      this.MnDqG = var1;
      return this;
   }

   public jR$uc drB(float var1) {
      this.xlwkp = var1;
      return this;
   }

   public jR$uc drC(float var1) {
      this.UNuPf = var1;
      return this;
   }
}
