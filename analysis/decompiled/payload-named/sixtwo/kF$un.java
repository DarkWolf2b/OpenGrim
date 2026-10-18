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
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Vec3d;

public class kF$un {
   private MatrixStack tvbZE;
   private Vec3d KONNl;
   private Vec3d EFiQK;
   private mG FeAsi;
   private boolean YVlcU;
   private float zDZwd;
   private static final long kmaNw = gb.aYR(8609377615685431963L, 6536453900990879170L, MethodHandles.lookup().lookupClass()).a(147037262473897L);
   private static final String[] pkrlR;
   private static final String[] oAHiB;
   private static final Map ebMsx = new HashMap(13);

   kF$un() {
   }

   static {
      long var0 = kmaNw ^ 136329274872285L;
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
      String var6 = "ÿ<\u0010Í%ý3ï~K\u0091`¢XÝ\u001f(\f\u0094\u0094ø\u0080}g3\u009cçÏfÎ\u0015¿\u0004ï\"\u008b\u001bW\få\u0086\u0016ÿ\u0002\u0099aãÉIòÂlù\u008féÇ¶\u0010\u008cof¾ÜM©|$¢\u0098\nf¿nQ";
      int var8 = "ÿ<\u0010Í%ý3ï~K\u0091`¢XÝ\u001f(\f\u0094\u0094ø\u0080}g3\u009cçÏfÎ\u0015¿\u0004ï\"\u008b\u001bW\få\u0086\u0016ÿ\u0002\u0099aãÉIòÂlù\u008féÇ¶\u0010\u008cof¾ÜM©|$¢\u0098\nf¿nQ"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dtu(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     pkrlR = var9;
                     oAHiB = new String[5];
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

                  var6 = "P`\t·\u0088B@\u0000\u007f\u009eììðW®\u0080\u0001Öf\u00865\u008b2l1Ë«D-\\àW,2¹ìy\u009c³Å7e´N@Øò/ÂñÞðãøÁ¨Åp\u0016Ãò\u0012÷åq¯\u00ad¥Ûv=ß\u000f[Qº|ra\u008eLî|QpL`\u0019òèuC\u0014û´\u0095\u0018Ã¢S)p¨®Üµ\u000bOhMYC\u008eê\u000ePä\r\u000bG\u0080";
                  var8 = "P`\t·\u0088B@\u0000\u007f\u009eììðW®\u0080\u0001Öf\u00865\u008b2l1Ë«D-\\àW,2¹ìy\u009c³Å7e´N@Øò/ÂñÞðãøÁ¨Åp\u0016Ãò\u0012÷åq¯\u00ad¥Ûv=ß\u000f[Qº|ra\u008eLî|QpL`\u0019òèuC\u0014û´\u0095\u0018Ã¢S)p¨®Üµ\u000bOhMYC\u008eê\u000ePä\r\u000bG\u0080"
                     .length();
                  var5 = '`';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public String toString() {
      long var1 = kmaNw ^ 32275755790419L;
      String var10000 = String.valueOf(this.tvbZE);
      String var10001 = String.valueOf(this.KONNl);
      String var10002 = String.valueOf(this.EFiQK);
      String var10003 = String.valueOf(this.FeAsi);
      float var3 = this.zDZwd;
      String var4 = var10003;
      String var5 = var10002;
      String var6 = var10001;
      String var7 = var10000;
      return dtx<"x">(244, 8461607776198661084L ^ var1)
         + var7
         + dtx<"x">(18475, 81926664136350464L ^ var1)
         + var6
         + dtx<"x">(16496, 6136581377843417945L ^ var1)
         + var5
         + dtx<"x">(15406, 8258781639159000833L ^ var1)
         + var4
         + dtx<"x">(16743, 2648069749539263053L ^ var1)
         + var3
         + ")";
   }

   public kF$un dtp(Vec3d var1) {
      this.KONNl = var1;
      return this;
   }

   public kF$un dtr(mG var1) {
      this.FeAsi = var1;
      return this;
   }

   private static Object dtw(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dtv(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public kF$un dtq(Vec3d var1) {
      this.EFiQK = var1;
      return this;
   }

   public kF$un dto(MatrixStack var1) {
      this.tvbZE = var1;
      return this;
   }

   private static String dtu(byte[] var0) {
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

   private static String dtv(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 20103;
      if (oAHiB[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])ebMsx.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ebMsx.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kF$un", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = pkrlR[var5].getBytes("ISO-8859-1");
         oAHiB[var5] = dtu(((Cipher)var4[0]).doFinal(var9));
      }

      return oAHiB[var5];
   }

   private static CallSite dtx(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dtw".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kF$un" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public kF dtt() {
      long var1 = kmaNw ^ 2245018456142L;
      float var3 = this.zDZwd;
      if (!this.YVlcU) {
         var3 = kF.bTo();
      }

      return new kF(this.tvbZE, this.KONNl, this.EFiQK, this.FeAsi, var3);
   }

   public kF$un dts(float var1) {
      this.zDZwd = var1;
      this.YVlcU = true;
      return this;
   }
}
