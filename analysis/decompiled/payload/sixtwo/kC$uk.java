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
import net.minecraft.class_238;
import net.minecraft.class_4587;

public class kC$uk {
   private class_4587 gragq;
   private class_238 afKwI;
   private mG lBICt;
   private mG SGCdz;
   private mG aSsXs;
   private boolean LTPxD;
   private boolean iSwKG;
   private static final long RLMmo = gb.aYR(5380995125460508726L, 190140227370653064L, MethodHandles.lookup().lookupClass()).a(135128046972812L);
   private static final String[] jhySN;
   private static final String[] tmMeL;
   private static final Map IRwWa = new HashMap(13);

   kC$uk() {
   }

   static {
      long var0 = RLMmo ^ 3883118971753L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[7];
      int var7 = 0;
      String var6 = "\u000eh(\f^}ì\u0017$|±ïGvsÈÏHÝx«uÁ¼)±AF±\u008eÁÎ\u0010JGLI\u008b^\u00ad\u001bê\u008e\u008cU\u001bUGw0Û,7aö§ÄD¾=kðz\u0001ðÛDØýt\u0010Ü^úzÐ\u008dSÙr|>ÊfaJh?\u001d\u009fUÀ:y\u0019ñ£w\u0018ø9\u0093\u008aüÒ\u000e\b@Ó2\u0007ê^èM\u001cµlh\u0088cl<xê²;ëÌ0\u009fµ,È}·\n:\u0094\u0013ÆÁÂ(Î M×¨\u008fÔmý/³w\u008b\u008aô·\u009f§Ï³ð\u0093F?Ã0k#Æ\u0000~4\u0006ñ\u001b\u0093µ\u0001nÇänä\u0085÷\u000b\u009còåÄù\u0095Û'.NÇ¦ÓQ\u0091\u0019)À#±MóÇñZ\u0080t(ÑW\u0098/L.³ÉÖ^¿®¡,;\u0089 \u0080\b1üÍ`\u001ed\u008d";
      int var8 = "\u000eh(\f^}ì\u0017$|±ïGvsÈÏHÝx«uÁ¼)±AF±\u008eÁÎ\u0010JGLI\u008b^\u00ad\u001bê\u008e\u008cU\u001bUGw0Û,7aö§ÄD¾=kðz\u0001ðÛDØýt\u0010Ü^úzÐ\u008dSÙr|>ÊfaJh?\u001d\u009fUÀ:y\u0019ñ£w\u0018ø9\u0093\u008aüÒ\u000e\b@Ó2\u0007ê^èM\u001cµlh\u0088cl<xê²;ëÌ0\u009fµ,È}·\n:\u0094\u0013ÆÁÂ(Î M×¨\u008fÔmý/³w\u008b\u008aô·\u009f§Ï³ð\u0093F?Ã0k#Æ\u0000~4\u0006ñ\u001b\u0093µ\u0001nÇänä\u0085÷\u000b\u009còåÄù\u0095Û'.NÇ¦ÓQ\u0091\u0019)À#±MóÇñZ\u0080t(ÑW\u0098/L.³ÉÖ^¿®¡,;\u0089 \u0080\b1üÍ`\u001ed\u008d"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dsM(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     jhySN = var9;
                     tmMeL = new String[7];
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

                  var6 = "s\u008c_c\u0016v²¼Ë)ôuè\u0013èù¹\u0004µ`ÝËåÀ\u001aõVY®\näæ M¿\u007fL!yX\u0005\u001e%\u001aªª¯»4\f`\u009e\u009dá¯\u009e/Tò\u0087\u0003\u009f\n}þ";
                  var8 = "s\u008c_c\u0016v²¼Ë)ôuè\u0013èù¹\u0004µ`ÝËåÀ\u001aõVY®\näæ M¿\u007fL!yX\u0005\u001e%\u001aªª¯»4\f`\u009e\u009dá¯\u009e/Tò\u0087\u0003\u009f\n}þ"
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
      long var1 = RLMmo ^ 103693952257275L;
      String var10000 = String.valueOf(this.gragq);
      String var10001 = String.valueOf(this.afKwI);
      String var10002 = String.valueOf(this.lBICt);
      String var10003 = String.valueOf(this.SGCdz);
      String var10004 = String.valueOf(this.aSsXs);
      boolean var3 = this.iSwKG;
      boolean var4 = this.LTPxD;
      String var5 = var10004;
      String var6 = var10003;
      String var7 = var10002;
      String var8 = var10001;
      String var9 = var10000;
      return dsP<"z">(26685, 5681476740738327894L ^ var1)
         + var9
         + dsP<"z">(7097, 5373664288726669015L ^ var1)
         + var8
         + dsP<"z">(23573, 5304207324838498682L ^ var1)
         + var7
         + dsP<"z">(12408, 3132362701703871764L ^ var1)
         + var6
         + dsP<"z">(26568, 1174469889083058853L ^ var1)
         + var5
         + dsP<"z">(7654, 6643718916925968524L ^ var1)
         + var4
         + dsP<"z">(18153, 4483969360925657984L ^ var1)
         + var3
         + ")";
   }

   public kC$uk dsI(mG var1) {
      this.aSsXs = var1;
      return this;
   }

   public kC$uk dsG(mG var1) {
      this.lBICt = var1;
      return this;
   }

   public kC dsL() {
      return new kC(this.gragq, this.afKwI, this.lBICt, this.SGCdz, this.aSsXs, this.LTPxD, this.iSwKG);
   }

   public kC$uk dsJ(boolean var1) {
      this.LTPxD = var1;
      return this;
   }

   private static CallSite dsP(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dsO".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kC$uk" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public kC$uk dsF(class_238 var1) {
      this.afKwI = var1;
      return this;
   }

   public kC$uk dsH(mG var1) {
      this.SGCdz = var1;
      return this;
   }

   private static String dsM(byte[] var0) {
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

   public kC$uk dsE(class_4587 var1) {
      this.gragq = var1;
      return this;
   }

   public kC$uk dsK(boolean var1) {
      this.iSwKG = var1;
      return this;
   }

   private static String dsN(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 13969;
      if (tmMeL[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])IRwWa.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               IRwWa.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kC$uk", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = jhySN[var5].getBytes("ISO-8859-1");
         tmMeL[var5] = dsM(((Cipher)var4[0]).doFinal(var9));
      }

      return tmMeL[var5];
   }

   private static Object dsO(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dsN(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
