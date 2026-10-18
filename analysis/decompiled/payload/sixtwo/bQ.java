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

public class bQ extends bR {
   private static final long FbZkr = gb.aYR(-8336207641672936261L, 7816714907251450256L, MethodHandles.lookup().lookupClass()).a(17729333217796L);
   private static final String aSVFs;
   private static final long[] WdacV;
   private static final Integer[] DMaSB;
   private static final Map uoHmV;

   public bQ(cv var1) {
      long var2 = FbZkr ^ 87646008053316L;
      int[] var10002 = new int[NI<"n">(26892, 7308469147196017370L ^ var2)];
      var10002[0] = NI<"n">(16092, 5716306444304555268L ^ var2);
      var10002[1] = NI<"n">(12426, 1939133264147747673L ^ var2);
      var10002[2] = NI<"n">(22619, 8397592215859526549L ^ var2);
      var10002[3] = NI<"n">(26752, 3327561948127349569L ^ var2);
      var10002[4] = NI<"n">(6464, 8948911813618219671L ^ var2);
      var10002[5] = NI<"n">(28144, 3317825213926985260L ^ var2);
      var10002[NI<"n">(17276, 892177025854628016L ^ var2)] = NI<"n">(12426, 1939133264147747673L ^ var2);
      var10002[NI<"n">(32581, 766969465703193755L ^ var2)] = NI<"n">(22619, 8397592215859526549L ^ var2);
      var10002[NI<"n">(10571, 5891450517661551244L ^ var2)] = NI<"n">(26752, 3327561948127349569L ^ var2);
      var10002[NI<"n">(19443, 2941160769759111221L ^ var2)] = NI<"n">(29066, 5789919768146956878L ^ var2);
      var10002[NI<"n">(26144, 7583161625617876468L ^ var2)] = NI<"n">(6318, 8339166704256727911L ^ var2);
      var10002[NI<"n">(859, 1894362873095725185L ^ var2)] = NI<"n">(6464, 8948911813618219671L ^ var2);
      var10002[NI<"n">(706, 489444665424879882L ^ var2)] = NI<"n">(12426, 1939133264147747673L ^ var2);
      var10002[NI<"n">(27984, 4555269722301091465L ^ var2)] = NI<"n">(6464, 8948911813618219671L ^ var2);
      var10002[NI<"n">(3213, 326463109797097294L ^ var2)] = NI<"n">(4849, 2707135395577934122L ^ var2);
      var10002[NI<"n">(25682, 6052159648661882765L ^ var2)] = NI<"n">(9126, 4978270209005322358L ^ var2);
      super(var1, mr.clS(var10002));
   }

   static {
      long var11 = FbZkr ^ 128920977977324L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("\u0001éG´2Ø\bû".getBytes("ISO-8859-1"));
      String var22 = NF(var15).intern();
      int var10001 = -1;
      aSVFs = var22;
      uoHmV = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[31];
      int var3 = 0;
      String var4 = "õGøT»,@îø\u009f\u000fA\u009c/È^bÌ\u0003\u0002I ¼×\u009c©\u001f\u0016ËTOã\u0001ã\u001dì¶\u008eq\u0091®ÀXæi%¹\u009em\u009c\u009aÑ\u0015<\u00817@\u008bb\u0013oF\u009c²\u0012Ti\u0011À<8Ðû6;¶1I¯eËV\u0018q\u0089\u0092¿\u0016!°ÄÓûÿ\u0005öY}xø^ùVã£\u000b»1-±\u0087F¥\u0094K³\u0019ãÀZ4\u008a=ÿ©v\u0018Eù³<LÖ\u0015¨Ì)ÂgÀ\u00907>\u001eÞáLZÔ\u0014\u001fÇîÀ\u000e\u001eÈ\u008b}¶å>µ\u0086Å\u0016H-Á÷\u009dNP\u001b¯k\u001a¢ \u009fÕ:äÕí\u0015\u0093Yw\u0016ä?Ó\u0082\u008e3æ\u0003_{\u001fìH\u0099ã¤ã\\ØÍ:\u0099NÉÕ\r\u009b\u0090\u0006©lX(éÓý\u008a.BÏyD";
      int var5 = "õGøT»,@îø\u009f\u000fA\u009c/È^bÌ\u0003\u0002I ¼×\u009c©\u001f\u0016ËTOã\u0001ã\u001dì¶\u008eq\u0091®ÀXæi%¹\u009em\u009c\u009aÑ\u0015<\u00817@\u008bb\u0013oF\u009c²\u0012Ti\u0011À<8Ðû6;¶1I¯eËV\u0018q\u0089\u0092¿\u0016!°ÄÓûÿ\u0005öY}xø^ùVã£\u000b»1-±\u0087F¥\u0094K³\u0019ãÀZ4\u008a=ÿ©v\u0018Eù³<LÖ\u0015¨Ì)ÂgÀ\u00907>\u001eÞáLZÔ\u0014\u001fÇîÀ\u000e\u001eÈ\u008b}¶å>µ\u0086Å\u0016H-Á÷\u009dNP\u001b¯k\u001a¢ \u009fÕ:äÕí\u0015\u0093Yw\u0016ä?Ó\u0082\u008e3æ\u0003_{\u001fìH\u0099ã¤ã\\ØÍ:\u0099NÉÕ\r\u009b\u0090\u0006©lX(éÓý\u008a.BÏyD"
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
                     WdacV = var6;
                     DMaSB = new Integer[31];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "j\u009aÕS\u0088£\"ë\u0095\u009c\u0004îïZô×";
                  var5 = "j\u009aÕS\u0088£\"ë\u0095\u009c\u0004îïZô×".length();
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
      fp var1 = rD.dlJ().aZx(fp.class);
      return var1.aLL();
   }

   @Override
   public void MG(lC var1, ii var2) {
      long var3 = FbZkr ^ 38547209673503L;
      fp var5 = rD.dlJ().aZx(fp.class);
      int var6 = var5.aMq();
      int var7 = jf.bBb(var6);
      String var10001 = aSVFs;
      int[] var10003 = new int[NI<"n">(7422, 9204637756471994976L ^ var3)];
      var10003[0] = NI<"n">(31326, 1613165994969533642L ^ var3);
      var10003[1] = NI<"n">(26473, 8641769506964050424L ^ var3);
      var10003[2] = NI<"n">(15116, 1586882145389137308L ^ var3);
      var10003[3] = NI<"n">(16266, 8185777744640100620L ^ var3);
      var10003[4] = NI<"n">(13956, 6166200114370002958L ^ var3);
      var10003[5] = NI<"n">(25848, 3775979862132724342L ^ var3);
      var10003[NI<"n">(4872, 6936795302137783699L ^ var3)] = NI<"n">(12426, 1939155702307866114L ^ var3);
      var10003[NI<"n">(6233, 5948341782435851968L ^ var3)] = NI<"n">(22619, 8397613621247749838L ^ var3);
      var10003[NI<"n">(23, 8816334633606346398L ^ var3)] = NI<"n">(26752, 3327512849360395802L ^ var3);
      this.NJ(var10001, var6, var10003, mG.cnP(185.0F, 28.0F, 28.0F), false, var7);
      super.MG(var1, var2);
   }

   private static CallSite NI(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("NH".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bQ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String NF(byte[] var0) {
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

   private static int NG(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 21569;
      if (DMaSB[var3] == null) {
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
         long var5 = WdacV[var3];
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
         Object[] var9 = (Object[])uoHmV.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               uoHmV.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bQ", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         DMaSB[var3] = var15;
      }

      return DMaSB[var3];
   }

   private static int NH(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = NG(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
