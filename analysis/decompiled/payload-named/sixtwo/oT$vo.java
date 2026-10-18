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
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;

public class oT$vo {
   private Hand PQOGG;
   private boolean biIdo;
   private oS iVleL;
   private boolean JbSJu;
   private BlockHitResult dARNZ;
   private boolean qbYSv;
   private oz BzuXr;
   private boolean KKKuN;
   private boolean LMIxH;
   private static final long SYSqh = gb.aYR(2924280231983816464L, -6437644767887385089L, MethodHandles.lookup().lookupClass()).a(190874295948585L);
   private static final String[] vDRMz;
   private static final String[] GQlOv;
   private static final Map cNPgK = new HashMap(13);

   oT$vo() {
   }

   static {
      long var0 = SYSqh ^ 60380632147314L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[5];
      int var7 = 0;
      String var6 = "\u001cÈbä5\u0086\u0000°Ù¾\u0083VÊ\u0097M(£L\u0095\u0085Ø;¯å,øÐý\u0013j9]P0S£÷ÚÀ³&SÕ4¢x~0³½kí\u001c´\u0086!ÜW²Ú½>¿Ñõ¯£G\u001a\u0090a®åÌ*Æí\u0016O\u0013-K`mº> 9ÍÙ\ryÐ!<æ:>\u008aD\f\u0098O\u009a½ù9Ãã\u00158¸¿0óCH5k\\Ä(yã]Ûnö!3\u008b\u008fXp\u008fÛô\u0005\u0098¶\u0080\f<ôBsk\u008cÒ.\n \u0001Tk³#\u0010æ,Î}";
      int var8 = "\u001cÈbä5\u0086\u0000°Ù¾\u0083VÊ\u0097M(£L\u0095\u0085Ø;¯å,øÐý\u0013j9]P0S£÷ÚÀ³&SÕ4¢x~0³½kí\u001c´\u0086!ÜW²Ú½>¿Ñõ¯£G\u001a\u0090a®åÌ*Æí\u0016O\u0013-K`mº> 9ÍÙ\ryÐ!<æ:>\u008aD\f\u0098O\u009a½ù9Ãã\u00158¸¿0óCH5k\\Ä(yã]Ûnö!3\u008b\u008fXp\u008fÛô\u0005\u0098¶\u0080\f<ôBsk\u008cÒ.\n \u0001Tk³#\u0010æ,Î}"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dwQ(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     vDRMz = var9;
                     GQlOv = new String[5];
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

                  var6 = "¤\u0014\u001f\u008a\u009aÆ>õ\u0082\u008a5UËø(\u0018Ï\u000bô¤?\u001bÇHá\u009fpºÐ»ü\u0001 \u001d\u0094\u0019IB\u008c (\u009a[äÃ5»«æ\u0098ù\u0018\u0093Ç2\\^\u0001\u0000ûXðC\u000bZ\u0002Î\u009a=goÓ5Ad0ç\u0019<[÷";
                  var8 = "¤\u0014\u001f\u008a\u009aÆ>õ\u0082\u008a5UËø(\u0018Ï\u000bô¤?\u001bÇHá\u009fpºÐ»ü\u0001 \u001d\u0094\u0019IB\u008c (\u009a[äÃ5»«æ\u0098ù\u0018\u0093Ç2\\^\u0001\u0000ûXðC\u000bZ\u0002Î\u009a=goÓ5Ad0ç\u0019<[÷"
                     .length();
                  var5 = '(';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public String toString() {
      long var1 = SYSqh ^ 121249172641088L;
      String[] var3 = oT.cKT();
      String var10000 = String.valueOf(this.PQOGG);
      String var10001 = String.valueOf(this.iVleL);
      String var10002 = String.valueOf(this.dARNZ);
      String var10003 = String.valueOf(this.BzuXr);
      boolean var4 = this.LMIxH;
      String var5 = var10003;
      String var6 = var10002;
      String var7 = var10001;
      String var8 = var10000;

      try {
         var10000 = dwT<"t">(209, 789746061812458623L ^ var1)
            + var8
            + dwT<"t">(1394, 2481192640350216669L ^ var1)
            + var7
            + dwT<"t">(6117, 5226778460597941065L ^ var1)
            + var6
            + dwT<"t">(16340, 6918436781446847359L ^ var1)
            + var5
            + dwT<"t">(25297, 2113354284014405244L ^ var1)
            + var4
            + ")";
         if (var3 != null) {
            iS.bwK("jiHN4");
         }

         return var10000;
      } catch (MatchException var9) {
         throw dwP(var9);
      }
   }

   public oT$vo dwM(oz var1) {
      this.BzuXr = var1;
      this.qbYSv = true;
      return this;
   }

   public oT dwO() {
      long var1 = SYSqh ^ 51062241733005L;
      oS var3 = this.iVleL;
      if (!this.biIdo) {
         var3 = oT.cKH();
      }

      BlockHitResult var4 = this.dARNZ;
      if (!this.JbSJu) {
         var4 = oT.cKI();
      }

      oz var5 = this.BzuXr;
      if (!this.qbYSv) {
         var5 = oT.cKJ();
      }

      boolean var6 = this.LMIxH;
      if (!this.KKKuN) {
         var6 = oT.cKK();
      }

      return new oT(this.PQOGG, var3, var4, var5, var6);
   }

   private static CallSite dwT(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dwS".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/oT$vo" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public oT$vo dwK(oS var1) {
      this.iVleL = var1;
      this.biIdo = true;
      return this;
   }

   private static String dwQ(byte[] var0) {
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

   private static MatchException dwP(MatchException var0) {
      return var0;
   }

   private static Object dwS(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dwR(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public oT$vo dwL(BlockHitResult var1) {
      this.dARNZ = var1;
      this.JbSJu = true;
      return this;
   }

   private static String dwR(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 310;
      if (GQlOv[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])cNPgK.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               cNPgK.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/oT$vo", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = vDRMz[var5].getBytes("ISO-8859-1");
         GQlOv[var5] = dwQ(((Cipher)var4[0]).doFinal(var9));
      }

      return GQlOv[var5];
   }

   public oT$vo dwJ(Hand var1) {
      this.PQOGG = var1;
      return this;
   }

   public oT$vo dwN(boolean var1) {
      this.LMIxH = var1;
      this.KKKuN = true;
      return this;
   }
}
