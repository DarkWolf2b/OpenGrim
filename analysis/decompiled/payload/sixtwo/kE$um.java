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

public class kE$um {
   private class_4587 tlvIh;
   private float dRhrk;
   private float gKIqU;
   private float psCpp;
   private float VhQsG;
   private mG fQOej;
   private static final long pBXuo = gb.aYR(-8472916297095918004L, 6139472451448881577L, MethodHandles.lookup().lookupClass()).a(221273076199079L);
   private static final String[] pRDJI;
   private static final String[] RHXAt;
   private static final Map Igxyv = new HashMap(13);

   kE$um() {
   }

   static {
      long var0 = pBXuo ^ 70041782130979L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[6];
      int var7 = 0;
      String var6 = "wr>\u000e¤*x\u001a\u000bÊ¤?\u0010ä^¶\u0010\u009eê\u009b¨Q\u0017+L\f_\u0080iÃä:Ç qí\u0014©ÍÎ\u009f<\u0084U¹\u001a\u009câa¯Ïdv¦Wv®ÂÓbØ=Á&ò>x°,LêòmæTÒÃâÿ\u001aP´j<\u0003\u0019Ð¢=Éñ`¤\nj¶ãûd\u00ad\u0092\u0092©¸û\u0005/È#E¬Ï½ÅËÙÇ®²¼í¶×Þá¡Ç\u0094æÕãv\u009dk*éõ\u0010\u0011¢\u0085:Õ\u001cÓ\u0095ÃQRµ»WÑå¸\u0016M\u000b\u0095¨u\t#\u0097\u001b®Å'\tòn\u008fæÄÚ\u0012\u0001:\u0019Ñ[ðxÍÁ+8";
      int var8 = "wr>\u000e¤*x\u001a\u000bÊ¤?\u0010ä^¶\u0010\u009eê\u009b¨Q\u0017+L\f_\u0080iÃä:Ç qí\u0014©ÍÎ\u009f<\u0084U¹\u001a\u009câa¯Ïdv¦Wv®ÂÓbØ=Á&ò>x°,LêòmæTÒÃâÿ\u001aP´j<\u0003\u0019Ð¢=Éñ`¤\nj¶ãûd\u00ad\u0092\u0092©¸û\u0005/È#E¬Ï½ÅËÙÇ®²¼í¶×Þá¡Ç\u0094æÕãv\u009dk*éõ\u0010\u0011¢\u0085:Õ\u001cÓ\u0095ÃQRµ»WÑå¸\u0016M\u000b\u0095¨u\t#\u0097\u001b®Å'\tòn\u008fæÄÚ\u0012\u0001:\u0019Ñ[ðxÍÁ+8"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dtk(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     pRDJI = var9;
                     RHXAt = new String[6];
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

                  var6 = "\u001cÁè3v«\u007f@¶\u0083ã¯ðt¶)\u0083ï\u001bWÑDºÓñ\u0016C?6\u0080á\u0017\u0010øA\n\u0082\u0090wu\u001b\u00adö]Ê7Ã\u0018\u0007";
                  var8 = "\u001cÁè3v«\u007f@¶\u0083ã¯ðt¶)\u0083ï\u001bWÑDºÓñ\u0016C?6\u0080á\u0017\u0010øA\n\u0082\u0090wu\u001b\u00adö]Ê7Ã\u0018\u0007"
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
      long var1 = pBXuo ^ 14974157934850L;
      String var10000 = String.valueOf(this.tlvIh);
      float var10001 = this.dRhrk;
      float var10002 = this.gKIqU;
      float var10003 = this.psCpp;
      float var10004 = this.VhQsG;
      String var3 = String.valueOf(this.fQOej);
      float var4 = var10004;
      float var5 = var10003;
      float var6 = var10002;
      float var7 = var10001;
      String var8 = var10000;
      return dtn<"u">(7174, 2564114847879018329L ^ var1)
         + var8
         + dtn<"u">(2139, 6886133951810872071L ^ var1)
         + var7
         + dtn<"u">(12712, 1681531417670687477L ^ var1)
         + var6
         + dtn<"u">(18229, 5208172118582324332L ^ var1)
         + var5
         + dtn<"u">(13314, 2511017433188409180L ^ var1)
         + var4
         + dtn<"u">(16338, 5376162812634010762L ^ var1)
         + var3
         + ")";
   }

   public kE$um dte(float var1) {
      this.dRhrk = var1;
      return this;
   }

   public kE$um dtd(class_4587 var1) {
      this.tlvIh = var1;
      return this;
   }

   public kE$um dtf(float var1) {
      this.gKIqU = var1;
      return this;
   }

   private static String dtk(byte[] var0) {
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

   private static String dtl(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 20096;
      if (RHXAt[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])Igxyv.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Igxyv.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kE$um", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = pRDJI[var5].getBytes("ISO-8859-1");
         RHXAt[var5] = dtk(((Cipher)var4[0]).doFinal(var9));
      }

      return RHXAt[var5];
   }

   public kE$um dtg(float var1) {
      this.psCpp = var1;
      return this;
   }

   private static Object dtm(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dtl(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public kE$um dth(float var1) {
      this.VhQsG = var1;
      return this;
   }

   private static CallSite dtn(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dtm".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kE$um" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public kE$um dti(mG var1) {
      this.fQOej = var1;
      return this;
   }

   public kE dtj() {
      return new kE(this.tlvIh, this.dRhrk, this.gKIqU, this.psCpp, this.VhQsG, this.fQOej);
   }
}
