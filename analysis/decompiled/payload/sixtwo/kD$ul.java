package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix4f;

public class kD$ul {
   private Matrix3x2fStack BIHOo;
   private Matrix4f osMsL;
   private float xhEex;
   private float FwSsf;
   private float khQQD;
   private float NUDCj;
   private int[] JPBMb;
   private mG AHAty;
   private static final long WBeUE = gb.aYR(-3793251232913130865L, 156478445699809695L, MethodHandles.lookup().lookupClass()).a(8175038757865L);
   private static final String[] chOmO;
   private static final String[] nlKVM;
   private static final Map kHYmO = new HashMap(13);

   public kD$ul dsU(float var1) {
      this.khQQD = var1;
      return this;
   }

   private static String dta(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 14635;
      if (nlKVM[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])kHYmO.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               kHYmO.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kD$ul", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = chOmO[var5].getBytes("ISO-8859-1");
         nlKVM[var5] = dsZ(((Cipher)var4[0]).doFinal(var9));
      }

      return nlKVM[var5];
   }

   public kD$ul dsQ(Matrix3x2fStack var1) {
      this.BIHOo = var1;
      return this;
   }

   public kD$ul dsS(float var1) {
      this.xhEex = var1;
      return this;
   }

   public kD$ul dsV(float var1) {
      this.NUDCj = var1;
      return this;
   }

   public kD$ul dsR(Matrix4f var1) {
      this.osMsL = var1;
      return this;
   }

   public kD$ul dsW(int[] var1) {
      this.JPBMb = var1;
      return this;
   }

   private static String dsZ(byte[] var0) {
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

   public kD$ul dsT(float var1) {
      this.FwSsf = var1;
      return this;
   }

   private static CallSite dtc(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dtb".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kD$ul" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Object dtb(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dta(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   kD$ul() {
   }

   static {
      long var0 = WBeUE ^ 77229404333602L;
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
      String var6 = "Xb.\u009bÕªü·+\u0092)²=Êýt(A.\u0095k\u0097ic\u0010Í¸\u008fs¾+\u001bÍ0>âùW?Åê\u0010\u0092îäÚ\u009d×<\u0084\u000e´-\u008e«ÂÓô`g7ú½Å*ÉÛ\u001a:½\u0003#Q5®Ù¨\u0013ní{§r\u0004Ì×Ç;w`©\u0087\u009a(]â~,º;}ÃC1Ð\u0011ö \u0088§I)'Ò\u009c\u0004\u0093\u0099v\u0097Ra\u000fã\u007f\u0003Í\\V\f\u0003\u0082fsýå\u0016¯\u0006à\u0019Ú¸¢î§õ\u009aµÂn\u008f5®b\u0010<)vCT«ý°ENõ[¼¯\u009a\u0095\u0010\u009fp\u0019\f·6ú·À\nOöÌ\u008d ý";
      int var8 = "Xb.\u009bÕªü·+\u0092)²=Êýt(A.\u0095k\u0097ic\u0010Í¸\u008fs¾+\u001bÍ0>âùW?Åê\u0010\u0092îäÚ\u009d×<\u0084\u000e´-\u008e«ÂÓô`g7ú½Å*ÉÛ\u001a:½\u0003#Q5®Ù¨\u0013ní{§r\u0004Ì×Ç;w`©\u0087\u009a(]â~,º;}ÃC1Ð\u0011ö \u0088§I)'Ò\u009c\u0004\u0093\u0099v\u0097Ra\u000fã\u007f\u0003Í\\V\f\u0003\u0082fsýå\u0016¯\u0006à\u0019Ú¸¢î§õ\u009aµÂn\u008f5®b\u0010<)vCT«ý°ENõ[¼¯\u009a\u0095\u0010\u009fp\u0019\f·6ú·À\nOöÌ\u008d ý"
         .length();
      char var5 = 24;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dsZ(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     chOmO = var9;
                     nlKVM = new String[8];
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

                  var6 = "\u0098|HÌ3|\u0005Í÷ÃÐ\u000b\u001f\u000fíÛ>X\nèJã\n@`õü5±\u0017\u008c&\u0018\u0012\tuÃ\u0084·n=Êl§O§\u009e\u000b\b¥\u009bzk)ÑDà";
                  var8 = "\u0098|HÌ3|\u0005Í÷ÃÐ\u000b\u001f\u000fíÛ>X\nèJã\n@`õü5±\u0017\u008c&\u0018\u0012\tuÃ\u0084·n=Êl§O§\u009e\u000b\b¥\u009bzk)ÑDà"
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
      long var1 = WBeUE ^ 42757268914730L;
      String var10000 = String.valueOf(this.BIHOo);
      String var10001 = String.valueOf(this.osMsL);
      float var10002 = this.xhEex;
      float var10003 = this.FwSsf;
      float var10004 = this.khQQD;
      float var10005 = this.NUDCj;
      String var10006 = Arrays.toString(this.JPBMb);
      String var3 = String.valueOf(this.AHAty);
      String var4 = var10006;
      float var5 = var10005;
      float var6 = var10004;
      float var7 = var10003;
      float var8 = var10002;
      String var9 = var10001;
      String var10 = var10000;
      return dtc<"l">(13492, 938515977700325188L ^ var1)
         + var10
         + dtc<"l">(2338, 6607917165814581969L ^ var1)
         + var9
         + dtc<"l">(21057, 2388592041395212720L ^ var1)
         + var8
         + dtc<"l">(28030, 941416098892017292L ^ var1)
         + var7
         + dtc<"l">(407, 6166203749267571297L ^ var1)
         + var6
         + dtc<"l">(2620, 6628990288625600968L ^ var1)
         + var5
         + dtc<"l">(3851, 2254282978405649660L ^ var1)
         + var4
         + dtc<"l">(5885, 5906645135195346184L ^ var1)
         + var3
         + ")";
   }

   public kD dsY() {
      return new kD(this.BIHOo, this.osMsL, this.xhEex, this.FwSsf, this.khQQD, this.NUDCj, this.JPBMb, this.AHAty);
   }

   public kD$ul dsX(mG var1) {
      this.AHAty = var1;
      return this;
   }
}
