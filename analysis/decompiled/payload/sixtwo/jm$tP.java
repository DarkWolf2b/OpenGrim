package sixtwo;

import com.sun.jna.Structure;
import com.sun.jna.platform.win32.WinDef.DWORD;
import com.sun.jna.platform.win32.WinDef.HRGN;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class jm$tP extends Structure {
   public DWORD rBxXl;
   public boolean sYiMT;
   public HRGN SXjPG;
   public boolean frouI;
   private static final long tYlcO = gb.aYR(-6724455151601404325L, -8063788099410307124L, MethodHandles.lookup().lookupClass()).a(155342238550707L);
   private static final String[] qUETb;
   private static final String[] uyTHy;
   private static final Map MFlcM = new HashMap(13);

   static {
      long var0 = tYlcO ^ 4342858730166L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[4];
      int var7 = 0;
      String var6 = "þ\u0084×$|flßç-\t×8W)@\u0010\u009aè\u0011r\u0003-\u0083-¹m&ÚcÇ£Ë";
      int var8 = "þ\u0084×$|flßç-\t×8W)@\u0010\u009aè\u0011r\u0003-\u0083-¹m&ÚcÇ£Ë".length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dpO(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     qUETb = var9;
                     uyTHy = new String[4];
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

                  var6 = "\u0096á\u0098m ~\u0002¬Ñy^Ôst\u000f \u001fy\n´Þª£-h{\u0015ÚÌÄ9æë«gÁ\u0000Ì9\u0012\u0018\u0015ÿÓÀo¢~\u0097ý®\bÍ¼~ÝlSdOù\u0080\u0005Ôµ";
                  var8 = "\u0096á\u0098m ~\u0002¬Ñy^Ôst\u000f \u001fy\n´Þª£-h{\u0015ÚÌÄ9æë«gÁ\u0000Ì9\u0012\u0018\u0015ÿÓÀo¢~\u0097ý®\bÍ¼~ÝlSdOù\u0080\u0005Ôµ"
                     .length();
                  var5 = '(';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   protected List<String> getFieldOrder() {
      long var1 = tYlcO ^ 28592495824875L;
      return List.of(
         dpR<"m">(12847, 6855999436024381081L ^ var1),
         dpR<"m">(1380, 5813794478203423187L ^ var1),
         dpR<"m">(2736, 1218103769209259524L ^ var1),
         dpR<"m">(20207, 3314723836189180506L ^ var1)
      );
   }

   private static Object dpQ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = dpP(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite dpR(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dpQ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jm$tP" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String dpO(byte[] var0) {
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

   private static String dpP(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 29803;
      if (uyTHy[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])MFlcM.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               MFlcM.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jm$tP", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = qUETb[var5].getBytes("ISO-8859-1");
         uyTHy[var5] = dpO(((Cipher)var4[0]).doFinal(var9));
      }

      return uyTHy[var5];
   }
}
