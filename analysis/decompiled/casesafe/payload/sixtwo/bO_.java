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
import net.minecraft.class_3532;

public class bO extends bR {
   private static final long LgPVz = gb.aYR(7691661973948649615L, -4839454869264544168L, MethodHandles.lookup().lookupClass()).a(256711264222585L);
   private static final String BgLMg;
   private static final long[] KfhLo;
   private static final Integer[] LpqIJ;
   private static final Map ApbQa;

   public bO(cv var1) {
      long var2 = LgPVz ^ 51640608519577L;
      int[] var10002 = new int[NA<"a">(7431, 5519865490079800729L ^ var2)];
      var10002[0] = NA<"a">(16490, 1247329047922802918L ^ var2);
      var10002[1] = NA<"a">(9978, 148952054490293886L ^ var2);
      var10002[2] = NA<"a">(17997, 8930887006577067718L ^ var2);
      var10002[3] = NA<"a">(32347, 362626612476001995L ^ var2);
      var10002[4] = NA<"a">(29767, 6263165268824470724L ^ var2);
      var10002[5] = NA<"a">(26334, 8967194363143366235L ^ var2);
      var10002[NA<"a">(20898, 8853409779044684079L ^ var2)] = NA<"a">(9978, 148952054490293886L ^ var2);
      var10002[NA<"a">(15207, 5541410157912947695L ^ var2)] = NA<"a">(21977, 6096063733748569431L ^ var2);
      var10002[NA<"a">(32664, 6932940310156721951L ^ var2)] = NA<"a">(29767, 6263165268824470724L ^ var2);
      var10002[NA<"a">(11596, 25041787814014406L ^ var2)] = NA<"a">(29152, 3352012572126818673L ^ var2);
      var10002[NA<"a">(6956, 1914240757555026870L ^ var2)] = NA<"a">(3438, 3681088365884394977L ^ var2);
      var10002[NA<"a">(7261, 1375630311179803840L ^ var2)] = NA<"a">(9978, 148952054490293886L ^ var2);
      var10002[NA<"a">(15460, 679096854942088447L ^ var2)] = NA<"a">(18029, 1594565443746039531L ^ var2);
      var10002[NA<"a">(19800, 2925765420987977165L ^ var2)] = NA<"a">(24001, 8026933991824760158L ^ var2);
      var10002[NA<"a">(11414, 1887198360122387458L ^ var2)] = NA<"a">(7465, 4084516130681576885L ^ var2);
      super(var1, mr.clS(var10002));
   }

   static {
      long var11 = LgPVz ^ 70820342341631L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("a\u001bt├Źo\u0002G\u0015".getBytes("ISO-8859-1"));
      String var22 = Nx(var15).intern();
      int var10001 = -1;
      BgLMg = var22;
      ApbQa = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[32];
      int var3 = 0;
      String var4 = "\u007f├Ü├ę┬á├şUo9\u0002┬¬\u000b\u0080A┬á├┤|(├Ĺ70├ó┬ą(┬Ą\u001ci2;\u0004v┬Ż├ťf├╣\u000f\u001f+\u0003g\u000b[┬ż├É├Ö├ÂF\b┬»├ť┬┐8\u0004\u0098\u001b<K┬▓l!>KQ\u0019┬ą┬í├ś?K├ó\u0097n\u0018-┬ŞL1├Ö\u0099i\u0088\u0089├Â\u0089x┬ÂnjD\u008b\u000b\u0088_├┐_I├í┬Â├ś\u0016\u0001├ż\u0010]ikj├Ž┬║\u0096\u009aD{=6\u0016┬▓├ö┬╣├▒├╣;\u0098├×^├ő├╗\u000bTq┬╗H├ë├á├á├çW├ú\u0082├ĘB\u008e HD\u008c┬║├Ç┬┤O\u001c\u0017├çJ\u0086S┬žGK3├Ő\u0085├ë├ö\u0084\u007fSd~`1├ő(F├â├ő&RN.\u0004┬▒\u0098|\u0094\u0095\u0095\u00946┬í├Ĺn┬╗\u001c\ru0├Ł\u0010>┬▓\u008d├×Kd\u0096├ľ\u0092#┬żN(\u008dc├ź\u0014┬│g├Ś├Ĺ4XL├ös\u0019\u0082├üY\u008a\u001bv\u009b\u0015┬╝7\u0005>}b├╗";
      int var5 = "\u007f├Ü├ę┬á├şUo9\u0002┬¬\u000b\u0080A┬á├┤|(├Ĺ70├ó┬ą(┬Ą\u001ci2;\u0004v┬Ż├ťf├╣\u000f\u001f+\u0003g\u000b[┬ż├É├Ö├ÂF\b┬»├ť┬┐8\u0004\u0098\u001b<K┬▓l!>KQ\u0019┬ą┬í├ś?K├ó\u0097n\u0018-┬ŞL1├Ö\u0099i\u0088\u0089├Â\u0089x┬ÂnjD\u008b\u000b\u0088_├┐_I├í┬Â├ś\u0016\u0001├ż\u0010]ikj├Ž┬║\u0096\u009aD{=6\u0016┬▓├ö┬╣├▒├╣;\u0098├×^├ő├╗\u000bTq┬╗H├ë├á├á├çW├ú\u0082├ĘB\u008e HD\u008c┬║├Ç┬┤O\u001c\u0017├çJ\u0086S┬žGK3├Ő\u0085├ë├ö\u0084\u007fSd~`1├ő(F├â├ő&RN.\u0004┬▒\u0098|\u0094\u0095\u0095\u00946┬í├Ĺn┬╗\u001c\ru0├Ł\u0010>┬▓\u008d├×Kd\u0096├ľ\u0092#┬żN(\u008dc├ź\u0014┬│g├Ś├Ĺ4XL├ös\u0019\u0082├üY\u008a\u001bv\u009b\u0015┬╝7\u0005>}b├╗"
         .length();
      byte var2 = 0;

      label29:
      while (true) {
         var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var18 = var6;
         var10001 = var3++;
         long var24 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var27 = -1;

         while (true) {
            long var8 = var24;
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
            long var29 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var27) {
               case 0:
                  var18[var10001] = var29;
                  if (var2 >= var5) {
                     KfhLo = var6;
                     LpqIJ = new Integer[32];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "├Á\n+rm\u0011├ö├â├×:C┬ú├Ä┬ž├á^";
                  var5 = "├Á\n+rm\u0011├ö├â├×:C┬ú├Ä┬ž├á^".length();
                  var2 = 0;
            }

            byte var21 = var2;
            var2 += 8;
            var7 = var4.substring(var21, var2).getBytes("ISO-8859-1");
            var18 = var6;
            var10001 = var3++;
            var24 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var27 = 0;
         }
      }
   }

   @Override
   public boolean MH() {
      ff var1 = rD.dlJ().aZx(ff.class);
      return var1.bag();
   }

   private static CallSite NA(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Nz".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bO" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @Override
   public void MG(lC var1, ii var2) {
      long var3 = LgPVz ^ 27267635441408L;
      ff var5 = rD.dlJ().aZx(ff.class);
      long var6 = var5.aIE().cpF();
      int var8 = (int)class_3532.method_53062(var5.aIH() - var6, 0L, var5.aIH());
      int var9 = jf.bBb(Math.max(var5.aIH(), jf.bBb(var5.aIw().UU())));
      String var10001 = BgLMg;
      int[] var10003 = new int[NA<"a">(28552, 7052217331692680578L ^ var3)];
      var10003[0] = NA<"a">(8372, 2658816227174873775L ^ var3);
      var10003[1] = NA<"a">(26837, 8103747080350184158L ^ var3);
      var10003[2] = NA<"a">(4347, 5898226890099427L ^ var3);
      var10003[3] = NA<"a">(21703, 4579240061259419335L ^ var3);
      var10003[4] = NA<"a">(32552, 2954515278093428007L ^ var3);
      var10003[5] = NA<"a">(13069, 7080846345172805900L ^ var3);
      var10003[NA<"a">(23016, 3552697949253010406L ^ var3)] = NA<"a">(9978, 148927894384311527L ^ var3);
      var10003[NA<"a">(26906, 259498862811984650L ^ var3)] = NA<"a">(26609, 4197479387671051752L ^ var3);
      this.NJ(var10001, var8, var10003, mG.cnP(185.0F, 28.0F, 28.0F), false, var9);
      super.MG(var1, var2);
   }

   private static String Nx(byte[] var0) {
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

   private static int Nz(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Ny(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int Ny(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 30931;
      if (LpqIJ[var3] == null) {
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
         long var5 = KfhLo[var3];
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
         Object[] var9 = (Object[])ApbQa.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ApbQa.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bO", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         LpqIJ[var3] = var15;
      }

      return LpqIJ[var3];
   }
}
