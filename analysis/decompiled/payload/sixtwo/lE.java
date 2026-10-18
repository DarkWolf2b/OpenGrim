package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CompletionException;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import offline.bootstrap.Diagnostics;

public class lE {
   public static lj joxgd;
   public static lj WTzbi;
   public static lj SVnNc;
   public static lj ePKsc;
   public static lj WxpHL;
   private static String[] KNBTp;
   private static final long aPLuQ = gb.aYR(3516518835491444451L, -1940516360138328761L, MethodHandles.lookup().lookupClass()).a(132598186151220L);
   private static final String[] Pevad;
   private static final String[] hnPxO;
   private static final Map gVXsZ = new HashMap(13);

   static {
      long var0 = aPLuQ ^ 59853210386710L;
      cfu(null);
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
      String var6 = "\u0019Ày\u0007||©SÄ\u00908M\u0099æÁü\"ì\u0099,\u0096fÍ\n\u0010YF¬½Ãò¼¦\u0019¦\u0096N\u0092º\u001b¹\u0010KævþLíj\u0092ÖvÀ\u0018Ûx§º";
      int var8 = "\u0019Ày\u0007||©SÄ\u00908M\u0099æÁü\"ì\u0099,\u0096fÍ\n\u0010YF¬½Ãò¼¦\u0019¦\u0096N\u0092º\u001b¹\u0010KævþLíj\u0092ÖvÀ\u0018Ûx§º".length();
      char var5 = 24;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = cfw(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     Pevad = var9;
                     hnPxO = new String[5];
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

                  var6 = "ÿÿþ}\u00adö\u0097rhÎo\u009f£º\u000b` \u0015b¦W\u008f\"\u0098ì\u0011\u0006lì£¡ØËeÛ\u0083`Ø\u0084jïë>Í\u0010 Äãà";
                  var8 = "ÿÿþ}\u00adö\u0097rhÎo\u009f£º\u000b` \u0015b¦W\u008f\"\u0098ì\u0011\u0006lì£¡ØËeÛ\u0083`Ø\u0084jïë>Í\u0010 Äãà".length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public static void cfu(String[] var0) {
      KNBTp = var0;
   }

   private static String cfx(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 16775;
      if (hnPxO[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])gVXsZ.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               gVXsZ.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/lE", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = Pevad[var5].getBytes("ISO-8859-1");
         hnPxO[var5] = cfw(((Cipher)var4[0]).doFinal(var9));
      }

      return hnPxO[var5];
   }

   private static String cfw(byte[] var0) {
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

   private static Object cfy(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cfx(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static String[] cfv() {
      return KNBTp;
   }

   private static CallSite cfz(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cfy".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lE" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CompletableFuture<lp> cfo(String var0) {
      return new lo().bZY(var0).bZX(var0).bZZ();
   }

   public static CompletableFuture<Void> cfn() {
      long var0 = aPLuQ ^ 76168041566488L;
      CompletableFuture var2 = cfo(cfz<"v">(7357, 3974332036065251315L ^ var0));
      CompletableFuture var3 = cfo(cfz<"v">(989, 4977684333131387024L ^ var0));
      CompletableFuture var4 = cfo(cfz<"v">(20278, 42713809909718137L ^ var0));
      CompletableFuture var5 = cfo(cfz<"v">(13395, 574365791772272415L ^ var0));
      CompletableFuture var6 = cfo(cfz<"v">(4009, 6926262800307346658L ^ var0));
      return CompletableFuture.allOf(var2, var3, var4, var5, var6).thenCompose(var5x -> rD.dlmvG.method_20493(() -> {
         joxgd = cfp((lp)var2.join());
         WTzbi = cfp((lp)var3.join());
         SVnNc = cfp((lp)var4.join());
         ePKsc = cfp((lp)var5.join());
         WxpHL = cfp((lp)var6.join());
      })).exceptionally(var0x -> {
         Throwable var1 = nV.czP(0, var0x);
         boolean var10000 = false;
         Diagnostics.reportProtectedFailure(var1);
         throw new CompletionException(var1);
      });
   }

   private static lj cfp(lp var0) {
      lv var1 = new lv(var0.caj());
      rD.dlmvG.execute(() -> var1.cbk(lt.caW(false)));
      return new lj(var1, var0.cak().bYk(), var0.cak().bYl(), var0.cal(), var0.cam());
   }
}
