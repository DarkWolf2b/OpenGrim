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
import net.minecraft.class_4587;
import org.joml.Matrix3x2fStack;

public class kG$uo {
   private class_4587 qJGym;
   private Matrix3x2fStack xLjKC;
   private float jNWXI;
   private float bxwjq;
   private float AmqHG;
   private float IhFas;
   private float JdXmY;
   private mG yaziN;
   private static final long rIkYq = gb.aYR(1977612314443308192L, 6970347517959504935L, MethodHandles.lookup().lookupClass()).a(60093033629451L);
   private static final String[] HUAzB;
   private static final String[] cKQLl;
   private static final Map BEGkq = new HashMap(13);

   kG$uo() {
   }

   static {
      long var0 = rIkYq ^ 22992440162547L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[8];
      int var7 = 0;
      String var6 = "k)ÍÉé\t¯\u008c\u0085êù9\u000b<\u0080m ?\u0010NÂ4`\\ÿÉ£Ë0H |çjJ*\u0014\u0093¢sÕ\u0002¾à´9íF\u001a\u0010\u0080\rõ_ÊæÌÐí`\u000b_££±óp\u0019Üí\u0005Û\u001bY6V[¸µ\u001a3Új\u001c¾r~®7.ú×\u0095òÊÀ¶Ü/\u001e\u0097ÞÚj2¡S°ñ!ð^\u0093î¢w¹\u0087ñ«\u009bseë&A+Â¯¹Nµæ\u0084æc\u000fý\u0097w6\u00895«ûÄ\u0080²Q\u0001¿õ$\bH\u009a]\u0097ËZ«(f÷Æ,¬\u000bßÐ¡\u008f§r\u00007x,\u0098 \u008cé\u0097\u007f\u0001y\u000eÑzJªý²mª¡!Ç\u0013v°¬\u008f·R7Ê\u0083ß*.0\u0010ó³¸\u001b©(\u008d\u0011\u0001\u0083Ü\u000e\u0080§æ0";
      int var8 = "k)ÍÉé\t¯\u008c\u0085êù9\u000b<\u0080m ?\u0010NÂ4`\\ÿÉ£Ë0H |çjJ*\u0014\u0093¢sÕ\u0002¾à´9íF\u001a\u0010\u0080\rõ_ÊæÌÐí`\u000b_££±óp\u0019Üí\u0005Û\u001bY6V[¸µ\u001a3Új\u001c¾r~®7.ú×\u0095òÊÀ¶Ü/\u001e\u0097ÞÚj2¡S°ñ!ð^\u0093î¢w¹\u0087ñ«\u009bseë&A+Â¯¹Nµæ\u0084æc\u000fý\u0097w6\u00895«ûÄ\u0080²Q\u0001¿õ$\bH\u009a]\u0097ËZ«(f÷Æ,¬\u000bßÐ¡\u008f§r\u00007x,\u0098 \u008cé\u0097\u007f\u0001y\u000eÑzJªý²mª¡!Ç\u0013v°¬\u008f·R7Ê\u0083ß*.0\u0010ó³¸\u001b©(\u008d\u0011\u0001\u0083Ü\u000e\u0080§æ0"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dtH(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     HUAzB = var9;
                     cKQLl = new String[8];
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

                  var6 = "?\u008ag¡)\t\u0012\u0096Î«Ugþ ¦\u0014\u008dù\u0016ñ\u0006\u0099\u0000´2½o.\u00ad\u0080×\u0015 \u0098\nSìa\u0085øG\u0002\u0083\u001b\u009fá©\u008c\u001agì\u000eOc³f¹¤\u0011\u0091#.»×\u008b";
                  var8 = "?\u008ag¡)\t\u0012\u0096Î«Ugþ ¦\u0014\u008dù\u0016ñ\u0006\u0099\u0000´2½o.\u00ad\u0080×\u0015 \u0098\nSìa\u0085øG\u0002\u0083\u001b\u009fá©\u008c\u001agì\u000eOc³f¹¤\u0011\u0091#.»×\u008b"
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
      long var1 = rIkYq ^ 55980574801843L;
      String var10000 = String.valueOf(this.qJGym);
      String var10001 = String.valueOf(this.xLjKC);
      float var10002 = this.jNWXI;
      float var10003 = this.bxwjq;
      float var10004 = this.AmqHG;
      float var10005 = this.IhFas;
      float var10006 = this.JdXmY;
      String var3 = String.valueOf(this.yaziN);
      float var4 = var10006;
      float var5 = var10005;
      float var6 = var10004;
      float var7 = var10003;
      float var8 = var10002;
      String var9 = var10001;
      String var10 = var10000;
      return dtK<"k">(7241, 4532271129722262786L ^ var1)
         + var10
         + dtK<"k">(16824, 684569291895818484L ^ var1)
         + var9
         + dtK<"k">(11976, 2123120245640472453L ^ var1)
         + var8
         + dtK<"k">(12782, 8163486830989949092L ^ var1)
         + var7
         + dtK<"k">(29100, 5610848433946523876L ^ var1)
         + var6
         + dtK<"k">(11552, 5813253837828629615L ^ var1)
         + var5
         + dtK<"k">(31604, 334268296090022458L ^ var1)
         + var4
         + dtK<"k">(24358, 2006166945963562607L ^ var1)
         + var3
         + ")";
   }

   private static String dtH(byte[] var0) {
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

   private static String dtI(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 4786;
      if (cKQLl[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])BEGkq.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               BEGkq.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kG$uo", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = HUAzB[var5].getBytes("ISO-8859-1");
         cKQLl[var5] = dtH(((Cipher)var4[0]).doFinal(var9));
      }

      return cKQLl[var5];
   }

   private static Object dtJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dtI(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite dtK(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dtJ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kG$uo" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public kG$uo dty(class_4587 var1) {
      this.qJGym = var1;
      return this;
   }

   public kG$uo dtE(float var1) {
      this.JdXmY = var1;
      return this;
   }

   public kG$uo dtA(float var1) {
      this.jNWXI = var1;
      return this;
   }

   public kG$uo dtC(float var1) {
      this.AmqHG = var1;
      return this;
   }

   public kG$uo dtz(Matrix3x2fStack var1) {
      this.xLjKC = var1;
      return this;
   }

   public kG$uo dtB(float var1) {
      this.bxwjq = var1;
      return this;
   }

   public kG$uo dtD(float var1) {
      this.IhFas = var1;
      return this;
   }

   public kG$uo dtF(mG var1) {
      this.yaziN = var1;
      return this;
   }

   public kG dtG() {
      return new kG(this.qJGym, this.xLjKC, this.jNWXI, this.bxwjq, this.AmqHG, this.IhFas, this.JdXmY, this.yaziN);
   }
}
